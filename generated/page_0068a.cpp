#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_68a(Cpu& c){switch(c.pc){
case 0x68a002:{ // MOVSS XMM7,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a007;}
case 0x68a007:{ // SHUFPS XMM4,XMM4,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a00b;}
case 0x68a00b:{ // SHUFPS XMM5,XMM5,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a00f;}
case 0x68a00f:{ // SHUFPS XMM6,XMM6,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a013;}
case 0x68a013:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a017;}
case 0x68a017:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68a01a;}
case 0x68a01a:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68a01d;}
case 0x68a01d:{ // MULPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68a020;}
case 0x68a020:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68a023;}
case 0x68a023:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68a026;}
case 0x68a026:{ // ADDPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68a029;}
case 0x68a029:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68a02c;}
case 0x68a02c:{ // MOVSS XMM5,dword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a031;}
case 0x68a031:{ // MOVSS XMM6,dword ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a036;}
case 0x68a036:{ // MOVSS XMM7,dword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a03b;}
case 0x68a03b:{ // SHUFPS XMM5,XMM5,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a03f;}
case 0x68a03f:{ // SHUFPS XMM6,XMM6,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a043;}
case 0x68a043:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a047;}
case 0x68a047:{ // MULPS XMM5,XMM0
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x120c),4,4));
return 0x68a04a;}
case 0x68a04a:{ // MULPS XMM6,XMM1
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x124c),4,4));
return 0x68a04d;}
case 0x68a04d:{ // MULPS XMM7,XMM2
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x128c),4,4));
return 0x68a050;}
case 0x68a050:{ // ADDPS XMM5,XMM6
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x138c),4,4));
return 0x68a053;}
case 0x68a053:{ // ADDPS XMM5,XMM7
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x13cc),4,4));
return 0x68a056;}
case 0x68a056:{ // MOVSS XMM6,dword ptr [EAX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a05b;}
case 0x68a05b:{ // SHUFPS XMM6,XMM6,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a05f;}
case 0x68a05f:{ // MULPS XMM6,XMM3
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x12cc),4,4));
return 0x68a062;}
case 0x68a062:{ // ADDPS XMM5,XMM6
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x138c),4,4));
return 0x68a065;}
case 0x68a065:{ // MOVSS XMM6,dword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a06a;}
case 0x68a06a:{ // MOVSS XMM7,dword ptr [EAX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x24ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a06f;}
case 0x68a06f:{ // SHUFPS XMM6,XMM6,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a073;}
case 0x68a073:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a077;}
case 0x68a077:{ // MULPS XMM6,XMM0
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x120c),4,4));
return 0x68a07a;}
case 0x68a07a:{ // MULPS XMM7,XMM1
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x124c),4,4));
return 0x68a07d;}
case 0x68a07d:{ // ADDPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68a080;}
case 0x68a080:{ // MOVSS XMM7,dword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a085;}
case 0x68a085:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a089;}
case 0x68a089:{ // MULPS XMM7,XMM2
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x128c),4,4));
return 0x68a08c;}
case 0x68a08c:{ // ADDPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68a08f;}
case 0x68a08f:{ // MOVSS XMM7,dword ptr [EAX + 0x2c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x2cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a094;}
case 0x68a094:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a098;}
case 0x68a098:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68a09b;}
case 0x68a09b:{ // ADDPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68a09e;}
case 0x68a09e:{ // MOVSS XMM7,dword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a0a3;}
case 0x68a0a3:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a0a7;}
case 0x68a0a7:{ // MULPS XMM0,XMM7
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x13cc),4,4));
return 0x68a0aa;}
case 0x68a0aa:{ // MOVSS XMM7,dword ptr [EAX + 0x34]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x34ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a0af;}
case 0x68a0af:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a0b3;}
case 0x68a0b3:{ // MULPS XMM1,XMM7
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x13cc),4,4));
return 0x68a0b6;}
case 0x68a0b6:{ // MOVSS XMM7,dword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a0bb;}
case 0x68a0bb:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a0bf;}
case 0x68a0bf:{ // MULPS XMM2,XMM7
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x13cc),4,4));
return 0x68a0c2;}
case 0x68a0c2:{ // MOVSS XMM7,dword ptr [EAX + 0x3c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x3cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a0c7;}
case 0x68a0c7:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a0cb;}
case 0x68a0cb:{ // MULPS XMM3,XMM7
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x13cc),4,4));
return 0x68a0ce;}
case 0x68a0ce:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a0d1;}
case 0x68a0d1:{ // ADDPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68a0d4;}
case 0x68a0d4:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a0d7;}
case 0x68a0d7:{ // MOVAPS XMM1,XMM4
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68a0da;}
case 0x68a0da:{ // MOVAPS XMM2,XMM6
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68a0dd;}
case 0x68a0dd:{ // UNPCKLPS XMM4,XMM5
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x68a0e0;}
case 0x68a0e0:{ // UNPCKLPS XMM6,XMM0
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a0e3;}
case 0x68a0e3:{ // UNPCKHPS XMM1,XMM5
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68a0e6;}
case 0x68a0e6:{ // UNPCKHPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a0e9;}
case 0x68a0e9:{ // MOVLPS qword ptr [EDX],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x68a0ec;}
case 0x68a0ec:{ // MOVLPS qword ptr [EDX + 0x8],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1380)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68a0f0;}
case 0x68a0f0:{ // MOVHPS qword ptr [EDX + 0x10],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68a0f4;}
case 0x68a0f4:{ // MOVHPS qword ptr [EDX + 0x18],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1388)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68a0f8;}
case 0x68a0f8:{ // MOVLPS qword ptr [EDX + 0x20],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68a0fc;}
case 0x68a0fc:{ // MOVLPS qword ptr [EDX + 0x28],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68a100;}
case 0x68a100:{ // MOVHPS qword ptr [EDX + 0x30],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68a104;}
case 0x68a104:{ // MOVHPS qword ptr [EDX + 0x38],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68a108;}
case 0x68a108:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a10b;}
case 0x68a10b:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a10c;}
case 0x68a10c:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68a10f;}
case 0x68a10f:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a111;}
case 0x68a111:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a112;}
case 0x68a112:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a114;}
case 0x68a114:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a115;}
case 0x68a115:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a118;}
case 0x68a118:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a11b;}
case 0x68a11b:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a11c;}
case 0x68a11c:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a11e;}
case 0x68a11e:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a121;}
case 0x68a121:{ // MOV EAX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a124;}
case 0x68a124:{ // MOVAPS XMM4,xmmword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a128;}
case 0x68a128:{ // MOVLPS XMM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a12b;}
case 0x68a12b:{ // MOVHPS XMM4,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a12f;}
case 0x68a12f:{ // MOV EAX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a132;}
case 0x68a132:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a136;}
case 0x68a136:{ // MOVLPS XMM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a139;}
case 0x68a139:{ // MOVHPS XMM0,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a13d;}
case 0x68a13d:{ // MOV EAX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a140;}
case 0x68a140:{ // MOVAPS XMM2,xmmword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a144;}
case 0x68a144:{ // MOVLPS XMM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a147;}
case 0x68a147:{ // MOVHPS XMM2,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a14b;}
case 0x68a14b:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a14e;}
case 0x68a14e:{ // SHUFPS XMM0,XMM0,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a152;}
case 0x68a152:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a155;}
case 0x68a155:{ // MULPS XMM1,XMM2
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x128c),4,4));
return 0x68a158;}
case 0x68a158:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a15b;}
case 0x68a15b:{ // SHUFPS XMM2,XMM2,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a15f;}
case 0x68a15f:{ // MULPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a162;}
case 0x68a162:{ // SHUFPS XMM2,XMM2,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a166;}
case 0x68a166:{ // MULPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a169;}
case 0x68a169:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68a16c;}
case 0x68a16c:{ // SHUFPS XMM2,XMM1,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a170;}
case 0x68a170:{ // MOVAPS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68a173;}
case 0x68a173:{ // SHUFPS XMM5,XMM3,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a177;}
case 0x68a177:{ // MOVAPS xmmword ptr [EBP + -0x10],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68a17b;}
case 0x68a17b:{ // SUBPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_SUB",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_SUB",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_SUB",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_SUB",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68a17e;}
case 0x68a17e:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a181;}
case 0x68a181:{ // SHUFPS XMM2,XMM0,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a185;}
case 0x68a185:{ // SUBPS XMM2,xmmword ptr [EBP + -0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0x13b200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,u<4>(c,0x13b200),4,4));
wr<4>(c,0x1284,float_op("FLOAT_SUB",r<4>(c,0x1284),4,u<4>(c,0x13b204),4,4));
wr<4>(c,0x1288,float_op("FLOAT_SUB",r<4>(c,0x1288),4,u<4>(c,0x13b208),4,4));
wr<4>(c,0x128c,float_op("FLOAT_SUB",r<4>(c,0x128c),4,u<4>(c,0x13b20c),4,4));
return 0x68a189;}
case 0x68a189:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68a18c;}
case 0x68a18c:{ // SHUFPS XMM6,XMM1,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a190;}
case 0x68a190:{ // MOVAPS XMM0,XMM4
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68a193;}
case 0x68a193:{ // SHUFPS XMM0,XMM4,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a197;}
case 0x68a197:{ // MOVAPS XMM4,xmmword ptr [0x0080ac30]
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(m<16>(c,0x80ac30)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a19e;}
case 0x68a19e:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a1a1;}
case 0x68a1a1:{ // SHUFPS XMM1,XMM0,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a1a5;}
case 0x68a1a5:{ // MOVAPS XMM7,XMM3
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68a1a8;}
case 0x68a1a8:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68a1ab;}
case 0x68a1ab:{ // SHUFPS XMM3,XMM1,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a1af;}
case 0x68a1af:{ // MULPS XMM0,XMM5
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x134c),4,4));
return 0x68a1b2;}
case 0x68a1b2:{ // SUBPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_SUB",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_SUB",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_SUB",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_SUB",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68a1b5;}
case 0x68a1b5:{ // MULPS XMM1,XMM2
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x128c),4,4));
return 0x68a1b8;}
case 0x68a1b8:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a1bb;}
case 0x68a1bb:{ // MULPS XMM3,XMM7
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x13cc),4,4));
return 0x68a1be;}
case 0x68a1be:{ // ADDPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68a1c1;}
case 0x68a1c1:{ // XORPS XMM0,XMM4
wr<4>(c,0x1200,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1200),r<4>(c,0x1300)));
wr<4>(c,0x1204,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1204),r<4>(c,0x1304)));
wr<4>(c,0x1208,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1208),r<4>(c,0x1308)));
wr<4>(c,0x120c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x120c),r<4>(c,0x130c)));
return 0x68a1c4;}
case 0x68a1c4:{ // MOVUPS xmmword ptr [EAX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x68a1c7;}
case 0x68a1c7:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68a1c9;}
case 0x68a1c9:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a1ca;}
case 0x68a1ca:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68a1cc;}
case 0x68a1cc:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a1cd;}
case 0x68a1cd:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x68a1d0;}
case 0x68a1d0:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a1d2;}
case 0x68a1d2:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a1d3;}
case 0x68a1d3:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a1d5;}
case 0x68a1d5:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a1d8;}
case 0x68a1d8:{ // MOVSS XMM0,dword ptr [EAX]
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a1dc;}
case 0x68a1dc:{ // MOVSS XMM1,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a1e1;}
case 0x68a1e1:{ // MOVSS XMM2,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a1e6;}
case 0x68a1e6:{ // MOVSS XMM3,dword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a1eb;}
case 0x68a1eb:{ // MOVSS XMM4,XMM0
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a1ef;}
case 0x68a1ef:{ // MOVSS XMM5,XMM1
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
return 0x68a1f3;}
case 0x68a1f3:{ // MOVSS XMM6,XMM2
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
return 0x68a1f7;}
case 0x68a1f7:{ // MOVSS XMM7,XMM3
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
return 0x68a1fb;}
case 0x68a1fb:{ // MULSS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
return 0x68a1ff;}
case 0x68a1ff:{ // MULSS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
return 0x68a203;}
case 0x68a203:{ // MULSS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
return 0x68a207;}
case 0x68a207:{ // ADDSS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
return 0x68a20b;}
case 0x68a20b:{ // MULSS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
return 0x68a20f;}
case 0x68a20f:{ // ADDSS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
return 0x68a213;}
case 0x68a213:{ // ADDSS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
return 0x68a217;}
case 0x68a217:{ // RSQRTSS XMM5,XMM4
wr<16>(c,0x1340,user_op(c,1048752,{r<16>(c,0x1340),r<16>(c,0x1300)}));
return 0x68a21b;}
case 0x68a21b:{ // MOVSS XMM6,XMM5
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
return 0x68a21f;}
case 0x68a21f:{ // MULSS XMM5,XMM5
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1340),4,4));
return 0x68a223;}
case 0x68a223:{ // MULSS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
return 0x68a227;}
case 0x68a227:{ // MOVSS XMM5,dword ptr [0x0080ac50]
wr<4>(c,0x1340,eval<Op::COPY,4,4>(m<4>(c,0x80ac50)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a22f;}
case 0x68a22f:{ // SUBSS XMM5,XMM4
wr<4>(c,0x1340,float_op("FLOAT_SUB",r<4>(c,0x1340),4,r<4>(c,0x1300),4,4));
return 0x68a233;}
case 0x68a233:{ // MULSS XMM5,dword ptr [0x0080ac40]
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,m<4>(c,0x80ac40),4,4));
return 0x68a23b;}
case 0x68a23b:{ // MULSS XMM5,XMM6
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1380),4,4));
return 0x68a23f;}
case 0x68a23f:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a242;}
case 0x68a242:{ // MULSS XMM0,XMM5
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1340),4,4));
return 0x68a246;}
case 0x68a246:{ // MULSS XMM1,XMM5
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1340),4,4));
return 0x68a24a;}
case 0x68a24a:{ // MOVSS dword ptr [EAX],XMM0
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x68a24e;}
case 0x68a24e:{ // MULSS XMM2,XMM5
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1340),4,4));
return 0x68a252;}
case 0x68a252:{ // MOVSS dword ptr [EAX + 0x4],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a257;}
case 0x68a257:{ // MULSS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
return 0x68a25b;}
case 0x68a25b:{ // MOVSS dword ptr [EAX + 0x8],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a260;}
case 0x68a260:{ // MOVSS dword ptr [EAX + 0xc],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a265;}
case 0x68a265:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a268;}
case 0x68a268:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a269;}
case 0x68a269:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x68a26c;}
case 0x68a26c:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a26e;}
case 0x68a26e:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a26f;}
case 0x68a26f:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a271;}
case 0x68a271:{ // MOVSS XMM0,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a276;}
case 0x68a276:{ // MOVSS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a27a;}
case 0x68a27a:{ // MULSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68a27e;}
case 0x68a27e:{ // MOVSS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a282;}
case 0x68a282:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a286;}
case 0x68a286:{ // MULSS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
return 0x68a28a;}
case 0x68a28a:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a28e;}
case 0x68a28e:{ // MULPS XMM0,xmmword ptr [0x0080ab40]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab40)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68a295;}
case 0x68a295:{ // SHUFPS XMM2,XMM2,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a299;}
case 0x68a299:{ // MULPS XMM1,xmmword ptr [0x0080ab30]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab30)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68a2a0;}
case 0x68a2a0:{ // ADDPS XMM0,xmmword ptr [0x0080ab50]
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(m<16>(c,0x80ab50)));
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,u<4>(c,0xbbc0c),4,4));
return 0x68a2a7;}
case 0x68a2a7:{ // MULPS XMM2,xmmword ptr [0x0080ab20]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab20)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68a2ae;}
case 0x68a2ae:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a2b1;}
case 0x68a2b1:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a2b4;}
case 0x68a2b4:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a2b7;}
case 0x68a2b7:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a2ba;}
case 0x68a2ba:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a2bd;}
case 0x68a2bd:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a2c0;}
case 0x68a2c0:{ // SHUFPS XMM1,XMM0,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a2c4;}
case 0x68a2c4:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a2c7;}
case 0x68a2c7:{ // SHUFPS XMM2,XMM0,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a2cb;}
case 0x68a2cb:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a2ce;}
case 0x68a2ce:{ // SHUFPS XMM3,XMM0,0xff
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a2d2;}
case 0x68a2d2:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a2d6;}
case 0x68a2d6:{ // MOVSS XMM4,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a2db;}
case 0x68a2db:{ // MOVHPS XMM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a2de;}
case 0x68a2de:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a2e1;}
case 0x68a2e1:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68a2e4;}
case 0x68a2e4:{ // MOVSS XMM5,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a2e9;}
case 0x68a2e9:{ // MOVHPS XMM5,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1348,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a2ec;}
case 0x68a2ec:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68a2ef;}
case 0x68a2ef:{ // MOVSS XMM6,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a2f4;}
case 0x68a2f4:{ // MOVHPS XMM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1388,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a2f7;}
case 0x68a2f7:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68a2fa;}
case 0x68a2fa:{ // MULPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68a2fd;}
case 0x68a2fd:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68a300;}
case 0x68a300:{ // MOVSS XMM7,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a305;}
case 0x68a305:{ // MOVHPS XMM7,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x13c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a308;}
case 0x68a308:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a30b;}
case 0x68a30b:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68a30e;}
case 0x68a30e:{ // ADDPS XMM4,XMM7
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x13cc),4,4));
return 0x68a311;}
case 0x68a311:{ // MOVHPS qword ptr [ECX],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x68a314;}
case 0x68a314:{ // MOVSS dword ptr [ECX + 0x8],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a319;}
case 0x68a319:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a31c;}
case 0x68a31c:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a31d;}
case 0x68a31d:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a320;}
case 0x68a320:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a322;}
case 0x68a322:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a323;}
case 0x68a323:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a325;}
case 0x68a325:{ // MOVSS XMM0,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a32a;}
case 0x68a32a:{ // MOVSS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a32e;}
case 0x68a32e:{ // MULSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68a332;}
case 0x68a332:{ // MOVSS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a336;}
case 0x68a336:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a33a;}
case 0x68a33a:{ // MULSS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
return 0x68a33e;}
case 0x68a33e:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a342;}
case 0x68a342:{ // MULPS XMM0,xmmword ptr [0x0080ab40]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab40)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68a349;}
case 0x68a349:{ // SHUFPS XMM2,XMM2,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a34d;}
case 0x68a34d:{ // MULPS XMM1,xmmword ptr [0x0080ab30]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab30)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68a354;}
case 0x68a354:{ // ADDPS XMM0,xmmword ptr [0x0080ab50]
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(m<16>(c,0x80ab50)));
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,u<4>(c,0xbbc0c),4,4));
return 0x68a35b;}
case 0x68a35b:{ // MULPS XMM2,xmmword ptr [0x0080ab20]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab20)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68a362;}
case 0x68a362:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a365;}
case 0x68a365:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a368;}
case 0x68a368:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a36b;}
case 0x68a36b:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a36e;}
case 0x68a36e:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a371;}
case 0x68a371:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a374;}
case 0x68a374:{ // SHUFPS XMM2,XMM0,0xfa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a378;}
case 0x68a378:{ // SHUFPS XMM0,XMM0,0x50
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a37c;}
case 0x68a37c:{ // MOVLPS XMM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a37f;}
case 0x68a37f:{ // MOVHPS XMM4,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a382;}
case 0x68a382:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a385;}
case 0x68a385:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68a388;}
case 0x68a388:{ // MOVLPS XMM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1380,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a38b;}
case 0x68a38b:{ // MOVHPS XMM6,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1388,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a38e;}
case 0x68a38e:{ // MULPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68a391;}
case 0x68a391:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68a394;}
case 0x68a394:{ // MOVHLPS XMM6,XMM4
wr<8>(c,0x1380,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
return 0x68a397;}
case 0x68a397:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68a39a;}
case 0x68a39a:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a39d;}
case 0x68a39d:{ // MOVLPS qword ptr [ECX],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x68a3a0;}
case 0x68a3a0:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a3a3;}
case 0x68a3a3:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a3a4;}
case 0x68a3a4:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a3a7;}
case 0x68a3a7:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a3a9;}
case 0x68a3a9:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a3aa;}
case 0x68a3aa:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a3ac;}
case 0x68a3ac:{ // MOVSS XMM0,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a3b1;}
case 0x68a3b1:{ // MOVSS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a3b5;}
case 0x68a3b5:{ // MULSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68a3b9;}
case 0x68a3b9:{ // MOVSS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a3bd;}
case 0x68a3bd:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a3c1;}
case 0x68a3c1:{ // MULSS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
return 0x68a3c5;}
case 0x68a3c5:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a3c9;}
case 0x68a3c9:{ // MULPS XMM0,xmmword ptr [0x0080ab40]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab40)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68a3d0;}
case 0x68a3d0:{ // SHUFPS XMM2,XMM2,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a3d4;}
case 0x68a3d4:{ // MULPS XMM1,xmmword ptr [0x0080ab30]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab30)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68a3db;}
case 0x68a3db:{ // ADDPS XMM0,xmmword ptr [0x0080ab50]
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(m<16>(c,0x80ab50)));
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,u<4>(c,0xbbc0c),4,4));
return 0x68a3e2;}
case 0x68a3e2:{ // MULPS XMM2,xmmword ptr [0x0080ab20]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab20)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68a3e9;}
case 0x68a3e9:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a3ec;}
case 0x68a3ec:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a3ef;}
case 0x68a3ef:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a3f2;}
case 0x68a3f2:{ // XORPS XMM4,XMM4
wr<4>(c,0x1300,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1300),r<4>(c,0x1300)));
wr<4>(c,0x1304,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1304),r<4>(c,0x1304)));
wr<4>(c,0x1308,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1308),r<4>(c,0x1308)));
wr<4>(c,0x130c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x130c),r<4>(c,0x130c)));
return 0x68a3f5;}
case 0x68a3f5:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a3f8;}
case 0x68a3f8:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a3fb;}
case 0x68a3fb:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a3fe;}
case 0x68a3fe:{ // SHUFPS XMM1,XMM0,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a402;}
case 0x68a402:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a405;}
case 0x68a405:{ // SHUFPS XMM2,XMM0,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a409;}
case 0x68a409:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a40c;}
case 0x68a40c:{ // SHUFPS XMM3,XMM0,0xff
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a410;}
case 0x68a410:{ // XORPS XMM5,XMM5
wr<4>(c,0x1340,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1340),r<4>(c,0x1340)));
wr<4>(c,0x1344,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1344),r<4>(c,0x1344)));
wr<4>(c,0x1348,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1348),r<4>(c,0x1348)));
wr<4>(c,0x134c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x134c),r<4>(c,0x134c)));
return 0x68a413;}
case 0x68a413:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a417;}
case 0x68a417:{ // MOVUPS XMM4,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a41a;}
case 0x68a41a:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a41d;}
case 0x68a41d:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68a420;}
case 0x68a420:{ // XORPS XMM6,XMM6
wr<4>(c,0x1380,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1380),r<4>(c,0x1380)));
wr<4>(c,0x1384,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1384),r<4>(c,0x1384)));
wr<4>(c,0x1388,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1388),r<4>(c,0x1388)));
wr<4>(c,0x138c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x138c),r<4>(c,0x138c)));
return 0x68a423;}
case 0x68a423:{ // MOVUPS XMM5,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a426;}
case 0x68a426:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68a429;}
case 0x68a429:{ // XORPS XMM7,XMM7
wr<4>(c,0x13c0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x13c0),r<4>(c,0x13c0)));
wr<4>(c,0x13c4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x13c4),r<4>(c,0x13c4)));
wr<4>(c,0x13c8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x13c8),r<4>(c,0x13c8)));
wr<4>(c,0x13cc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x13cc),r<4>(c,0x13cc)));
return 0x68a42c;}
case 0x68a42c:{ // MOVUPS XMM6,xmmword ptr [EDX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x8)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a42f;}
case 0x68a42f:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68a432;}
case 0x68a432:{ // MULPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68a435;}
case 0x68a435:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68a438;}
case 0x68a438:{ // MOVUPS XMM7,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a43b;}
case 0x68a43b:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a43e;}
case 0x68a43e:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68a441;}
case 0x68a441:{ // ADDPS XMM4,XMM7
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x13cc),4,4));
return 0x68a444;}
case 0x68a444:{ // MOVUPS xmmword ptr [ECX],XMM4
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,r<4>(c,0x4),u<16>(c,0xa600));
return 0x68a447;}
case 0x68a447:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a44a;}
case 0x68a44a:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a44b;}
case 0x68a44b:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a44e;}
case 0x68a44e:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a450;}
case 0x68a450:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a451;}
case 0x68a451:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a453;}
case 0x68a453:{ // MOVSS XMM0,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a458;}
case 0x68a458:{ // MOVSS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a45c;}
case 0x68a45c:{ // MULSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68a460;}
case 0x68a460:{ // MOVSS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a464;}
case 0x68a464:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a468;}
case 0x68a468:{ // MULSS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
return 0x68a46c;}
case 0x68a46c:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a470;}
case 0x68a470:{ // MULPS XMM0,xmmword ptr [0x0080ab00]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab00)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68a477;}
case 0x68a477:{ // SHUFPS XMM2,XMM2,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a47b;}
case 0x68a47b:{ // MULPS XMM1,xmmword ptr [0x0080aaf0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80aaf0)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68a482;}
case 0x68a482:{ // ADDSS XMM0,dword ptr [0x0080ab10]
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,m<4>(c,0x80ab10),4,4));
return 0x68a48a;}
case 0x68a48a:{ // MULPS XMM2,xmmword ptr [0x0080aae0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80aae0)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68a491;}
case 0x68a491:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a494;}
case 0x68a494:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a497;}
case 0x68a497:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a49a;}
case 0x68a49a:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a49d;}
case 0x68a49d:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a4a0;}
case 0x68a4a0:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a4a3;}
case 0x68a4a3:{ // SHUFPS XMM1,XMM0,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a4a7;}
case 0x68a4a7:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a4aa;}
case 0x68a4aa:{ // SHUFPS XMM2,XMM0,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a4ae;}
case 0x68a4ae:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a4b1;}
case 0x68a4b1:{ // SHUFPS XMM3,XMM0,0xff
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a4b5;}
case 0x68a4b5:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a4b9;}
case 0x68a4b9:{ // MOVSS XMM4,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a4be;}
case 0x68a4be:{ // MOVHPS XMM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a4c1;}
case 0x68a4c1:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a4c4;}
case 0x68a4c4:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68a4c7;}
case 0x68a4c7:{ // MOVSS XMM5,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a4cc;}
case 0x68a4cc:{ // MOVHPS XMM5,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1348,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a4cf;}
case 0x68a4cf:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68a4d2;}
case 0x68a4d2:{ // MOVSS XMM6,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a4d7;}
case 0x68a4d7:{ // MOVHPS XMM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1388,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a4da;}
case 0x68a4da:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68a4dd;}
case 0x68a4dd:{ // MULPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68a4e0;}
case 0x68a4e0:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68a4e3;}
case 0x68a4e3:{ // MOVSS XMM7,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a4e8;}
case 0x68a4e8:{ // MOVHPS XMM7,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x13c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a4eb;}
case 0x68a4eb:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a4ee;}
case 0x68a4ee:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68a4f1;}
case 0x68a4f1:{ // ADDPS XMM4,XMM7
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x13cc),4,4));
return 0x68a4f4;}
case 0x68a4f4:{ // MOVHPS qword ptr [ECX],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x68a4f7;}
case 0x68a4f7:{ // MOVSS dword ptr [ECX + 0x8],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a4fc;}
case 0x68a4fc:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a4ff;}
case 0x68a4ff:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a500;}
case 0x68a500:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a503;}
case 0x68a503:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a505;}
case 0x68a505:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a506;}
case 0x68a506:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a508;}
case 0x68a508:{ // MOVSS XMM0,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a50d;}
case 0x68a50d:{ // MOVSS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a511;}
case 0x68a511:{ // MULSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68a515;}
case 0x68a515:{ // MOVSS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a519;}
case 0x68a519:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a51d;}
case 0x68a51d:{ // MULSS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
return 0x68a521;}
case 0x68a521:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a525;}
case 0x68a525:{ // MULPS XMM0,xmmword ptr [0x0080ab00]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab00)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68a52c;}
case 0x68a52c:{ // SHUFPS XMM2,XMM2,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a530;}
case 0x68a530:{ // MULPS XMM1,xmmword ptr [0x0080aaf0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80aaf0)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68a537;}
case 0x68a537:{ // ADDSS XMM0,dword ptr [0x0080ab10]
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,m<4>(c,0x80ab10),4,4));
return 0x68a53f;}
case 0x68a53f:{ // MULPS XMM2,xmmword ptr [0x0080aae0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80aae0)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68a546;}
case 0x68a546:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a549;}
case 0x68a549:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a54c;}
case 0x68a54c:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a54f;}
case 0x68a54f:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a552;}
case 0x68a552:{ // SHUFPS XMM1,XMM0,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a556;}
case 0x68a556:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a559;}
case 0x68a559:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a55c;}
case 0x68a55c:{ // SHUFPS XMM2,XMM0,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a560;}
case 0x68a560:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a563;}
case 0x68a563:{ // SHUFPS XMM3,XMM0,0xff
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a567;}
case 0x68a567:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a56a;}
case 0x68a56a:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a56e;}
case 0x68a56e:{ // MOVUPS XMM4,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a571;}
case 0x68a571:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a574;}
case 0x68a574:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68a577;}
case 0x68a577:{ // MOVUPS XMM5,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a57a;}
case 0x68a57a:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68a57d;}
case 0x68a57d:{ // MOVUPS XMM6,xmmword ptr [EDX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x8)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a580;}
case 0x68a580:{ // ADDPS XMM4,XMM5
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x134c),4,4));
return 0x68a583;}
case 0x68a583:{ // MULPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68a586;}
case 0x68a586:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68a589;}
case 0x68a589:{ // MOVUPS XMM7,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a58c;}
case 0x68a58c:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a58f;}
case 0x68a58f:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68a592;}
case 0x68a592:{ // ADDPS XMM4,XMM7
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x13cc),4,4));
return 0x68a595;}
case 0x68a595:{ // MOVUPS xmmword ptr [ECX],XMM4
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,r<4>(c,0x4),u<16>(c,0xa600));
return 0x68a598;}
case 0x68a598:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a59b;}
case 0x68a59b:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a59c;}
case 0x68a59c:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a59f;}
case 0x68a59f:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a5a1;}
case 0x68a5a1:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a5a2;}
case 0x68a5a2:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a5a4;}
case 0x68a5a4:{ // MOVSS XMM0,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a5a9;}
case 0x68a5a9:{ // MOVSS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a5ad;}
case 0x68a5ad:{ // MULSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68a5b1;}
case 0x68a5b1:{ // MOVSS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a5b5;}
case 0x68a5b5:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a5b9;}
case 0x68a5b9:{ // MULSS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
return 0x68a5bd;}
case 0x68a5bd:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a5c1;}
case 0x68a5c1:{ // MULPS XMM0,xmmword ptr [0x0080ab00]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ab00)));
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,u<4>(c,0xdc50c),4,4));
return 0x68a5c8;}
case 0x68a5c8:{ // SHUFPS XMM2,XMM2,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a5cc;}
case 0x68a5cc:{ // MULPS XMM1,xmmword ptr [0x0080aaf0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80aaf0)));
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,u<4>(c,0xdc50c),4,4));
return 0x68a5d3;}
case 0x68a5d3:{ // ADDSS XMM0,dword ptr [0x0080ab10]
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,m<4>(c,0x80ab10),4,4));
return 0x68a5db;}
case 0x68a5db:{ // MULPS XMM2,xmmword ptr [0x0080aae0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80aae0)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68a5e2;}
case 0x68a5e2:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a5e5;}
case 0x68a5e5:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a5e8;}
case 0x68a5e8:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a5eb;}
case 0x68a5eb:{ // MOVAPS XMM2,XMM0
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a5ee;}
case 0x68a5ee:{ // SHUFPS XMM2,XMM0,0xfa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a5f2;}
case 0x68a5f2:{ // SHUFPS XMM0,XMM0,0x50
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a5f6;}
case 0x68a5f6:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a5f9;}
case 0x68a5f9:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a5fc;}
case 0x68a5fc:{ // MOVLPS XMM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a5ff;}
case 0x68a5ff:{ // MOVHPS XMM4,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a602;}
case 0x68a602:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a605;}
case 0x68a605:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68a608;}
case 0x68a608:{ // MOVLPS XMM6,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1380,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a60b;}
case 0x68a60b:{ // MOVHPS XMM6,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1388,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a60e;}
case 0x68a60e:{ // MULPS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x128c),4,4));
return 0x68a611;}
case 0x68a611:{ // MOV ECX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a614;}
case 0x68a614:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68a617;}
case 0x68a617:{ // MOVHLPS XMM3,XMM4
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
return 0x68a61a;}
case 0x68a61a:{ // ADDPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68a61d;}
case 0x68a61d:{ // MOVLPS qword ptr [ECX],XMM4
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1300)));
wm<8>(c,r<4>(c,0x4),u<8>(c,0xa400));
return 0x68a620;}
case 0x68a620:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a623;}
case 0x68a623:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a624;}
case 0x68a624:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a627;}
case 0x68a627:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a629;}
case 0x68a629:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a62a;}
case 0x68a62a:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a62c;}
case 0x68a62c:{ // MOVSS XMM0,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a631;}
case 0x68a631:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a634;}
case 0x68a634:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a638;}
case 0x68a638:{ // MOVSS XMM2,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a63d;}
case 0x68a63d:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a640;}
case 0x68a640:{ // MOVHPS XMM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a643;}
case 0x68a643:{ // MOVSS XMM1,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a648;}
case 0x68a648:{ // MOVSS XMM3,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a64d;}
case 0x68a64d:{ // MOVHPS XMM3,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a650;}
case 0x68a650:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a654;}
case 0x68a654:{ // MOV EAX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a657;}
case 0x68a657:{ // SUBPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a65a;}
case 0x68a65a:{ // MOVSS XMM4,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a65f;}
case 0x68a65f:{ // MOVHPS XMM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a662;}
case 0x68a662:{ // MULPS XMM3,XMM0
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x120c),4,4));
return 0x68a665;}
case 0x68a665:{ // SUBPS XMM4,XMM2
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,r<4>(c,0x128c),4,4));
return 0x68a668;}
case 0x68a668:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a66b;}
case 0x68a66b:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a66e;}
case 0x68a66e:{ // MULPS XMM4,XMM1
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x124c),4,4));
return 0x68a671;}
case 0x68a671:{ // ADDPS XMM3,XMM4
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x130c),4,4));
return 0x68a674;}
case 0x68a674:{ // MOVSS dword ptr [EAX + 0x8],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a679;}
case 0x68a679:{ // MOVHPS qword ptr [EAX],XMM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68a67c;}
case 0x68a67c:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a67f;}
case 0x68a67f:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a680;}
case 0x68a680:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a683;}
case 0x68a683:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a685;}
case 0x68a685:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a686;}
case 0x68a686:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a688;}
case 0x68a688:{ // MOVSS XMM0,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a68d;}
case 0x68a68d:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a690;}
case 0x68a690:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a694;}
case 0x68a694:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a697;}
case 0x68a697:{ // MOVUPS XMM2,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a69a;}
case 0x68a69a:{ // MOVSS XMM1,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a69f;}
case 0x68a69f:{ // MOVUPS XMM3,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a6a2;}
case 0x68a6a2:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a6a6;}
case 0x68a6a6:{ // MOV EAX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a6a9;}
case 0x68a6a9:{ // SUBPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a6ac;}
case 0x68a6ac:{ // MOVUPS XMM4,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a6af;}
case 0x68a6af:{ // MULPS XMM3,XMM0
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x120c),4,4));
return 0x68a6b2;}
case 0x68a6b2:{ // SUBPS XMM4,XMM2
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,r<4>(c,0x128c),4,4));
return 0x68a6b5;}
case 0x68a6b5:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a6b8;}
case 0x68a6b8:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a6bb;}
case 0x68a6bb:{ // MULPS XMM4,XMM1
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x124c),4,4));
return 0x68a6be;}
case 0x68a6be:{ // ADDPS XMM3,XMM4
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x130c),4,4));
return 0x68a6c1;}
case 0x68a6c1:{ // MOVUPS xmmword ptr [EAX],XMM3
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x68a6c4;}
case 0x68a6c4:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a6c7;}
case 0x68a6c7:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a6c8;}
case 0x68a6c8:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a6cb;}
case 0x68a6cb:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a6cd;}
case 0x68a6cd:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a6ce;}
case 0x68a6ce:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a6d0;}
case 0x68a6d0:{ // XORPS XMM2,XMM2
wr<4>(c,0x1280,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1280),r<4>(c,0x1280)));
wr<4>(c,0x1284,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1284),r<4>(c,0x1284)));
wr<4>(c,0x1288,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1288),r<4>(c,0x1288)));
wr<4>(c,0x128c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x128c),r<4>(c,0x128c)));
return 0x68a6d3;}
case 0x68a6d3:{ // MOVSS XMM0,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a6d8;}
case 0x68a6d8:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a6db;}
case 0x68a6db:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a6df;}
case 0x68a6df:{ // XORPS XMM3,XMM3
wr<4>(c,0x12c0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x12c0),r<4>(c,0x12c0)));
wr<4>(c,0x12c4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x12c4),r<4>(c,0x12c4)));
wr<4>(c,0x12c8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x12c8),r<4>(c,0x12c8)));
wr<4>(c,0x12cc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x12cc),r<4>(c,0x12cc)));
return 0x68a6e2;}
case 0x68a6e2:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a6e5;}
case 0x68a6e5:{ // MOVHPS XMM2,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a6e8;}
case 0x68a6e8:{ // MOVSS XMM1,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a6ed;}
case 0x68a6ed:{ // MOVHPS XMM3,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a6f0;}
case 0x68a6f0:{ // XORPS XMM4,XMM4
wr<4>(c,0x1300,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1300),r<4>(c,0x1300)));
wr<4>(c,0x1304,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1304),r<4>(c,0x1304)));
wr<4>(c,0x1308,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1308),r<4>(c,0x1308)));
wr<4>(c,0x130c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x130c),r<4>(c,0x130c)));
return 0x68a6f3;}
case 0x68a6f3:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a6f7;}
case 0x68a6f7:{ // MOV EAX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a6fa;}
case 0x68a6fa:{ // SUBPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a6fd;}
case 0x68a6fd:{ // MOVHPS XMM4,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1308,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a700;}
case 0x68a700:{ // MULPS XMM3,XMM0
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x120c),4,4));
return 0x68a703;}
case 0x68a703:{ // SUBPS XMM4,XMM2
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,r<4>(c,0x128c),4,4));
return 0x68a706;}
case 0x68a706:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a709;}
case 0x68a709:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a70c;}
case 0x68a70c:{ // MULPS XMM4,XMM1
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x124c),4,4));
return 0x68a70f;}
case 0x68a70f:{ // ADDPS XMM3,XMM4
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x130c),4,4));
return 0x68a712;}
case 0x68a712:{ // MOVHPS qword ptr [EAX],XMM3
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68a715;}
case 0x68a715:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a718;}
case 0x68a718:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a719;}
case 0x68a719:{ // RET 0x18
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
return uint32_t(r<4>(c,0x284));
return 0x68a71c;}
case 0x68a71c:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a71e;}
case 0x68a71e:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a71f;}
case 0x68a71f:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a721;}
case 0x68a721:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a724;}
case 0x68a724:{ // MOV dword ptr [EBP + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a727;}
case 0x68a727:{ // MOV EAX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a72a;}
case 0x68a72a:{ // MOVUPS XMM0,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a72d;}
case 0x68a72d:{ // MOV ECX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a730;}
case 0x68a730:{ // MOVSS XMM1,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a735;}
case 0x68a735:{ // MOV EDX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a738;}
case 0x68a738:{ // MOVHPS XMM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a73b;}
case 0x68a73b:{ // MOVSS XMM2,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a740;}
case 0x68a740:{ // MOVAPS XMM4,XMM0
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a743;}
case 0x68a743:{ // SHUFPS XMM0,XMM0,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a747;}
case 0x68a747:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68a74a;}
case 0x68a74a:{ // SHUFPS XMM4,XMM4,0xff
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a74e;}
case 0x68a74e:{ // MOVHPS XMM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a751;}
case 0x68a751:{ // MULPS XMM3,XMM0
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x120c),4,4));
return 0x68a754;}
case 0x68a754:{ // MULPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a757;}
case 0x68a757:{ // MOVHLPS XMM5,XMM3
wr<8>(c,0x1340,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
return 0x68a75a;}
case 0x68a75a:{ // MOVHLPS XMM6,XMM0
wr<8>(c,0x1380,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x68a75d;}
case 0x68a75d:{ // ADDPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68a760;}
case 0x68a760:{ // ADDPS XMM0,XMM6
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x138c),4,4));
return 0x68a763;}
case 0x68a763:{ // SHUFPS XMM5,XMM3,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a767;}
case 0x68a767:{ // SHUFPS XMM6,XMM0,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a76b;}
case 0x68a76b:{ // ADDSS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
return 0x68a76f;}
case 0x68a76f:{ // ADDSS XMM0,XMM6
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1380),4,4));
return 0x68a773;}
case 0x68a773:{ // MOVSS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
return 0x68a777;}
case 0x68a777:{ // SUBSS XMM5,XMM0
wr<4>(c,0x1340,float_op("FLOAT_SUB",r<4>(c,0x1340),4,r<4>(c,0x1200),4,4));
return 0x68a77b;}
case 0x68a77b:{ // ADDSS XMM3,XMM4
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1300),4,4));
return 0x68a77f;}
case 0x68a77f:{ // COMISS XMM5,dword ptr [0x008a68e4]
wu<1>(c,0x4ff00,float_op("FLOAT_NAN",r<4>(c,0x1340),4,0x0ull,4,1));
wu<1>(c,0x50000,float_op("FLOAT_NAN",m<4>(c,0x8a68e4),4,0x0ull,4,1));
wr<1>(c,0x202,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4ff00),u<1>(c,0x50000)));
wu<1>(c,0x50200,float_op("FLOAT_EQUAL",r<4>(c,0x1340),4,m<4>(c,0x8a68e4),4,1));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(r<1>(c,0x202),u<1>(c,0x50200)));
wu<1>(c,0x50400,float_op("FLOAT_LESS",r<4>(c,0x1340),4,m<4>(c,0x8a68e4),4,1));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(r<1>(c,0x202),u<1>(c,0x50400)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x204,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x207,eval<Op::COPY,1,1>(0x0ull));
return 0x68a786;}
case 0x68a786:{ // JZ 0x0068a7be
if(r<1>(c,0x206)){return 0x68a7be;}
return 0x68a788;}
case 0x68a788:{ // RCPSS XMM0,XMM5
wr<16>(c,0x1200,user_op(c,1048750,{r<16>(c,0x1200),r<16>(c,0x1340)}));
return 0x68a78c;}
case 0x68a78c:{ // MOVSS XMM6,XMM0
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68a790;}
case 0x68a790:{ // ADDSS XMM6,XMM6
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1380),4,4));
return 0x68a794;}
case 0x68a794:{ // MULSS XMM5,XMM0
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1200),4,4));
return 0x68a798;}
case 0x68a798:{ // MULSS XMM5,XMM0
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1200),4,4));
return 0x68a79c;}
case 0x68a79c:{ // SUBSS XMM6,XMM5
wr<4>(c,0x1380,float_op("FLOAT_SUB",r<4>(c,0x1380),4,r<4>(c,0x1340),4,4));
return 0x68a7a0;}
case 0x68a7a0:{ // MULSS XMM3,XMM6
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1380),4,4));
return 0x68a7a4;}
case 0x68a7a4:{ // SHUFPS XMM3,XMM3,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a7a8;}
case 0x68a7a8:{ // SUBPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_SUB",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_SUB",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_SUB",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68a7ab;}
case 0x68a7ab:{ // MULPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a7ae;}
case 0x68a7ae:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a7b1;}
case 0x68a7b1:{ // ADDPS XMM1,XMM3
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,r<4>(c,0x12cc),4,4));
return 0x68a7b4;}
case 0x68a7b4:{ // MOVHPS qword ptr [EAX],XMM1
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xa400));
return 0x68a7b7;}
case 0x68a7b7:{ // MOVSS dword ptr [EAX + 0x8],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a7bc;}
case 0x68a7bc:{ // JMP 0x0068a7c5
return 0x68a7c5;
return 0x68a7be;}
case 0x68a7be:{ // MOV dword ptr [EBP + 0x8],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a7c5;}
case 0x68a7c5:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a7c8;}
case 0x68a7c8:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a7c9;}
case 0x68a7c9:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x68a7cc;}
case 0x68a7cc:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a7ce;}
case 0x68a7ce:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a7cf;}
case 0x68a7cf:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a7d1;}
case 0x68a7d1:{ // SUB ESP,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a7d4;}
case 0x68a7d4:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a7d7;}
case 0x68a7d7:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a7da;}
case 0x68a7da:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a7db;}
case 0x68a7db:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a7dc;}
case 0x68a7dc:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a7df;}
case 0x68a7df:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68a7e3;}
case 0x68a7e3:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a7e5;}
case 0x68a7e5:{ // SUB ESP,0x30
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a7e8;}
case 0x68a7e8:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a7eb;}
case 0x68a7eb:{ // TEST AL,0xf
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3600),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a7ed;}
case 0x68a7ed:{ // JNZ 0x0068a800
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x68a800;}
return 0x68a7ef;}
case 0x68a7ef:{ // MOVAPS XMM7,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a7f2;}
case 0x68a7f2:{ // MOVAPS XMM1,xmmword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a7f6;}
case 0x68a7f6:{ // MOVAPS XMM2,xmmword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a7fa;}
case 0x68a7fa:{ // MOVAPS XMM0,xmmword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a7fe;}
case 0x68a7fe:{ // JMP 0x0068a81f
return 0x68a81f;
return 0x68a800;}
case 0x68a800:{ // MOVLPS XMM1,qword ptr [EAX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1240,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a804;}
case 0x68a804:{ // MOVLPS XMM7,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a807;}
case 0x68a807:{ // MOVHPS XMM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a80b;}
case 0x68a80b:{ // MOVHPS XMM7,qword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x13c8,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a80f;}
case 0x68a80f:{ // MOVLPS XMM2,qword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1280,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a813;}
case 0x68a813:{ // MOVLPS XMM0,qword ptr [EAX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a817;}
case 0x68a817:{ // MOVHPS XMM2,qword ptr [EAX + 0x28]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x28ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a81b;}
case 0x68a81b:{ // MOVHPS XMM0,qword ptr [EAX + 0x38]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x38ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a81f;}
case 0x68a81f:{ // SHUFPS XMM2,XMM2,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a823;}
case 0x68a823:{ // SHUFPS XMM1,XMM1,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a827;}
case 0x68a827:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a82a;}
case 0x68a82a:{ // SHUFPS XMM0,XMM0,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a82e;}
case 0x68a82e:{ // MULPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a831;}
case 0x68a831:{ // MOVAPS XMM4,XMM0
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a834;}
case 0x68a834:{ // SHUFPS XMM0,XMM0,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a838;}
case 0x68a838:{ // MULPS XMM4,XMM2
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x128c),4,4));
return 0x68a83b;}
case 0x68a83b:{ // MULPS XMM2,XMM0
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x120c),4,4));
return 0x68a83e;}
case 0x68a83e:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68a841;}
case 0x68a841:{ // SHUFPS XMM2,XMM2,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a845;}
case 0x68a845:{ // SUBPS XMM2,XMM0
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1284,float_op("FLOAT_SUB",r<4>(c,0x1284),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1288,float_op("FLOAT_SUB",r<4>(c,0x1288),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x128c,float_op("FLOAT_SUB",r<4>(c,0x128c),4,r<4>(c,0x120c),4,4));
return 0x68a848;}
case 0x68a848:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68a84b;}
case 0x68a84b:{ // SHUFPS XMM1,XMM1,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a84f;}
case 0x68a84f:{ // MULPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68a852;}
case 0x68a852:{ // SHUFPS XMM1,XMM1,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a856;}
case 0x68a856:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68a859;}
case 0x68a859:{ // SHUFPS XMM4,XMM4,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a85d;}
case 0x68a85d:{ // MOVAPS XMM6,XMM3
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68a860;}
case 0x68a860:{ // SHUFPS XMM3,XMM3,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a864;}
case 0x68a864:{ // SHUFPS XMM6,XMM6,0x39
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a868;}
case 0x68a868:{ // SUBPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68a86b;}
case 0x68a86b:{ // SUBPS XMM5,XMM6
wr<4>(c,0x1340,float_op("FLOAT_SUB",r<4>(c,0x1340),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1344,float_op("FLOAT_SUB",r<4>(c,0x1344),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1348,float_op("FLOAT_SUB",r<4>(c,0x1348),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x134c,float_op("FLOAT_SUB",r<4>(c,0x134c),4,r<4>(c,0x138c),4,4));
return 0x68a86e;}
case 0x68a86e:{ // MULPS XMM0,XMM4
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x130c),4,4));
return 0x68a871;}
case 0x68a871:{ // MULPS XMM1,XMM5
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x134c),4,4));
return 0x68a874;}
case 0x68a874:{ // ADDPS XMM0,XMM2
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x128c),4,4));
return 0x68a877;}
case 0x68a877:{ // ADDPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a87a;}
case 0x68a87a:{ // MULPS XMM0,XMM7
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x13cc),4,4));
return 0x68a87d;}
case 0x68a87d:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a880;}
case 0x68a880:{ // MOVHLPS XMM0,XMM0
wr<8>(c,0x1200,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x68a883;}
case 0x68a883:{ // ADDPS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,r<4>(c,0x120c),4,4));
return 0x68a886;}
case 0x68a886:{ // MOVAPS XMM0,XMM1
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68a889;}
case 0x68a889:{ // SHUFPS XMM1,XMM1,0x1
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a88d;}
case 0x68a88d:{ // SUBSS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_SUB",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
return 0x68a891;}
case 0x68a891:{ // MOVSS dword ptr [EBP + -0x20],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a896;}
case 0x68a896:{ // FLD float ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x68a896ull));
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
return 0x68a899;}
case 0x68a899:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68a89b;}
case 0x68a89b:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a89c;}
case 0x68a89c:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68a89e;}
case 0x68a89e:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a89f;}
case 0x68a89f:{ // RET 0x4
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x68a8a2;}
case 0x68a8a4:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a8a6;}
case 0x68a8a6:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a8a7;}
case 0x68a8a7:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a8a9;}
case 0x68a8a9:{ // SUB ESP,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a8ac;}
case 0x68a8ac:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a8af;}
case 0x68a8af:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a8b2;}
case 0x68a8b2:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a8b3;}
case 0x68a8b3:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a8b4;}
case 0x68a8b4:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a8b7;}
case 0x68a8b7:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68a8bb;}
case 0x68a8bb:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a8bd;}
case 0x68a8bd:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68a8c0;}
case 0x68a8c0:{ // MOV EDX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a8c3;}
case 0x68a8c3:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a8c6;}
case 0x68a8c6:{ // MOVSS XMM0,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a8cb;}
case 0x68a8cb:{ // MOVSS XMM1,dword ptr [ECX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a8d0;}
case 0x68a8d0:{ // MOVHPS XMM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a8d3;}
case 0x68a8d3:{ // MOVHPS XMM1,qword ptr [ECX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x4)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a8d6;}
case 0x68a8d6:{ // MOV EDX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a8d9;}
case 0x68a8d9:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a8dc;}
case 0x68a8dc:{ // MOVSS XMM2,dword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68a8e1;}
case 0x68a8e1:{ // MOVHPS XMM2,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1288,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68a8e4;}
case 0x68a8e4:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a8e7;}
case 0x68a8e7:{ // SUBPS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_SUB",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1204,float_op("FLOAT_SUB",r<4>(c,0x1204),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1208,float_op("FLOAT_SUB",r<4>(c,0x1208),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x120c,float_op("FLOAT_SUB",r<4>(c,0x120c),4,r<4>(c,0x124c),4,4));
return 0x68a8ea;}
case 0x68a8ea:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a8ed;}
case 0x68a8ed:{ // SHUFPS XMM0,XMM0,0x78
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a8f1;}
case 0x68a8f1:{ // SHUFPS XMM1,XMM1,0x63
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a8f5;}
case 0x68a8f5:{ // MOVAPS XMM4,XMM3
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68a8f8;}
case 0x68a8f8:{ // SUBPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a8fb;}
case 0x68a8fb:{ // MOVAPS XMM2,xmmword ptr [0x007baac0]
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(m<16>(c,0x7baac0)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a902;}
case 0x68a902:{ // MOVAPS XMM5,XMM3
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68a905;}
case 0x68a905:{ // SHUFPS XMM3,XMM3,0x63
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a909;}
case 0x68a909:{ // SHUFPS XMM5,XMM5,0x78
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a90d;}
case 0x68a90d:{ // MULPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68a910;}
case 0x68a910:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68a913;}
case 0x68a913:{ // MOVAPS XMM1,xmmword ptr [0x007baad0]
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(m<16>(c,0x7baad0)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68a91a;}
case 0x68a91a:{ // SUBPS XMM0,XMM5
wr<4>(c,0x1200,float_op("FLOAT_SUB",r<4>(c,0x1200),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1204,float_op("FLOAT_SUB",r<4>(c,0x1204),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1208,float_op("FLOAT_SUB",r<4>(c,0x1208),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x120c,float_op("FLOAT_SUB",r<4>(c,0x120c),4,r<4>(c,0x134c),4,4));
return 0x68a91d;}
case 0x68a91d:{ // SHUFPS XMM4,XMM4,0xe
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a921;}
case 0x68a921:{ // MOVAPS XMM3,XMM0
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a924;}
case 0x68a924:{ // MULPS XMM0,XMM0
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x120c),4,4));
return 0x68a927;}
case 0x68a927:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a92a;}
case 0x68a92a:{ // MOVHLPS XMM0,XMM0
wr<8>(c,0x1200,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x68a92d;}
case 0x68a92d:{ // ADDPS XMM5,XMM0
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x120c),4,4));
return 0x68a930;}
case 0x68a930:{ // MOVAPS XMM0,XMM5
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68a933;}
case 0x68a933:{ // SHUFPS XMM5,XMM5,0x1
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a937;}
case 0x68a937:{ // ADDSS XMM0,XMM5
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1340),4,4));
return 0x68a93b;}
case 0x68a93b:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68a93e;}
case 0x68a93e:{ // RSQRTSS XMM0,XMM0
wr<16>(c,0x1200,user_op(c,1048752,{r<16>(c,0x1200),r<16>(c,0x1200)}));
return 0x68a942;}
case 0x68a942:{ // MULSS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
return 0x68a946;}
case 0x68a946:{ // MOVAPS XMM6,XMM5
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68a949;}
case 0x68a949:{ // MULSS XMM5,XMM0
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1200),4,4));
return 0x68a94d;}
case 0x68a94d:{ // MULSS XMM5,XMM0
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1200),4,4));
return 0x68a951;}
case 0x68a951:{ // SUBSS XMM2,XMM5
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,r<4>(c,0x1340),4,4));
return 0x68a955;}
case 0x68a955:{ // MULSS XMM1,XMM2
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1280),4,4));
return 0x68a959;}
case 0x68a959:{ // SHUFPS XMM1,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a95d;}
case 0x68a95d:{ // MULPS XMM3,XMM1
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x124c),4,4));
return 0x68a960;}
case 0x68a960:{ // MULPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68a963;}
case 0x68a963:{ // MOVUPS xmmword ptr [EAX],XMM3
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x68a966;}
case 0x68a966:{ // MOVHLPS XMM6,XMM4
wr<8>(c,0x1380,eval<Op::COPY,8,8>(r<8>(c,0x1308)));
return 0x68a969;}
case 0x68a969:{ // MOVAPS XMM0,XMM4
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68a96c;}
case 0x68a96c:{ // SHUFPS XMM4,XMM4,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a970;}
case 0x68a970:{ // ADDSS XMM6,XMM4
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1300),4,4));
return 0x68a974;}
case 0x68a974:{ // ADDSS XMM0,XMM6
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1380),4,4));
return 0x68a978;}
case 0x68a978:{ // XORPS XMM0,xmmword ptr [0x0080ab60]
wu<16>(c,0x13c600,eval<Op::COPY,16,16>(m<16>(c,0x80ab60)));
wr<4>(c,0x1200,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1200),u<4>(c,0x13c600)));
wr<4>(c,0x1204,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1204),u<4>(c,0x13c604)));
wr<4>(c,0x1208,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1208),u<4>(c,0x13c608)));
wr<4>(c,0x120c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x120c),u<4>(c,0x13c60c)));
return 0x68a97f;}
case 0x68a97f:{ // MOVSS dword ptr [EAX + 0xc],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x68a984;}
case 0x68a984:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68a986;}
case 0x68a986:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a987;}
case 0x68a987:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68a989;}
case 0x68a989:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68a98a;}
case 0x68a98a:{ // RET 0x10
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
return uint32_t(r<4>(c,0x284));
return 0x68a98d;}
case 0x68a990:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68a992;}
case 0x68a992:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a993;}
case 0x68a993:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68a995;}
case 0x68a995:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68a996;}
case 0x68a996:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a999;}
case 0x68a999:{ // MOVUPS XMM1,xmmword ptr [EAX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x0)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a99c;}
case 0x68a99c:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68a99f;}
case 0x68a99f:{ // LEA EBX,[0x80ac60]
wr<4>(c,0xc,eval<Op::COPY,4,4>(0x80ac60ull));
return 0x68a9a5;}
case 0x68a9a5:{ // ANDPS XMM2,xmmword ptr [EBX + 0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbdc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1280),u<4>(c,0xbdc00)));
wr<4>(c,0x1284,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1284),u<4>(c,0xbdc04)));
wr<4>(c,0x1288,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1288),u<4>(c,0xbdc08)));
wr<4>(c,0x128c,eval<Op::INT_AND,4,4,4>(r<4>(c,0x128c),u<4>(c,0xbdc0c)));
return 0x68a9a9;}
case 0x68a9a9:{ // MULPS XMM2,XMM2
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x128c),4,4));
return 0x68a9ac;}
case 0x68a9ac:{ // MOVHLPS XMM3,XMM2
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
return 0x68a9af;}
case 0x68a9af:{ // ADDPS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x128c),4,4));
return 0x68a9b2;}
case 0x68a9b2:{ // MOVAPS XMM2,XMM3
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68a9b5;}
case 0x68a9b5:{ // SHUFPS XMM2,XMM2,0x1
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a9b9;}
case 0x68a9b9:{ // ADDSS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
return 0x68a9bd;}
case 0x68a9bd:{ // XORPS XMM0,XMM0
wr<4>(c,0x1200,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1200),r<4>(c,0x1200)));
wr<4>(c,0x1204,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1204),r<4>(c,0x1204)));
wr<4>(c,0x1208,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1208),r<4>(c,0x1208)));
wr<4>(c,0x120c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x120c),r<4>(c,0x120c)));
return 0x68a9c0;}
case 0x68a9c0:{ // COMISS XMM2,XMM0
wu<1>(c,0x4ff00,float_op("FLOAT_NAN",r<4>(c,0x1280),4,0x0ull,4,1));
wu<1>(c,0x50000,float_op("FLOAT_NAN",r<4>(c,0x1200),4,0x0ull,4,1));
wr<1>(c,0x202,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4ff00),u<1>(c,0x50000)));
wu<1>(c,0x50200,float_op("FLOAT_EQUAL",r<4>(c,0x1280),4,r<4>(c,0x1200),4,1));
wr<1>(c,0x206,eval<Op::INT_OR,1,1,1>(r<1>(c,0x202),u<1>(c,0x50200)));
wu<1>(c,0x50400,float_op("FLOAT_LESS",r<4>(c,0x1280),4,r<4>(c,0x1200),4,1));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(r<1>(c,0x202),u<1>(c,0x50400)));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x204,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x207,eval<Op::COPY,1,1>(0x0ull));
return 0x68a9c3;}
case 0x68a9c3:{ // JZ 0x0068a9f6
if(r<1>(c,0x206)){return 0x68a9f6;}
return 0x68a9c5;}
case 0x68a9c5:{ // MOVAPS XMM6,XMM2
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68a9c8;}
case 0x68a9c8:{ // RSQRTSS XMM2,XMM6
wr<16>(c,0x1280,user_op(c,1048752,{r<16>(c,0x1280),r<16>(c,0x1380)}));
return 0x68a9cc;}
case 0x68a9cc:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68a9cf;}
case 0x68a9cf:{ // MULSS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
return 0x68a9d3;}
case 0x68a9d3:{ // MULSS XMM6,XMM2
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1280),4,4));
return 0x68a9d7;}
case 0x68a9d7:{ // MULSS XMM2,dword ptr [0x007baad0]
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,m<4>(c,0x7baad0),4,4));
return 0x68a9df;}
case 0x68a9df:{ // MOVSS XMM3,dword ptr [0x007baac0]
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(m<4>(c,0x7baac0)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68a9e7;}
case 0x68a9e7:{ // SUBSS XMM3,XMM6
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x1380),4,4));
return 0x68a9eb;}
case 0x68a9eb:{ // MULSS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
return 0x68a9ef;}
case 0x68a9ef:{ // SHUFPS XMM2,XMM2,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68a9f3;}
case 0x68a9f3:{ // MULPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68a9f6;}
case 0x68a9f6:{ // MOV ECX,dword ptr [EBP + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68a9f9;}
case 0x68a9f9:{ // MOVUPS XMM4,xmmword ptr [ECX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0x4)));
wu<16>(c,0xdbf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdbf00)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdbf04)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdbf08)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdbf0c)));
return 0x68a9fc;}
case 0x68a9fc:{ // MOVAPS XMM5,XMM4
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68a9ff;}
case 0x68a9ff:{ // MULPS XMM5,XMM2
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x128c),4,4));
return 0x68aa02;}
case 0x68aa02:{ // MOVHLPS XMM3,XMM5
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(r<8>(c,0x1348)));
return 0x68aa05;}
case 0x68aa05:{ // ADDPS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x12cc),4,4));
return 0x68aa08;}
case 0x68aa08:{ // MOVAPS XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68aa0b;}
case 0x68aa0b:{ // SHUFPS XMM3,XMM3,0x1
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aa0f;}
case 0x68aa0f:{ // ADDSS XMM5,XMM3
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x12c0),4,4));
return 0x68aa13;}
case 0x68aa13:{ // SHUFPS XMM5,XMM5,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aa17;}
case 0x68aa17:{ // XORPS XMM2,xmmword ptr [EBX]
wu<16>(c,0xa600,m<16>(c,r<4>(c,0xc)));
wu<16>(c,0x13c600,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1280),u<4>(c,0x13c600)));
wr<4>(c,0x1284,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1284),u<4>(c,0x13c604)));
wr<4>(c,0x1288,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1288),u<4>(c,0x13c608)));
wr<4>(c,0x128c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x128c),u<4>(c,0x13c60c)));
return 0x68aa1a;}
case 0x68aa1a:{ // MOVAPS XMM0,XMM2
wr<4>(c,0x1200,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68aa1d;}
case 0x68aa1d:{ // MOVAPS XMM1,XMM2
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68aa20;}
case 0x68aa20:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68aa23;}
case 0x68aa23:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aa27;}
case 0x68aa27:{ // SHUFPS XMM1,XMM1,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aa2b;}
case 0x68aa2b:{ // SHUFPS XMM2,XMM2,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aa2f;}
case 0x68aa2f:{ // SHUFPS XMM3,XMM3,0xff
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aa33;}
case 0x68aa33:{ // MULPS XMM0,XMM4
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x130c),4,4));
return 0x68aa36;}
case 0x68aa36:{ // MULPS XMM1,XMM4
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x130c),4,4));
return 0x68aa39;}
case 0x68aa39:{ // MULPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68aa3c;}
case 0x68aa3c:{ // MULPS XMM3,XMM4
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x130c),4,4));
return 0x68aa3f;}
case 0x68aa3f:{ // ADDSS XMM0,XMM5
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,r<4>(c,0x1340),4,4));
return 0x68aa43;}
case 0x68aa43:{ // MOVAPS XMM6,XMM5
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68aa46;}
case 0x68aa46:{ // MOVAPS XMM7,XMM5
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68aa49;}
case 0x68aa49:{ // ANDPS XMM5,xmmword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbdc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1340),u<4>(c,0xbdc00)));
wr<4>(c,0x1344,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1344),u<4>(c,0xbdc04)));
wr<4>(c,0x1348,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1348),u<4>(c,0xbdc08)));
wr<4>(c,0x134c,eval<Op::INT_AND,4,4,4>(r<4>(c,0x134c),u<4>(c,0xbdc0c)));
return 0x68aa4d;}
case 0x68aa4d:{ // ANDPS XMM6,xmmword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbdc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1380),u<4>(c,0xbdc00)));
wr<4>(c,0x1384,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1384),u<4>(c,0xbdc04)));
wr<4>(c,0x1388,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1388),u<4>(c,0xbdc08)));
wr<4>(c,0x138c,eval<Op::INT_AND,4,4,4>(r<4>(c,0x138c),u<4>(c,0xbdc0c)));
return 0x68aa51;}
case 0x68aa51:{ // ANDPS XMM7,xmmword ptr [EBX + 0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x30ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xbdc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x13c0),u<4>(c,0xbdc00)));
wr<4>(c,0x13c4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x13c4),u<4>(c,0xbdc04)));
wr<4>(c,0x13c8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x13c8),u<4>(c,0xbdc08)));
wr<4>(c,0x13cc,eval<Op::INT_AND,4,4,4>(r<4>(c,0x13cc),u<4>(c,0xbdc0c)));
return 0x68aa55;}
case 0x68aa55:{ // ADDPS XMM1,XMM5
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,r<4>(c,0x134c),4,4));
return 0x68aa58;}
case 0x68aa58:{ // ADDPS XMM2,XMM6
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x138c),4,4));
return 0x68aa5b;}
case 0x68aa5b:{ // ADDPS XMM3,XMM7
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x13cc),4,4));
return 0x68aa5e;}
case 0x68aa5e:{ // MOV EDX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aa61;}
case 0x68aa61:{ // MOVLPS qword ptr [EDX],XMM0
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,r<4>(c,0x8),u<8>(c,0xa400));
return 0x68aa64;}
case 0x68aa64:{ // MOVHPS qword ptr [EDX + 0x8],XMM0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68aa68;}
case 0x68aa68:{ // MOVLPS qword ptr [EDX + 0x10],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x10ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68aa6c;}
case 0x68aa6c:{ // MOVHPS qword ptr [EDX + 0x18],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x18ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68aa70;}
case 0x68aa70:{ // MOVLPS qword ptr [EDX + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x20ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68aa74;}
case 0x68aa74:{ // MOVHPS qword ptr [EDX + 0x28],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x28ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1288)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68aa78;}
case 0x68aa78:{ // MOVLPS qword ptr [EDX + 0x30],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x30ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68aa7c;}
case 0x68aa7c:{ // MOVHPS qword ptr [EDX + 0x38],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x38ull));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x12c8)));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xa400));
return 0x68aa80;}
case 0x68aa80:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aa83;}
case 0x68aa83:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68aa84;}
case 0x68aa84:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68aa85;}
case 0x68aa85:{ // RET 0xc
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
return uint32_t(r<4>(c,0x284));
return 0x68aa88;}
case 0x68aa88:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68aa8a;}
case 0x68aa8a:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68aa8b;}
case 0x68aa8b:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68aa8d;}
case 0x68aa8d:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68aa8e;}
case 0x68aa8e:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68aa8f;}
case 0x68aa8f:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aa92;}
case 0x68aa92:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68aa96;}
case 0x68aa96:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68aa98;}
case 0x68aa98:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68aa9b;}
case 0x68aa9b:{ // MOV EDX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aa9e;}
case 0x68aa9e:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aaa1;}
case 0x68aaa1:{ // MOVHPS XMM0,qword ptr [EDX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x8ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68aaa5;}
case 0x68aaa5:{ // MOVLPS XMM0,qword ptr [EDX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x8)));
wr<8>(c,0x1200,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68aaa8;}
case 0x68aaa8:{ // MOVAPS XMM1,xmmword ptr [0x0080ab70]
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(m<16>(c,0x80ab70)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68aaaf;}
case 0x68aaaf:{ // ANDPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1240),r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1244),r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1248),r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::INT_AND,4,4,4>(r<4>(c,0x124c),r<4>(c,0x120c)));
return 0x68aab2;}
case 0x68aab2:{ // MULPS XMM1,XMM1
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x124c),4,4));
return 0x68aab5;}
case 0x68aab5:{ // MOVSS XMM2,dword ptr [0x007baac0]
wr<4>(c,0x1280,eval<Op::COPY,4,4>(m<4>(c,0x7baac0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68aabd;}
case 0x68aabd:{ // MOVSS XMM3,dword ptr [0x007baad0]
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(m<4>(c,0x7baad0)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68aac5;}
case 0x68aac5:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68aac8;}
case 0x68aac8:{ // MOVHLPS XMM1,XMM1
wr<8>(c,0x1240,eval<Op::COPY,8,8>(r<8>(c,0x1248)));
return 0x68aacb;}
case 0x68aacb:{ // ADDPS XMM4,XMM1
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x124c),4,4));
return 0x68aace;}
case 0x68aace:{ // MOVAPS XMM1,XMM4
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68aad1;}
case 0x68aad1:{ // SHUFPS XMM4,XMM4,0x1
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aad5;}
case 0x68aad5:{ // ADDSS XMM1,XMM4
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x1300),4,4));
return 0x68aad9;}
case 0x68aad9:{ // MOVAPS XMM4,xmmword ptr [0x0080ab80]
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(m<16>(c,0x80ab80)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68aae0;}
case 0x68aae0:{ // MOVAPS XMM5,XMM1
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68aae3;}
case 0x68aae3:{ // RSQRTSS XMM1,XMM1
wr<16>(c,0x1240,user_op(c,1048752,{r<16>(c,0x1240),r<16>(c,0x1240)}));
return 0x68aae7;}
case 0x68aae7:{ // MULSS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
return 0x68aaeb;}
case 0x68aaeb:{ // MULSS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
return 0x68aaef;}
case 0x68aaef:{ // SUBSS XMM2,XMM5
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,r<4>(c,0x1340),4,4));
return 0x68aaf3;}
case 0x68aaf3:{ // MULSS XMM3,XMM1
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1240),4,4));
return 0x68aaf7;}
case 0x68aaf7:{ // MULSS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
return 0x68aafb;}
case 0x68aafb:{ // SHUFPS XMM3,XMM3,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aaff;}
case 0x68aaff:{ // MULPS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x12cc),4,4));
return 0x68ab02;}
case 0x68ab02:{ // MULPS XMM4,XMM0
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x120c),4,4));
return 0x68ab05;}
case 0x68ab05:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ab08;}
case 0x68ab08:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ab0c;}
case 0x68ab0c:{ // MULPS XMM0,XMM4
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x130c),4,4));
return 0x68ab0f;}
case 0x68ab0f:{ // ADDPS XMM0,xmmword ptr [0x0080abc0]
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(m<16>(c,0x80abc0)));
wr<4>(c,0x1200,float_op("FLOAT_ADD",r<4>(c,0x1200),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1204,float_op("FLOAT_ADD",r<4>(c,0x1204),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1208,float_op("FLOAT_ADD",r<4>(c,0x1208),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x120c,float_op("FLOAT_ADD",r<4>(c,0x120c),4,u<4>(c,0xbbc0c),4,4));
return 0x68ab16;}
case 0x68ab16:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68ab19;}
case 0x68ab19:{ // SHUFPS XMM1,XMM1,0xff
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ab1d;}
case 0x68ab1d:{ // MULPS XMM1,XMM4
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x130c),4,4));
return 0x68ab20;}
case 0x68ab20:{ // ADDPS XMM1,xmmword ptr [0x0080ab90]
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(m<16>(c,0x80ab90)));
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,u<4>(c,0xbbc0c),4,4));
return 0x68ab27;}
case 0x68ab27:{ // MOVAPS XMM3,XMM2
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68ab2a;}
case 0x68ab2a:{ // SHUFPS XMM2,XMM2,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ab2e;}
case 0x68ab2e:{ // MULPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68ab31;}
case 0x68ab31:{ // ADDPS XMM2,xmmword ptr [0x0080aba0]
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(m<16>(c,0x80aba0)));
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,u<4>(c,0xbbc0c),4,4));
return 0x68ab38;}
case 0x68ab38:{ // SHUFPS XMM3,XMM3,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ab3c;}
case 0x68ab3c:{ // MULPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68ab3f;}
case 0x68ab3f:{ // ADDPS XMM4,xmmword ptr [0x0080abb0]
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(m<16>(c,0x80abb0)));
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,u<4>(c,0xbbc0c),4,4));
return 0x68ab46;}
case 0x68ab46:{ // MOVUPS xmmword ptr [EAX],XMM0
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,r<4>(c,0x0),u<16>(c,0xa600));
return 0x68ab49;}
case 0x68ab49:{ // MOVUPS xmmword ptr [EAX + 0x10],XMM4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ab4d;}
case 0x68ab4d:{ // MOVUPS xmmword ptr [EAX + 0x20],XMM2
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ab51;}
case 0x68ab51:{ // MOVUPS xmmword ptr [EAX + 0x30],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ab55;}
case 0x68ab55:{ // MOV ESP,EBP
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
return 0x68ab57;}
case 0x68ab57:{ // POP EBP
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68ab58;}
case 0x68ab58:{ // MOV ESP,EBX
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x68ab5a;}
case 0x68ab5a:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x68ab5b;}
case 0x68ab5b:{ // RET 0x8
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
return uint32_t(r<4>(c,0x284));
return 0x68ab5e;}
case 0x68ab60:{ // MOV EDI,EDI
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x68ab62;}
case 0x68ab62:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ab63;}
case 0x68ab63:{ // MOV EBX,ESP
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68ab65;}
case 0x68ab65:{ // SUB ESP,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ab68;}
case 0x68ab68:{ // AND ESP,0xfffffff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xfffffff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ab6b;}
case 0x68ab6b:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ab6e;}
case 0x68ab6e:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ab6f;}
case 0x68ab6f:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x68ab70;}
case 0x68ab70:{ // MOV EBP,dword ptr [EBX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x14,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ab73;}
case 0x68ab73:{ // MOV dword ptr [ESP + 0x4],EBP
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68ab77;}
case 0x68ab77:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x68ab79;}
case 0x68ab79:{ // SUB ESP,0x2d0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x2d0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x2d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x2d0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ab7f;}
case 0x68ab7f:{ // MOV dword ptr [ESP + 0x8],EDI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68ab83;}
case 0x68ab83:{ // MOV dword ptr [ESP + 0x4],ESI
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x68ab87;}
case 0x68ab87:{ // MOV EAX,dword ptr [EBX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ab8a;}
case 0x68ab8a:{ // MOV EDI,dword ptr [EBX + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ab8d;}
case 0x68ab8d:{ // MOVSS XMM0,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ab92;}
case 0x68ab92:{ // MOV dword ptr [EBP + 0xffffff5c],EAX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68ab98;}
case 0x68ab98:{ // MOV ESI,dword ptr [EBX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x20ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ab9b;}
case 0x68ab9b:{ // MOVAPS xmmword ptr [EBP + 0xfffffd40],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68aba2;}
case 0x68aba2:{ // MOVHPS XMM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68aba5;}
case 0x68aba5:{ // MOV EAX,dword ptr [EBX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aba8;}
case 0x68aba8:{ // MOV ECX,dword ptr [EBX + 0x24]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x24ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68abab;}
case 0x68abab:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68abae;}
case 0x68abae:{ // MOV dword ptr [EBP + 0xffffff58],ECX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff58ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68abb4;}
case 0x68abb4:{ // MOV ECX,dword ptr [EBX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68abb7;}
case 0x68abb7:{ // SHUFPS XMM1,XMM0,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68abbb;}
case 0x68abbb:{ // MOV dword ptr [EBP + 0xffffff70],ECX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68abc1;}
case 0x68abc1:{ // MOV ECX,dword ptr [EBX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68abc4;}
case 0x68abc4:{ // MOVAPS xmmword ptr [EBP + 0xfffffd40],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68abcb;}
case 0x68abcb:{ // MOV dword ptr [EBP + 0xffffff74],ECX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff74ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68abd1;}
case 0x68abd1:{ // MOV EDX,dword ptr [EBX + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68abd4;}
case 0x68abd4:{ // MOVSS XMM0,dword ptr [EDI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68abd9;}
case 0x68abd9:{ // MOVAPS xmmword ptr [EBP + 0xfffffda0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68abe0;}
case 0x68abe0:{ // MOVHPS XMM0,qword ptr [EDI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x1c)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68abe3;}
case 0x68abe3:{ // SHUFPS XMM0,XMM0,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68abe7;}
case 0x68abe7:{ // MOVAPS xmmword ptr [EBP + 0xfffffda0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68abee;}
case 0x68abee:{ // MOVSS XMM0,dword ptr [ESI + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68abf3;}
case 0x68abf3:{ // MOVAPS xmmword ptr [EBP + 0xfffffdd0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68abfa;}
case 0x68abfa:{ // MOVHPS XMM0,qword ptr [ESI]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x18)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68abfd;}
case 0x68abfd:{ // SHUFPS XMM0,XMM0,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ac01;}
case 0x68ac01:{ // MOVAPS xmmword ptr [EBP + 0xfffffdd0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ac08;}
case 0x68ac08:{ // MOVSS XMM0,dword ptr [EAX + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ac0d;}
case 0x68ac0d:{ // MOVAPS xmmword ptr [EBP + 0xfffffde0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffde0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ac14;}
case 0x68ac14:{ // MOVHPS XMM0,qword ptr [EAX]
wu<8>(c,0xa400,m<8>(c,r<4>(c,0x0)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ac17;}
case 0x68ac17:{ // MOVAPS XMM1,XMM0
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ac1a;}
case 0x68ac1a:{ // SHUFPS XMM1,XMM0,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ac1e;}
case 0x68ac1e:{ // MOVAPS xmmword ptr [EBP + 0xfffffde0],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffde0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ac25;}
case 0x68ac25:{ // MOVSS XMM0,dword ptr [EAX + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ac2a;}
case 0x68ac2a:{ // MOVAPS XMM4,xmmword ptr [EBP + 0xfffffda0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ac31;}
case 0x68ac31:{ // MOVAPS xmmword ptr [EBP + 0xfffffdf0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdf0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ac38;}
case 0x68ac38:{ // MOVHPS XMM0,qword ptr [EAX + 0xc]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xcull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1208,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ac3c;}
case 0x68ac3c:{ // SHUFPS XMM0,XMM0,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ac40;}
case 0x68ac40:{ // MOVAPS xmmword ptr [EBP + 0xfffffdf0],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdf0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1200)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ac47;}
case 0x68ac47:{ // MOVSS XMM1,dword ptr [EAX + 0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x20ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68ac4c;}
case 0x68ac4c:{ // MOVAPS XMM5,XMM0
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ac4f;}
case 0x68ac4f:{ // MOVAPS xmmword ptr [EBP + 0xfffffe00],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe00ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ac56;}
case 0x68ac56:{ // MOVHPS XMM1,qword ptr [EAX + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x18ull));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x6600)));
wr<8>(c,0x1248,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x68ac5a;}
case 0x68ac5a:{ // MOVAPS XMM6,XMM0
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ac5d;}
case 0x68ac5d:{ // SHUFPS XMM1,XMM1,0x4e
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ac61;}
case 0x68ac61:{ // MOVAPS XMM7,XMM0
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
return 0x68ac64;}
case 0x68ac64:{ // MOVAPS xmmword ptr [EBP + 0xfffffe00],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe00ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ac6b;}
case 0x68ac6b:{ // MOVAPS XMM3,xmmword ptr [EBP + 0xfffffd40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ac72;}
case 0x68ac72:{ // SUBPS XMM3,xmmword ptr [EBP + 0xfffffda0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0x13b200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,u<4>(c,0x13b200),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,u<4>(c,0x13b204),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,u<4>(c,0x13b208),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,u<4>(c,0x13b20c),4,4));
return 0x68ac79;}
case 0x68ac79:{ // MOVAPS XMM2,xmmword ptr [EBP + 0xfffffde0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffde0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ac80;}
case 0x68ac80:{ // MULPS XMM3,xmmword ptr [0x0080abe0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80abe0)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68ac87;}
case 0x68ac87:{ // MULPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68ac8a;}
case 0x68ac8a:{ // MOVAPS xmmword ptr [EBP + -0x40],XMM7
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ac8e;}
case 0x68ac8e:{ // MOVAPS XMM7,xmmword ptr [EBP + 0xfffffd40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ac95;}
case 0x68ac95:{ // SUBPS XMM7,xmmword ptr [EBP + 0xfffffdd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0x13b200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_SUB",r<4>(c,0x13c0),4,u<4>(c,0x13b200),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_SUB",r<4>(c,0x13c4),4,u<4>(c,0x13b204),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_SUB",r<4>(c,0x13c8),4,u<4>(c,0x13b208),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_SUB",r<4>(c,0x13cc),4,u<4>(c,0x13b20c),4,4));
return 0x68ac9c;}
case 0x68ac9c:{ // MULPS XMM7,xmmword ptr [0x0080abe0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80abe0)));
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,u<4>(c,0xdc50c),4,4));
return 0x68aca3;}
case 0x68aca3:{ // MOVAPS xmmword ptr [EBP + 0xfffffd50],XMM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68acaa;}
case 0x68acaa:{ // MOVAPS xmmword ptr [EBP + -0x30],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68acae;}
case 0x68acae:{ // MOVAPS XMM6,xmmword ptr [EBP + 0xfffffde0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffde0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68acb5;}
case 0x68acb5:{ // MULPS XMM6,XMM7
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x13cc),4,4));
return 0x68acb8;}
case 0x68acb8:{ // MOVAPS xmmword ptr [EBP + 0xfffffd60],XMM6
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68acbf;}
case 0x68acbf:{ // MOVAPS xmmword ptr [EBP + -0x20],XMM5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1340)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68acc3;}
case 0x68acc3:{ // MOVAPS XMM5,XMM2
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
return 0x68acc6;}
case 0x68acc6:{ // MOVHLPS XMM5,XMM6
wr<8>(c,0x1340,eval<Op::COPY,8,8>(r<8>(c,0x1388)));
return 0x68acc9;}
case 0x68acc9:{ // MOVLHPS XMM6,XMM2
wr<8>(c,0x1388,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
return 0x68accc;}
case 0x68accc:{ // ADDPS XMM5,XMM6
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x138c),4,4));
return 0x68accf;}
case 0x68accf:{ // SHUFPS XMM6,XMM6,0xf5
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68acd3;}
case 0x68acd3:{ // ADDPS XMM5,XMM6
wr<4>(c,0x1340,float_op("FLOAT_ADD",r<4>(c,0x1340),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1344,float_op("FLOAT_ADD",r<4>(c,0x1344),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1348,float_op("FLOAT_ADD",r<4>(c,0x1348),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x134c,float_op("FLOAT_ADD",r<4>(c,0x134c),4,r<4>(c,0x138c),4,4));
return 0x68acd6;}
case 0x68acd6:{ // MOVAPS XMM2,xmmword ptr [EBP + 0xfffffd40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1280,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68acdd;}
case 0x68acdd:{ // SUBPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_SUB",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_SUB",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_SUB",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68ace0;}
case 0x68ace0:{ // MOVAPS XMM3,XMM5
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68ace3;}
case 0x68ace3:{ // SHUFPS XMM3,XMM3,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ace7;}
case 0x68ace7:{ // SHUFPS XMM5,XMM5,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68aceb;}
case 0x68aceb:{ // MULPS XMM3,xmmword ptr [EBP + 0xfffffde0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffde0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68acf2;}
case 0x68acf2:{ // ADDPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68acf5;}
case 0x68acf5:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68acf8;}
case 0x68acf8:{ // MOVAPS xmmword ptr [EBP + 0xfffffd50],XMM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd50ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68acff;}
case 0x68acff:{ // MULPS XMM5,xmmword ptr [EBP + 0xfffffde0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffde0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68ad06;}
case 0x68ad06:{ // MOVAPS xmmword ptr [EBP + -0x50],XMM3
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ad0a;}
case 0x68ad0a:{ // MOVAPS XMM3,xmmword ptr [EBP + 0xfffffd40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ad11;}
case 0x68ad11:{ // SUBPS XMM3,XMM7
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x13cc),4,4));
return 0x68ad14;}
case 0x68ad14:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68ad17;}
case 0x68ad17:{ // ADDPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68ad1a;}
case 0x68ad1a:{ // MOVAPS xmmword ptr [EBP + -0x60],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ad1e;}
case 0x68ad1e:{ // MOVAPS xmmword ptr [EBP + 0xfffffd60],XMM3
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd60ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ad25;}
case 0x68ad25:{ // MOVAPS XMM5,xmmword ptr [EBP + 0xfffffd40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ad2c;}
case 0x68ad2c:{ // MOVAPS XMM6,XMM1
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68ad2f;}
case 0x68ad2f:{ // MOVAPS xmmword ptr [EBP + -0x70],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ad33;}
case 0x68ad33:{ // MOVAPS XMM6,XMM4
wr<4>(c,0x1380,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
return 0x68ad36;}
case 0x68ad36:{ // SUBPS XMM6,XMM5
wr<4>(c,0x1380,float_op("FLOAT_SUB",r<4>(c,0x1380),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1384,float_op("FLOAT_SUB",r<4>(c,0x1384),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1388,float_op("FLOAT_SUB",r<4>(c,0x1388),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x138c,float_op("FLOAT_SUB",r<4>(c,0x138c),4,r<4>(c,0x134c),4,4));
return 0x68ad39;}
case 0x68ad39:{ // MOVAPS xmmword ptr [EBP + -0x80],XMM6
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1380)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ad3d;}
case 0x68ad3d:{ // MOVAPS XMM5,xmmword ptr [EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ad41;}
case 0x68ad41:{ // MOVAPS XMM6,xmmword ptr [EBP + -0x30]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ad45;}
case 0x68ad45:{ // MOVAPS XMM7,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ad49;}
case 0x68ad49:{ // ADDPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68ad4c;}
case 0x68ad4c:{ // MOVAPS XMM3,xmmword ptr [EBP + -0x80]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ad50;}
case 0x68ad50:{ // SUBPS XMM4,xmmword ptr [EBP + 0xfffffdd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0x13b200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,u<4>(c,0x13b200),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,u<4>(c,0x13b204),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,u<4>(c,0x13b208),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,u<4>(c,0x13b20c),4,4));
return 0x68ad57;}
case 0x68ad57:{ // MULPS XMM3,xmmword ptr [0x0080abe0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80abe0)));
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,u<4>(c,0xdc50c),4,4));
return 0x68ad5e;}
case 0x68ad5e:{ // MULPS XMM4,xmmword ptr [0x0080abe0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80abe0)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68ad65;}
case 0x68ad65:{ // MULPS XMM7,XMM3
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x12cc),4,4));
return 0x68ad68;}
case 0x68ad68:{ // MULPS XMM6,XMM4
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x130c),4,4));
return 0x68ad6b;}
case 0x68ad6b:{ // MOVAPS xmmword ptr [EBP + -0x40],XMM1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6600),u<16>(c,0xa600));
return 0x68ad6f;}
case 0x68ad6f:{ // MOVAPS XMM1,XMM7
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68ad72;}
case 0x68ad72:{ // MOVHLPS XMM7,XMM6
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(r<8>(c,0x1388)));
return 0x68ad75;}
case 0x68ad75:{ // MOVLHPS XMM6,XMM1
wr<8>(c,0x1388,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x68ad78;}
case 0x68ad78:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68ad7b;}
case 0x68ad7b:{ // SHUFPS XMM6,XMM6,0xf5
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ad7f;}
case 0x68ad7f:{ // ADDPS XMM7,XMM6
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x138c),4,4));
return 0x68ad82;}
case 0x68ad82:{ // MOVAPS XMM1,xmmword ptr [EBP + 0xfffffda0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ad89;}
case 0x68ad89:{ // SUBPS XMM1,XMM4
wr<4>(c,0x1240,float_op("FLOAT_SUB",r<4>(c,0x1240),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1244,float_op("FLOAT_SUB",r<4>(c,0x1244),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1248,float_op("FLOAT_SUB",r<4>(c,0x1248),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x124c,float_op("FLOAT_SUB",r<4>(c,0x124c),4,r<4>(c,0x130c),4,4));
return 0x68ad8c;}
case 0x68ad8c:{ // MOVAPS XMM4,xmmword ptr [EBP + 0xfffffda0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ad93;}
case 0x68ad93:{ // SUBPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68ad96;}
case 0x68ad96:{ // MOVAPS XMM3,XMM7
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
return 0x68ad99;}
case 0x68ad99:{ // SHUFPS XMM7,XMM7,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x13c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x13cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ad9d;}
case 0x68ad9d:{ // SHUFPS XMM3,XMM3,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ada1;}
case 0x68ada1:{ // MULPS XMM7,XMM0
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x120c),4,4));
return 0x68ada4;}
case 0x68ada4:{ // MULPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68ada7;}
case 0x68ada7:{ // ADDPS XMM1,XMM7
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,r<4>(c,0x13cc),4,4));
return 0x68adaa;}
case 0x68adaa:{ // ADDPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68adad;}
case 0x68adad:{ // MOVAPS xmmword ptr [EBP + 0xfffffdb0],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1240)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68adb4;}
case 0x68adb4:{ // MOVAPS xmmword ptr [EBP + 0xfffffd70],XMM4
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd70ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68adbb;}
case 0x68adbb:{ // MOVAPS XMM0,xmmword ptr [EBP + 0xfffffd40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68adc2;}
case 0x68adc2:{ // MOVAPS XMM3,xmmword ptr [EBP + 0xfffffdd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68adc9;}
case 0x68adc9:{ // MOVAPS XMM5,xmmword ptr [0x0080abe0]
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(m<16>(c,0x80abe0)));
wr<4>(c,0x1340,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68add0;}
case 0x68add0:{ // MOVAPS XMM6,xmmword ptr [EBP + -0x70]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1384,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1388,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x138c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68add4;}
case 0x68add4:{ // MOVAPS XMM7,XMM3
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
return 0x68add7;}
case 0x68add7:{ // SUBPS XMM3,XMM0
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x120c),4,4));
return 0x68adda;}
case 0x68adda:{ // ADDPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68addd;}
case 0x68addd:{ // MULPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_MULT",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_MULT",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_MULT",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68ade0;}
case 0x68ade0:{ // MOVAPS XMM0,xmmword ptr [EBP + -0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffa0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ade4;}
case 0x68ade4:{ // MULPS XMM6,XMM3
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,r<4>(c,0x12cc),4,4));
return 0x68ade7;}
case 0x68ade7:{ // SUBPS XMM7,xmmword ptr [EBP + 0xfffffda0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0x13b200,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,float_op("FLOAT_SUB",r<4>(c,0x13c0),4,u<4>(c,0x13b200),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_SUB",r<4>(c,0x13c4),4,u<4>(c,0x13b204),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_SUB",r<4>(c,0x13c8),4,u<4>(c,0x13b208),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_SUB",r<4>(c,0x13cc),4,u<4>(c,0x13b20c),4,4));
return 0x68adee;}
case 0x68adee:{ // MULPS XMM7,XMM5
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x134c),4,4));
return 0x68adf1;}
case 0x68adf1:{ // MOVAPS XMM4,xmmword ptr [EBP + 0xfffffdd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68adf8;}
case 0x68adf8:{ // MULPS XMM0,XMM7
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x1204,float_op("FLOAT_MULT",r<4>(c,0x1204),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x1208,float_op("FLOAT_MULT",r<4>(c,0x1208),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x120c,float_op("FLOAT_MULT",r<4>(c,0x120c),4,r<4>(c,0x13cc),4,4));
return 0x68adfb;}
case 0x68adfb:{ // SUBPS XMM4,XMM3
wr<4>(c,0x1300,float_op("FLOAT_SUB",r<4>(c,0x1300),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1304,float_op("FLOAT_SUB",r<4>(c,0x1304),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1308,float_op("FLOAT_SUB",r<4>(c,0x1308),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x130c,float_op("FLOAT_SUB",r<4>(c,0x130c),4,r<4>(c,0x12cc),4,4));
return 0x68adfe;}
case 0x68adfe:{ // MOVAPS XMM3,XMM6
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68ae01;}
case 0x68ae01:{ // MOVHLPS XMM6,XMM0
wr<8>(c,0x1380,eval<Op::COPY,8,8>(r<8>(c,0x1208)));
return 0x68ae04;}
case 0x68ae04:{ // MOVLHPS XMM0,XMM3
wr<8>(c,0x1208,eval<Op::COPY,8,8>(r<8>(c,0x12c0)));
return 0x68ae07;}
case 0x68ae07:{ // MOVAPS XMM3,xmmword ptr [EBP + 0xfffffdd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ae0e;}
case 0x68ae0e:{ // ADDPS XMM6,XMM0
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x120c),4,4));
return 0x68ae11;}
case 0x68ae11:{ // SHUFPS XMM0,XMM0,0xf5
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ae15;}
case 0x68ae15:{ // SUBPS XMM3,XMM7
wr<4>(c,0x12c0,float_op("FLOAT_SUB",r<4>(c,0x12c0),4,r<4>(c,0x13c0),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_SUB",r<4>(c,0x12c4),4,r<4>(c,0x13c4),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_SUB",r<4>(c,0x12c8),4,r<4>(c,0x13c8),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_SUB",r<4>(c,0x12cc),4,r<4>(c,0x13cc),4,4));
return 0x68ae18;}
case 0x68ae18:{ // ADDPS XMM6,XMM0
wr<4>(c,0x1380,float_op("FLOAT_ADD",r<4>(c,0x1380),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1384,float_op("FLOAT_ADD",r<4>(c,0x1384),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1388,float_op("FLOAT_ADD",r<4>(c,0x1388),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x138c,float_op("FLOAT_ADD",r<4>(c,0x138c),4,r<4>(c,0x120c),4,4));
return 0x68ae1b;}
case 0x68ae1b:{ // MOVAPS XMM5,XMM6
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
return 0x68ae1e;}
case 0x68ae1e:{ // SHUFPS XMM6,XMM6,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1380)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1384)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1388)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x138c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ae22;}
case 0x68ae22:{ // SHUFPS XMM5,XMM5,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68ae26;}
case 0x68ae26:{ // MULPS XMM6,xmmword ptr [EBP + -0x50]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1380,float_op("FLOAT_MULT",r<4>(c,0x1380),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1384,float_op("FLOAT_MULT",r<4>(c,0x1384),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1388,float_op("FLOAT_MULT",r<4>(c,0x1388),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x138c,float_op("FLOAT_MULT",r<4>(c,0x138c),4,u<4>(c,0xdc50c),4,4));
return 0x68ae2a;}
case 0x68ae2a:{ // MOVAPS XMM0,xmmword ptr [0x0080ac20]
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(m<16>(c,0x80ac20)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ae31;}
case 0x68ae31:{ // ADDPS XMM4,XMM6
wr<4>(c,0x1300,float_op("FLOAT_ADD",r<4>(c,0x1300),4,r<4>(c,0x1380),4,4));
wr<4>(c,0x1304,float_op("FLOAT_ADD",r<4>(c,0x1304),4,r<4>(c,0x1384),4,4));
wr<4>(c,0x1308,float_op("FLOAT_ADD",r<4>(c,0x1308),4,r<4>(c,0x1388),4,4));
wr<4>(c,0x130c,float_op("FLOAT_ADD",r<4>(c,0x130c),4,r<4>(c,0x138c),4,4));
return 0x68ae34;}
case 0x68ae34:{ // ADDPS XMM2,XMM4
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x130c),4,4));
return 0x68ae37;}
case 0x68ae37:{ // MOVAPS xmmword ptr [EBP + 0xfffffd90],XMM4
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd90ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1300)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ae3e;}
case 0x68ae3e:{ // ADDPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68ae41;}
case 0x68ae41:{ // MOVAPS XMM1,xmmword ptr [EBP + -0x40]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6600)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ae45;}
case 0x68ae45:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68ae48;}
case 0x68ae48:{ // ADDPS XMM3,XMM5
wr<4>(c,0x12c0,float_op("FLOAT_ADD",r<4>(c,0x12c0),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x12c4,float_op("FLOAT_ADD",r<4>(c,0x12c4),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x12c8,float_op("FLOAT_ADD",r<4>(c,0x12c8),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x12cc,float_op("FLOAT_ADD",r<4>(c,0x12cc),4,r<4>(c,0x134c),4,4));
return 0x68ae4b;}
case 0x68ae4b:{ // ADDPS XMM2,XMM3
wr<4>(c,0x1280,float_op("FLOAT_ADD",r<4>(c,0x1280),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1284,float_op("FLOAT_ADD",r<4>(c,0x1284),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1288,float_op("FLOAT_ADD",r<4>(c,0x1288),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x128c,float_op("FLOAT_ADD",r<4>(c,0x128c),4,r<4>(c,0x12cc),4,4));
return 0x68ae4e;}
case 0x68ae4e:{ // MOVAPS xmmword ptr [EBP + 0xfffffdc0],XMM3
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdc0ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x12c0)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ae55;}
case 0x68ae55:{ // MOVAPS xmmword ptr [EBP + 0xfffffd80],XMM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd80ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ae5c;}
case 0x68ae5c:{ // MULPS XMM2,xmmword ptr [0x0080ac10]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80ac10)));
wr<4>(c,0x1280,float_op("FLOAT_MULT",r<4>(c,0x1280),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1284,float_op("FLOAT_MULT",r<4>(c,0x1284),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1288,float_op("FLOAT_MULT",r<4>(c,0x1288),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x128c,float_op("FLOAT_MULT",r<4>(c,0x128c),4,u<4>(c,0xdc50c),4,4));
return 0x68ae63;}
case 0x68ae63:{ // MOVAPS xmmword ptr [EBP + 0xfffffd80],XMM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd80ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ae6a;}
case 0x68ae6a:{ // MOVAPS XMM1,xmmword ptr [EBP + 0xfffffd40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68ae71;}
case 0x68ae71:{ // ADDPS XMM1,xmmword ptr [EBP + 0xfffffda0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,u<4>(c,0xbbc0c),4,4));
return 0x68ae78;}
case 0x68ae78:{ // ADDPS XMM1,xmmword ptr [EBP + 0xfffffdd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xbbc00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1240,float_op("FLOAT_ADD",r<4>(c,0x1240),4,u<4>(c,0xbbc00),4,4));
wr<4>(c,0x1244,float_op("FLOAT_ADD",r<4>(c,0x1244),4,u<4>(c,0xbbc04),4,4));
wr<4>(c,0x1248,float_op("FLOAT_ADD",r<4>(c,0x1248),4,u<4>(c,0xbbc08),4,4));
wr<4>(c,0x124c,float_op("FLOAT_ADD",r<4>(c,0x124c),4,u<4>(c,0xbbc0c),4,4));
return 0x68ae7f;}
case 0x68ae7f:{ // MULPS XMM1,XMM0
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x120c),4,4));
return 0x68ae82;}
case 0x68ae82:{ // SUBPS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1284,float_op("FLOAT_SUB",r<4>(c,0x1284),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1288,float_op("FLOAT_SUB",r<4>(c,0x1288),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x128c,float_op("FLOAT_SUB",r<4>(c,0x128c),4,r<4>(c,0x124c),4,4));
return 0x68ae85;}
case 0x68ae85:{ // MOVAPS xmmword ptr [EBP + 0xfffffd80],XMM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd80ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x1280)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68ae8c;}
case 0x68ae8c:{ // TEST EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68ae8e;}
case 0x68ae8e:{ // JBE 0x0068b0c6
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x68b0c6;}
return 0x68ae94;}
case 0x68ae94:{ // MOV EAX,dword ptr [EBP + 0xffffff58]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff58ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68ae9a;}
case 0x68ae9a:{ // MOV dword ptr [EBP + 0xffffff6c],ESI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff6cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68aea0;}
case 0x68aea0:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68aea2;}
case 0x68aea2:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x68aea4;}
case 0x68aea4:{ // MOV dword ptr [EBP + 0xffffff68],EDI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff68ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68aeaa;}
case 0x68aeaa:{ // LEA ECX,[ECX + EDX*0x8]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x68aead;}
case 0x68aead:{ // MOV dword ptr [EBP + 0xffffff64],EAX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff64ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68aeb3;}
case 0x68aeb3:{ // MOV dword ptr [EBP + 0xffffff60],ECX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68aeb9;}
case 0x68aeb9:{ // MOV EAX,dword ptr [EBP + 0xffffff74]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff74ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aebf;}
case 0x68aebf:{ // MOV EDX,dword ptr [EAX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aec1;}
case 0x68aec1:{ // MOV dword ptr [EBP + 0xffffff50],EDX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68aec7;}
case 0x68aec7:{ // MOV EAX,dword ptr [EAX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68aeca;}
case 0x68aeca:{ // MOV dword ptr [EBP + 0xffffff54],EAX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff54ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68aed0;}
case 0x68aed0:{ // MOVSS XMM2,dword ptr [0x0080abf0]
wr<4>(c,0x1280,eval<Op::COPY,4,4>(m<4>(c,0x80abf0)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(0x0ull));
return 0x68aed8;}
case 0x68aed8:{ // MOVSS XMM0,dword ptr [EBP + 0xffffff50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff50ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x1200,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1204,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1208,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x120c,eval<Op::COPY,4,4>(0x0ull));
return 0x68aee0;}
case 0x68aee0:{ // MOVSS dword ptr [EBP + 0xfffffe10],XMM0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe10ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68aee8;}
case 0x68aee8:{ // MOVSS XMM1,dword ptr [EBP + 0xffffff54]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff54ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x1240,eval<Op::COPY,4,4>(u<4>(c,0xa300)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(0x0ull));
return 0x68aef0;}
case 0x68aef0:{ // MOVSS dword ptr [EBP + 0xfffffe20],XMM1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe20ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68aef8;}
case 0x68aef8:{ // MOVSS XMM3,dword ptr [0x0080ac00]
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(m<4>(c,0x80ac00)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(0x0ull));
return 0x68af00;}
case 0x68af00:{ // SUBSS XMM2,XMM0
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,r<4>(c,0x1200),4,4));
return 0x68af04;}
case 0x68af04:{ // UNPCKLPS XMM1,XMM0
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
return 0x68af07;}
case 0x68af07:{ // MULSS XMM0,XMM1
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x1240),4,4));
return 0x68af0b;}
case 0x68af0b:{ // SUBSS XMM2,XMM1
wr<4>(c,0x1280,float_op("FLOAT_SUB",r<4>(c,0x1280),4,r<4>(c,0x1240),4,4));
return 0x68af0f;}
case 0x68af0f:{ // MOVSS dword ptr [EBP + 0xfffffe30],XMM2
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe30ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x68af17;}
case 0x68af17:{ // MULSS XMM3,XMM2
wr<4>(c,0x12c0,float_op("FLOAT_MULT",r<4>(c,0x12c0),4,r<4>(c,0x1280),4,4));
return 0x68af1b;}
case 0x68af1b:{ // MOVLHPS XMM1,XMM2
wr<8>(c,0x1248,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
return 0x68af1e;}
case 0x68af1e:{ // MULSS XMM0,XMM3
wr<4>(c,0x1200,float_op("FLOAT_MULT",r<4>(c,0x1200),4,r<4>(c,0x12c0),4,4));
return 0x68af22;}
case 0x68af22:{ // SHUFPS XMM0,XMM0,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1200)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1204)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1208)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x120c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1204,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1208,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x120c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68af26;}
case 0x68af26:{ // MOVAPS XMM7,xmmword ptr [EBP + 0xfffffd80]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd80ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdb000,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x13c0,eval<Op::COPY,4,4>(u<4>(c,0xdb000)));
wr<4>(c,0x13c4,eval<Op::COPY,4,4>(u<4>(c,0xdb004)));
wr<4>(c,0x13c8,eval<Op::COPY,4,4>(u<4>(c,0xdb008)));
wr<4>(c,0x13cc,eval<Op::COPY,4,4>(u<4>(c,0xdb00c)));
return 0x68af2d;}
case 0x68af2d:{ // MULPS XMM7,XMM0
wr<4>(c,0x13c0,float_op("FLOAT_MULT",r<4>(c,0x13c0),4,r<4>(c,0x1200),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_MULT",r<4>(c,0x13c4),4,r<4>(c,0x1204),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_MULT",r<4>(c,0x13c8),4,r<4>(c,0x1208),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_MULT",r<4>(c,0x13cc),4,r<4>(c,0x120c),4,4));
return 0x68af30;}
case 0x68af30:{ // MOVAPS XMM2,XMM1
wr<4>(c,0x1280,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1284,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1288,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x128c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68af33;}
case 0x68af33:{ // SHUFPS XMM2,XMM1,0xc9
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1280,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1284,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1288,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x128c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68af37;}
case 0x68af37:{ // MOVAPS XMM3,XMM1
wr<4>(c,0x12c0,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x12c4,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x12c8,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x12cc,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68af3a;}
case 0x68af3a:{ // SHUFPS XMM3,XMM1,0xd2
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c0,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x12c4,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12c8,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x12cc,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68af3e;}
case 0x68af3e:{ // MOVAPS XMM5,XMM1
wr<4>(c,0x1340,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1344,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1348,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x134c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68af41;}
case 0x68af41:{ // MULPS XMM5,XMM1
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,r<4>(c,0x1240),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,r<4>(c,0x1244),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,r<4>(c,0x1248),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,r<4>(c,0x124c),4,4));
return 0x68af44;}
case 0x68af44:{ // MULPS XMM1,XMM5
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1340),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1344),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1348),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x134c),4,4));
return 0x68af47;}
case 0x68af47:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68af4a;}
case 0x68af4a:{ // SHUFPS XMM4,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68af4e;}
case 0x68af4e:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffd40]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd40ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68af55;}
case 0x68af55:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68af58;}
case 0x68af58:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68af5b;}
case 0x68af5b:{ // SHUFPS XMM4,XMM1,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68af5f;}
case 0x68af5f:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffdd0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdd0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68af66;}
case 0x68af66:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68af69;}
case 0x68af69:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68af6c;}
case 0x68af6c:{ // SHUFPS XMM4,XMM1,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68af70;}
case 0x68af70:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffda0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffda0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68af77;}
case 0x68af77:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68af7a;}
case 0x68af7a:{ // MULPS XMM5,xmmword ptr [0x0080abd0]
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(m<16>(c,0x80abd0)));
wr<4>(c,0x1340,float_op("FLOAT_MULT",r<4>(c,0x1340),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1344,float_op("FLOAT_MULT",r<4>(c,0x1344),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1348,float_op("FLOAT_MULT",r<4>(c,0x1348),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x134c,float_op("FLOAT_MULT",r<4>(c,0x134c),4,u<4>(c,0xdc50c),4,4));
return 0x68af81;}
case 0x68af81:{ // MOVAPS XMM1,XMM5
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68af84;}
case 0x68af84:{ // MULPS XMM1,XMM2
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x1280),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x1284),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x1288),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x128c),4,4));
return 0x68af87;}
case 0x68af87:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68af8a;}
case 0x68af8a:{ // SHUFPS XMM4,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68af8e;}
case 0x68af8e:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffd60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd60ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68af95;}
case 0x68af95:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68af98;}
case 0x68af98:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68af9b;}
case 0x68af9b:{ // SHUFPS XMM4,XMM1,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68af9f;}
case 0x68af9f:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffdc0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdc0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68afa6;}
case 0x68afa6:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68afa9;}
case 0x68afa9:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68afac;}
case 0x68afac:{ // SHUFPS XMM4,XMM1,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68afb0;}
case 0x68afb0:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffd70]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd70ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68afb7;}
case 0x68afb7:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68afba;}
case 0x68afba:{ // MOVAPS XMM1,XMM5
wr<4>(c,0x1240,eval<Op::COPY,4,4>(r<4>(c,0x1340)));
wr<4>(c,0x1244,eval<Op::COPY,4,4>(r<4>(c,0x1344)));
wr<4>(c,0x1248,eval<Op::COPY,4,4>(r<4>(c,0x1348)));
wr<4>(c,0x124c,eval<Op::COPY,4,4>(r<4>(c,0x134c)));
return 0x68afbd;}
case 0x68afbd:{ // MULPS XMM1,XMM3
wr<4>(c,0x1240,float_op("FLOAT_MULT",r<4>(c,0x1240),4,r<4>(c,0x12c0),4,4));
wr<4>(c,0x1244,float_op("FLOAT_MULT",r<4>(c,0x1244),4,r<4>(c,0x12c4),4,4));
wr<4>(c,0x1248,float_op("FLOAT_MULT",r<4>(c,0x1248),4,r<4>(c,0x12c8),4,4));
wr<4>(c,0x124c,float_op("FLOAT_MULT",r<4>(c,0x124c),4,r<4>(c,0x12cc),4,4));
return 0x68afc0;}
case 0x68afc0:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68afc3;}
case 0x68afc3:{ // SHUFPS XMM4,XMM1,0x0
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68afc7;}
case 0x68afc7:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffd50]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd50ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68afce;}
case 0x68afce:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68afd1;}
case 0x68afd1:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68afd4;}
case 0x68afd4:{ // SHUFPS XMM4,XMM1,0x55
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68afd8;}
case 0x68afd8:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffd90]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffd90ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68afdf;}
case 0x68afdf:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68afe2;}
case 0x68afe2:{ // MOVAPS XMM4,XMM1
wr<4>(c,0x1300,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wr<4>(c,0x1304,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wr<4>(c,0x1308,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wr<4>(c,0x130c,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
return 0x68afe5;}
case 0x68afe5:{ // SHUFPS XMM4,XMM1,0xaa
wu<4>(c,0x139d00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x139e00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x139f00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x13a000,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<4>(c,0x13a100,eval<Op::COPY,4,4>(r<4>(c,0x1300)));
wu<4>(c,0x13a200,eval<Op::COPY,4,4>(r<4>(c,0x1304)));
wu<4>(c,0x13a300,eval<Op::COPY,4,4>(r<4>(c,0x1308)));
wu<4>(c,0x13a400,eval<Op::COPY,4,4>(r<4>(c,0x130c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x13a100)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x13a200)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x13a300)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a400)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x139d00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x139e00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x139f00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x13a000)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x68afe9;}
case 0x68afe9:{ // MULPS XMM4,xmmword ptr [EBP + 0xfffffdb0]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffdb0ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdc500,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<4>(c,0x1300,float_op("FLOAT_MULT",r<4>(c,0x1300),4,u<4>(c,0xdc500),4,4));
wr<4>(c,0x1304,float_op("FLOAT_MULT",r<4>(c,0x1304),4,u<4>(c,0xdc504),4,4));
wr<4>(c,0x1308,float_op("FLOAT_MULT",r<4>(c,0x1308),4,u<4>(c,0xdc508),4,4));
wr<4>(c,0x130c,float_op("FLOAT_MULT",r<4>(c,0x130c),4,u<4>(c,0xdc50c),4,4));
return 0x68aff0;}
case 0x68aff0:{ // ADDPS XMM7,XMM4
wr<4>(c,0x13c0,float_op("FLOAT_ADD",r<4>(c,0x13c0),4,r<4>(c,0x1300),4,4));
wr<4>(c,0x13c4,float_op("FLOAT_ADD",r<4>(c,0x13c4),4,r<4>(c,0x1304),4,4));
wr<4>(c,0x13c8,float_op("FLOAT_ADD",r<4>(c,0x13c8),4,r<4>(c,0x1308),4,4));
wr<4>(c,0x13cc,float_op("FLOAT_ADD",r<4>(c,0x13cc),4,r<4>(c,0x130c),4,4));
return 0x68aff3;}
case 0x68aff3:{ // MOVAPS xmmword ptr [EBP + 0xfffffe40],XMM7
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffe40ull));
wu<16>(c,0xa600,eval<Op::COPY,16,16>(r<16>(c,0x13c0)));
wm<16>(c,u<4>(c,0x6800),u<16>(c,0xa600));
return 0x68affa;}
case 0x68affa:{ // MOV EDX,dword ptr [EBP + 0xffffff58]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff58ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x68b000;}
default:missing_instruction(c.pc);}}
}
