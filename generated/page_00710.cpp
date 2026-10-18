#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_710(Cpu& c){switch(c.pc){
case 0x710002:{ // PACKUSWB MM1,qword ptr [ESI + 0x58]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x58ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1110,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x710006;}
case 0x710006:{ // MOVQ qword ptr [EBP + ECX*0x1],MM1
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x71000b;}
case 0x71000b:{ // MOVQ MM2,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71000f;}
case 0x71000f:{ // PACKUSWB MM2,qword ptr [ESI + 0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x68ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1120,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1127,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x710013;}
case 0x710013:{ // MOVQ qword ptr [EBP + ECX*0x2],MM2
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x710018;}
case 0x710018:{ // MOVQ MM3,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71001c;}
case 0x71001c:{ // PACKUSWB MM3,qword ptr [ESI + 0x78]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x78ull));
wu<8>(c,0xde500,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xde600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wu<1>(c,0xde700,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde500)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde500)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde500),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde500),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde800)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1130,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde502)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde502)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde502),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xde900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde502),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xde900)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde504)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde504)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde504),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdea00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde504),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdea00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde506)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde506)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde506),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdeb00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde506),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdeb00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde600)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde600)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde600),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdec00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde600),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdec00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde602)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde602)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde602),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xded00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde602),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xded00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde604)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde604)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde604),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdee00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde604),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdee00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xde606)));
wu<1>(c,0xde700,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xde606)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xde606),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdef00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xde606),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdef00)));
wu<1>(c,0xde700,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xde700),u<1>(c,0xde300)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(u<1>(c,0xde700)));
return 0x710020;}
case 0x710020:{ // LEA EBP,[EBP + ECX*0x2]
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x7900)));
return 0x710024;}
case 0x710024:{ // MOVQ qword ptr [EBP + ECX*0x1],MM3
wu<4>(c,0x7700,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7900,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),u<4>(c,0x7700)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x7900),u<8>(c,0xa400));
return 0x710029;}
case 0x710029:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71002a;}
case 0x71002a:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71002b;}
case 0x71002b:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71002c;}
case 0x71002c:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71002d;}
case 0x71002d:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71002e;}
case 0x71002e:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71002f;}
case 0x71002f:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710032;}
case 0x710032:{ // MOV ECX,dword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710035;}
case 0x710035:{ // MOV EDX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710038;}
case 0x710038:{ // MOVZX ESI,word ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71003c;}
case 0x71003c:{ // LEA ECX,[ECX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71003f;}
case 0x71003f:{ // MOVZX EDX,word ptr [EBP + -0x1a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710043;}
case 0x710043:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710045;}
case 0x710045:{ // MOVZX ESI,word ptr [EBP + -0x1e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710049;}
case 0x710049:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71004b;}
case 0x71004b:{ // MOVZX ESI,word ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71004f;}
case 0x71004f:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710051;}
case 0x710051:{ // MOVZX ESI,word ptr [EBP + -0x4a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710055;}
case 0x710055:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710057;}
case 0x710057:{ // MOVZX ESI,word ptr [EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71005b;}
case 0x71005b:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71005d;}
case 0x71005d:{ // MOVZX ESI,word ptr [EBP + -0x4e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710061;}
case 0x710061:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710063;}
case 0x710063:{ // MOVZX ESI,word ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710067;}
case 0x710067:{ // ADD EDX,ESI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710069;}
case 0x710069:{ // ADD dword ptr [ECX],EDX
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x8)));
wm<4>(c,r<4>(c,0x4),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x4)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71006b;}
case 0x71006b:{ // MOV EAX,dword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71006e;}
case 0x71006e:{ // MOV ECX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710071;}
case 0x710071:{ // MOVZX EDX,word ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710075;}
case 0x710075:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710077;}
case 0x710077:{ // MOVZX ECX,word ptr [EBP + -0x2a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71007b;}
case 0x71007b:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71007d;}
case 0x71007d:{ // MOVZX EDX,word ptr [EBP + -0x2e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710081;}
case 0x710081:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710083;}
case 0x710083:{ // MOVZX EDX,word ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710087;}
case 0x710087:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710089;}
case 0x710089:{ // MOVZX EDX,word ptr [EBP + -0x3a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71008d;}
case 0x71008d:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71008f;}
case 0x71008f:{ // MOVZX EDX,word ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710093;}
case 0x710093:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710095;}
case 0x710095:{ // MOVZX EDX,word ptr [EBP + -0x3e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710099;}
case 0x710099:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71009b;}
case 0x71009b:{ // MOVZX EDX,word ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x71009f;}
case 0x71009f:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7100a1;}
case 0x7100a1:{ // ADD dword ptr [EAX],ECX
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
return 0x7100a3;}
case 0x7100a3:{ // MOV EAX,dword ptr [EBP + -0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7100a6;}
case 0x7100a6:{ // JMP 0x0071010c
return 0x71010c;
return 0x7100a8;}
case 0x7100a8:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7100a9;}
case 0x7100a9:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7100aa;}
case 0x7100aa:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7100ab;}
case 0x7100ab:{ // MOV ESI,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7100ae;}
case 0x7100ae:{ // MOV EDI,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7100b1;}
case 0x7100b1:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7100b2;}
case 0x7100b2:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7100b5;}
case 0x7100b5:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7100b7;}
case 0x7100b7:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7100b9;}
case 0x7100b9:{ // LEA ESI,[ESI + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7100bc;}
case 0x7100bc:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7100bf;}
case 0x7100bf:{ // MOVQ qword ptr [EDI + EDX*0x4],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7100c3;}
case 0x7100c3:{ // LEA EDI,[EDI + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7100c6;}
case 0x7100c6:{ // MOVQ MM1,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7100ca;}
case 0x7100ca:{ // MOVQ qword ptr [EDI + ECX*0x1],MM1
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7100ce;}
case 0x7100ce:{ // MOVQ MM2,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7100d2;}
case 0x7100d2:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7100d5;}
case 0x7100d5:{ // MOVQ qword ptr [EDI + ECX*0x2],MM2
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7100d9;}
case 0x7100d9:{ // LEA EDI,[EDI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7100dc;}
case 0x7100dc:{ // MOVQ MM3,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7100e0;}
case 0x7100e0:{ // MOVQ qword ptr [EDI + EDX*0x1],MM3
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7100e4;}
case 0x7100e4:{ // MOVQ MM4,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7100e7;}
case 0x7100e7:{ // MOVQ MM5,qword ptr [ESI + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7100eb;}
case 0x7100eb:{ // MOVQ qword ptr [EDI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x7100ee;}
case 0x7100ee:{ // MOVQ MM6,qword ptr [ESI + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7100f2;}
case 0x7100f2:{ // LEA ESI,[ESI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7100f5;}
case 0x7100f5:{ // MOVQ qword ptr [EDI + ECX*0x1],MM5
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7100f9;}
case 0x7100f9:{ // MOVQ qword ptr [EDI + ECX*0x2],MM6
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x7100fd;}
case 0x7100fd:{ // MOVQ MM7,qword ptr [ESI + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710101;}
case 0x710101:{ // LEA EDI,[EDI + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x710104;}
case 0x710104:{ // MOVQ qword ptr [EDI + EDX*0x1],MM7
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x710108;}
case 0x710108:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710109;}
case 0x710109:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71010a;}
case 0x71010a:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71010b;}
case 0x71010b:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x71010c;}
case 0x71010c:{ // ADD dword ptr [EBP + -0x8],0x8
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
return 0x710110;}
case 0x710110:{ // ADD dword ptr [EBP + -0x4],0x8
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
return 0x710114;}
case 0x710114:{ // INC dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
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
return 0x710117;}
case 0x710117:{ // ADD dword ptr [EBP + -0x10],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
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
return 0x71011b;}
case 0x71011b:{ // CMP dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x0)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71011e;}
case 0x71011e:{ // JC 0x0070f85d
if(r<1>(c,0x200)){return 0x70f85d;}
return 0x710124;}
case 0x710124:{ // MOV ECX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710127;}
case 0x710127:{ // MOV EDX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x71012a;}
case 0x71012a:{ // SHL EDX,0x3
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x8),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
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
return 0x71012d;}
case 0x71012d:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x71012f;}
case 0x71012f:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710130;}
case 0x710130:{ // SUB ESI,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710132;}
case 0x710132:{ // MOV EDX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710135;}
case 0x710135:{ // SHL EDX,0x3
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x3ull,0x1full));
wu<4>(c,0x9c100,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x8),u<4>(c,0x9c000)));
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
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9c000),0x0ull));
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
return 0x710138;}
case 0x710138:{ // SUB ESI,EDX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71013a;}
case 0x71013a:{ // ADD dword ptr [EBP + -0x4],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),r<4>(c,0x18)));
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
return 0x71013d;}
case 0x71013d:{ // MOV EDX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710140;}
case 0x710140:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710141;}
case 0x710141:{ // MOV dword ptr [EBP + -0x8],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710144;}
case 0x710144:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x710146;}
case 0x710146:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710149;}
case 0x710149:{ // CMP ECX,EAX
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
return 0x71014b;}
case 0x71014b:{ // JMP 0x00710aab
return 0x710aab;
return 0x710150;}
case 0x710150:{ // MOV ECX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710153;}
case 0x710153:{ // MOV ECX,dword ptr [ECX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710156;}
case 0x710156:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x710158;}
case 0x710158:{ // SHL EAX,0x2
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
return 0x71015b;}
case 0x71015b:{ // MOV dword ptr [EBP + -0x64],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x71015e;}
case 0x71015e:{ // MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7400)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710162;}
case 0x710162:{ // MOV ECX,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710165;}
case 0x710165:{ // MOV EAX,dword ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710168;}
case 0x710168:{ // CMP EAX,0x3
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x3ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71016b;}
case 0x71016b:{ // JBE 0x00710a9c
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x710a9c;}
return 0x710171;}
case 0x710171:{ // MOV word ptr [EBP + -0x60],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x710175;}
case 0x710175:{ // MOV word ptr [EBP + -0x5e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa2ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x710179;}
case 0x710179:{ // MOV word ptr [EBP + -0x5c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa4ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x71017d;}
case 0x71017d:{ // MOV word ptr [EBP + -0x5a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa6ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x710181;}
case 0x710181:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710184;}
case 0x710184:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710186;}
case 0x710186:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710189;}
case 0x710189:{ // MOVZX DX,byte ptr [EAX + -0x9]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffff7ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x71018e;}
case 0x71018e:{ // MOV word ptr [EBP + ECX*0x2 + 0xfffffe60],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffe60ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x710196;}
case 0x710196:{ // MOVZX DX,byte ptr [EAX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wr<2>(c,0x8,eval<Op::INT_ZEXT,2,1>(u<1>(c,0x17000)));
return 0x71019a;}
case 0x71019a:{ // ADD EAX,dword ptr [EBX + 0x14]
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
return 0x71019d;}
case 0x71019d:{ // MOV word ptr [EBP + ECX*0x2 + 0xfffffef0],DX
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffef0ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7d00),u<2>(c,0xa200));
return 0x7101a5;}
case 0x7101a5:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7101a6;}
case 0x7101a6:{ // CMP ECX,0x8
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
return 0x7101a9;}
case 0x7101a9:{ // JC 0x00710189
if(r<1>(c,0x200)){return 0x710189;}
return 0x7101ab;}
case 0x7101ab:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7101ac;}
case 0x7101ac:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7101ad;}
case 0x7101ad:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7101ae;}
case 0x7101ae:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7101af;}
case 0x7101af:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7101b0;}
case 0x7101b0:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7101b1;}
case 0x7101b1:{ // MOVQ MM0,qword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7101b5;}
case 0x7101b5:{ // MOVQ MM1,qword ptr [0x008175b0]
wr<8>(c,0x1110,eval<Op::COPY,8,8>(m<8>(c,0x8175b0)));
return 0x7101bc;}
case 0x7101bc:{ // PMULLW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x7101bf;}
case 0x7101bf:{ // PMULLW MM1,MM0
wr<2>(c,0x1110,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1100)));
wr<2>(c,0x1112,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1102)));
wr<2>(c,0x1114,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1104)));
wr<2>(c,0x1116,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1106)));
return 0x7101c2;}
case 0x7101c2:{ // PSRLW MM1,0x5
wr<2>(c,0x1110,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1110),0x5ull));
wr<2>(c,0x1112,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1112),0x5ull));
wr<2>(c,0x1114,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1114),0x5ull));
wr<2>(c,0x1116,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1116),0x5ull));
return 0x7101c6;}
case 0x7101c6:{ // MOVQ qword ptr [EBP + -0x80],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7101ca;}
case 0x7101ca:{ // MOV EAX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7101cd;}
case 0x7101cd:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7101cf;}
case 0x7101cf:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7101d2;}
case 0x7101d2:{ // LEA ESI,[EBP + 0xffffff00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff00ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x7101d8;}
case 0x7101d8:{ // LEA EDI,[EBP + 0xfffffe60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe60ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x7101de;}
case 0x7101de:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7101e1;}
case 0x7101e1:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7101e3;}
case 0x7101e3:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7101e6;}
case 0x7101e6:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7101ea;}
case 0x7101ea:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7101ee;}
case 0x7101ee:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x7101f1;}
case 0x7101f1:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7101f5;}
case 0x7101f5:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7101f8;}
case 0x7101f8:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x7101fb;}
case 0x7101fb:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x7101fe;}
case 0x7101fe:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710201;}
case 0x710201:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x710204;}
case 0x710204:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x710207;}
case 0x710207:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71020a;}
case 0x71020a:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x71020d;}
case 0x71020d:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x710210;}
case 0x710210:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710213;}
case 0x710213:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x710216;}
case 0x710216:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x710219;}
case 0x710219:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x71021c;}
case 0x71021c:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71021f;}
case 0x71021f:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710222;}
case 0x710222:{ // MOVQ qword ptr [EDI + 0x10],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710226;}
case 0x710226:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710229;}
case 0x710229:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x71022c;}
case 0x71022c:{ // MOVQ qword ptr [EDI + 0x20],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710230;}
case 0x710230:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710233;}
case 0x710233:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710236;}
case 0x710236:{ // MOVQ qword ptr [EDI + 0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71023a;}
case 0x71023a:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71023d;}
case 0x71023d:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710240;}
case 0x710240:{ // MOVQ qword ptr [EDI + 0x40],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710244;}
case 0x710244:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710247;}
case 0x710247:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x71024a;}
case 0x71024a:{ // MOVQ qword ptr [EDI + 0x50],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71024e;}
case 0x71024e:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710251;}
case 0x710251:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710254;}
case 0x710254:{ // MOVQ qword ptr [EDI + 0x60],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710258;}
case 0x710258:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71025b;}
case 0x71025b:{ // MOVQ MM1,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71025f;}
case 0x71025f:{ // MOVQ qword ptr [EDI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710263;}
case 0x710263:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710267;}
case 0x710267:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x71026a;}
case 0x71026a:{ // MOVQ qword ptr [EDI + 0x80],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710271;}
case 0x710271:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710274;}
case 0x710274:{ // MOVQ MM3,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710278;}
case 0x710278:{ // PUNPCKLBW MM0,MM1
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1110)));
return 0x71027b;}
case 0x71027b:{ // PUNPCKHBW MM4,MM1
wr<1>(c,0x1140,eval<Op::COPY,1,1>(r<1>(c,0x1144)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1145)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1146)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1147)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
return 0x71027e;}
case 0x71027e:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710281;}
case 0x710281:{ // PUNPCKLBW MM2,MM3
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1133)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1132)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1131)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1130)));
return 0x710284;}
case 0x710284:{ // PUNPCKHBW MM5,MM3
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
return 0x710287;}
case 0x710287:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71028a;}
case 0x71028a:{ // PUNPCKLWD MM0,MM2
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x71028d;}
case 0x71028d:{ // PUNPCKHWD MM1,MM2
wr<2>(c,0x1110,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x710290;}
case 0x710290:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710293;}
case 0x710293:{ // PUNPCKHWD MM4,MM5
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
return 0x710296;}
case 0x710296:{ // PUNPCKLWD MM2,MM5
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x710299;}
case 0x710299:{ // MOVQ MM5,MM0
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71029c;}
case 0x71029c:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x71029f;}
case 0x71029f:{ // MOVQ qword ptr [EDI + 0x18],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7102a3;}
case 0x7102a3:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7102a6;}
case 0x7102a6:{ // MOVQ MM0,MM1
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7102a9;}
case 0x7102a9:{ // MOVQ qword ptr [EDI + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7102ad;}
case 0x7102ad:{ // PUNPCKLBW MM1,MM7
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7102b0;}
case 0x7102b0:{ // PUNPCKHBW MM0,MM7
wr<1>(c,0x1100,eval<Op::COPY,1,1>(r<1>(c,0x1104)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1105)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1106)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1107)));
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7102b3;}
case 0x7102b3:{ // MOVQ qword ptr [EDI + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7102b7;}
case 0x7102b7:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7102ba;}
case 0x7102ba:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7102bd;}
case 0x7102bd:{ // MOVQ qword ptr [EDI + 0x48],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7102c1;}
case 0x7102c1:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7102c4;}
case 0x7102c4:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7102c7;}
case 0x7102c7:{ // MOVQ qword ptr [EDI + 0x58],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7102cb;}
case 0x7102cb:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x7102ce;}
case 0x7102ce:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x7102d1;}
case 0x7102d1:{ // MOVQ qword ptr [EDI + 0x68],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7102d5;}
case 0x7102d5:{ // MOVQ qword ptr [EDI + 0x78],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7102d9;}
case 0x7102d9:{ // MOVQ qword ptr [EDI + 0x88],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x88ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x7102e0;}
case 0x7102e0:{ // PCMPEQW MM3,MM3
wu<1>(c,0xf3800,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wu<2>(c,0xf3900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3800)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3900),0xffffull));
wu<1>(c,0xf3b00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wu<2>(c,0xf3c00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3b00)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3c00),0xffffull));
wu<1>(c,0xf3e00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wu<2>(c,0xf3f00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3e00)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3f00),0xffffull));
wu<1>(c,0xf4100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
wu<2>(c,0xf4200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf4100)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf4200),0xffffull));
return 0x7102e3;}
case 0x7102e3:{ // PSLLW MM3,0xf
wr<8>(c,0x1130,user_op(c,524454,{r<8>(c,0x1130),0xfull}));
return 0x7102e7;}
case 0x7102e7:{ // PSRLW MM3,0x8
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x8ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x8ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x8ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x8ull));
return 0x7102eb;}
case 0x7102eb:{ // MOVQ MM2,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7102ef;}
case 0x7102ef:{ // MOVQ MM6,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7102f3;}
case 0x7102f3:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x7102f6;}
case 0x7102f6:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x7102f9;}
case 0x7102f9:{ // MOVQ MM0,MM2
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7102fc;}
case 0x7102fc:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x7102ff;}
case 0x7102ff:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710302;}
case 0x710302:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710305;}
case 0x710305:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710308;}
case 0x710308:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x71030b;}
case 0x71030b:{ // MOVQ MM2,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71030f;}
case 0x71030f:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710313;}
case 0x710313:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710316;}
case 0x710316:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710319;}
case 0x710319:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71031c;}
case 0x71031c:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71031f;}
case 0x71031f:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710322;}
case 0x710322:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710325;}
case 0x710325:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710328;}
case 0x710328:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71032b;}
case 0x71032b:{ // MOVQ MM2,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71032f;}
case 0x71032f:{ // MOVQ MM6,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710333;}
case 0x710333:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710336;}
case 0x710336:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710339;}
case 0x710339:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71033c;}
case 0x71033c:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x71033f;}
case 0x71033f:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710342;}
case 0x710342:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710345;}
case 0x710345:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710348;}
case 0x710348:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71034b;}
case 0x71034b:{ // MOVQ MM2,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71034f;}
case 0x71034f:{ // MOVQ MM6,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710356;}
case 0x710356:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710359;}
case 0x710359:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x71035c;}
case 0x71035c:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x71035f;}
case 0x71035f:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710362;}
case 0x710362:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710365;}
case 0x710365:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710368;}
case 0x710368:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x71036b;}
case 0x71036b:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71036e;}
case 0x71036e:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x710371;}
case 0x710371:{ // PSRLW MM7,0x7
wr<2>(c,0x1170,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1170),0x7ull));
wr<2>(c,0x1172,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1172),0x7ull));
wr<2>(c,0x1174,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1174),0x7ull));
wr<2>(c,0x1176,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1176),0x7ull));
return 0x710375;}
case 0x710375:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710378;}
case 0x710378:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71037b;}
case 0x71037b:{ // PADDW MM0,MM7
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1170)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1172)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1174)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1176)));
return 0x71037e;}
case 0x71037e:{ // PADDW MM4,MM7
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1170)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1172)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1174)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1176)));
return 0x710381;}
case 0x710381:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x710385;}
case 0x710385:{ // PSRAW MM6,0x1
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x1ull}));
return 0x710389;}
case 0x710389:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x71038d;}
case 0x71038d:{ // PSRAW MM4,0x1
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x1ull}));
return 0x710391;}
case 0x710391:{ // PMULLW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x710394;}
case 0x710394:{ // PMULLW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x710397;}
case 0x710397:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x71039a;}
case 0x71039a:{ // PSUBW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71039d;}
case 0x71039d:{ // MOVQ qword ptr [EBP + -0x50],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7103a1;}
case 0x7103a1:{ // MOVQ qword ptr [EBP + -0x40],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7103a5;}
case 0x7103a5:{ // MOVQ MM7,qword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7103a9;}
case 0x7103a9:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7103ac;}
case 0x7103ac:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7103af;}
case 0x7103af:{ // PSUBW MM1,MM7
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1170)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1172)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1174)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1176)));
return 0x7103b2;}
case 0x7103b2:{ // PSUBW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x7103b5;}
case 0x7103b5:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x7103b9;}
case 0x7103b9:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x7103bd;}
case 0x7103bd:{ // PSRAW MM2,0xf
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0xfull}));
return 0x7103c1;}
case 0x7103c1:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x7103c5;}
case 0x7103c5:{ // MOVQ MM7,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7103c9;}
case 0x7103c9:{ // PANDN MM2,MM1
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1110)));
return 0x7103cc;}
case 0x7103cc:{ // PANDN MM6,MM5
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1160)));
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1150)));
return 0x7103cf;}
case 0x7103cf:{ // MOVQ MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7103d3;}
case 0x7103d3:{ // PAND MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x7103d6;}
case 0x7103d6:{ // MOVQ MM2,MM7
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x7103d9;}
case 0x7103d9:{ // PSUBUSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524459,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x7103dc;}
case 0x7103dc:{ // PSUBUSW MM4,MM2
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x7103df;}
case 0x7103df:{ // POR MM7,MM4
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1140)));
return 0x7103e2;}
case 0x7103e2:{ // PSUBW MM7,qword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1170),u<2>(c,0x132600)));
wr<2>(c,0x1172,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1172),u<2>(c,0x132602)));
wr<2>(c,0x1174,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1174),u<2>(c,0x132604)));
wr<2>(c,0x1176,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1176),u<2>(c,0x132606)));
return 0x7103e6;}
case 0x7103e6:{ // PSRAW MM7,0xf
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0xfull}));
return 0x7103ea;}
case 0x7103ea:{ // PAND MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x7103ed;}
case 0x7103ed:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7103f0;}
case 0x7103f0:{ // MOVQ MM2,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7103f4;}
case 0x7103f4:{ // MOVQ MM6,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7103f8;}
case 0x7103f8:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x7103fb;}
case 0x7103fb:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x7103fe;}
case 0x7103fe:{ // MOVQ MM0,MM2
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710401;}
case 0x710401:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x710404;}
case 0x710404:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710407;}
case 0x710407:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x71040a;}
case 0x71040a:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x71040d;}
case 0x71040d:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x710410;}
case 0x710410:{ // MOVQ MM2,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710414;}
case 0x710414:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710418;}
case 0x710418:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71041b;}
case 0x71041b:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x71041e;}
case 0x71041e:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710421;}
case 0x710421:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710424;}
case 0x710424:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710427;}
case 0x710427:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x71042a;}
case 0x71042a:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x71042d;}
case 0x71042d:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710430;}
case 0x710430:{ // MOVQ MM2,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710434;}
case 0x710434:{ // MOVQ MM6,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710438;}
case 0x710438:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71043b;}
case 0x71043b:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x71043e;}
case 0x71043e:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710441;}
case 0x710441:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710444;}
case 0x710444:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710447;}
case 0x710447:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x71044a;}
case 0x71044a:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x71044d;}
case 0x71044d:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710450;}
case 0x710450:{ // MOVQ MM2,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710454;}
case 0x710454:{ // MOVQ MM6,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71045b;}
case 0x71045b:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x71045e;}
case 0x71045e:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710461;}
case 0x710461:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710464;}
case 0x710464:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710467;}
case 0x710467:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x71046a;}
case 0x71046a:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x71046d;}
case 0x71046d:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710470;}
case 0x710470:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710473;}
case 0x710473:{ // PSRLW MM3,0x7
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x7ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x7ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x7ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x7ull));
return 0x710477;}
case 0x710477:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71047a;}
case 0x71047a:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71047d;}
case 0x71047d:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x710480;}
case 0x710480:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x710483;}
case 0x710483:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x710487;}
case 0x710487:{ // PSRAW MM6,0x1
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x1ull}));
return 0x71048b;}
case 0x71048b:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x71048f;}
case 0x71048f:{ // PSRAW MM4,0x1
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x1ull}));
return 0x710493;}
case 0x710493:{ // PMULLW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x710496;}
case 0x710496:{ // PMULLW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x710499;}
case 0x710499:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x71049c;}
case 0x71049c:{ // PSUBW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x71049f;}
case 0x71049f:{ // MOVQ qword ptr [EBP + -0x20],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7104a3;}
case 0x7104a3:{ // MOVQ qword ptr [EBP + -0x30],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7104a7;}
case 0x7104a7:{ // MOVQ MM3,qword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7104ab;}
case 0x7104ab:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7104ae;}
case 0x7104ae:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7104b1;}
case 0x7104b1:{ // PSUBW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x7104b4;}
case 0x7104b4:{ // PSUBW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x7104b7;}
case 0x7104b7:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x7104bb;}
case 0x7104bb:{ // PSRAW MM2,0xf
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0xfull}));
return 0x7104bf;}
case 0x7104bf:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x7104c3;}
case 0x7104c3:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x7104c7;}
case 0x7104c7:{ // MOVQ MM0,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7104cb;}
case 0x7104cb:{ // PANDN MM2,MM1
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1110)));
return 0x7104ce;}
case 0x7104ce:{ // PANDN MM6,MM5
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1160)));
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1150)));
return 0x7104d1;}
case 0x7104d1:{ // MOVQ MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7104d5;}
case 0x7104d5:{ // PAND MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x7104d8;}
case 0x7104d8:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7104db;}
case 0x7104db:{ // PSUBUSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524459,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x7104de;}
case 0x7104de:{ // PSUBUSW MM4,MM2
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x7104e1;}
case 0x7104e1:{ // POR MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x7104e4;}
case 0x7104e4:{ // PSUBW MM0,qword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),u<2>(c,0x132600)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),u<2>(c,0x132602)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),u<2>(c,0x132604)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),u<2>(c,0x132606)));
return 0x7104e8;}
case 0x7104e8:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x7104ec;}
case 0x7104ec:{ // PAND MM0,MM6
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1160)));
return 0x7104ef;}
case 0x7104ef:{ // SUB EDI,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7104f2;}
case 0x7104f2:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7104f5;}
case 0x7104f5:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7104f9;}
case 0x7104f9:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7104fc;}
case 0x7104fc:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7104ff;}
case 0x7104ff:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x710502;}
case 0x710502:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x710505;}
case 0x710505:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x710508;}
case 0x710508:{ // PSUBW MM4,qword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71050c;}
case 0x71050c:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x710510;}
case 0x710510:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710513;}
case 0x710513:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x710516;}
case 0x710516:{ // PANDN MM1,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1110)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x710519;}
case 0x710519:{ // POR MM1,MM4
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1140)));
return 0x71051c;}
case 0x71051c:{ // MOVQ MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710523;}
case 0x710523:{ // MOVQ MM5,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71052a;}
case 0x71052a:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71052d;}
case 0x71052d:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710530;}
case 0x710530:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x710533;}
case 0x710533:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x710536;}
case 0x710536:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x710539;}
case 0x710539:{ // PSUBW MM4,qword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71053d;}
case 0x71053d:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x710541;}
case 0x710541:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710544;}
case 0x710544:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x710547;}
case 0x710547:{ // PANDN MM2,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x71054a;}
case 0x71054a:{ // POR MM2,MM4
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1140)));
return 0x71054d;}
case 0x71054d:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710550;}
case 0x710550:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x710553;}
case 0x710553:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x710556;}
case 0x710556:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71055a;}
case 0x71055a:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71055e;}
case 0x71055e:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710562;}
case 0x710562:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x710566;}
case 0x710566:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71056d;}
case 0x71056d:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x710570;}
case 0x710570:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x710573;}
case 0x710573:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710577;}
case 0x710577:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71057a;}
case 0x71057a:{ // PSLLW MM4,0x1
wr<8>(c,0x1140,user_op(c,524454,{r<8>(c,0x1140),0x1ull}));
return 0x71057e;}
case 0x71057e:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x710582;}
case 0x710582:{ // PADDW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710586;}
case 0x710586:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71058a;}
case 0x71058a:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71058d;}
case 0x71058d:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x710590;}
case 0x710590:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710593;}
case 0x710593:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x710596;}
case 0x710596:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71059a;}
case 0x71059a:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71059d;}
case 0x71059d:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7105a1;}
case 0x7105a1:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7105a4;}
case 0x7105a4:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7105a7;}
case 0x7105a7:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7105aa;}
case 0x7105aa:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7105ae;}
case 0x7105ae:{ // PADDW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7105b2;}
case 0x7105b2:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7105b6;}
case 0x7105b6:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7105b9;}
case 0x7105b9:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7105bc;}
case 0x7105bc:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7105bf;}
case 0x7105bf:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7105c3;}
case 0x7105c3:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7105c7;}
case 0x7105c7:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7105ca;}
case 0x7105ca:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7105ce;}
case 0x7105ce:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7105d1;}
case 0x7105d1:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7105d4;}
case 0x7105d4:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7105d7;}
case 0x7105d7:{ // PSUBW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7105db;}
case 0x7105db:{ // PADDW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7105df;}
case 0x7105df:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7105e3;}
case 0x7105e3:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7105e6;}
case 0x7105e6:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7105e9;}
case 0x7105e9:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7105ec;}
case 0x7105ec:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7105f0;}
case 0x7105f0:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7105f4;}
case 0x7105f4:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7105f7;}
case 0x7105f7:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7105fb;}
case 0x7105fb:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7105fe;}
case 0x7105fe:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x710601;}
case 0x710601:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x710604;}
case 0x710604:{ // PADDW MM4,MM1
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1110)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1112)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1114)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1116)));
return 0x710607;}
case 0x710607:{ // PSUBW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71060b;}
case 0x71060b:{ // PSUBW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71060f;}
case 0x71060f:{ // PADDW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710616;}
case 0x710616:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71061a;}
case 0x71061a:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71061d;}
case 0x71061d:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x710620;}
case 0x710620:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710623;}
case 0x710623:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710627;}
case 0x710627:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71062b;}
case 0x71062b:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x71062f;}
case 0x71062f:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x710636;}
case 0x710636:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710639;}
case 0x710639:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71063c;}
case 0x71063c:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x71063f;}
case 0x71063f:{ // PADDW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710643;}
case 0x710643:{ // PSUBW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x710647;}
case 0x710647:{ // PSUBW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71064e;}
case 0x71064e:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x710651;}
case 0x710651:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x710655;}
case 0x710655:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710658;}
case 0x710658:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x71065b;}
case 0x71065b:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71065e;}
case 0x71065e:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710662;}
case 0x710662:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710666;}
case 0x710666:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x71066a;}
case 0x71066a:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71066d;}
case 0x71066d:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710670;}
case 0x710670:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x710673;}
case 0x710673:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x710676;}
case 0x710676:{ // PADDW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71067a;}
case 0x71067a:{ // PSUBW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71067e;}
case 0x71067e:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x710682;}
case 0x710682:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710685;}
case 0x710685:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x710688;}
case 0x710688:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71068b;}
case 0x71068b:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71068f;}
case 0x71068f:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710693;}
case 0x710693:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x710697;}
case 0x710697:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71069a;}
case 0x71069a:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71069d;}
case 0x71069d:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7106a0;}
case 0x7106a0:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7106a3;}
case 0x7106a3:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7106a7;}
case 0x7106a7:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7106ab;}
case 0x7106ab:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7106af;}
case 0x7106af:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7106b2;}
case 0x7106b2:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7106b5;}
case 0x7106b5:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7106b8;}
case 0x7106b8:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7106bc;}
case 0x7106bc:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7106c3;}
case 0x7106c3:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7106c7;}
case 0x7106c7:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7106ca;}
case 0x7106ca:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7106cd;}
case 0x7106cd:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7106d0;}
case 0x7106d0:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7106d3;}
case 0x7106d3:{ // PADDW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7106d7;}
case 0x7106d7:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7106db;}
case 0x7106db:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7106df;}
case 0x7106df:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7106e2;}
case 0x7106e2:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x7106e5;}
case 0x7106e5:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7106e8;}
case 0x7106e8:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7106ec;}
case 0x7106ec:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7106ef;}
case 0x7106ef:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7106f2;}
case 0x7106f2:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7106f5;}
case 0x7106f5:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7106f9;}
case 0x7106f9:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7106fc;}
case 0x7106fc:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7106ff;}
case 0x7106ff:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x710702;}
case 0x710702:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x710705;}
case 0x710705:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x710708;}
case 0x710708:{ // PSUBW MM4,qword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71070c;}
case 0x71070c:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x710710;}
case 0x710710:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710713;}
case 0x710713:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x710716;}
case 0x710716:{ // PANDN MM1,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1110)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x710719;}
case 0x710719:{ // POR MM1,MM4
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1140)));
return 0x71071c;}
case 0x71071c:{ // MOVQ MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710723;}
case 0x710723:{ // MOVQ MM5,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71072a;}
case 0x71072a:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x71072d;}
case 0x71072d:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710730;}
case 0x710730:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x710733;}
case 0x710733:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x710736;}
case 0x710736:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x710739;}
case 0x710739:{ // PSUBW MM4,qword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71073d;}
case 0x71073d:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x710741;}
case 0x710741:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710744;}
case 0x710744:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x710747;}
case 0x710747:{ // PANDN MM2,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x71074a;}
case 0x71074a:{ // POR MM2,MM4
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1140)));
return 0x71074d;}
case 0x71074d:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710750;}
case 0x710750:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x710753;}
case 0x710753:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x710756;}
case 0x710756:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71075a;}
case 0x71075a:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x71075e;}
case 0x71075e:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710762;}
case 0x710762:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x710766;}
case 0x710766:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71076d;}
case 0x71076d:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x710770;}
case 0x710770:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x710773;}
case 0x710773:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710777;}
case 0x710777:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71077a;}
case 0x71077a:{ // PSLLW MM4,0x1
wr<8>(c,0x1140,user_op(c,524454,{r<8>(c,0x1140),0x1ull}));
return 0x71077e;}
case 0x71077e:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x710782;}
case 0x710782:{ // PADDW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710786;}
case 0x710786:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71078a;}
case 0x71078a:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71078d;}
case 0x71078d:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x710790;}
case 0x710790:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710793;}
case 0x710793:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x710796;}
case 0x710796:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71079a;}
case 0x71079a:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x71079d;}
case 0x71079d:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7107a1;}
case 0x7107a1:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7107a4;}
case 0x7107a4:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7107a7;}
case 0x7107a7:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7107aa;}
case 0x7107aa:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7107ae;}
case 0x7107ae:{ // PADDW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7107b2;}
case 0x7107b2:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7107b6;}
case 0x7107b6:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7107b9;}
case 0x7107b9:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7107bc;}
case 0x7107bc:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7107bf;}
case 0x7107bf:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7107c3;}
case 0x7107c3:{ // MOVQ MM5,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7107c7;}
case 0x7107c7:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7107ca;}
case 0x7107ca:{ // PADDW MM3,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7107ce;}
case 0x7107ce:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7107d1;}
case 0x7107d1:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7107d4;}
case 0x7107d4:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7107d7;}
case 0x7107d7:{ // PSUBW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7107db;}
case 0x7107db:{ // PADDW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7107df;}
case 0x7107df:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7107e3;}
case 0x7107e3:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7107e6;}
case 0x7107e6:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7107e9;}
case 0x7107e9:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7107ec;}
case 0x7107ec:{ // MOVQ qword ptr [ESI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7107f0;}
case 0x7107f0:{ // MOVQ MM5,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7107f4;}
case 0x7107f4:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x7107f7;}
case 0x7107f7:{ // PADDW MM3,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x7107fb;}
case 0x7107fb:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7107fe;}
case 0x7107fe:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x710801;}
case 0x710801:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x710804;}
case 0x710804:{ // PADDW MM4,MM1
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1110)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1112)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1114)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1116)));
return 0x710807;}
case 0x710807:{ // PSUBW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71080b;}
case 0x71080b:{ // PSUBW MM4,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71080f;}
case 0x71080f:{ // PADDW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710816;}
case 0x710816:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x71081a;}
case 0x71081a:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71081d;}
case 0x71081d:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x710820;}
case 0x710820:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710823;}
case 0x710823:{ // MOVQ qword ptr [ESI + 0x30],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710827;}
case 0x710827:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71082b;}
case 0x71082b:{ // PSUBW MM3,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x71082f;}
case 0x71082f:{ // PADDW MM3,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x710836;}
case 0x710836:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710839;}
case 0x710839:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x71083c;}
case 0x71083c:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x71083f;}
case 0x71083f:{ // PADDW MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710843;}
case 0x710843:{ // PSUBW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x710847;}
case 0x710847:{ // PSUBW MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71084e;}
case 0x71084e:{ // PADDW MM4,MM2
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1120)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1122)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1124)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1126)));
return 0x710851;}
case 0x710851:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x710855;}
case 0x710855:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710858;}
case 0x710858:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x71085b;}
case 0x71085b:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71085e;}
case 0x71085e:{ // MOVQ qword ptr [ESI + 0x40],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710862;}
case 0x710862:{ // MOVQ MM5,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710866;}
case 0x710866:{ // PSUBW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x71086a;}
case 0x71086a:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71086d;}
case 0x71086d:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710870;}
case 0x710870:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x710873;}
case 0x710873:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x710876;}
case 0x710876:{ // PADDW MM4,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x71087a;}
case 0x71087a:{ // PSUBW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x71087e;}
case 0x71087e:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x710882;}
case 0x710882:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710885;}
case 0x710885:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x710888;}
case 0x710888:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x71088b;}
case 0x71088b:{ // MOVQ qword ptr [ESI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71088f;}
case 0x71088f:{ // MOVQ MM5,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710893;}
case 0x710893:{ // PSUBW MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x710897;}
case 0x710897:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x71089a;}
case 0x71089a:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x71089d;}
case 0x71089d:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7108a0;}
case 0x7108a0:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7108a3;}
case 0x7108a3:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7108a7;}
case 0x7108a7:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7108ab;}
case 0x7108ab:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7108af;}
case 0x7108af:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7108b2;}
case 0x7108b2:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7108b5;}
case 0x7108b5:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7108b8;}
case 0x7108b8:{ // MOVQ qword ptr [ESI + 0x60],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7108bc;}
case 0x7108bc:{ // MOVQ MM5,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7108c3;}
case 0x7108c3:{ // PSUBW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),u<2>(c,0x132600)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),u<2>(c,0x132602)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),u<2>(c,0x132604)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),u<2>(c,0x132606)));
return 0x7108c7;}
case 0x7108c7:{ // PADDW MM3,MM2
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1120)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1122)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1124)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1126)));
return 0x7108ca;}
case 0x7108ca:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7108cd;}
case 0x7108cd:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x7108d0;}
case 0x7108d0:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x7108d3;}
case 0x7108d3:{ // PADDW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x7108d7;}
case 0x7108d7:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x7108db;}
case 0x7108db:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x7108df;}
case 0x7108df:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7108e2;}
case 0x7108e2:{ // PAND MM4,MM0
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1100)));
return 0x7108e5;}
case 0x7108e5:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x7108e8;}
case 0x7108e8:{ // MOVQ qword ptr [ESI + 0x70],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7108ec;}
case 0x7108ec:{ // MOV EAX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7108ef;}
case 0x7108ef:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7108f2;}
case 0x7108f2:{ // SUB ESI,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7108f5;}
case 0x7108f5:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7108f8;}
case 0x7108f8:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7108fb;}
case 0x7108fb:{ // MOVQ MM1,qword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7108ff;}
case 0x7108ff:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710902;}
case 0x710902:{ // PUNPCKLWD MM0,MM1
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1110)));
return 0x710905;}
case 0x710905:{ // PUNPCKHWD MM4,MM1
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
return 0x710908;}
case 0x710908:{ // MOVQ MM2,qword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71090c;}
case 0x71090c:{ // MOVQ MM3,qword ptr [ESI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710910;}
case 0x710910:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710913;}
case 0x710913:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x710916;}
case 0x710916:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x710919;}
case 0x710919:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71091c;}
case 0x71091c:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x71091f;}
case 0x71091f:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x710922;}
case 0x710922:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x710925;}
case 0x710925:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710928;}
case 0x710928:{ // MOVQ qword ptr [EDI + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x71092c;}
case 0x71092c:{ // PUNPCKLDQ MM0,MM5
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71092f;}
case 0x71092f:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x710932;}
case 0x710932:{ // MOVQ MM1,qword ptr [ESI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710936;}
case 0x710936:{ // MOVQ MM2,qword ptr [ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71093a;}
case 0x71093a:{ // MOVQ MM5,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x71093e;}
case 0x71093e:{ // MOVQ MM6,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710942;}
case 0x710942:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710945;}
case 0x710945:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710948;}
case 0x710948:{ // PUNPCKLWD MM1,MM2
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x71094b;}
case 0x71094b:{ // PUNPCKHWD MM3,MM2
wr<2>(c,0x1130,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x71094e;}
case 0x71094e:{ // PUNPCKLWD MM5,MM6
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x710951;}
case 0x710951:{ // PUNPCKHWD MM7,MM6
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1164)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1166)));
return 0x710954;}
case 0x710954:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710957;}
case 0x710957:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x71095a;}
case 0x71095a:{ // PUNPCKLDQ MM1,MM5
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x71095d;}
case 0x71095d:{ // PUNPCKHDQ MM2,MM5
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x710960;}
case 0x710960:{ // PUNPCKLDQ MM3,MM7
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x710963;}
case 0x710963:{ // PUNPCKHDQ MM6,MM7
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x710966;}
case 0x710966:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710969;}
case 0x710969:{ // PACKUSWB MM5,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x71096c;}
case 0x71096c:{ // MOVQ qword ptr [EAX],MM5
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x71096f;}
case 0x71096f:{ // MOVQ MM7,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710973;}
case 0x710973:{ // PACKUSWB MM7,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
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
return 0x710976;}
case 0x710976:{ // MOVQ qword ptr [EAX + ECX*0x1],MM7
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71097a;}
case 0x71097a:{ // PACKUSWB MM0,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x71097d;}
case 0x71097d:{ // PACKUSWB MM4,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
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
wr<1>(c,0x1140,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x710980;}
case 0x710980:{ // MOVQ qword ptr [EAX + ECX*0x2],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x710984;}
case 0x710984:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x710987;}
case 0x710987:{ // MOVQ qword ptr [EAX + EDX*0x1],MM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x71098b;}
case 0x71098b:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x71098e;}
case 0x71098e:{ // ADD ESI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x8ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710991;}
case 0x710991:{ // MOVQ MM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710994;}
case 0x710994:{ // MOVQ MM1,qword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710998;}
case 0x710998:{ // MOVQ MM4,MM0
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x71099b;}
case 0x71099b:{ // PUNPCKLWD MM0,MM1
wr<2>(c,0x1106,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1104,eval<Op::COPY,2,2>(r<2>(c,0x1102)));
wr<2>(c,0x1102,eval<Op::COPY,2,2>(r<2>(c,0x1110)));
return 0x71099e;}
case 0x71099e:{ // PUNPCKHWD MM4,MM1
wr<2>(c,0x1140,eval<Op::COPY,2,2>(r<2>(c,0x1144)));
wr<2>(c,0x1142,eval<Op::COPY,2,2>(r<2>(c,0x1114)));
wr<2>(c,0x1144,eval<Op::COPY,2,2>(r<2>(c,0x1146)));
wr<2>(c,0x1146,eval<Op::COPY,2,2>(r<2>(c,0x1116)));
return 0x7109a1;}
case 0x7109a1:{ // MOVQ MM2,qword ptr [ESI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7109a5;}
case 0x7109a5:{ // MOVQ MM3,qword ptr [ESI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7109a9;}
case 0x7109a9:{ // MOVQ MM5,MM2
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x7109ac;}
case 0x7109ac:{ // PUNPCKLWD MM2,MM3
wr<2>(c,0x1126,eval<Op::COPY,2,2>(r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1122,eval<Op::COPY,2,2>(r<2>(c,0x1130)));
return 0x7109af;}
case 0x7109af:{ // PUNPCKHWD MM5,MM3
wr<2>(c,0x1150,eval<Op::COPY,2,2>(r<2>(c,0x1154)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1156)));
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
return 0x7109b2;}
case 0x7109b2:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x7109b5;}
case 0x7109b5:{ // PUNPCKLDQ MM0,MM2
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1120)));
return 0x7109b8;}
case 0x7109b8:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x7109bb;}
case 0x7109bb:{ // PUNPCKHDQ MM1,MM2
wr<4>(c,0x1110,eval<Op::COPY,4,4>(r<4>(c,0x1114)));
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
return 0x7109be;}
case 0x7109be:{ // MOVQ MM0,MM4
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x7109c1;}
case 0x7109c1:{ // MOVQ qword ptr [EDI + 0x10],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x7109c5;}
case 0x7109c5:{ // PUNPCKLDQ MM0,MM5
wr<4>(c,0x1104,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x7109c8;}
case 0x7109c8:{ // PUNPCKHDQ MM4,MM5
wr<4>(c,0x1140,eval<Op::COPY,4,4>(r<4>(c,0x1144)));
wr<4>(c,0x1144,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x7109cb;}
case 0x7109cb:{ // MOVQ MM1,qword ptr [ESI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7109cf;}
case 0x7109cf:{ // MOVQ MM2,qword ptr [ESI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7109d3;}
case 0x7109d3:{ // MOVQ MM5,qword ptr [ESI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7109d7;}
case 0x7109d7:{ // MOVQ MM6,qword ptr [ESI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x7109db;}
case 0x7109db:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7109de;}
case 0x7109de:{ // MOVQ MM7,MM5
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x7109e1;}
case 0x7109e1:{ // PUNPCKLWD MM1,MM2
wr<2>(c,0x1116,eval<Op::COPY,2,2>(r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::COPY,2,2>(r<2>(c,0x1112)));
wr<2>(c,0x1112,eval<Op::COPY,2,2>(r<2>(c,0x1120)));
return 0x7109e4;}
case 0x7109e4:{ // PUNPCKHWD MM3,MM2
wr<2>(c,0x1130,eval<Op::COPY,2,2>(r<2>(c,0x1134)));
wr<2>(c,0x1132,eval<Op::COPY,2,2>(r<2>(c,0x1124)));
wr<2>(c,0x1134,eval<Op::COPY,2,2>(r<2>(c,0x1136)));
wr<2>(c,0x1136,eval<Op::COPY,2,2>(r<2>(c,0x1126)));
return 0x7109e7;}
case 0x7109e7:{ // PUNPCKLWD MM5,MM6
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1160)));
return 0x7109ea;}
case 0x7109ea:{ // PUNPCKHWD MM7,MM6
wr<2>(c,0x1170,eval<Op::COPY,2,2>(r<2>(c,0x1174)));
wr<2>(c,0x1172,eval<Op::COPY,2,2>(r<2>(c,0x1164)));
wr<2>(c,0x1174,eval<Op::COPY,2,2>(r<2>(c,0x1176)));
wr<2>(c,0x1176,eval<Op::COPY,2,2>(r<2>(c,0x1166)));
return 0x7109ed;}
case 0x7109ed:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x7109f0;}
case 0x7109f0:{ // MOVQ MM6,MM3
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x7109f3;}
case 0x7109f3:{ // PUNPCKLDQ MM1,MM5
wr<4>(c,0x1114,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x7109f6;}
case 0x7109f6:{ // PUNPCKHDQ MM2,MM5
wr<4>(c,0x1120,eval<Op::COPY,4,4>(r<4>(c,0x1124)));
wr<4>(c,0x1124,eval<Op::COPY,4,4>(r<4>(c,0x1154)));
return 0x7109f9;}
case 0x7109f9:{ // PUNPCKLDQ MM3,MM7
wr<4>(c,0x1134,eval<Op::COPY,4,4>(r<4>(c,0x1170)));
return 0x7109fc;}
case 0x7109fc:{ // PUNPCKHDQ MM6,MM7
wr<4>(c,0x1160,eval<Op::COPY,4,4>(r<4>(c,0x1164)));
wr<4>(c,0x1164,eval<Op::COPY,4,4>(r<4>(c,0x1174)));
return 0x7109ff;}
case 0x7109ff:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710a02;}
case 0x710a02:{ // PACKUSWB MM5,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x710a05;}
case 0x710a05:{ // MOVQ qword ptr [EAX],MM5
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x710a08;}
case 0x710a08:{ // MOVQ MM7,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710a0c;}
case 0x710a0c:{ // PACKUSWB MM7,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
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
return 0x710a0f;}
case 0x710a0f:{ // MOVQ qword ptr [EAX + ECX*0x1],MM7
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x710a13;}
case 0x710a13:{ // PACKUSWB MM0,MM3
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
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
return 0x710a16;}
case 0x710a16:{ // PACKUSWB MM4,MM6
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
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
wr<1>(c,0x1140,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf002)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf002)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf002),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf400,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf002),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf400)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf004)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf004)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf004),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf500,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf004),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf500)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf006)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf006)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf006),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf600,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf006),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf600)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf100)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf100)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf100),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf700,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf100),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf700)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf102)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf102)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf102),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf800,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf102),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf800)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf104)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf104)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf104),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdf900,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf104),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdf900)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
wu<1>(c,0xdde00,eval<Op::INT_SLESS,1,2,2>(0xffull,u<2>(c,0xdf106)));
wu<1>(c,0xdf200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xdde00),0xffull));
wu<1>(c,0xde000,eval<Op::INT_SLESS,1,2,2>(0x0ull,u<2>(c,0xdf106)));
wu<1>(c,0xde100,eval<Op::INT_SLESSEQUAL,1,2,2>(u<2>(c,0xdf106),0xffull));
wu<1>(c,0xde200,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde000),u<1>(c,0xde100)));
wu<1>(c,0xdfa00,eval<Op::SUBPIECE,1,2,4>(u<2>(c,0xdf106),0x0ull));
wu<1>(c,0xde300,eval<Op::INT_MULT,1,1,1>(u<1>(c,0xde200),u<1>(c,0xdfa00)));
wu<1>(c,0xdf200,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xdf200),u<1>(c,0xde300)));
wr<1>(c,0x1147,eval<Op::COPY,1,1>(u<1>(c,0xdf200)));
return 0x710a19;}
case 0x710a19:{ // MOVQ qword ptr [EAX + ECX*0x2],MM0
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x710a1d;}
case 0x710a1d:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x710a20;}
case 0x710a20:{ // MOVQ qword ptr [EAX + EDX*0x1],MM4
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6c00),u<8>(c,0xa400));
return 0x710a24;}
case 0x710a24:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710a25;}
case 0x710a25:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710a26;}
case 0x710a26:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710a27;}
case 0x710a27:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710a28;}
case 0x710a28:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710a29;}
case 0x710a29:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710a2a;}
case 0x710a2a:{ // MOVZX EDI,word ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a2e;}
case 0x710a2e:{ // MOVZX ESI,word ptr [EBP + -0x1a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a32;}
case 0x710a32:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a34;}
case 0x710a34:{ // MOVZX EDI,word ptr [EBP + -0x1e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a38;}
case 0x710a38:{ // MOV ECX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710a3b;}
case 0x710a3b:{ // MOV EDX,dword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710a3e;}
case 0x710a3e:{ // MOV EAX,dword ptr [EBP + -0x64]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710a41;}
case 0x710a41:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a43;}
case 0x710a43:{ // MOVZX EDI,word ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a47;}
case 0x710a47:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a49;}
case 0x710a49:{ // MOVZX EDI,word ptr [EBP + -0x4a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a4d;}
case 0x710a4d:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a4f;}
case 0x710a4f:{ // MOVZX EDI,word ptr [EBP + -0x4c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a53;}
case 0x710a53:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a55;}
case 0x710a55:{ // MOVZX EDI,word ptr [EBP + -0x4e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a59;}
case 0x710a59:{ // ADD EDX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a5b;}
case 0x710a5b:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a5d;}
case 0x710a5d:{ // MOVZX EDI,word ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a61;}
case 0x710a61:{ // ADD ESI,EDI
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a63;}
case 0x710a63:{ // ADD dword ptr [EDX],ESI
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
return 0x710a65;}
case 0x710a65:{ // MOV ECX,dword ptr [ECX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x28ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710a68;}
case 0x710a68:{ // MOVZX EDX,word ptr [EBP + -0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a6c;}
case 0x710a6c:{ // LEA EAX,[ECX + EAX*0x1 + 0x4]
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x4)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x7400)));
return 0x710a70;}
case 0x710a70:{ // MOVZX ECX,word ptr [EBP + -0x2a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a74;}
case 0x710a74:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a76;}
case 0x710a76:{ // MOVZX EDX,word ptr [EBP + -0x2e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a7a;}
case 0x710a7a:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a7c;}
case 0x710a7c:{ // MOVZX EDX,word ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a80;}
case 0x710a80:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a82;}
case 0x710a82:{ // MOVZX EDX,word ptr [EBP + -0x3a]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc6ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a86;}
case 0x710a86:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a88;}
case 0x710a88:{ // MOVZX EDX,word ptr [EBP + -0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc4ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a8c;}
case 0x710a8c:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a8e;}
case 0x710a8e:{ // MOVZX EDX,word ptr [EBP + -0x3e]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc2ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a92;}
case 0x710a92:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a94;}
case 0x710a94:{ // MOVZX EDX,word ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x17100)));
return 0x710a98;}
case 0x710a98:{ // ADD ECX,EDX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710a9a;}
case 0x710a9a:{ // ADD dword ptr [EAX],ECX
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
return 0x710a9c;}
case 0x710a9c:{ // MOV EDX,dword ptr [EBP + -0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710a9f;}
case 0x710a9f:{ // ADD dword ptr [EBP + -0x8],0x8
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
return 0x710aa3;}
case 0x710aa3:{ // ADD dword ptr [EBP + -0x4],0x8
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
return 0x710aa7;}
case 0x710aa7:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710aa8;}
case 0x710aa8:{ // CMP EDX,dword ptr [EBP + -0x10]
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
return 0x710aab;}
case 0x710aab:{ // MOV dword ptr [EBP + -0xc],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710aae;}
case 0x710aae:{ // JC 0x00710150
if(r<1>(c,0x200)){return 0x710150;}
return 0x710ab4;}
case 0x710ab4:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710ab5;}
case 0x710ab5:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710ab6;}
case 0x710ab6:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x710ab8;}
case 0x710ab8:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710ab9;}
case 0x710ab9:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x710abb;}
case 0x710abb:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x710abc;}
case 0x710abc:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x710abd;}
case 0x710abd:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710abe;}
case 0x710abe:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x710ac0;}
case 0x710ac0:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710ac1;}
case 0x710ac1:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710ac2;}
case 0x710ac2:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710ac5;}
case 0x710ac5:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710ac8;}
case 0x710ac8:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710ac9;}
case 0x710ac9:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710acc;}
case 0x710acc:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x710ad0;}
case 0x710ad0:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x710ad2;}
case 0x710ad2:{ // SUB ESP,0x208
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x208ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x208ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x208ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710ad8;}
case 0x710ad8:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710adb;}
case 0x710adb:{ // MOV EAX,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710ade;}
case 0x710ade:{ // MOV EDX,dword ptr [0x008b9c4c]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x8b9c4c)));
return 0x710ae4;}
case 0x710ae4:{ // MOV EAX,dword ptr [EDX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710ae7;}
case 0x710ae7:{ // MOV ECX,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710aea;}
case 0x710aea:{ // MOV word ptr [EBP + -0x80],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x710aee;}
case 0x710aee:{ // MOV word ptr [EBP + -0x7e],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff82ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x710af2;}
case 0x710af2:{ // MOV word ptr [EBP + -0x7c],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff84ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x710af6;}
case 0x710af6:{ // MOV word ptr [EBP + -0x7a],AX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff86ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x0)));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
return 0x710afa;}
case 0x710afa:{ // MOV EAX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710afd;}
case 0x710afd:{ // ADD EAX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710aff;}
case 0x710aff:{ // CMP ECX,EAX
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
return 0x710b01;}
case 0x710b01:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710b02;}
case 0x710b02:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710b03;}
case 0x710b03:{ // MOV dword ptr [EBP + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b06;}
case 0x710b06:{ // MOV dword ptr [EBP + 0xffffff7c],EAX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff7cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x710b0c;}
case 0x710b0c:{ // JNC 0x00711f8d
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x711f8d;}
return 0x710b12;}
case 0x710b12:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b15;}
case 0x710b15:{ // SHL EAX,0x2
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
return 0x710b18;}
case 0x710b18:{ // MOV dword ptr [EBP + -0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b1b;}
case 0x710b1b:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b1e;}
case 0x710b1e:{ // MOV dword ptr [EBP + -0x10],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b21;}
case 0x710b21:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b24;}
case 0x710b24:{ // SHL ECX,0x3
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
return 0x710b27;}
case 0x710b27:{ // MOV dword ptr [EBP + -0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b2a;}
case 0x710b2a:{ // SUB EAX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710b2c;}
case 0x710b2c:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b2f;}
case 0x710b2f:{ // ADD EAX,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710b32;}
case 0x710b32:{ // MOV dword ptr [EBP + -0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b35;}
case 0x710b35:{ // MOV EAX,dword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b38;}
case 0x710b38:{ // MOV ECX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b3b;}
case 0x710b3b:{ // MOV dword ptr [EBP + -0x68],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff98ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b3e;}
case 0x710b3e:{ // MOV EAX,dword ptr [EBP + -0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b41;}
case 0x710b41:{ // MOV dword ptr [EBP + -0x64],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff9cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b44;}
case 0x710b44:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b47;}
case 0x710b47:{ // MOV EAX,dword ptr [EAX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b4a;}
case 0x710b4a:{ // MOV EAX,dword ptr [ECX + EAX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b4d;}
case 0x710b4d:{ // MOV ECX,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b50;}
case 0x710b50:{ // MOV EAX,dword ptr [ECX + EAX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6c00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b53;}
case 0x710b53:{ // MOV dword ptr [EBP + -0x6c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff94ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x710b56;}
case 0x710b56:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710b57;}
case 0x710b57:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710b58;}
case 0x710b58:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710b59;}
case 0x710b59:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710b5a;}
case 0x710b5a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710b5b;}
case 0x710b5b:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x710b5c;}
case 0x710b5c:{ // MOV EAX,dword ptr [EBP + -0x6c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff94ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b5f;}
case 0x710b5f:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710b61;}
case 0x710b61:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b64;}
case 0x710b64:{ // PCMPEQW MM6,MM6
wu<1>(c,0xf3800,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wu<2>(c,0xf3900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3800)));
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3900),0xffffull));
wu<1>(c,0xf3b00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wu<2>(c,0xf3c00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3b00)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3c00),0xffffull));
wu<1>(c,0xf3e00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wu<2>(c,0xf3f00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3e00)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3f00),0xffffull));
wu<1>(c,0xf4100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
wu<2>(c,0xf4200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf4100)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf4200),0xffffull));
return 0x710b67;}
case 0x710b67:{ // MOVD MM5,EAX
wr<8>(c,0x1150,eval<Op::INT_ZEXT,8,4>(r<4>(c,0x0)));
return 0x710b6a;}
case 0x710b6a:{ // MOV EAX,dword ptr [EBP + -0x68]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff98ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x710b6d;}
case 0x710b6d:{ // PSRLW MM6,0xe
wr<2>(c,0x1160,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1160),0xeull));
wr<2>(c,0x1162,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1162),0xeull));
wr<2>(c,0x1164,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1164),0xeull));
wr<2>(c,0x1166,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1166),0xeull));
return 0x710b71;}
case 0x710b71:{ // PUNPCKLWD MM5,MM5
wr<2>(c,0x1156,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1154,eval<Op::COPY,2,2>(r<2>(c,0x1152)));
wr<2>(c,0x1152,eval<Op::COPY,2,2>(r<2>(c,0x1150)));
return 0x710b74;}
case 0x710b74:{ // LEA ESI,[EBP + 0xfffffe00]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe00ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x710b7a;}
case 0x710b7a:{ // PUNPCKLDQ MM5,MM5
wr<4>(c,0x1154,eval<Op::COPY,4,4>(r<4>(c,0x1150)));
return 0x710b7d;}
case 0x710b7d:{ // SUB EDX,ECX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710b7f;}
case 0x710b7f:{ // PMULLW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x710b82;}
case 0x710b82:{ // MOVQ qword ptr [EBP + 0xffffff40],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710b89;}
case 0x710b89:{ // LEA EDI,[EBP + 0xfffffe80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe80ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x710b8f;}
case 0x710b8f:{ // PXOR MM7,MM7
wr<8>(c,0x1170,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1170)));
return 0x710b92;}
case 0x710b92:{ // PMULLW MM6,MM5
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1150)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1152)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1154)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1156)));
return 0x710b95;}
case 0x710b95:{ // LEA EAX,[EAX + EDX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x710b98;}
case 0x710b98:{ // MOVQ MM0,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710b9c;}
case 0x710b9c:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710b9f;}
case 0x710b9f:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710ba2;}
case 0x710ba2:{ // PSRLW MM6,0x5
wr<2>(c,0x1160,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1160),0x5ull));
wr<2>(c,0x1162,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1162),0x5ull));
wr<2>(c,0x1164,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1164),0x5ull));
wr<2>(c,0x1166,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1166),0x5ull));
return 0x710ba6;}
case 0x710ba6:{ // MOVQ qword ptr [EBP + 0xffffff60],MM6
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710bad;}
case 0x710bad:{ // MOVQ MM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710bb0;}
case 0x710bb0:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710bb3;}
case 0x710bb3:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710bb6;}
case 0x710bb6:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710bb9;}
case 0x710bb9:{ // MOVQ qword ptr [EDI],MM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,r<4>(c,0x1c),u<8>(c,0xa400));
return 0x710bbc;}
case 0x710bbc:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710bbf;}
case 0x710bbf:{ // MOVQ qword ptr [EDI + 0x8],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710bc3;}
case 0x710bc3:{ // MOVQ MM4,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710bc7;}
case 0x710bc7:{ // MOVQ qword ptr [EDI + 0x10],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710bcb;}
case 0x710bcb:{ // MOVQ qword ptr [EDI + 0x18],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710bcf;}
case 0x710bcf:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710bd2;}
case 0x710bd2:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710bd5;}
case 0x710bd5:{ // MOVQ MM0,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710bd9;}
case 0x710bd9:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710bdc;}
case 0x710bdc:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710bdf;}
case 0x710bdf:{ // MOVQ qword ptr [EDI + 0x20],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710be3;}
case 0x710be3:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710be6;}
case 0x710be6:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x710be9;}
case 0x710be9:{ // MOVQ qword ptr [EDI + 0x28],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710bed;}
case 0x710bed:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710bf0;}
case 0x710bf0:{ // MOVQ MM2,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710bf4;}
case 0x710bf4:{ // MOVQ qword ptr [EDI + 0x30],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710bf8;}
case 0x710bf8:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710bfb;}
case 0x710bfb:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710bfe;}
case 0x710bfe:{ // MOVQ qword ptr [EDI + 0x38],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c02;}
case 0x710c02:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710c05;}
case 0x710c05:{ // MOVQ MM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710c08;}
case 0x710c08:{ // MOVQ qword ptr [EDI + 0x40],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c0c;}
case 0x710c0c:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710c0f;}
case 0x710c0f:{ // MOVQ qword ptr [EDI + 0x48],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x48ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c13;}
case 0x710c13:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710c16;}
case 0x710c16:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710c19;}
case 0x710c19:{ // MOVQ MM0,qword ptr [EAX + ECX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710c1d;}
case 0x710c1d:{ // MOVQ qword ptr [EDI + 0x50],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c21;}
case 0x710c21:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710c24;}
case 0x710c24:{ // MOVQ qword ptr [EDI + 0x58],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x58ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c28;}
case 0x710c28:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710c2b;}
case 0x710c2b:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710c2e;}
case 0x710c2e:{ // MOVQ MM2,qword ptr [EAX + ECX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710c32;}
case 0x710c32:{ // LEA EAX,[EAX + ECX*0x4]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x4),0x4ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x710c35;}
case 0x710c35:{ // MOVQ MM3,MM2
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710c38;}
case 0x710c38:{ // MOVQ qword ptr [EDI + 0x60],MM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c3c;}
case 0x710c3c:{ // PUNPCKLBW MM2,MM7
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710c3f;}
case 0x710c3f:{ // PUNPCKHBW MM3,MM7
wr<1>(c,0x1130,eval<Op::COPY,1,1>(r<1>(c,0x1134)));
wr<1>(c,0x1131,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1132,eval<Op::COPY,1,1>(r<1>(c,0x1135)));
wr<1>(c,0x1133,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1134,eval<Op::COPY,1,1>(r<1>(c,0x1136)));
wr<1>(c,0x1135,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1136,eval<Op::COPY,1,1>(r<1>(c,0x1137)));
wr<1>(c,0x1137,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710c42;}
case 0x710c42:{ // MOVQ MM4,qword ptr [EAX + EDX*0x1]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x1ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6c00)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710c46;}
case 0x710c46:{ // MOVQ qword ptr [EDI + 0x68],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x68ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c4a;}
case 0x710c4a:{ // MOVQ MM5,MM4
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710c4d;}
case 0x710c4d:{ // PUNPCKLBW MM4,MM7
wr<1>(c,0x1147,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1146,eval<Op::COPY,1,1>(r<1>(c,0x1143)));
wr<1>(c,0x1145,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1144,eval<Op::COPY,1,1>(r<1>(c,0x1142)));
wr<1>(c,0x1143,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1142,eval<Op::COPY,1,1>(r<1>(c,0x1141)));
wr<1>(c,0x1141,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710c50;}
case 0x710c50:{ // MOVQ qword ptr [EDI + 0x70],MM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c54;}
case 0x710c54:{ // MOVQ qword ptr [EDI + 0x78],MM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x78ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710c58;}
case 0x710c58:{ // MOVQ MM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710c5b;}
case 0x710c5b:{ // PUNPCKHBW MM5,MM7
wr<1>(c,0x1150,eval<Op::COPY,1,1>(r<1>(c,0x1154)));
wr<1>(c,0x1151,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1152,eval<Op::COPY,1,1>(r<1>(c,0x1155)));
wr<1>(c,0x1153,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1154,eval<Op::COPY,1,1>(r<1>(c,0x1156)));
wr<1>(c,0x1155,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1156,eval<Op::COPY,1,1>(r<1>(c,0x1157)));
wr<1>(c,0x1157,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710c5e;}
case 0x710c5e:{ // MOVQ MM1,MM0
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710c61;}
case 0x710c61:{ // MOVQ qword ptr [EDI + 0x80],MM4
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710c68;}
case 0x710c68:{ // PUNPCKLBW MM0,MM7
wr<1>(c,0x1107,eval<Op::COPY,1,1>(r<1>(c,0x1173)));
wr<1>(c,0x1106,eval<Op::COPY,1,1>(r<1>(c,0x1103)));
wr<1>(c,0x1105,eval<Op::COPY,1,1>(r<1>(c,0x1172)));
wr<1>(c,0x1104,eval<Op::COPY,1,1>(r<1>(c,0x1102)));
wr<1>(c,0x1103,eval<Op::COPY,1,1>(r<1>(c,0x1171)));
wr<1>(c,0x1102,eval<Op::COPY,1,1>(r<1>(c,0x1101)));
wr<1>(c,0x1101,eval<Op::COPY,1,1>(r<1>(c,0x1170)));
return 0x710c6b;}
case 0x710c6b:{ // PUNPCKHBW MM1,MM7
wr<1>(c,0x1110,eval<Op::COPY,1,1>(r<1>(c,0x1114)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1174)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1115)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1175)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1116)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1176)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1117)));
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1177)));
return 0x710c6e;}
case 0x710c6e:{ // MOVQ qword ptr [EDI + 0x88],MM5
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x88ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710c75;}
case 0x710c75:{ // MOVQ qword ptr [EDI + 0x90],MM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710c7c;}
case 0x710c7c:{ // MOVQ qword ptr [EDI + 0x98],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x98ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710c83;}
case 0x710c83:{ // PCMPEQW MM3,MM3
wu<1>(c,0xf3800,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wu<2>(c,0xf3900,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3800)));
wr<2>(c,0x1130,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3900),0xffffull));
wu<1>(c,0xf3b00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wu<2>(c,0xf3c00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3b00)));
wr<2>(c,0x1132,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3c00),0xffffull));
wu<1>(c,0xf3e00,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wu<2>(c,0xf3f00,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf3e00)));
wr<2>(c,0x1134,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf3f00),0xffffull));
wu<1>(c,0xf4100,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
wu<2>(c,0xf4200,eval<Op::INT_ZEXT,2,1>(u<1>(c,0xf4100)));
wr<2>(c,0x1136,eval<Op::INT_MULT,2,2,2>(u<2>(c,0xf4200),0xffffull));
return 0x710c86;}
case 0x710c86:{ // PSLLW MM3,0xf
wr<8>(c,0x1130,user_op(c,524454,{r<8>(c,0x1130),0xfull}));
return 0x710c8a;}
case 0x710c8a:{ // PSRLW MM3,0x8
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x8ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x8ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x8ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x8ull));
return 0x710c8e;}
case 0x710c8e:{ // MOVQ MM2,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710c92;}
case 0x710c92:{ // MOVQ MM6,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710c96;}
case 0x710c96:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710c99;}
case 0x710c99:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710c9c;}
case 0x710c9c:{ // MOVQ MM0,MM2
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710c9f;}
case 0x710c9f:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x710ca2;}
case 0x710ca2:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710ca5;}
case 0x710ca5:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710ca8;}
case 0x710ca8:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710cab;}
case 0x710cab:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x710cae;}
case 0x710cae:{ // MOVQ MM2,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710cb2;}
case 0x710cb2:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710cb6;}
case 0x710cb6:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710cb9;}
case 0x710cb9:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710cbc;}
case 0x710cbc:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710cbf;}
case 0x710cbf:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710cc2;}
case 0x710cc2:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710cc5;}
case 0x710cc5:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710cc8;}
case 0x710cc8:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710ccb;}
case 0x710ccb:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710cce;}
case 0x710cce:{ // MOVQ MM2,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710cd2;}
case 0x710cd2:{ // MOVQ MM6,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710cd6;}
case 0x710cd6:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710cd9;}
case 0x710cd9:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710cdc;}
case 0x710cdc:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710cdf;}
case 0x710cdf:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710ce2;}
case 0x710ce2:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710ce5;}
case 0x710ce5:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710ce8;}
case 0x710ce8:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710ceb;}
case 0x710ceb:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710cee;}
case 0x710cee:{ // MOVQ MM2,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710cf2;}
case 0x710cf2:{ // MOVQ MM6,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710cf9;}
case 0x710cf9:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710cfc;}
case 0x710cfc:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710cff;}
case 0x710cff:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710d02;}
case 0x710d02:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710d05;}
case 0x710d05:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710d08;}
case 0x710d08:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710d0b;}
case 0x710d0b:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710d0e;}
case 0x710d0e:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710d11;}
case 0x710d11:{ // MOVQ MM7,MM3
wr<8>(c,0x1170,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x710d14;}
case 0x710d14:{ // PSRLW MM7,0x7
wr<2>(c,0x1170,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1170),0x7ull));
wr<2>(c,0x1172,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1172),0x7ull));
wr<2>(c,0x1174,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1174),0x7ull));
wr<2>(c,0x1176,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1176),0x7ull));
return 0x710d18;}
case 0x710d18:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710d1b;}
case 0x710d1b:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710d1e;}
case 0x710d1e:{ // PADDW MM0,MM7
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1170)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1172)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1174)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1176)));
return 0x710d21;}
case 0x710d21:{ // PADDW MM4,MM7
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1170)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1172)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1174)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1176)));
return 0x710d24;}
case 0x710d24:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x710d28;}
case 0x710d28:{ // PSRAW MM6,0x1
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x1ull}));
return 0x710d2c;}
case 0x710d2c:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x710d30;}
case 0x710d30:{ // PSRAW MM4,0x1
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x1ull}));
return 0x710d34;}
case 0x710d34:{ // PMULLW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x710d37;}
case 0x710d37:{ // PMULLW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x710d3a;}
case 0x710d3a:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710d3d;}
case 0x710d3d:{ // PSUBW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710d40;}
case 0x710d40:{ // MOVQ MM7,qword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710d47;}
case 0x710d47:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710d4a;}
case 0x710d4a:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710d4d;}
case 0x710d4d:{ // MOVQ qword ptr [EBP + -0x40],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710d51;}
case 0x710d51:{ // MOVQ qword ptr [EBP + -0x50],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710d55;}
case 0x710d55:{ // PSUBW MM1,MM7
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1170)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1172)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1174)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1176)));
return 0x710d58;}
case 0x710d58:{ // PSUBW MM5,MM7
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1170)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1172)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1174)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1176)));
return 0x710d5b;}
case 0x710d5b:{ // PSRAW MM2,0xf
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0xfull}));
return 0x710d5f;}
case 0x710d5f:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x710d63;}
case 0x710d63:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x710d67;}
case 0x710d67:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x710d6b;}
case 0x710d6b:{ // MOVQ MM7,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1170,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710d6f;}
case 0x710d6f:{ // PANDN MM2,MM1
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1110)));
return 0x710d72;}
case 0x710d72:{ // PANDN MM6,MM5
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1160)));
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1150)));
return 0x710d75;}
case 0x710d75:{ // MOVQ MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710d79;}
case 0x710d79:{ // PAND MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x710d7c;}
case 0x710d7c:{ // MOVQ MM2,MM7
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1170)));
return 0x710d7f;}
case 0x710d7f:{ // PSUBUSW MM7,MM4
wr<8>(c,0x1170,user_op(c,524459,{r<8>(c,0x1170),r<8>(c,0x1140)}));
return 0x710d82;}
case 0x710d82:{ // PSUBUSW MM4,MM2
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x710d85;}
case 0x710d85:{ // POR MM7,MM4
wr<8>(c,0x1170,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1140)));
return 0x710d88;}
case 0x710d88:{ // PSUBW MM7,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1170,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1170),u<2>(c,0x132600)));
wr<2>(c,0x1172,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1172),u<2>(c,0x132602)));
wr<2>(c,0x1174,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1174),u<2>(c,0x132604)));
wr<2>(c,0x1176,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1176),u<2>(c,0x132606)));
return 0x710d8f;}
case 0x710d8f:{ // PSRAW MM7,0xf
wr<8>(c,0x1170,user_op(c,524455,{r<8>(c,0x1170),0xfull}));
return 0x710d93;}
case 0x710d93:{ // PAND MM7,MM6
wr<8>(c,0x1170,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1170),r<8>(c,0x1160)));
return 0x710d96;}
case 0x710d96:{ // ADD EDI,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710d99;}
case 0x710d99:{ // MOVQ MM2,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710d9d;}
case 0x710d9d:{ // MOVQ MM6,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710da1;}
case 0x710da1:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710da4;}
case 0x710da4:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710da7;}
case 0x710da7:{ // MOVQ MM0,MM2
wr<8>(c,0x1100,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710daa;}
case 0x710daa:{ // MOVQ MM4,MM6
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x710dad;}
case 0x710dad:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710db0;}
case 0x710db0:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710db3;}
case 0x710db3:{ // MOVQ MM1,MM2
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
return 0x710db6;}
case 0x710db6:{ // MOVQ MM5,MM6
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1160)));
return 0x710db9;}
case 0x710db9:{ // MOVQ MM2,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710dbd;}
case 0x710dbd:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710dc1;}
case 0x710dc1:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710dc4;}
case 0x710dc4:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710dc7;}
case 0x710dc7:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710dca;}
case 0x710dca:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710dcd;}
case 0x710dcd:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710dd0;}
case 0x710dd0:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710dd3;}
case 0x710dd3:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710dd6;}
case 0x710dd6:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710dd9;}
case 0x710dd9:{ // MOVQ MM2,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710ddd;}
case 0x710ddd:{ // MOVQ MM6,qword ptr [EDI + 0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x70ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710de1;}
case 0x710de1:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710de4;}
case 0x710de4:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710de7;}
case 0x710de7:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710dea;}
case 0x710dea:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710ded;}
case 0x710ded:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710df0;}
case 0x710df0:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710df3;}
case 0x710df3:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710df6;}
case 0x710df6:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710df9;}
case 0x710df9:{ // MOVQ MM2,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710dfd;}
case 0x710dfd:{ // MOVQ MM6,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710e04;}
case 0x710e04:{ // PSUBW MM2,MM3
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1130)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1132)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1134)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1136)));
return 0x710e07;}
case 0x710e07:{ // PSUBW MM6,MM3
wr<2>(c,0x1160,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1130)));
wr<2>(c,0x1162,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1132)));
wr<2>(c,0x1164,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1134)));
wr<2>(c,0x1166,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1136)));
return 0x710e0a;}
case 0x710e0a:{ // PADDW MM0,MM2
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1120)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1122)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1124)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1126)));
return 0x710e0d;}
case 0x710e0d:{ // PADDW MM4,MM6
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1160)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1162)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1164)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1166)));
return 0x710e10;}
case 0x710e10:{ // PMULLW MM2,MM2
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1120)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1122)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1124)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1126)));
return 0x710e13;}
case 0x710e13:{ // PMULLW MM6,MM6
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1160)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1162)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1164)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1166)));
return 0x710e16;}
case 0x710e16:{ // PADDW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710e19;}
case 0x710e19:{ // PADDW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710e1c;}
case 0x710e1c:{ // PSRLW MM3,0x7
wr<2>(c,0x1130,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1130),0x7ull));
wr<2>(c,0x1132,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1132),0x7ull));
wr<2>(c,0x1134,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1134),0x7ull));
wr<2>(c,0x1136,eval<Op::INT_RIGHT,2,2,4>(r<2>(c,0x1136),0x7ull));
return 0x710e20;}
case 0x710e20:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710e23;}
case 0x710e23:{ // MOVQ MM6,MM4
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710e26;}
case 0x710e26:{ // PADDW MM0,MM3
wr<2>(c,0x1100,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1100),r<2>(c,0x1130)));
wr<2>(c,0x1102,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1102),r<2>(c,0x1132)));
wr<2>(c,0x1104,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1104),r<2>(c,0x1134)));
wr<2>(c,0x1106,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1106),r<2>(c,0x1136)));
return 0x710e29;}
case 0x710e29:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x710e2c;}
case 0x710e2c:{ // PSRAW MM2,0x1
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0x1ull}));
return 0x710e30;}
case 0x710e30:{ // PSRAW MM6,0x1
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0x1ull}));
return 0x710e34;}
case 0x710e34:{ // PSRAW MM0,0x1
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0x1ull}));
return 0x710e38;}
case 0x710e38:{ // PSRAW MM4,0x1
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x1ull}));
return 0x710e3c;}
case 0x710e3c:{ // PMULLW MM2,MM0
wr<2>(c,0x1120,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1100)));
wr<2>(c,0x1122,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1102)));
wr<2>(c,0x1124,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1104)));
wr<2>(c,0x1126,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1106)));
return 0x710e3f;}
case 0x710e3f:{ // PMULLW MM6,MM4
wr<2>(c,0x1160,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1160),r<2>(c,0x1140)));
wr<2>(c,0x1162,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1162),r<2>(c,0x1142)));
wr<2>(c,0x1164,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1164),r<2>(c,0x1144)));
wr<2>(c,0x1166,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1166),r<2>(c,0x1146)));
return 0x710e42;}
case 0x710e42:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710e45;}
case 0x710e45:{ // PSUBW MM5,MM6
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1160)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1162)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1164)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1166)));
return 0x710e48;}
case 0x710e48:{ // MOVQ qword ptr [EBP + -0x30],MM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710e4c;}
case 0x710e4c:{ // MOVQ qword ptr [EBP + -0x60],MM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x710e50;}
case 0x710e50:{ // MOVQ MM3,qword ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710e57;}
case 0x710e57:{ // MOVQ MM2,MM1
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710e5a;}
case 0x710e5a:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710e5d;}
case 0x710e5d:{ // PSUBW MM1,MM3
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1130)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1132)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1134)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1136)));
return 0x710e60;}
case 0x710e60:{ // PSUBW MM5,MM3
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1130)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1132)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1134)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1136)));
return 0x710e63;}
case 0x710e63:{ // PSRAW MM2,0xf
wr<8>(c,0x1120,user_op(c,524455,{r<8>(c,0x1120),0xfull}));
return 0x710e67;}
case 0x710e67:{ // PSRAW MM6,0xf
wr<8>(c,0x1160,user_op(c,524455,{r<8>(c,0x1160),0xfull}));
return 0x710e6b;}
case 0x710e6b:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x710e6f;}
case 0x710e6f:{ // PSRAW MM5,0xf
wr<8>(c,0x1150,user_op(c,524455,{r<8>(c,0x1150),0xfull}));
return 0x710e73;}
case 0x710e73:{ // MOVQ MM0,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1100,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710e77;}
case 0x710e77:{ // PANDN MM2,MM1
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1110)));
return 0x710e7a;}
case 0x710e7a:{ // PANDN MM6,MM5
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1160)));
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1150)));
return 0x710e7d;}
case 0x710e7d:{ // MOVQ MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710e81;}
case 0x710e81:{ // PAND MM6,MM2
wr<8>(c,0x1160,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1120)));
return 0x710e84;}
case 0x710e84:{ // MOVQ MM2,MM0
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1100)));
return 0x710e87;}
case 0x710e87:{ // PSUBUSW MM0,MM4
wr<8>(c,0x1100,user_op(c,524459,{r<8>(c,0x1100),r<8>(c,0x1140)}));
return 0x710e8a;}
case 0x710e8a:{ // PSUBUSW MM4,MM2
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1120)}));
return 0x710e8d;}
case 0x710e8d:{ // POR MM0,MM4
wr<8>(c,0x1100,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1140)));
return 0x710e90;}
case 0x710e90:{ // PSUBW MM0,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1100,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1100),u<2>(c,0x132600)));
wr<2>(c,0x1102,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1102),u<2>(c,0x132602)));
wr<2>(c,0x1104,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1104),u<2>(c,0x132604)));
wr<2>(c,0x1106,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1106),u<2>(c,0x132606)));
return 0x710e97;}
case 0x710e97:{ // PSRAW MM0,0xf
wr<8>(c,0x1100,user_op(c,524455,{r<8>(c,0x1100),0xfull}));
return 0x710e9b;}
case 0x710e9b:{ // PAND MM0,MM6
wr<8>(c,0x1100,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1100),r<8>(c,0x1160)));
return 0x710e9e;}
case 0x710e9e:{ // SUB EDI,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x1c),0x8ull));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x1c),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x710ea1;}
case 0x710ea1:{ // MOVQ MM1,qword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710ea5;}
case 0x710ea5:{ // MOVQ MM3,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1130,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710ea9;}
case 0x710ea9:{ // MOVQ MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710ead;}
case 0x710ead:{ // MOVQ MM5,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710eb1;}
case 0x710eb1:{ // MOVQ MM6,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1160,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710eb5;}
case 0x710eb5:{ // PSUBW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x710eb8;}
case 0x710eb8:{ // PSUBW MM3,MM6
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1160)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1162)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1164)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1166)));
return 0x710ebb;}
case 0x710ebb:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710ebe;}
case 0x710ebe:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710ec1;}
case 0x710ec1:{ // PADDW MM3,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x710ec8;}
case 0x710ec8:{ // PADDW MM5,MM4
wr<2>(c,0x1150,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1150),r<2>(c,0x1140)));
wr<2>(c,0x1152,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1152),r<2>(c,0x1142)));
wr<2>(c,0x1154,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1154),r<2>(c,0x1144)));
wr<2>(c,0x1156,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1156),r<2>(c,0x1146)));
return 0x710ecb;}
case 0x710ecb:{ // PADDW MM3,MM5
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1150)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1152)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1154)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1156)));
return 0x710ece;}
case 0x710ece:{ // PSRAW MM3,0x3
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0x3ull}));
return 0x710ed2;}
case 0x710ed2:{ // MOVQ MM2,MM3
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x710ed5;}
case 0x710ed5:{ // PSRAW MM3,0xf
wr<8>(c,0x1130,user_op(c,524455,{r<8>(c,0x1130),0xfull}));
return 0x710ed9;}
case 0x710ed9:{ // PXOR MM2,MM3
wr<8>(c,0x1120,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1130)));
return 0x710edc;}
case 0x710edc:{ // PSUBSW MM2,MM3
wr<8>(c,0x1120,user_op(c,524457,{r<8>(c,0x1120),r<8>(c,0x1130)}));
return 0x710edf;}
case 0x710edf:{ // POR MM3,qword ptr [0x008175d0]
wr<8>(c,0x1130,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1130),m<8>(c,0x8175d0)));
return 0x710ee6;}
case 0x710ee6:{ // MOVQ MM4,MM1
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710ee9;}
case 0x710ee9:{ // PSUBW MM1,MM2
wr<2>(c,0x1110,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1120)));
wr<2>(c,0x1112,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1122)));
wr<2>(c,0x1114,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1124)));
wr<2>(c,0x1116,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1126)));
return 0x710eec;}
case 0x710eec:{ // MOVQ MM5,MM1
wr<8>(c,0x1150,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710eef;}
case 0x710eef:{ // PSRAW MM1,0xf
wr<8>(c,0x1110,user_op(c,524455,{r<8>(c,0x1110),0xfull}));
return 0x710ef3;}
case 0x710ef3:{ // PXOR MM5,MM1
wr<8>(c,0x1150,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1150),r<8>(c,0x1110)));
return 0x710ef6;}
case 0x710ef6:{ // PSUBSW MM5,MM1
wr<8>(c,0x1150,user_op(c,524457,{r<8>(c,0x1150),r<8>(c,0x1110)}));
return 0x710ef9;}
case 0x710ef9:{ // PSUBUSW MM4,MM5
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1150)}));
return 0x710efc;}
case 0x710efc:{ // PMULLW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_MULT,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x710eff;}
case 0x710eff:{ // MOVQ MM1,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1110,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710f03;}
case 0x710f03:{ // MOVQ MM2,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1120,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710f07;}
case 0x710f07:{ // PADDW MM1,MM4
wr<2>(c,0x1110,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1110),r<2>(c,0x1140)));
wr<2>(c,0x1112,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1112),r<2>(c,0x1142)));
wr<2>(c,0x1114,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1114),r<2>(c,0x1144)));
wr<2>(c,0x1116,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1116),r<2>(c,0x1146)));
return 0x710f0a;}
case 0x710f0a:{ // PSUBW MM2,MM4
wr<2>(c,0x1120,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1120),r<2>(c,0x1140)));
wr<2>(c,0x1122,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1122),r<2>(c,0x1142)));
wr<2>(c,0x1124,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1124),r<2>(c,0x1144)));
wr<2>(c,0x1126,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1126),r<2>(c,0x1146)));
return 0x710f0d;}
case 0x710f0d:{ // PXOR MM6,MM6
wr<8>(c,0x1160,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1160),r<8>(c,0x1160)));
return 0x710f10;}
case 0x710f10:{ // PACKUSWB MM1,MM1
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wu<8>(c,0xdf100,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
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
return 0x710f13;}
case 0x710f13:{ // PACKUSWB MM2,MM2
wu<8>(c,0xdf000,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
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
return 0x710f16;}
case 0x710f16:{ // PUNPCKLBW MM1,MM6
wr<1>(c,0x1117,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1116,eval<Op::COPY,1,1>(r<1>(c,0x1113)));
wr<1>(c,0x1115,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1114,eval<Op::COPY,1,1>(r<1>(c,0x1112)));
wr<1>(c,0x1113,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1112,eval<Op::COPY,1,1>(r<1>(c,0x1111)));
wr<1>(c,0x1111,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x710f19;}
case 0x710f19:{ // MOVQ qword ptr [EBP + 0xffffff30],MM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710f20;}
case 0x710f20:{ // PUNPCKLBW MM2,MM6
wr<1>(c,0x1127,eval<Op::COPY,1,1>(r<1>(c,0x1163)));
wr<1>(c,0x1126,eval<Op::COPY,1,1>(r<1>(c,0x1123)));
wr<1>(c,0x1125,eval<Op::COPY,1,1>(r<1>(c,0x1162)));
wr<1>(c,0x1124,eval<Op::COPY,1,1>(r<1>(c,0x1122)));
wr<1>(c,0x1123,eval<Op::COPY,1,1>(r<1>(c,0x1161)));
wr<1>(c,0x1122,eval<Op::COPY,1,1>(r<1>(c,0x1121)));
wr<1>(c,0x1121,eval<Op::COPY,1,1>(r<1>(c,0x1160)));
return 0x710f23;}
case 0x710f23:{ // MOVQ qword ptr [EBP + 0xffffff20],MM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1120)));
wm<8>(c,u<4>(c,0x6800),u<8>(c,0xa400));
return 0x710f2a;}
case 0x710f2a:{ // MOVQ MM5,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710f2d;}
case 0x710f2d:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710f31;}
case 0x710f31:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710f34;}
case 0x710f34:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710f37;}
case 0x710f37:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x710f3a;}
case 0x710f3a:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x710f3d;}
case 0x710f3d:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x710f40;}
case 0x710f40:{ // PSUBW MM4,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x710f47;}
case 0x710f47:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x710f4b;}
case 0x710f4b:{ // MOVQ MM1,MM4
wr<8>(c,0x1110,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710f4e;}
case 0x710f4e:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x710f51;}
case 0x710f51:{ // PANDN MM1,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1110)));
wr<8>(c,0x1110,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x710f54;}
case 0x710f54:{ // POR MM1,MM4
wr<8>(c,0x1110,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1110),r<8>(c,0x1140)));
return 0x710f57;}
case 0x710f57:{ // MOVQ MM4,qword ptr [EDI + 0x80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x80ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710f5e;}
case 0x710f5e:{ // MOVQ MM5,qword ptr [EDI + 0x90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x90ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710f65;}
case 0x710f65:{ // MOVQ MM3,MM4
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710f68;}
case 0x710f68:{ // MOVQ MM6,MM5
wr<8>(c,0x1160,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710f6b;}
case 0x710f6b:{ // PSUBUSW MM4,MM6
wr<8>(c,0x1140,user_op(c,524459,{r<8>(c,0x1140),r<8>(c,0x1160)}));
return 0x710f6e;}
case 0x710f6e:{ // PSUBUSW MM5,MM3
wr<8>(c,0x1150,user_op(c,524459,{r<8>(c,0x1150),r<8>(c,0x1130)}));
return 0x710f71;}
case 0x710f71:{ // POR MM4,MM5
wr<8>(c,0x1140,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1150)));
return 0x710f74;}
case 0x710f74:{ // PSUBW MM4,qword ptr [EBP + 0xffffff40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6800)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x710f7b;}
case 0x710f7b:{ // PSRAW MM4,0xf
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0xfull}));
return 0x710f7f;}
case 0x710f7f:{ // MOVQ MM2,MM4
wr<8>(c,0x1120,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
return 0x710f82;}
case 0x710f82:{ // PAND MM4,MM6
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1160)));
return 0x710f85;}
case 0x710f85:{ // PANDN MM2,MM3
wu<8>(c,0xeb800,eval<Op::INT_NEGATE,8,8>(r<8>(c,0x1120)));
wr<8>(c,0x1120,eval<Op::INT_AND,8,8,8>(u<8>(c,0xeb800),r<8>(c,0x1130)));
return 0x710f88;}
case 0x710f88:{ // POR MM2,MM4
wr<8>(c,0x1120,eval<Op::INT_OR,8,8,8>(r<8>(c,0x1120),r<8>(c,0x1140)));
return 0x710f8b;}
case 0x710f8b:{ // MOVQ MM3,MM1
wr<8>(c,0x1130,eval<Op::COPY,8,8>(r<8>(c,0x1110)));
return 0x710f8e;}
case 0x710f8e:{ // PADDW MM3,MM3
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1130)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1132)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1134)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1136)));
return 0x710f91;}
case 0x710f91:{ // PADDW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x710f94;}
case 0x710f94:{ // MOVQ MM4,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1140,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710f98;}
case 0x710f98:{ // PADDW MM3,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x710f9c;}
case 0x710f9c:{ // PADDW MM4,qword ptr [EDI + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710fa0;}
case 0x710fa0:{ // PADDW MM3,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x710fa4;}
case 0x710fa4:{ // PADDW MM4,qword ptr [0x008175c0]
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(m<8>(c,0x8175c0)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710fab;}
case 0x710fab:{ // PADDW MM3,MM4
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1140)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1142)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1144)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1146)));
return 0x710fae;}
case 0x710fae:{ // MOVQ MM4,MM3
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1130)));
return 0x710fb1;}
case 0x710fb1:{ // MOVQ MM5,qword ptr [EDI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710fb5;}
case 0x710fb5:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710fb8;}
case 0x710fb8:{ // PSLLW MM4,0x1
wr<8>(c,0x1140,user_op(c,524454,{r<8>(c,0x1140),0x1ull}));
return 0x710fbc;}
case 0x710fbc:{ // PSUBW MM4,qword ptr [EDI + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x40ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x710fc0;}
case 0x710fc0:{ // PADDW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710fc4;}
case 0x710fc4:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x710fc8;}
case 0x710fc8:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710fcb;}
case 0x710fcb:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x710fce;}
case 0x710fce:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710fd1;}
case 0x710fd1:{ // MOVQ qword ptr [ESI],MM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,r<4>(c,0x18),u<8>(c,0xa400));
return 0x710fd4;}
case 0x710fd4:{ // MOVQ MM5,qword ptr [EDI + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1150,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x710fd8;}
case 0x710fd8:{ // PSUBW MM3,MM1
wr<2>(c,0x1130,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1130),r<2>(c,0x1110)));
wr<2>(c,0x1132,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1132),r<2>(c,0x1112)));
wr<2>(c,0x1134,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1134),r<2>(c,0x1114)));
wr<2>(c,0x1136,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1136),r<2>(c,0x1116)));
return 0x710fdb;}
case 0x710fdb:{ // PADDW MM3,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1130,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1130),u<2>(c,0xe3e00)));
wr<2>(c,0x1132,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1132),u<2>(c,0xe3e02)));
wr<2>(c,0x1134,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1134),u<2>(c,0xe3e04)));
wr<2>(c,0x1136,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1136),u<2>(c,0xe3e06)));
return 0x710fdf;}
case 0x710fdf:{ // MOVQ MM4,MM5
wr<8>(c,0x1140,eval<Op::COPY,8,8>(r<8>(c,0x1150)));
return 0x710fe2;}
case 0x710fe2:{ // PADDW MM4,MM3
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1130)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1132)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1134)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1136)));
return 0x710fe5;}
case 0x710fe5:{ // PADDW MM4,MM4
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1140)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1142)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1144)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1146)));
return 0x710fe8;}
case 0x710fe8:{ // PSUBW MM4,qword ptr [EDI + 0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x50ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0x132600,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),u<2>(c,0x132600)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),u<2>(c,0x132602)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),u<2>(c,0x132604)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),u<2>(c,0x132606)));
return 0x710fec;}
case 0x710fec:{ // PADDW MM4,qword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wu<8>(c,0xe3e00,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),u<2>(c,0xe3e00)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),u<2>(c,0xe3e02)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),u<2>(c,0xe3e04)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),u<2>(c,0xe3e06)));
return 0x710ff0;}
case 0x710ff0:{ // PSRAW MM4,0x4
wr<8>(c,0x1140,user_op(c,524455,{r<8>(c,0x1140),0x4ull}));
return 0x710ff4;}
case 0x710ff4:{ // PSUBW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710ff7;}
case 0x710ff7:{ // PAND MM4,MM7
wr<8>(c,0x1140,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1140),r<8>(c,0x1170)));
return 0x710ffa;}
case 0x710ffa:{ // PADDW MM4,MM5
wr<2>(c,0x1140,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1140),r<2>(c,0x1150)));
wr<2>(c,0x1142,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1142),r<2>(c,0x1152)));
wr<2>(c,0x1144,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1144),r<2>(c,0x1154)));
wr<2>(c,0x1146,eval<Op::INT_ADD,2,2,2>(r<2>(c,0x1146),r<2>(c,0x1156)));
return 0x710ffd;}
case 0x710ffd:{ // MOVQ qword ptr [ESI + 0x10],MM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1140)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x711001;}
default:missing_instruction(c.pc);}}
}
