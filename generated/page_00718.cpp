#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_718(Cpu& c){switch(c.pc){
case 0x718005:{ // PSUBW XMM3,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x71800a;}
case 0x71800a:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x71800e;}
case 0x71800e:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718012;}
case 0x718012:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718016;}
case 0x718016:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x71801a;}
case 0x71801a:{ // PADDW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x71801f;}
case 0x71801f:{ // PSUBW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718024;}
case 0x718024:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718029;}
case 0x718029:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x71802d;}
case 0x71802d:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718031;}
case 0x718031:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718035;}
case 0x718035:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718039;}
case 0x718039:{ // MOVDQ2Q MM4,XMM7
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x13c0)}));
return 0x71803d;}
case 0x71803d:{ // MOVQ2DQ XMM0,MM0
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1100)));
return 0x718041;}
case 0x718041:{ // MOVQ2DQ XMM1,MM1
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1110)));
return 0x718045;}
case 0x718045:{ // MOVQ2DQ XMM2,MM2
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1120)));
return 0x718049;}
case 0x718049:{ // MOVQ2DQ XMM3,MM3
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1130)));
return 0x71804d;}
case 0x71804d:{ // PUNPCKLBW XMM0,XMM1
wr<1>(c,0x120f,eval<Op::COPY,1,1>(r<1>(c,0x1247)));
wr<1>(c,0x120e,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x120d,eval<Op::COPY,1,1>(r<1>(c,0x1246)));
wr<1>(c,0x120c,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x120b,eval<Op::COPY,1,1>(r<1>(c,0x1245)));
wr<1>(c,0x120a,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x1209,eval<Op::COPY,1,1>(r<1>(c,0x1244)));
wr<1>(c,0x1208,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x1207,eval<Op::COPY,1,1>(r<1>(c,0x1243)));
wr<1>(c,0x1206,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x1205,eval<Op::COPY,1,1>(r<1>(c,0x1242)));
wr<1>(c,0x1204,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x1203,eval<Op::COPY,1,1>(r<1>(c,0x1241)));
wr<1>(c,0x1202,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x1201,eval<Op::COPY,1,1>(r<1>(c,0x1240)));
return 0x718051;}
case 0x718051:{ // PUNPCKLBW XMM2,XMM3
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x12c7)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x12c6)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x12c5)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x12c4)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x12c3)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x12c2)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x12c1)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x12c0)));
return 0x718055;}
case 0x718055:{ // MOVDQA XMM1,XMM0
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x718059;}
case 0x718059:{ // PUNPCKLWD XMM0,XMM2
wr<2>(c,0x120e,eval<Op::COPY,2,2>(r<2>(c,0x1286)));
wr<2>(c,0x120c,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x120a,eval<Op::COPY,2,2>(r<2>(c,0x1284)));
wr<2>(c,0x1208,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1206,eval<Op::COPY,2,2>(r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1202,eval<Op::COPY,2,2>(r<2>(c,0x1280)));
return 0x71805d;}
case 0x71805d:{ // PUNPCKHWD XMM1,XMM2
wr<2>(c,0x1240,eval<Op::COPY,2,2>(r<2>(c,0x1248)));
wr<2>(c,0x1242,eval<Op::COPY,2,2>(r<2>(c,0x1288)));
wr<2>(c,0x1244,eval<Op::COPY,2,2>(r<2>(c,0x124a)));
wr<2>(c,0x1246,eval<Op::COPY,2,2>(r<2>(c,0x128a)));
wr<2>(c,0x1248,eval<Op::COPY,2,2>(r<2>(c,0x124c)));
wr<2>(c,0x124a,eval<Op::COPY,2,2>(r<2>(c,0x128c)));
wr<2>(c,0x124c,eval<Op::COPY,2,2>(r<2>(c,0x124e)));
wr<2>(c,0x124e,eval<Op::COPY,2,2>(r<2>(c,0x128e)));
return 0x718061;}
case 0x718061:{ // MOVQ2DQ XMM4,MM4
wr<16>(c,0x1300,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1140)));
return 0x718065;}
case 0x718065:{ // MOVQ2DQ XMM5,MM5
wr<16>(c,0x1340,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1150)));
return 0x718069;}
case 0x718069:{ // MOVQ2DQ XMM6,MM6
wr<16>(c,0x1380,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x71806d;}
case 0x71806d:{ // MOVQ2DQ XMM7,MM7
wr<16>(c,0x13c0,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1170)));
return 0x718071;}
case 0x718071:{ // PUNPCKLBW XMM4,XMM5
wr<1>(c,0x130f,eval<Op::COPY,1,1>(r<1>(c,0x1347)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(r<1>(c,0x1307)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(r<1>(c,0x1346)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(r<1>(c,0x1306)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(r<1>(c,0x1345)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(r<1>(c,0x1305)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(r<1>(c,0x1344)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(r<1>(c,0x1304)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(r<1>(c,0x1343)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(r<1>(c,0x1303)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(r<1>(c,0x1342)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(r<1>(c,0x1302)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(r<1>(c,0x1341)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(r<1>(c,0x1301)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(r<1>(c,0x1340)));
return 0x718075;}
case 0x718075:{ // PUNPCKLBW XMM6,XMM7
wr<1>(c,0x138f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x138e,eval<Op::COPY,1,1>(r<1>(c,0x1387)));
wr<1>(c,0x138d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x138c,eval<Op::COPY,1,1>(r<1>(c,0x1386)));
wr<1>(c,0x138b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x138a,eval<Op::COPY,1,1>(r<1>(c,0x1385)));
wr<1>(c,0x1389,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1388,eval<Op::COPY,1,1>(r<1>(c,0x1384)));
wr<1>(c,0x1387,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1386,eval<Op::COPY,1,1>(r<1>(c,0x1383)));
wr<1>(c,0x1385,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1384,eval<Op::COPY,1,1>(r<1>(c,0x1382)));
wr<1>(c,0x1383,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1382,eval<Op::COPY,1,1>(r<1>(c,0x1381)));
wr<1>(c,0x1381,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x718079;}
case 0x718079:{ // MOVDQA XMM5,XMM4
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71807d;}
case 0x71807d:{ // PUNPCKLWD XMM4,XMM6
wr<2>(c,0x130e,eval<Op::COPY,2,2>(r<2>(c,0x1386)));
wr<2>(c,0x130c,eval<Op::COPY,2,2>(r<2>(c,0x1306)));
wr<2>(c,0x130a,eval<Op::COPY,2,2>(r<2>(c,0x1384)));
wr<2>(c,0x1308,eval<Op::COPY,2,2>(r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::COPY,2,2>(r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::COPY,2,2>(r<2>(c,0x1302)));
wr<2>(c,0x1302,eval<Op::COPY,2,2>(r<2>(c,0x1380)));
return 0x718081;}
case 0x718081:{ // PUNPCKHWD XMM5,XMM6
wr<2>(c,0x1340,eval<Op::COPY,2,2>(r<2>(c,0x1348)));
wr<2>(c,0x1342,eval<Op::COPY,2,2>(r<2>(c,0x1388)));
wr<2>(c,0x1344,eval<Op::COPY,2,2>(r<2>(c,0x134a)));
wr<2>(c,0x1346,eval<Op::COPY,2,2>(r<2>(c,0x138a)));
wr<2>(c,0x1348,eval<Op::COPY,2,2>(r<2>(c,0x134c)));
wr<2>(c,0x134a,eval<Op::COPY,2,2>(r<2>(c,0x138c)));
wr<2>(c,0x134c,eval<Op::COPY,2,2>(r<2>(c,0x134e)));
wr<2>(c,0x134e,eval<Op::COPY,2,2>(r<2>(c,0x138e)));
return 0x718085;}
case 0x718085:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x718089;}
case 0x718089:{ // PUNPCKLDQ XMM0,XMM4
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x71808d;}
case 0x71808d:{ // MOVQ qword ptr [ESI + EDX*0x2],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718092;}
case 0x718092:{ // PSRLDQ XMM0,0x8
wu<4>(c,0x12d100,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
wr<16>(c,0x1200,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1200),u<4>(c,0x12d100)));
return 0x718097;}
case 0x718097:{ // PUNPCKHDQ XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x71809b;}
case 0x71809b:{ // MOVQ qword ptr [ESI + EDX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7180a0;}
case 0x7180a0:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x7180a4;}
case 0x7180a4:{ // PUNPCKLDQ XMM1,XMM5
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x7180a8;}
case 0x7180a8:{ // MOVQ qword ptr [ESI],XMM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x7180ac;}
case 0x7180ac:{ // PSRLDQ XMM2,0x8
wu<4>(c,0x12d100,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
wr<16>(c,0x1280,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),u<4>(c,0x12d100)));
return 0x7180b1;}
case 0x7180b1:{ // PUNPCKHDQ XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x7180b5;}
case 0x7180b5:{ // MOVQ qword ptr [ESI + ECX*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7180ba;}
case 0x7180ba:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7180bd;}
case 0x7180bd:{ // MOVQ qword ptr [ESI + EDX*0x2],XMM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7180c2;}
case 0x7180c2:{ // MOVQ qword ptr [ESI],XMM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x7180c6;}
case 0x7180c6:{ // PSRLDQ XMM1,0x8
wu<4>(c,0x12d100,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
wr<16>(c,0x1240,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),u<4>(c,0x12d100)));
return 0x7180cb;}
case 0x7180cb:{ // PSRLDQ XMM3,0x8
wu<4>(c,0x12d100,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
wr<16>(c,0x12c0,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),u<4>(c,0x12d100)));
return 0x7180d0;}
case 0x7180d0:{ // MOVQ qword ptr [ESI + EDX*0x1],XMM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7180d5;}
case 0x7180d5:{ // MOVQ qword ptr [ESI + ECX*0x1],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7180da;}
case 0x7180da:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7180db;}
case 0x7180db:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7180dc;}
case 0x7180dc:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7180dd;}
case 0x7180dd:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7180de;}
case 0x7180de:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7180df;}
case 0x7180df:{ // MOVZX EDI,word ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7180e3;}
case 0x7180e3:{ // MOVZX ESI,word ptr [EBP + -0x32]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffceull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7180e7;}
case 0x7180e7:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7180e9;}
case 0x7180e9:{ // MOVZX EDI,word ptr [EBP + -0x36]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffcaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7180ed;}
case 0x7180ed:{ // MOV ECX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7180f0;}
case 0x7180f0:{ // MOV EDX,dword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7180f3;}
case 0x7180f3:{ // MOV EAX,dword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7180f6;}
case 0x7180f6:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7180f8;}
case 0x7180f8:{ // MOVZX EDI,word ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7180fc;}
case 0x7180fc:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7180fe;}
case 0x7180fe:{ // MOVZX EDI,word ptr [EBP + -0x3a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718102;}
case 0x718102:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718104;}
case 0x718104:{ // MOVZX EDI,word ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718108;}
case 0x718108:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71810a;}
case 0x71810a:{ // MOVZX EDI,word ptr [EBP + -0x3e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71810e;}
case 0x71810e:{ // ADD EDX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718110;}
case 0x718110:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718112;}
case 0x718112:{ // MOVZX EDI,word ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718116;}
case 0x718116:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718118;}
case 0x718118:{ // ADD dword ptr [EDX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x8)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wm<4>(c,r<4>(c,0x8),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x8)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x8)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71811a;}
case 0x71811a:{ // MOV ECX,dword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71811d;}
case 0x71811d:{ // MOVZX EDX,word ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718121;}
case 0x718121:{ // LEA EAX,[ECX + EAX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x718125;}
case 0x718125:{ // MOVZX ECX,word ptr [EBP + -0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdeull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718129;}
case 0x718129:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71812b;}
case 0x71812b:{ // MOVZX EDX,word ptr [EBP + -0x26]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71812f;}
case 0x71812f:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718131;}
case 0x718131:{ // MOVZX EDX,word ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718135;}
case 0x718135:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718137;}
case 0x718137:{ // MOVZX EDX,word ptr [EBP + -0x2a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71813b;}
case 0x71813b:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71813d;}
case 0x71813d:{ // MOVZX EDX,word ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718141;}
case 0x718141:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718143;}
case 0x718143:{ // MOVZX EDX,word ptr [EBP + -0x2e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718147;}
case 0x718147:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718149;}
case 0x718149:{ // MOVZX EDX,word ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71814d;}
case 0x71814d:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71814f;}
case 0x71814f:{ // ADD dword ptr [EAX],ECX
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718151;}
case 0x718151:{ // MOV EDX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718154;}
case 0x718154:{ // ADD dword ptr [EBP + -0x8],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x8ull));
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
return 0x718158;}
case 0x718158:{ // ADD dword ptr [EBP + -0x4],0x8
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x8ull));
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
return 0x71815c;}
case 0x71815c:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71815d;}
case 0x71815d:{ // CMP EDX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718160;}
case 0x718160:{ // MOV dword ptr [EBP + -0xc],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x718163;}
case 0x718163:{ // JC 0x00717a97
if(r<1>(c,0x200)){return 0x717a97;}
return 0x718169;}
case 0x718169:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71816a;}
case 0x71816a:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71816b;}
case 0x71816b:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x71816d;}
case 0x71816d:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71816e;}
case 0x71816e:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x718170;}
case 0x718170:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718171;}
case 0x718171:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x718172;}
case 0x718172:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x718173;}
case 0x718173:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x718175;}
case 0x718175:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x718176;}
case 0x718176:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x718177;}
case 0x718177:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71817a;}
case 0x71817a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71817d;}
case 0x71817d:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71817e;}
case 0x71817e:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718181;}
case 0x718181:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x718185;}
case 0x718185:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x718187;}
case 0x718187:{ // SUB ESP,0x158
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x158ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x158ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x158ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71818d;}
case 0x71818d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71818e;}
case 0x71818e:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71818f;}
case 0x71818f:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718192;}
case 0x718192:{ // MOV EAX,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718195;}
case 0x718195:{ // MOV EDX,dword ptr [0x008b9c4c]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x8b9c4c)));
return 0x71819b;}
case 0x71819b:{ // MOV EAX,dword ptr [EDX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71819e;}
case 0x71819e:{ // MOV ECX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7181a1;}
case 0x7181a1:{ // MOV word ptr [EBP + -0x70],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7181a5;}
case 0x7181a5:{ // MOV word ptr [EBP + -0x6e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff92ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7181a9;}
case 0x7181a9:{ // MOV word ptr [EBP + -0x6c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff94ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7181ad;}
case 0x7181ad:{ // MOV word ptr [EBP + -0x6a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff96ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7181b1;}
case 0x7181b1:{ // MOV word ptr [EBP + -0x68],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff98ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7181b5;}
case 0x7181b5:{ // MOV word ptr [EBP + -0x66],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9aull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7181b9;}
case 0x7181b9:{ // MOV word ptr [EBP + -0x64],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7181bd;}
case 0x7181bd:{ // MOV word ptr [EBP + -0x62],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x7181c1;}
case 0x7181c1:{ // MOV EAX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7181c4;}
case 0x7181c4:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7181c6;}
case 0x7181c6:{ // CMP ECX,EAX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7181c8;}
case 0x7181c8:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7181cb;}
case 0x7181cb:{ // MOV dword ptr [EBP + -0x74],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff8cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7181ce;}
case 0x7181ce:{ // JNC 0x00718fee
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x718fee;}
return 0x7181d4;}
case 0x7181d4:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7181d7;}
case 0x7181d7:{ // SHL EAX,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x7181da;}
case 0x7181da:{ // MOV dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7181dd;}
case 0x7181dd:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7181e0;}
case 0x7181e0:{ // MOV dword ptr [EBP + -0x14],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7181e3;}
case 0x7181e3:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7181e6;}
case 0x7181e6:{ // SHL ECX,0x3
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
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
return 0x7181e9;}
case 0x7181e9:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7181ec;}
case 0x7181ec:{ // SUB EAX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7181ee;}
case 0x7181ee:{ // MOV dword ptr [EBP + -0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7181f1;}
case 0x7181f1:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7181f4;}
case 0x7181f4:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x7181f7;}
case 0x7181f7:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7181fa;}
case 0x7181fa:{ // MOV ECX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7181fd;}
case 0x7181fd:{ // MOV dword ptr [EBP + -0x48],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x718200;}
case 0x718200:{ // MOV EAX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718203;}
case 0x718203:{ // MOV dword ptr [EBP + -0x4c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x718206;}
case 0x718206:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718209;}
case 0x718209:{ // MOV EAX,dword ptr [EAX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71820c;}
case 0x71820c:{ // MOV EAX,dword ptr [ECX + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71820f;}
case 0x71820f:{ // MOV ECX,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718212;}
case 0x718212:{ // MOV EAX,dword ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718215;}
case 0x718215:{ // MOV dword ptr [EBP + -0x44],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x718218;}
case 0x718218:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x718219;}
case 0x718219:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71821a;}
case 0x71821a:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71821b;}
case 0x71821b:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71821c;}
case 0x71821c:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x71821d;}
case 0x71821d:{ // MOV EAX,dword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718220;}
case 0x718220:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718222;}
case 0x718222:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718225;}
case 0x718225:{ // PCMPEQW XMM6,XMM6
wu<1>(c,0xfab00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wu<2>(c,0xfac00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfab00)));
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfac00),0xffffull));
wu<1>(c,0xfae00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wu<2>(c,0xfaf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfae00)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfaf00),0xffffull));
wu<1>(c,0xfb100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wu<2>(c,0xfb200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb100)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb200),0xffffull));
wu<1>(c,0xfb400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wu<2>(c,0xfb500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb400)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb500),0xffffull));
wu<1>(c,0xfb700,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wu<2>(c,0xfb800,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb700)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb800),0xffffull));
wu<1>(c,0xfba00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wu<2>(c,0xfbb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfba00)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbb00),0xffffull));
wu<1>(c,0xfbd00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wu<2>(c,0xfbe00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfbd00)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbe00),0xffffull));
wu<1>(c,0xfc000,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
wu<2>(c,0xfc100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfc000)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfc100),0xffffull));
return 0x718229;}
case 0x718229:{ // MOVD MM5,EAX
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x71822c;}
case 0x71822c:{ // PSRLW XMM6,0xe
wr<2>(c,0x1380,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1380),0xeull));
wr<2>(c,0x1382,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1382),0xeull));
wr<2>(c,0x1384,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1384),0xeull));
wr<2>(c,0x1386,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1386),0xeull));
wr<2>(c,0x1388,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1388),0xeull));
wr<2>(c,0x138a,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x138a),0xeull));
wr<2>(c,0x138c,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x138c),0xeull));
wr<2>(c,0x138e,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x138e),0xeull));
return 0x718231;}
case 0x718231:{ // PUNPCKLWD MM5,MM5
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x718234;}
case 0x718234:{ // MOV EAX,dword ptr [EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718237;}
case 0x718237:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71823a;}
case 0x71823a:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71823c;}
case 0x71823c:{ // MOVQ2DQ XMM5,MM5
wr<16>(c,0x1340,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1150)));
return 0x718240;}
case 0x718240:{ // PUNPCKLQDQ XMM5,XMM5
wr<8>(c,0x1348,eval<Op::COPY,8,8>(r<8>(c,0x1340)));
return 0x718244;}
case 0x718244:{ // PMULLW XMM6,XMM5
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1340)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1342)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1344)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1346)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1348)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x134a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x134c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x134e)));
return 0x718248;}
case 0x718248:{ // MOVDQA xmmword ptr [EBP + -0x60],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71824d;}
case 0x71824d:{ // LEA EDI,[EBP + 0xfffffeb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffeb0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x718253;}
case 0x718253:{ // PXOR XMM7,XMM7
wr<16>(c,0x13c0,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x13c0)));
return 0x718257;}
case 0x718257:{ // MOV ESI,dword ptr [EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71825a;}
case 0x71825a:{ // PMULLW XMM6,XMM5
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1340)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1342)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1344)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1346)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1348)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x134a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x134c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x134e)));
return 0x71825e;}
case 0x71825e:{ // LEA EAX,[EAX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x718261;}
case 0x718261:{ // LEA ESI,[ESI + EDX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x718264;}
case 0x718264:{ // PSRAW XMM6,0x5
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0x5ull}));
return 0x718269;}
case 0x718269:{ // MOVDQA xmmword ptr [EBP + 0xffffff60],XMM6
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x718271;}
case 0x718271:{ // MOVQ XMM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x718276;}
case 0x718276:{ // MOVQ XMM1,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x71827a;}
case 0x71827a:{ // PUNPCKLBW XMM0,XMM7
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
return 0x71827e;}
case 0x71827e:{ // PUNPCKLBW XMM1,XMM7
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
return 0x718282;}
case 0x718282:{ // MOVDQA xmmword ptr [EDI],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x1c),u<16>(c,0xa600));
return 0x718286;}
case 0x718286:{ // MOVDQA xmmword ptr [EDI + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71828b;}
case 0x71828b:{ // MOVQ XMM2,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x718290;}
case 0x718290:{ // MOVQ XMM3,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x718295;}
case 0x718295:{ // PUNPCKLBW XMM2,XMM7
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
return 0x718299;}
case 0x718299:{ // PUNPCKLBW XMM3,XMM7
wr<1>(c,0x12cf,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x12ce,eval<Op::COPY,1,1>(r<1>(c,0x12c7)));
wr<1>(c,0x12cd,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x12cc,eval<Op::COPY,1,1>(r<1>(c,0x12c6)));
wr<1>(c,0x12cb,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x12ca,eval<Op::COPY,1,1>(r<1>(c,0x12c5)));
wr<1>(c,0x12c9,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x12c8,eval<Op::COPY,1,1>(r<1>(c,0x12c4)));
wr<1>(c,0x12c7,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x12c6,eval<Op::COPY,1,1>(r<1>(c,0x12c3)));
wr<1>(c,0x12c5,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x12c4,eval<Op::COPY,1,1>(r<1>(c,0x12c2)));
wr<1>(c,0x12c3,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x12c2,eval<Op::COPY,1,1>(r<1>(c,0x12c1)));
wr<1>(c,0x12c1,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x71829d;}
case 0x71829d:{ // MOVDQA xmmword ptr [EDI + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x7182a2;}
case 0x7182a2:{ // MOVDQA xmmword ptr [EDI + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x7182a7;}
case 0x7182a7:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7182aa;}
case 0x7182aa:{ // MOVQ XMM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7182af;}
case 0x7182af:{ // MOVQ XMM1,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7182b3;}
case 0x7182b3:{ // PUNPCKLBW XMM0,XMM7
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
return 0x7182b7;}
case 0x7182b7:{ // PUNPCKLBW XMM1,XMM7
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
return 0x7182bb;}
case 0x7182bb:{ // MOVDQA xmmword ptr [EDI + 0x40],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x7182c0;}
case 0x7182c0:{ // MOVDQA xmmword ptr [EDI + 0x50],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x7182c5;}
case 0x7182c5:{ // MOVQ XMM2,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7182ca;}
case 0x7182ca:{ // MOVQ XMM3,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7182cf;}
case 0x7182cf:{ // PUNPCKLBW XMM2,XMM7
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
return 0x7182d3;}
case 0x7182d3:{ // PUNPCKLBW XMM3,XMM7
wr<1>(c,0x12cf,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x12ce,eval<Op::COPY,1,1>(r<1>(c,0x12c7)));
wr<1>(c,0x12cd,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x12cc,eval<Op::COPY,1,1>(r<1>(c,0x12c6)));
wr<1>(c,0x12cb,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x12ca,eval<Op::COPY,1,1>(r<1>(c,0x12c5)));
wr<1>(c,0x12c9,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x12c8,eval<Op::COPY,1,1>(r<1>(c,0x12c4)));
wr<1>(c,0x12c7,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x12c6,eval<Op::COPY,1,1>(r<1>(c,0x12c3)));
wr<1>(c,0x12c5,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x12c4,eval<Op::COPY,1,1>(r<1>(c,0x12c2)));
wr<1>(c,0x12c3,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x12c2,eval<Op::COPY,1,1>(r<1>(c,0x12c1)));
wr<1>(c,0x12c1,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x7182d7;}
case 0x7182d7:{ // MOVDQA xmmword ptr [EDI + 0x60],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x7182dc;}
case 0x7182dc:{ // MOVDQA xmmword ptr [EDI + 0x70],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x7182e1;}
case 0x7182e1:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7182e4;}
case 0x7182e4:{ // MOVQ XMM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7182e9;}
case 0x7182e9:{ // MOVQ XMM1,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(u<8>(c,0xa400)));
return 0x7182ed;}
case 0x7182ed:{ // PUNPCKLBW XMM0,XMM7
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
return 0x7182f1;}
case 0x7182f1:{ // PUNPCKLBW XMM1,XMM7
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
return 0x7182f5;}
case 0x7182f5:{ // MOVDQA xmmword ptr [EDI + 0x80],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x7182fd;}
case 0x7182fd:{ // MOVDQA xmmword ptr [EDI + 0x90],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x718305;}
case 0x718305:{ // PCMPEQW XMM3,XMM3
wu<1>(c,0xfab00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c0),r<2>(c,0x12c0)));
wu<2>(c,0xfac00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfab00)));
wr<2>(c,0x12c0,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfac00),0xffffull));
wu<1>(c,0xfae00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c2),r<2>(c,0x12c2)));
wu<2>(c,0xfaf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfae00)));
wr<2>(c,0x12c2,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfaf00),0xffffull));
wu<1>(c,0xfb100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c4),r<2>(c,0x12c4)));
wu<2>(c,0xfb200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb100)));
wr<2>(c,0x12c4,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb200),0xffffull));
wu<1>(c,0xfb400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c6),r<2>(c,0x12c6)));
wu<2>(c,0xfb500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb400)));
wr<2>(c,0x12c6,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb500),0xffffull));
wu<1>(c,0xfb700,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c8),r<2>(c,0x12c8)));
wu<2>(c,0xfb800,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb700)));
wr<2>(c,0x12c8,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb800),0xffffull));
wu<1>(c,0xfba00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ca),r<2>(c,0x12ca)));
wu<2>(c,0xfbb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfba00)));
wr<2>(c,0x12ca,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbb00),0xffffull));
wu<1>(c,0xfbd00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12cc),r<2>(c,0x12cc)));
wu<2>(c,0xfbe00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfbd00)));
wr<2>(c,0x12cc,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbe00),0xffffull));
wu<1>(c,0xfc000,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ce),r<2>(c,0x12ce)));
wu<2>(c,0xfc100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfc000)));
wr<2>(c,0x12ce,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfc100),0xffffull));
return 0x718309;}
case 0x718309:{ // PSLLW XMM3,0xf
wr<16>(c,0x12c0,user_op(c,1048742,{r<16>(c,0x12c0),0xfull}));
return 0x71830e;}
case 0x71830e:{ // PSRLW XMM3,0x8
wr<2>(c,0x12c0,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c0),0x8ull));
wr<2>(c,0x12c2,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c2),0x8ull));
wr<2>(c,0x12c4,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c4),0x8ull));
wr<2>(c,0x12c6,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c6),0x8ull));
wr<2>(c,0x12c8,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c8),0x8ull));
wr<2>(c,0x12ca,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12ca),0x8ull));
wr<2>(c,0x12cc,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12cc),0x8ull));
wr<2>(c,0x12ce,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12ce),0x8ull));
return 0x718313;}
case 0x718313:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718318;}
case 0x718318:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71831d;}
case 0x71831d:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x718321;}
case 0x718321:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x718325;}
case 0x718325:{ // MOVDQA XMM0,XMM2
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x718329;}
case 0x718329:{ // MOVDQA XMM4,XMM6
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71832d;}
case 0x71832d:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x718331;}
case 0x718331:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x718335;}
case 0x718335:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x718339;}
case 0x718339:{ // MOVDQA XMM5,XMM6
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x71833d;}
case 0x71833d:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718342;}
case 0x718342:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718347;}
case 0x718347:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x71834b;}
case 0x71834b:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x71834f;}
case 0x71834f:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x718353;}
case 0x718353:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x718357;}
case 0x718357:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x71835b;}
case 0x71835b:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x71835f;}
case 0x71835f:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x718363;}
case 0x718363:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x718367;}
case 0x718367:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71836c;}
case 0x71836c:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718371;}
case 0x718371:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x718375;}
case 0x718375:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x718379;}
case 0x718379:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x71837d;}
case 0x71837d:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x718381;}
case 0x718381:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x718385;}
case 0x718385:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x718389;}
case 0x718389:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x71838d;}
case 0x71838d:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x718391;}
case 0x718391:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718396;}
case 0x718396:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71839e;}
case 0x71839e:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x7183a2;}
case 0x7183a2:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x7183a6;}
case 0x7183a6:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x7183aa;}
case 0x7183aa:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x7183ae;}
case 0x7183ae:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x7183b2;}
case 0x7183b2:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x7183b6;}
case 0x7183b6:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x7183ba;}
case 0x7183ba:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x7183be;}
case 0x7183be:{ // MOVDQA XMM7,XMM3
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x7183c2;}
case 0x7183c2:{ // PSRLW XMM7,0x7
wr<2>(c,0x13c0,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c0),0x7ull));
wr<2>(c,0x13c2,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c2),0x7ull));
wr<2>(c,0x13c4,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c4),0x7ull));
wr<2>(c,0x13c6,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c6),0x7ull));
wr<2>(c,0x13c8,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c8),0x7ull));
wr<2>(c,0x13ca,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13ca),0x7ull));
wr<2>(c,0x13cc,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13cc),0x7ull));
wr<2>(c,0x13ce,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13ce),0x7ull));
return 0x7183c7;}
case 0x7183c7:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x7183cb;}
case 0x7183cb:{ // MOVDQA XMM6,XMM4
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x7183cf;}
case 0x7183cf:{ // PADDW XMM0,XMM7
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x13c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x13c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x13c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x13c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x13c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x13ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x13cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x13ce)));
return 0x7183d3;}
case 0x7183d3:{ // PADDW XMM4,XMM7
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x13c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x13c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x13c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x13c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x13c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x13ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x13cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x13ce)));
return 0x7183d7;}
case 0x7183d7:{ // PSRAW XMM2,0x1
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0x1ull}));
return 0x7183dc;}
case 0x7183dc:{ // PSRAW XMM6,0x1
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0x1ull}));
return 0x7183e1;}
case 0x7183e1:{ // PSRAW XMM0,0x1
wr<16>(c,0x1200,user_op(c,1048743,{r<16>(c,0x1200),0x1ull}));
return 0x7183e6;}
case 0x7183e6:{ // PSRAW XMM4,0x1
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x1ull}));
return 0x7183eb;}
case 0x7183eb:{ // PMULLW XMM2,XMM0
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1200)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1202)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1204)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1206)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1208)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x120a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x120c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x120e)));
return 0x7183ef;}
case 0x7183ef:{ // PMULLW XMM6,XMM4
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1300)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1302)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1304)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1306)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1308)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x130a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x130c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x130e)));
return 0x7183f3;}
case 0x7183f3:{ // PSUBW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x7183f7;}
case 0x7183f7:{ // PSUBW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x7183fb;}
case 0x7183fb:{ // MOVDQA XMM7,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718403;}
case 0x718403:{ // MOVDQA XMM2,XMM1
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x718407;}
case 0x718407:{ // MOVDQA xmmword ptr [EBP + -0x40],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x71840c;}
case 0x71840c:{ // MOVDQA xmmword ptr [EBP + -0x30],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x718411;}
case 0x718411:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718415;}
case 0x718415:{ // PSUBW XMM1,XMM7
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x13c0)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x13c2)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x13c4)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x13c6)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x13c8)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x13ca)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x13cc)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x13ce)));
return 0x718419;}
case 0x718419:{ // PSUBW XMM5,XMM7
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x13c0)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x13c2)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x13c4)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x13c6)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x13c8)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x13ca)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x13cc)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x13ce)));
return 0x71841d;}
case 0x71841d:{ // PSRAW XMM2,0xf
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0xfull}));
return 0x718422;}
case 0x718422:{ // PSRAW XMM6,0xf
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0xfull}));
return 0x718427;}
case 0x718427:{ // PSRAW XMM1,0xf
wr<16>(c,0x1240,user_op(c,1048743,{r<16>(c,0x1240),0xfull}));
return 0x71842c;}
case 0x71842c:{ // PSRAW XMM5,0xf
wr<16>(c,0x1340,user_op(c,1048743,{r<16>(c,0x1340),0xfull}));
return 0x718431;}
case 0x718431:{ // MOVDQA XMM7,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718436;}
case 0x718436:{ // PANDN XMM2,XMM1
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1280)));
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x1240)));
return 0x71843a;}
case 0x71843a:{ // PANDN XMM6,XMM5
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1380)));
wr<16>(c,0x1380,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x1340)));
return 0x71843e;}
case 0x71843e:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718443;}
case 0x718443:{ // PAND XMM6,XMM2
wr<16>(c,0x1380,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1380),r<16>(c,0x1280)));
return 0x718447;}
case 0x718447:{ // MOVDQA XMM2,XMM7
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x71844b;}
case 0x71844b:{ // PSUBUSW XMM7,XMM4
wr<16>(c,0x13c0,user_op(c,1048747,{r<16>(c,0x13c0),r<16>(c,0x1300)}));
return 0x71844f;}
case 0x71844f:{ // PSUBUSW XMM4,XMM2
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1280)}));
return 0x718453;}
case 0x718453:{ // POR XMM7,XMM4
wr<16>(c,0x13c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1300)));
return 0x718457;}
case 0x718457:{ // PSUBW XMM7,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x13c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c0),u<2>(c,0x135c00)));
wr<2>(c,0x13c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c2),u<2>(c,0x135c02)));
wr<2>(c,0x13c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c4),u<2>(c,0x135c04)));
wr<2>(c,0x13c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c6),u<2>(c,0x135c06)));
wr<2>(c,0x13c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c8),u<2>(c,0x135c08)));
wr<2>(c,0x13ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13ca),u<2>(c,0x135c0a)));
wr<2>(c,0x13cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13cc),u<2>(c,0x135c0c)));
wr<2>(c,0x13ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13ce),u<2>(c,0x135c0e)));
return 0x71845c;}
case 0x71845c:{ // PSRAW XMM7,0xf
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0xfull}));
return 0x718461;}
case 0x718461:{ // PAND XMM7,XMM6
wr<16>(c,0x13c0,eval<Op::INT_AND,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1380)));
return 0x718465;}
case 0x718465:{ // MOVDQA XMM1,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71846a;}
case 0x71846a:{ // MOVDQA XMM3,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71846f;}
case 0x71846f:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718474;}
case 0x718474:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718479;}
case 0x718479:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71847e;}
case 0x71847e:{ // PSUBW XMM5,XMM4
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1300)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1302)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1304)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1306)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1308)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x130a)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x130c)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x130e)));
return 0x718482;}
case 0x718482:{ // PSUBW XMM3,XMM6
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1380)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1382)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1384)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1386)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1388)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x138a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x138c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x138e)));
return 0x718486;}
case 0x718486:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71848a;}
case 0x71848a:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x71848e;}
case 0x71848e:{ // PADDW XMM3,xmmword ptr [0x008176c0]
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(m<16>(c,0x8176c0)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718496;}
case 0x718496:{ // PADDW XMM5,XMM4
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1300)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1302)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1304)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1306)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1308)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x130a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x130c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x130e)));
return 0x71849a;}
case 0x71849a:{ // PADDW XMM3,XMM5
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1340)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1342)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1344)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1346)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1348)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x134a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x134c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x134e)));
return 0x71849e;}
case 0x71849e:{ // PSRAW XMM3,0x3
wr<16>(c,0x12c0,user_op(c,1048743,{r<16>(c,0x12c0),0x3ull}));
return 0x7184a3;}
case 0x7184a3:{ // MOVDQA XMM2,XMM3
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x7184a7;}
case 0x7184a7:{ // PSRAW XMM3,0xf
wr<16>(c,0x12c0,user_op(c,1048743,{r<16>(c,0x12c0),0xfull}));
return 0x7184ac;}
case 0x7184ac:{ // PXOR XMM2,XMM3
wr<16>(c,0x1280,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x12c0)));
return 0x7184b0;}
case 0x7184b0:{ // PSUBSW XMM2,XMM3
wr<16>(c,0x1280,user_op(c,1048745,{r<16>(c,0x1280),r<16>(c,0x12c0)}));
return 0x7184b4;}
case 0x7184b4:{ // POR XMM3,xmmword ptr [0x00817710]
wr<16>(c,0x12c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x12c0),m<16>(c,0x817710)));
return 0x7184bc;}
case 0x7184bc:{ // MOVDQA XMM4,XMM1
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x7184c0;}
case 0x7184c0:{ // PSUBW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x7184c4;}
case 0x7184c4:{ // MOVDQA XMM5,XMM1
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x7184c8;}
case 0x7184c8:{ // PSRAW XMM1,0xf
wr<16>(c,0x1240,user_op(c,1048743,{r<16>(c,0x1240),0xfull}));
return 0x7184cd;}
case 0x7184cd:{ // PXOR XMM5,XMM1
wr<16>(c,0x1340,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1340),r<16>(c,0x1240)));
return 0x7184d1;}
case 0x7184d1:{ // PSUBSW XMM5,XMM1
wr<16>(c,0x1340,user_op(c,1048745,{r<16>(c,0x1340),r<16>(c,0x1240)}));
return 0x7184d5;}
case 0x7184d5:{ // PSUBUSW XMM4,XMM5
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1340)}));
return 0x7184d9;}
case 0x7184d9:{ // PMULLW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x7184dd;}
case 0x7184dd:{ // MOVDQA XMM1,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7184e2;}
case 0x7184e2:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7184e7;}
case 0x7184e7:{ // PADDW XMM1,XMM4
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1300)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1302)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1304)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1306)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1308)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x130a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x130c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x130e)));
return 0x7184eb;}
case 0x7184eb:{ // PSUBW XMM2,XMM4
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1300)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1302)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1304)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1306)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1308)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x130a)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x130c)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x130e)));
return 0x7184ef;}
case 0x7184ef:{ // PXOR XMM6,XMM6
wr<16>(c,0x1380,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1380),r<16>(c,0x1380)));
return 0x7184f3;}
case 0x7184f3:{ // PACKUSWB XMM1,XMM1
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1240,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1241,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1242,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1243,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1244,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1245,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1246,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1247,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1248,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1249,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x7184f7;}
case 0x7184f7:{ // PACKUSWB XMM2,XMM2
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1280,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x7184fb;}
case 0x7184fb:{ // PUNPCKLBW XMM1,XMM6
wr<1>(c,0x124f,eval<Op::COPY,1,1>(r<1>(c,0x1387)));
wr<1>(c,0x124e,eval<Op::COPY,1,1>(r<1>(c,0x1247)));
wr<1>(c,0x124d,eval<Op::COPY,1,1>(r<1>(c,0x1386)));
wr<1>(c,0x124c,eval<Op::COPY,1,1>(r<1>(c,0x1246)));
wr<1>(c,0x124b,eval<Op::COPY,1,1>(r<1>(c,0x1385)));
wr<1>(c,0x124a,eval<Op::COPY,1,1>(r<1>(c,0x1245)));
wr<1>(c,0x1249,eval<Op::COPY,1,1>(r<1>(c,0x1384)));
wr<1>(c,0x1248,eval<Op::COPY,1,1>(r<1>(c,0x1244)));
wr<1>(c,0x1247,eval<Op::COPY,1,1>(r<1>(c,0x1383)));
wr<1>(c,0x1246,eval<Op::COPY,1,1>(r<1>(c,0x1243)));
wr<1>(c,0x1245,eval<Op::COPY,1,1>(r<1>(c,0x1382)));
wr<1>(c,0x1244,eval<Op::COPY,1,1>(r<1>(c,0x1242)));
wr<1>(c,0x1243,eval<Op::COPY,1,1>(r<1>(c,0x1381)));
wr<1>(c,0x1242,eval<Op::COPY,1,1>(r<1>(c,0x1241)));
wr<1>(c,0x1241,eval<Op::COPY,1,1>(r<1>(c,0x1380)));
return 0x7184ff;}
case 0x7184ff:{ // MOVDQA xmmword ptr [EBP + 0xffffff70],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x718507;}
case 0x718507:{ // PUNPCKLBW XMM2,XMM6
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x1387)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x1386)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x1385)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x1384)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x1383)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x1382)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x1381)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x1380)));
return 0x71850b;}
case 0x71850b:{ // MOVDQA xmmword ptr [EBP + 0xffffff50],XMM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x718513;}
case 0x718513:{ // MOVDQA XMM5,xmmword ptr [EDI]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x1c)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718517;}
case 0x718517:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71851c;}
case 0x71851c:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x718520;}
case 0x718520:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718524;}
case 0x718524:{ // PSUBUSW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x718528;}
case 0x718528:{ // PSUBUSW XMM5,XMM3
wr<16>(c,0x1340,user_op(c,1048747,{r<16>(c,0x1340),r<16>(c,0x12c0)}));
return 0x71852c;}
case 0x71852c:{ // POR XMM4,XMM5
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1340)));
return 0x718530;}
case 0x718530:{ // PSUBW XMM4,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718535;}
case 0x718535:{ // PSRAW XMM4,0xf
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0xfull}));
return 0x71853a;}
case 0x71853a:{ // MOVDQA XMM1,XMM4
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71853e;}
case 0x71853e:{ // PAND XMM4,XMM6
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1380)));
return 0x718542;}
case 0x718542:{ // PANDN XMM1,XMM3
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1240)));
wr<16>(c,0x1240,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x12c0)));
return 0x718546;}
case 0x718546:{ // POR XMM1,XMM4
wr<16>(c,0x1240,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1240),r<16>(c,0x1300)));
return 0x71854a;}
case 0x71854a:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718552;}
case 0x718552:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71855a;}
case 0x71855a:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71855e;}
case 0x71855e:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718562;}
case 0x718562:{ // PSUBUSW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x718566;}
case 0x718566:{ // PSUBUSW XMM5,XMM3
wr<16>(c,0x1340,user_op(c,1048747,{r<16>(c,0x1340),r<16>(c,0x12c0)}));
return 0x71856a;}
case 0x71856a:{ // POR XMM4,XMM5
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1340)));
return 0x71856e;}
case 0x71856e:{ // PSUBW XMM4,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718573;}
case 0x718573:{ // PSRAW XMM4,0xf
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0xfull}));
return 0x718578;}
case 0x718578:{ // MOVDQA XMM2,XMM4
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x71857c;}
case 0x71857c:{ // PAND XMM4,XMM6
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1380)));
return 0x718580;}
case 0x718580:{ // PANDN XMM2,XMM3
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1280)));
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x12c0)));
return 0x718584;}
case 0x718584:{ // POR XMM2,XMM4
wr<16>(c,0x1280,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x1300)));
return 0x718588;}
case 0x718588:{ // PXOR XMM0,XMM0
wr<16>(c,0x1200,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1200)));
return 0x71858c;}
case 0x71858c:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x718590;}
case 0x718590:{ // PADDW XMM3,XMM3
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x12c0)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x12c2)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x12c4)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x12c6)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x12c8)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x12ca)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x12cc)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x12ce)));
return 0x718594;}
case 0x718594:{ // PADDW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x718598;}
case 0x718598:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71859d;}
case 0x71859d:{ // PADDW XMM3,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x7185a2;}
case 0x7185a2:{ // PADDW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x7185a7;}
case 0x7185a7:{ // PADDW XMM3,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x7185ac;}
case 0x7185ac:{ // PADDW XMM4,xmmword ptr [0x008176c0]
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(m<16>(c,0x8176c0)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x7185b4;}
case 0x7185b4:{ // PADDW XMM3,XMM4
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1300)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1302)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1304)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1306)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1308)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x130a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x130c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x130e)));
return 0x7185b8;}
case 0x7185b8:{ // MOVDQA XMM4,XMM3
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x7185bc;}
case 0x7185bc:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7185c1;}
case 0x7185c1:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7185c5;}
case 0x7185c5:{ // PSLLW XMM4,0x1
wr<16>(c,0x1300,user_op(c,1048742,{r<16>(c,0x1300),0x1ull}));
return 0x7185ca;}
case 0x7185ca:{ // PSUBW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x7185cf;}
case 0x7185cf:{ // PADDW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x7185d4;}
case 0x7185d4:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x7185d9;}
case 0x7185d9:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7185dd;}
case 0x7185dd:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x7185e1;}
case 0x7185e1:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7185e5;}
case 0x7185e5:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x7185e9;}
case 0x7185e9:{ // MOVQ qword ptr [ESI + EDX*0x2],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7185ee;}
case 0x7185ee:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7185f3;}
case 0x7185f3:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x7185f7;}
case 0x7185f7:{ // PADDW XMM3,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x7185fc;}
case 0x7185fc:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718600;}
case 0x718600:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718604;}
case 0x718604:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718608;}
case 0x718608:{ // PSUBW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x71860d;}
case 0x71860d:{ // PADDW XMM4,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718612;}
case 0x718612:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718617;}
case 0x718617:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x71861b;}
case 0x71861b:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x71861f;}
case 0x71861f:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718623;}
case 0x718623:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718627;}
case 0x718627:{ // MOVQ qword ptr [ESI + EDX*0x1],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71862c;}
case 0x71862c:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718631;}
case 0x718631:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x718635;}
case 0x718635:{ // PADDW XMM3,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x71863a;}
case 0x71863a:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71863e;}
case 0x71863e:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718642;}
case 0x718642:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718646;}
case 0x718646:{ // PSUBW XMM4,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x71864b;}
case 0x71864b:{ // PADDW XMM4,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718650;}
case 0x718650:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718655;}
case 0x718655:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718659;}
case 0x718659:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x71865d;}
case 0x71865d:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718661;}
case 0x718661:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718665;}
case 0x718665:{ // MOVQ qword ptr [ESI],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x718669;}
case 0x718669:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x71866e;}
case 0x71866e:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x718672;}
case 0x718672:{ // PADDW XMM3,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718677;}
case 0x718677:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x71867b;}
case 0x71867b:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x71867f;}
case 0x71867f:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718683;}
case 0x718683:{ // PADDW XMM4,XMM1
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1240)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1242)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1244)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1246)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1248)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x124a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x124c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x124e)));
return 0x718687;}
case 0x718687:{ // PSUBW XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x71868c;}
case 0x71868c:{ // PSUBW XMM4,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718691;}
case 0x718691:{ // PADDW XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718699;}
case 0x718699:{ // MOVDQA XMM5,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7186a1;}
case 0x7186a1:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x7186a6;}
case 0x7186a6:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7186aa;}
case 0x7186aa:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x7186ae;}
case 0x7186ae:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7186b2;}
case 0x7186b2:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x7186b6;}
case 0x7186b6:{ // MOVQ qword ptr [ESI + ECX*0x1],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7186bb;}
case 0x7186bb:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7186c0;}
case 0x7186c0:{ // PSUBW XMM3,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x7186c5;}
case 0x7186c5:{ // PADDW XMM3,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x7186cd;}
case 0x7186cd:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x7186d1;}
case 0x7186d1:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x7186d5;}
case 0x7186d5:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x7186d9;}
case 0x7186d9:{ // PADDW XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x7186de;}
case 0x7186de:{ // PSUBW XMM4,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x7186e3;}
case 0x7186e3:{ // PSUBW XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x7186eb;}
case 0x7186eb:{ // PADDW XMM4,XMM2
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1280)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1282)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1284)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1286)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1288)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x128a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x128c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x128e)));
return 0x7186ef;}
case 0x7186ef:{ // MOVDQA XMM5,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7186f7;}
case 0x7186f7:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x7186fc;}
case 0x7186fc:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718700;}
case 0x718700:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718704;}
case 0x718704:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718708;}
case 0x718708:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71870b;}
case 0x71870b:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71870f;}
case 0x71870f:{ // MOVQ qword ptr [ESI + EDX*0x2],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718714;}
case 0x718714:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718719;}
case 0x718719:{ // PSUBW XMM3,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x71871e;}
case 0x71871e:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x718722;}
case 0x718722:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718726;}
case 0x718726:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x71872a;}
case 0x71872a:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x71872e;}
case 0x71872e:{ // PADDW XMM4,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718733;}
case 0x718733:{ // PSUBW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718738;}
case 0x718738:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71873d;}
case 0x71873d:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718741;}
case 0x718741:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718745;}
case 0x718745:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718749;}
case 0x718749:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71874d;}
case 0x71874d:{ // MOVQ qword ptr [ESI + EDX*0x1],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718752;}
case 0x718752:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718757;}
case 0x718757:{ // PSUBW XMM3,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x71875c;}
case 0x71875c:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x718760;}
case 0x718760:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718764;}
case 0x718764:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718768;}
case 0x718768:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x71876c;}
case 0x71876c:{ // PADDW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718771;}
case 0x718771:{ // PSUBW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718776;}
case 0x718776:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x71877b;}
case 0x71877b:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x71877f;}
case 0x71877f:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718783;}
case 0x718783:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718787;}
case 0x718787:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x71878b;}
case 0x71878b:{ // MOVQ qword ptr [ESI],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x71878f;}
case 0x71878f:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718797;}
case 0x718797:{ // PSUBW XMM3,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x71879c;}
case 0x71879c:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x7187a0;}
case 0x7187a0:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x7187a4;}
case 0x7187a4:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x7187a8;}
case 0x7187a8:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x7187ac;}
case 0x7187ac:{ // PADDW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x7187b1;}
case 0x7187b1:{ // PSUBW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x7187b6;}
case 0x7187b6:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x7187bb;}
case 0x7187bb:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7187bf;}
case 0x7187bf:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x7187c3;}
case 0x7187c3:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x7187c7;}
case 0x7187c7:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x7187cb;}
case 0x7187cb:{ // MOVQ qword ptr [ESI + ECX*0x1],XMM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7187d0;}
case 0x7187d0:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7187d1;}
case 0x7187d1:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7187d2;}
case 0x7187d2:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7187d3;}
case 0x7187d3:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7187d4;}
case 0x7187d4:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7187d5;}
case 0x7187d5:{ // MOVZX EDI,word ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7187d9;}
case 0x7187d9:{ // MOVZX ESI,word ptr [EBP + -0x32]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffceull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7187dd;}
case 0x7187dd:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7187df;}
case 0x7187df:{ // MOVZX EDI,word ptr [EBP + -0x36]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffcaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7187e3;}
case 0x7187e3:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7187e5;}
case 0x7187e5:{ // MOVZX EDI,word ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7187e9;}
case 0x7187e9:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7187eb;}
case 0x7187eb:{ // MOVZX EDI,word ptr [EBP + -0x3a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7187ef;}
case 0x7187ef:{ // MOV EDX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7187f2;}
case 0x7187f2:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7187f4;}
case 0x7187f4:{ // MOVZX EDI,word ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x7187f8;}
case 0x7187f8:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7187fb;}
case 0x7187fb:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7187fe;}
case 0x7187fe:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718800;}
case 0x718800:{ // MOVZX EDI,word ptr [EBP + -0x3e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718804;}
case 0x718804:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718806;}
case 0x718806:{ // MOVZX EDI,word ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71880a;}
case 0x71880a:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71880c;}
case 0x71880c:{ // MOVZX EDI,word ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718810;}
case 0x718810:{ // SHL ECX,0x2
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x2ull,0x1full));
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
return 0x718813;}
case 0x718813:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718815;}
case 0x718815:{ // ADD dword ptr [EAX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718817;}
case 0x718817:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71881a;}
case 0x71881a:{ // MOV ESI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71881d;}
case 0x71881d:{ // ADD EAX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71881f;}
case 0x71881f:{ // MOVZX ESI,word ptr [EBP + -0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdeull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718823;}
case 0x718823:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718825;}
case 0x718825:{ // MOVZX EDI,word ptr [EBP + -0x26]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718829;}
case 0x718829:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71882b;}
case 0x71882b:{ // MOVZX EDI,word ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71882f;}
case 0x71882f:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718831;}
case 0x718831:{ // MOVZX EDI,word ptr [EBP + -0x2a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718835;}
case 0x718835:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718837;}
case 0x718837:{ // MOVZX EDI,word ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71883b;}
case 0x71883b:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71883d;}
case 0x71883d:{ // MOVZX EDI,word ptr [EBP + -0x2e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718841;}
case 0x718841:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718843;}
case 0x718843:{ // MOVZX EDI,word ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718847;}
case 0x718847:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718849;}
case 0x718849:{ // ADD dword ptr [EAX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71884b;}
case 0x71884b:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71884e;}
case 0x71884e:{ // CMP EAX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718851;}
case 0x718851:{ // MOV dword ptr [EBP + -0x44],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x718854;}
case 0x718854:{ // JZ 0x00718fcc
if(r<1>(c,0x206)){return 0x718fcc;}
return 0x71885a;}
case 0x71885a:{ // MOV EAX,dword ptr [EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71885d;}
case 0x71885d:{ // MOV dword ptr [EBP + -0x4c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x718860;}
case 0x718860:{ // MOV dword ptr [EBP + -0x48],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x718863;}
case 0x718863:{ // MOV EAX,dword ptr [EDX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718866;}
case 0x718866:{ // MOV EAX,dword ptr [ECX + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718869;}
case 0x718869:{ // MOV ECX,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71886c;}
case 0x71886c:{ // MOV EAX,dword ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71886f;}
case 0x71886f:{ // MOV word ptr [EBP + -0x60],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x718873;}
case 0x718873:{ // MOV word ptr [EBP + -0x5e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x718877;}
case 0x718877:{ // MOV word ptr [EBP + -0x5c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71887b;}
case 0x71887b:{ // MOV word ptr [EBP + -0x5a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71887f;}
case 0x71887f:{ // MOV word ptr [EBP + -0x58],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa8ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x718883;}
case 0x718883:{ // MOV word ptr [EBP + -0x56],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffaaull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x718887;}
case 0x718887:{ // MOV word ptr [EBP + -0x54],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffacull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71888b;}
case 0x71888b:{ // MOV word ptr [EBP + -0x52],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffaeull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71888f;}
case 0x71888f:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718892;}
case 0x718892:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718894;}
case 0x718894:{ // MOVZX DX,byte ptr [EAX + -0x9]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffff7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x718899;}
case 0x718899:{ // MOV word ptr [EBP + ECX*0x2 + 0xfffffeb0],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffeb0ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x7188a1;}
case 0x7188a1:{ // MOVZX DX,byte ptr [EAX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x7188a5;}
case 0x7188a5:{ // ADD EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7188a8;}
case 0x7188a8:{ // MOV word ptr [EBP + ECX*0x2 + 0xffffff40],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xffffff40ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x7188b0;}
case 0x7188b0:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7188b1;}
case 0x7188b1:{ // CMP ECX,0x8
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x8ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7188b4;}
case 0x7188b4:{ // JC 0x00718894
if(r<1>(c,0x200)){return 0x718894;}
return 0x7188b6;}
case 0x7188b6:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7188b7;}
case 0x7188b7:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7188b8;}
case 0x7188b8:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7188b9;}
case 0x7188b9:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7188ba;}
case 0x7188ba:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7188bb;}
case 0x7188bb:{ // MOVDQA XMM0,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x7188c0;}
case 0x7188c0:{ // MOVDQA XMM1,xmmword ptr [0x008176b0]
wr<16>(c,0x1240,eval<Op::COPY,16,16>(m<16>(c,0x8176b0)));
return 0x7188c8;}
case 0x7188c8:{ // PMULLW XMM1,XMM0
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1200)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1202)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1204)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1206)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1208)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),r<2>(c,0x120a)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),r<2>(c,0x120c)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),r<2>(c,0x120e)));
return 0x7188cc;}
case 0x7188cc:{ // PMULLW XMM1,XMM0
wr<2>(c,0x1240,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1200)));
wr<2>(c,0x1242,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1202)));
wr<2>(c,0x1244,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1204)));
wr<2>(c,0x1246,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1206)));
wr<2>(c,0x1248,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1208)));
wr<2>(c,0x124a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124a),r<2>(c,0x120a)));
wr<2>(c,0x124c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124c),r<2>(c,0x120c)));
wr<2>(c,0x124e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x124e),r<2>(c,0x120e)));
return 0x7188d0;}
case 0x7188d0:{ // PSRLW XMM1,0x5
wr<2>(c,0x1240,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1240),0x5ull));
wr<2>(c,0x1242,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1242),0x5ull));
wr<2>(c,0x1244,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1244),0x5ull));
wr<2>(c,0x1246,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1246),0x5ull));
wr<2>(c,0x1248,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1248),0x5ull));
wr<2>(c,0x124a,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124a),0x5ull));
wr<2>(c,0x124c,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124c),0x5ull));
wr<2>(c,0x124e,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x124e),0x5ull));
return 0x7188d5;}
case 0x7188d5:{ // MOVDQA xmmword ptr [EBP + 0xffffff60],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x7188dd;}
case 0x7188dd:{ // MOV EAX,dword ptr [EBP + -0x48]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7188e0;}
case 0x7188e0:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7188e2;}
case 0x7188e2:{ // MOV ESI,dword ptr [EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7188e5;}
case 0x7188e5:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7188e8;}
case 0x7188e8:{ // SUB ESI,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x4ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7188eb;}
case 0x7188eb:{ // LEA EDI,[EBP + 0xfffffeb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffeb0ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x7188f1;}
case 0x7188f1:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7188f4;}
case 0x7188f4:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7188f6;}
case 0x7188f6:{ // LEA ESI,[ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7188f9;}
case 0x7188f9:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7188fc;}
case 0x7188fc:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x718900;}
case 0x718900:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x718904;}
case 0x718904:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x718907;}
case 0x718907:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71890b;}
case 0x71890b:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71890e;}
case 0x71890e:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x718911;}
case 0x718911:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x718914;}
case 0x718914:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x718917;}
case 0x718917:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x71891a;}
case 0x71891a:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x71891d;}
case 0x71891d:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x718920;}
case 0x718920:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x718923;}
case 0x718923:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x718926;}
case 0x718926:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x718929;}
case 0x718929:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x71892c;}
case 0x71892c:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x71892f;}
case 0x71892f:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x718932;}
case 0x718932:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x718935;}
case 0x718935:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x718938;}
case 0x718938:{ // MOVQ qword ptr [EDI + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71893c;}
case 0x71893c:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71893f;}
case 0x71893f:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x718942;}
case 0x718942:{ // MOVQ qword ptr [EDI + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x718946;}
case 0x718946:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x718949;}
case 0x718949:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71894c;}
case 0x71894c:{ // MOVQ qword ptr [EDI + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x718950;}
case 0x718950:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x718953;}
case 0x718953:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x718956;}
case 0x718956:{ // MOVQ qword ptr [EDI + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71895a;}
case 0x71895a:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71895d;}
case 0x71895d:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x718960;}
case 0x718960:{ // MOVQ qword ptr [EDI + 0x50],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x718964;}
case 0x718964:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x718967;}
case 0x718967:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71896a;}
case 0x71896a:{ // MOVQ qword ptr [EDI + 0x60],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71896e;}
case 0x71896e:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x718971;}
case 0x718971:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x718975;}
case 0x718975:{ // MOVQ qword ptr [EDI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x718979;}
case 0x718979:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71897d;}
case 0x71897d:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x718980;}
case 0x718980:{ // MOVQ qword ptr [EDI + 0x80],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x718987;}
case 0x718987:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71898a;}
case 0x71898a:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71898e;}
case 0x71898e:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x718991;}
case 0x718991:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x718994;}
case 0x718994:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x718997;}
case 0x718997:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x71899a;}
case 0x71899a:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x71899d;}
case 0x71899d:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7189a0;}
case 0x7189a0:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x7189a3;}
case 0x7189a3:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x7189a6;}
case 0x7189a6:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7189a9;}
case 0x7189a9:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x7189ac;}
case 0x7189ac:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x7189af;}
case 0x7189af:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7189b2;}
case 0x7189b2:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7189b5;}
case 0x7189b5:{ // MOVQ qword ptr [EDI + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7189b9;}
case 0x7189b9:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7189bc;}
case 0x7189bc:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7189bf;}
case 0x7189bf:{ // MOVQ qword ptr [EDI + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7189c3;}
case 0x7189c3:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7189c6;}
case 0x7189c6:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7189c9;}
case 0x7189c9:{ // MOVQ qword ptr [EDI + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7189cd;}
case 0x7189cd:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7189d0;}
case 0x7189d0:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7189d3;}
case 0x7189d3:{ // MOVQ qword ptr [EDI + 0x48],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7189d7;}
case 0x7189d7:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7189da;}
case 0x7189da:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7189dd;}
case 0x7189dd:{ // MOVQ qword ptr [EDI + 0x58],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7189e1;}
case 0x7189e1:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7189e4;}
case 0x7189e4:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7189e7;}
case 0x7189e7:{ // MOVQ qword ptr [EDI + 0x68],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7189eb;}
case 0x7189eb:{ // MOVQ qword ptr [EDI + 0x78],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7189ef;}
case 0x7189ef:{ // MOVQ qword ptr [EDI + 0x88],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x88ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7189f6;}
case 0x7189f6:{ // PCMPEQW XMM3,XMM3
wu<1>(c,0xfab00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c0),r<2>(c,0x12c0)));
wu<2>(c,0xfac00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfab00)));
wr<2>(c,0x12c0,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfac00),0xffffull));
wu<1>(c,0xfae00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c2),r<2>(c,0x12c2)));
wu<2>(c,0xfaf00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfae00)));
wr<2>(c,0x12c2,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfaf00),0xffffull));
wu<1>(c,0xfb100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c4),r<2>(c,0x12c4)));
wu<2>(c,0xfb200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb100)));
wr<2>(c,0x12c4,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb200),0xffffull));
wu<1>(c,0xfb400,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c6),r<2>(c,0x12c6)));
wu<2>(c,0xfb500,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb400)));
wr<2>(c,0x12c6,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb500),0xffffull));
wu<1>(c,0xfb700,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12c8),r<2>(c,0x12c8)));
wu<2>(c,0xfb800,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfb700)));
wr<2>(c,0x12c8,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfb800),0xffffull));
wu<1>(c,0xfba00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ca),r<2>(c,0x12ca)));
wu<2>(c,0xfbb00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfba00)));
wr<2>(c,0x12ca,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbb00),0xffffull));
wu<1>(c,0xfbd00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12cc),r<2>(c,0x12cc)));
wu<2>(c,0xfbe00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfbd00)));
wr<2>(c,0x12cc,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfbe00),0xffffull));
wu<1>(c,0xfc000,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x12ce),r<2>(c,0x12ce)));
wu<2>(c,0xfc100,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xfc000)));
wr<2>(c,0x12ce,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xfc100),0xffffull));
return 0x7189fa;}
case 0x7189fa:{ // PSLLW XMM3,0xf
wr<16>(c,0x12c0,user_op(c,1048742,{r<16>(c,0x12c0),0xfull}));
return 0x7189ff;}
case 0x7189ff:{ // PSRLW XMM3,0x8
wr<2>(c,0x12c0,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c0),0x8ull));
wr<2>(c,0x12c2,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c2),0x8ull));
wr<2>(c,0x12c4,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c4),0x8ull));
wr<2>(c,0x12c6,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c6),0x8ull));
wr<2>(c,0x12c8,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12c8),0x8ull));
wr<2>(c,0x12ca,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12ca),0x8ull));
wr<2>(c,0x12cc,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12cc),0x8ull));
wr<2>(c,0x12ce,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x12ce),0x8ull));
return 0x718a04;}
case 0x718a04:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718a09;}
case 0x718a09:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718a0e;}
case 0x718a0e:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x718a12;}
case 0x718a12:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x718a16;}
case 0x718a16:{ // MOVDQA XMM0,XMM2
wr<16>(c,0x1200,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x718a1a;}
case 0x718a1a:{ // MOVDQA XMM4,XMM6
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x718a1e;}
case 0x718a1e:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x718a22;}
case 0x718a22:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x718a26;}
case 0x718a26:{ // MOVDQA XMM1,XMM2
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
return 0x718a2a;}
case 0x718a2a:{ // MOVDQA XMM5,XMM6
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
return 0x718a2e;}
case 0x718a2e:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718a33;}
case 0x718a33:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718a38;}
case 0x718a38:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x718a3c;}
case 0x718a3c:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x718a40;}
case 0x718a40:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x718a44;}
case 0x718a44:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x718a48;}
case 0x718a48:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x718a4c;}
case 0x718a4c:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x718a50;}
case 0x718a50:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x718a54;}
case 0x718a54:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x718a58;}
case 0x718a58:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718a5d;}
case 0x718a5d:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718a62;}
case 0x718a62:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x718a66;}
case 0x718a66:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x718a6a;}
case 0x718a6a:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x718a6e;}
case 0x718a6e:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x718a72;}
case 0x718a72:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x718a76;}
case 0x718a76:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x718a7a;}
case 0x718a7a:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x718a7e;}
case 0x718a7e:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x718a82;}
case 0x718a82:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718a87;}
case 0x718a87:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718a8f;}
case 0x718a8f:{ // PSUBW XMM2,XMM3
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x12c0)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x12c2)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x12c4)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x12c6)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x12c8)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x12ca)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x12cc)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x12ce)));
return 0x718a93;}
case 0x718a93:{ // PSUBW XMM6,XMM3
wr<2>(c,0x1380,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1380),r<2>(c,0x12c0)));
wr<2>(c,0x1382,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1382),r<2>(c,0x12c2)));
wr<2>(c,0x1384,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1384),r<2>(c,0x12c4)));
wr<2>(c,0x1386,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1386),r<2>(c,0x12c6)));
wr<2>(c,0x1388,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1388),r<2>(c,0x12c8)));
wr<2>(c,0x138a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138a),r<2>(c,0x12ca)));
wr<2>(c,0x138c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138c),r<2>(c,0x12cc)));
wr<2>(c,0x138e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x138e),r<2>(c,0x12ce)));
return 0x718a97;}
case 0x718a97:{ // PADDW XMM0,XMM2
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x1280)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x1284)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x1286)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x1288)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x128a)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x128c)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x128e)));
return 0x718a9b;}
case 0x718a9b:{ // PADDW XMM4,XMM6
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1380)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1384)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1386)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1388)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x138a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x138c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x138e)));
return 0x718a9f;}
case 0x718a9f:{ // PMULLW XMM2,XMM2
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1280)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1282)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1284)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1286)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1288)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x128a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x128c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x128e)));
return 0x718aa3;}
case 0x718aa3:{ // PMULLW XMM6,XMM6
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1380)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1382)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1384)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1386)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1388)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x138a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x138c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x138e)));
return 0x718aa7;}
case 0x718aa7:{ // PADDW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x718aab;}
case 0x718aab:{ // PADDW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x718aaf;}
case 0x718aaf:{ // MOVDQA XMM7,XMM3
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x718ab3;}
case 0x718ab3:{ // PSRLW XMM7,0x7
wr<2>(c,0x13c0,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c0),0x7ull));
wr<2>(c,0x13c2,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c2),0x7ull));
wr<2>(c,0x13c4,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c4),0x7ull));
wr<2>(c,0x13c6,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c6),0x7ull));
wr<2>(c,0x13c8,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13c8),0x7ull));
wr<2>(c,0x13ca,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13ca),0x7ull));
wr<2>(c,0x13cc,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13cc),0x7ull));
wr<2>(c,0x13ce,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x13ce),0x7ull));
return 0x718ab8;}
case 0x718ab8:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x718abc;}
case 0x718abc:{ // MOVDQA XMM6,XMM4
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x718ac0;}
case 0x718ac0:{ // PADDW XMM0,XMM7
wr<2>(c,0x1200,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1200),r<2>(c,0x13c0)));
wr<2>(c,0x1202,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1202),r<2>(c,0x13c2)));
wr<2>(c,0x1204,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1204),r<2>(c,0x13c4)));
wr<2>(c,0x1206,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1206),r<2>(c,0x13c6)));
wr<2>(c,0x1208,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1208),r<2>(c,0x13c8)));
wr<2>(c,0x120a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120a),r<2>(c,0x13ca)));
wr<2>(c,0x120c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120c),r<2>(c,0x13cc)));
wr<2>(c,0x120e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x120e),r<2>(c,0x13ce)));
return 0x718ac4;}
case 0x718ac4:{ // PADDW XMM4,XMM7
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x13c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x13c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x13c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x13c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x13c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x13ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x13cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x13ce)));
return 0x718ac8;}
case 0x718ac8:{ // PSRAW XMM2,0x1
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0x1ull}));
return 0x718acd;}
case 0x718acd:{ // PSRAW XMM6,0x1
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0x1ull}));
return 0x718ad2;}
case 0x718ad2:{ // PSRAW XMM0,0x1
wr<16>(c,0x1200,user_op(c,1048743,{r<16>(c,0x1200),0x1ull}));
return 0x718ad7;}
case 0x718ad7:{ // PSRAW XMM4,0x1
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x1ull}));
return 0x718adc;}
case 0x718adc:{ // PMULLW XMM2,XMM0
wr<2>(c,0x1280,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1200)));
wr<2>(c,0x1282,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1202)));
wr<2>(c,0x1284,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1204)));
wr<2>(c,0x1286,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1206)));
wr<2>(c,0x1288,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1208)));
wr<2>(c,0x128a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128a),r<2>(c,0x120a)));
wr<2>(c,0x128c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128c),r<2>(c,0x120c)));
wr<2>(c,0x128e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x128e),r<2>(c,0x120e)));
return 0x718ae0;}
case 0x718ae0:{ // PMULLW XMM6,XMM4
wr<2>(c,0x1380,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1380),r<2>(c,0x1300)));
wr<2>(c,0x1382,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1382),r<2>(c,0x1302)));
wr<2>(c,0x1384,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1384),r<2>(c,0x1304)));
wr<2>(c,0x1386,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1386),r<2>(c,0x1306)));
wr<2>(c,0x1388,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1388),r<2>(c,0x1308)));
wr<2>(c,0x138a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138a),r<2>(c,0x130a)));
wr<2>(c,0x138c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138c),r<2>(c,0x130c)));
wr<2>(c,0x138e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x138e),r<2>(c,0x130e)));
return 0x718ae4;}
case 0x718ae4:{ // PSUBW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x718ae8;}
case 0x718ae8:{ // PSUBW XMM5,XMM6
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1380)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1382)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1384)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1386)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1388)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x138a)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x138c)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x138e)));
return 0x718aec;}
case 0x718aec:{ // MOVDQA XMM7,xmmword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718af4;}
case 0x718af4:{ // MOVDQA XMM2,XMM1
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x718af8;}
case 0x718af8:{ // MOVDQA xmmword ptr [EBP + -0x40],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x718afd;}
case 0x718afd:{ // MOVDQA xmmword ptr [EBP + -0x30],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x718b02;}
case 0x718b02:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718b06;}
case 0x718b06:{ // PSUBW XMM1,XMM7
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x13c0)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x13c2)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x13c4)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x13c6)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x13c8)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x13ca)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x13cc)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x13ce)));
return 0x718b0a;}
case 0x718b0a:{ // PSUBW XMM5,XMM7
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x13c0)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x13c2)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x13c4)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x13c6)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x13c8)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x13ca)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x13cc)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x13ce)));
return 0x718b0e;}
case 0x718b0e:{ // PSRAW XMM2,0xf
wr<16>(c,0x1280,user_op(c,1048743,{r<16>(c,0x1280),0xfull}));
return 0x718b13;}
case 0x718b13:{ // PSRAW XMM6,0xf
wr<16>(c,0x1380,user_op(c,1048743,{r<16>(c,0x1380),0xfull}));
return 0x718b18;}
case 0x718b18:{ // PSRAW XMM1,0xf
wr<16>(c,0x1240,user_op(c,1048743,{r<16>(c,0x1240),0xfull}));
return 0x718b1d;}
case 0x718b1d:{ // PSRAW XMM5,0xf
wr<16>(c,0x1340,user_op(c,1048743,{r<16>(c,0x1340),0xfull}));
return 0x718b22;}
case 0x718b22:{ // MOVDQA XMM7,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x13c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718b27;}
case 0x718b27:{ // PANDN XMM2,XMM1
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1280)));
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x1240)));
return 0x718b2b;}
case 0x718b2b:{ // PANDN XMM6,XMM5
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1380)));
wr<16>(c,0x1380,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x1340)));
return 0x718b2f;}
case 0x718b2f:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718b34;}
case 0x718b34:{ // PAND XMM6,XMM2
wr<16>(c,0x1380,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1380),r<16>(c,0x1280)));
return 0x718b38;}
case 0x718b38:{ // MOVDQA XMM2,XMM7
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
return 0x718b3c;}
case 0x718b3c:{ // PSUBUSW XMM7,XMM4
wr<16>(c,0x13c0,user_op(c,1048747,{r<16>(c,0x13c0),r<16>(c,0x1300)}));
return 0x718b40;}
case 0x718b40:{ // PSUBUSW XMM4,XMM2
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1280)}));
return 0x718b44;}
case 0x718b44:{ // POR XMM7,XMM4
wr<16>(c,0x13c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1300)));
return 0x718b48;}
case 0x718b48:{ // PSUBW XMM7,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x13c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c0),u<2>(c,0x135c00)));
wr<2>(c,0x13c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c2),u<2>(c,0x135c02)));
wr<2>(c,0x13c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c4),u<2>(c,0x135c04)));
wr<2>(c,0x13c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c6),u<2>(c,0x135c06)));
wr<2>(c,0x13c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13c8),u<2>(c,0x135c08)));
wr<2>(c,0x13ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13ca),u<2>(c,0x135c0a)));
wr<2>(c,0x13cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13cc),u<2>(c,0x135c0c)));
wr<2>(c,0x13ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x13ce),u<2>(c,0x135c0e)));
return 0x718b4d;}
case 0x718b4d:{ // PSRAW XMM7,0xf
wr<16>(c,0x13c0,user_op(c,1048743,{r<16>(c,0x13c0),0xfull}));
return 0x718b52;}
case 0x718b52:{ // PAND XMM7,XMM6
wr<16>(c,0x13c0,eval<Op::INT_AND,16,16,16>(r<16>(c,0x13c0),r<16>(c,0x1380)));
return 0x718b56;}
case 0x718b56:{ // MOVDQA XMM1,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718b5b;}
case 0x718b5b:{ // MOVDQA XMM3,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718b60;}
case 0x718b60:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718b65;}
case 0x718b65:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718b6a;}
case 0x718b6a:{ // MOVDQA XMM6,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1380,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718b6f;}
case 0x718b6f:{ // PSUBW XMM5,XMM4
wr<2>(c,0x1340,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1300)));
wr<2>(c,0x1342,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1302)));
wr<2>(c,0x1344,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1304)));
wr<2>(c,0x1346,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1306)));
wr<2>(c,0x1348,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1308)));
wr<2>(c,0x134a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134a),r<2>(c,0x130a)));
wr<2>(c,0x134c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134c),r<2>(c,0x130c)));
wr<2>(c,0x134e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x134e),r<2>(c,0x130e)));
return 0x718b73;}
case 0x718b73:{ // PSUBW XMM3,XMM6
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1380)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1382)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1384)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1386)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1388)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x138a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x138c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x138e)));
return 0x718b77;}
case 0x718b77:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718b7b;}
case 0x718b7b:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718b7f;}
case 0x718b7f:{ // PADDW XMM3,xmmword ptr [0x008176c0]
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(m<16>(c,0x8176c0)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718b87;}
case 0x718b87:{ // PADDW XMM5,XMM4
wr<2>(c,0x1340,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1340),r<2>(c,0x1300)));
wr<2>(c,0x1342,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1342),r<2>(c,0x1302)));
wr<2>(c,0x1344,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1344),r<2>(c,0x1304)));
wr<2>(c,0x1346,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1346),r<2>(c,0x1306)));
wr<2>(c,0x1348,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1348),r<2>(c,0x1308)));
wr<2>(c,0x134a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134a),r<2>(c,0x130a)));
wr<2>(c,0x134c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134c),r<2>(c,0x130c)));
wr<2>(c,0x134e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x134e),r<2>(c,0x130e)));
return 0x718b8b;}
case 0x718b8b:{ // PADDW XMM3,XMM5
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1340)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1342)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1344)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1346)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1348)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x134a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x134c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x134e)));
return 0x718b8f;}
case 0x718b8f:{ // PSRAW XMM3,0x3
wr<16>(c,0x12c0,user_op(c,1048743,{r<16>(c,0x12c0),0x3ull}));
return 0x718b94;}
case 0x718b94:{ // MOVDQA XMM2,XMM3
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x718b98;}
case 0x718b98:{ // PSRAW XMM3,0xf
wr<16>(c,0x12c0,user_op(c,1048743,{r<16>(c,0x12c0),0xfull}));
return 0x718b9d;}
case 0x718b9d:{ // PXOR XMM2,XMM3
wr<16>(c,0x1280,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x12c0)));
return 0x718ba1;}
case 0x718ba1:{ // PSUBSW XMM2,XMM3
wr<16>(c,0x1280,user_op(c,1048745,{r<16>(c,0x1280),r<16>(c,0x12c0)}));
return 0x718ba5;}
case 0x718ba5:{ // POR XMM3,xmmword ptr [0x00817710]
wr<16>(c,0x12c0,eval<Op::INT_OR,16,16,16>(r<16>(c,0x12c0),m<16>(c,0x817710)));
return 0x718bad;}
case 0x718bad:{ // MOVDQA XMM4,XMM1
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x718bb1;}
case 0x718bb1:{ // PSUBW XMM1,XMM2
wr<2>(c,0x1240,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1280)));
wr<2>(c,0x1242,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1282)));
wr<2>(c,0x1244,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1284)));
wr<2>(c,0x1246,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1286)));
wr<2>(c,0x1248,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1288)));
wr<2>(c,0x124a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124a),r<2>(c,0x128a)));
wr<2>(c,0x124c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124c),r<2>(c,0x128c)));
wr<2>(c,0x124e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x124e),r<2>(c,0x128e)));
return 0x718bb5;}
case 0x718bb5:{ // MOVDQA XMM5,XMM1
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x718bb9;}
case 0x718bb9:{ // PSRAW XMM1,0xf
wr<16>(c,0x1240,user_op(c,1048743,{r<16>(c,0x1240),0xfull}));
return 0x718bbe;}
case 0x718bbe:{ // PXOR XMM5,XMM1
wr<16>(c,0x1340,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1340),r<16>(c,0x1240)));
return 0x718bc2;}
case 0x718bc2:{ // PSUBSW XMM5,XMM1
wr<16>(c,0x1340,user_op(c,1048745,{r<16>(c,0x1340),r<16>(c,0x1240)}));
return 0x718bc6;}
case 0x718bc6:{ // PSUBUSW XMM4,XMM5
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1340)}));
return 0x718bca;}
case 0x718bca:{ // PMULLW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718bce;}
case 0x718bce:{ // MOVDQA XMM1,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1240,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718bd3;}
case 0x718bd3:{ // MOVDQA XMM2,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1280,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718bd8;}
case 0x718bd8:{ // PADDW XMM1,XMM4
wr<2>(c,0x1240,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1240),r<2>(c,0x1300)));
wr<2>(c,0x1242,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1242),r<2>(c,0x1302)));
wr<2>(c,0x1244,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1244),r<2>(c,0x1304)));
wr<2>(c,0x1246,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1246),r<2>(c,0x1306)));
wr<2>(c,0x1248,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1248),r<2>(c,0x1308)));
wr<2>(c,0x124a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124a),r<2>(c,0x130a)));
wr<2>(c,0x124c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124c),r<2>(c,0x130c)));
wr<2>(c,0x124e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x124e),r<2>(c,0x130e)));
return 0x718bdc;}
case 0x718bdc:{ // PSUBW XMM2,XMM4
wr<2>(c,0x1280,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1280),r<2>(c,0x1300)));
wr<2>(c,0x1282,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1282),r<2>(c,0x1302)));
wr<2>(c,0x1284,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1284),r<2>(c,0x1304)));
wr<2>(c,0x1286,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1286),r<2>(c,0x1306)));
wr<2>(c,0x1288,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1288),r<2>(c,0x1308)));
wr<2>(c,0x128a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128a),r<2>(c,0x130a)));
wr<2>(c,0x128c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128c),r<2>(c,0x130c)));
wr<2>(c,0x128e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x128e),r<2>(c,0x130e)));
return 0x718be0;}
case 0x718be0:{ // PXOR XMM6,XMM6
wr<16>(c,0x1380,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1380),r<16>(c,0x1380)));
return 0x718be4;}
case 0x718be4:{ // PACKUSWB XMM1,XMM1
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1240,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1241,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1242,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1243,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1244,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1245,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1246,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1247,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1248,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1249,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x124f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718be8;}
case 0x718be8:{ // PACKUSWB XMM2,XMM2
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1280,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x128f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718bec;}
case 0x718bec:{ // PUNPCKLBW XMM1,XMM6
wr<1>(c,0x124f,eval<Op::COPY,1,1>(r<1>(c,0x1387)));
wr<1>(c,0x124e,eval<Op::COPY,1,1>(r<1>(c,0x1247)));
wr<1>(c,0x124d,eval<Op::COPY,1,1>(r<1>(c,0x1386)));
wr<1>(c,0x124c,eval<Op::COPY,1,1>(r<1>(c,0x1246)));
wr<1>(c,0x124b,eval<Op::COPY,1,1>(r<1>(c,0x1385)));
wr<1>(c,0x124a,eval<Op::COPY,1,1>(r<1>(c,0x1245)));
wr<1>(c,0x1249,eval<Op::COPY,1,1>(r<1>(c,0x1384)));
wr<1>(c,0x1248,eval<Op::COPY,1,1>(r<1>(c,0x1244)));
wr<1>(c,0x1247,eval<Op::COPY,1,1>(r<1>(c,0x1383)));
wr<1>(c,0x1246,eval<Op::COPY,1,1>(r<1>(c,0x1243)));
wr<1>(c,0x1245,eval<Op::COPY,1,1>(r<1>(c,0x1382)));
wr<1>(c,0x1244,eval<Op::COPY,1,1>(r<1>(c,0x1242)));
wr<1>(c,0x1243,eval<Op::COPY,1,1>(r<1>(c,0x1381)));
wr<1>(c,0x1242,eval<Op::COPY,1,1>(r<1>(c,0x1241)));
wr<1>(c,0x1241,eval<Op::COPY,1,1>(r<1>(c,0x1380)));
return 0x718bf0;}
case 0x718bf0:{ // MOVDQA xmmword ptr [EBP + 0xffffff70],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x718bf8;}
case 0x718bf8:{ // PUNPCKLBW XMM2,XMM6
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x1387)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x1386)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x1385)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x1384)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x1383)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x1382)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x1381)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x1380)));
return 0x718bfc;}
case 0x718bfc:{ // MOVDQA xmmword ptr [EBP + 0xffffff50],XMM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x718c04;}
case 0x718c04:{ // MOVDQA XMM5,xmmword ptr [EDI]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x1c)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718c08;}
case 0x718c08:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718c0d;}
case 0x718c0d:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x718c11;}
case 0x718c11:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718c15;}
case 0x718c15:{ // PSUBUSW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x718c19;}
case 0x718c19:{ // PSUBUSW XMM5,XMM3
wr<16>(c,0x1340,user_op(c,1048747,{r<16>(c,0x1340),r<16>(c,0x12c0)}));
return 0x718c1d;}
case 0x718c1d:{ // POR XMM4,XMM5
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1340)));
return 0x718c21;}
case 0x718c21:{ // PSUBW XMM4,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718c26;}
case 0x718c26:{ // PSRAW XMM4,0xf
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0xfull}));
return 0x718c2b;}
case 0x718c2b:{ // MOVDQA XMM1,XMM4
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x718c2f;}
case 0x718c2f:{ // PAND XMM4,XMM6
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1380)));
return 0x718c33;}
case 0x718c33:{ // PANDN XMM1,XMM3
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1240)));
wr<16>(c,0x1240,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x12c0)));
return 0x718c37;}
case 0x718c37:{ // POR XMM1,XMM4
wr<16>(c,0x1240,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1240),r<16>(c,0x1300)));
return 0x718c3b;}
case 0x718c3b:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718c43;}
case 0x718c43:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718c4b;}
case 0x718c4b:{ // MOVDQA XMM3,XMM4
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x718c4f;}
case 0x718c4f:{ // MOVDQA XMM6,XMM5
wr<16>(c,0x1380,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718c53;}
case 0x718c53:{ // PSUBUSW XMM4,XMM6
wr<16>(c,0x1300,user_op(c,1048747,{r<16>(c,0x1300),r<16>(c,0x1380)}));
return 0x718c57;}
case 0x718c57:{ // PSUBUSW XMM5,XMM3
wr<16>(c,0x1340,user_op(c,1048747,{r<16>(c,0x1340),r<16>(c,0x12c0)}));
return 0x718c5b;}
case 0x718c5b:{ // POR XMM4,XMM5
wr<16>(c,0x1300,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1340)));
return 0x718c5f;}
case 0x718c5f:{ // PSUBW XMM4,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718c64;}
case 0x718c64:{ // PSRAW XMM4,0xf
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0xfull}));
return 0x718c69;}
case 0x718c69:{ // MOVDQA XMM2,XMM4
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x718c6d;}
case 0x718c6d:{ // PAND XMM4,XMM6
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x1380)));
return 0x718c71;}
case 0x718c71:{ // PANDN XMM2,XMM3
wu<16>(c,0xebc00,eval<Op::INT_NEGATE,16,16>(r<16>(c,0x1280)));
wr<16>(c,0x1280,eval<Op::INT_AND,16,16,16>(u<16>(c,0xebc00),r<16>(c,0x12c0)));
return 0x718c75;}
case 0x718c75:{ // POR XMM2,XMM4
wr<16>(c,0x1280,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1280),r<16>(c,0x1300)));
return 0x718c79;}
case 0x718c79:{ // PXOR XMM0,XMM0
wr<16>(c,0x1200,eval<Op::INT_XOR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1200)));
return 0x718c7d;}
case 0x718c7d:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x718c81;}
case 0x718c81:{ // PADDW XMM3,XMM3
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x12c0)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x12c2)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x12c4)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x12c6)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x12c8)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x12ca)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x12cc)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x12ce)));
return 0x718c85;}
case 0x718c85:{ // PADDW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x718c89;}
case 0x718c89:{ // MOVDQA XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1300,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718c8e;}
case 0x718c8e:{ // PADDW XMM3,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718c93;}
case 0x718c93:{ // PADDW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718c98;}
case 0x718c98:{ // PADDW XMM3,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718c9d;}
case 0x718c9d:{ // PADDW XMM4,xmmword ptr [0x008176c0]
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(m<16>(c,0x8176c0)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718ca5;}
case 0x718ca5:{ // PADDW XMM3,XMM4
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1300)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1302)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1304)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1306)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1308)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x130a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x130c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x130e)));
return 0x718ca9;}
case 0x718ca9:{ // MOVDQA XMM4,XMM3
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
return 0x718cad;}
case 0x718cad:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718cb2;}
case 0x718cb2:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718cb6;}
case 0x718cb6:{ // PSLLW XMM4,0x1
wr<16>(c,0x1300,user_op(c,1048742,{r<16>(c,0x1300),0x1ull}));
return 0x718cbb;}
case 0x718cbb:{ // PSUBW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718cc0;}
case 0x718cc0:{ // PADDW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718cc5;}
case 0x718cc5:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718cca;}
case 0x718cca:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718cce;}
case 0x718cce:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718cd2;}
case 0x718cd2:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718cd6;}
case 0x718cd6:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718cda;}
case 0x718cda:{ // MOVDQ2Q MM4,XMM0
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1200)}));
return 0x718cde;}
case 0x718cde:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718ce3;}
case 0x718ce3:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x718ce7;}
case 0x718ce7:{ // PADDW XMM3,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718cec;}
case 0x718cec:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718cf0;}
case 0x718cf0:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718cf4;}
case 0x718cf4:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718cf8;}
case 0x718cf8:{ // PSUBW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718cfd;}
case 0x718cfd:{ // PADDW XMM4,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718d02;}
case 0x718d02:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718d07;}
case 0x718d07:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718d0b;}
case 0x718d0b:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718d0f;}
case 0x718d0f:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718d13;}
case 0x718d13:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718d17;}
case 0x718d17:{ // MOVDQ2Q MM4,XMM1
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1240)}));
return 0x718d1b;}
case 0x718d1b:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718d20;}
case 0x718d20:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x718d24;}
case 0x718d24:{ // PADDW XMM3,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718d29;}
case 0x718d29:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718d2d;}
case 0x718d2d:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718d31;}
case 0x718d31:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718d35;}
case 0x718d35:{ // PSUBW XMM4,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718d3a;}
case 0x718d3a:{ // PADDW XMM4,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718d3f;}
case 0x718d3f:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718d44;}
case 0x718d44:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718d48;}
case 0x718d48:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718d4c;}
case 0x718d4c:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718d50;}
case 0x718d50:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718d54;}
case 0x718d54:{ // MOVDQ2Q MM4,XMM2
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1280)}));
return 0x718d58;}
case 0x718d58:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718d5d;}
case 0x718d5d:{ // PSUBW XMM3,XMM1
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1240)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1242)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1244)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1246)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1248)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x124a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x124c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x124e)));
return 0x718d61;}
case 0x718d61:{ // PADDW XMM3,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718d66;}
case 0x718d66:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718d6a;}
case 0x718d6a:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718d6e;}
case 0x718d6e:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718d72;}
case 0x718d72:{ // PADDW XMM4,XMM1
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1240)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1242)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1244)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1246)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1248)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x124a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x124c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x124e)));
return 0x718d76;}
case 0x718d76:{ // PSUBW XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718d7b;}
case 0x718d7b:{ // PSUBW XMM4,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718d80;}
case 0x718d80:{ // PADDW XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718d88;}
case 0x718d88:{ // MOVDQA XMM5,xmmword ptr [EBP + 0xffffff70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718d90;}
case 0x718d90:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718d95;}
case 0x718d95:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718d99;}
case 0x718d99:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718d9d;}
case 0x718d9d:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718da1;}
case 0x718da1:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718da5;}
case 0x718da5:{ // MOVDQ2Q MM4,XMM3
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x12c0)}));
return 0x718da9;}
case 0x718da9:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718dae;}
case 0x718dae:{ // PSUBW XMM3,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x718db3;}
case 0x718db3:{ // PADDW XMM3,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),u<2>(c,0xe6d00)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),u<2>(c,0xe6d02)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),u<2>(c,0xe6d04)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),u<2>(c,0xe6d06)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),u<2>(c,0xe6d08)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),u<2>(c,0xe6d0a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),u<2>(c,0xe6d0c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),u<2>(c,0xe6d0e)));
return 0x718dbb;}
case 0x718dbb:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718dbf;}
case 0x718dbf:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718dc3;}
case 0x718dc3:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718dc7;}
case 0x718dc7:{ // PADDW XMM4,xmmword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718dcc;}
case 0x718dcc:{ // PSUBW XMM4,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718dd1;}
case 0x718dd1:{ // PSUBW XMM4,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718dd9;}
case 0x718dd9:{ // PADDW XMM4,XMM2
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1280)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1282)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1284)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1286)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1288)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x128a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x128c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x128e)));
return 0x718ddd;}
case 0x718ddd:{ // MOVDQA XMM5,xmmword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718de5;}
case 0x718de5:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718dea;}
case 0x718dea:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718dee;}
case 0x718dee:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718df2;}
case 0x718df2:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718df6;}
case 0x718df6:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718dfa;}
case 0x718dfa:{ // MOVDQ2Q MM4,XMM4
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1300)}));
return 0x718dfe;}
case 0x718dfe:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718e03;}
case 0x718e03:{ // PSUBW XMM3,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x718e08;}
case 0x718e08:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x718e0c;}
case 0x718e0c:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718e10;}
case 0x718e10:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718e14;}
case 0x718e14:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718e18;}
case 0x718e18:{ // PADDW XMM4,xmmword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718e1d;}
case 0x718e1d:{ // PSUBW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718e22;}
case 0x718e22:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718e27;}
case 0x718e27:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718e2b;}
case 0x718e2b:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718e2f;}
case 0x718e2f:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718e33;}
case 0x718e33:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718e37;}
case 0x718e37:{ // MOVDQ2Q MM4,XMM5
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1340)}));
return 0x718e3b;}
case 0x718e3b:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718e40;}
case 0x718e40:{ // PSUBW XMM3,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x718e45;}
case 0x718e45:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x718e49;}
case 0x718e49:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718e4d;}
case 0x718e4d:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718e51;}
case 0x718e51:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718e55;}
case 0x718e55:{ // PADDW XMM4,xmmword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718e5a;}
case 0x718e5a:{ // PSUBW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718e5f;}
case 0x718e5f:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718e64;}
case 0x718e64:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718e68;}
case 0x718e68:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718e6c;}
case 0x718e6c:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718e70;}
case 0x718e70:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718e74;}
case 0x718e74:{ // MOVDQ2Q MM4,XMM6
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x1380)}));
return 0x718e78;}
case 0x718e78:{ // MOVDQA XMM5,xmmword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wr<16>(c,0x1340,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
return 0x718e80;}
case 0x718e80:{ // PSUBW XMM3,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x12c0,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c0),u<2>(c,0x135c00)));
wr<2>(c,0x12c2,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c2),u<2>(c,0x135c02)));
wr<2>(c,0x12c4,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c4),u<2>(c,0x135c04)));
wr<2>(c,0x12c6,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c6),u<2>(c,0x135c06)));
wr<2>(c,0x12c8,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12c8),u<2>(c,0x135c08)));
wr<2>(c,0x12ca,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ca),u<2>(c,0x135c0a)));
wr<2>(c,0x12cc,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12cc),u<2>(c,0x135c0c)));
wr<2>(c,0x12ce,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x12ce),u<2>(c,0x135c0e)));
return 0x718e85;}
case 0x718e85:{ // PADDW XMM3,XMM2
wr<2>(c,0x12c0,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c0),r<2>(c,0x1280)));
wr<2>(c,0x12c2,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c2),r<2>(c,0x1282)));
wr<2>(c,0x12c4,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c4),r<2>(c,0x1284)));
wr<2>(c,0x12c6,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c6),r<2>(c,0x1286)));
wr<2>(c,0x12c8,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12c8),r<2>(c,0x1288)));
wr<2>(c,0x12ca,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ca),r<2>(c,0x128a)));
wr<2>(c,0x12cc,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12cc),r<2>(c,0x128c)));
wr<2>(c,0x12ce,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x12ce),r<2>(c,0x128e)));
return 0x718e89;}
case 0x718e89:{ // MOVDQA XMM4,XMM5
wr<16>(c,0x1300,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
return 0x718e8d;}
case 0x718e8d:{ // PADDW XMM4,XMM3
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x12c0)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x12c2)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x12c4)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x12c6)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x12c8)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x12ca)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x12cc)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x12ce)));
return 0x718e91;}
case 0x718e91:{ // PADDW XMM4,XMM4
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1300)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1302)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1306)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1308)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x130a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x130c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x130e)));
return 0x718e95;}
case 0x718e95:{ // PADDW XMM4,xmmword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xe6d00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),u<2>(c,0xe6d00)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),u<2>(c,0xe6d02)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),u<2>(c,0xe6d04)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),u<2>(c,0xe6d06)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),u<2>(c,0xe6d08)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),u<2>(c,0xe6d0a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),u<2>(c,0xe6d0c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),u<2>(c,0xe6d0e)));
return 0x718e9a;}
case 0x718e9a:{ // PSUBW XMM4,xmmword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x135c00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),u<2>(c,0x135c00)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),u<2>(c,0x135c02)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),u<2>(c,0x135c04)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),u<2>(c,0x135c06)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),u<2>(c,0x135c08)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),u<2>(c,0x135c0a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),u<2>(c,0x135c0c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),u<2>(c,0x135c0e)));
return 0x718e9f;}
case 0x718e9f:{ // PSRAW XMM4,0x4
wr<16>(c,0x1300,user_op(c,1048743,{r<16>(c,0x1300),0x4ull}));
return 0x718ea4;}
case 0x718ea4:{ // PSUBW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718ea8;}
case 0x718ea8:{ // PAND XMM4,XMM7
wr<16>(c,0x1300,eval<Op::INT_AND,16,16,16>(r<16>(c,0x1300),r<16>(c,0x13c0)));
return 0x718eac;}
case 0x718eac:{ // PADDW XMM4,XMM5
wr<2>(c,0x1300,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1300),r<2>(c,0x1340)));
wr<2>(c,0x1302,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1302),r<2>(c,0x1342)));
wr<2>(c,0x1304,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1304),r<2>(c,0x1344)));
wr<2>(c,0x1306,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1306),r<2>(c,0x1346)));
wr<2>(c,0x1308,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1308),r<2>(c,0x1348)));
wr<2>(c,0x130a,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130a),r<2>(c,0x134a)));
wr<2>(c,0x130c,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130c),r<2>(c,0x134c)));
wr<2>(c,0x130e,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x130e),r<2>(c,0x134e)));
return 0x718eb0;}
case 0x718eb0:{ // PACKUSWB XMM4,XMM0
wu<16>(c,0xe0e00,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wu<16>(c,0xe0f00,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wu<1>(c,0xe1000,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1100,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1100)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1300,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1200,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1200)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1300,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1300)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1400)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1500)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1600)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1700)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0e0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0e0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0e0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0e0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1800)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f00)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f00)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f00),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f00),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1900)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f02)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f02)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f02),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1a00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f02),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1a00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f04)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f04)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f04),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1b00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f04),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1b00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f06)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f06)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f06),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1c00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f06),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1c00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f08)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f08)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f08),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1d00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f08),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1d00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0a)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0a)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0a),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1e00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0a),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1e00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0c)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0c)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0c),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe1f00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0c),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe1f00)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xe0f0e)));
wu<1>(c,0xe1000,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xe0f0e)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xe0f0e),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xe2000,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xe0f0e),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xe2000)));
wu<1>(c,0xe1000,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xe1000),u<1>(c,0xde300)));
wr<1>(c,0x130f,eval<Op::COPY,1,1>(u<1>(c,0xe1000)));
return 0x718eb4;}
case 0x718eb4:{ // MOVDQ2Q MM4,XMM7
wr<8>(c,0x1140,user_op(c,524421,{r<8>(c,0x1140),r<16>(c,0x13c0)}));
return 0x718eb8;}
case 0x718eb8:{ // MOVQ2DQ XMM0,MM0
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1100)));
return 0x718ebc;}
case 0x718ebc:{ // MOVQ2DQ XMM1,MM1
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1110)));
return 0x718ec0;}
case 0x718ec0:{ // MOVQ2DQ XMM2,MM2
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1120)));
return 0x718ec4;}
case 0x718ec4:{ // MOVQ2DQ XMM3,MM3
wr<16>(c,0x12c0,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1130)));
return 0x718ec8;}
case 0x718ec8:{ // PUNPCKLBW XMM0,XMM1
wr<1>(c,0x120f,eval<Op::COPY,1,1>(r<1>(c,0x1247)));
wr<1>(c,0x120e,eval<Op::COPY,1,1>(r<1>(c,0x1207)));
wr<1>(c,0x120d,eval<Op::COPY,1,1>(r<1>(c,0x1246)));
wr<1>(c,0x120c,eval<Op::COPY,1,1>(r<1>(c,0x1206)));
wr<1>(c,0x120b,eval<Op::COPY,1,1>(r<1>(c,0x1245)));
wr<1>(c,0x120a,eval<Op::COPY,1,1>(r<1>(c,0x1205)));
wr<1>(c,0x1209,eval<Op::COPY,1,1>(r<1>(c,0x1244)));
wr<1>(c,0x1208,eval<Op::COPY,1,1>(r<1>(c,0x1204)));
wr<1>(c,0x1207,eval<Op::COPY,1,1>(r<1>(c,0x1243)));
wr<1>(c,0x1206,eval<Op::COPY,1,1>(r<1>(c,0x1203)));
wr<1>(c,0x1205,eval<Op::COPY,1,1>(r<1>(c,0x1242)));
wr<1>(c,0x1204,eval<Op::COPY,1,1>(r<1>(c,0x1202)));
wr<1>(c,0x1203,eval<Op::COPY,1,1>(r<1>(c,0x1241)));
wr<1>(c,0x1202,eval<Op::COPY,1,1>(r<1>(c,0x1201)));
wr<1>(c,0x1201,eval<Op::COPY,1,1>(r<1>(c,0x1240)));
return 0x718ecc;}
case 0x718ecc:{ // PUNPCKLBW XMM2,XMM3
wr<1>(c,0x128f,eval<Op::COPY,1,1>(r<1>(c,0x12c7)));
wr<1>(c,0x128e,eval<Op::COPY,1,1>(r<1>(c,0x1287)));
wr<1>(c,0x128d,eval<Op::COPY,1,1>(r<1>(c,0x12c6)));
wr<1>(c,0x128c,eval<Op::COPY,1,1>(r<1>(c,0x1286)));
wr<1>(c,0x128b,eval<Op::COPY,1,1>(r<1>(c,0x12c5)));
wr<1>(c,0x128a,eval<Op::COPY,1,1>(r<1>(c,0x1285)));
wr<1>(c,0x1289,eval<Op::COPY,1,1>(r<1>(c,0x12c4)));
wr<1>(c,0x1288,eval<Op::COPY,1,1>(r<1>(c,0x1284)));
wr<1>(c,0x1287,eval<Op::COPY,1,1>(r<1>(c,0x12c3)));
wr<1>(c,0x1286,eval<Op::COPY,1,1>(r<1>(c,0x1283)));
wr<1>(c,0x1285,eval<Op::COPY,1,1>(r<1>(c,0x12c2)));
wr<1>(c,0x1284,eval<Op::COPY,1,1>(r<1>(c,0x1282)));
wr<1>(c,0x1283,eval<Op::COPY,1,1>(r<1>(c,0x12c1)));
wr<1>(c,0x1282,eval<Op::COPY,1,1>(r<1>(c,0x1281)));
wr<1>(c,0x1281,eval<Op::COPY,1,1>(r<1>(c,0x12c0)));
return 0x718ed0;}
case 0x718ed0:{ // MOVDQA XMM1,XMM0
wr<16>(c,0x1240,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x718ed4;}
case 0x718ed4:{ // PUNPCKLWD XMM0,XMM2
wr<2>(c,0x120e,eval<Op::COPY,2,2>(r<2>(c,0x1286)));
wr<2>(c,0x120c,eval<Op::COPY,2,2>(r<2>(c,0x1206)));
wr<2>(c,0x120a,eval<Op::COPY,2,2>(r<2>(c,0x1284)));
wr<2>(c,0x1208,eval<Op::COPY,2,2>(r<2>(c,0x1204)));
wr<2>(c,0x1206,eval<Op::COPY,2,2>(r<2>(c,0x1282)));
wr<2>(c,0x1204,eval<Op::COPY,2,2>(r<2>(c,0x1202)));
wr<2>(c,0x1202,eval<Op::COPY,2,2>(r<2>(c,0x1280)));
return 0x718ed8;}
case 0x718ed8:{ // PUNPCKHWD XMM1,XMM2
wr<2>(c,0x1240,eval<Op::COPY,2,2>(r<2>(c,0x1248)));
wr<2>(c,0x1242,eval<Op::COPY,2,2>(r<2>(c,0x1288)));
wr<2>(c,0x1244,eval<Op::COPY,2,2>(r<2>(c,0x124a)));
wr<2>(c,0x1246,eval<Op::COPY,2,2>(r<2>(c,0x128a)));
wr<2>(c,0x1248,eval<Op::COPY,2,2>(r<2>(c,0x124c)));
wr<2>(c,0x124a,eval<Op::COPY,2,2>(r<2>(c,0x128c)));
wr<2>(c,0x124c,eval<Op::COPY,2,2>(r<2>(c,0x124e)));
wr<2>(c,0x124e,eval<Op::COPY,2,2>(r<2>(c,0x128e)));
return 0x718edc;}
case 0x718edc:{ // MOVQ2DQ XMM4,MM4
wr<16>(c,0x1300,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1140)));
return 0x718ee0;}
case 0x718ee0:{ // MOVQ2DQ XMM5,MM5
wr<16>(c,0x1340,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1150)));
return 0x718ee4;}
case 0x718ee4:{ // MOVQ2DQ XMM6,MM6
wr<16>(c,0x1380,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1160)));
return 0x718ee8;}
case 0x718ee8:{ // MOVQ2DQ XMM7,MM7
wr<16>(c,0x13c0,eval<Op::INT_ZEXT,16,8>(r<8>(c,0x1170)));
return 0x718eec;}
case 0x718eec:{ // PUNPCKLBW XMM4,XMM5
wr<1>(c,0x130f,eval<Op::COPY,1,1>(r<1>(c,0x1347)));
wr<1>(c,0x130e,eval<Op::COPY,1,1>(r<1>(c,0x1307)));
wr<1>(c,0x130d,eval<Op::COPY,1,1>(r<1>(c,0x1346)));
wr<1>(c,0x130c,eval<Op::COPY,1,1>(r<1>(c,0x1306)));
wr<1>(c,0x130b,eval<Op::COPY,1,1>(r<1>(c,0x1345)));
wr<1>(c,0x130a,eval<Op::COPY,1,1>(r<1>(c,0x1305)));
wr<1>(c,0x1309,eval<Op::COPY,1,1>(r<1>(c,0x1344)));
wr<1>(c,0x1308,eval<Op::COPY,1,1>(r<1>(c,0x1304)));
wr<1>(c,0x1307,eval<Op::COPY,1,1>(r<1>(c,0x1343)));
wr<1>(c,0x1306,eval<Op::COPY,1,1>(r<1>(c,0x1303)));
wr<1>(c,0x1305,eval<Op::COPY,1,1>(r<1>(c,0x1342)));
wr<1>(c,0x1304,eval<Op::COPY,1,1>(r<1>(c,0x1302)));
wr<1>(c,0x1303,eval<Op::COPY,1,1>(r<1>(c,0x1341)));
wr<1>(c,0x1302,eval<Op::COPY,1,1>(r<1>(c,0x1301)));
wr<1>(c,0x1301,eval<Op::COPY,1,1>(r<1>(c,0x1340)));
return 0x718ef0;}
case 0x718ef0:{ // PUNPCKLBW XMM6,XMM7
wr<1>(c,0x138f,eval<Op::COPY,1,1>(r<1>(c,0x13c7)));
wr<1>(c,0x138e,eval<Op::COPY,1,1>(r<1>(c,0x1387)));
wr<1>(c,0x138d,eval<Op::COPY,1,1>(r<1>(c,0x13c6)));
wr<1>(c,0x138c,eval<Op::COPY,1,1>(r<1>(c,0x1386)));
wr<1>(c,0x138b,eval<Op::COPY,1,1>(r<1>(c,0x13c5)));
wr<1>(c,0x138a,eval<Op::COPY,1,1>(r<1>(c,0x1385)));
wr<1>(c,0x1389,eval<Op::COPY,1,1>(r<1>(c,0x13c4)));
wr<1>(c,0x1388,eval<Op::COPY,1,1>(r<1>(c,0x1384)));
wr<1>(c,0x1387,eval<Op::COPY,1,1>(r<1>(c,0x13c3)));
wr<1>(c,0x1386,eval<Op::COPY,1,1>(r<1>(c,0x1383)));
wr<1>(c,0x1385,eval<Op::COPY,1,1>(r<1>(c,0x13c2)));
wr<1>(c,0x1384,eval<Op::COPY,1,1>(r<1>(c,0x1382)));
wr<1>(c,0x1383,eval<Op::COPY,1,1>(r<1>(c,0x13c1)));
wr<1>(c,0x1382,eval<Op::COPY,1,1>(r<1>(c,0x1381)));
wr<1>(c,0x1381,eval<Op::COPY,1,1>(r<1>(c,0x13c0)));
return 0x718ef4;}
case 0x718ef4:{ // MOVDQA XMM5,XMM4
wr<16>(c,0x1340,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
return 0x718ef8;}
case 0x718ef8:{ // PUNPCKLWD XMM4,XMM6
wr<2>(c,0x130e,eval<Op::COPY,2,2>(r<2>(c,0x1386)));
wr<2>(c,0x130c,eval<Op::COPY,2,2>(r<2>(c,0x1306)));
wr<2>(c,0x130a,eval<Op::COPY,2,2>(r<2>(c,0x1384)));
wr<2>(c,0x1308,eval<Op::COPY,2,2>(r<2>(c,0x1304)));
wr<2>(c,0x1306,eval<Op::COPY,2,2>(r<2>(c,0x1382)));
wr<2>(c,0x1304,eval<Op::COPY,2,2>(r<2>(c,0x1302)));
wr<2>(c,0x1302,eval<Op::COPY,2,2>(r<2>(c,0x1380)));
return 0x718efc;}
case 0x718efc:{ // PUNPCKHWD XMM5,XMM6
wr<2>(c,0x1340,eval<Op::COPY,2,2>(r<2>(c,0x1348)));
wr<2>(c,0x1342,eval<Op::COPY,2,2>(r<2>(c,0x1388)));
wr<2>(c,0x1344,eval<Op::COPY,2,2>(r<2>(c,0x134a)));
wr<2>(c,0x1346,eval<Op::COPY,2,2>(r<2>(c,0x138a)));
wr<2>(c,0x1348,eval<Op::COPY,2,2>(r<2>(c,0x134c)));
wr<2>(c,0x134a,eval<Op::COPY,2,2>(r<2>(c,0x138c)));
wr<2>(c,0x134c,eval<Op::COPY,2,2>(r<2>(c,0x134e)));
wr<2>(c,0x134e,eval<Op::COPY,2,2>(r<2>(c,0x138e)));
return 0x718f00;}
case 0x718f00:{ // MOVDQA XMM2,XMM0
wr<16>(c,0x1280,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
return 0x718f04;}
case 0x718f04:{ // PUNPCKLDQ XMM0,XMM4
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
return 0x718f08;}
case 0x718f08:{ // MOVQ qword ptr [ESI + EDX*0x2],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718f0d;}
case 0x718f0d:{ // PSRLDQ XMM0,0x8
wu<4>(c,0x12d100,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
wr<16>(c,0x1200,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1200),u<4>(c,0x12d100)));
return 0x718f12;}
case 0x718f12:{ // PUNPCKHDQ XMM2,XMM4
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x718f16;}
case 0x718f16:{ // MOVQ qword ptr [ESI + EDX*0x1],XMM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718f1b;}
case 0x718f1b:{ // MOVDQA XMM3,XMM1
wr<16>(c,0x12c0,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
return 0x718f1f;}
case 0x718f1f:{ // PUNPCKLDQ XMM1,XMM5
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x718f23;}
case 0x718f23:{ // MOVQ qword ptr [ESI],XMM2
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x718f27;}
case 0x718f27:{ // PSRLDQ XMM2,0x8
wu<4>(c,0x12d100,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
wr<16>(c,0x1280,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1280),u<4>(c,0x12d100)));
return 0x718f2c;}
case 0x718f2c:{ // PUNPCKHDQ XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x718f30;}
case 0x718f30:{ // MOVQ qword ptr [ESI + ECX*0x1],XMM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718f35;}
case 0x718f35:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x718f38;}
case 0x718f38:{ // MOVQ qword ptr [ESI + EDX*0x2],XMM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718f3d;}
case 0x718f3d:{ // MOVQ qword ptr [ESI],XMM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x718f41;}
case 0x718f41:{ // PSRLDQ XMM1,0x8
wu<4>(c,0x12d100,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
wr<16>(c,0x1240,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x1240),u<4>(c,0x12d100)));
return 0x718f46;}
case 0x718f46:{ // PSRLDQ XMM3,0x8
wu<4>(c,0x12d100,eval<Op::INT_MULT,4,4,4>(0x8ull,0x8ull));
wr<16>(c,0x12c0,eval<Op::INT_RIGHT,16,16,4>(r<16>(c,0x12c0),u<4>(c,0x12d100)));
return 0x718f4b;}
case 0x718f4b:{ // MOVQ qword ptr [ESI + EDX*0x1],XMM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718f50;}
case 0x718f50:{ // MOVQ qword ptr [ESI + ECX*0x1],XMM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x718f55;}
case 0x718f55:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718f56;}
case 0x718f56:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718f57;}
case 0x718f57:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718f58;}
case 0x718f58:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718f59;}
case 0x718f59:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718f5a;}
case 0x718f5a:{ // MOVZX EDI,word ptr [EBP + -0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffccull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f5e;}
case 0x718f5e:{ // MOVZX ESI,word ptr [EBP + -0x32]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffceull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f62;}
case 0x718f62:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718f64;}
case 0x718f64:{ // MOVZX EDI,word ptr [EBP + -0x36]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffcaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f68;}
case 0x718f68:{ // MOV EDX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718f6b;}
case 0x718f6b:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718f6e;}
case 0x718f6e:{ // MOV ECX,dword ptr [EBP + -0x44]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffbcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718f71;}
case 0x718f71:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718f73;}
case 0x718f73:{ // MOVZX EDI,word ptr [EBP + -0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f77;}
case 0x718f77:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718f79;}
case 0x718f79:{ // MOVZX EDI,word ptr [EBP + -0x3a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f7d;}
case 0x718f7d:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718f7f;}
case 0x718f7f:{ // MOVZX EDI,word ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f83;}
case 0x718f83:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718f85;}
case 0x718f85:{ // MOVZX EDI,word ptr [EBP + -0x3e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f89;}
case 0x718f89:{ // LEA EAX,[ECX + EAX*0x1 + -0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0xfffffffcull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x718f8d;}
case 0x718f8d:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718f8f;}
case 0x718f8f:{ // MOVZX EDI,word ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f93;}
case 0x718f93:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718f95;}
case 0x718f95:{ // ADD dword ptr [EAX],ESI
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718f97;}
case 0x718f97:{ // MOV EAX,dword ptr [EDX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718f9a;}
case 0x718f9a:{ // MOVZX EDX,word ptr [EBP + -0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718f9e;}
case 0x718f9e:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fa0;}
case 0x718fa0:{ // MOVZX ECX,word ptr [EBP + -0x22]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdeull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718fa4;}
case 0x718fa4:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fa6;}
case 0x718fa6:{ // MOVZX EDX,word ptr [EBP + -0x26]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdaull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718faa;}
case 0x718faa:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fac;}
case 0x718fac:{ // MOVZX EDX,word ptr [EBP + -0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718fb0;}
case 0x718fb0:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fb2;}
case 0x718fb2:{ // MOVZX EDX,word ptr [EBP + -0x2a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718fb6;}
case 0x718fb6:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fb8;}
case 0x718fb8:{ // MOVZX EDX,word ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718fbc;}
case 0x718fbc:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fbe;}
case 0x718fbe:{ // MOVZX EDX,word ptr [EBP + -0x2e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718fc2;}
case 0x718fc2:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fc4;}
case 0x718fc4:{ // MOVZX EDX,word ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x718fc8;}
case 0x718fc8:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fca;}
case 0x718fca:{ // ADD dword ptr [EAX],ECX
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fcc;}
case 0x718fcc:{ // ADD dword ptr [EBP + -0x8],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),0x4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x4ull));
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
return 0x718fd0;}
case 0x718fd0:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x718fd2;}
case 0x718fd2:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718fd3;}
case 0x718fd3:{ // ADD dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x718fd6;}
case 0x718fd6:{ // ADD dword ptr [EBP + -0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
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
return 0x718fd9;}
case 0x718fd9:{ // ADD dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x718fdc;}
case 0x718fdc:{ // ADD dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
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
return 0x718fdf;}
case 0x718fdf:{ // INC dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x1ull));
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
return 0x718fe2;}
case 0x718fe2:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x718fe5;}
case 0x718fe5:{ // CMP EAX,dword ptr [EBP + -0x74]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff8cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x63000,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fe8;}
case 0x718fe8:{ // JC 0x007181f7
if(r<1>(c,0x200)){return 0x7181f7;}
return 0x718fee;}
case 0x718fee:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718fef;}
case 0x718fef:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718ff0;}
case 0x718ff0:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x718ff2;}
case 0x718ff2:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718ff3;}
case 0x718ff3:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x718ff5;}
case 0x718ff5:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x718ff6;}
case 0x718ff6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x718ff7;}
case 0x718ff7:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x718ff8;}
case 0x718ff8:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x718ffa;}
case 0x718ffa:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x718ffb;}
case 0x718ffb:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x718ffc;}
case 0x718ffc:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x718fff;}
case 0x718fff:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x719002;}
default:missing_instruction(c.pc);}}
}
