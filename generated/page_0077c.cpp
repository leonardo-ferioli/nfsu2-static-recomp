#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_77c(Cpu& c){switch(c.pc){
case 0x77c001:{ // MOV [0x0082bcd0],EAX
wm<4>(c,0x82bcd0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c006;}
case 0x77c006:{ // MOV EAX,[0x007884a0]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7884a0)));
return 0x77c00b;}
case 0x77c00b:{ // MOV [0x0082bcdc],EAX
wm<4>(c,0x82bcdc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c010;}
case 0x77c010:{ // FLD float ptr [0x0082bcdc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c010ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x82bcdc),4,0x0ull,4,10));
return 0x77c016;}
case 0x77c016:{ // MOV dword ptr [0x0082bcd8],EDX
wm<4>(c,0x82bcd8,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77c01c;}
case 0x77c01c:{ // FSUB float ptr [0x0082bcd8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c01cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x82bcd8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77c022;}
case 0x77c022:{ // MOV dword ptr [0x0082bcd4],ECX
wm<4>(c,0x82bcd4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c028;}
case 0x77c028:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c028ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c02a;}
case 0x77c02a:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c02aull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c030;}
case 0x77c030:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c032;}
case 0x77c032:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c035;}
case 0x77c035:{ // JP 0x0077c049
if(r<1>(c,0x202)){return 0x77c049;}
return 0x77c037;}
case 0x77c037:{ // FLD float ptr [0x0082bcdc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c037ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x82bcdc),4,0x0ull,4,10));
return 0x77c03d;}
case 0x77c03d:{ // FADD float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c03dull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77c043;}
case 0x77c043:{ // FSTP float ptr [0x0082bcdc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c043ull));
wm<4>(c,0x82bcdc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77c049;}
case 0x77c049:{ // MOV ECX,dword ptr [0x00788494]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x788494)));
return 0x77c04f;}
case 0x77c04f:{ // PUSH 0x781cd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781cd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c054;}
case 0x77c054:{ // MOV dword ptr [0x0082bce4],ECX
wm<4>(c,0x82bce4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c05a;}
case 0x77c05a:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c05full);
return 0x75c5ed;
return 0x77c05f;}
case 0x77c05f:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c060;}
case 0x77c060:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c061;}
case 0x77c070:{ // PUSH 0x781ce0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ce0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c075;}
case 0x77c075:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c07aull);
return 0x75c5ed;
return 0x77c07a;}
case 0x77c07a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c07b;}
case 0x77c07b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c07c;}
case 0x77c080:{ // PUSH 0x781cf0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781cf0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c085;}
case 0x77c085:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c08aull);
return 0x75c5ed;
return 0x77c08a;}
case 0x77c08a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c08b;}
case 0x77c08b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c08c;}
case 0x77c090:{ // PUSH 0x781d00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c095;}
case 0x77c095:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c09aull);
return 0x75c5ed;
return 0x77c09a;}
case 0x77c09a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c09b;}
case 0x77c09b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c09c;}
case 0x77c0a0:{ // PUSH 0x781d10
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c0a5;}
case 0x77c0a5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c0aaull);
return 0x75c5ed;
return 0x77c0aa;}
case 0x77c0aa:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c0ab;}
case 0x77c0ab:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c0ac;}
case 0x77c0b0:{ // PUSH 0x781d20
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c0b5;}
case 0x77c0b5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c0baull);
return 0x75c5ed;
return 0x77c0ba;}
case 0x77c0ba:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c0bb;}
case 0x77c0bb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c0bc;}
case 0x77c0c0:{ // MOV ECX,0x82c694
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c694ull));
return 0x77c0c5;}
case 0x77c0c5:{ // CALL 0x00468ed0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c0caull);
return 0x468ed0;
return 0x77c0ca;}
case 0x77c0ca:{ // PUSH 0x781bd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781bd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c0cf;}
case 0x77c0cf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c0d4ull);
return 0x75c5ed;
return 0x77c0d4;}
case 0x77c0d4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c0d5;}
case 0x77c0d5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c0d6;}
case 0x77c0e0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77c0e1;}
case 0x77c0e1:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77c0e2;}
case 0x77c0e2:{ // MOV ESI,0x82bf48
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x82bf48ull));
return 0x77c0e7;}
case 0x77c0e7:{ // MOV EDI,0xd
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0xdull));
return 0x77c0ec;}
case 0x77c0ec:{ // LEA ESP,[ESP]
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x77c0f0;}
case 0x77c0f0:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x77c0f2;}
case 0x77c0f2:{ // CALL 0x00458f80
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c0f7ull);
return 0x458f80;
return 0x77c0f7;}
case 0x77c0f7:{ // ADD ESI,0x70
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x70ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x70ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c0fa;}
case 0x77c0fa:{ // DEC EDI
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c0fb;}
case 0x77c0fb:{ // JNZ 0x0077c0f0
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x77c0f0;}
return 0x77c0fd;}
case 0x77c0fd:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c0fe;}
case 0x77c0fe:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c0ff;}
case 0x77c0ff:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c100;}
case 0x77c100:{ // PUSH 0x78c250
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78c250ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c105;}
case 0x77c105:{ // MOV ECX,0x82c710
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c710ull));
return 0x77c10a;}
case 0x77c10a:{ // CALL 0x0060b780
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c10full);
return 0x60b780;
return 0x77c10f;}
case 0x77c10f:{ // PUSH 0x781be0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781be0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c114;}
case 0x77c114:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c119ull);
return 0x75c5ed;
return 0x77c119;}
case 0x77c119:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c11a;}
case 0x77c11a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c11b;}
case 0x77c120:{ // PUSH 0x78c25c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78c25cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c125;}
case 0x77c125:{ // MOV ECX,0x82bea0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82bea0ull));
return 0x77c12a;}
case 0x77c12a:{ // CALL 0x0060b780
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c12full);
return 0x60b780;
return 0x77c12f;}
case 0x77c12f:{ // PUSH 0x781bf0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781bf0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c134;}
case 0x77c134:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c139ull);
return 0x75c5ed;
return 0x77c139;}
case 0x77c139:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c13a;}
case 0x77c13a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c13b;}
case 0x77c140:{ // MOV ECX,0x82c570
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c570ull));
return 0x77c145;}
case 0x77c145:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c14a;}
case 0x77c150:{ // MOV ECX,0x82c578
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c578ull));
return 0x77c155;}
case 0x77c155:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c15a;}
case 0x77c160:{ // MOV ECX,0x82c528
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c528ull));
return 0x77c165;}
case 0x77c165:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c16a;}
case 0x77c170:{ // MOV ECX,0x82c518
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c518ull));
return 0x77c175;}
case 0x77c175:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c17a;}
case 0x77c180:{ // MOV ECX,0x82c6ac
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c6acull));
return 0x77c185;}
case 0x77c185:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c18a;}
case 0x77c190:{ // MOV ECX,0x82c560
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c560ull));
return 0x77c195;}
case 0x77c195:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c19a;}
case 0x77c1a0:{ // MOV ECX,0x82c588
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c588ull));
return 0x77c1a5;}
case 0x77c1a5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c1aa;}
case 0x77c1b0:{ // MOV ECX,0x82c650
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c650ull));
return 0x77c1b5;}
case 0x77c1b5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c1ba;}
case 0x77c1c0:{ // MOV ECX,0x82c5b8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5b8ull));
return 0x77c1c5;}
case 0x77c1c5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c1ca;}
case 0x77c1d0:{ // MOV ECX,0x82c658
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c658ull));
return 0x77c1d5;}
case 0x77c1d5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c1da;}
case 0x77c1e0:{ // MOV ECX,0x82c604
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c604ull));
return 0x77c1e5;}
case 0x77c1e5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c1ea;}
case 0x77c1f0:{ // MOV ECX,0x82c580
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c580ull));
return 0x77c1f5;}
case 0x77c1f5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c1fa;}
case 0x77c200:{ // MOV ECX,0x82c5c0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5c0ull));
return 0x77c205;}
case 0x77c205:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c20a;}
case 0x77c210:{ // MOV ECX,0x82c640
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c640ull));
return 0x77c215;}
case 0x77c215:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c21a;}
case 0x77c220:{ // MOV EAX,[0x0078859c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x78859c)));
return 0x77c225;}
case 0x77c225:{ // MOV EDX,dword ptr [0x00788594]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x788594)));
return 0x77c22b;}
case 0x77c22b:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c22d;}
case 0x77c22d:{ // MOV [0x007f38a8],EAX
wm<4>(c,0x7f38a8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c232;}
case 0x77c232:{ // MOV dword ptr [0x007f38ac],ECX
wm<4>(c,0x7f38ac,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c238;}
case 0x77c238:{ // MOV ECX,dword ptr [0x00788598]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x788598)));
return 0x77c23e;}
case 0x77c23e:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77c240;}
case 0x77c240:{ // MOV dword ptr [0x007f38e0],EDX
wm<4>(c,0x7f38e0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77c246;}
case 0x77c246:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c248;}
case 0x77c248:{ // MOV [0x007f38e4],EAX
wm<4>(c,0x7f38e4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c24d;}
case 0x77c24d:{ // MOV dword ptr [0x007f38e8],ECX
wm<4>(c,0x7f38e8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c253;}
case 0x77c253:{ // MOV CL,0x80
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x80ull));
return 0x77c255;}
case 0x77c255:{ // MOV AL,0x25
wr<1>(c,0x0,eval<Op::COPY,1,1>(0x25ull));
return 0x77c257;}
case 0x77c257:{ // MOV [0x007f3908],AL
wm<1>(c,0x7f3908,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c25c;}
case 0x77c25c:{ // MOV [0x007f3909],AL
wm<1>(c,0x7f3909,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c261;}
case 0x77c261:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c263;}
case 0x77c263:{ // MOV byte ptr [0x007f390e],CL
wm<1>(c,0x7f390e,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c269;}
case 0x77c269:{ // MOV byte ptr [0x007f390f],CL
wm<1>(c,0x7f390f,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c26f;}
case 0x77c26f:{ // MOV byte ptr [0x007f3910],CL
wm<1>(c,0x7f3910,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c275;}
case 0x77c275:{ // MOV byte ptr [0x007f3911],CL
wm<1>(c,0x7f3911,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c27b;}
case 0x77c27b:{ // MOV byte ptr [0x007f3912],CL
wm<1>(c,0x7f3912,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c281;}
case 0x77c281:{ // MOV byte ptr [0x007f3913],CL
wm<1>(c,0x7f3913,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c287;}
case 0x77c287:{ // MOV CL,0x32
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x32ull));
return 0x77c289;}
case 0x77c289:{ // MOV dword ptr [0x007f38b0],0x0
wm<4>(c,0x7f38b0,eval<Op::COPY,4,4>(0x0ull));
return 0x77c293;}
case 0x77c293:{ // MOV dword ptr [0x007f38b4],0x41200000
wm<4>(c,0x7f38b4,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77c29d;}
case 0x77c29d:{ // MOV dword ptr [0x007f38b8],0x40000000
wm<4>(c,0x7f38b8,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77c2a7;}
case 0x77c2a7:{ // MOV dword ptr [0x007f38bc],0x0
wm<4>(c,0x7f38bc,eval<Op::COPY,4,4>(0x0ull));
return 0x77c2b1;}
case 0x77c2b1:{ // MOV dword ptr [0x007f38c0],0x41200000
wm<4>(c,0x7f38c0,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77c2bb;}
case 0x77c2bb:{ // MOV dword ptr [0x007f38c4],0x40000000
wm<4>(c,0x7f38c4,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77c2c5;}
case 0x77c2c5:{ // MOV dword ptr [0x007f38c8],0x0
wm<4>(c,0x7f38c8,eval<Op::COPY,4,4>(0x0ull));
return 0x77c2cf;}
case 0x77c2cf:{ // MOV dword ptr [0x007f38cc],0x0
wm<4>(c,0x7f38cc,eval<Op::COPY,4,4>(0x0ull));
return 0x77c2d9;}
case 0x77c2d9:{ // MOV dword ptr [0x007f38d0],0x0
wm<4>(c,0x7f38d0,eval<Op::COPY,4,4>(0x0ull));
return 0x77c2e3;}
case 0x77c2e3:{ // MOV dword ptr [0x007f38d4],0x0
wm<4>(c,0x7f38d4,eval<Op::COPY,4,4>(0x0ull));
return 0x77c2ed;}
case 0x77c2ed:{ // MOV dword ptr [0x007f38d8],0x0
wm<4>(c,0x7f38d8,eval<Op::COPY,4,4>(0x0ull));
return 0x77c2f7;}
case 0x77c2f7:{ // MOV dword ptr [0x007f38dc],0x0
wm<4>(c,0x7f38dc,eval<Op::COPY,4,4>(0x0ull));
return 0x77c301;}
case 0x77c301:{ // MOV dword ptr [0x007f38ec],EDX
wm<4>(c,0x7f38ec,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77c307;}
case 0x77c307:{ // MOV dword ptr [0x007f38f0],0x0
wm<4>(c,0x7f38f0,eval<Op::COPY,4,4>(0x0ull));
return 0x77c311;}
case 0x77c311:{ // MOV dword ptr [0x007f38f4],0x0
wm<4>(c,0x7f38f4,eval<Op::COPY,4,4>(0x0ull));
return 0x77c31b;}
case 0x77c31b:{ // MOV dword ptr [0x007f38f8],0x0
wm<4>(c,0x7f38f8,eval<Op::COPY,4,4>(0x0ull));
return 0x77c325;}
case 0x77c325:{ // MOV dword ptr [0x007f38fc],0x0
wm<4>(c,0x7f38fc,eval<Op::COPY,4,4>(0x0ull));
return 0x77c32f;}
case 0x77c32f:{ // MOV dword ptr [0x007f3900],0x0
wm<4>(c,0x7f3900,eval<Op::COPY,4,4>(0x0ull));
return 0x77c339;}
case 0x77c339:{ // MOV dword ptr [0x007f3904],0x0
wm<4>(c,0x7f3904,eval<Op::COPY,4,4>(0x0ull));
return 0x77c343;}
case 0x77c343:{ // MOV [0x007f390a],AL
wm<1>(c,0x7f390a,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c348;}
case 0x77c348:{ // MOV [0x007f390b],AL
wm<1>(c,0x7f390b,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c34d;}
case 0x77c34d:{ // MOV [0x007f390c],AL
wm<1>(c,0x7f390c,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c352;}
case 0x77c352:{ // MOV [0x007f390d],AL
wm<1>(c,0x7f390d,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c357;}
case 0x77c357:{ // MOV [0x007f3914],AL
wm<1>(c,0x7f3914,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c35c;}
case 0x77c35c:{ // MOV byte ptr [0x007f3915],CL
wm<1>(c,0x7f3915,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c362;}
case 0x77c362:{ // MOV [0x007f3916],AL
wm<1>(c,0x7f3916,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c367;}
case 0x77c367:{ // MOV byte ptr [0x007f3917],CL
wm<1>(c,0x7f3917,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c36d;}
case 0x77c36d:{ // MOV [0x007f3918],AL
wm<1>(c,0x7f3918,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c372;}
case 0x77c372:{ // MOV [0x007f3919],AL
wm<1>(c,0x7f3919,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c377;}
case 0x77c377:{ // MOV [0x007f391c],EAX
wm<4>(c,0x7f391c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c37c;}
case 0x77c37c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c37d;}
case 0x77c380:{ // MOV EAX,[0x00788604]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x788604)));
return 0x77c385;}
case 0x77c385:{ // MOV [0x007f005c],EAX
wm<4>(c,0x7f005c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c38a;}
case 0x77c38a:{ // FLD float ptr [0x007f005c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c38aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7f005c),4,0x0ull,4,10));
return 0x77c390;}
case 0x77c390:{ // FSUB float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c390ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x784250),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77c396;}
case 0x77c396:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c396ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c398;}
case 0x77c398:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c398ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c39e;}
case 0x77c39e:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c3a0;}
case 0x77c3a0:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c3a3;}
case 0x77c3a3:{ // JP 0x0077c3b7
if(r<1>(c,0x202)){return 0x77c3b7;}
return 0x77c3a5;}
case 0x77c3a5:{ // FLD float ptr [0x007f005c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c3a5ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7f005c),4,0x0ull,4,10));
return 0x77c3ab;}
case 0x77c3ab:{ // FADD float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c3abull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77c3b1;}
case 0x77c3b1:{ // FSTP float ptr [0x007f005c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c3b1ull));
wm<4>(c,0x7f005c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77c3b7;}
case 0x77c3b7:{ // PUSH 0x781c00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c3bc;}
case 0x77c3bc:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c3c1ull);
return 0x75c5ed;
return 0x77c3c1;}
case 0x77c3c1:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c3c2;}
case 0x77c3c2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c3c3;}
case 0x77c3d0:{ // FLD double ptr [0x0078c268]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c3d0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x78c268),8,0x0ull,4,10));
return 0x77c3d6;}
case 0x77c3d6:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c3d6ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c3d8;}
case 0x77c3d8:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c3d8ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c3de;}
case 0x77c3de:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c3e0;}
case 0x77c3e0:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c3e3;}
case 0x77c3e3:{ // JP 0x0077c3ef
if(r<1>(c,0x202)){return 0x77c3ef;}
return 0x77c3e5;}
case 0x77c3e5:{ // MOV dword ptr [0x007f0968],0x45dac000
wm<4>(c,0x7f0968,eval<Op::COPY,4,4>(0x45dac000ull));
return 0x77c3ef;}
case 0x77c3ef:{ // PUSH 0x781c10
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c3f4;}
case 0x77c3f4:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c3f9ull);
return 0x75c5ed;
return 0x77c3f9;}
case 0x77c3f9:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c3fa;}
case 0x77c3fa:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c3fb;}
case 0x77c400:{ // FLD double ptr [0x0078c270]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c400ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x78c270),8,0x0ull,4,10));
return 0x77c406;}
case 0x77c406:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c406ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c408;}
case 0x77c408:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c408ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c40e;}
case 0x77c40e:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c410;}
case 0x77c410:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c413;}
case 0x77c413:{ // JP 0x0077c41f
if(r<1>(c,0x202)){return 0x77c41f;}
return 0x77c415;}
case 0x77c415:{ // MOV dword ptr [0x007f0984],0x42700000
wm<4>(c,0x7f0984,eval<Op::COPY,4,4>(0x42700000ull));
return 0x77c41f;}
case 0x77c41f:{ // PUSH 0x781c20
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c424;}
case 0x77c424:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c429ull);
return 0x75c5ed;
return 0x77c429;}
case 0x77c429:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c42a;}
case 0x77c42a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c42b;}
case 0x77c430:{ // FLD double ptr [0x0078c270]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c430ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x78c270),8,0x0ull,4,10));
return 0x77c436;}
case 0x77c436:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c436ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c438;}
case 0x77c438:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c438ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c43e;}
case 0x77c43e:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c440;}
case 0x77c440:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c443;}
case 0x77c443:{ // JP 0x0077c44f
if(r<1>(c,0x202)){return 0x77c44f;}
return 0x77c445;}
case 0x77c445:{ // MOV dword ptr [0x007f09a0],0x42700000
wm<4>(c,0x7f09a0,eval<Op::COPY,4,4>(0x42700000ull));
return 0x77c44f;}
case 0x77c44f:{ // PUSH 0x781c30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c454;}
case 0x77c454:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c459ull);
return 0x75c5ed;
return 0x77c459;}
case 0x77c459:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c45a;}
case 0x77c45a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c45b;}
case 0x77c460:{ // PUSH 0x5
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77c462;}
case 0x77c462:{ // PUSH 0x7f09b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7f09b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c467;}
case 0x77c467:{ // MOV ECX,0x82c69c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c69cull));
return 0x77c46c;}
case 0x77c46c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c471ull);
return 0x576770;
return 0x77c471;}
case 0x77c471:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c472;}
case 0x77c480:{ // FLD double ptr [0x0078c278]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c480ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x78c278),8,0x0ull,4,10));
return 0x77c486;}
case 0x77c486:{ // MOV EAX,[0x00788818]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x788818)));
return 0x77c48b;}
case 0x77c48b:{ // MOV ECX,dword ptr [0x0078881c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x78881c)));
return 0x77c491;}
case 0x77c491:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c491ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c493;}
case 0x77c493:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c493ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c499;}
case 0x77c499:{ // MOV [0x007f09d8],EAX
wm<4>(c,0x7f09d8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c49e;}
case 0x77c49e:{ // MOV dword ptr [0x007f09dc],ECX
wm<4>(c,0x7f09dc,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c4a4;}
case 0x77c4a4:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c4a6;}
case 0x77c4a6:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c4a9;}
case 0x77c4a9:{ // JP 0x0077c4b5
if(r<1>(c,0x202)){return 0x77c4b5;}
return 0x77c4ab;}
case 0x77c4ab:{ // MOV dword ptr [0x007f09e4],0x42c80000
wm<4>(c,0x7f09e4,eval<Op::COPY,4,4>(0x42c80000ull));
return 0x77c4b5;}
case 0x77c4b5:{ // MOV EDX,dword ptr [0x00788818]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x788818)));
return 0x77c4bb;}
case 0x77c4bb:{ // PUSH 0x781c40
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c4c0;}
case 0x77c4c0:{ // MOV dword ptr [0x007f09ec],EDX
wm<4>(c,0x7f09ec,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77c4c6;}
case 0x77c4c6:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c4cbull);
return 0x75c5ed;
return 0x77c4cb;}
case 0x77c4cb:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c4cc;}
case 0x77c4cc:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c4cd;}
case 0x77c4d0:{ // MOV EAX,[0x0078885c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x78885c)));
return 0x77c4d5;}
case 0x77c4d5:{ // MOV [0x007f0a00],EAX
wm<4>(c,0x7f0a00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c4da;}
case 0x77c4da:{ // FLD float ptr [0x007f0a00]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c4daull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7f0a00),4,0x0ull,4,10));
return 0x77c4e0;}
case 0x77c4e0:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c4e0ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c4e2;}
case 0x77c4e2:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c4e2ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c4e8;}
case 0x77c4e8:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c4ea;}
case 0x77c4ea:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c4ed;}
case 0x77c4ed:{ // JP 0x0077c501
if(r<1>(c,0x202)){return 0x77c501;}
return 0x77c4ef;}
case 0x77c4ef:{ // FLD float ptr [0x007f0a00]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c4efull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7f0a00),4,0x0ull,4,10));
return 0x77c4f5;}
case 0x77c4f5:{ // FADD float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c4f5ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77c4fb;}
case 0x77c4fb:{ // FSTP float ptr [0x007f0a00]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c4fbull));
wm<4>(c,0x7f0a00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77c501;}
case 0x77c501:{ // PUSH 0x781c50
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c50ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c506;}
case 0x77c506:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c50bull);
return 0x75c5ed;
return 0x77c50b;}
case 0x77c50b:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c50c;}
case 0x77c50c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c50d;}
case 0x77c510:{ // PUSH 0x78c298
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78c298ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c515;}
case 0x77c515:{ // PUSH 0x7f0a1c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7f0a1cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c51a;}
case 0x77c51a:{ // CALL 0x0043dbd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c51full);
return 0x43dbd0;
return 0x77c51f;}
case 0x77c51f:{ // PUSH 0x78c28c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78c28cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c524;}
case 0x77c524:{ // PUSH 0x7f0a68
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7f0a68ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c529;}
case 0x77c529:{ // MOV dword ptr [0x007f0a5c],0x42280000
wm<4>(c,0x7f0a5c,eval<Op::COPY,4,4>(0x42280000ull));
return 0x77c533;}
case 0x77c533:{ // MOV dword ptr [0x007f0a60],0x20
wm<4>(c,0x7f0a60,eval<Op::COPY,4,4>(0x20ull));
return 0x77c53d;}
case 0x77c53d:{ // MOV dword ptr [0x007f0a64],0x41b80000
wm<4>(c,0x7f0a64,eval<Op::COPY,4,4>(0x41b80000ull));
return 0x77c547;}
case 0x77c547:{ // CALL 0x0043dbd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c54cull);
return 0x43dbd0;
return 0x77c54c;}
case 0x77c54c:{ // PUSH 0x78c280
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78c280ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c551;}
case 0x77c551:{ // PUSH 0x7f0ab4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7f0ab4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c556;}
case 0x77c556:{ // MOV dword ptr [0x007f0aa8],0x42280000
wm<4>(c,0x7f0aa8,eval<Op::COPY,4,4>(0x42280000ull));
return 0x77c560;}
case 0x77c560:{ // MOV dword ptr [0x007f0aac],0x20
wm<4>(c,0x7f0aac,eval<Op::COPY,4,4>(0x20ull));
return 0x77c56a;}
case 0x77c56a:{ // MOV dword ptr [0x007f0ab0],0x41b80000
wm<4>(c,0x7f0ab0,eval<Op::COPY,4,4>(0x41b80000ull));
return 0x77c574;}
case 0x77c574:{ // CALL 0x0043dbd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c579ull);
return 0x43dbd0;
return 0x77c579;}
case 0x77c579:{ // PUSH 0x78c280
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78c280ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c57e;}
case 0x77c57e:{ // PUSH 0x7f0b00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7f0b00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c583;}
case 0x77c583:{ // MOV dword ptr [0x007f0af4],0x42280000
wm<4>(c,0x7f0af4,eval<Op::COPY,4,4>(0x42280000ull));
return 0x77c58d;}
case 0x77c58d:{ // MOV dword ptr [0x007f0af8],0x20
wm<4>(c,0x7f0af8,eval<Op::COPY,4,4>(0x20ull));
return 0x77c597;}
case 0x77c597:{ // MOV dword ptr [0x007f0afc],0x41b80000
wm<4>(c,0x7f0afc,eval<Op::COPY,4,4>(0x41b80000ull));
return 0x77c5a1;}
case 0x77c5a1:{ // CALL 0x0043dbd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c5a6ull);
return 0x43dbd0;
return 0x77c5a6;}
case 0x77c5a6:{ // ADD ESP,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c5a9;}
case 0x77c5a9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c5aa;}
case 0x77c5b0:{ // MOV ECX,dword ptr [0x00788864]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x788864)));
return 0x77c5b6;}
case 0x77c5b6:{ // MOV EAX,[0x00788868]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x788868)));
return 0x77c5bb;}
case 0x77c5bb:{ // MOV dword ptr [0x007f0b4c],ECX
wm<4>(c,0x7f0b4c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c5c1;}
case 0x77c5c1:{ // FLD float ptr [0x007f0b4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c5c1ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7f0b4c),4,0x0ull,4,10));
return 0x77c5c7;}
case 0x77c5c7:{ // MOV [0x007f0b48],EAX
wm<4>(c,0x7f0b48,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c5cc;}
case 0x77c5cc:{ // FSUB float ptr [0x007f0b48]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c5ccull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x7f0b48),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77c5d2;}
case 0x77c5d2:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c5d2ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c5d4;}
case 0x77c5d4:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c5d4ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c5da;}
case 0x77c5da:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c5dc;}
case 0x77c5dc:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c5df;}
case 0x77c5df:{ // JP 0x0077c5f3
if(r<1>(c,0x202)){return 0x77c5f3;}
return 0x77c5e1;}
case 0x77c5e1:{ // FLD float ptr [0x007f0b4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c5e1ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7f0b4c),4,0x0ull,4,10));
return 0x77c5e7;}
case 0x77c5e7:{ // FADD float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c5e7ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77c5ed;}
case 0x77c5ed:{ // FSTP float ptr [0x007f0b4c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c5edull));
wm<4>(c,0x7f0b4c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77c5f3;}
case 0x77c5f3:{ // PUSH 0x781c60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c5f8;}
case 0x77c5f8:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c5fdull);
return 0x75c5ed;
return 0x77c5fd;}
case 0x77c5fd:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c5fe;}
case 0x77c5fe:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c5ff;}
case 0x77c600:{ // FLD double ptr [0x0078c2a8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c600ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x78c2a8),8,0x0ull,4,10));
return 0x77c606;}
case 0x77c606:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c606ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77c608;}
case 0x77c608:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c608ull));
wu<10>(c,0xab600,float_op("FLOAT2FLOAT",m<4>(c,0x787594),4,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab600),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab600),10,1));
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
return 0x77c60e;}
case 0x77c60e:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77c610;}
case 0x77c610:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c613;}
case 0x77c613:{ // JP 0x0077c61f
if(r<1>(c,0x202)){return 0x77c61f;}
return 0x77c615;}
case 0x77c615:{ // MOV dword ptr [0x007f0b68],0x3f800008
wm<4>(c,0x7f0b68,eval<Op::COPY,4,4>(0x3f800008ull));
return 0x77c61f;}
case 0x77c61f:{ // PUSH 0x781c70
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c70ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c624;}
case 0x77c624:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c629ull);
return 0x75c5ed;
return 0x77c629;}
case 0x77c629:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c62a;}
case 0x77c62a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c62b;}
case 0x77c630:{ // PUSH 0x78c2b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78c2b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c635;}
case 0x77c635:{ // MOV ECX,0x82c5e8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5e8ull));
return 0x77c63a;}
case 0x77c63a:{ // CALL 0x0060b780
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c63full);
return 0x60b780;
return 0x77c63f;}
case 0x77c63f:{ // PUSH 0x781c80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c644;}
case 0x77c644:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c649ull);
return 0x75c5ed;
return 0x77c649;}
case 0x77c649:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c64a;}
case 0x77c64a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c64b;}
case 0x77c650:{ // MOV ECX,0x82c6a4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c6a4ull));
return 0x77c655;}
case 0x77c655:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c65aull);
return 0x57bcd0;
return 0x77c65a;}
case 0x77c65a:{ // PUSH 0x781d40
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c65f;}
case 0x77c65f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c664ull);
return 0x75c5ed;
return 0x77c664;}
case 0x77c664:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c665;}
case 0x77c665:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c666;}
case 0x77c670:{ // MOV ECX,0x82bebc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82bebcull));
return 0x77c675;}
case 0x77c675:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c67aull);
return 0x57bcd0;
return 0x77c67a;}
case 0x77c67a:{ // PUSH 0x781d30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c67f;}
case 0x77c67f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c684ull);
return 0x75c5ed;
return 0x77c684;}
case 0x77c684:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c685;}
case 0x77c685:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c686;}
case 0x77c690:{ // MOV ECX,0x82bec4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82bec4ull));
return 0x77c695;}
case 0x77c695:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c69aull);
return 0x57bcd0;
return 0x77c69a;}
case 0x77c69a:{ // PUSH 0x781d50
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d50ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c69f;}
case 0x77c69f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c6a4ull);
return 0x75c5ed;
return 0x77c6a4;}
case 0x77c6a4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c6a5;}
case 0x77c6a5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c6a6;}
case 0x77c6b0:{ // MOV ECX,0x82c540
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c540ull));
return 0x77c6b5;}
case 0x77c6b5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c6ba;}
case 0x77c6c0:{ // MOV ECX,0x82c6b4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c6b4ull));
return 0x77c6c5;}
case 0x77c6c5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c6ca;}
case 0x77c6d0:{ // MOV ECX,0x82c510
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c510ull));
return 0x77c6d5;}
case 0x77c6d5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c6da;}
case 0x77c6e0:{ // MOV ECX,0x82c548
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c548ull));
return 0x77c6e5;}
case 0x77c6e5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c6ea;}
case 0x77c6f0:{ // MOV ECX,0x82c530
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c530ull));
return 0x77c6f5;}
case 0x77c6f5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c6fa;}
case 0x77c700:{ // MOV ECX,0x82c4f8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c4f8ull));
return 0x77c705;}
case 0x77c705:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c70a;}
case 0x77c710:{ // MOV ECX,0x82c668
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c668ull));
return 0x77c715;}
case 0x77c715:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c71a;}
case 0x77c720:{ // MOV ECX,0x82c5a8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5a8ull));
return 0x77c725;}
case 0x77c725:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c72a;}
case 0x77c730:{ // MOV ECX,0x82c660
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c660ull));
return 0x77c735;}
case 0x77c735:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c73a;}
case 0x77c740:{ // MOV ECX,0x82c590
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c590ull));
return 0x77c745;}
case 0x77c745:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c74a;}
case 0x77c750:{ // MOV ECX,0x82c520
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c520ull));
return 0x77c755;}
case 0x77c755:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c75a;}
case 0x77c760:{ // MOV ECX,0x82c6bc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c6bcull));
return 0x77c765;}
case 0x77c765:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c76a;}
case 0x77c770:{ // MOV ECX,0x82c5b0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5b0ull));
return 0x77c775;}
case 0x77c775:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c77a;}
case 0x77c780:{ // MOV ECX,0x82c5a0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5a0ull));
return 0x77c785;}
case 0x77c785:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c78a;}
case 0x77c790:{ // MOV ECX,0x82c5c8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5c8ull));
return 0x77c795;}
case 0x77c795:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c79a;}
case 0x77c7a0:{ // MOV ECX,0x82c500
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c500ull));
return 0x77c7a5;}
case 0x77c7a5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c7aa;}
case 0x77c7b0:{ // MOV ECX,0x82c558
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c558ull));
return 0x77c7b5;}
case 0x77c7b5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c7ba;}
case 0x77c7c0:{ // MOV ECX,0x82c550
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c550ull));
return 0x77c7c5;}
case 0x77c7c5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c7ca;}
case 0x77c7d0:{ // MOV ECX,0x82c508
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c508ull));
return 0x77c7d5;}
case 0x77c7d5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c7da;}
case 0x77c7e0:{ // MOV ECX,0x82c72c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c72cull));
return 0x77c7e5;}
case 0x77c7e5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c7ea;}
case 0x77c7f0:{ // MOV ECX,0x82c5d8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5d8ull));
return 0x77c7f5;}
case 0x77c7f5:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c7fa;}
case 0x77c800:{ // MOV ECX,0x82c5e0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5e0ull));
return 0x77c805;}
case 0x77c805:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c80a;}
case 0x77c810:{ // MOV ECX,0x82c5d0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c5d0ull));
return 0x77c815;}
case 0x77c815:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c81a;}
case 0x77c820:{ // MOV ECX,0x82c6e0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c6e0ull));
return 0x77c825;}
case 0x77c825:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c82a;}
case 0x77c830:{ // MOV ECX,0x82c598
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c598ull));
return 0x77c835;}
case 0x77c835:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c83a;}
case 0x77c840:{ // MOV ECX,0x82c538
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c538ull));
return 0x77c845;}
case 0x77c845:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c84a;}
case 0x77c850:{ // MOV ECX,0x82c680
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c680ull));
return 0x77c855;}
case 0x77c855:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c85a;}
case 0x77c860:{ // MOV ECX,0x82c568
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c568ull));
return 0x77c865;}
case 0x77c865:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c86a;}
case 0x77c870:{ // MOV ECX,0x82c648
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c648ull));
return 0x77c875;}
case 0x77c875:{ // JMP 0x00734da0
return 0x734da0;
return 0x77c87a;}
case 0x77c880:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c880ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x784250),4,0x0ull,4,10));
return 0x77c886;}
case 0x77c886:{ // FDIV float ptr [0x0078d764]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c886ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x78d764),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77c88c;}
case 0x77c88c:{ // FSTP float ptr [0x00830d10]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77c88cull));
wm<4>(c,0x830d10,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77c892;}
case 0x77c892:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c893;}
case 0x77c8a0:{ // MOV ECX,0x830d08
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830d08ull));
return 0x77c8a5;}
case 0x77c8a5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c8aaull);
return 0x598750;
return 0x77c8aa;}
case 0x77c8aa:{ // PUSH 0x781da0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781da0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c8af;}
case 0x77c8af:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c8b4ull);
return 0x75c5ed;
return 0x77c8b4;}
case 0x77c8b4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c8b5;}
case 0x77c8b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c8b6;}
case 0x77c8c0:{ // MOV ECX,0x835860
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x835860ull));
return 0x77c8c5;}
case 0x77c8c5:{ // CALL 0x00494650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c8caull);
return 0x494650;
return 0x77c8ca;}
case 0x77c8ca:{ // PUSH 0x781e80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c8cf;}
case 0x77c8cf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c8d4ull);
return 0x75c5ed;
return 0x77c8d4;}
case 0x77c8d4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c8d5;}
case 0x77c8d5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c8d6;}
case 0x77c8e0:{ // MOV ECX,0x8357e0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8357e0ull));
return 0x77c8e5;}
case 0x77c8e5:{ // CALL 0x00494650
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c8eaull);
return 0x494650;
return 0x77c8ea;}
case 0x77c8ea:{ // PUSH 0x781e20
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77c8ef;}
case 0x77c8ef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77c8f4ull);
return 0x75c5ed;
return 0x77c8f4;}
case 0x77c8f4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77c8f5;}
case 0x77c8f5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77c8f6;}
case 0x77c900:{ // MOV EAX,[0x0078d778]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x78d778)));
return 0x77c905;}
case 0x77c905:{ // MOV EDX,dword ptr [0x0078d770]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x78d770)));
return 0x77c90b;}
case 0x77c90b:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c90d;}
case 0x77c90d:{ // MOV [0x007f4240],EAX
wm<4>(c,0x7f4240,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c912;}
case 0x77c912:{ // MOV dword ptr [0x007f4244],ECX
wm<4>(c,0x7f4244,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c918;}
case 0x77c918:{ // MOV ECX,dword ptr [0x0078d774]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x78d774)));
return 0x77c91e;}
case 0x77c91e:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77c920;}
case 0x77c920:{ // MOV dword ptr [0x007f4278],EDX
wm<4>(c,0x7f4278,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77c926;}
case 0x77c926:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c928;}
case 0x77c928:{ // MOV [0x007f427c],EAX
wm<4>(c,0x7f427c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77c92d;}
case 0x77c92d:{ // MOV dword ptr [0x007f4280],ECX
wm<4>(c,0x7f4280,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77c933;}
case 0x77c933:{ // MOV CL,0x80
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x80ull));
return 0x77c935;}
case 0x77c935:{ // MOV AL,0x25
wr<1>(c,0x0,eval<Op::COPY,1,1>(0x25ull));
return 0x77c937;}
case 0x77c937:{ // MOV [0x007f42a0],AL
wm<1>(c,0x7f42a0,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c93c;}
case 0x77c93c:{ // MOV [0x007f42a1],AL
wm<1>(c,0x7f42a1,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77c941;}
case 0x77c941:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77c943;}
case 0x77c943:{ // MOV byte ptr [0x007f42a6],CL
wm<1>(c,0x7f42a6,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c949;}
case 0x77c949:{ // MOV byte ptr [0x007f42a7],CL
wm<1>(c,0x7f42a7,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c94f;}
case 0x77c94f:{ // MOV byte ptr [0x007f42a8],CL
wm<1>(c,0x7f42a8,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c955;}
case 0x77c955:{ // MOV byte ptr [0x007f42a9],CL
wm<1>(c,0x7f42a9,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c95b;}
case 0x77c95b:{ // MOV byte ptr [0x007f42aa],CL
wm<1>(c,0x7f42aa,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c961;}
case 0x77c961:{ // MOV byte ptr [0x007f42ab],CL
wm<1>(c,0x7f42ab,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77c967;}
case 0x77c967:{ // MOV CL,0x32
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x32ull));
return 0x77c969;}
case 0x77c969:{ // MOV dword ptr [0x007f4248],0x0
wm<4>(c,0x7f4248,eval<Op::COPY,4,4>(0x0ull));
return 0x77c973;}
case 0x77c973:{ // MOV dword ptr [0x007f424c],0x41200000
wm<4>(c,0x7f424c,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77c97d;}
case 0x77c97d:{ // MOV dword ptr [0x007f4250],0x40000000
wm<4>(c,0x7f4250,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77c987;}
case 0x77c987:{ // MOV dword ptr [0x007f4254],0x0
wm<4>(c,0x7f4254,eval<Op::COPY,4,4>(0x0ull));
return 0x77c991;}
case 0x77c991:{ // MOV dword ptr [0x007f4258],0x41200000
wm<4>(c,0x7f4258,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77c99b;}
case 0x77c99b:{ // MOV dword ptr [0x007f425c],0x40000000
wm<4>(c,0x7f425c,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77c9a5;}
case 0x77c9a5:{ // MOV dword ptr [0x007f4260],0x0
wm<4>(c,0x7f4260,eval<Op::COPY,4,4>(0x0ull));
return 0x77c9af;}
case 0x77c9af:{ // MOV dword ptr [0x007f4264],0x0
wm<4>(c,0x7f4264,eval<Op::COPY,4,4>(0x0ull));
return 0x77c9b9;}
case 0x77c9b9:{ // MOV dword ptr [0x007f4268],0x0
wm<4>(c,0x7f4268,eval<Op::COPY,4,4>(0x0ull));
return 0x77c9c3;}
case 0x77c9c3:{ // MOV dword ptr [0x007f426c],0x0
wm<4>(c,0x7f426c,eval<Op::COPY,4,4>(0x0ull));
return 0x77c9cd;}
case 0x77c9cd:{ // MOV dword ptr [0x007f4270],0x0
wm<4>(c,0x7f4270,eval<Op::COPY,4,4>(0x0ull));
return 0x77c9d7;}
case 0x77c9d7:{ // MOV dword ptr [0x007f4274],0x0
wm<4>(c,0x7f4274,eval<Op::COPY,4,4>(0x0ull));
return 0x77c9e1;}
case 0x77c9e1:{ // MOV dword ptr [0x007f4284],EDX
wm<4>(c,0x7f4284,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77c9e7;}
case 0x77c9e7:{ // MOV dword ptr [0x007f4288],0x0
wm<4>(c,0x7f4288,eval<Op::COPY,4,4>(0x0ull));
return 0x77c9f1;}
case 0x77c9f1:{ // MOV dword ptr [0x007f428c],0x0
wm<4>(c,0x7f428c,eval<Op::COPY,4,4>(0x0ull));
return 0x77c9fb;}
case 0x77c9fb:{ // MOV dword ptr [0x007f4290],0x0
wm<4>(c,0x7f4290,eval<Op::COPY,4,4>(0x0ull));
return 0x77ca05;}
case 0x77ca05:{ // MOV dword ptr [0x007f4294],0x0
wm<4>(c,0x7f4294,eval<Op::COPY,4,4>(0x0ull));
return 0x77ca0f;}
case 0x77ca0f:{ // MOV dword ptr [0x007f4298],0x0
wm<4>(c,0x7f4298,eval<Op::COPY,4,4>(0x0ull));
return 0x77ca19;}
case 0x77ca19:{ // MOV dword ptr [0x007f429c],0x0
wm<4>(c,0x7f429c,eval<Op::COPY,4,4>(0x0ull));
return 0x77ca23;}
case 0x77ca23:{ // MOV [0x007f42a2],AL
wm<1>(c,0x7f42a2,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ca28;}
case 0x77ca28:{ // MOV [0x007f42a3],AL
wm<1>(c,0x7f42a3,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ca2d;}
case 0x77ca2d:{ // MOV [0x007f42a4],AL
wm<1>(c,0x7f42a4,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ca32;}
case 0x77ca32:{ // MOV [0x007f42a5],AL
wm<1>(c,0x7f42a5,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ca37;}
case 0x77ca37:{ // MOV [0x007f42ac],AL
wm<1>(c,0x7f42ac,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ca3c;}
case 0x77ca3c:{ // MOV byte ptr [0x007f42ad],CL
wm<1>(c,0x7f42ad,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ca42;}
case 0x77ca42:{ // MOV [0x007f42ae],AL
wm<1>(c,0x7f42ae,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ca47;}
case 0x77ca47:{ // MOV byte ptr [0x007f42af],CL
wm<1>(c,0x7f42af,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ca4d;}
case 0x77ca4d:{ // MOV [0x007f42b0],AL
wm<1>(c,0x7f42b0,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ca52;}
case 0x77ca52:{ // MOV [0x007f42b1],AL
wm<1>(c,0x7f42b1,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ca57;}
case 0x77ca57:{ // MOV [0x007f42b4],EAX
wm<4>(c,0x7f42b4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ca5c;}
case 0x77ca5c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ca5d;}
case 0x77ca60:{ // MOV ECX,0x82dbc0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82dbc0ull));
return 0x77ca65;}
case 0x77ca65:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ca6aull);
return 0x598750;
return 0x77ca6a;}
case 0x77ca6a:{ // PUSH 0x781e30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ca6f;}
case 0x77ca6f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ca74ull);
return 0x75c5ed;
return 0x77ca74;}
case 0x77ca74:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ca75;}
case 0x77ca75:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ca76;}
case 0x77ca80:{ // MOV ECX,0x832da4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x832da4ull));
return 0x77ca85;}
case 0x77ca85:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ca8aull);
return 0x598750;
return 0x77ca8a;}
case 0x77ca8a:{ // PUSH 0x781e40
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ca8f;}
case 0x77ca8f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ca94ull);
return 0x75c5ed;
return 0x77ca94;}
case 0x77ca94:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ca95;}
case 0x77ca95:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ca96;}
case 0x77caa0:{ // MOV ECX,0x830d1c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830d1cull));
return 0x77caa5;}
case 0x77caa5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77caaaull);
return 0x598750;
return 0x77caaa;}
case 0x77caaa:{ // PUSH 0x781eb0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781eb0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77caaf;}
case 0x77caaf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cab4ull);
return 0x75c5ed;
return 0x77cab4;}
case 0x77cab4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cab5;}
case 0x77cab5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cab6;}
case 0x77cac0:{ // MOV ECX,0x835858
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x835858ull));
return 0x77cac5;}
case 0x77cac5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cacaull);
return 0x598750;
return 0x77caca;}
case 0x77caca:{ // PUSH 0x781ec0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ec0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cacf;}
case 0x77cacf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cad4ull);
return 0x75c5ed;
return 0x77cad4;}
case 0x77cad4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cad5;}
case 0x77cad5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cad6;}
case 0x77cae0:{ // MOV ECX,0x835794
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x835794ull));
return 0x77cae5;}
case 0x77cae5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77caeaull);
return 0x598750;
return 0x77caea;}
case 0x77caea:{ // PUSH 0x781ed0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ed0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77caef;}
case 0x77caef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77caf4ull);
return 0x75c5ed;
return 0x77caf4;}
case 0x77caf4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77caf5;}
case 0x77caf5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77caf6;}
case 0x77cb00:{ // PUSH 0x4940e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4940e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb05;}
case 0x77cb05:{ // PUSH 0x494060
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494060ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb0a;}
case 0x77cb0a:{ // PUSH 0x80134000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80134000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb0f;}
case 0x77cb0f:{ // MOV ECX,0x835840
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x835840ull));
return 0x77cb14;}
case 0x77cb14:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cb19ull);
return 0x43c0b0;
return 0x77cb19;}
case 0x77cb19:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cb1a;}
case 0x77cb20:{ // PUSH 0x494210
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494210ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb25;}
case 0x77cb25:{ // PUSH 0x48da00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48da00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb2a;}
case 0x77cb2a:{ // PUSH 0x48b410
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48b410ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb2f;}
case 0x77cb2f:{ // PUSH 0x494190
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494190ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb34;}
case 0x77cb34:{ // PUSH 0x494140
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494140ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb39;}
case 0x77cb39:{ // PUSH 0x80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb3e;}
case 0x77cb3e:{ // MOV ECX,0x82dbc8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82dbc8ull));
return 0x77cb43;}
case 0x77cb43:{ // CALL 0x00493390
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cb48ull);
return 0x493390;
return 0x77cb48;}
case 0x77cb48:{ // PUSH 0x781db0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781db0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb4d;}
case 0x77cb4d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cb52ull);
return 0x75c5ed;
return 0x77cb52;}
case 0x77cb52:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cb53;}
case 0x77cb53:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cb54;}
case 0x77cb60:{ // MOV ECX,0x830c78
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830c78ull));
return 0x77cb65;}
case 0x77cb65:{ // CALL 0x00494960
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cb6aull);
return 0x494960;
return 0x77cb6a;}
case 0x77cb6a:{ // PUSH 0x781e90
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e90ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb6f;}
case 0x77cb6f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cb74ull);
return 0x75c5ed;
return 0x77cb74;}
case 0x77cb74:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cb75;}
case 0x77cb75:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cb76;}
case 0x77cb80:{ // PUSH 0x781d60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb85;}
case 0x77cb85:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cb8aull);
return 0x75c5ed;
return 0x77cb8a;}
case 0x77cb8a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cb8b;}
case 0x77cb8b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cb8c;}
case 0x77cb90:{ // MOV ECX,0x830d30
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830d30ull));
return 0x77cb95;}
case 0x77cb95:{ // CALL 0x00494230
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cb9aull);
return 0x494230;
return 0x77cb9a;}
case 0x77cb9a:{ // PUSH 0x781e50
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e50ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cb9f;}
case 0x77cb9f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cba4ull);
return 0x75c5ed;
return 0x77cba4;}
case 0x77cba4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cba5;}
case 0x77cba5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cba6;}
case 0x77cbb0:{ // MOV ECX,0x830ae8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830ae8ull));
return 0x77cbb5;}
case 0x77cbb5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cbbaull);
return 0x598750;
return 0x77cbba;}
case 0x77cbba:{ // PUSH 0x781ea0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ea0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cbbf;}
case 0x77cbbf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cbc4ull);
return 0x75c5ed;
return 0x77cbc4;}
case 0x77cbc4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cbc5;}
case 0x77cbc5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cbc6;}
case 0x77cbd0:{ // MOV ECX,0x830d14
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830d14ull));
return 0x77cbd5;}
case 0x77cbd5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cbdaull);
return 0x598750;
return 0x77cbda;}
case 0x77cbda:{ // PUSH 0x781e60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cbdf;}
case 0x77cbdf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cbe4ull);
return 0x75c5ed;
return 0x77cbe4;}
case 0x77cbe4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cbe5;}
case 0x77cbe5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cbe6;}
case 0x77cbf0:{ // MOV ECX,0x8358c0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8358c0ull));
return 0x77cbf5;}
case 0x77cbf5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cbfaull);
return 0x598750;
return 0x77cbfa;}
case 0x77cbfa:{ // PUSH 0x781dc0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781dc0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cbff;}
case 0x77cbff:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cc04ull);
return 0x75c5ed;
return 0x77cc04;}
case 0x77cc04:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cc05;}
case 0x77cc05:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cc06;}
case 0x77cc10:{ // PUSH 0x781d70
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d70ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc15;}
case 0x77cc15:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cc1aull);
return 0x75c5ed;
return 0x77cc1a;}
case 0x77cc1a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cc1b;}
case 0x77cc1b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cc1c;}
case 0x77cc20:{ // PUSH 0x48e270
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48e270ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc25;}
case 0x77cc25:{ // PUSH 0x48e070
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48e070ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc2a;}
case 0x77cc2a:{ // PUSH 0x135200
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x135200ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc2f;}
case 0x77cc2f:{ // MOV ECX,0x835784
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x835784ull));
return 0x77cc34;}
case 0x77cc34:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cc39ull);
return 0x43c0b0;
return 0x77cc39;}
case 0x77cc39:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cc3a;}
case 0x77cc40:{ // PUSH 0x48e270
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48e270ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc45;}
case 0x77cc45:{ // PUSH 0x48e070
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48e070ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc4a;}
case 0x77cc4a:{ // PUSH 0x80135100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80135100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc4f;}
case 0x77cc4f:{ // MOV ECX,0x830af8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830af8ull));
return 0x77cc54;}
case 0x77cc54:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cc59ull);
return 0x43c0b0;
return 0x77cc59;}
case 0x77cc59:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cc5a;}
case 0x77cc60:{ // PUSH 0x48e270
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48e270ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc65;}
case 0x77cc65:{ // PUSH 0x48e070
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48e070ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc6a;}
case 0x77cc6a:{ // PUSH 0x80135000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80135000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc6f;}
case 0x77cc6f:{ // MOV ECX,0x82dbb0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82dbb0ull));
return 0x77cc74;}
case 0x77cc74:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cc79ull);
return 0x43c0b0;
return 0x77cc79;}
case 0x77cc79:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cc7a;}
case 0x77cc80:{ // MOV ECX,0x835850
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x835850ull));
return 0x77cc85;}
case 0x77cc85:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cc8aull);
return 0x598750;
return 0x77cc8a;}
case 0x77cc8a:{ // PUSH 0x781ee0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ee0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cc8f;}
case 0x77cc8f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cc94ull);
return 0x75c5ed;
return 0x77cc94;}
case 0x77cc94:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cc95;}
case 0x77cc95:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cc96;}
case 0x77cca0:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cca5;}
case 0x77cca5:{ // PUSH 0x502fd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x502fd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ccaa;}
case 0x77ccaa:{ // PUSH 0xfa
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xfaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ccaf;}
case 0x77ccaf:{ // PUSH 0x30
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ccb1;}
case 0x77ccb1:{ // PUSH 0x82dc08
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x82dc08ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ccb6;}
case 0x77ccb6:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ccbbull);
return 0x75c461;
return 0x77ccbb;}
case 0x77ccbb:{ // PUSH 0x781d80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781d80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ccc0;}
case 0x77ccc0:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ccc5ull);
return 0x75c5ed;
return 0x77ccc5;}
case 0x77ccc5:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ccc6;}
case 0x77ccc6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ccc7;}
case 0x77ccd0:{ // PUSH 0x4919d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4919d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ccd5;}
case 0x77ccd5:{ // PUSH 0x491940
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x491940ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ccda;}
case 0x77ccda:{ // PUSH 0x16
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x16ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ccdc;}
case 0x77ccdc:{ // PUSH 0x70
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x70ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ccde;}
case 0x77ccde:{ // PUSH 0x832de0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x832de0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cce3;}
case 0x77cce3:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cce8ull);
return 0x75c461;
return 0x77cce8;}
case 0x77cce8:{ // PUSH 0x781dd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781dd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cced;}
case 0x77cced:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ccf2ull);
return 0x75c5ed;
return 0x77ccf2;}
case 0x77ccf2:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ccf3;}
case 0x77ccf3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ccf4;}
case 0x77cd00:{ // MOV ECX,0x830af0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830af0ull));
return 0x77cd05;}
case 0x77cd05:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cd0aull);
return 0x598750;
return 0x77cd0a;}
case 0x77cd0a:{ // PUSH 0x781df0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781df0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd0f;}
case 0x77cd0f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cd14ull);
return 0x75c5ed;
return 0x77cd14;}
case 0x77cd14:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cd15;}
case 0x77cd15:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cd16;}
case 0x77cd20:{ // MOV ECX,0x82dc00
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82dc00ull));
return 0x77cd25;}
case 0x77cd25:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cd2aull);
return 0x598750;
return 0x77cd2a;}
case 0x77cd2a:{ // PUSH 0x781e00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd2f;}
case 0x77cd2f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cd34ull);
return 0x75c5ed;
return 0x77cd34;}
case 0x77cd34:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cd35;}
case 0x77cd35:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cd36;}
case 0x77cd40:{ // MOV ECX,0x8358c8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8358c8ull));
return 0x77cd45;}
case 0x77cd45:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cd4aull);
return 0x598750;
return 0x77cd4a;}
case 0x77cd4a:{ // PUSH 0x781e70
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e70ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd4f;}
case 0x77cd4f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cd54ull);
return 0x75c5ed;
return 0x77cd54;}
case 0x77cd54:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cd55;}
case 0x77cd55:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cd56;}
case 0x77cd60:{ // PUSH 0x495040
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x495040ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd65;}
case 0x77cd65:{ // PUSH 0x494ea0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494ea0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd6a;}
case 0x77cd6a:{ // PUSH 0xb3300000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xb3300000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd6f;}
case 0x77cd6f:{ // MOV ECX,0x82dba0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82dba0ull));
return 0x77cd74;}
case 0x77cd74:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cd79ull);
return 0x43c0b0;
return 0x77cd79;}
case 0x77cd79:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cd7a;}
case 0x77cd80:{ // PUSH 0x495040
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x495040ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd85;}
case 0x77cd85:{ // PUSH 0x494ea0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494ea0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd8a;}
case 0x77cd8a:{ // PUSH 0xb3320000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xb3320000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cd8f;}
case 0x77cd8f:{ // MOV ECX,0x8358d0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8358d0ull));
return 0x77cd94;}
case 0x77cd94:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cd99ull);
return 0x43c0b0;
return 0x77cd99;}
case 0x77cd99:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cd9a;}
case 0x77cda0:{ // PUSH 0x495040
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x495040ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cda5;}
case 0x77cda5:{ // PUSH 0x494ea0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494ea0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cdaa;}
case 0x77cdaa:{ // PUSH 0xb0300100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xb0300100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cdaf;}
case 0x77cdaf:{ // MOV ECX,0x830b08
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x830b08ull));
return 0x77cdb4;}
case 0x77cdb4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cdb9ull);
return 0x43c0b0;
return 0x77cdb9;}
case 0x77cdb9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cdba;}
case 0x77cdc0:{ // PUSH 0x4950d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4950d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cdc5;}
case 0x77cdc5:{ // PUSH 0x494500
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494500ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cdca;}
case 0x77cdca:{ // PUSH 0x48b410
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x48b410ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cdcf;}
case 0x77cdcf:{ // PUSH 0x494c80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494c80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cdd4;}
case 0x77cdd4:{ // PUSH 0x494c10
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x494c10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cdd9;}
case 0x77cdd9:{ // PUSH 0x80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cdde;}
case 0x77cdde:{ // MOV ECX,0x83579c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x83579cull));
return 0x77cde3;}
case 0x77cde3:{ // CALL 0x00493390
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cde8ull);
return 0x493390;
return 0x77cde8;}
case 0x77cde8:{ // PUSH 0x781e10
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781e10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77cded;}
case 0x77cded:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cdf2ull);
return 0x75c5ed;
return 0x77cdf2;}
case 0x77cdf2:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cdf3;}
case 0x77cdf3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cdf4;}
case 0x77ce00:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ce00ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x784250),4,0x0ull,4,10));
return 0x77ce06;}
case 0x77ce06:{ // FDIV float ptr [0x0078dbb4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ce06ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x78dbb4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77ce0c;}
case 0x77ce0c:{ // FSTP float ptr [0x0083654c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ce0cull));
wm<4>(c,0x83654c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ce12;}
case 0x77ce12:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ce13;}
case 0x77ce20:{ // PUSH 0x4957a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4957a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ce25;}
case 0x77ce25:{ // PUSH 0x4ff430
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4ff430ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ce2a;}
case 0x77ce2a:{ // PUSH 0x7
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x7ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ce2c;}
case 0x77ce2c:{ // PUSH 0x44
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x44ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ce2e;}
case 0x77ce2e:{ // PUSH 0x836568
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x836568ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ce33;}
case 0x77ce33:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ce38ull);
return 0x75c461;
return 0x77ce38;}
case 0x77ce38:{ // PUSH 0x781ef0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ef0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ce3d;}
case 0x77ce3d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ce42ull);
return 0x75c5ed;
return 0x77ce42;}
case 0x77ce42:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ce43;}
case 0x77ce43:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ce44;}
case 0x77ce50:{ // PUSH 0xc8cfe9f2
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xc8cfe9f2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ce55;}
case 0x77ce55:{ // MOV ECX,0x837188
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x837188ull));
return 0x77ce5a;}
case 0x77ce5a:{ // CALL 0x005054a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ce5full);
return 0x5054a0;
return 0x77ce5f;}
case 0x77ce5f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ce60;}
case 0x77ce60:{ // PUSH -0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xffffffffull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ce62;}
case 0x77ce62:{ // MOV ECX,0x837198
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x837198ull));
return 0x77ce67;}
case 0x77ce67:{ // CALL 0x005054a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ce6cull);
return 0x5054a0;
return 0x77ce6c;}
case 0x77ce6c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ce6d;}
case 0x77ce70:{ // PUSH 0x50549ac0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x50549ac0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ce75;}
case 0x77ce75:{ // MOV ECX,0x836550
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x836550ull));
return 0x77ce7a;}
case 0x77ce7a:{ // CALL 0x005054a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ce7full);
return 0x5054a0;
return 0x77ce7f;}
case 0x77ce7f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ce80;}
case 0x77ce80:{ // PUSH 0xff323232
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xff323232ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ce85;}
case 0x77ce85:{ // MOV ECX,0x837178
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x837178ull));
return 0x77ce8a;}
case 0x77ce8a:{ // CALL 0x005054a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ce8full);
return 0x5054a0;
return 0x77ce8f;}
case 0x77ce8f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ce90;}
case 0x77ce90:{ // MOV ECX,0x8364f4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8364f4ull));
return 0x77ce95;}
case 0x77ce95:{ // CALL 0x00510920
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ce9aull);
return 0x510920;
return 0x77ce9a;}
case 0x77ce9a:{ // PUSH 0x781f10
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ce9f;}
case 0x77ce9f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77cea4ull);
return 0x75c5ed;
return 0x77cea4;}
case 0x77cea4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77cea5;}
case 0x77cea5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77cea6;}
case 0x77ceb0:{ // MOV EAX,[0x0078dffc]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x78dffc)));
return 0x77ceb5;}
case 0x77ceb5:{ // MOV EDX,dword ptr [0x0078dff4]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x78dff4)));
return 0x77cebb;}
case 0x77cebb:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77cebd;}
case 0x77cebd:{ // MOV [0x007f6900],EAX
wm<4>(c,0x7f6900,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77cec2;}
case 0x77cec2:{ // MOV dword ptr [0x007f6904],ECX
wm<4>(c,0x7f6904,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77cec8;}
case 0x77cec8:{ // MOV ECX,dword ptr [0x0078dff8]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x78dff8)));
return 0x77cece;}
case 0x77cece:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77ced0;}
case 0x77ced0:{ // MOV dword ptr [0x007f6938],EDX
wm<4>(c,0x7f6938,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77ced6;}
case 0x77ced6:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77ced8;}
case 0x77ced8:{ // MOV [0x007f693c],EAX
wm<4>(c,0x7f693c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77cedd;}
case 0x77cedd:{ // MOV dword ptr [0x007f6940],ECX
wm<4>(c,0x7f6940,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77cee3;}
case 0x77cee3:{ // MOV CL,0x80
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x80ull));
return 0x77cee5;}
case 0x77cee5:{ // MOV AL,0x25
wr<1>(c,0x0,eval<Op::COPY,1,1>(0x25ull));
return 0x77cee7;}
case 0x77cee7:{ // MOV [0x007f6960],AL
wm<1>(c,0x7f6960,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77ceec;}
case 0x77ceec:{ // MOV [0x007f6961],AL
wm<1>(c,0x7f6961,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77cef1;}
case 0x77cef1:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77cef3;}
case 0x77cef3:{ // MOV byte ptr [0x007f6966],CL
wm<1>(c,0x7f6966,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77cef9;}
case 0x77cef9:{ // MOV byte ptr [0x007f6967],CL
wm<1>(c,0x7f6967,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77ceff;}
case 0x77ceff:{ // MOV byte ptr [0x007f6968],CL
wm<1>(c,0x7f6968,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77cf05;}
case 0x77cf05:{ // MOV byte ptr [0x007f6969],CL
wm<1>(c,0x7f6969,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77cf0b;}
case 0x77cf0b:{ // MOV byte ptr [0x007f696a],CL
wm<1>(c,0x7f696a,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77cf11;}
case 0x77cf11:{ // MOV byte ptr [0x007f696b],CL
wm<1>(c,0x7f696b,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77cf17;}
case 0x77cf17:{ // MOV CL,0x32
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x32ull));
return 0x77cf19;}
case 0x77cf19:{ // MOV dword ptr [0x007f6908],0x0
wm<4>(c,0x7f6908,eval<Op::COPY,4,4>(0x0ull));
return 0x77cf23;}
case 0x77cf23:{ // MOV dword ptr [0x007f690c],0x41200000
wm<4>(c,0x7f690c,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77cf2d;}
case 0x77cf2d:{ // MOV dword ptr [0x007f6910],0x40000000
wm<4>(c,0x7f6910,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77cf37;}
case 0x77cf37:{ // MOV dword ptr [0x007f6914],0x0
wm<4>(c,0x7f6914,eval<Op::COPY,4,4>(0x0ull));
return 0x77cf41;}
case 0x77cf41:{ // MOV dword ptr [0x007f6918],0x41200000
wm<4>(c,0x7f6918,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77cf4b;}
case 0x77cf4b:{ // MOV dword ptr [0x007f691c],0x40000000
wm<4>(c,0x7f691c,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77cf55;}
case 0x77cf55:{ // MOV dword ptr [0x007f6920],0x0
wm<4>(c,0x7f6920,eval<Op::COPY,4,4>(0x0ull));
return 0x77cf5f;}
case 0x77cf5f:{ // MOV dword ptr [0x007f6924],0x0
wm<4>(c,0x7f6924,eval<Op::COPY,4,4>(0x0ull));
return 0x77cf69;}
case 0x77cf69:{ // MOV dword ptr [0x007f6928],0x0
wm<4>(c,0x7f6928,eval<Op::COPY,4,4>(0x0ull));
return 0x77cf73;}
case 0x77cf73:{ // MOV dword ptr [0x007f692c],0x0
wm<4>(c,0x7f692c,eval<Op::COPY,4,4>(0x0ull));
return 0x77cf7d;}
case 0x77cf7d:{ // MOV dword ptr [0x007f6930],0x0
wm<4>(c,0x7f6930,eval<Op::COPY,4,4>(0x0ull));
return 0x77cf87;}
case 0x77cf87:{ // MOV dword ptr [0x007f6934],0x0
wm<4>(c,0x7f6934,eval<Op::COPY,4,4>(0x0ull));
return 0x77cf91;}
case 0x77cf91:{ // MOV dword ptr [0x007f6944],EDX
wm<4>(c,0x7f6944,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77cf97;}
case 0x77cf97:{ // MOV dword ptr [0x007f6948],0x0
wm<4>(c,0x7f6948,eval<Op::COPY,4,4>(0x0ull));
return 0x77cfa1;}
case 0x77cfa1:{ // MOV dword ptr [0x007f694c],0x0
wm<4>(c,0x7f694c,eval<Op::COPY,4,4>(0x0ull));
return 0x77cfab;}
case 0x77cfab:{ // MOV dword ptr [0x007f6950],0x0
wm<4>(c,0x7f6950,eval<Op::COPY,4,4>(0x0ull));
return 0x77cfb5;}
case 0x77cfb5:{ // MOV dword ptr [0x007f6954],0x0
wm<4>(c,0x7f6954,eval<Op::COPY,4,4>(0x0ull));
return 0x77cfbf;}
case 0x77cfbf:{ // MOV dword ptr [0x007f6958],0x0
wm<4>(c,0x7f6958,eval<Op::COPY,4,4>(0x0ull));
return 0x77cfc9;}
case 0x77cfc9:{ // MOV dword ptr [0x007f695c],0x0
wm<4>(c,0x7f695c,eval<Op::COPY,4,4>(0x0ull));
return 0x77cfd3;}
case 0x77cfd3:{ // MOV [0x007f6962],AL
wm<1>(c,0x7f6962,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77cfd8;}
case 0x77cfd8:{ // MOV [0x007f6963],AL
wm<1>(c,0x7f6963,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77cfdd;}
case 0x77cfdd:{ // MOV [0x007f6964],AL
wm<1>(c,0x7f6964,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77cfe2;}
case 0x77cfe2:{ // MOV [0x007f6965],AL
wm<1>(c,0x7f6965,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77cfe7;}
case 0x77cfe7:{ // MOV [0x007f696c],AL
wm<1>(c,0x7f696c,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77cfec;}
case 0x77cfec:{ // MOV byte ptr [0x007f696d],CL
wm<1>(c,0x7f696d,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77cff2;}
case 0x77cff2:{ // MOV [0x007f696e],AL
wm<1>(c,0x7f696e,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77cff7;}
case 0x77cff7:{ // MOV byte ptr [0x007f696f],CL
wm<1>(c,0x7f696f,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77cffd;}
case 0x77cffd:{ // MOV [0x007f6970],AL
wm<1>(c,0x7f6970,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d002;}
default:missing_instruction(c.pc);}}
}
