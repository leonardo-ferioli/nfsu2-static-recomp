#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_77e(Cpu& c){switch(c.pc){
case 0x77e000:{ // MOV dword ptr [0x0086b608],0x3f860a92
wm<4>(c,0x86b608,eval<Op::COPY,4,4>(0x3f860a92ull));
return 0x77e00a;}
case 0x77e00a:{ // MOV dword ptr [0x0086b60c],0x3f733333
wm<4>(c,0x86b60c,eval<Op::COPY,4,4>(0x3f733333ull));
return 0x77e014;}
case 0x77e014:{ // MOV dword ptr [0x0086b610],0x3fc6d3f2
wm<4>(c,0x86b610,eval<Op::COPY,4,4>(0x3fc6d3f2ull));
return 0x77e01e;}
case 0x77e01e:{ // MOV dword ptr [0x0086b614],0x3f933333
wm<4>(c,0x86b614,eval<Op::COPY,4,4>(0x3f933333ull));
return 0x77e028;}
case 0x77e028:{ // MOV dword ptr [0x0086b618],0x3fc90fdb
wm<4>(c,0x86b618,eval<Op::COPY,4,4>(0x3fc90fdbull));
return 0x77e032;}
case 0x77e032:{ // MOV dword ptr [0x0086b61c],0x3f800000
wm<4>(c,0x86b61c,eval<Op::COPY,4,4>(0x3f800000ull));
return 0x77e03c;}
case 0x77e03c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e03d;}
case 0x77e040:{ // MOV dword ptr [0x0086b5b0],0x0
wm<4>(c,0x86b5b0,eval<Op::COPY,4,4>(0x0ull));
return 0x77e04a;}
case 0x77e04a:{ // MOV dword ptr [0x0086b5b4],0x0
wm<4>(c,0x86b5b4,eval<Op::COPY,4,4>(0x0ull));
return 0x77e054;}
case 0x77e054:{ // MOV dword ptr [0x0086b5b8],0x3e860a92
wm<4>(c,0x86b5b8,eval<Op::COPY,4,4>(0x3e860a92ull));
return 0x77e05e;}
case 0x77e05e:{ // MOV dword ptr [0x0086b5bc],0x3dcccccd
wm<4>(c,0x86b5bc,eval<Op::COPY,4,4>(0x3dcccccdull));
return 0x77e068;}
case 0x77e068:{ // MOV dword ptr [0x0086b5c0],0x3f060a92
wm<4>(c,0x86b5c0,eval<Op::COPY,4,4>(0x3f060a92ull));
return 0x77e072;}
case 0x77e072:{ // MOV dword ptr [0x0086b5c4],0x3ee66666
wm<4>(c,0x86b5c4,eval<Op::COPY,4,4>(0x3ee66666ull));
return 0x77e07c;}
case 0x77e07c:{ // MOV dword ptr [0x0086b5c8],0x3f490fdb
wm<4>(c,0x86b5c8,eval<Op::COPY,4,4>(0x3f490fdbull));
return 0x77e086;}
case 0x77e086:{ // MOV dword ptr [0x0086b5cc],0x3f59999a
wm<4>(c,0x86b5cc,eval<Op::COPY,4,4>(0x3f59999aull));
return 0x77e090;}
case 0x77e090:{ // MOV dword ptr [0x0086b5d0],0x3f860a92
wm<4>(c,0x86b5d0,eval<Op::COPY,4,4>(0x3f860a92ull));
return 0x77e09a;}
case 0x77e09a:{ // MOV dword ptr [0x0086b5d4],0x3f733333
wm<4>(c,0x86b5d4,eval<Op::COPY,4,4>(0x3f733333ull));
return 0x77e0a4;}
case 0x77e0a4:{ // MOV dword ptr [0x0086b5d8],0x3fc6d3f2
wm<4>(c,0x86b5d8,eval<Op::COPY,4,4>(0x3fc6d3f2ull));
return 0x77e0ae;}
case 0x77e0ae:{ // MOV dword ptr [0x0086b5dc],0x3f933333
wm<4>(c,0x86b5dc,eval<Op::COPY,4,4>(0x3f933333ull));
return 0x77e0b8;}
case 0x77e0b8:{ // MOV dword ptr [0x0086b5e0],0x3fc90fdb
wm<4>(c,0x86b5e0,eval<Op::COPY,4,4>(0x3fc90fdbull));
return 0x77e0c2;}
case 0x77e0c2:{ // MOV dword ptr [0x0086b5e4],0x0
wm<4>(c,0x86b5e4,eval<Op::COPY,4,4>(0x0ull));
return 0x77e0cc;}
case 0x77e0cc:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e0cd;}
case 0x77e0d0:{ // MOV dword ptr [0x0086b570],0x86b5e8
wm<4>(c,0x86b570,eval<Op::COPY,4,4>(0x86b5e8ull));
return 0x77e0da;}
case 0x77e0da:{ // MOV dword ptr [0x0086b574],0x7
wm<4>(c,0x86b574,eval<Op::COPY,4,4>(0x7ull));
return 0x77e0e4;}
case 0x77e0e4:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e0e5;}
case 0x77e0f0:{ // MOV dword ptr [0x0086b3c8],0x86b5b0
wm<4>(c,0x86b3c8,eval<Op::COPY,4,4>(0x86b5b0ull));
return 0x77e0fa;}
case 0x77e0fa:{ // MOV dword ptr [0x0086b3cc],0x7
wm<4>(c,0x86b3cc,eval<Op::COPY,4,4>(0x7ull));
return 0x77e104;}
case 0x77e104:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e105;}
case 0x77e110:{ // MOV ECX,0x86b3d0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b3d0ull));
return 0x77e115;}
case 0x77e115:{ // JMP 0x005911c0
return 0x5911c0;
return 0x77e11a;}
case 0x77e120:{ // MOV dword ptr [0x0086b510],0x3e64c388
wm<4>(c,0x86b510,eval<Op::COPY,4,4>(0x3e64c388ull));
return 0x77e12a;}
case 0x77e12a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e12b;}
case 0x77e130:{ // MOV EAX,[0x0086b510]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x86b510)));
return 0x77e135;}
case 0x77e135:{ // MOV [0x007fc95c],EAX
wm<4>(c,0x7fc95c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77e13a;}
case 0x77e13a:{ // FLD float ptr [0x007fc95c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e13aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7fc95c),4,0x0ull,4,10));
return 0x77e140;}
case 0x77e140:{ // FDIVR float ptr [0x007859d0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e140ull));
wu<10>(c,0xac700,float_op("FLOAT2FLOAT",m<4>(c,0x7859d0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",u<10>(c,0xac700),10,r<10>(c,0x1100),10,10));
return 0x77e146;}
case 0x77e146:{ // FSTP float ptr [0x007fc960]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e146ull));
wm<4>(c,0x7fc960,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e14c;}
case 0x77e14c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e14d;}
case 0x77e150:{ // MOV ECX,0x86b5a8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b5a8ull));
return 0x77e155;}
case 0x77e155:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e15aull);
return 0x598750;
return 0x77e15a;}
case 0x77e15a:{ // PUSH 0x782430
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782430ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e15f;}
case 0x77e15f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e164ull);
return 0x75c5ed;
return 0x77e164;}
case 0x77e164:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e165;}
case 0x77e165:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e166;}
case 0x77e170:{ // MOV ECX,0x86b4c0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b4c0ull));
return 0x77e175;}
case 0x77e175:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e17aull);
return 0x598750;
return 0x77e17a;}
case 0x77e17a:{ // PUSH 0x782420
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782420ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e17f;}
case 0x77e17f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e184ull);
return 0x75c5ed;
return 0x77e184;}
case 0x77e184:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e185;}
case 0x77e185:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e186;}
case 0x77e190:{ // PUSH 0x5a8bd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5a8bd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e195;}
case 0x77e195:{ // PUSH 0x5b0e30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5b0e30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e19a;}
case 0x77e19a:{ // PUSH 0x34026
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34026ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e19f;}
case 0x77e19f:{ // MOV ECX,0x86b580
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b580ull));
return 0x77e1a4;}
case 0x77e1a4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e1a9ull);
return 0x43c0b0;
return 0x77e1a9;}
case 0x77e1a9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e1aa;}
case 0x77e1b0:{ // PUSH 0x5a8bd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5a8bd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e1b5;}
case 0x77e1b5:{ // PUSH 0x5b0e30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5b0e30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e1ba;}
case 0x77e1ba:{ // PUSH 0x34027
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34027ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e1bf;}
case 0x77e1bf:{ // MOV ECX,0x86b4ac
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b4acull));
return 0x77e1c4;}
case 0x77e1c4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e1c9ull);
return 0x43c0b0;
return 0x77e1c9;}
case 0x77e1c9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e1ca;}
case 0x77e1d0:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e1d0ull));
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
return 0x77e1d6;}
case 0x77e1d6:{ // FDIV float ptr [0x007a2794]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e1d6ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x7a2794),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77e1dc;}
case 0x77e1dc:{ // FSTP float ptr [0x00872b40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e1dcull));
wm<4>(c,0x872b40,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e1e2;}
case 0x77e1e2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e1e3;}
case 0x77e1f0:{ // PUSH 0x5b8000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5b8000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e1f5;}
case 0x77e1f5:{ // PUSH 0x5c1020
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5c1020ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e1fa;}
case 0x77e1fa:{ // PUSH 0x6
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x6ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77e1fc;}
case 0x77e1fc:{ // PUSH 0x370
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x370ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e201;}
case 0x77e201:{ // PUSH 0x874c40
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x874c40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e206;}
case 0x77e206:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e20bull);
return 0x75c461;
return 0x77e20b;}
case 0x77e20b:{ // PUSH 0x782470
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782470ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e210;}
case 0x77e210:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e215ull);
return 0x75c5ed;
return 0x77e215;}
case 0x77e215:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e216;}
case 0x77e216:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e217;}
case 0x77e220:{ // MOV ECX,0x872b4c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x872b4cull));
return 0x77e225;}
case 0x77e225:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e22aull);
return 0x598750;
return 0x77e22a;}
case 0x77e22a:{ // PUSH 0x7824a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7824a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e22f;}
case 0x77e22f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e234ull);
return 0x75c5ed;
return 0x77e234;}
case 0x77e234:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e235;}
case 0x77e235:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e236;}
case 0x77e240:{ // MOV ECX,0x8763b0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8763b0ull));
return 0x77e245;}
case 0x77e245:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e24aull);
return 0x57bcd0;
return 0x77e24a;}
case 0x77e24a:{ // PUSH 0x7824b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7824b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e24f;}
case 0x77e24f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e254ull);
return 0x75c5ed;
return 0x77e254;}
case 0x77e254:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e255;}
case 0x77e255:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e256;}
case 0x77e260:{ // MOV ECX,0x872c00
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x872c00ull));
return 0x77e265;}
case 0x77e265:{ // JMP 0x0044f5a0
return 0x44f5a0;
return 0x77e26a;}
case 0x77e270:{ // MOV ECX,0x8760e0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8760e0ull));
return 0x77e275;}
case 0x77e275:{ // JMP 0x0044f5a0
return 0x44f5a0;
return 0x77e27a;}
case 0x77e280:{ // MOV ECX,0x872f20
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x872f20ull));
return 0x77e285;}
case 0x77e285:{ // JMP 0x0044f5a0
return 0x44f5a0;
return 0x77e28a;}
case 0x77e290:{ // MOV ECX,0x8718c0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8718c0ull));
return 0x77e295;}
case 0x77e295:{ // JMP 0x0044f5a0
return 0x44f5a0;
return 0x77e29a;}
case 0x77e2a0:{ // MOV ECX,0x870a20
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x870a20ull));
return 0x77e2a5;}
case 0x77e2a5:{ // JMP 0x0044f5a0
return 0x44f5a0;
return 0x77e2aa;}
case 0x77e2b0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77e2b1;}
case 0x77e2b1:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77e2b2;}
case 0x77e2b2:{ // MOV ESI,0x871be0
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x871be0ull));
return 0x77e2b7;}
case 0x77e2b7:{ // MOV EDI,0x6
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x6ull));
return 0x77e2bc;}
case 0x77e2bc:{ // LEA ESP,[ESP]
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x77e2c0;}
case 0x77e2c0:{ // MOV ECX,ESI
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x77e2c2;}
case 0x77e2c2:{ // CALL 0x0044f5a0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e2c7ull);
return 0x44f5a0;
return 0x77e2c7;}
case 0x77e2c7:{ // ADD ESI,0x290
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x290ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x290ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x290ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77e2cd;}
case 0x77e2cd:{ // DEC EDI
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),0x1ull));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77e2ce;}
case 0x77e2ce:{ // JNZ 0x0077e2c0
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x77e2c0;}
return 0x77e2d0;}
case 0x77e2d0:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e2d1;}
case 0x77e2d1:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e2d2;}
case 0x77e2d2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e2d3;}
case 0x77e2e0:{ // MOV word ptr [0x00871b90],0x4000
wm<2>(c,0x871b90,eval<Op::COPY,2,2>(0x4000ull));
return 0x77e2e9;}
case 0x77e2e9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e2ea;}
case 0x77e2f0:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e2f0ull));
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
return 0x77e2f6;}
case 0x77e2f6:{ // FDIV float ptr [0x007a27c8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e2f6ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x7a27c8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77e2fc;}
case 0x77e2fc:{ // FLD float ptr [0x00784560]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e2fcull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x784560),4,0x0ull,4,10));
return 0x77e302;}
case 0x77e302:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e302ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e304;}
case 0x77e304:{ // FSTP float ptr [0x00876540]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e304ull));
wm<4>(c,0x876540,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e30a;}
case 0x77e30a:{ // FLD float ptr [0x007a2380]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e30aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a2380),4,0x0ull,4,10));
return 0x77e310;}
case 0x77e310:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e310ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e312;}
case 0x77e312:{ // FSTP float ptr [0x00876544]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e312ull));
wm<4>(c,0x876544,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e318;}
case 0x77e318:{ // FLD float ptr [0x0078821c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e318ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x78821c),4,0x0ull,4,10));
return 0x77e31e;}
case 0x77e31e:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e31eull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e320;}
case 0x77e320:{ // FSTP float ptr [0x00876548]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e320ull));
wm<4>(c,0x876548,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e326;}
case 0x77e326:{ // FLD float ptr [0x007881fc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e326ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7881fc),4,0x0ull,4,10));
return 0x77e32c;}
case 0x77e32c:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e32cull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e32e;}
case 0x77e32e:{ // FSTP float ptr [0x0087654c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e32eull));
wm<4>(c,0x87654c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e334;}
case 0x77e334:{ // FLD float ptr [0x007a45f0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e334ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a45f0),4,0x0ull,4,10));
return 0x77e33a;}
case 0x77e33a:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e33aull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e33c;}
case 0x77e33c:{ // FSTP float ptr [0x00876550]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e33cull));
wm<4>(c,0x876550,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e342;}
case 0x77e342:{ // FLD float ptr [0x00787af4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e342ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x787af4),4,0x0ull,4,10));
return 0x77e348;}
case 0x77e348:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e348ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e34a;}
case 0x77e34a:{ // FSTP float ptr [0x00876554]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e34aull));
wm<4>(c,0x876554,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e350;}
case 0x77e350:{ // FLD float ptr [0x0079c684]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e350ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x79c684),4,0x0ull,4,10));
return 0x77e356;}
case 0x77e356:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e356ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e358;}
case 0x77e358:{ // FSTP float ptr [0x00876558]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e358ull));
wm<4>(c,0x876558,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e35e;}
case 0x77e35e:{ // FLD float ptr [0x007a45ec]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e35eull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a45ec),4,0x0ull,4,10));
return 0x77e364;}
case 0x77e364:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e364ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e366;}
case 0x77e366:{ // FSTP float ptr [0x0087655c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e366ull));
wm<4>(c,0x87655c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e36c;}
case 0x77e36c:{ // FLD float ptr [0x0078f9dc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e36cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x78f9dc),4,0x0ull,4,10));
return 0x77e372;}
case 0x77e372:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e372ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e374;}
case 0x77e374:{ // FSTP float ptr [0x00876560]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e374ull));
wm<4>(c,0x876560,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e37a;}
case 0x77e37a:{ // FLD float ptr [0x007a45e8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e37aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a45e8),4,0x0ull,4,10));
return 0x77e380;}
case 0x77e380:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e380ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e382;}
case 0x77e382:{ // FSTP float ptr [0x00876564]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e382ull));
wm<4>(c,0x876564,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e388;}
case 0x77e388:{ // FLD float ptr [0x007850d8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e388ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7850d8),4,0x0ull,4,10));
return 0x77e38e;}
case 0x77e38e:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e38eull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e390;}
case 0x77e390:{ // FSTP float ptr [0x00876568]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e390ull));
wm<4>(c,0x876568,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e396;}
case 0x77e396:{ // FLD float ptr [0x007a45e4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e396ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a45e4),4,0x0ull,4,10));
return 0x77e39c;}
case 0x77e39c:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e39cull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e39e;}
case 0x77e39e:{ // FSTP float ptr [0x0087656c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e39eull));
wm<4>(c,0x87656c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e3a4;}
case 0x77e3a4:{ // FLD float ptr [0x007881f8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3a4ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7881f8),4,0x0ull,4,10));
return 0x77e3aa;}
case 0x77e3aa:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3aaull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e3ac;}
case 0x77e3ac:{ // FSTP float ptr [0x00876570]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3acull));
wm<4>(c,0x876570,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e3b2;}
case 0x77e3b2:{ // FLD float ptr [0x007844e0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3b2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7844e0),4,0x0ull,4,10));
return 0x77e3b8;}
case 0x77e3b8:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3b8ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e3ba;}
case 0x77e3ba:{ // FSTP float ptr [0x00876574]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3baull));
wm<4>(c,0x876574,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e3c0;}
case 0x77e3c0:{ // FLD float ptr [0x007881f0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3c0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7881f0),4,0x0ull,4,10));
return 0x77e3c6;}
case 0x77e3c6:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3c6ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e3c8;}
case 0x77e3c8:{ // FSTP float ptr [0x00876578]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3c8ull));
wm<4>(c,0x876578,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e3ce;}
case 0x77e3ce:{ // FLD float ptr [0x0078b018]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3ceull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x78b018),4,0x0ull,4,10));
return 0x77e3d4;}
case 0x77e3d4:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3d4ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e3d6;}
case 0x77e3d6:{ // FSTP float ptr [0x0087657c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3d6ull));
wm<4>(c,0x87657c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e3dc;}
case 0x77e3dc:{ // FLD float ptr [0x007843e8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3dcull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7843e8),4,0x0ull,4,10));
return 0x77e3e2;}
case 0x77e3e2:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3e2ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e3e4;}
case 0x77e3e4:{ // FST float ptr [0x00876580]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3e4ull));
wm<4>(c,0x876580,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x77e3ea;}
case 0x77e3ea:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x77e3ec;}
case 0x77e3ec:{ // FMUL float ptr [0x007859d0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3ecull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7859d0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77e3f2;}
case 0x77e3f2:{ // FSTP float ptr [0x00876584]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3f2ull));
wm<4>(c,0x876584,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e3f8;}
case 0x77e3f8:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x77e3fa;}
case 0x77e3fa:{ // FMUL float ptr [0x00788220]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e3faull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x788220),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77e400;}
case 0x77e400:{ // FSTP float ptr [0x00876588]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e400ull));
wm<4>(c,0x876588,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e406;}
case 0x77e406:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x77e408;}
case 0x77e408:{ // FMUL float ptr [0x007881f4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e408ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7881f4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77e40e;}
case 0x77e40e:{ // FSTP float ptr [0x0087658c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e40eull));
wm<4>(c,0x87658c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e414;}
case 0x77e414:{ // FSTP float ptr [0x00876590]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e414ull));
wm<4>(c,0x876590,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e41a;}
case 0x77e41a:{ // FLD float ptr [0x007844f8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e41aull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7844f8),4,0x0ull,4,10));
return 0x77e420;}
case 0x77e420:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e420ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77e422;}
case 0x77e422:{ // FST float ptr [0x00876594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e422ull));
wm<4>(c,0x876594,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x77e428;}
case 0x77e428:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x77e42a;}
case 0x77e42a:{ // FMUL float ptr [0x00787adc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e42aull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x787adc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77e430;}
case 0x77e430:{ // FST float ptr [0x00876598]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e430ull));
wm<4>(c,0x876598,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x77e436;}
case 0x77e436:{ // FLD ST2
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x77e438;}
case 0x77e438:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e438ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77e43a;}
case 0x77e43a:{ // FST float ptr [0x0087659c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e43aull));
wm<4>(c,0x87659c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x77e440;}
case 0x77e440:{ // FLD ST3
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x77e442;}
case 0x77e442:{ // FSTP float ptr [0x008765a0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e442ull));
wm<4>(c,0x8765a0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e448;}
case 0x77e448:{ // FXCH ST3
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e448ull));
wu<10>(c,0xba800,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(u<10>(c,0xba800)));
return 0x77e44a;}
case 0x77e44a:{ // FSTP float ptr [0x008765a4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e44aull));
wm<4>(c,0x8765a4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e450;}
case 0x77e450:{ // FXCH ST2
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e450ull));
wu<10>(c,0xba800,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(u<10>(c,0xba800)));
return 0x77e452;}
case 0x77e452:{ // FSTP float ptr [0x008765a8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e452ull));
wm<4>(c,0x8765a8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e458;}
case 0x77e458:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e458ull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x77e45a;}
case 0x77e45a:{ // FSTP float ptr [0x008765ac]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e45aull));
wm<4>(c,0x8765ac,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e460;}
case 0x77e460:{ // FSTP float ptr [0x008765b0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e460ull));
wm<4>(c,0x8765b0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e466;}
case 0x77e466:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e467;}
case 0x77e470:{ // PUSH 0x782440
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782440ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e475;}
case 0x77e475:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e47aull);
return 0x75c5ed;
return 0x77e47a;}
case 0x77e47a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e47b;}
case 0x77e47b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e47c;}
case 0x77e480:{ // MOV ECX,0x872ed0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x872ed0ull));
return 0x77e485;}
case 0x77e485:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e48aull);
return 0x598750;
return 0x77e48a;}
case 0x77e48a:{ // PUSH 0x7824c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7824c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e48f;}
case 0x77e48f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e494ull);
return 0x75c5ed;
return 0x77e494;}
case 0x77e494:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e495;}
case 0x77e495:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e496;}
case 0x77e4a0:{ // MOV ECX,0x872b44
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x872b44ull));
return 0x77e4a5;}
case 0x77e4a5:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e4aaull);
return 0x57bcd0;
return 0x77e4aa;}
case 0x77e4aa:{ // PUSH 0x7824d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7824d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e4af;}
case 0x77e4af:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e4b4ull);
return 0x75c5ed;
return 0x77e4b4;}
case 0x77e4b4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e4b5;}
case 0x77e4b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e4b6;}
case 0x77e4c0:{ // MOV ECX,0x870d28
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x870d28ull));
return 0x77e4c5;}
case 0x77e4c5:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e4caull);
return 0x57bcd0;
return 0x77e4ca;}
case 0x77e4ca:{ // PUSH 0x7824e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7824e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e4cf;}
case 0x77e4cf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e4d4ull);
return 0x75c5ed;
return 0x77e4d4;}
case 0x77e4d4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e4d5;}
case 0x77e4d5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e4d6;}
case 0x77e4e0:{ // PUSH 0x7a45f4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a45f4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e4e5;}
case 0x77e4e5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e4eaull);
return 0x43db50;
return 0x77e4ea;}
case 0x77e4ea:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77e4ed;}
case 0x77e4ed:{ // MOV [0x00870a18],EAX
wm<4>(c,0x870a18,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77e4f2;}
case 0x77e4f2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e4f3;}
case 0x77e500:{ // PUSH 0x7a4604
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a4604ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e505;}
case 0x77e505:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e50aull);
return 0x43db50;
return 0x77e50a;}
case 0x77e50a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77e50d;}
case 0x77e50d:{ // MOV [0x008764c0],EAX
wm<4>(c,0x8764c0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77e512;}
case 0x77e512:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e513;}
case 0x77e520:{ // PUSH 0x5cf410
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5cf410ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e525;}
case 0x77e525:{ // PUSH 0x5cf3f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5cf3f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e52a;}
case 0x77e52a:{ // PUSH 0x10
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77e52c;}
case 0x77e52c:{ // PUSH 0xb8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0xb8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e531;}
case 0x77e531:{ // PUSH 0x870d30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x870d30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e536;}
case 0x77e536:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e53bull);
return 0x75c461;
return 0x77e53b;}
case 0x77e53b:{ // PUSH 0x7824f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7824f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e540;}
case 0x77e540:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e545ull);
return 0x75c5ed;
return 0x77e545;}
case 0x77e545:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e546;}
case 0x77e546:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e547;}
case 0x77e550:{ // MOV ECX,0x870cb0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x870cb0ull));
return 0x77e555;}
case 0x77e555:{ // JMP 0x005b7600
return 0x5b7600;
return 0x77e55a;}
case 0x77e560:{ // MOV ECX,0x8764c8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8764c8ull));
return 0x77e565;}
case 0x77e565:{ // JMP 0x005b7600
return 0x5b7600;
return 0x77e56a;}
case 0x77e570:{ // PUSH 0x782450
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782450ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e575;}
case 0x77e575:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e57aull);
return 0x75c5ed;
return 0x77e57a;}
case 0x77e57a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e57b;}
case 0x77e57b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e57c;}
case 0x77e580:{ // MOV ECX,0x8763d0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8763d0ull));
return 0x77e585;}
case 0x77e585:{ // CALL 0x005c8600
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e58aull);
return 0x5c8600;
return 0x77e58a;}
case 0x77e58a:{ // PUSH 0x782460
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782460ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e58f;}
case 0x77e58f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e594ull);
return 0x75c5ed;
return 0x77e594;}
case 0x77e594:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e595;}
case 0x77e595:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e596;}
case 0x77e5a0:{ // MOV ECX,0x871b94
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x871b94ull));
return 0x77e5a5;}
case 0x77e5a5:{ // CALL 0x0048b790
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e5aaull);
return 0x48b790;
return 0x77e5aa;}
case 0x77e5aa:{ // PUSH 0x782490
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782490ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e5af;}
case 0x77e5af:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e5b4ull);
return 0x75c5ed;
return 0x77e5b4;}
case 0x77e5b4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e5b5;}
case 0x77e5b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e5b6;}
case 0x77e5c0:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e5c0ull));
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
return 0x77e5c6;}
case 0x77e5c6:{ // FDIV float ptr [0x007a4620]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e5c6ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x7a4620),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77e5cc;}
case 0x77e5cc:{ // FSTP float ptr [0x0088ea70]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77e5ccull));
wm<4>(c,0x88ea70,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77e5d2;}
case 0x77e5d2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e5d3;}
case 0x77e5e0:{ // MOV ECX,0x88ea68
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ea68ull));
return 0x77e5e5;}
case 0x77e5e5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e5eaull);
return 0x598750;
return 0x77e5ea;}
case 0x77e5ea:{ // PUSH 0x782580
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782580ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e5ef;}
case 0x77e5ef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e5f4ull);
return 0x75c5ed;
return 0x77e5f4;}
case 0x77e5f4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e5f5;}
case 0x77e5f5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e5f6;}
case 0x77e600:{ // MOV ECX,0x88ff98
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ff98ull));
return 0x77e605;}
case 0x77e605:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e60aull);
return 0x57bcd0;
return 0x77e60a;}
case 0x77e60a:{ // PUSH 0x782600
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782600ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e60f;}
case 0x77e60f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e614ull);
return 0x75c5ed;
return 0x77e614;}
case 0x77e614:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e615;}
case 0x77e615:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e616;}
case 0x77e620:{ // MOV ECX,0x88f270
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f270ull));
return 0x77e625;}
case 0x77e625:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e62aull);
return 0x598750;
return 0x77e62a;}
case 0x77e62a:{ // PUSH 0x782610
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782610ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e62f;}
case 0x77e62f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e634ull);
return 0x75c5ed;
return 0x77e634;}
case 0x77e634:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e635;}
case 0x77e635:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e636;}
case 0x77e640:{ // MOV ECX,0x88f1bc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f1bcull));
return 0x77e645;}
case 0x77e645:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e64aull);
return 0x598750;
return 0x77e64a;}
case 0x77e64a:{ // PUSH 0x782690
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782690ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e64f;}
case 0x77e64f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e654ull);
return 0x75c5ed;
return 0x77e654;}
case 0x77e654:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e655;}
case 0x77e655:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e656;}
case 0x77e660:{ // MOV ECX,0x88f748
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f748ull));
return 0x77e665;}
case 0x77e665:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e66aull);
return 0x57bcd0;
return 0x77e66a;}
case 0x77e66a:{ // PUSH 0x782510
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782510ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e66f;}
case 0x77e66f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e674ull);
return 0x75c5ed;
return 0x77e674;}
case 0x77e674:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e675;}
case 0x77e675:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e676;}
case 0x77e680:{ // MOV ECX,0x88ea8c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ea8cull));
return 0x77e685;}
case 0x77e685:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e68aull);
return 0x598750;
return 0x77e68a;}
case 0x77e68a:{ // PUSH 0x782590
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782590ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e68f;}
case 0x77e68f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e694ull);
return 0x75c5ed;
return 0x77e694;}
case 0x77e694:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e695;}
case 0x77e695:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e696;}
case 0x77e6a0:{ // MOV ECX,0x88f768
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f768ull));
return 0x77e6a5;}
case 0x77e6a5:{ // CALL 0x005e81d0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e6aaull);
return 0x5e81d0;
return 0x77e6aa;}
case 0x77e6aa:{ // PUSH 0x7826c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7826c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e6af;}
case 0x77e6af:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e6b4ull);
return 0x75c5ed;
return 0x77e6b4;}
case 0x77e6b4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e6b5;}
case 0x77e6b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e6b6;}
case 0x77e6c0:{ // PUSH 0x5e8660
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5e8660ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e6c5;}
case 0x77e6c5:{ // PUSH 0x5e81c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5e81c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e6ca;}
case 0x77e6ca:{ // PUSH 0x80034130
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80034130ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e6cf;}
case 0x77e6cf:{ // MOV ECX,0x88a2ac
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88a2acull));
return 0x77e6d4;}
case 0x77e6d4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e6d9ull);
return 0x43c0b0;
return 0x77e6d9;}
case 0x77e6d9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e6da;}
case 0x77e6e0:{ // PUSH 0x5e8660
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5e8660ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e6e5;}
case 0x77e6e5:{ // PUSH 0x5e81c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5e81c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e6ea;}
case 0x77e6ea:{ // PUSH 0x3412f
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x3412full));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e6ef;}
case 0x77e6ef:{ // MOV ECX,0x88e9ec
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88e9ecull));
return 0x77e6f4;}
case 0x77e6f4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e6f9ull);
return 0x43c0b0;
return 0x77e6f9;}
case 0x77e6f9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e6fa;}
case 0x77e700:{ // MOV ECX,0x88f740
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f740ull));
return 0x77e705;}
case 0x77e705:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e70aull);
return 0x598750;
return 0x77e70a;}
case 0x77e70a:{ // PUSH 0x782620
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782620ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e70f;}
case 0x77e70f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e714ull);
return 0x75c5ed;
return 0x77e714;}
case 0x77e714:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e715;}
case 0x77e715:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e716;}
case 0x77e720:{ // PUSH 0x5d84d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5d84d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e725;}
case 0x77e725:{ // PUSH 0x5d8470
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5d8470ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e72a;}
case 0x77e72a:{ // PUSH 0x34146
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34146ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e72f;}
case 0x77e72f:{ // MOV ECX,0x88eac4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88eac4ull));
return 0x77e734;}
case 0x77e734:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e739ull);
return 0x43c0b0;
return 0x77e739;}
case 0x77e739:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e73a;}
case 0x77e740:{ // PUSH 0x5d3ef0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5d3ef0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e745;}
case 0x77e745:{ // PUSH 0x5d3eb0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5d3eb0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e74a;}
case 0x77e74a:{ // PUSH 0x34201
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34201ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e74f;}
case 0x77e74f:{ // MOV ECX,0x88f750
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f750ull));
return 0x77e754;}
case 0x77e754:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e759ull);
return 0x43c0b0;
return 0x77e759;}
case 0x77e759:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e75a;}
case 0x77e760:{ // MOV ECX,0x88a320
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88a320ull));
return 0x77e765;}
case 0x77e765:{ // CALL 0x005e3f90
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e76aull);
return 0x5e3f90;
return 0x77e76a;}
case 0x77e76a:{ // PUSH 0x7826a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7826a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e76f;}
case 0x77e76f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e774ull);
return 0x75c5ed;
return 0x77e774;}
case 0x77e774:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e775;}
case 0x77e775:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e776;}
case 0x77e780:{ // MOV ECX,0x88f298
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f298ull));
return 0x77e785;}
case 0x77e785:{ // CALL 0x005e08b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e78aull);
return 0x5e08b0;
return 0x77e78a;}
case 0x77e78a:{ // PUSH 0x782630
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782630ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e78f;}
case 0x77e78f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e794ull);
return 0x75c5ed;
return 0x77e794;}
case 0x77e794:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e795;}
case 0x77e795:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e796;}
case 0x77e7a0:{ // PUSH 0x5dee00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5dee00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7a5;}
case 0x77e7a5:{ // PUSH 0x5da490
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5da490ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7aa;}
case 0x77e7aa:{ // PUSH 0x80034147
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80034147ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7af;}
case 0x77e7af:{ // MOV ECX,0x88e9cc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88e9ccull));
return 0x77e7b4;}
case 0x77e7b4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e7b9ull);
return 0x43c0b0;
return 0x77e7b9;}
case 0x77e7b9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e7ba;}
case 0x77e7c0:{ // MOV ECX,0x88eb00
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88eb00ull));
return 0x77e7c5;}
case 0x77e7c5:{ // JMP 0x005def40
return 0x5def40;
return 0x77e7ca;}
case 0x77e7d0:{ // PUSH 0x5e4e60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5e4e60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7d5;}
case 0x77e7d5:{ // PUSH 0x5def30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5def30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7da;}
case 0x77e7da:{ // PUSH 0x34110
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34110ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7df;}
case 0x77e7df:{ // MOV ECX,0x88eab4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88eab4ull));
return 0x77e7e4;}
case 0x77e7e4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e7e9ull);
return 0x43c0b0;
return 0x77e7e9;}
case 0x77e7e9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e7ea;}
case 0x77e7f0:{ // PUSH 0x5e4e60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5e4e60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7f5;}
case 0x77e7f5:{ // PUSH 0x5def30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5def30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7fa;}
case 0x77e7fa:{ // PUSH 0x34113
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34113ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e7ff;}
case 0x77e7ff:{ // MOV ECX,0x88e9dc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88e9dcull));
return 0x77e804;}
case 0x77e804:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e809ull);
return 0x43c0b0;
return 0x77e809;}
case 0x77e809:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e80a;}
case 0x77e810:{ // PUSH 0x5e4e60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5e4e60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e815;}
case 0x77e815:{ // PUSH 0x5def30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5def30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e81a;}
case 0x77e81a:{ // PUSH 0x34111
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34111ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e81f;}
case 0x77e81f:{ // MOV ECX,0x88f27c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f27cull));
return 0x77e824;}
case 0x77e824:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e829ull);
return 0x43c0b0;
return 0x77e829;}
case 0x77e829:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e82a;}
case 0x77e830:{ // PUSH 0x5e4e60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5e4e60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e835;}
case 0x77e835:{ // PUSH 0x5def30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5def30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e83a;}
case 0x77e83a:{ // PUSH 0x34112
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34112ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e83f;}
case 0x77e83f:{ // MOV ECX,0x88ea74
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ea74ull));
return 0x77e844;}
case 0x77e844:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e849ull);
return 0x43c0b0;
return 0x77e849;}
case 0x77e849:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e84a;}
case 0x77e850:{ // MOV ECX,0x88ead4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ead4ull));
return 0x77e855;}
case 0x77e855:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e85aull);
return 0x598750;
return 0x77e85a;}
case 0x77e85a:{ // PUSH 0x782640
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782640ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e85f;}
case 0x77e85f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e864ull);
return 0x75c5ed;
return 0x77e864;}
case 0x77e864:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e865;}
case 0x77e865:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e866;}
case 0x77e870:{ // MOV ECX,0x88f760
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f760ull));
return 0x77e875;}
case 0x77e875:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e87aull);
return 0x598750;
return 0x77e87a;}
case 0x77e87a:{ // PUSH 0x7825d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7825d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e87f;}
case 0x77e87f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e884ull);
return 0x75c5ed;
return 0x77e884;}
case 0x77e884:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e885;}
case 0x77e885:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e886;}
case 0x77e890:{ // PUSH 0x5d6440
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5d6440ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e895;}
case 0x77e895:{ // PUSH 0x5db2e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5db2e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e89a;}
case 0x77e89a:{ // PUSH 0x34108
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34108ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e89f;}
case 0x77e89f:{ // MOV ECX,0x88eaa4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88eaa4ull));
return 0x77e8a4;}
case 0x77e8a4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e8a9ull);
return 0x43c0b0;
return 0x77e8a9;}
case 0x77e8a9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e8aa;}
case 0x77e8b0:{ // PUSH 0x5dfba0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5dfba0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e8b5;}
case 0x77e8b5:{ // PUSH 0x5df8a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5df8a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e8ba;}
case 0x77e8ba:{ // PUSH 0x80034100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x80034100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e8bf;}
case 0x77e8bf:{ // MOV ECX,0x88e9b4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88e9b4ull));
return 0x77e8c4;}
case 0x77e8c4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e8c9ull);
return 0x43c0b0;
return 0x77e8c9;}
case 0x77e8c9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e8ca;}
case 0x77e8d0:{ // PUSH 0x5dfba0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5dfba0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e8d5;}
case 0x77e8d5:{ // PUSH 0x5df8a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5df8a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e8da;}
case 0x77e8da:{ // PUSH 0x34107
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x34107ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e8df;}
case 0x77e8df:{ // MOV ECX,0x88ea94
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ea94ull));
return 0x77e8e4;}
case 0x77e8e4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e8e9ull);
return 0x43c0b0;
return 0x77e8e9;}
case 0x77e8e9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e8ea;}
case 0x77e8f0:{ // MOV ECX,0x883e70
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x883e70ull));
return 0x77e8f5;}
case 0x77e8f5:{ // CALL 0x005e6360
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e8faull);
return 0x5e6360;
return 0x77e8fa;}
case 0x77e8fa:{ // PUSH 0x7826b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7826b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e8ff;}
case 0x77e8ff:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e904ull);
return 0x75c5ed;
return 0x77e904;}
case 0x77e904:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e905;}
case 0x77e905:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e906;}
case 0x77e910:{ // PUSH 0x4def30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4def30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e915;}
case 0x77e915:{ // PUSH 0x598750
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x598750ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e91a;}
case 0x77e91a:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77e91c;}
case 0x77e91c:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77e91e;}
case 0x77e91e:{ // PUSH 0x88f1c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x88f1c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e923;}
case 0x77e923:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e928ull);
return 0x75c461;
return 0x77e928;}
case 0x77e928:{ // PUSH 0x782650
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782650ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e92d;}
case 0x77e92d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e932ull);
return 0x75c5ed;
return 0x77e932;}
case 0x77e932:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e933;}
case 0x77e933:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e934;}
case 0x77e940:{ // PUSH 0x7a534c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a534cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e945;}
case 0x77e945:{ // MOV ECX,0x88a2c0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88a2c0ull));
return 0x77e94a;}
case 0x77e94a:{ // CALL 0x0060b7e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e94full);
return 0x60b7e0;
return 0x77e94f;}
case 0x77e94f:{ // PUSH 0x7a534c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a534cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e954;}
case 0x77e954:{ // MOV ECX,0x88a2f0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88a2f0ull));
return 0x77e959;}
case 0x77e959:{ // CALL 0x0060b7e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e95eull);
return 0x60b7e0;
return 0x77e95e;}
case 0x77e95e:{ // PUSH 0x782520
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782520ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e963;}
case 0x77e963:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e968ull);
return 0x75c5ed;
return 0x77e968;}
case 0x77e968:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e969;}
case 0x77e969:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e96a;}
case 0x77e970:{ // PUSH 0x7a5364
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a5364ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e975;}
case 0x77e975:{ // MOV ECX,0x88ea08
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ea08ull));
return 0x77e97a;}
case 0x77e97a:{ // CALL 0x0060b7e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e97full);
return 0x60b7e0;
return 0x77e97f;}
case 0x77e97f:{ // PUSH 0x7a5364
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a5364ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e984;}
case 0x77e984:{ // MOV ECX,0x88ea38
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ea38ull));
return 0x77e989;}
case 0x77e989:{ // CALL 0x0060b7e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e98eull);
return 0x60b7e0;
return 0x77e98e;}
case 0x77e98e:{ // PUSH 0x782540
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782540ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e993;}
case 0x77e993:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e998ull);
return 0x75c5ed;
return 0x77e998;}
case 0x77e998:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e999;}
case 0x77e999:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e99a;}
case 0x77e9a0:{ // PUSH 0x7a5378
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a5378ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e9a5;}
case 0x77e9a5:{ // MOV ECX,0x88f210
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f210ull));
return 0x77e9aa;}
case 0x77e9aa:{ // CALL 0x0060b7e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e9afull);
return 0x60b7e0;
return 0x77e9af;}
case 0x77e9af:{ // PUSH 0x7a5378
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a5378ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e9b4;}
case 0x77e9b4:{ // MOV ECX,0x88f240
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f240ull));
return 0x77e9b9;}
case 0x77e9b9:{ // CALL 0x0060b7e0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e9beull);
return 0x60b7e0;
return 0x77e9be;}
case 0x77e9be:{ // PUSH 0x782560
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782560ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e9c3;}
case 0x77e9c3:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e9c8ull);
return 0x75c5ed;
return 0x77e9c8;}
case 0x77e9c8:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e9c9;}
case 0x77e9c9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e9ca;}
case 0x77e9d0:{ // MOV ECX,0x88f28c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f28cull));
return 0x77e9d5;}
case 0x77e9d5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e9daull);
return 0x598750;
return 0x77e9da;}
case 0x77e9da:{ // PUSH 0x782670
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782670ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e9df;}
case 0x77e9df:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e9e4ull);
return 0x75c5ed;
return 0x77e9e4;}
case 0x77e9e4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77e9e5;}
case 0x77e9e5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77e9e6;}
case 0x77e9f0:{ // MOV ECX,0x88ffa0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ffa0ull));
return 0x77e9f5;}
case 0x77e9f5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77e9faull);
return 0x598750;
return 0x77e9fa;}
case 0x77e9fa:{ // PUSH 0x782680
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782680ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77e9ff;}
case 0x77e9ff:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea04ull);
return 0x75c5ed;
return 0x77ea04;}
case 0x77ea04:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ea05;}
case 0x77ea05:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ea06;}
case 0x77ea10:{ // MOV ECX,0x88e9c4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88e9c4ull));
return 0x77ea15;}
case 0x77ea15:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea1aull);
return 0x598750;
return 0x77ea1a;}
case 0x77ea1a:{ // PUSH 0x7825e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7825e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ea1f;}
case 0x77ea1f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea24ull);
return 0x75c5ed;
return 0x77ea24;}
case 0x77ea24:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ea25;}
case 0x77ea25:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ea26;}
case 0x77ea30:{ // MOV ECX,0x88f208
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f208ull));
return 0x77ea35;}
case 0x77ea35:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea3aull);
return 0x598750;
return 0x77ea3a;}
case 0x77ea3a:{ // PUSH 0x7825f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7825f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ea3f;}
case 0x77ea3f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea44ull);
return 0x75c5ed;
return 0x77ea44;}
case 0x77ea44:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ea45;}
case 0x77ea45:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ea46;}
case 0x77ea50:{ // MOV ECX,0x88f278
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88f278ull));
return 0x77ea55;}
case 0x77ea55:{ // JMP 0x005d7b80
return 0x5d7b80;
return 0x77ea5a;}
case 0x77ea60:{ // MOV ECX,0x88e9fc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88e9fcull));
return 0x77ea65;}
case 0x77ea65:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea6aull);
return 0x598750;
return 0x77ea6a;}
case 0x77ea6a:{ // PUSH 0x7825a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7825a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ea6f;}
case 0x77ea6f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea74ull);
return 0x75c5ed;
return 0x77ea74;}
case 0x77ea74:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ea75;}
case 0x77ea75:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ea76;}
case 0x77ea80:{ // MOV ECX,0x88ea84
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88ea84ull));
return 0x77ea85;}
case 0x77ea85:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea8aull);
return 0x598750;
return 0x77ea8a;}
case 0x77ea8a:{ // PUSH 0x7825b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7825b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ea8f;}
case 0x77ea8f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ea94ull);
return 0x75c5ed;
return 0x77ea94;}
case 0x77ea94:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ea95;}
case 0x77ea95:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ea96;}
case 0x77eaa0:{ // MOV ECX,0x88eadc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x88eadcull));
return 0x77eaa5;}
case 0x77eaa5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77eaaaull);
return 0x598750;
return 0x77eaaa;}
case 0x77eaaa:{ // PUSH 0x7825c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7825c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eaaf;}
case 0x77eaaf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77eab4ull);
return 0x75c5ed;
return 0x77eab4;}
case 0x77eab4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77eab5;}
case 0x77eab5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eab6;}
case 0x77eac0:{ // MOV EAX,[0x007a481c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7a481c)));
return 0x77eac5;}
case 0x77eac5:{ // FLD float ptr [0x007a481c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77eac5ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a481c),4,0x0ull,4,10));
return 0x77eacb;}
case 0x77eacb:{ // FCHS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77eacbull));
wr<10>(c,0x1100,float_op("FLOAT_NEG",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77eacd;}
case 0x77eacd:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eacf;}
case 0x77eacf:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ead1;}
case 0x77ead1:{ // FST float ptr [0x0088ffb8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ead1ull));
wm<4>(c,0x88ffb8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x77ead7;}
case 0x77ead7:{ // FST float ptr [0x0088ffc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ead7ull));
wm<4>(c,0x88ffc0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x77eadd;}
case 0x77eadd:{ // MOV [0x0088ffb0],EAX
wm<4>(c,0x88ffb0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eae2;}
case 0x77eae2:{ // FST float ptr [0x0088ffc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77eae2ull));
wm<4>(c,0x88ffc4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x77eae8;}
case 0x77eae8:{ // MOV dword ptr [0x0088ffb4],ECX
wm<4>(c,0x88ffb4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77eaee;}
case 0x77eaee:{ // FSTP float ptr [0x0088ffcc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77eaeeull));
wm<4>(c,0x88ffcc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77eaf4;}
case 0x77eaf4:{ // MOV dword ptr [0x0088ffbc],EDX
wm<4>(c,0x88ffbc,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77eafa;}
case 0x77eafa:{ // MOV [0x0088ffc8],EAX
wm<4>(c,0x88ffc8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eaff;}
case 0x77eaff:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eb00;}
case 0x77eb00:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77eb00ull));
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
return 0x77eb06;}
case 0x77eb06:{ // FDIV float ptr [0x007a5470]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77eb06ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x7a5470),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77eb0c;}
case 0x77eb0c:{ // FSTP float ptr [0x0089cf08]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77eb0cull));
wm<4>(c,0x89cf08,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77eb12;}
case 0x77eb12:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eb13;}
case 0x77eb20:{ // MOV EAX,[0x007a5488]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7a5488)));
return 0x77eb25;}
case 0x77eb25:{ // MOV EDX,dword ptr [0x007a5480]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x7a5480)));
return 0x77eb2b;}
case 0x77eb2b:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eb2d;}
case 0x77eb2d:{ // MOV dword ptr [0x008025e4],ECX
wm<4>(c,0x8025e4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77eb33;}
case 0x77eb33:{ // MOV ECX,dword ptr [0x007a5484]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7a5484)));
return 0x77eb39;}
case 0x77eb39:{ // MOV [0x008025e0],EAX
wm<4>(c,0x8025e0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eb3e;}
case 0x77eb3e:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77eb40;}
case 0x77eb40:{ // MOV dword ptr [0x00802618],EDX
wm<4>(c,0x802618,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77eb46;}
case 0x77eb46:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77eb48;}
case 0x77eb48:{ // MOV [0x0080261c],EAX
wm<4>(c,0x80261c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eb4d;}
case 0x77eb4d:{ // MOV dword ptr [0x00802620],ECX
wm<4>(c,0x802620,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77eb53;}
case 0x77eb53:{ // MOV dword ptr [0x00802624],EDX
wm<4>(c,0x802624,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77eb59;}
case 0x77eb59:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eb5a;}
case 0x77eb60:{ // PUSH 0x7864e8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7864e8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eb65;}
case 0x77eb65:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77eb6aull);
return 0x43db50;
return 0x77eb6a;}
case 0x77eb6a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77eb6d;}
case 0x77eb6d:{ // MOV [0x0089cf2c],EAX
wm<4>(c,0x89cf2c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eb72;}
case 0x77eb72:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eb73;}
case 0x77eb80:{ // PUSH 0x7864fc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7864fcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eb85;}
case 0x77eb85:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77eb8aull);
return 0x43db50;
return 0x77eb8a;}
case 0x77eb8a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77eb8d;}
case 0x77eb8d:{ // MOV [0x0089ccec],EAX
wm<4>(c,0x89ccec,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eb92;}
case 0x77eb92:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eb93;}
case 0x77eba0:{ // PUSH 0x786510
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786510ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eba5;}
case 0x77eba5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ebaaull);
return 0x43db50;
return 0x77ebaa;}
case 0x77ebaa:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ebad;}
case 0x77ebad:{ // MOV [0x0089ccf0],EAX
wm<4>(c,0x89ccf0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ebb2;}
case 0x77ebb2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ebb3;}
case 0x77ebc0:{ // PUSH 0x786520
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786520ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ebc5;}
case 0x77ebc5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ebcaull);
return 0x43db50;
return 0x77ebca;}
case 0x77ebca:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ebcd;}
case 0x77ebcd:{ // MOV [0x0089cce0],EAX
wm<4>(c,0x89cce0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ebd2;}
case 0x77ebd2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ebd3;}
case 0x77ebe0:{ // PUSH 0x786530
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786530ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ebe5;}
case 0x77ebe5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ebeaull);
return 0x43db50;
return 0x77ebea;}
case 0x77ebea:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ebed;}
case 0x77ebed:{ // MOV [0x0089e78c],EAX
wm<4>(c,0x89e78c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ebf2;}
case 0x77ebf2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ebf3;}
case 0x77ec00:{ // PUSH 0x786548
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786548ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ec05;}
case 0x77ec05:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ec0aull);
return 0x43db50;
return 0x77ec0a;}
case 0x77ec0a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ec0d;}
case 0x77ec0d:{ // MOV [0x0089cf20],EAX
wm<4>(c,0x89cf20,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ec12;}
case 0x77ec12:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ec13;}
case 0x77ec20:{ // PUSH 0x786560
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786560ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ec25;}
case 0x77ec25:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ec2aull);
return 0x43db50;
return 0x77ec2a;}
case 0x77ec2a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ec2d;}
case 0x77ec2d:{ // MOV [0x00890158],EAX
wm<4>(c,0x890158,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ec32;}
case 0x77ec32:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ec33;}
case 0x77ec40:{ // PUSH 0x78657c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78657cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ec45;}
case 0x77ec45:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ec4aull);
return 0x43db50;
return 0x77ec4a;}
case 0x77ec4a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ec4d;}
case 0x77ec4d:{ // MOV [0x0089e820],EAX
wm<4>(c,0x89e820,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ec52;}
case 0x77ec52:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ec53;}
case 0x77ec60:{ // PUSH 0x786598
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786598ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ec65;}
case 0x77ec65:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ec6aull);
return 0x43db50;
return 0x77ec6a;}
case 0x77ec6a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ec6d;}
case 0x77ec6d:{ // MOV [0x0089cf14],EAX
wm<4>(c,0x89cf14,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ec72;}
case 0x77ec72:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ec73;}
case 0x77ec80:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ec82;}
case 0x77ec82:{ // PUSH 0x8023a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x8023a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ec87;}
case 0x77ec87:{ // MOV ECX,0x89cf24
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89cf24ull));
return 0x77ec8c;}
case 0x77ec8c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ec91ull);
return 0x576770;
return 0x77ec91;}
case 0x77ec91:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ec92;}
case 0x77eca0:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77eca2;}
case 0x77eca2:{ // PUSH 0x8023d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x8023d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eca7;}
case 0x77eca7:{ // MOV ECX,0x89cf30
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89cf30ull));
return 0x77ecac;}
case 0x77ecac:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ecb1ull);
return 0x576770;
return 0x77ecb1;}
case 0x77ecb1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ecb2;}
case 0x77ecc0:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ecc2;}
case 0x77ecc2:{ // PUSH 0x802404
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x802404ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ecc7;}
case 0x77ecc7:{ // MOV ECX,0x89e790
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89e790ull));
return 0x77eccc;}
case 0x77eccc:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ecd1ull);
return 0x576770;
return 0x77ecd1;}
case 0x77ecd1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ecd2;}
case 0x77ece0:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ece2;}
case 0x77ece2:{ // PUSH 0x802414
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x802414ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ece7;}
case 0x77ece7:{ // MOV ECX,0x89e824
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89e824ull));
return 0x77ecec;}
case 0x77ecec:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ecf1ull);
return 0x576770;
return 0x77ecf1;}
case 0x77ecf1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ecf2;}
case 0x77ed00:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ed02;}
case 0x77ed02:{ // PUSH 0x802424
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x802424ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ed07;}
case 0x77ed07:{ // MOV ECX,0x89cf18
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89cf18ull));
return 0x77ed0c;}
case 0x77ed0c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ed11ull);
return 0x576770;
return 0x77ed11;}
case 0x77ed11:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ed12;}
case 0x77ed20:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ed22;}
case 0x77ed22:{ // PUSH 0x802434
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x802434ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ed27;}
case 0x77ed27:{ // MOV ECX,0x890150
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x890150ull));
return 0x77ed2c;}
case 0x77ed2c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ed31ull);
return 0x576770;
return 0x77ed31;}
case 0x77ed31:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ed32;}
case 0x77ed40:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ed42;}
case 0x77ed42:{ // PUSH 0x802444
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x802444ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ed47;}
case 0x77ed47:{ // MOV ECX,0x89e798
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89e798ull));
return 0x77ed4c;}
case 0x77ed4c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ed51ull);
return 0x576770;
return 0x77ed51;}
case 0x77ed51:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ed52;}
case 0x77ed60:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ed62;}
case 0x77ed62:{ // PUSH 0x802570
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x802570ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ed67;}
case 0x77ed67:{ // MOV ECX,0x89cce4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89cce4ull));
return 0x77ed6c;}
case 0x77ed6c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ed71ull);
return 0x576770;
return 0x77ed71;}
case 0x77ed71:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ed72;}
case 0x77ed80:{ // PUSH 0x3
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x3ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77ed82;}
case 0x77ed82:{ // PUSH 0x802590
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x802590ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ed87;}
case 0x77ed87:{ // MOV ECX,0x89cf0c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89cf0cull));
return 0x77ed8c;}
case 0x77ed8c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ed91ull);
return 0x576770;
return 0x77ed91;}
case 0x77ed91:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ed92;}
case 0x77eda0:{ // MOV ECX,0x89e7a0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89e7a0ull));
return 0x77eda5;}
case 0x77eda5:{ // JMP 0x005ed5f0
return 0x5ed5f0;
return 0x77edaa;}
case 0x77edb0:{ // PUSH 0x50f7d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x50f7d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77edb5;}
case 0x77edb5:{ // PUSH 0x5f0d00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5f0d00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77edba;}
case 0x77edba:{ // PUSH 0x16
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x16ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77edbc;}
case 0x77edbc:{ // PUSH 0x940
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x940ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77edc1;}
case 0x77edc1:{ // PUSH 0x890160
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x890160ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77edc6;}
case 0x77edc6:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77edcbull);
return 0x75c461;
return 0x77edcb;}
case 0x77edcb:{ // PUSH 0x7826d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7826d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77edd0;}
case 0x77edd0:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77edd5ull);
return 0x75c5ed;
return 0x77edd5;}
case 0x77edd5:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77edd6;}
case 0x77edd6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77edd7;}
case 0x77ede0:{ // MOV ECX,0x89cf48
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x89cf48ull));
return 0x77ede5;}
case 0x77ede5:{ // CALL 0x005f9050
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77edeaull);
return 0x5f9050;
return 0x77edea;}
case 0x77edea:{ // PUSH 0x7826f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7826f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77edef;}
case 0x77edef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77edf4ull);
return 0x75c5ed;
return 0x77edf4;}
case 0x77edf4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77edf5;}
case 0x77edf5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77edf6;}
case 0x77ee00:{ // MOV ECX,0x8a2b50
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8a2b50ull));
return 0x77ee05;}
case 0x77ee05:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ee0aull);
return 0x598750;
return 0x77ee0a;}
case 0x77ee0a:{ // PUSH 0x782840
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782840ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ee0f;}
case 0x77ee0f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ee14ull);
return 0x75c5ed;
return 0x77ee14;}
case 0x77ee14:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ee15;}
case 0x77ee15:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ee16;}
case 0x77ee20:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee20ull));
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
return 0x77ee26;}
case 0x77ee26:{ // FDIV float ptr [0x007a65c8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee26ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x7a65c8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77ee2c;}
case 0x77ee2c:{ // FSTP float ptr [0x008a2ce0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee2cull));
wm<4>(c,0x8a2ce0,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ee32;}
case 0x77ee32:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ee33;}
case 0x77ee40:{ // FLD float ptr [0x007a65cc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a65cc),4,0x0ull,4,10));
return 0x77ee46;}
case 0x77ee46:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee46ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77ee48;}
case 0x77ee48:{ // FSTP float ptr [0x008a3160]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee48ull));
wm<4>(c,0x8a3160,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ee4e;}
case 0x77ee4e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ee4f;}
case 0x77ee50:{ // FLD float ptr [0x007a65cc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee50ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a65cc),4,0x0ull,4,10));
return 0x77ee56;}
case 0x77ee56:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee56ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77ee5c;}
case 0x77ee5c:{ // FSTP float ptr [0x008a3164]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee5cull));
wm<4>(c,0x8a3164,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ee62;}
case 0x77ee62:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ee63;}
case 0x77ee70:{ // FLD double ptr [0x007a65d0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee70ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x7a65d0),8,0x0ull,4,10));
return 0x77ee76;}
case 0x77ee76:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee76ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77ee78;}
case 0x77ee78:{ // FSTP double ptr [0x008a3158]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee78ull));
wm<8>(c,0x8a3158,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ee7e;}
case 0x77ee7e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ee7f;}
case 0x77ee80:{ // FLD double ptr [0x007a65d0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee80ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x7a65d0),8,0x0ull,4,10));
return 0x77ee86;}
case 0x77ee86:{ // FMUL double ptr [0x007864e0]
wu<10>(c,0xb1700,float_op("FLOAT2FLOAT",m<8>(c,0x7864e0),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1700),10,10));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee86ull));
return 0x77ee8c;}
case 0x77ee8c:{ // FSTP double ptr [0x008a3150]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ee8cull));
wm<8>(c,0x8a3150,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ee92;}
case 0x77ee92:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ee93;}
case 0x77eea0:{ // PUSH 0x7a8da8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a8da8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eea5;}
case 0x77eea5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77eeaaull);
return 0x43db50;
return 0x77eeaa;}
case 0x77eeaa:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77eead;}
case 0x77eead:{ // MOV [0x008a31e0],EAX
wm<4>(c,0x8a31e0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eeb2;}
case 0x77eeb2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eeb3;}
case 0x77eec0:{ // PUSH 0x7a8db8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a8db8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eec5;}
case 0x77eec5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77eecaull);
return 0x43db50;
return 0x77eeca;}
case 0x77eeca:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77eecd;}
case 0x77eecd:{ // MOV [0x008a3b00],EAX
wm<4>(c,0x8a3b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eed2;}
case 0x77eed2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eed3;}
case 0x77eee0:{ // PUSH 0x7a8dc8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a8dc8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eee5;}
case 0x77eee5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77eeeaull);
return 0x43db50;
return 0x77eeea;}
case 0x77eeea:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77eeed;}
case 0x77eeed:{ // MOV [0x008a1d90],EAX
wm<4>(c,0x8a1d90,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eef2;}
case 0x77eef2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77eef3;}
case 0x77ef00:{ // MOV ECX,0x8a2ca4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8a2ca4ull));
return 0x77ef05;}
case 0x77ef05:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef0aull);
return 0x598750;
return 0x77ef0a;}
case 0x77ef0a:{ // PUSH 0x7828a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7828a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef0f;}
case 0x77ef0f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef14ull);
return 0x75c5ed;
return 0x77ef14;}
case 0x77ef14:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ef15;}
case 0x77ef15:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ef16;}
case 0x77ef20:{ // PUSH 0x7a9114
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a9114ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef25;}
case 0x77ef25:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef2aull);
return 0x43db50;
return 0x77ef2a;}
case 0x77ef2a:{ // PUSH 0x7a9100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a9100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef2f;}
case 0x77ef2f:{ // MOV [0x008a4358],EAX
wm<4>(c,0x8a4358,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ef34;}
case 0x77ef34:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef39ull);
return 0x43db50;
return 0x77ef39;}
case 0x77ef39:{ // PUSH 0x7a90ec
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a90ecull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef3e;}
case 0x77ef3e:{ // MOV [0x008a435c],EAX
wm<4>(c,0x8a435c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ef43;}
case 0x77ef43:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef48ull);
return 0x43db50;
return 0x77ef48;}
case 0x77ef48:{ // PUSH 0x7a90e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a90e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef4d;}
case 0x77ef4d:{ // MOV [0x008a4360],EAX
wm<4>(c,0x8a4360,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ef52;}
case 0x77ef52:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef57ull);
return 0x43db50;
return 0x77ef57;}
case 0x77ef57:{ // PUSH 0x7a90d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a90d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef5c;}
case 0x77ef5c:{ // MOV [0x008a4364],EAX
wm<4>(c,0x8a4364,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ef61;}
case 0x77ef61:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef66ull);
return 0x43db50;
return 0x77ef66;}
case 0x77ef66:{ // PUSH 0x7a90c4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a90c4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef6b;}
case 0x77ef6b:{ // MOV [0x008a4368],EAX
wm<4>(c,0x8a4368,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ef70;}
case 0x77ef70:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef75ull);
return 0x43db50;
return 0x77ef75;}
case 0x77ef75:{ // PUSH 0x7a90ac
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a90acull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef7a;}
case 0x77ef7a:{ // MOV [0x008a436c],EAX
wm<4>(c,0x8a436c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ef7f;}
case 0x77ef7f:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef84ull);
return 0x43db50;
return 0x77ef84;}
case 0x77ef84:{ // PUSH 0x7a909c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a909cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef89;}
case 0x77ef89:{ // MOV [0x008a4370],EAX
wm<4>(c,0x8a4370,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ef8e;}
case 0x77ef8e:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ef93ull);
return 0x43db50;
return 0x77ef93;}
case 0x77ef93:{ // PUSH 0x7a9088
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a9088ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ef98;}
case 0x77ef98:{ // MOV [0x008a4374],EAX
wm<4>(c,0x8a4374,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ef9d;}
case 0x77ef9d:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77efa2ull);
return 0x43db50;
return 0x77efa2;}
case 0x77efa2:{ // PUSH 0x7a9074
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a9074ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77efa7;}
case 0x77efa7:{ // MOV [0x008a4378],EAX
wm<4>(c,0x8a4378,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77efac;}
case 0x77efac:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77efb1ull);
return 0x43db50;
return 0x77efb1;}
case 0x77efb1:{ // PUSH 0x7a905c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a905cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77efb6;}
case 0x77efb6:{ // MOV [0x008a437c],EAX
wm<4>(c,0x8a437c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77efbb;}
case 0x77efbb:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77efc0ull);
return 0x43db50;
return 0x77efc0;}
case 0x77efc0:{ // PUSH 0x7a9048
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a9048ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77efc5;}
case 0x77efc5:{ // MOV [0x008a4380],EAX
wm<4>(c,0x8a4380,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77efca;}
case 0x77efca:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77efcfull);
return 0x43db50;
return 0x77efcf;}
case 0x77efcf:{ // PUSH 0x7a9034
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a9034ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77efd4;}
case 0x77efd4:{ // MOV [0x008a4384],EAX
wm<4>(c,0x8a4384,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77efd9;}
case 0x77efd9:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77efdeull);
return 0x43db50;
return 0x77efde;}
case 0x77efde:{ // PUSH 0x7a9028
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a9028ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77efe3;}
case 0x77efe3:{ // MOV [0x008a4388],EAX
wm<4>(c,0x8a4388,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77efe8;}
case 0x77efe8:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77efedull);
return 0x43db50;
return 0x77efed;}
case 0x77efed:{ // PUSH 0x7a9010
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a9010ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77eff2;}
case 0x77eff2:{ // MOV [0x008a438c],EAX
wm<4>(c,0x8a438c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77eff7;}
case 0x77eff7:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77effcull);
return 0x43db50;
return 0x77effc;}
case 0x77effc:{ // PUSH 0x7a8ffc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7a8ffcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77f001;}
default:missing_instruction(c.pc);}}
}
