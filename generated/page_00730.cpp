#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_730(Cpu& c){switch(c.pc){
case 0x730002:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730002ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730004;}
case 0x730004:{ // FLD float ptr [EBP + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x7cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730004ull));
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
return 0x730007;}
case 0x730007:{ // FISTP dword ptr [EBP + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x40ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730007ull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x73000a;}
case 0x73000a:{ // MOV SI,word ptr [EBP + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x40ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x73000e;}
case 0x73000e:{ // MOV word ptr [ECX + 0x24],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730012;}
case 0x730012:{ // FLD float ptr [EBP + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x78ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730012ull));
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
return 0x730015;}
case 0x730015:{ // FISTP dword ptr [EBP + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x38ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730015ull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730018;}
case 0x730018:{ // MOV SI,word ptr [EBP + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x38ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x73001c;}
case 0x73001c:{ // MOV word ptr [ECX + 0x26],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x26ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730020;}
case 0x730020:{ // FLD float ptr [EBP + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x6cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730020ull));
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
return 0x730023;}
case 0x730023:{ // FISTP dword ptr [EBP + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x30ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730023ull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730026;}
case 0x730026:{ // MOV SI,word ptr [EBP + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x30ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x73002a;}
case 0x73002a:{ // MOV word ptr [ECX + 0x28],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x73002e;}
case 0x73002e:{ // FLD float ptr [EBP + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x68ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73002eull));
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
return 0x730031;}
case 0x730031:{ // FISTP dword ptr [EBP + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x28ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730031ull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730034;}
case 0x730034:{ // FLD float ptr [0x007a081c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730034ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a081c),4,0x0ull,4,10));
return 0x73003a;}
case 0x73003a:{ // MOV SI,word ptr [EBP + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x28ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x73003e;}
case 0x73003e:{ // MOV word ptr [ECX + 0x2a],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x2aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730042;}
case 0x730042:{ // FLD float ptr [EAX + 0x6b8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6b8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730042ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730048;}
case 0x730048:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730048ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x73004a;}
case 0x73004a:{ // FSTP float ptr [EBP + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x7cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73004aull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73004d;}
case 0x73004d:{ // FLD float ptr [EAX + 0x6bc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6bcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73004dull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730053;}
case 0x730053:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730053ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x730055;}
case 0x730055:{ // FSTP float ptr [EBP + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x78ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730055ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730058;}
case 0x730058:{ // FLD float ptr [EAX + 0x6c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6c0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730058ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73005e;}
case 0x73005e:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73005eull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x730060;}
case 0x730060:{ // FSTP float ptr [EBP + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x6cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730060ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730063;}
case 0x730063:{ // FLD float ptr [EAX + 0x6c4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6c4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730063ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730069;}
case 0x730069:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730069ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x73006b;}
case 0x73006b:{ // FSTP float ptr [EBP + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x68ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73006bull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73006e;}
case 0x73006e:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73006eull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730070;}
case 0x730070:{ // FLD float ptr [EBP + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x7cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730070ull));
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
return 0x730073;}
case 0x730073:{ // FISTP dword ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730073ull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730076;}
case 0x730076:{ // MOV SI,word ptr [EBP + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x20ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x73007a;}
case 0x73007a:{ // MOV word ptr [ECX + 0x2c],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x2cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x73007e;}
case 0x73007e:{ // FLD float ptr [EBP + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x78ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73007eull));
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
return 0x730081;}
case 0x730081:{ // FISTP dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730081ull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730084;}
case 0x730084:{ // MOV SI,word ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x730088;}
case 0x730088:{ // MOV word ptr [ECX + 0x2e],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x2eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x73008c;}
case 0x73008c:{ // FLD float ptr [EBP + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x6cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73008cull));
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
return 0x73008f;}
case 0x73008f:{ // FISTP dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73008full));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730092;}
case 0x730092:{ // MOV SI,word ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x730096;}
case 0x730096:{ // MOV word ptr [ECX + 0x30],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x73009a;}
case 0x73009a:{ // FLD float ptr [EBP + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x68ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73009aull));
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
return 0x73009d;}
case 0x73009d:{ // FISTP dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73009dull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7300a0;}
case 0x7300a0:{ // FLD float ptr [0x007a081c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300a0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x7a081c),4,0x0ull,4,10));
return 0x7300a6;}
case 0x7300a6:{ // MOV SI,word ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7300aa;}
case 0x7300aa:{ // MOV word ptr [ECX + 0x32],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x32ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7300ae;}
case 0x7300ae:{ // FLD float ptr [EAX + 0x7d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7d8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300aeull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7300b4;}
case 0x7300b4:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300b4ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x7300b6;}
case 0x7300b6:{ // FSTP float ptr [EBP + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x7cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300b6ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7300b9;}
case 0x7300b9:{ // FLD float ptr [EAX + 0x7dc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7dcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300b9ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7300bf;}
case 0x7300bf:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300bfull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x7300c1;}
case 0x7300c1:{ // FSTP float ptr [EBP + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x78ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300c1ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7300c4;}
case 0x7300c4:{ // FLD float ptr [EAX + 0x7e0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7e0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300c4ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7300ca;}
case 0x7300ca:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300caull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x7300cc;}
case 0x7300cc:{ // FSTP float ptr [EBP + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x6cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300ccull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7300cf;}
case 0x7300cf:{ // FLD float ptr [EAX + 0x7e4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7e4ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300cfull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7300d5;}
case 0x7300d5:{ // FMUL ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300d5ull));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x7300d7;}
case 0x7300d7:{ // FSTP float ptr [EBP + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x68ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300d7ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7300da;}
case 0x7300da:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300daull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7300dc;}
case 0x7300dc:{ // FLD float ptr [EBP + 0x7c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x7cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300dcull));
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
return 0x7300df;}
case 0x7300df:{ // FISTP dword ptr [EBP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300dfull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,r<4>(c,0x14),u<4>(c,0xa300));
return 0x7300e2;}
case 0x7300e2:{ // MOV SI,word ptr [EBP]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x14)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7300e6;}
case 0x7300e6:{ // MOV word ptr [ECX + 0x34],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x34ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7300ea;}
case 0x7300ea:{ // FLD float ptr [EBP + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x78ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300eaull));
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
return 0x7300ed;}
case 0x7300ed:{ // FISTP dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300edull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7300f0;}
case 0x7300f0:{ // MOV SI,word ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7300f4;}
case 0x7300f4:{ // MOV word ptr [ECX + 0x36],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x36ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7300f8;}
case 0x7300f8:{ // FLD float ptr [EBP + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x6cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300f8ull));
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
return 0x7300fb;}
case 0x7300fb:{ // FISTP dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7300fbull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7300fe;}
case 0x7300fe:{ // MOV SI,word ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x730102;}
case 0x730102:{ // MOV word ptr [ECX + 0x38],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730106;}
case 0x730106:{ // FLD float ptr [EBP + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x68ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730106ull));
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
return 0x730109;}
case 0x730109:{ // FISTP dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730109ull));
wu<10>(c,0xaea00,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wu<4>(c,0xa300,float_op("TRUNC",u<10>(c,0xaea00),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x73010c;}
case 0x73010c:{ // MOV SI,word ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x18,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x730110;}
case 0x730110:{ // MOV word ptr [ECX + 0x3a],SI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x3aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x18)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730114;}
case 0x730114:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730117;}
case 0x730117:{ // ADD ECX,0x40
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x40ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x73011a;}
case 0x73011a:{ // DEC EDX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x73011b;}
case 0x73011b:{ // JNZ 0x0072fdc2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x72fdc2;}
return 0x730121;}
case 0x730121:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x730122;}
case 0x730122:{ // ADD EBP,0x70
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x14),0x70ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x14),0x70ull));
wr<4>(c,0x14,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x70ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x14),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x14),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x14),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730125;}
case 0x730125:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x730126;}
case 0x730126:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x730127;}
case 0x730127:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x730128;}
case 0x730128:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x73012a;}
case 0x73012a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x73012b;}
case 0x73012b:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73012e;}
case 0x73012e:{ // LEA EDX,[ESI + 0x900]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x900ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x730134;}
case 0x730134:{ // CMP ESI,EDX
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
return 0x730136;}
case 0x730136:{ // JNC 0x007302be
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x7302be;}
return 0x73013c;}
case 0x73013c:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73013f;}
case 0x73013f:{ // SUB EDX,ESI
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730141;}
case 0x730141:{ // ADD EAX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x8ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730144;}
case 0x730144:{ // DEC EDX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730145;}
case 0x730145:{ // SHR EDX,0x7
wu<4>(c,0xa1b00,eval<Op::INT_AND,4,4,4>(0x7ull,0x1full));
wu<4>(c,0xa1c00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x8),u<4>(c,0xa1b00)));
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
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x730148;}
case 0x730148:{ // LEA ECX,[ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x73014b;}
case 0x73014b:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x73014c;}
case 0x73014c:{ // FLD float ptr [EAX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73014cull));
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
return 0x73014f;}
case 0x73014f:{ // MOV ESI,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730152;}
case 0x730152:{ // FLD float ptr [EAX]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730152ull));
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
return 0x730154;}
case 0x730154:{ // MOV dword ptr [EBP + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730157;}
case 0x730157:{ // MOV ESI,dword ptr [EAX + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73015a;}
case 0x73015a:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x73015c;}
case 0x73015c:{ // FSTP float ptr [ECX + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xfffffffcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73015cull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73015f;}
case 0x73015f:{ // MOV dword ptr [ECX + -0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730162;}
case 0x730162:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730165;}
case 0x730165:{ // FSTP float ptr [ECX]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730165ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730167;}
case 0x730167:{ // MOV dword ptr [ECX + 0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x73016a;}
case 0x73016a:{ // MOV ESI,dword ptr [EAX + 0x124]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x124ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730170;}
case 0x730170:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730170ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730172;}
case 0x730172:{ // MOV dword ptr [EBP + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730175;}
case 0x730175:{ // FLD float ptr [EAX + 0x11c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x11cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730175ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73017b;}
case 0x73017b:{ // MOV ESI,dword ptr [EAX + 0x118]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x118ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730181;}
case 0x730181:{ // FLD float ptr [EAX + 0x120]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x120ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730181ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730187;}
case 0x730187:{ // MOV dword ptr [ECX + 0x8],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x73018a;}
case 0x73018a:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73018d;}
case 0x73018d:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x73018f;}
case 0x73018f:{ // FSTP float ptr [ECX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73018full));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730192;}
case 0x730192:{ // MOV dword ptr [ECX + 0x14],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x14ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730195;}
case 0x730195:{ // FSTP float ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730195ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730198;}
case 0x730198:{ // MOV ESI,dword ptr [EAX + 0x244]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x244ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73019e;}
case 0x73019e:{ // MOV dword ptr [EBP + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7301a1;}
case 0x7301a1:{ // MOV ESI,dword ptr [EAX + 0x238]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x238ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7301a7;}
case 0x7301a7:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301a7ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7301a9;}
case 0x7301a9:{ // FLD float ptr [EAX + 0x23c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x23cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301a9ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7301af;}
case 0x7301af:{ // FLD float ptr [EAX + 0x240]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x240ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301afull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7301b5;}
case 0x7301b5:{ // MOV dword ptr [ECX + 0x18],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7301b8;}
case 0x7301b8:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7301bb;}
case 0x7301bb:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x7301bd;}
case 0x7301bd:{ // FSTP float ptr [ECX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301bdull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7301c0;}
case 0x7301c0:{ // MOV dword ptr [ECX + 0x24],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7301c3;}
case 0x7301c3:{ // FSTP float ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301c3ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7301c6;}
case 0x7301c6:{ // MOV ESI,dword ptr [EAX + 0x364]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x364ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7301cc;}
case 0x7301cc:{ // MOV dword ptr [EBP + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7301cf;}
case 0x7301cf:{ // MOV ESI,dword ptr [EAX + 0x358]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x358ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7301d5;}
case 0x7301d5:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301d5ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7301d7;}
case 0x7301d7:{ // FLD float ptr [EAX + 0x35c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x35cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301d7ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7301dd;}
case 0x7301dd:{ // FLD float ptr [EAX + 0x360]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x360ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301ddull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x7301e3;}
case 0x7301e3:{ // MOV dword ptr [ECX + 0x28],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7301e6;}
case 0x7301e6:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7301e9;}
case 0x7301e9:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x7301eb;}
case 0x7301eb:{ // FSTP float ptr [ECX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x2cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301ebull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7301ee;}
case 0x7301ee:{ // MOV dword ptr [ECX + 0x34],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x34ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7301f1;}
case 0x7301f1:{ // FSTP float ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7301f1ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7301f4;}
case 0x7301f4:{ // MOV ESI,dword ptr [EAX + 0x484]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x484ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7301fa;}
case 0x7301fa:{ // MOV dword ptr [EBP + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7301fd;}
case 0x7301fd:{ // MOV ESI,dword ptr [EAX + 0x478]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x478ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730203;}
case 0x730203:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730203ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730205;}
case 0x730205:{ // FLD float ptr [EAX + 0x47c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x47cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730205ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73020b;}
case 0x73020b:{ // FLD float ptr [EAX + 0x480]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x480ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73020bull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730211;}
case 0x730211:{ // MOV dword ptr [ECX + 0x38],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730214;}
case 0x730214:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730217;}
case 0x730217:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x730219;}
case 0x730219:{ // FSTP float ptr [ECX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x3cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730219ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73021c;}
case 0x73021c:{ // MOV dword ptr [ECX + 0x44],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x44ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x73021f;}
case 0x73021f:{ // FSTP float ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73021full));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730222;}
case 0x730222:{ // MOV ESI,dword ptr [EAX + 0x5a4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x5a4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730228;}
case 0x730228:{ // MOV dword ptr [EBP + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x73022b;}
case 0x73022b:{ // MOV ESI,dword ptr [EAX + 0x598]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x598ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730231;}
case 0x730231:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730231ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730233;}
case 0x730233:{ // FLD float ptr [EAX + 0x59c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x59cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730233ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730239;}
case 0x730239:{ // FLD float ptr [EAX + 0x5a0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x5a0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730239ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73023f;}
case 0x73023f:{ // MOV dword ptr [ECX + 0x48],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730242;}
case 0x730242:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730245;}
case 0x730245:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x730247;}
case 0x730247:{ // FSTP float ptr [ECX + 0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x4cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730247ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73024a;}
case 0x73024a:{ // MOV dword ptr [ECX + 0x54],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x54ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x73024d;}
case 0x73024d:{ // FSTP float ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73024dull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730250;}
case 0x730250:{ // MOV ESI,dword ptr [EAX + 0x6c4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6c4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730256;}
case 0x730256:{ // MOV dword ptr [EBP + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730259;}
case 0x730259:{ // MOV ESI,dword ptr [EAX + 0x6b8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6b8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73025f;}
case 0x73025f:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73025full));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730261;}
case 0x730261:{ // FLD float ptr [EAX + 0x6bc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6bcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730261ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730267;}
case 0x730267:{ // FLD float ptr [EAX + 0x6c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x6c0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730267ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x73026d;}
case 0x73026d:{ // MOV dword ptr [ECX + 0x58],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730270;}
case 0x730270:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x730272;}
case 0x730272:{ // FSTP float ptr [ECX + 0x5c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x5cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730272ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730275;}
case 0x730275:{ // FSTP float ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730275ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x730278;}
case 0x730278:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73027b;}
case 0x73027b:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73027bull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x73027d;}
case 0x73027d:{ // MOV dword ptr [ECX + 0x64],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x64ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730280;}
case 0x730280:{ // FLD float ptr [EAX + 0x7dc]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7dcull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x730280ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730286;}
case 0x730286:{ // MOV ESI,dword ptr [EAX + 0x7e4]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7e4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73028c;}
case 0x73028c:{ // FLD float ptr [EAX + 0x7e0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7e0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73028cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<4>(c,0xa900,m<4>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<4>(c,0xa900),4,0x0ull,4,10));
return 0x730292;}
case 0x730292:{ // MOV dword ptr [EBP + 0xc],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730295;}
case 0x730295:{ // FLD ST1
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x730297;}
case 0x730297:{ // MOV ESI,dword ptr [EAX + 0x7d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7d8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x73029d;}
case 0x73029d:{ // FSTP float ptr [ECX + 0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x6cull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x73029dull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7302a0;}
case 0x7302a0:{ // MOV dword ptr [ECX + 0x68],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x68ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7302a3;}
case 0x7302a3:{ // MOV ESI,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7302a6;}
case 0x7302a6:{ // FSTP float ptr [ECX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x70ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7302a6ull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7302a9;}
case 0x7302a9:{ // MOV dword ptr [ECX + 0x74],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x74ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7302ac;}
case 0x7302ac:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7302af;}
case 0x7302af:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7302afull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7302b1;}
case 0x7302b1:{ // ADD ECX,0x80
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),0x80ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x80ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7302b7;}
case 0x7302b7:{ // DEC EDX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7302b8;}
case 0x7302b8:{ // JNZ 0x0073014c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x73014c;}
return 0x7302be;}
case 0x7302be:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7302bf;}
case 0x7302bf:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7302c0;}
case 0x7302c0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7302c1;}
case 0x7302c1:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7302c2;}
case 0x7302c2:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x7302c4;}
case 0x7302c4:{ // CALL 0x0072dcd5
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7302c9ull);
return 0x72dcd5;
return 0x7302c9;}
case 0x7302c9:{ // TEST byte ptr [ESP + 0x8],0x1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x7600)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7302ce;}
case 0x7302ce:{ // JZ 0x007302d7
if(r<1>(c,0x206)){return 0x7302d7;}
return 0x7302d0;}
case 0x7302d0:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7302d1;}
case 0x7302d1:{ // CALL 0x00575630
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7302d6ull);
return 0x575630;
return 0x7302d6;}
case 0x7302d6:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7302d7;}
case 0x7302d7:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x7302d9;}
case 0x7302d9:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7302da;}
case 0x7302da:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7302dd;}
case 0x7302dd:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7302de;}
case 0x7302de:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x7302e0;}
case 0x7302e0:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7302e1;}
case 0x7302e1:{ // MOV EDX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7302e4;}
case 0x7302e4:{ // LEA EAX,[0x818eb8]
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x818eb8ull));
return 0x7302ea;}
case 0x7302ea:{ // MOV EBX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7302ed;}
case 0x7302ed:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7302f0;}
case 0x7302f0:{ // SUB ESP,0x20
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7302f3;}
case 0x7302f3:{ // MOVQ MM4,qword ptr [EDX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7302f7;}
case 0x7302f7:{ // MOVQ MM5,qword ptr [EDX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7302fb;}
case 0x7302fb:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7302fe;}
case 0x7302fe:{ // MOVQ MM6,qword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730302;}
case 0x730302:{ // MOVQ MM1,MM5
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x730305;}
case 0x730305:{ // MOVQ MM7,qword ptr [EDX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730309;}
case 0x730309:{ // MOVQ MM2,MM6
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x73030c;}
case 0x73030c:{ // MOVQ MM3,MM7
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x73030f;}
case 0x73030f:{ // PUNPCKHDQ MM4,MM4
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
return 0x730312;}
case 0x730312:{ // PUNPCKHDQ MM5,MM5
wr<4>(c,0x1150,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x730315;}
case 0x730315:{ // PUNPCKHDQ MM6,MM6
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
return 0x730318;}
case 0x730318:{ // PUNPCKHDQ MM7,MM7
wr<4>(c,0x1170,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x73031b;}
case 0x73031b:{ // PSRLQ MM4,0x10
wr<8>(c,0x1140,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1140),0x10ull));
return 0x73031f;}
case 0x73031f:{ // PUNPCKLDQ MM0,MM0
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x730322;}
case 0x730322:{ // PSRLQ MM5,0x10
wr<8>(c,0x1150,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1150),0x10ull));
return 0x730326;}
case 0x730326:{ // PUNPCKLDQ MM1,MM1
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x730329;}
case 0x730329:{ // PSRLQ MM6,0x10
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x10ull));
return 0x73032d;}
case 0x73032d:{ // PUNPCKLDQ MM2,MM2
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x730330;}
case 0x730330:{ // PSRLQ MM7,0x10
wr<8>(c,0x1170,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1170),0x10ull));
return 0x730334;}
case 0x730334:{ // PUNPCKLDQ MM3,MM3
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x730337;}
case 0x730337:{ // PSRLQ MM0,0x10
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x10ull));
return 0x73033b;}
case 0x73033b:{ // PUNPCKLDQ MM4,MM0
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1100)));
return 0x73033e;}
case 0x73033e:{ // PSRLQ MM1,0x10
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x10ull));
return 0x730342;}
case 0x730342:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730345;}
case 0x730345:{ // PUNPCKLDQ MM5,MM1
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1110)));
return 0x730348;}
case 0x730348:{ // MOVQ MM1,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73034c;}
case 0x73034c:{ // PSRLQ MM2,0x10
wr<8>(c,0x1120,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1120),0x10ull));
return 0x730350;}
case 0x730350:{ // PUNPCKLDQ MM6,MM2
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x730353;}
case 0x730353:{ // PSRLQ MM3,0x10
wr<8>(c,0x1130,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1130),0x10ull));
return 0x730357;}
case 0x730357:{ // MOVQ MM2,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73035b;}
case 0x73035b:{ // PUNPCKLDQ MM7,MM3
wr<4>(c,0x1174,eval<Op::COPY,4,4>(r<4>(c,0x1130)));
return 0x73035e;}
case 0x73035e:{ // MOVQ MM3,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730362;}
case 0x730362:{ // PSUBW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x730365;}
case 0x730365:{ // MOVQ qword ptr [ESP],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xa400));
return 0x730369;}
case 0x730369:{ // PSUBW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x73036c;}
case 0x73036c:{ // MOVQ qword ptr [ESP + 0x8],MM1
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x730371;}
case 0x730371:{ // PSUBW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x730374;}
case 0x730374:{ // MOVQ qword ptr [ESP + 0x10],MM2
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x730379;}
case 0x730379:{ // PSUBW MM3,MM7
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1170)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1172)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1174)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1176)));
return 0x73037c;}
case 0x73037c:{ // MOVQ qword ptr [ESP + 0x18],MM3
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x730381;}
case 0x730381:{ // MOVQ MM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730384;}
case 0x730384:{ // MOVQ MM1,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730388;}
case 0x730388:{ // PADDW MM0,MM4
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1140)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1142)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1144)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1146)));
return 0x73038b;}
case 0x73038b:{ // MOVQ MM2,qword ptr [EDX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73038f;}
case 0x73038f:{ // PADDW MM1,MM5
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1150)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1152)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1154)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1156)));
return 0x730392;}
case 0x730392:{ // MOVQ MM3,qword ptr [EDX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730396;}
case 0x730396:{ // PADDW MM2,MM6
wr<2>(c,0x1120,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1160)));
wr<2>(c,0x1122,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1162)));
wr<2>(c,0x1124,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1164)));
wr<2>(c,0x1126,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1166)));
return 0x730399;}
case 0x730399:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73039c;}
case 0x73039c:{ // PADDW MM3,MM7
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1170)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1172)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1174)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1176)));
return 0x73039f;}
case 0x73039f:{ // MOVQ MM5,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7303a3;}
case 0x7303a3:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7303a6;}
case 0x7303a6:{ // MOVQ MM6,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7303aa;}
case 0x7303aa:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7303ad;}
case 0x7303ad:{ // MOVQ MM7,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7303b1;}
case 0x7303b1:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7303b4;}
case 0x7303b4:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7303b7;}
case 0x7303b7:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7303ba;}
case 0x7303ba:{ // MOVQ MM4,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7303be;}
case 0x7303be:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7303c1;}
case 0x7303c1:{ // MOVQ MM5,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7303c5;}
case 0x7303c5:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7303c8;}
case 0x7303c8:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7303cb;}
case 0x7303cb:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7303cf;}
case 0x7303cf:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7303d2;}
case 0x7303d2:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7303d6;}
case 0x7303d6:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x7303d9;}
case 0x7303d9:{ // MOV word ptr [EBX + 0x200],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x200ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7303e0;}
case 0x7303e0:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7303e3;}
case 0x7303e3:{ // MOVQ MM6,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7303e7;}
case 0x7303e7:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7303ea;}
case 0x7303ea:{ // MOVQ MM7,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7303ee;}
case 0x7303ee:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7303f1;}
case 0x7303f1:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7303f4;}
case 0x7303f4:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7303f7;}
case 0x7303f7:{ // MOVQ MM4,qword ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7303fb;}
case 0x7303fb:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7303fe;}
case 0x7303fe:{ // MOVQ MM5,qword ptr [EAX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730402;}
case 0x730402:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730405;}
case 0x730405:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730408;}
case 0x730408:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x73040c;}
case 0x73040c:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x73040f;}
case 0x73040f:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730413;}
case 0x730413:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730416;}
case 0x730416:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730419;}
case 0x730419:{ // MOVQ MM6,qword ptr [EAX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73041d;}
case 0x73041d:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730420;}
case 0x730420:{ // MOVQ MM7,qword ptr [EAX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730424;}
case 0x730424:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730427;}
case 0x730427:{ // MOV word ptr [EBX + 0x1c0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1c0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x73042e;}
case 0x73042e:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730431;}
case 0x730431:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730434;}
case 0x730434:{ // MOVQ MM4,qword ptr [EAX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730438;}
case 0x730438:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x73043b;}
case 0x73043b:{ // MOVQ MM5,qword ptr [EAX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73043f;}
case 0x73043f:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730442;}
case 0x730442:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730445;}
case 0x730445:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730449;}
case 0x730449:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x73044c;}
case 0x73044c:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730450;}
case 0x730450:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730453;}
case 0x730453:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730456;}
case 0x730456:{ // MOVQ MM6,qword ptr [EAX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73045a;}
case 0x73045a:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x73045d;}
case 0x73045d:{ // MOVQ MM7,qword ptr [EAX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730461;}
case 0x730461:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730464;}
case 0x730464:{ // MOV word ptr [EBX + 0x180],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x180ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x73046b;}
case 0x73046b:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x73046e;}
case 0x73046e:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730471;}
case 0x730471:{ // MOVQ MM4,qword ptr [EAX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730478;}
case 0x730478:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x73047b;}
case 0x73047b:{ // MOVQ MM5,qword ptr [EAX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730482;}
case 0x730482:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730485;}
case 0x730485:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730488;}
case 0x730488:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x73048c;}
case 0x73048c:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x73048f;}
case 0x73048f:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730493;}
case 0x730493:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730496;}
case 0x730496:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730499;}
case 0x730499:{ // MOVQ MM6,qword ptr [EAX + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7304a0;}
case 0x7304a0:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7304a3;}
case 0x7304a3:{ // MOVQ MM7,qword ptr [EAX + 0x98]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x98ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7304aa;}
case 0x7304aa:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7304ad;}
case 0x7304ad:{ // MOV word ptr [EBX + 0x140],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x140ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7304b4;}
case 0x7304b4:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7304b7;}
case 0x7304b7:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7304ba;}
case 0x7304ba:{ // MOVQ MM4,qword ptr [EAX + 0xa0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7304c1;}
case 0x7304c1:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7304c4;}
case 0x7304c4:{ // MOVQ MM5,qword ptr [EAX + 0xa8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xa8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7304cb;}
case 0x7304cb:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7304ce;}
case 0x7304ce:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7304d1;}
case 0x7304d1:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7304d5;}
case 0x7304d5:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7304d8;}
case 0x7304d8:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7304dc;}
case 0x7304dc:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x7304df;}
case 0x7304df:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7304e2;}
case 0x7304e2:{ // MOVQ MM6,qword ptr [EAX + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xb0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7304e9;}
case 0x7304e9:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7304ec;}
case 0x7304ec:{ // MOVQ MM7,qword ptr [EAX + 0xb8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xb8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7304f3;}
case 0x7304f3:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7304f6;}
case 0x7304f6:{ // MOV word ptr [EBX + 0x100],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x100ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7304fd;}
case 0x7304fd:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730500;}
case 0x730500:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730503;}
case 0x730503:{ // MOVQ MM4,qword ptr [EAX + 0xc0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xc0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73050a;}
case 0x73050a:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x73050d;}
case 0x73050d:{ // MOVQ MM5,qword ptr [EAX + 0xc8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xc8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730514;}
case 0x730514:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730517;}
case 0x730517:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x73051a;}
case 0x73051a:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x73051e;}
case 0x73051e:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730521;}
case 0x730521:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730525;}
case 0x730525:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730528;}
case 0x730528:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x73052b;}
case 0x73052b:{ // MOVQ MM6,qword ptr [EAX + 0xd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730532;}
case 0x730532:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730535;}
case 0x730535:{ // MOVQ MM7,qword ptr [EAX + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xd8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73053c;}
case 0x73053c:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x73053f;}
case 0x73053f:{ // MOV word ptr [EBX + 0xc0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xc0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730546;}
case 0x730546:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730549;}
case 0x730549:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x73054c;}
case 0x73054c:{ // MOVQ MM4,qword ptr [EAX + 0xe0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730553;}
case 0x730553:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730556;}
case 0x730556:{ // MOVQ MM5,qword ptr [EAX + 0xe8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xe8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73055d;}
case 0x73055d:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730560;}
case 0x730560:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730563;}
case 0x730563:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730567;}
case 0x730567:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x73056a;}
case 0x73056a:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x73056e;}
case 0x73056e:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730571;}
case 0x730571:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730574;}
case 0x730574:{ // MOVQ MM6,qword ptr [EAX + 0xf0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xf0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73057b;}
case 0x73057b:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x73057e;}
case 0x73057e:{ // MOVQ MM7,qword ptr [EAX + 0xf8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xf8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730585;}
case 0x730585:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730588;}
case 0x730588:{ // MOV word ptr [EBX + 0x80],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x73058f;}
case 0x73058f:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730592;}
case 0x730592:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730595;}
case 0x730595:{ // MOVQ MM4,qword ptr [EAX + 0x100]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x100ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73059c;}
case 0x73059c:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x73059f;}
case 0x73059f:{ // MOVQ MM5,qword ptr [EAX + 0x108]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x108ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7305a6;}
case 0x7305a6:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7305a9;}
case 0x7305a9:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7305ac;}
case 0x7305ac:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7305b0;}
case 0x7305b0:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7305b3;}
case 0x7305b3:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7305b7;}
case 0x7305b7:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x7305ba;}
case 0x7305ba:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7305bd;}
case 0x7305bd:{ // MOVQ MM6,qword ptr [EAX + 0x110]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x110ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7305c4;}
case 0x7305c4:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7305c7;}
case 0x7305c7:{ // MOVQ MM7,qword ptr [EAX + 0x118]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x118ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7305ce;}
case 0x7305ce:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7305d1;}
case 0x7305d1:{ // MOV word ptr [EBX + 0x40],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7305d5;}
case 0x7305d5:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7305d8;}
case 0x7305d8:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7305db;}
case 0x7305db:{ // MOVQ MM4,qword ptr [EAX + 0x120]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x120ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7305e2;}
case 0x7305e2:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7305e5;}
case 0x7305e5:{ // MOVQ MM5,qword ptr [EAX + 0x128]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x128ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7305ec;}
case 0x7305ec:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7305ef;}
case 0x7305ef:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7305f2;}
case 0x7305f2:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7305f6;}
case 0x7305f6:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7305f9;}
case 0x7305f9:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7305fd;}
case 0x7305fd:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730600;}
case 0x730600:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730603;}
case 0x730603:{ // MOVQ MM6,qword ptr [EAX + 0x130]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x130ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73060a;}
case 0x73060a:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x73060d;}
case 0x73060d:{ // MOVQ MM7,qword ptr [EAX + 0x138]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x138ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730614;}
case 0x730614:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730617;}
case 0x730617:{ // MOV word ptr [EBX],DX
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,r<4>(c,0xc),u<2>(c,0xa200));
return 0x73061a;}
case 0x73061a:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x73061d;}
case 0x73061d:{ // MOV word ptr [ECX],DX
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,r<4>(c,0x4),u<2>(c,0xa200));
return 0x730620;}
case 0x730620:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730623;}
case 0x730623:{ // MOVQ MM4,qword ptr [EAX + 0x140]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x140ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73062a;}
case 0x73062a:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x73062d;}
case 0x73062d:{ // MOVQ MM5,qword ptr [EAX + 0x148]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x148ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730634;}
case 0x730634:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730637;}
case 0x730637:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x73063a;}
case 0x73063a:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x73063e;}
case 0x73063e:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730641;}
case 0x730641:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730645;}
case 0x730645:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730648;}
case 0x730648:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x73064b;}
case 0x73064b:{ // MOVQ MM6,qword ptr [EAX + 0x150]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x150ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730652;}
case 0x730652:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730655;}
case 0x730655:{ // MOVQ MM7,qword ptr [EAX + 0x158]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x158ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73065c;}
case 0x73065c:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x73065f;}
case 0x73065f:{ // MOV word ptr [ECX + 0x40],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730663;}
case 0x730663:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730666;}
case 0x730666:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730669;}
case 0x730669:{ // MOVQ MM4,qword ptr [EAX + 0x160]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x160ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730670;}
case 0x730670:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730673;}
case 0x730673:{ // MOVQ MM5,qword ptr [EAX + 0x168]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x168ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73067a;}
case 0x73067a:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x73067d;}
case 0x73067d:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730680;}
case 0x730680:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730684;}
case 0x730684:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730687;}
case 0x730687:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x73068b;}
case 0x73068b:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x73068e;}
case 0x73068e:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730691;}
case 0x730691:{ // MOVQ MM6,qword ptr [EAX + 0x170]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x170ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730698;}
case 0x730698:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x73069b;}
case 0x73069b:{ // MOVQ MM7,qword ptr [EAX + 0x178]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x178ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7306a2;}
case 0x7306a2:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7306a5;}
case 0x7306a5:{ // MOV word ptr [ECX + 0x80],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x80ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7306ac;}
case 0x7306ac:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7306af;}
case 0x7306af:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7306b2;}
case 0x7306b2:{ // MOVQ MM4,qword ptr [EAX + 0x180]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x180ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7306b9;}
case 0x7306b9:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7306bc;}
case 0x7306bc:{ // MOVQ MM5,qword ptr [EAX + 0x188]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x188ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7306c3;}
case 0x7306c3:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7306c6;}
case 0x7306c6:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7306c9;}
case 0x7306c9:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7306cd;}
case 0x7306cd:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7306d0;}
case 0x7306d0:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7306d4;}
case 0x7306d4:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x7306d7;}
case 0x7306d7:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7306da;}
case 0x7306da:{ // MOVQ MM6,qword ptr [EAX + 0x190]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x190ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7306e1;}
case 0x7306e1:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7306e4;}
case 0x7306e4:{ // MOVQ MM7,qword ptr [EAX + 0x198]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x198ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7306eb;}
case 0x7306eb:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7306ee;}
case 0x7306ee:{ // MOV word ptr [ECX + 0xc0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xc0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7306f5;}
case 0x7306f5:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7306f8;}
case 0x7306f8:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7306fb;}
case 0x7306fb:{ // MOVQ MM4,qword ptr [EAX + 0x1a0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1a0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730702;}
case 0x730702:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730705;}
case 0x730705:{ // MOVQ MM5,qword ptr [EAX + 0x1a8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1a8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73070c;}
case 0x73070c:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x73070f;}
case 0x73070f:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730712;}
case 0x730712:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730716;}
case 0x730716:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730719;}
case 0x730719:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x73071d;}
case 0x73071d:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730720;}
case 0x730720:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730723;}
case 0x730723:{ // MOVQ MM6,qword ptr [EAX + 0x1b0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1b0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73072a;}
case 0x73072a:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x73072d;}
case 0x73072d:{ // MOVQ MM7,qword ptr [EAX + 0x1b8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1b8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730734;}
case 0x730734:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730737;}
case 0x730737:{ // MOV word ptr [ECX + 0x100],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x100ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x73073e;}
case 0x73073e:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730741;}
case 0x730741:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730744;}
case 0x730744:{ // MOVQ MM4,qword ptr [EAX + 0x1c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73074b;}
case 0x73074b:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x73074e;}
case 0x73074e:{ // MOVQ MM5,qword ptr [EAX + 0x1c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730755;}
case 0x730755:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730758;}
case 0x730758:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x73075b;}
case 0x73075b:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x73075f;}
case 0x73075f:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730762;}
case 0x730762:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730766;}
case 0x730766:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730769;}
case 0x730769:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x73076c;}
case 0x73076c:{ // MOVQ MM6,qword ptr [EAX + 0x1d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730773;}
case 0x730773:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730776;}
case 0x730776:{ // MOVQ MM7,qword ptr [EAX + 0x1d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73077d;}
case 0x73077d:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730780;}
case 0x730780:{ // MOV word ptr [ECX + 0x140],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x140ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730787;}
case 0x730787:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x73078a;}
case 0x73078a:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x73078d;}
case 0x73078d:{ // MOVQ MM4,qword ptr [EAX + 0x1e0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1e0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730794;}
case 0x730794:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730797;}
case 0x730797:{ // MOVQ MM5,qword ptr [EAX + 0x1e8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1e8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73079e;}
case 0x73079e:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7307a1;}
case 0x7307a1:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7307a4;}
case 0x7307a4:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7307a8;}
case 0x7307a8:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7307ab;}
case 0x7307ab:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7307af;}
case 0x7307af:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x7307b2;}
case 0x7307b2:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7307b5;}
case 0x7307b5:{ // MOVQ MM6,qword ptr [EAX + 0x1f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1f0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7307bc;}
case 0x7307bc:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7307bf;}
case 0x7307bf:{ // MOVQ MM7,qword ptr [EAX + 0x1f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1f8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7307c6;}
case 0x7307c6:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7307c9;}
case 0x7307c9:{ // MOV word ptr [ECX + 0x180],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x180ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7307d0;}
case 0x7307d0:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7307d3;}
case 0x7307d3:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7307d6;}
case 0x7307d6:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7307d9;}
case 0x7307d9:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7307dc;}
case 0x7307dc:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7307df;}
case 0x7307df:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7307e3;}
case 0x7307e3:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7307e6;}
case 0x7307e6:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7307ea;}
case 0x7307ea:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x7307ed;}
case 0x7307ed:{ // LEA EAX,[0x818cb8]
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x818cb8ull));
return 0x7307f3;}
case 0x7307f3:{ // MOVQ MM0,qword ptr [ESP]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x10)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7307f7;}
case 0x7307f7:{ // MOVQ MM1,qword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7307fc;}
case 0x7307fc:{ // MOVQ MM2,qword ptr [ESP + 0x10]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730801;}
case 0x730801:{ // MOVQ MM3,qword ptr [ESP + 0x18]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x18ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730806;}
case 0x730806:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730809;}
case 0x730809:{ // MOVQ MM5,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73080d;}
case 0x73080d:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730810;}
case 0x730810:{ // MOVQ MM6,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730814;}
case 0x730814:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730817;}
case 0x730817:{ // MOVQ MM7,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73081b;}
case 0x73081b:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x73081e;}
case 0x73081e:{ // MOV word ptr [ECX + 0x1c0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1c0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730825;}
case 0x730825:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730828;}
case 0x730828:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x73082b;}
case 0x73082b:{ // MOVQ MM4,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73082f;}
case 0x73082f:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730832;}
case 0x730832:{ // MOVQ MM5,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730836;}
case 0x730836:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730839;}
case 0x730839:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x73083c;}
case 0x73083c:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730840;}
case 0x730840:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730843;}
case 0x730843:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730847;}
case 0x730847:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x73084a;}
case 0x73084a:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x73084d;}
case 0x73084d:{ // MOVQ MM6,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730851;}
case 0x730851:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730854;}
case 0x730854:{ // MOVQ MM7,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730858;}
case 0x730858:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x73085b;}
case 0x73085b:{ // MOV word ptr [EBX + 0x1e0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1e0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730862;}
case 0x730862:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730865;}
case 0x730865:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730868;}
case 0x730868:{ // MOVQ MM4,qword ptr [EAX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73086c;}
case 0x73086c:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x73086f;}
case 0x73086f:{ // MOVQ MM5,qword ptr [EAX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730873;}
case 0x730873:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730876;}
case 0x730876:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730879;}
case 0x730879:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x73087d;}
case 0x73087d:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730880;}
case 0x730880:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730884;}
case 0x730884:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730887;}
case 0x730887:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x73088a;}
case 0x73088a:{ // MOVQ MM6,qword ptr [EAX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73088e;}
case 0x73088e:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730891;}
case 0x730891:{ // MOVQ MM7,qword ptr [EAX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730895;}
case 0x730895:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730898;}
case 0x730898:{ // MOV word ptr [EBX + 0x1a0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1a0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x73089f;}
case 0x73089f:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7308a2;}
case 0x7308a2:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7308a5;}
case 0x7308a5:{ // MOVQ MM4,qword ptr [EAX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7308a9;}
case 0x7308a9:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7308ac;}
case 0x7308ac:{ // MOVQ MM5,qword ptr [EAX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7308b0;}
case 0x7308b0:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7308b3;}
case 0x7308b3:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7308b6;}
case 0x7308b6:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7308ba;}
case 0x7308ba:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7308bd;}
case 0x7308bd:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7308c1;}
case 0x7308c1:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x7308c4;}
case 0x7308c4:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7308c7;}
case 0x7308c7:{ // MOVQ MM6,qword ptr [EAX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7308cb;}
case 0x7308cb:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7308ce;}
case 0x7308ce:{ // MOVQ MM7,qword ptr [EAX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7308d2;}
case 0x7308d2:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7308d5;}
case 0x7308d5:{ // MOV word ptr [EBX + 0x160],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x160ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7308dc;}
case 0x7308dc:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7308df;}
case 0x7308df:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7308e2;}
case 0x7308e2:{ // MOVQ MM4,qword ptr [EAX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7308e9;}
case 0x7308e9:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7308ec;}
case 0x7308ec:{ // MOVQ MM5,qword ptr [EAX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7308f3;}
case 0x7308f3:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7308f6;}
case 0x7308f6:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7308f9;}
case 0x7308f9:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7308fd;}
case 0x7308fd:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730900;}
case 0x730900:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730904;}
case 0x730904:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730907;}
case 0x730907:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x73090a;}
case 0x73090a:{ // MOVQ MM6,qword ptr [EAX + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730911;}
case 0x730911:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730914;}
case 0x730914:{ // MOVQ MM7,qword ptr [EAX + 0x98]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x98ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73091b;}
case 0x73091b:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x73091e;}
case 0x73091e:{ // MOV word ptr [EBX + 0x120],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x120ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730925;}
case 0x730925:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730928;}
case 0x730928:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x73092b;}
case 0x73092b:{ // MOVQ MM4,qword ptr [EAX + 0xa0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730932;}
case 0x730932:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730935;}
case 0x730935:{ // MOVQ MM5,qword ptr [EAX + 0xa8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xa8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73093c;}
case 0x73093c:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x73093f;}
case 0x73093f:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730942;}
case 0x730942:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730946;}
case 0x730946:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730949;}
case 0x730949:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x73094d;}
case 0x73094d:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730950;}
case 0x730950:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730953;}
case 0x730953:{ // MOVQ MM6,qword ptr [EAX + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xb0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73095a;}
case 0x73095a:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x73095d;}
case 0x73095d:{ // MOVQ MM7,qword ptr [EAX + 0xb8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xb8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730964;}
case 0x730964:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730967;}
case 0x730967:{ // MOV word ptr [EBX + 0xe0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xe0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x73096e;}
case 0x73096e:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730971;}
case 0x730971:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730974;}
case 0x730974:{ // MOVQ MM4,qword ptr [EAX + 0xc0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xc0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x73097b;}
case 0x73097b:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x73097e;}
case 0x73097e:{ // MOVQ MM5,qword ptr [EAX + 0xc8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xc8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730985;}
case 0x730985:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730988;}
case 0x730988:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x73098b;}
case 0x73098b:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x73098f;}
case 0x73098f:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730992;}
case 0x730992:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730996;}
case 0x730996:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730999;}
case 0x730999:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x73099c;}
case 0x73099c:{ // MOVQ MM6,qword ptr [EAX + 0xd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7309a3;}
case 0x7309a3:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7309a6;}
case 0x7309a6:{ // MOVQ MM7,qword ptr [EAX + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xd8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7309ad;}
case 0x7309ad:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7309b0;}
case 0x7309b0:{ // MOV word ptr [EBX + 0xa0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xa0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7309b7;}
case 0x7309b7:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x7309ba;}
case 0x7309ba:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x7309bd;}
case 0x7309bd:{ // MOVQ MM4,qword ptr [EAX + 0xe0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7309c4;}
case 0x7309c4:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x7309c7;}
case 0x7309c7:{ // MOVQ MM5,qword ptr [EAX + 0xe8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xe8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7309ce;}
case 0x7309ce:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7309d1;}
case 0x7309d1:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7309d4;}
case 0x7309d4:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x7309d8;}
case 0x7309d8:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x7309db;}
case 0x7309db:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x7309df;}
case 0x7309df:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x7309e2;}
case 0x7309e2:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x7309e5;}
case 0x7309e5:{ // MOVQ MM6,qword ptr [EAX + 0xf0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xf0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7309ec;}
case 0x7309ec:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x7309ef;}
case 0x7309ef:{ // MOVQ MM7,qword ptr [EAX + 0xf8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xf8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7309f6;}
case 0x7309f6:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x7309f9;}
case 0x7309f9:{ // MOV word ptr [EBX + 0x60],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x60ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7309fd;}
case 0x7309fd:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730a00;}
case 0x730a00:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730a03;}
case 0x730a03:{ // MOVQ MM4,qword ptr [EAX + 0x100]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x100ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a0a;}
case 0x730a0a:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730a0d;}
case 0x730a0d:{ // MOVQ MM5,qword ptr [EAX + 0x108]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x108ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a14;}
case 0x730a14:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730a17;}
case 0x730a17:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730a1a;}
case 0x730a1a:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730a1e;}
case 0x730a1e:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730a21;}
case 0x730a21:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730a25;}
case 0x730a25:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730a28;}
case 0x730a28:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730a2b;}
case 0x730a2b:{ // MOVQ MM6,qword ptr [EAX + 0x110]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x110ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a32;}
case 0x730a32:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730a35;}
case 0x730a35:{ // MOVQ MM7,qword ptr [EAX + 0x118]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x118ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a3c;}
case 0x730a3c:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730a3f;}
case 0x730a3f:{ // MOV word ptr [EBX + 0x20],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730a43;}
case 0x730a43:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730a46;}
case 0x730a46:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730a49;}
case 0x730a49:{ // MOVQ MM4,qword ptr [EAX + 0x120]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x120ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a50;}
case 0x730a50:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730a53;}
case 0x730a53:{ // MOVQ MM5,qword ptr [EAX + 0x128]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x128ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a5a;}
case 0x730a5a:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730a5d;}
case 0x730a5d:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730a60;}
case 0x730a60:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730a64;}
case 0x730a64:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730a67;}
case 0x730a67:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730a6b;}
case 0x730a6b:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730a6e;}
case 0x730a6e:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730a71;}
case 0x730a71:{ // MOVQ MM6,qword ptr [EAX + 0x130]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x130ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a78;}
case 0x730a78:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730a7b;}
case 0x730a7b:{ // MOVQ MM7,qword ptr [EAX + 0x138]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x138ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a82;}
case 0x730a82:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730a85;}
case 0x730a85:{ // MOV word ptr [ECX + 0x20],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730a89;}
case 0x730a89:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730a8c;}
case 0x730a8c:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730a8f;}
case 0x730a8f:{ // MOVQ MM4,qword ptr [EAX + 0x140]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x140ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730a96;}
case 0x730a96:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730a99;}
case 0x730a99:{ // MOVQ MM5,qword ptr [EAX + 0x148]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x148ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730aa0;}
case 0x730aa0:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730aa3;}
case 0x730aa3:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730aa6;}
case 0x730aa6:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730aaa;}
case 0x730aaa:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730aad;}
case 0x730aad:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730ab1;}
case 0x730ab1:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730ab4;}
case 0x730ab4:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730ab7;}
case 0x730ab7:{ // MOVQ MM6,qword ptr [EAX + 0x150]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x150ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730abe;}
case 0x730abe:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730ac1;}
case 0x730ac1:{ // MOVQ MM7,qword ptr [EAX + 0x158]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x158ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730ac8;}
case 0x730ac8:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730acb;}
case 0x730acb:{ // MOV word ptr [ECX + 0x60],DX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730acf;}
case 0x730acf:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730ad2;}
case 0x730ad2:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730ad5;}
case 0x730ad5:{ // MOVQ MM4,qword ptr [EAX + 0x160]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x160ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730adc;}
case 0x730adc:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730adf;}
case 0x730adf:{ // MOVQ MM5,qword ptr [EAX + 0x168]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x168ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730ae6;}
case 0x730ae6:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730ae9;}
case 0x730ae9:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730aec;}
case 0x730aec:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730af0;}
case 0x730af0:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730af3;}
case 0x730af3:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730af7;}
case 0x730af7:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730afa;}
case 0x730afa:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730afd;}
case 0x730afd:{ // MOVQ MM6,qword ptr [EAX + 0x170]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x170ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b04;}
case 0x730b04:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730b07;}
case 0x730b07:{ // MOVQ MM7,qword ptr [EAX + 0x178]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x178ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b0e;}
case 0x730b0e:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730b11;}
case 0x730b11:{ // MOV word ptr [ECX + 0xa0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xa0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730b18;}
case 0x730b18:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730b1b;}
case 0x730b1b:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730b1e;}
case 0x730b1e:{ // MOVQ MM4,qword ptr [EAX + 0x180]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x180ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b25;}
case 0x730b25:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730b28;}
case 0x730b28:{ // MOVQ MM5,qword ptr [EAX + 0x188]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x188ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b2f;}
case 0x730b2f:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730b32;}
case 0x730b32:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730b35;}
case 0x730b35:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730b39;}
case 0x730b39:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730b3c;}
case 0x730b3c:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730b40;}
case 0x730b40:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730b43;}
case 0x730b43:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730b46;}
case 0x730b46:{ // MOVQ MM6,qword ptr [EAX + 0x190]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x190ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b4d;}
case 0x730b4d:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730b50;}
case 0x730b50:{ // MOVQ MM7,qword ptr [EAX + 0x198]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x198ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b57;}
case 0x730b57:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730b5a;}
case 0x730b5a:{ // MOV word ptr [ECX + 0xe0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xe0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730b61;}
case 0x730b61:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730b64;}
case 0x730b64:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730b67;}
case 0x730b67:{ // MOVQ MM4,qword ptr [EAX + 0x1a0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1a0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b6e;}
case 0x730b6e:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730b71;}
case 0x730b71:{ // MOVQ MM5,qword ptr [EAX + 0x1a8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1a8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b78;}
case 0x730b78:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730b7b;}
case 0x730b7b:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730b7e;}
case 0x730b7e:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730b82;}
case 0x730b82:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730b85;}
case 0x730b85:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730b89;}
case 0x730b89:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730b8c;}
case 0x730b8c:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730b8f;}
case 0x730b8f:{ // MOVQ MM6,qword ptr [EAX + 0x1b0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1b0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730b96;}
case 0x730b96:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730b99;}
case 0x730b99:{ // MOVQ MM7,qword ptr [EAX + 0x1b8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1b8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730ba0;}
case 0x730ba0:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730ba3;}
case 0x730ba3:{ // MOV word ptr [ECX + 0x120],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x120ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730baa;}
case 0x730baa:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730bad;}
case 0x730bad:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730bb0;}
case 0x730bb0:{ // MOVQ MM4,qword ptr [EAX + 0x1c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730bb7;}
case 0x730bb7:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730bba;}
case 0x730bba:{ // MOVQ MM5,qword ptr [EAX + 0x1c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730bc1;}
case 0x730bc1:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730bc4;}
case 0x730bc4:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730bc7;}
case 0x730bc7:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730bcb;}
case 0x730bcb:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730bce;}
case 0x730bce:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730bd2;}
case 0x730bd2:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730bd5;}
case 0x730bd5:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730bd8;}
case 0x730bd8:{ // MOVQ MM6,qword ptr [EAX + 0x1d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730bdf;}
case 0x730bdf:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730be2;}
case 0x730be2:{ // MOVQ MM7,qword ptr [EAX + 0x1d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730be9;}
case 0x730be9:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730bec;}
case 0x730bec:{ // MOV word ptr [ECX + 0x160],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x160ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730bf3;}
case 0x730bf3:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730bf6;}
case 0x730bf6:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730bf9;}
case 0x730bf9:{ // MOVQ MM4,qword ptr [EAX + 0x1e0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1e0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730c00;}
case 0x730c00:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730c03;}
case 0x730c03:{ // MOVQ MM5,qword ptr [EAX + 0x1e8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1e8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730c0a;}
case 0x730c0a:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730c0d;}
case 0x730c0d:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730c10;}
case 0x730c10:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730c14;}
case 0x730c14:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730c17;}
case 0x730c17:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730c1b;}
case 0x730c1b:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730c1e;}
case 0x730c1e:{ // PMADDWD MM4,MM0
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),r<8>(c,0x1100)}));
return 0x730c21;}
case 0x730c21:{ // MOVQ MM6,qword ptr [EAX + 0x1f0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1f0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730c28;}
case 0x730c28:{ // PMADDWD MM5,MM1
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x730c2b;}
case 0x730c2b:{ // MOVQ MM7,qword ptr [EAX + 0x1f8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1f8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730c32;}
case 0x730c32:{ // PMADDWD MM6,MM2
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),r<8>(c,0x1120)}));
return 0x730c35;}
case 0x730c35:{ // MOV word ptr [ECX + 0x1a0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1a0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730c3c;}
case 0x730c3c:{ // PMADDWD MM7,MM3
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),r<8>(c,0x1130)}));
return 0x730c3f;}
case 0x730c3f:{ // PADDD MM6,MM4
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1140)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1144)));
return 0x730c42;}
case 0x730c42:{ // PADDD MM7,MM5
wr<4>(c,0x1170,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1170),r<4>(c,0x1150)));
wr<4>(c,0x1174,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1174),r<4>(c,0x1154)));
return 0x730c45;}
case 0x730c45:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730c48;}
case 0x730c48:{ // MOVQ MM7,MM6
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x730c4b;}
case 0x730c4b:{ // PSRLQ MM6,0x20
wr<8>(c,0x1160,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1160),0x20ull));
return 0x730c4f;}
case 0x730c4f:{ // PADDD MM6,MM7
wr<4>(c,0x1160,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1160),r<4>(c,0x1170)));
wr<4>(c,0x1164,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1164),r<4>(c,0x1174)));
return 0x730c52;}
case 0x730c52:{ // PSRAD MM6,0xe
wr<4>(c,0x1160,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1160),0xeull));
wr<4>(c,0x1164,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1164),0xeull));
return 0x730c56;}
case 0x730c56:{ // MOVD EDX,MM6
wr<4>(c,0x8,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1160),0x0ull));
return 0x730c59;}
case 0x730c59:{ // MOV word ptr [ECX + 0x1e0],DX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1e0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x730c60;}
case 0x730c60:{ // ADD ESP,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x20ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730c63;}
case 0x730c63:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x730c64;}
case 0x730c64:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x730c65;}
case 0x730c65:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x730c66;}
case 0x730c66:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x730c67;}
case 0x730c67:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x730c69;}
case 0x730c69:{ // SUB ESP,0x48
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x48ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x48ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x48ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730c6c;}
case 0x730c6c:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x730c6d;}
case 0x730c6d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x730c6e;}
case 0x730c6e:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730c71;}
case 0x730c71:{ // MOV AL,byte ptr [ESI + ECX*0x1 + 0x38]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x7400)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x730c75;}
case 0x730c75:{ // DEC AL
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x0),0x1ull));
wr<1>(c,0x0,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730c77;}
case 0x730c77:{ // AND AL,0xf
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730c79;}
case 0x730c79:{ // MOV byte ptr [ESI + ECX*0x1 + 0x38],AL
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x38ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x7400),u<1>(c,0xa100));
return 0x730c7d;}
case 0x730c7d:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x730c7e;}
case 0x730c7e:{ // PUSH dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x730c81;}
case 0x730c81:{ // MOVZX EDI,AL
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x0)));
return 0x730c84;}
case 0x730c84:{ // MOV EAX,EDI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x730c86;}
case 0x730c86:{ // AND EAX,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730c89;}
case 0x730c89:{ // MOV EDX,EAX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x730c8b;}
case 0x730c8b:{ // LEA ESI,[ESI + ESI*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x730c8e;}
case 0x730c8e:{ // XOR EDX,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730c91;}
case 0x730c91:{ // LEA EBX,[EDI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x730c94;}
case 0x730c94:{ // SHL ESI,0x7
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x7ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x18,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x18),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
wu<1>(c,0x49f00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a000,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a000),r<1>(c,0x207)));
wu<1>(c,0x4a200,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x49f00)));
wr<1>(c,0x207,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a100),u<1>(c,0x4a200)));
wu<1>(c,0x4a500,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<1>(c,0x4a600,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4a700,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4a600),r<1>(c,0x206)));
wu<1>(c,0x4a800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4a500)));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4a700),u<1>(c,0x4a800)));
wu<4>(c,0x4aa00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x4ab00,eval<Op::POPCOUNT,1,4>(u<4>(c,0x4aa00)));
wu<1>(c,0x4ac00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4ab00),0x1ull));
wu<1>(c,0x4ae00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x4ac00),0x0ull));
wu<1>(c,0x4af00,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x49d00)));
wu<1>(c,0x4b000,eval<Op::INT_AND,1,1,1>(u<1>(c,0x4af00),r<1>(c,0x202)));
wu<1>(c,0x4b100,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49d00),u<1>(c,0x4ae00)));
wr<1>(c,0x202,eval<Op::INT_OR,1,1,1>(u<1>(c,0x4b000),u<1>(c,0x4b100)));
return 0x730c97;}
case 0x730c97:{ // ADD ESI,dword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
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
return 0x730c9a;}
case 0x730c9a:{ // ADD EDI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730c9c;}
case 0x730c9c:{ // LEA ECX,[EDX + EDX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x730c9f;}
case 0x730c9f:{ // SHL ECX,0x6
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x6ull,0x1full));
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
return 0x730ca2;}
case 0x730ca2:{ // LEA EAX,[EAX + EAX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x730ca5;}
case 0x730ca5:{ // ADD ECX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x18)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730ca7;}
case 0x730ca7:{ // SHL EAX,0x5
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x5ull,0x1full));
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
return 0x730caa;}
case 0x730caa:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730cad;}
case 0x730cad:{ // AND EDI,0xf
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730cb0;}
case 0x730cb0:{ // LEA ECX,[ECX + EBX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0xc),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x730cb3;}
case 0x730cb3:{ // ADD EDI,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730cb5;}
case 0x730cb5:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x730cb6;}
case 0x730cb6:{ // LEA EAX,[ESI + EDI*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x1c),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x730cb9;}
case 0x730cb9:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x730cba;}
case 0x730cba:{ // MOV dword ptr [EBP + -0x8],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730cbd;}
case 0x730cbd:{ // CALL 0x007302dd
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x730cc2ull);
return 0x7302dd;
return 0x730cc2;}
case 0x730cc2:{ // LEA EAX,[EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x730cc5;}
case 0x730cc5:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730cc8;}
case 0x730cc8:{ // MOV dword ptr [EBP + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x730ccb;}
case 0x730ccb:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730cce;}
case 0x730cce:{ // LEA EBX,[0x7d11e0]
wr<4>(c,0xc,eval<Op::COPY,4,4>(0x7d11e0ull));
return 0x730cd4;}
case 0x730cd4:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730cd6;}
case 0x730cd6:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730cd9;}
case 0x730cd9:{ // SUB EBX,EAX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<4>(c,0xc,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x730cdb;}
case 0x730cdb:{ // MOV EDX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x730cde;}
case 0x730cde:{ // MOVQ MM0,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730ce1;}
case 0x730ce1:{ // PMADDWD MM0,qword ptr [EBX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0xc)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x730ce4;}
case 0x730ce4:{ // MOVQ MM2,qword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730ce8;}
case 0x730ce8:{ // PMADDWD MM2,qword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x730cec;}
case 0x730cec:{ // MOVQ MM4,qword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730cf0;}
case 0x730cf0:{ // PMADDWD MM4,qword ptr [ECX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x730cf4;}
case 0x730cf4:{ // MOVQ MM6,qword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730cf8;}
case 0x730cf8:{ // PMADDWD MM6,qword ptr [ECX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x730cfc;}
case 0x730cfc:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x730cff;}
case 0x730cff:{ // MOVQ MM1,qword ptr [EBX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d03;}
case 0x730d03:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x730d06;}
case 0x730d06:{ // MOVQ MM3,qword ptr [EBX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d0a;}
case 0x730d0a:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x730d0d;}
case 0x730d0d:{ // MOVQ MM5,qword ptr [EBX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d11;}
case 0x730d11:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x730d14;}
case 0x730d14:{ // MOVQ MM7,qword ptr [EBX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d18;}
case 0x730d18:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x730d1c;}
case 0x730d1c:{ // PMADDWD MM1,qword ptr [ECX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x730d20;}
case 0x730d20:{ // PADDD MM2,MM0
wr<4>(c,0x1120,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1120),r<4>(c,0x1100)));
wr<4>(c,0x1124,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1124),r<4>(c,0x1104)));
return 0x730d23;}
case 0x730d23:{ // PMADDWD MM3,qword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x730d27;}
case 0x730d27:{ // PSRAD MM2,0xd
wr<4>(c,0x1120,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1120),0xdull));
wr<4>(c,0x1124,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1124),0xdull));
return 0x730d2b;}
case 0x730d2b:{ // PMADDWD MM5,qword ptr [ECX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x730d2f;}
case 0x730d2f:{ // PACKSSDW MM2,MM2
wr<8>(c,0x1120,user_op(c,524425,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x730d32;}
case 0x730d32:{ // PMADDWD MM7,qword ptr [ECX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x730d36;}
case 0x730d36:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x730d39;}
case 0x730d39:{ // MOV word ptr [EDX],AX
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,r<4>(c,0x8),u<2>(c,0xa200));
return 0x730d3c;}
case 0x730d3c:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x730d3f;}
case 0x730d3f:{ // MOVQ MM0,qword ptr [EBX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d46;}
case 0x730d46:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x730d49;}
case 0x730d49:{ // MOVQ MM2,qword ptr [EBX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d50;}
case 0x730d50:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x730d53;}
case 0x730d53:{ // MOVQ MM4,qword ptr [EBX + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d5a;}
case 0x730d5a:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x730d5d;}
case 0x730d5d:{ // MOVQ MM6,qword ptr [EBX + 0x98]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x98ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d64;}
case 0x730d64:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x730d68;}
case 0x730d68:{ // PMADDWD MM0,qword ptr [ECX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x730d6c;}
case 0x730d6c:{ // PADDD MM3,MM1
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1110)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1114)));
return 0x730d6f;}
case 0x730d6f:{ // PMADDWD MM2,qword ptr [ECX + 0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x48ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x730d73;}
case 0x730d73:{ // PSRAD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x730d77;}
case 0x730d77:{ // PMADDWD MM4,qword ptr [ECX + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x730d7b;}
case 0x730d7b:{ // PACKSSDW MM3,MM3
wr<8>(c,0x1130,user_op(c,524425,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x730d7e;}
case 0x730d7e:{ // PMADDWD MM6,qword ptr [ECX + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x58ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x730d82;}
case 0x730d82:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x730d85;}
case 0x730d85:{ // MOV word ptr [EDX + 0x2],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730d89;}
case 0x730d89:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x730d8c;}
case 0x730d8c:{ // MOVQ MM1,qword ptr [EBX + 0xc0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xc0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d93;}
case 0x730d93:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x730d96;}
case 0x730d96:{ // MOVQ MM3,qword ptr [EBX + 0xc8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xc8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730d9d;}
case 0x730d9d:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x730da0;}
case 0x730da0:{ // MOVQ MM5,qword ptr [EBX + 0xd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730da7;}
case 0x730da7:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x730daa;}
case 0x730daa:{ // MOVQ MM7,qword ptr [EBX + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xd8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730db1;}
case 0x730db1:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x730db5;}
case 0x730db5:{ // PMADDWD MM1,qword ptr [ECX + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x730db9;}
case 0x730db9:{ // PADDD MM2,MM0
wr<4>(c,0x1120,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1120),r<4>(c,0x1100)));
wr<4>(c,0x1124,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1124),r<4>(c,0x1104)));
return 0x730dbc;}
case 0x730dbc:{ // PMADDWD MM3,qword ptr [ECX + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x68ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x730dc0;}
case 0x730dc0:{ // PSRAD MM2,0xd
wr<4>(c,0x1120,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1120),0xdull));
wr<4>(c,0x1124,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1124),0xdull));
return 0x730dc4;}
case 0x730dc4:{ // PMADDWD MM5,qword ptr [ECX + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x730dc8;}
case 0x730dc8:{ // PACKSSDW MM2,MM2
wr<8>(c,0x1120,user_op(c,524425,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x730dcb;}
case 0x730dcb:{ // PMADDWD MM7,qword ptr [ECX + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x78ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x730dcf;}
case 0x730dcf:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x730dd2;}
case 0x730dd2:{ // MOV word ptr [EDX + 0x4],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730dd6;}
case 0x730dd6:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x730dd9;}
case 0x730dd9:{ // MOVQ MM0,qword ptr [EBX + 0x100]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x100ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730de0;}
case 0x730de0:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x730de3;}
case 0x730de3:{ // MOVQ MM2,qword ptr [EBX + 0x108]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x108ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730dea;}
case 0x730dea:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x730ded;}
case 0x730ded:{ // MOVQ MM4,qword ptr [EBX + 0x110]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x110ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730df4;}
case 0x730df4:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x730df7;}
case 0x730df7:{ // MOVQ MM6,qword ptr [EBX + 0x118]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x118ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730dfe;}
case 0x730dfe:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x730e02;}
case 0x730e02:{ // PMADDWD MM0,qword ptr [ECX + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x730e09;}
case 0x730e09:{ // PADDD MM3,MM1
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1110)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1114)));
return 0x730e0c;}
case 0x730e0c:{ // PMADDWD MM2,qword ptr [ECX + 0x88]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x88ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x730e13;}
case 0x730e13:{ // PSRAD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x730e17;}
case 0x730e17:{ // PMADDWD MM4,qword ptr [ECX + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x730e1e;}
case 0x730e1e:{ // PACKSSDW MM3,MM3
wr<8>(c,0x1130,user_op(c,524425,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x730e21;}
case 0x730e21:{ // PMADDWD MM6,qword ptr [ECX + 0x98]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x98ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x730e28;}
case 0x730e28:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x730e2b;}
case 0x730e2b:{ // MOV word ptr [EDX + 0x6],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730e2f;}
case 0x730e2f:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x730e32;}
case 0x730e32:{ // MOVQ MM1,qword ptr [EBX + 0x140]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x140ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730e39;}
case 0x730e39:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x730e3c;}
case 0x730e3c:{ // MOVQ MM3,qword ptr [EBX + 0x148]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x148ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730e43;}
case 0x730e43:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x730e46;}
case 0x730e46:{ // MOVQ MM5,qword ptr [EBX + 0x150]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x150ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730e4d;}
case 0x730e4d:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x730e50;}
case 0x730e50:{ // MOVQ MM7,qword ptr [EBX + 0x158]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x158ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730e57;}
case 0x730e57:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x730e5b;}
case 0x730e5b:{ // PMADDWD MM1,qword ptr [ECX + 0xa0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x730e62;}
case 0x730e62:{ // PADDD MM2,MM0
wr<4>(c,0x1120,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1120),r<4>(c,0x1100)));
wr<4>(c,0x1124,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1124),r<4>(c,0x1104)));
return 0x730e65;}
case 0x730e65:{ // PMADDWD MM3,qword ptr [ECX + 0xa8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xa8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x730e6c;}
case 0x730e6c:{ // PSRAD MM2,0xd
wr<4>(c,0x1120,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1120),0xdull));
wr<4>(c,0x1124,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1124),0xdull));
return 0x730e70;}
case 0x730e70:{ // PMADDWD MM5,qword ptr [ECX + 0xb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xb0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x730e77;}
case 0x730e77:{ // PACKSSDW MM2,MM2
wr<8>(c,0x1120,user_op(c,524425,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x730e7a;}
case 0x730e7a:{ // PMADDWD MM7,qword ptr [ECX + 0xb8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xb8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x730e81;}
case 0x730e81:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x730e84;}
case 0x730e84:{ // MOV word ptr [EDX + 0x8],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730e88;}
case 0x730e88:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x730e8b;}
case 0x730e8b:{ // MOVQ MM0,qword ptr [EBX + 0x180]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x180ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730e92;}
case 0x730e92:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x730e95;}
case 0x730e95:{ // MOVQ MM2,qword ptr [EBX + 0x188]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x188ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730e9c;}
case 0x730e9c:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x730e9f;}
case 0x730e9f:{ // MOVQ MM4,qword ptr [EBX + 0x190]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x190ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730ea6;}
case 0x730ea6:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x730ea9;}
case 0x730ea9:{ // MOVQ MM6,qword ptr [EBX + 0x198]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x198ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730eb0;}
case 0x730eb0:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x730eb4;}
case 0x730eb4:{ // PMADDWD MM0,qword ptr [ECX + 0xc0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xc0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x730ebb;}
case 0x730ebb:{ // PADDD MM3,MM1
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1110)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1114)));
return 0x730ebe;}
case 0x730ebe:{ // PMADDWD MM2,qword ptr [ECX + 0xc8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xc8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x730ec5;}
case 0x730ec5:{ // PSRAD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x730ec9;}
case 0x730ec9:{ // PMADDWD MM4,qword ptr [ECX + 0xd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xd0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x730ed0;}
case 0x730ed0:{ // PACKSSDW MM3,MM3
wr<8>(c,0x1130,user_op(c,524425,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x730ed3;}
case 0x730ed3:{ // PMADDWD MM6,qword ptr [ECX + 0xd8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xd8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x730eda;}
case 0x730eda:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x730edd;}
case 0x730edd:{ // MOV word ptr [EDX + 0xa],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0xaull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730ee1;}
case 0x730ee1:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x730ee4;}
case 0x730ee4:{ // MOVQ MM1,qword ptr [EBX + 0x1c0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1c0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730eeb;}
case 0x730eeb:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x730eee;}
case 0x730eee:{ // MOVQ MM3,qword ptr [EBX + 0x1c8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1c8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730ef5;}
case 0x730ef5:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x730ef8;}
case 0x730ef8:{ // MOVQ MM5,qword ptr [EBX + 0x1d0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1d0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730eff;}
case 0x730eff:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x730f02;}
case 0x730f02:{ // MOVQ MM7,qword ptr [EBX + 0x1d8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1d8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730f09;}
case 0x730f09:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x730f0d;}
case 0x730f0d:{ // PMADDWD MM1,qword ptr [ECX + 0xe0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xe0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x730f14;}
case 0x730f14:{ // PADDD MM2,MM0
wr<4>(c,0x1120,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1120),r<4>(c,0x1100)));
wr<4>(c,0x1124,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1124),r<4>(c,0x1104)));
return 0x730f17;}
case 0x730f17:{ // PMADDWD MM3,qword ptr [ECX + 0xe8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xe8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x730f1e;}
case 0x730f1e:{ // PSRAD MM2,0xd
wr<4>(c,0x1120,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1120),0xdull));
wr<4>(c,0x1124,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1124),0xdull));
return 0x730f22;}
case 0x730f22:{ // PMADDWD MM5,qword ptr [ECX + 0xf0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xf0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x730f29;}
case 0x730f29:{ // PACKSSDW MM2,MM2
wr<8>(c,0x1120,user_op(c,524425,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x730f2c;}
case 0x730f2c:{ // PMADDWD MM7,qword ptr [ECX + 0xf8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xf8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x730f33;}
case 0x730f33:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x730f36;}
case 0x730f36:{ // MOV word ptr [EDX + 0xc],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0xcull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730f3a;}
case 0x730f3a:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x730f3d;}
case 0x730f3d:{ // MOVQ MM0,qword ptr [EBX + 0x200]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x200ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730f44;}
case 0x730f44:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x730f47;}
case 0x730f47:{ // MOVQ MM2,qword ptr [EBX + 0x208]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x208ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730f4e;}
case 0x730f4e:{ // PADDD MM1,MM7
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1170)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1174)));
return 0x730f51;}
case 0x730f51:{ // MOVQ MM4,qword ptr [EBX + 0x210]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x210ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730f58;}
case 0x730f58:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x730f5b;}
case 0x730f5b:{ // MOVQ MM6,qword ptr [EBX + 0x218]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x218ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730f62;}
case 0x730f62:{ // PSRLQ MM1,0x20
wr<8>(c,0x1110,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1110),0x20ull));
return 0x730f66;}
case 0x730f66:{ // PMADDWD MM0,qword ptr [ECX + 0x100]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x100ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,user_op(c,524442,{r<8>(c,0x1100),u<8>(c,0xa400)}));
return 0x730f6d;}
case 0x730f6d:{ // PADDD MM3,MM1
wr<4>(c,0x1130,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1130),r<4>(c,0x1110)));
wr<4>(c,0x1134,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1134),r<4>(c,0x1114)));
return 0x730f70;}
case 0x730f70:{ // PMADDWD MM2,qword ptr [ECX + 0x108]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x108ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,user_op(c,524442,{r<8>(c,0x1120),u<8>(c,0xa400)}));
return 0x730f77;}
case 0x730f77:{ // PSRAD MM3,0xd
wr<4>(c,0x1130,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1130),0xdull));
wr<4>(c,0x1134,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1134),0xdull));
return 0x730f7b;}
case 0x730f7b:{ // PMADDWD MM4,qword ptr [ECX + 0x110]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x110ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,user_op(c,524442,{r<8>(c,0x1140),u<8>(c,0xa400)}));
return 0x730f82;}
case 0x730f82:{ // PACKSSDW MM3,MM3
wr<8>(c,0x1130,user_op(c,524425,{r<8>(c,0x1130),r<8>(c,0x1130)}));
return 0x730f85;}
case 0x730f85:{ // PMADDWD MM6,qword ptr [ECX + 0x118]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x118ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,user_op(c,524442,{r<8>(c,0x1160),u<8>(c,0xa400)}));
return 0x730f8c;}
case 0x730f8c:{ // MOVD EAX,MM3
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1130),0x0ull));
return 0x730f8f;}
case 0x730f8f:{ // MOV word ptr [EDX + 0xe],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0xeull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730f93;}
case 0x730f93:{ // PADDD MM0,MM2
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1120)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1124)));
return 0x730f96;}
case 0x730f96:{ // MOVQ MM1,qword ptr [EBX + 0x240]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x240ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730f9d;}
case 0x730f9d:{ // PADDD MM0,MM4
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1140)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1144)));
return 0x730fa0;}
case 0x730fa0:{ // MOVQ MM3,qword ptr [EBX + 0x248]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x248ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730fa7;}
case 0x730fa7:{ // PADDD MM0,MM6
wr<4>(c,0x1100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1100),r<4>(c,0x1160)));
wr<4>(c,0x1104,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1104),r<4>(c,0x1164)));
return 0x730faa;}
case 0x730faa:{ // MOVQ MM5,qword ptr [EBX + 0x250]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x250ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730fb1;}
case 0x730fb1:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x730fb4;}
case 0x730fb4:{ // MOVQ MM7,qword ptr [EBX + 0x258]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x258ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730fbb;}
case 0x730fbb:{ // PSRLQ MM0,0x20
wr<8>(c,0x1100,eval<Op::INT_RIGHT,8,8,4>(r<8>(c,0x1100),0x20ull));
return 0x730fbf;}
case 0x730fbf:{ // PMADDWD MM1,qword ptr [ECX + 0x120]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x120ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1110,user_op(c,524442,{r<8>(c,0x1110),u<8>(c,0xa400)}));
return 0x730fc6;}
case 0x730fc6:{ // PADDD MM2,MM0
wr<4>(c,0x1120,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1120),r<4>(c,0x1100)));
wr<4>(c,0x1124,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1124),r<4>(c,0x1104)));
return 0x730fc9;}
case 0x730fc9:{ // PMADDWD MM3,qword ptr [ECX + 0x128]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x128ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,user_op(c,524442,{r<8>(c,0x1130),u<8>(c,0xa400)}));
return 0x730fd0;}
case 0x730fd0:{ // PSRAD MM2,0xd
wr<4>(c,0x1120,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1120),0xdull));
wr<4>(c,0x1124,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x1124),0xdull));
return 0x730fd4;}
case 0x730fd4:{ // PMADDWD MM5,qword ptr [ECX + 0x130]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x130ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,user_op(c,524442,{r<8>(c,0x1150),u<8>(c,0xa400)}));
return 0x730fdb;}
case 0x730fdb:{ // PACKSSDW MM2,MM2
wr<8>(c,0x1120,user_op(c,524425,{r<8>(c,0x1120),r<8>(c,0x1120)}));
return 0x730fde;}
case 0x730fde:{ // PMADDWD MM7,qword ptr [ECX + 0x138]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x138ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,user_op(c,524442,{r<8>(c,0x1170),u<8>(c,0xa400)}));
return 0x730fe5;}
case 0x730fe5:{ // MOVD EAX,MM2
wr<4>(c,0x0,eval<Op::SUBPIECE,4,8,4>(r<8>(c,0x1120),0x0ull));
return 0x730fe8;}
case 0x730fe8:{ // MOV word ptr [EDX + 0x10],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x730fec;}
case 0x730fec:{ // PADDD MM1,MM3
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1130)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1134)));
return 0x730fef;}
case 0x730fef:{ // MOVQ MM0,qword ptr [EBX + 0x280]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x280ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x730ff6;}
case 0x730ff6:{ // PADDD MM1,MM5
wr<4>(c,0x1110,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1110),r<4>(c,0x1150)));
wr<4>(c,0x1114,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1114),r<4>(c,0x1154)));
return 0x730ff9;}
case 0x730ff9:{ // MOVQ MM2,qword ptr [EBX + 0x288]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x288ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x731000;}
default:missing_instruction(c.pc);}}
}
