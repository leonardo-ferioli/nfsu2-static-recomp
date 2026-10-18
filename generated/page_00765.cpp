#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_765(Cpu& c){switch(c.pc){
case 0x765000:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765002;}
case 0x765002:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765004;}
case 0x765004:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765006;}
case 0x765006:{ // ADD EAX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765008;}
case 0x765008:{ // MOVAPD XMM3,xmmword ptr [EAX + 0x7d7390]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x7d7390ull));
wu<16>(c,0xa600,m<16>(c,u<4>(c,0x6800)));
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(u<16>(c,0xa600)));
wr<8>(c,0x12c0,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x12c8,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x765010;}
case 0x765010:{ // MOVAPD XMM6,xmmword ptr [0x007d7bd0]
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(m<16>(c,0x7d7bd0)));
wr<8>(c,0x1380,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x1388,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x765018;}
case 0x765018:{ // MULPD XMM1,XMM7
wr<8>(c,0x1240,float_op("FLOAT_MULT",r<8>(c,0x1240),8,r<8>(c,0x13c0),8,8));
wr<8>(c,0x1248,float_op("FLOAT_MULT",r<8>(c,0x1248),8,r<8>(c,0x13c8),8,8));
return 0x76501c;}
case 0x76501c:{ // ADDPD XMM2,XMM1
wr<8>(c,0x1280,float_op("FLOAT_ADD",r<8>(c,0x1280),8,r<8>(c,0x1240),8,8));
wr<8>(c,0x1288,float_op("FLOAT_ADD",r<8>(c,0x1288),8,r<8>(c,0x1248),8,8));
return 0x765020;}
case 0x765020:{ // PSHUFD XMM1,XMM2,0xee
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x1280)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x1284)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x1288)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x128c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x765025;}
case 0x765025:{ // MULSD XMM2,XMM7
wr<8>(c,0x1280,float_op("FLOAT_MULT",r<8>(c,0x1280),8,r<8>(c,0x13c0),8,8));
return 0x765029;}
case 0x765029:{ // ADDSD XMM2,XMM1
wr<8>(c,0x1280,float_op("FLOAT_ADD",r<8>(c,0x1280),8,r<8>(c,0x1240),8,8));
return 0x76502d;}
case 0x76502d:{ // ADDSD XMM2,XMM4
wr<8>(c,0x1280,float_op("FLOAT_ADD",r<8>(c,0x1280),8,r<8>(c,0x1300),8,8));
return 0x765031;}
case 0x765031:{ // MOVLPD XMM4,qword ptr [0x007d7bf0]
wr<8>(c,0x1300,eval<Op::COPY,8,8>(m<8>(c,0x7d7bf0)));
return 0x765039;}
case 0x765039:{ // MOVD XMM1,EDX
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x8)));
return 0x76503d;}
case 0x76503d:{ // SUB EDX,0x1ff80
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x1ff80ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x1ff80ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x1ff80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765043;}
case 0x765043:{ // NEG EDX
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(0x0ull,r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_2COMP,4,4>(r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765045;}
case 0x765045:{ // SAR EDX,0x7
wu<4>(c,0x99400,eval<Op::INT_AND,4,4,4>(0x7ull,0x1full));
wu<4>(c,0x99500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x8,eval<Op::INT_SRIGHT,4,4,4>(r<4>(c,0x8),u<4>(c,0x99400)));
wu<1>(c,0x4cd00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x99400),0x0ull));
wu<4>(c,0x4ce00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x99400),0x1ull));
wu<4>(c,0x4cf00,eval<Op::INT_SRIGHT,4,4,4>(u<4>(c,0x99500),u<4>(c,0x4ce00)));
wu<4>(c,0x4d000,eval<Op::INT_AND,4,4,4>(u<4>(c,0x4cf00),0x1ull));
wu<1>(c,0x4d100,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4d000),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4cd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4d100)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4d200,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x99400),0x1ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),0x0ull));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4d200)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x99400),0x0ull));
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
return 0x765048;}
case 0x765048:{ // ADD EDX,0x2
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),0x2ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x2ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76504b;}
case 0x76504b:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x76504d;}
case 0x76504d:{ // AND EAX,0x20
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765050;}
case 0x765050:{ // ADD EDX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765052;}
case 0x765052:{ // XORPD XMM7,XMM7
wr<8>(c,0x13c0,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x13c0),r<8>(c,0x13c0)));
wr<8>(c,0x13c8,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x13c8),r<8>(c,0x13c8)));
return 0x765056;}
case 0x765056:{ // MOV EAX,0x3f80
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x3f80ull));
return 0x76505b;}
case 0x76505b:{ // PINSRW XMM7,EAX,0x3
wu<1>(c,0x10fc00,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10fe00,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10fc00),0x10ull));
wu<1>(c,0x110000,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110100,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x0)));
wu<8>(c,0x110300,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110100),u<1>(c,0x10fe00)));
wu<8>(c,0x110400,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x10fe00)));
wu<8>(c,0x110500,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110400)));
wu<8>(c,0x110600,eval<Op::INT_AND,8,8,8>(r<8>(c,0x13c0),u<8>(c,0x110500)));
wu<8>(c,0x110300,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110600),u<8>(c,0x110300)));
wu<8>(c,0x110800,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x0)));
wu<1>(c,0x110900,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110b00,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110800),u<1>(c,0x110900)));
wu<1>(c,0x110c00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110d00,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x110c00)));
wu<8>(c,0x110e00,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110d00)));
wu<8>(c,0x110f00,eval<Op::INT_AND,8,8,8>(r<8>(c,0x13c8),u<8>(c,0x110e00)));
wu<8>(c,0x110b00,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110f00),u<8>(c,0x110b00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x110000)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110300)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x13c0)));
wr<8>(c,0x13c0,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wu<1>(c,0x111100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x111100)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110b00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x111100)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x13c8)));
wr<8>(c,0x13c8,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
return 0x765060;}
case 0x765060:{ // MULSD XMM2,qword ptr [ESP + 0x14]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x14ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1280,float_op("FLOAT_MULT",r<8>(c,0x1280),8,u<8>(c,0xa400),8,8));
return 0x765066;}
case 0x765066:{ // MULSD XMM0,XMM7
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x13c0),8,8));
return 0x76506a;}
case 0x76506a:{ // PSLLQ XMM1,0x2d
wr<8>(c,0x1240,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1240),0x2dull));
wr<8>(c,0x1248,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1248),0x2dull));
return 0x76506f;}
case 0x76506f:{ // PSHUFD XMM1,XMM1,0x44
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1240,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1244,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1248,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x124c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x765074;}
case 0x765074:{ // MOVAPD XMM7,xmmword ptr [0x007d7be0]
wu<16>(c,0xdaf00,eval<Op::COPY,16,16>(m<16>(c,0x7d7be0)));
wr<8>(c,0x13c0,eval<Op::COPY,8,8>(u<8>(c,0xdaf00)));
wr<8>(c,0x13c8,eval<Op::COPY,8,8>(u<8>(c,0xdaf08)));
return 0x76507c;}
case 0x76507c:{ // ADDSD XMM5,XMM2
wr<8>(c,0x1340,float_op("FLOAT_ADD",r<8>(c,0x1340),8,r<8>(c,0x1280),8,8));
return 0x765080;}
case 0x765080:{ // MULPD XMM3,XMM1
wr<8>(c,0x12c0,float_op("FLOAT_MULT",r<8>(c,0x12c0),8,r<8>(c,0x1240),8,8));
wr<8>(c,0x12c8,float_op("FLOAT_MULT",r<8>(c,0x12c8),8,r<8>(c,0x1248),8,8));
return 0x765084;}
case 0x765084:{ // ADDSD XMM0,XMM5
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1340),8,8));
return 0x765088;}
case 0x765088:{ // UNPCKLPD XMM0,XMM0
wr<8>(c,0x1208,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
return 0x76508c;}
case 0x76508c:{ // MULPD XMM6,XMM0
wr<8>(c,0x1380,float_op("FLOAT_MULT",r<8>(c,0x1380),8,r<8>(c,0x1200),8,8));
wr<8>(c,0x1388,float_op("FLOAT_MULT",r<8>(c,0x1388),8,r<8>(c,0x1208),8,8));
return 0x765090;}
case 0x765090:{ // MULSD XMM4,XMM0
wr<8>(c,0x1300,float_op("FLOAT_MULT",r<8>(c,0x1300),8,r<8>(c,0x1200),8,8));
return 0x765094;}
case 0x765094:{ // MULPD XMM0,XMM0
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x1200),8,8));
wr<8>(c,0x1208,float_op("FLOAT_MULT",r<8>(c,0x1208),8,r<8>(c,0x1208),8,8));
return 0x765098;}
case 0x765098:{ // ADDPD XMM7,XMM6
wr<8>(c,0x13c0,float_op("FLOAT_ADD",r<8>(c,0x13c0),8,r<8>(c,0x1380),8,8));
wr<8>(c,0x13c8,float_op("FLOAT_ADD",r<8>(c,0x13c8),8,r<8>(c,0x1388),8,8));
return 0x76509c;}
case 0x76509c:{ // MULPD XMM7,XMM0
wr<8>(c,0x13c0,float_op("FLOAT_MULT",r<8>(c,0x13c0),8,r<8>(c,0x1200),8,8));
wr<8>(c,0x13c8,float_op("FLOAT_MULT",r<8>(c,0x13c8),8,r<8>(c,0x1208),8,8));
return 0x7650a0;}
case 0x7650a0:{ // MULSD XMM0,XMM3
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x12c0),8,8));
return 0x7650a4;}
case 0x7650a4:{ // PSHUFD XMM6,XMM7,0xee
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x13c0)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x13c4)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x13c8)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x13cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1380,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1384,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1388,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x138c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x7650a9;}
case 0x7650a9:{ // MULSD XMM0,XMM7
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x13c0),8,8));
return 0x7650ad;}
case 0x7650ad:{ // PSHUFD XMM5,XMM3,0xee
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x12c0)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x12c4)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x12c8)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x12cc)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1340,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1344,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x2ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1348,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x3ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x134c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x7650b2;}
case 0x7650b2:{ // MULSD XMM6,XMM3
wr<8>(c,0x1380,float_op("FLOAT_MULT",r<8>(c,0x1380),8,r<8>(c,0x12c0),8,8));
return 0x7650b6;}
case 0x7650b6:{ // MULSD XMM4,XMM3
wr<8>(c,0x1300,float_op("FLOAT_MULT",r<8>(c,0x1300),8,r<8>(c,0x12c0),8,8));
return 0x7650ba;}
case 0x7650ba:{ // MOVD XMM7,ECX
wr<16>(c,0x13c0,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x4)));
return 0x7650be;}
case 0x7650be:{ // PSLLQ XMM7,0x2d
wr<8>(c,0x13c0,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x13c0),0x2dull));
wr<8>(c,0x13c8,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x13c8),0x2dull));
return 0x7650c3;}
case 0x7650c3:{ // MOVD XMM2,EDX
wr<16>(c,0x1280,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x8)));
return 0x7650c7;}
case 0x7650c7:{ // PCMPEQD XMM1,XMM1
wu<1>(c,0xfd000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1240),r<4>(c,0x1240)));
wu<4>(c,0xfd100,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd000)));
wr<4>(c,0x1240,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd100),0xffffffffull));
wu<1>(c,0xfd300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1244),r<4>(c,0x1244)));
wu<4>(c,0xfd400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd300)));
wr<4>(c,0x1244,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd400),0xffffffffull));
wu<1>(c,0xfd600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1248),r<4>(c,0x1248)));
wu<4>(c,0xfd700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd600)));
wr<4>(c,0x1248,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd700),0xffffffffull));
wu<1>(c,0xfd900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x124c),r<4>(c,0x124c)));
wu<4>(c,0xfda00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd900)));
wr<4>(c,0x124c,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfda00),0xffffffffull));
return 0x7650cb;}
case 0x7650cb:{ // PSLLQ XMM1,XMM2
wu<8>(c,0x12b100,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wr<8>(c,0x1240,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1240),u<8>(c,0x12b100)));
wr<8>(c,0x1248,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1248),u<8>(c,0x12b100)));
return 0x7650cf;}
case 0x7650cf:{ // ADDSD XMM0,XMM5
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1340),8,8));
return 0x7650d3;}
case 0x7650d3:{ // ADDSD XMM0,XMM6
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1380),8,8));
return 0x7650d7;}
case 0x7650d7:{ // ANDPD XMM1,XMM3
wr<8>(c,0x1240,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1240),r<8>(c,0x12c0)));
wr<8>(c,0x1248,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1248),r<8>(c,0x12c8)));
return 0x7650db;}
case 0x7650db:{ // ADDSD XMM0,XMM4
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1300),8,8));
return 0x7650df;}
case 0x7650df:{ // XORPD XMM6,XMM6
wr<8>(c,0x1380,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1380),r<8>(c,0x1380)));
wr<8>(c,0x1388,eval<Op::INT_XOR,8,8,8>(r<8>(c,0x1388),r<8>(c,0x1388)));
return 0x7650e3;}
case 0x7650e3:{ // PCMPEQD XMM4,XMM4
wu<1>(c,0xfd000,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1300),r<4>(c,0x1300)));
wu<4>(c,0xfd100,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd000)));
wr<4>(c,0x1300,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd100),0xffffffffull));
wu<1>(c,0xfd300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1304),r<4>(c,0x1304)));
wu<4>(c,0xfd400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd300)));
wr<4>(c,0x1304,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd400),0xffffffffull));
wu<1>(c,0xfd600,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1308),r<4>(c,0x1308)));
wu<4>(c,0xfd700,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd600)));
wr<4>(c,0x1308,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfd700),0xffffffffull));
wu<1>(c,0xfd900,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x130c),r<4>(c,0x130c)));
wu<4>(c,0xfda00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0xfd900)));
wr<4>(c,0x130c,eval<Op::INT_MULT,4,4,4>(u<4>(c,0xfda00),0xffffffffull));
return 0x7650e7;}
case 0x7650e7:{ // PSLLQ XMM4,XMM2
wu<8>(c,0x12b100,eval<Op::COPY,8,8>(r<8>(c,0x1280)));
wr<8>(c,0x1300,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1300),u<8>(c,0x12b100)));
wr<8>(c,0x1308,eval<Op::INT_LEFT,8,8,8>(r<8>(c,0x1308),u<8>(c,0x12b100)));
return 0x7650eb;}
case 0x7650eb:{ // SUBSD XMM3,XMM1
wr<8>(c,0x12c0,float_op("FLOAT_SUB",r<8>(c,0x12c0),8,r<8>(c,0x1240),8,8));
return 0x7650ef;}
case 0x7650ef:{ // MOVSD XMM2,XMM1
wr<8>(c,0x1280,eval<Op::COPY,8,8>(r<8>(c,0x1240)));
return 0x7650f3;}
case 0x7650f3:{ // ADDSD XMM1,XMM0
wr<8>(c,0x1240,float_op("FLOAT_ADD",r<8>(c,0x1240),8,r<8>(c,0x1200),8,8));
return 0x7650f7;}
case 0x7650f7:{ // ANDPD XMM1,XMM4
wr<8>(c,0x1240,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1240),r<8>(c,0x1300)));
wr<8>(c,0x1248,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1248),r<8>(c,0x1308)));
return 0x7650fb;}
case 0x7650fb:{ // PINSRW XMM6,EDI,0x3
wu<1>(c,0x10fc00,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10fe00,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10fc00),0x10ull));
wu<1>(c,0x110000,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110100,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x1c)));
wu<8>(c,0x110300,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110100),u<1>(c,0x10fe00)));
wu<8>(c,0x110400,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x10fe00)));
wu<8>(c,0x110500,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110400)));
wu<8>(c,0x110600,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1380),u<8>(c,0x110500)));
wu<8>(c,0x110300,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110600),u<8>(c,0x110300)));
wu<8>(c,0x110800,eval<Op::INT_ZEXT,8,2>(r<2>(c,0x1c)));
wu<1>(c,0x110900,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110b00,eval<Op::INT_LEFT,8,8,1>(u<8>(c,0x110800),u<1>(c,0x110900)));
wu<1>(c,0x110c00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10fe00),0x40ull));
wu<8>(c,0x110d00,eval<Op::INT_LEFT,8,8,1>(0xffffull,u<1>(c,0x110c00)));
wu<8>(c,0x110e00,eval<Op::INT_NEGATE,8,8>(u<8>(c,0x110d00)));
wu<8>(c,0x110f00,eval<Op::INT_AND,8,8,8>(r<8>(c,0x1388),u<8>(c,0x110e00)));
wu<8>(c,0x110b00,eval<Op::INT_OR,8,8,8>(u<8>(c,0x110f00),u<8>(c,0x110b00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x110000)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110300)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x1380)));
wr<8>(c,0x1380,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wu<1>(c,0x111100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x110000)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x111100)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x110b00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x111100)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),r<8>(c,0x1388)));
wr<8>(c,0x1388,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
return 0x765100;}
case 0x765100:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765101;}
case 0x765101:{ // SUBSD XMM2,XMM1
wr<8>(c,0x1280,float_op("FLOAT_SUB",r<8>(c,0x1280),8,r<8>(c,0x1240),8,8));
return 0x765105;}
case 0x765105:{ // ADDSD XMM0,XMM2
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1280),8,8));
return 0x765109;}
case 0x765109:{ // ADDSD XMM0,XMM3
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x12c0),8,8));
return 0x76510d;}
case 0x76510d:{ // CMP ESI,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765110;}
case 0x765110:{ // JG 0x00765160
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x765160;}
return 0x765112;}
case 0x765112:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765113;}
case 0x765113:{ // MULSD XMM0,XMM7
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x13c0),8,8));
return 0x765117;}
case 0x765117:{ // MULSD XMM1,XMM7
wr<8>(c,0x1240,float_op("FLOAT_MULT",r<8>(c,0x1240),8,r<8>(c,0x13c0),8,8));
return 0x76511b;}
case 0x76511b:{ // ADDSD XMM0,XMM1
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1240),8,8));
return 0x76511f;}
case 0x76511f:{ // MULSD XMM6,XMM0
wr<8>(c,0x1380,float_op("FLOAT_MULT",r<8>(c,0x1380),8,r<8>(c,0x1200),8,8));
return 0x765123;}
case 0x765123:{ // ADDSD XMM0,XMM6
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1380),8,8));
return 0x765127;}
case 0x765127:{ // PEXTRW EAX,XMM0,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1200),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1208),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x76512c;}
case 0x76512c:{ // AND EAX,0x7ff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765131;}
case 0x765131:{ // MOV EDX,0x18
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x18ull));
return 0x765136;}
case 0x765136:{ // CMP EAX,0x7ff0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x7ff0ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76513b;}
case 0x76513b:{ // JZ 0x00764f51
if(r<1>(c,0x206)){return 0x764f51;}
return 0x765141;}
case 0x765141:{ // MOV EDX,0x19
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x19ull));
return 0x765146;}
case 0x765146:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765149;}
case 0x765149:{ // JZ 0x00764f51
if(r<1>(c,0x206)){return 0x764f51;}
return 0x76514f;}
case 0x76514f:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765152;}
case 0x765152:{ // MOVLPD qword ptr [ESP + 0x4],XMM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x765158;}
case 0x765158:{ // FLD double ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765158ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x76515c;}
case 0x76515c:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76515f;}
case 0x76515f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765160;}
case 0x765160:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765161;}
case 0x765161:{ // ADDSD XMM0,XMM1
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1240),8,8));
return 0x765165;}
case 0x765165:{ // MULSD XMM0,XMM7
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x13c0),8,8));
return 0x765169;}
case 0x765169:{ // MULSD XMM6,XMM0
wr<8>(c,0x1380,float_op("FLOAT_MULT",r<8>(c,0x1380),8,r<8>(c,0x1200),8,8));
return 0x76516d;}
case 0x76516d:{ // ADDSD XMM0,XMM6
wr<8>(c,0x1200,float_op("FLOAT_ADD",r<8>(c,0x1200),8,r<8>(c,0x1380),8,8));
return 0x765171;}
case 0x765171:{ // PEXTRW EAX,XMM0,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1200),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1208),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x765176;}
case 0x765176:{ // AND EAX,0x7ff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76517b;}
case 0x76517b:{ // MOV EDX,0x18
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x18ull));
return 0x765180;}
case 0x765180:{ // CMP EAX,0x7ff0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x7ff0ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765185;}
case 0x765185:{ // JZ 0x00764f51
if(r<1>(c,0x206)){return 0x764f51;}
return 0x76518b;}
case 0x76518b:{ // MOV EDX,0x19
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x19ull));
return 0x765190;}
case 0x765190:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765193;}
case 0x765193:{ // JZ 0x00764f51
if(r<1>(c,0x206)){return 0x764f51;}
return 0x765199;}
case 0x765199:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76519c;}
case 0x76519c:{ // MOVLPD qword ptr [ESP + 0x4],XMM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x7651a2;}
case 0x7651a2:{ // FLD double ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7651a2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x7651a6;}
case 0x7651a6:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7651a9;}
case 0x7651a9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7651aa;}
case 0x7651aa:{ // MOVLPD XMM0,qword ptr [0x007d7c28]
wr<8>(c,0x1200,eval<Op::COPY,8,8>(m<8>(c,0x7d7c28)));
return 0x7651b2;}
case 0x7651b2:{ // MOVD XMM1,ECX
wr<16>(c,0x1240,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x4)));
return 0x7651b6;}
case 0x7651b6:{ // MULSD XMM0,XMM0
wr<8>(c,0x1200,float_op("FLOAT_MULT",r<8>(c,0x1200),8,r<8>(c,0x1200),8,8));
return 0x7651ba;}
case 0x7651ba:{ // PSLLQ XMM1,0x2d
wr<8>(c,0x1240,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1240),0x2dull));
wr<8>(c,0x1248,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1248),0x2dull));
return 0x7651bf;}
case 0x7651bf:{ // ORPD XMM0,XMM1
wr<16>(c,0x1200,eval<Op::INT_OR,16,16,16>(r<16>(c,0x1200),r<16>(c,0x1240)));
return 0x7651c3;}
case 0x7651c3:{ // MOV EDX,0x19
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x19ull));
return 0x7651c8;}
case 0x7651c8:{ // JMP 0x00764f51
return 0x764f51;
return 0x7651cd;}
case 0x7651cd:{ // MOV EDX,0x18
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x18ull));
return 0x7651d2;}
case 0x7651d2:{ // CMP ECX,0x0
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
return 0x7651d5;}
case 0x7651d5:{ // JZ 0x007651e4
if(r<1>(c,0x206)){return 0x7651e4;}
return 0x7651d7;}
case 0x7651d7:{ // MOVLPD XMM0,qword ptr [0x007d7c18]
wr<8>(c,0x1200,eval<Op::COPY,8,8>(m<8>(c,0x7d7c18)));
return 0x7651df;}
case 0x7651df:{ // JMP 0x00764f51
return 0x764f51;
return 0x7651e4;}
case 0x7651e4:{ // MOVLPD XMM0,qword ptr [0x007d7c10]
wr<8>(c,0x1200,eval<Op::COPY,8,8>(m<8>(c,0x7d7c10)));
return 0x7651ec;}
case 0x7651ec:{ // JMP 0x00764f51
return 0x764f51;
return 0x7651f1;}
case 0x7651f1:{ // PSHUFD XMM4,XMM1,0x44
wu<4>(c,0x126b00,eval<Op::COPY,4,4>(r<4>(c,0x1240)));
wu<4>(c,0x126c00,eval<Op::COPY,4,4>(r<4>(c,0x1244)));
wu<4>(c,0x126d00,eval<Op::COPY,4,4>(r<4>(c,0x1248)));
wu<4>(c,0x126e00,eval<Op::COPY,4,4>(r<4>(c,0x124c)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1304,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x0ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x1308,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
wu<1>(c,0x125c00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x0ull));
wu<4>(c,0x125d00,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125c00)));
wu<4>(c,0x125e00,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x125d00),u<4>(c,0x126b00)));
wu<1>(c,0x125f00,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x1ull));
wu<4>(c,0x126000,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x125f00)));
wu<4>(c,0x126100,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126000),u<4>(c,0x126c00)));
wu<4>(c,0x126200,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x125e00),u<4>(c,0x126100)));
wu<1>(c,0x126300,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x2ull));
wu<4>(c,0x126400,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126300)));
wu<4>(c,0x126500,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126400),u<4>(c,0x126d00)));
wu<4>(c,0x126600,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126200),u<4>(c,0x126500)));
wu<1>(c,0x126700,eval<Op::INT_EQUAL,1,1,1>(0x1ull,0x3ull));
wu<4>(c,0x126800,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x126700)));
wu<4>(c,0x126900,eval<Op::INT_MULT,4,4,4>(u<4>(c,0x126800),u<4>(c,0x126e00)));
wr<4>(c,0x130c,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x126600),u<4>(c,0x126900)));
return 0x7651f6;}
case 0x7651f6:{ // MULPD XMM4,XMM6
wr<8>(c,0x1300,float_op("FLOAT_MULT",r<8>(c,0x1300),8,r<8>(c,0x1380),8,8));
wr<8>(c,0x1308,float_op("FLOAT_MULT",r<8>(c,0x1308),8,r<8>(c,0x1388),8,8));
return 0x7651fa;}
case 0x7651fa:{ // PEXTRW EAX,XMM4,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1300),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1308),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x7651ff;}
case 0x7651ff:{ // AND EAX,0x7ff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765204;}
case 0x765204:{ // MOV EDX,0x40a0
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x40a0ull));
return 0x765209;}
case 0x765209:{ // SUB EDX,EAX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76520b;}
case 0x76520b:{ // SUB EAX,0x3c70
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x3c70ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x3c70ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x3c70ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765210;}
case 0x765210:{ // OR EDX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765212;}
case 0x765212:{ // CMP EDX,0x80000000
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x80000000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x80000000ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x80000000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765218;}
case 0x765218:{ // JC 0x00764918
if(r<1>(c,0x200)){return 0x764918;}
return 0x76521e;}
case 0x76521e:{ // CMP EAX,0x80000000
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x80000000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x80000000ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x80000000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765223;}
case 0x765223:{ // JC 0x00765245
if(r<1>(c,0x200)){return 0x765245;}
return 0x765225;}
case 0x765225:{ // OR ECX,0x1ff80
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_OR,4,4,4>(r<4>(c,0x4),0x1ff80ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76522b;}
case 0x76522b:{ // MOVD XMM0,ECX
wr<16>(c,0x1200,eval<Op::INT_ZEXT,16,4>(r<4>(c,0x4)));
return 0x76522f;}
case 0x76522f:{ // PSLLQ XMM0,0x2d
wr<8>(c,0x1200,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1200),0x2dull));
wr<8>(c,0x1208,eval<Op::INT_LEFT,8,8,4>(r<8>(c,0x1208),0x2dull));
return 0x765234;}
case 0x765234:{ // SUB ESP,0x10
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765237;}
case 0x765237:{ // MOVLPD qword ptr [ESP + 0x4],XMM0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,eval<Op::COPY,8,8>(r<8>(c,0x1200)));
wm<8>(c,u<4>(c,0x7600),u<8>(c,0xa400));
return 0x76523d;}
case 0x76523d:{ // FLD double ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76523dull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x7600)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x765241;}
case 0x765241:{ // ADD ESP,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x10ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765244;}
case 0x765244:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765245;}
case 0x765245:{ // MOVLPD XMM4,qword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<8>(c,0xa400,m<8>(c,u<4>(c,0x7600)));
wr<8>(c,0x1300,eval<Op::COPY,8,8>(u<8>(c,0xa400)));
return 0x76524b;}
case 0x76524b:{ // PEXTRW EDX,XMM4,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1300),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1308),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x765250;}
case 0x765250:{ // AND EDX,0x7ff0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x7ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765256;}
case 0x765256:{ // SUB EDX,0x3ff0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x8),0x3ff0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x3ff0ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x3ff0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76525c;}
case 0x76525c:{ // PEXTRW EAX,XMM1,0x3
wu<1>(c,0x10b300,eval<Op::INT_AND,1,1,1>(0x3ull,0x7ull));
wu<1>(c,0x10b500,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x10b300),0x10ull));
wu<1>(c,0x10b700,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10b900,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1240),u<1>(c,0x10b500)));
wu<1>(c,0x10ba00,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x10b500),0x40ull));
wu<8>(c,0x10bb00,eval<Op::INT_RIGHT,8,8,1>(r<8>(c,0x1248),u<1>(c,0x10ba00)));
wu<8>(c,0x0,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x10b700)));
wu<8>(c,0x100,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x0),u<8>(c,0x10b900)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x10b700)));
wu<8>(c,0x300,eval<Op::INT_ZEXT,8,1>(u<1>(c,0x200)));
wu<8>(c,0x400,eval<Op::INT_MULT,8,8,8>(u<8>(c,0x300),u<8>(c,0x10bb00)));
wu<8>(c,0x10b800,eval<Op::INT_OR,8,8,8>(u<8>(c,0x100),u<8>(c,0x400)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,2>(u<2>(c,0x10b800)));
return 0x765261;}
case 0x765261:{ // XOR EAX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765263;}
case 0x765263:{ // AND EAX,0x8000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x8000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765268;}
case 0x765268:{ // CMP EAX,0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76526b;}
case 0x76526b:{ // JNZ 0x007651aa
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7651aa;}
return 0x765271;}
case 0x765271:{ // JMP 0x007651cd
return 0x7651cd;
return 0x765276;}
case 0x765490:{ // CMP byte ptr [EDX + 0xe],0x5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0xeull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x5ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x5ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765494;}
case 0x765494:{ // JNZ 0x007654a7
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7654a7;}
return 0x765496;}
case 0x765496:{ // MOV BX,word ptr [EBP + 0xffffff5c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5cull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6800)));
wr<2>(c,0xc,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x76549d;}
case 0x76549d:{ // OR BH,0x2
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0xd,eval<Op::INT_OR,1,1,1>(r<1>(c,0xd),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0xd),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0xd),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0xd),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654a0;}
case 0x7654a0:{ // AND BH,0xfe
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0xd,eval<Op::INT_AND,1,1,1>(r<1>(c,0xd),0xfeull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0xd),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0xd),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0xd),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654a3;}
case 0x7654a3:{ // MOV BL,0x3f
wr<1>(c,0xc,eval<Op::COPY,1,1>(0x3full));
return 0x7654a5;}
case 0x7654a5:{ // JMP 0x007654ab
return 0x7654ab;
return 0x7654a7;}
case 0x7654a7:{ // MOV BX,0x133f
wr<2>(c,0xc,eval<Op::COPY,2,2>(0x133full));
return 0x7654ab;}
case 0x7654ab:{ // MOV word ptr [EBP + 0xffffff5e],BX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0xc)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7654b2;}
case 0x7654b2:{ // FLDCW word ptr [EBP + 0xffffff5e]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5eull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6800)));
wr<2>(c,0x10a0,eval<Op::COPY,2,2>(u<2>(c,0xa200)));
x87_load_control(uint16_t(r<2>(c,0x10a0)));
return 0x7654b8;}
case 0x7654b8:{ // MOV EBX,0x81a4ec
wr<4>(c,0xc,eval<Op::COPY,4,4>(0x81a4ecull));
return 0x7654bd;}
case 0x7654bd:{ // FXAM
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7654bdull));
wu<10>(c,0xb9800,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<1>(c,0x1090,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wr<1>(c,0x1091,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wr<1>(c,0x1092,float_op("FLOAT_NOTEQUAL",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wr<1>(c,0x1093,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wu<2>(c,0xb9d00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0xb9e00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xb9d00),0x8ull));
wu<2>(c,0xb9f00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0xba000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xb9f00),0x9ull));
wu<2>(c,0xba100,eval<Op::INT_OR,2,2,2>(u<2>(c,0xb9e00),u<2>(c,0xba000)));
wu<2>(c,0xba200,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0xba300,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xba200),0xaull));
wu<2>(c,0xba400,eval<Op::INT_OR,2,2,2>(u<2>(c,0xba100),u<2>(c,0xba300)));
wu<2>(c,0xba500,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0xba600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xba500),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0xba400),u<2>(c,0xba600)));
return 0x7654bf;}
case 0x7654bf:{ // MOV dword ptr [EBP + 0xffffff6c],EDX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff6cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x7654c5;}
case 0x7654c5:{ // FSTSW word ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x7654cc;}
case 0x7654cc:{ // MOV byte ptr [EBP + 0xffffff70],0x0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x0ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x7654d3;}
case 0x7654d3:{ // WAIT
return 0x7654d4;}
case 0x7654d4:{ // MOV CL,byte ptr [EBP + 0xffffff61]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff61ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x7654da;}
case 0x7654da:{ // SHL CL,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x4,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x4),0x1ull));
wu<1>(c,0x9a100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9a100)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654dc;}
case 0x7654dc:{ // SAR CL,0x1
wr<1>(c,0x200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0x1ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x4,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654de;}
case 0x7654de:{ // ROL CL,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x8ea00,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x4),0x1ull));
wr<1>(c,0x4,eval<Op::INT_OR,1,1,1>(u<1>(c,0x8ea00),r<1>(c,0x200)));
wu<1>(c,0x8ec00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x8ec00)));
return 0x7654e0;}
case 0x7654e0:{ // MOV AL,CL
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x7654e2;}
case 0x7654e2:{ // AND AL,0xf
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654e4;}
case 0x7654e4:{ // XLAT EBX
wu<4>(c,0xa6500,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0xa6600,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x0)));
wu<4>(c,0xa6500,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0xa6600)));
wr<1>(c,0x0,m<1>(c,u<4>(c,0xa6500)));
return 0x7654e5;}
case 0x7654e5:{ // MOVSX EAX,AL
wr<4>(c,0x0,eval<Op::INT_SEXT,4,1>(r<1>(c,0x0)));
return 0x7654e8;}
case 0x7654e8:{ // AND ECX,0x404
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x404ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654ee;}
case 0x7654ee:{ // MOV EBX,EDX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x7654f0;}
case 0x7654f0:{ // ADD EBX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654f2;}
case 0x7654f2:{ // ADD EBX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654f5;}
case 0x7654f5:{ // JMP dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
return uint32_t(u<4>(c,0x17200));
return 0x7654f7;}
case 0x7654f7:{ // CMP byte ptr [EDX + 0xe],0x5
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0xeull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x5ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x5ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7654fb;}
case 0x7654fb:{ // JNZ 0x0076550e
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x76550e;}
return 0x7654fd;}
case 0x7654fd:{ // MOV BX,word ptr [EBP + 0xffffff5c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5cull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6800)));
wr<2>(c,0xc,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x765504;}
case 0x765504:{ // OR BH,0x2
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0xd,eval<Op::INT_OR,1,1,1>(r<1>(c,0xd),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0xd),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0xd),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0xd),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765507;}
case 0x765507:{ // AND BH,0xfe
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0xd,eval<Op::INT_AND,1,1,1>(r<1>(c,0xd),0xfeull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0xd),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0xd),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0xd),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76550a;}
case 0x76550a:{ // MOV BL,0x3f
wr<1>(c,0xc,eval<Op::COPY,1,1>(0x3full));
return 0x76550c;}
case 0x76550c:{ // JMP 0x00765512
return 0x765512;
return 0x76550e;}
case 0x76550e:{ // MOV BX,0x133f
wr<2>(c,0xc,eval<Op::COPY,2,2>(0x133full));
return 0x765512;}
case 0x765512:{ // MOV word ptr [EBP + 0xffffff5e],BX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5eull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0xc)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x765519;}
case 0x765519:{ // FLDCW word ptr [EBP + 0xffffff5e]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff5eull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6800)));
wr<2>(c,0x10a0,eval<Op::COPY,2,2>(u<2>(c,0xa200)));
x87_load_control(uint16_t(r<2>(c,0x10a0)));
return 0x76551f;}
case 0x76551f:{ // MOV EBX,0x81a4ec
wr<4>(c,0xc,eval<Op::COPY,4,4>(0x81a4ecull));
return 0x765524;}
case 0x765524:{ // FXAM
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765524ull));
wu<10>(c,0xb9800,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<1>(c,0x1090,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wr<1>(c,0x1091,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wr<1>(c,0x1092,float_op("FLOAT_NOTEQUAL",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wr<1>(c,0x1093,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wu<2>(c,0xb9d00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0xb9e00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xb9d00),0x8ull));
wu<2>(c,0xb9f00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0xba000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xb9f00),0x9ull));
wu<2>(c,0xba100,eval<Op::INT_OR,2,2,2>(u<2>(c,0xb9e00),u<2>(c,0xba000)));
wu<2>(c,0xba200,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0xba300,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xba200),0xaull));
wu<2>(c,0xba400,eval<Op::INT_OR,2,2,2>(u<2>(c,0xba100),u<2>(c,0xba300)));
wu<2>(c,0xba500,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0xba600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xba500),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0xba400),u<2>(c,0xba600)));
return 0x765526;}
case 0x765526:{ // MOV dword ptr [EBP + 0xffffff6c],EDX
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff6cull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wm<4>(c,u<4>(c,0x6800),u<4>(c,0xa300));
return 0x76552c;}
case 0x76552c:{ // FSTSW word ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x765533;}
case 0x765533:{ // MOV byte ptr [EBP + 0xffffff70],0x0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x0ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x76553a;}
case 0x76553a:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76553aull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x76553c;}
case 0x76553c:{ // MOV CL,byte ptr [EBP + 0xffffff61]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff61ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765542;}
case 0x765542:{ // FXAM
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765542ull));
wu<10>(c,0xb9800,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<1>(c,0x1090,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wr<1>(c,0x1091,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wr<1>(c,0x1092,float_op("FLOAT_NOTEQUAL",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wr<1>(c,0x1093,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xb9800),10,1));
wu<2>(c,0xb9d00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1090)));
wu<2>(c,0xb9e00,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xb9d00),0x8ull));
wu<2>(c,0xb9f00,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1091)));
wu<2>(c,0xba000,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xb9f00),0x9ull));
wu<2>(c,0xba100,eval<Op::INT_OR,2,2,2>(u<2>(c,0xb9e00),u<2>(c,0xba000)));
wu<2>(c,0xba200,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1092)));
wu<2>(c,0xba300,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xba200),0xaull));
wu<2>(c,0xba400,eval<Op::INT_OR,2,2,2>(u<2>(c,0xba100),u<2>(c,0xba300)));
wu<2>(c,0xba500,eval<Op::INT_ZEXT,2,1>(r<1>(c,0x1093)));
wu<2>(c,0xba600,eval<Op::INT_LEFT,2,2,4>(u<2>(c,0xba500),0xeull));
wr<2>(c,0x10a2,eval<Op::INT_OR,2,2,2>(u<2>(c,0xba400),u<2>(c,0xba600)));
return 0x765544;}
case 0x765544:{ // FSTSW word ptr [EBP + 0xffffff60]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff60ull));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
wm<2>(c,u<4>(c,0x6800),u<2>(c,0xa200));
return 0x76554b;}
case 0x76554b:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76554bull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x76554d;}
case 0x76554d:{ // MOV CH,byte ptr [EBP + 0xffffff61]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff61ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x5,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765553;}
case 0x765553:{ // SHL CH,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x5,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x5),0x1ull));
wu<1>(c,0x9a100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9a100)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765555;}
case 0x765555:{ // SAR CH,0x1
wr<1>(c,0x200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0x1ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x5),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765557;}
case 0x765557:{ // ROL CH,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x8ea00,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x5),0x1ull));
wr<1>(c,0x5,eval<Op::INT_OR,1,1,1>(u<1>(c,0x8ea00),r<1>(c,0x200)));
wu<1>(c,0x8ec00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x8ec00)));
return 0x765559;}
case 0x765559:{ // MOV AL,CH
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0x5)));
return 0x76555b;}
case 0x76555b:{ // AND AL,0xf
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76555d;}
case 0x76555d:{ // XLAT EBX
wu<4>(c,0xa6500,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0xa6600,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x0)));
wu<4>(c,0xa6500,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0xa6600)));
wr<1>(c,0x0,m<1>(c,u<4>(c,0xa6500)));
return 0x76555e;}
case 0x76555e:{ // MOV AH,AL
wr<1>(c,0x1,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x765560;}
case 0x765560:{ // SHL CL,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x4,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x4),0x1ull));
wu<1>(c,0x9a100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9a100)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765562;}
case 0x765562:{ // SAR CL,0x1
wr<1>(c,0x200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0x1ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x4,eval<Op::INT_SRIGHT,1,1,4>(r<1>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765564;}
case 0x765564:{ // ROL CL,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x8ea00,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x4),0x1ull));
wr<1>(c,0x4,eval<Op::INT_OR,1,1,1>(u<1>(c,0x8ea00),r<1>(c,0x200)));
wu<1>(c,0x8ec00,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x8ec00)));
return 0x765566;}
case 0x765566:{ // MOV AL,CL
wr<1>(c,0x0,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x765568;}
case 0x765568:{ // AND AL,0xf
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xfull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76556a;}
case 0x76556a:{ // XLAT EBX
wu<4>(c,0xa6500,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0xa6600,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x0)));
wu<4>(c,0xa6500,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),u<4>(c,0xa6600)));
wr<1>(c,0x0,m<1>(c,u<4>(c,0xa6500)));
return 0x76556b;}
case 0x76556b:{ // SHL AH,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1),0x0ull));
wr<1>(c,0x1,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x1),0x1ull));
wu<1>(c,0x9a100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9a100)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x1),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76556d;}
case 0x76556d:{ // SHL AH,0x1
wr<1>(c,0x200,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1),0x0ull));
wr<1>(c,0x1,eval<Op::INT_LEFT,1,1,4>(r<1>(c,0x1),0x1ull));
wu<1>(c,0x9a100,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x9a100)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x1),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x1),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76556f;}
case 0x76556f:{ // OR AL,AH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_OR,1,1,1>(r<1>(c,0x0),r<1>(c,0x1)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765571;}
case 0x765571:{ // MOVSX EAX,AL
wr<4>(c,0x0,eval<Op::INT_SEXT,4,1>(r<1>(c,0x0)));
return 0x765574;}
case 0x765574:{ // AND ECX,0x404
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x404ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76557a;}
case 0x76557a:{ // MOV EBX,EDX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x76557c;}
case 0x76557c:{ // ADD EBX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76557e;}
case 0x76557e:{ // ADD EBX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x10ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765581;}
case 0x765581:{ // JMP dword ptr [EBX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0xc)));
return uint32_t(u<4>(c,0x17200));
return 0x765583;}
case 0x765594:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765594ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765596;}
case 0x765596:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765596ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765598;}
case 0x765598:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765598ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x76559a;}
case 0x76559a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x76559b;}
case 0x7655cd:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7655cdull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x7655cf;}
case 0x7655cf:{ // FSTP extended double ptr [EBP + 0xffffff62]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff62ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7655cfull));
wu<10>(c,0xab00,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wm<10>(c,u<4>(c,0x6800),u<10>(c,0xab00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7655d5;}
case 0x7655d5:{ // FLD extended double ptr [EBP + 0xffffff62]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff62ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7655d5ull));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wu<10>(c,0xab00,m<10>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xab00)));
return 0x7655db;}
case 0x7655db:{ // TEST byte ptr [EBP + 0xffffff69],0x40
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff69ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7655e2;}
case 0x7655e2:{ // JZ 0x007655ed
if(r<1>(c,0x206)){return 0x7655ed;}
return 0x7655e4;}
case 0x7655e4:{ // MOV byte ptr [EBP + 0xffffff70],0x7
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x7ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x7655eb;}
case 0x7655eb:{ // JMP 0x007655f4
return 0x7655f4;
return 0x7655ed;}
case 0x7655ed:{ // MOV byte ptr [EBP + 0xffffff70],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x1ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x7655f4;}
case 0x7655f4:{ // FADDP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7655f4ull));
wr<10>(c,0x1110,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7655f6;}
case 0x7655f6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7655f7;}
case 0x7655f7:{ // FSTP extended double ptr [EBP + 0xffffff62]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff62ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7655f7ull));
wu<10>(c,0xab00,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wm<10>(c,u<4>(c,0x6800),u<10>(c,0xab00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7655fd;}
case 0x7655fd:{ // FLD extended double ptr [EBP + 0xffffff62]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff62ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7655fdull));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wu<10>(c,0xab00,m<10>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xab00)));
return 0x765603;}
case 0x765603:{ // TEST byte ptr [EBP + 0xffffff69],0x40
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff69ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76560a;}
case 0x76560a:{ // JZ 0x0076562c
if(r<1>(c,0x206)){return 0x76562c;}
return 0x76560c;}
case 0x76560c:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76560cull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x76560e;}
case 0x76560e:{ // FSTP extended double ptr [EBP + 0xffffff62]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff62ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76560eull));
wu<10>(c,0xab00,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wm<10>(c,u<4>(c,0x6800),u<10>(c,0xab00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765614;}
case 0x765614:{ // FLD extended double ptr [EBP + 0xffffff62]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff62ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765614ull));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wu<10>(c,0xab00,m<10>(c,u<4>(c,0x6800)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xab00)));
return 0x76561a;}
case 0x76561a:{ // TEST byte ptr [EBP + 0xffffff69],0x40
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff69ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x40ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765621;}
case 0x765621:{ // JZ 0x0076562c
if(r<1>(c,0x206)){return 0x76562c;}
return 0x765623;}
case 0x765623:{ // MOV byte ptr [EBP + 0xffffff70],0x7
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x7ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x76562a;}
case 0x76562a:{ // JMP 0x00765633
return 0x765633;
return 0x76562c;}
case 0x76562c:{ // MOV byte ptr [EBP + 0xffffff70],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x1ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x765633;}
case 0x765633:{ // FADDP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765633ull));
wr<10>(c,0x1110,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765635;}
case 0x765635:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765636;}
case 0x765636:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765636ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765638;}
case 0x765638:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765638ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x76563a;}
case 0x76563a:{ // FLD extended double ptr [0x0081a4d0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76563aull));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(m<10>(c,0x81a4d0)));
return 0x765640;}
case 0x765640:{ // CMP byte ptr [EBP + 0xffffff70],0x0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x0ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765647;}
case 0x765647:{ // JG 0x00765650
wu<1>(c,0x18d00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
wu<1>(c,0x18e00,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
wu<1>(c,0x19000,eval<Op::BOOL_AND,1,1,1>(u<1>(c,0x18d00),u<1>(c,0x18e00)));
if(u<1>(c,0x19000)){return 0x765650;}
return 0x765649;}
case 0x765649:{ // MOV byte ptr [EBP + 0xffffff70],0x1
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffff70ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x1ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x765650;}
case 0x765650:{ // OR CL,CL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x4,eval<Op::INT_OR,1,1,1>(r<1>(c,0x4),r<1>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765652;}
case 0x765652:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765653;}
case 0x765660:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765661;}
case 0x765661:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x765663;}
case 0x765663:{ // ADD ESP,-0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xffffffe0ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xffffffe0ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xffffffe0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765666;}
case 0x765666:{ // MOV dword ptr [EBP + -0x20],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765669;}
case 0x765669:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76566c;}
case 0x76566c:{ // MOV dword ptr [EBP + -0x10],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76566f;}
case 0x76566f:{ // MOV EAX,dword ptr [EBP + 0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x1cull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765672;}
case 0x765672:{ // MOV dword ptr [EBP + -0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765675;}
case 0x765675:{ // JMP 0x00765680
return 0x765680;
return 0x765677;}
case 0x765677:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765678;}
case 0x765678:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x76567a;}
case 0x76567a:{ // ADD ESP,-0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xffffffe0ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xffffffe0ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xffffffe0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76567d;}
case 0x76567d:{ // MOV dword ptr [EBP + -0x20],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765680;}
case 0x765680:{ // FSTP double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765680ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765683;}
case 0x765683:{ // MOV dword ptr [EBP + -0x1c],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765686;}
case 0x765686:{ // MOV EAX,dword ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765689;}
case 0x765689:{ // MOV ECX,dword ptr [EBP + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76568c;}
case 0x76568c:{ // MOV dword ptr [EBP + -0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x76568f;}
case 0x76568f:{ // MOV dword ptr [EBP + -0x14],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffecull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765692;}
case 0x765692:{ // LEA EAX,[EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x765695;}
case 0x765695:{ // LEA ECX,[EBP + -0x20]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x765698;}
case 0x765698:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765699;}
case 0x765699:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76569a;}
case 0x76569a:{ // PUSH EDX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76569b;}
case 0x76569b:{ // CALL 0x0076cb75
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7656a0ull);
return 0x76cb75;
return 0x7656a0;}
case 0x7656a0:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7656a3;}
case 0x7656a3:{ // FLD double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656a3ull));
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
return 0x7656a6;}
case 0x7656a6:{ // CMP word ptr [EBP + 0x8],0x27f
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x61200,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61200),0x27full));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61200),0x27full));
wu<2>(c,0x61400,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61200),0x27full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61400),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61400),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61400),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7656ac;}
case 0x7656ac:{ // JZ 0x007656b1
if(r<1>(c,0x206)){return 0x7656b1;}
return 0x7656ae;}
case 0x7656ae:{ // FLDCW word ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<2>(c,0x10a0,eval<Op::COPY,2,2>(u<2>(c,0xa200)));
x87_load_control(uint16_t(r<2>(c,0x10a0)));
return 0x7656b1;}
case 0x7656b1:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x7656b2;}
case 0x7656b2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7656b3;}
case 0x7656c0:{ // FLD ST0
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x7656c2;}
case 0x7656c2:{ // FRNDINT
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656c2ull));
wr<10>(c,0x1100,float_op("ROUND",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x7656c4;}
case 0x7656c4:{ // FSUBR ST1,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656c4ull));
wr<10>(c,0x1110,float_op("FLOAT_SUB",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x7656c6;}
case 0x7656c6:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656c6ull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x7656c8;}
case 0x7656c8:{ // FCHS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656c8ull));
wr<10>(c,0x1100,float_op("FLOAT_NEG",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x7656ca;}
case 0x7656ca:{ // F2XM1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656caull));
wr<10>(c,0x1100,user_op(c,655465,{r<10>(c,0x1100)}));
return 0x7656cc;}
case 0x7656cc:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656ccull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x7656ce;}
case 0x7656ce:{ // FADDP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656ceull));
wr<10>(c,0x1110,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7656d0;}
case 0x7656d0:{ // FSCALE
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656d0ull));
wr<10>(c,0x1100,user_op(c,655473,{r<10>(c,0x1100),r<10>(c,0x1110)}));
return 0x7656d2;}
case 0x7656d2:{ // FSTP ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656d2ull));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7656d4;}
case 0x7656d4:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7656d5;}
case 0x7656d5:{ // MOV EDX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7656d9;}
case 0x7656d9:{ // AND EDX,0x300
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0x300ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7656df;}
case 0x7656df:{ // OR EDX,0x7f
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_OR,4,4,4>(r<4>(c,0x8),0x7full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7656e2;}
case 0x7656e2:{ // MOV word ptr [ESP + 0x6],DX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x6ull,r<4>(c,0x10)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x8)));
wm<2>(c,u<4>(c,0x7600),u<2>(c,0xa200));
return 0x7656e7;}
case 0x7656e7:{ // FLDCW word ptr [ESP + 0x6]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x6ull,r<4>(c,0x10)));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x7600)));
wr<2>(c,0x10a0,eval<Op::COPY,2,2>(u<2>(c,0xa200)));
x87_load_control(uint16_t(r<2>(c,0x10a0)));
return 0x7656eb;}
case 0x7656eb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7656ec;}
case 0x7656ec:{ // TEST EAX,0x80000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa3a00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x80000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa3a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7656f1;}
case 0x7656f1:{ // JZ 0x007656f9
if(r<1>(c,0x206)){return 0x7656f9;}
return 0x7656f3;}
case 0x7656f3:{ // MOV EAX,0x7
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7ull));
return 0x7656f8;}
case 0x7656f8:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7656f9;}
case 0x7656f9:{ // FADD double ptr [0x007d7c40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7656f9ull));
wu<10>(c,0xa9700,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c40),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9700),10,10));
return 0x7656ff;}
case 0x7656ff:{ // MOV EAX,0x1
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x1ull));
return 0x765704;}
case 0x765704:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765705;}
case 0x765705:{ // MOV EAX,dword ptr [EDX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765708;}
case 0x765708:{ // AND EAX,0x7ff00000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76570d;}
case 0x76570d:{ // CMP EAX,0x7ff00000
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765712;}
case 0x765712:{ // JZ 0x00765717
if(r<1>(c,0x206)){return 0x765717;}
return 0x765714;}
case 0x765714:{ // FLD double ptr [EDX]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765714ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wu<8>(c,0xaa00,m<8>(c,r<4>(c,0x8)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
return 0x765716;}
case 0x765716:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765717;}
case 0x765717:{ // MOV EAX,dword ptr [EDX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76571a;}
case 0x76571a:{ // SUB ESP,0xa
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0xaull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0xaull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0xaull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76571d;}
case 0x76571d:{ // OR EAX,0x7fff0000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),0x7fff0000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765722;}
case 0x765722:{ // MOV dword ptr [ESP + 0x6],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x6ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x765726;}
case 0x765726:{ // MOV EAX,dword ptr [EDX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765729;}
case 0x765729:{ // MOV ECX,dword ptr [EDX]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76572b;}
case 0x76572b:{ // SHLD EAX,ECX,0xb
wu<4>(c,0x9d200,eval<Op::INT_AND,4,4,4>(0xbull,0x1full));
wu<4>(c,0x9d300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wu<4>(c,0x9d400,eval<Op::INT_LEFT,4,4,4>(r<4>(c,0x0),u<4>(c,0x9d200)));
wu<4>(c,0x9d500,eval<Op::INT_SUB,4,4,4>(0x20ull,u<4>(c,0x9d200)));
wu<4>(c,0x9d600,eval<Op::INT_RIGHT,4,4,4>(r<4>(c,0x4),u<4>(c,0x9d500)));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(u<4>(c,0x9d400),u<4>(c,0x9d600)));
wu<1>(c,0x4c600,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x9d200),0x0ull));
wu<4>(c,0x4c700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x9d200),0x1ull));
wu<4>(c,0x4c800,eval<Op::INT_LEFT,4,4,4>(u<4>(c,0x9d300),u<4>(c,0x4c700)));
wu<1>(c,0x4c900,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x4c800),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4c600)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4c600)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4c900)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4ca00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x9d200),0x1ull));
wu<1>(c,0x4cb00,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wu<1>(c,0x4cc00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4cb00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4cc00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ca00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x49d00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x9d200),0x0ull));
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
return 0x76572f;}
case 0x76572f:{ // SHL ECX,0xb
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0xbull,0x1full));
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
return 0x765732;}
case 0x765732:{ // MOV dword ptr [ESP + 0x4],EAX
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x7600),u<4>(c,0xa300));
return 0x765736;}
case 0x765736:{ // MOV dword ptr [ESP],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa300));
return 0x765739;}
case 0x765739:{ // FLD extended double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765739ull));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wu<10>(c,0xab00,m<10>(c,r<4>(c,0x10)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xab00)));
return 0x76573c;}
case 0x76573c:{ // ADD ESP,0xa
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xaull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xaull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xaull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76573f;}
case 0x76573f:{ // TEST EAX,0x0
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa3a00,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa3a00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa3a00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765744;}
case 0x765744:{ // MOV EAX,dword ptr [EDX + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765747;}
case 0x765747:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765748;}
case 0x765748:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76574c;}
case 0x76574c:{ // AND EAX,0x7ff00000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765751;}
case 0x765751:{ // CMP EAX,0x7ff00000
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765756;}
case 0x765756:{ // JZ 0x00765759
if(r<1>(c,0x206)){return 0x765759;}
return 0x765758;}
case 0x765758:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765759;}
case 0x765759:{ // MOV EAX,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76575d;}
case 0x76575d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x76575e;}
case 0x76575e:{ // CMP word ptr [ESP],0x27f
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x10)));
wu<2>(c,0x61200,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(u<2>(c,0x61200),0x27full));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(u<2>(c,0x61200),0x27full));
wu<2>(c,0x61400,eval<Op::INT_SUB,2,2,2>(u<2>(c,0x61200),0x27full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x61400),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x61400),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x61400),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765764;}
case 0x765764:{ // JZ 0x00765769
if(r<1>(c,0x206)){return 0x765769;}
return 0x765766;}
case 0x765766:{ // FLDCW word ptr [ESP]
wu<2>(c,0xa200,m<2>(c,r<4>(c,0x10)));
wr<2>(c,0x10a0,eval<Op::COPY,2,2>(u<2>(c,0xa200)));
x87_load_control(uint16_t(r<2>(c,0x10a0)));
return 0x765769;}
case 0x765769:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x76576a;}
case 0x76576a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x76576b;}
case 0x76576b:{ // MOV AX,word ptr [ESP]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x10)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x76576f;}
case 0x76576f:{ // CMP AX,0x27f
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x0),0x27full));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x0),0x27full));
wu<2>(c,0x60c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x0),0x27full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x60c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x60c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x60c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765773;}
case 0x765773:{ // JZ 0x00765793
if(r<1>(c,0x206)){return 0x765793;}
return 0x765775;}
case 0x765775:{ // AND AX,0x20
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<2>(c,0x0,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x0),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765779;}
case 0x765779:{ // JZ 0x00765790
if(r<1>(c,0x206)){return 0x765790;}
return 0x76577b;}
case 0x76577b:{ // FSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x76577e;}
case 0x76577e:{ // AND AX,0x20
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<2>(c,0x0,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x0),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765782;}
case 0x765782:{ // JZ 0x00765790
if(r<1>(c,0x206)){return 0x765790;}
return 0x765784;}
case 0x765784:{ // MOV EAX,0x8
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x8ull));
return 0x765789;}
case 0x765789:{ // CALL 0x00765677
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x76578eull);
return 0x765677;
return 0x76578e;}
case 0x76578e:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x76578f;}
case 0x76578f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765790;}
case 0x765790:{ // FLDCW word ptr [ESP]
wu<2>(c,0xa200,m<2>(c,r<4>(c,0x10)));
wr<2>(c,0x10a0,eval<Op::COPY,2,2>(u<2>(c,0xa200)));
x87_load_control(uint16_t(r<2>(c,0x10a0)));
return 0x765793;}
case 0x765793:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765794;}
case 0x765794:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765795;}
case 0x7657a9:{ // SUB ESP,0x8
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7657ac;}
case 0x7657ac:{ // FST double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7657acull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
return 0x7657af;}
case 0x7657af:{ // MOV EAX,dword ptr [ESP + 0x4]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x7657b3;}
case 0x7657b3:{ // ADD ESP,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x8ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7657b6;}
case 0x7657b6:{ // AND EAX,0x7ff00000
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7657bb;}
case 0x7657bb:{ // JZ 0x007657fa
if(r<1>(c,0x206)){return 0x7657fa;}
return 0x7657bd;}
case 0x7657bd:{ // CMP EAX,0x7ff00000
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x7ff00000ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x7ff00000ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7657c2;}
case 0x7657c2:{ // JZ 0x00765823
if(r<1>(c,0x206)){return 0x765823;}
return 0x7657c4;}
case 0x7657c4:{ // MOV AX,word ptr [ESP]
wu<2>(c,0x17100,m<2>(c,r<4>(c,0x10)));
wr<2>(c,0x0,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x7657c8;}
case 0x7657c8:{ // CMP AX,0x27f
wr<1>(c,0x200,eval<Op::INT_LESS,1,2,2>(r<2>(c,0x0),0x27full));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,2,2>(r<2>(c,0x0),0x27full));
wu<2>(c,0x60c00,eval<Op::INT_SUB,2,2,2>(r<2>(c,0x0),0x27full));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0x60c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0x60c00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0x60c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7657cc;}
case 0x7657cc:{ // JZ 0x007657f8
if(r<1>(c,0x206)){return 0x7657f8;}
return 0x7657ce;}
case 0x7657ce:{ // AND AX,0x20
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<2>(c,0x0,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x0),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7657d2;}
case 0x7657d2:{ // JNZ 0x007657f5
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7657f5;}
return 0x7657d4;}
case 0x7657d4:{ // FSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x7657d7;}
case 0x7657d7:{ // AND AX,0x20
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<2>(c,0x0,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(r<2>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(r<2>(c,0x0),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(r<2>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7657db;}
case 0x7657db:{ // JZ 0x007657f5
if(r<1>(c,0x206)){return 0x7657f5;}
return 0x7657dd;}
case 0x7657dd:{ // MOV EAX,0x8
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x8ull));
return 0x7657e2;}
case 0x7657e2:{ // CMP EDX,0x1d
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1dull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1dull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1dull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7657e5;}
case 0x7657e5:{ // JZ 0x007657ee
if(r<1>(c,0x206)){return 0x7657ee;}
return 0x7657e7;}
case 0x7657e7:{ // CALL 0x00765677
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7657ecull);
return 0x765677;
return 0x7657ec;}
case 0x7657ec:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7657ed;}
case 0x7657ed:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7657ee;}
case 0x7657ee:{ // CALL 0x00765660
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7657f3ull);
return 0x765660;
return 0x7657f3;}
case 0x7657f3:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7657f4;}
case 0x7657f4:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7657f5;}
case 0x7657f5:{ // FLDCW word ptr [ESP]
wu<2>(c,0xa200,m<2>(c,r<4>(c,0x10)));
wr<2>(c,0x10a0,eval<Op::COPY,2,2>(u<2>(c,0xa200)));
x87_load_control(uint16_t(r<2>(c,0x10a0)));
return 0x7657f8;}
case 0x7657f8:{ // POP EDX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7657f9;}
case 0x7657f9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7657fa;}
case 0x7657fa:{ // FLD double ptr [0x007d7c6c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7657faull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c6c),8,0x0ull,4,10));
return 0x765800;}
case 0x765800:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765800ull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x765802;}
case 0x765802:{ // FSCALE
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765802ull));
wr<10>(c,0x1100,user_op(c,655473,{r<10>(c,0x1100),r<10>(c,0x1110)}));
return 0x765804;}
case 0x765804:{ // FSTP ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765804ull));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765806;}
case 0x765806:{ // FLD ST0
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x765808;}
case 0x765808:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765808ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x76580a;}
case 0x76580a:{ // FCOMP double ptr [0x007d7c5c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76580aull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c5c),8,0x0ull,4,10));
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
return 0x765810;}
case 0x765810:{ // FSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x765813;}
case 0x765813:{ // SAHF
wu<1>(c,0x96c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x80ull));
wr<1>(c,0x207,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x96c00),0x0ull));
wu<1>(c,0x96e00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x40ull));
wr<1>(c,0x206,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x96e00),0x0ull));
wu<1>(c,0x97000,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x10ull));
wr<1>(c,0x204,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x97000),0x0ull));
wu<1>(c,0x97200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x4ull));
wr<1>(c,0x202,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x97200),0x0ull));
wu<1>(c,0x97400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x97400),0x0ull));
return 0x765814;}
case 0x765814:{ // MOV EAX,0x4
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x4ull));
return 0x765819;}
case 0x765819:{ // JNC 0x007657e2
wu<1>(c,0x17a00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x200)));
if(u<1>(c,0x17a00)){return 0x7657e2;}
return 0x76581b;}
case 0x76581b:{ // FMUL double ptr [0x007d7c7c]
wu<10>(c,0xb1700,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c7c),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1700),10,10));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76581bull));
return 0x765821;}
case 0x765821:{ // JMP 0x007657e2
return 0x7657e2;
return 0x765823;}
case 0x765823:{ // FLD double ptr [0x007d7c64]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765823ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c64),8,0x0ull,4,10));
return 0x765829;}
case 0x765829:{ // FXCH
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765829ull));
wu<10>(c,0xba900,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(u<10>(c,0xba900)));
return 0x76582b;}
case 0x76582b:{ // FSCALE
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76582bull));
wr<10>(c,0x1100,user_op(c,655473,{r<10>(c,0x1100),r<10>(c,0x1110)}));
return 0x76582d;}
case 0x76582d:{ // FSTP ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76582dull));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x76582f;}
case 0x76582f:{ // FLD ST0
wu<10>(c,0xaf400,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf400)));
return 0x765831;}
case 0x765831:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765831ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x765833;}
case 0x765833:{ // FCOMP double ptr [0x007d7c54]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765833ull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c54),8,0x0ull,4,10));
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
return 0x765839;}
case 0x765839:{ // FSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x76583c;}
case 0x76583c:{ // SAHF
wu<1>(c,0x96c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x80ull));
wr<1>(c,0x207,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x96c00),0x0ull));
wu<1>(c,0x96e00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x40ull));
wr<1>(c,0x206,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x96e00),0x0ull));
wu<1>(c,0x97000,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x10ull));
wr<1>(c,0x204,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x97000),0x0ull));
wu<1>(c,0x97200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x4ull));
wr<1>(c,0x202,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x97200),0x0ull));
wu<1>(c,0x97400,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x1ull));
wr<1>(c,0x200,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x97400),0x0ull));
return 0x76583d;}
case 0x76583d:{ // MOV EAX,0x3
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x3ull));
return 0x765842;}
case 0x765842:{ // JBE 0x007657e2
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x7657e2;}
return 0x765844;}
case 0x765844:{ // FMUL double ptr [0x007d7c74]
wu<10>(c,0xb1700,float_op("FLOAT2FLOAT",m<8>(c,0x7d7c74),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1700),10,10));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765844ull));
return 0x76584a;}
case 0x76584a:{ // JMP 0x007657e2
return 0x7657e2;
return 0x76584c;}
case 0x76584c:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76584d;}
case 0x76584d:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x76584f;}
case 0x76584f:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765850;}
case 0x765850:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765851;}
case 0x765851:{ // FLD double ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765851ull));
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
return 0x765854;}
case 0x765854:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765855;}
case 0x765855:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765856;}
case 0x765856:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765856ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765859;}
case 0x765859:{ // CALL 0x0075dc8e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x76585eull);
return 0x75dc8e;
return 0x76585e;}
case 0x76585e:{ // TEST AL,0x90
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3600,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0x90ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3600),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765860;}
case 0x765860:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765861;}
case 0x765861:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765862;}
case 0x765862:{ // JNZ 0x007658b2
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7658b2;}
return 0x765864;}
case 0x765864:{ // FLD double ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765864ull));
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
return 0x765867;}
case 0x765867:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765868;}
case 0x765868:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765869;}
case 0x765869:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765869ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x76586c;}
case 0x76586c:{ // CALL 0x0076cc73
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765871ull);
return 0x76cc73;
return 0x765871;}
case 0x765871:{ // FSTP double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765871ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765874;}
case 0x765874:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765875;}
case 0x765875:{ // FLD double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765875ull));
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
return 0x765878;}
case 0x765878:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765879;}
case 0x765879:{ // FCOMP double ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765879ull));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x6600)));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
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
return 0x76587c;}
case 0x76587c:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x76587e;}
case 0x76587e:{ // TEST AH,0x44
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765881;}
case 0x765881:{ // JP 0x007658b2
if(r<1>(c,0x202)){return 0x7658b2;}
return 0x765883;}
case 0x765883:{ // FLD double ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765883ull));
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
return 0x765886;}
case 0x765886:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765887;}
case 0x765887:{ // FDIV double ptr [0x00787ad0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765887ull));
wu<10>(c,0xabd00,float_op("FLOAT2FLOAT",m<8>(c,0x787ad0),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabd00),10,10));
return 0x76588d;}
case 0x76588d:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x76588e;}
case 0x76588e:{ // FSTP double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76588eull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765891;}
case 0x765891:{ // FLD double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765891ull));
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
return 0x765894;}
case 0x765894:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765894ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765897;}
case 0x765897:{ // CALL 0x0076cc73
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x76589cull);
return 0x76cc73;
return 0x76589c;}
case 0x76589c:{ // FCOMP double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76589cull));
wu<8>(c,0xaa00,m<8>(c,u<4>(c,0x6600)));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",u<8>(c,0xaa00),8,0x0ull,4,10));
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
return 0x76589f;}
case 0x76589f:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7658a0;}
case 0x7658a0:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7658a1;}
case 0x7658a1:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x7658a3;}
case 0x7658a3:{ // TEST AH,0x44
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x44ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658a6;}
case 0x7658a6:{ // JP 0x007658ad
if(r<1>(c,0x202)){return 0x7658ad;}
return 0x7658a8;}
case 0x7658a8:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x7658aa;}
case 0x7658aa:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7658ab;}
case 0x7658ab:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x7658ac;}
case 0x7658ac:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7658ad;}
case 0x7658ad:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658af;}
case 0x7658af:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658b0;}
case 0x7658b0:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x7658b1;}
case 0x7658b1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7658b2;}
case 0x7658b2:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658b4;}
case 0x7658b4:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x7658b5;}
case 0x7658b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x7658b6;}
case 0x7658b6:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7658b7;}
case 0x7658b7:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x7658b9;}
case 0x7658b9:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7658ba;}
case 0x7658ba:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7658bb;}
case 0x7658bb:{ // FLD double ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7658bbull));
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
return 0x7658be;}
case 0x7658be:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7658bf;}
case 0x7658bf:{ // FCOM double ptr [0x00786e60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7658bfull));
wu<10>(c,0xab400,float_op("FLOAT2FLOAT",m<8>(c,0x786e60),8,0x0ull,4,10));
wr<1>(c,0x1091,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0x4e500,float_op("FLOAT_NAN",r<10>(c,0x1100),10,0x0ull,4,1));
wu<1>(c,0x4e600,float_op("FLOAT_NAN",u<10>(c,0xab400),10,0x0ull,4,1));
wr<1>(c,0x1092,eval<Op::BOOL_OR,1,1,1>(u<1>(c,0x4e500),u<1>(c,0x4e600)));
wu<1>(c,0x4e800,float_op("FLOAT_LESS",r<10>(c,0x1100),10,u<10>(c,0xab400),10,1));
wr<1>(c,0x1090,eval<Op::INT_OR,1,1,1>(r<1>(c,0x1092),u<1>(c,0x4e800)));
wu<1>(c,0x4ea00,float_op("FLOAT_EQUAL",r<10>(c,0x1100),10,u<10>(c,0xab400),10,1));
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
return 0x7658c5;}
case 0x7658c5:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658c7;}
case 0x7658c7:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658c9;}
case 0x7658c9:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x7658cb;}
case 0x7658cb:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658ce;}
case 0x7658ce:{ // JP 0x007658d2
if(r<1>(c,0x202)){return 0x7658d2;}
return 0x7658d0;}
case 0x7658d0:{ // FCHS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7658d0ull));
wr<10>(c,0x1100,float_op("FLOAT_NEG",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x7658d2;}
case 0x7658d2:{ // MOV EAX,0x7ff00000
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x7ff00000ull));
return 0x7658d7;}
case 0x7658d7:{ // FSTP double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7658d7ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7658da;}
case 0x7658da:{ // CMP dword ptr [EBP + 0x14],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
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
return 0x7658dd;}
case 0x7658dd:{ // MOV ECX,0xfff00000
wr<4>(c,0x4,eval<Op::COPY,4,4>(0xfff00000ull));
return 0x7658e2;}
case 0x7658e2:{ // JNZ 0x00765922
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765922;}
return 0x7658e4;}
case 0x7658e4:{ // CMP dword ptr [EBP + 0x10],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658e7;}
case 0x7658e7:{ // JNZ 0x00765961
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765961;}
return 0x7658e9;}
case 0x7658e9:{ // FLD double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7658e9ull));
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
return 0x7658ec;}
case 0x7658ec:{ // FCOMP double ptr [0x00786e68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7658ecull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x786e68),8,0x0ull,4,10));
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
return 0x7658f2;}
case 0x7658f2:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x7658f4;}
case 0x7658f4:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7658f7;}
case 0x7658f7:{ // JZ 0x0076597f
if(r<1>(c,0x206)){return 0x76597f;}
return 0x7658fd;}
case 0x7658fd:{ // FLD double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7658fdull));
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
return 0x765900;}
case 0x765900:{ // FCOMP double ptr [0x00786e68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765900ull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x786e68),8,0x0ull,4,10));
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
return 0x765906;}
case 0x765906:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x765908;}
case 0x765908:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76590b;}
case 0x76590b:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76590e;}
case 0x76590e:{ // JNP 0x0076599d
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x76599d;}
return 0x765914;}
case 0x765914:{ // FLD double ptr [0x0081a818]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765914ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x81a818),8,0x0ull,4,10));
return 0x76591a;}
case 0x76591a:{ // XOR ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x18,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76591c;}
case 0x76591c:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76591d;}
case 0x76591d:{ // JMP 0x00765a11
return 0x765a11;
return 0x765922;}
case 0x765922:{ // CMP dword ptr [EBP + 0x14],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x14ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765925;}
case 0x765925:{ // JNZ 0x00765961
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765961;}
return 0x765927;}
case 0x765927:{ // CMP dword ptr [EBP + 0x10],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76592a;}
case 0x76592a:{ // JNZ 0x00765961
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765961;}
return 0x76592c;}
case 0x76592c:{ // FLD double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76592cull));
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
return 0x76592f;}
case 0x76592f:{ // FCOMP double ptr [0x00786e68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76592full));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x786e68),8,0x0ull,4,10));
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
return 0x765935;}
case 0x765935:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x765937;}
case 0x765937:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76593a;}
case 0x76593a:{ // JNZ 0x00765943
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765943;}
return 0x76593c;}
case 0x76593c:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76593cull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x76593e;}
case 0x76593e:{ // JMP 0x00765a0e
return 0x765a0e;
return 0x765943;}
case 0x765943:{ // FLD double ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765943ull));
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
return 0x765946;}
case 0x765946:{ // FCOMP double ptr [0x00786e68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765946ull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x786e68),8,0x0ull,4,10));
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
return 0x76594c;}
case 0x76594c:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x76594e;}
case 0x76594e:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765951;}
case 0x765951:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765954;}
case 0x765954:{ // JP 0x00765914
if(r<1>(c,0x202)){return 0x765914;}
return 0x765956;}
case 0x765956:{ // FLD double ptr [0x0081a810]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765956ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x81a810),8,0x0ull,4,10));
return 0x76595c;}
case 0x76595c:{ // JMP 0x00765a11
return 0x765a11;
return 0x765961;}
case 0x765961:{ // CMP dword ptr [EBP + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
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
return 0x765964;}
case 0x765964:{ // JNZ 0x007659a5
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7659a5;}
return 0x765966;}
case 0x765966:{ // CMP dword ptr [EBP + 0x8],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765969;}
case 0x765969:{ // JNZ 0x00765a13
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765a13;}
return 0x76596f;}
case 0x76596f:{ // FLD double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76596full));
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
return 0x765972;}
case 0x765972:{ // FCOMP double ptr [0x00786e60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765972ull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x786e60),8,0x0ull,4,10));
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
return 0x765978;}
case 0x765978:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x76597a;}
case 0x76597a:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x76597d;}
case 0x76597d:{ // JNZ 0x0076598a
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x76598a;}
return 0x76597f;}
case 0x76597f:{ // FLD double ptr [0x0081a810]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76597full));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x81a810),8,0x0ull,4,10));
return 0x765985;}
case 0x765985:{ // JMP 0x00765a0e
return 0x765a0e;
return 0x76598a;}
case 0x76598a:{ // FLD double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76598aull));
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
return 0x76598d;}
case 0x76598d:{ // FCOMP double ptr [0x00786e60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76598dull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x786e60),8,0x0ull,4,10));
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
return 0x765993;}
case 0x765993:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x765995;}
case 0x765995:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765998;}
case 0x765998:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x76599b;}
case 0x76599b:{ // JP 0x007659a1
if(r<1>(c,0x202)){return 0x7659a1;}
return 0x76599d;}
case 0x76599d:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x76599dull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x76599f;}
case 0x76599f:{ // JMP 0x00765a11
return 0x765a11;
return 0x7659a1;}
case 0x7659a1:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659a1ull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x7659a3;}
case 0x7659a3:{ // JMP 0x00765a11
return 0x765a11;
return 0x7659a5;}
case 0x7659a5:{ // CMP dword ptr [EBP + 0xc],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7659a8;}
case 0x7659a8:{ // JNZ 0x00765a13
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765a13;}
return 0x7659aa;}
case 0x7659aa:{ // CMP dword ptr [EBP + 0x8],EDX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7659ad;}
case 0x7659ad:{ // JNZ 0x00765a13
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765a13;}
return 0x7659af;}
case 0x7659af:{ // FLD double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659afull));
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
return 0x7659b2;}
case 0x7659b2:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7659b3;}
case 0x7659b3:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x7659b4;}
case 0x7659b4:{ // FSTP double ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659b4ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x10),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7659b7;}
case 0x7659b7:{ // CALL 0x0076584c
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x7659bcull);
return 0x76584c;
return 0x7659bc;}
case 0x7659bc:{ // FLD double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659bcull));
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
return 0x7659bf;}
case 0x7659bf:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7659c0;}
case 0x7659c0:{ // FCOMP double ptr [0x00786e60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659c0ull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x786e60),8,0x0ull,4,10));
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
return 0x7659c6;}
case 0x7659c6:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x7659c7;}
case 0x7659c7:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x7659c9;}
case 0x7659c9:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x7659cb;}
case 0x7659cb:{ // TEST AH,0x41
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7659ce;}
case 0x7659ce:{ // JNZ 0x007659e5
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7659e5;}
return 0x7659d0;}
case 0x7659d0:{ // CMP ECX,0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7659d3;}
case 0x7659d3:{ // FLD double ptr [0x0081a810]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659d3ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x81a810),8,0x0ull,4,10));
return 0x7659d9;}
case 0x7659d9:{ // JNZ 0x007659dd
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x7659dd;}
return 0x7659db;}
case 0x7659db:{ // FCHS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659dbull));
wr<10>(c,0x1100,float_op("FLOAT_NEG",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x7659dd;}
case 0x7659dd:{ // FSTP double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659ddull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x7659e0;}
case 0x7659e0:{ // FLD double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659e0ull));
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
return 0x7659e3;}
case 0x7659e3:{ // JMP 0x00765a0e
return 0x765a0e;
return 0x7659e5;}
case 0x7659e5:{ // FLD double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659e5ull));
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
return 0x7659e8;}
case 0x7659e8:{ // FCOMP double ptr [0x00786e60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659e8ull));
wu<10>(c,0xab800,float_op("FLOAT2FLOAT",m<8>(c,0x786e60),8,0x0ull,4,10));
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
return 0x7659ee;}
case 0x7659ee:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x7659f0;}
case 0x7659f0:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7659f3;}
case 0x7659f3:{ // JP 0x00765a0c
if(r<1>(c,0x202)){return 0x765a0c;}
return 0x7659f5;}
case 0x7659f5:{ // CMP ECX,0x1
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x7659f8;}
case 0x7659f8:{ // JNZ 0x00765a02
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765a02;}
return 0x7659fa;}
case 0x7659fa:{ // FLD double ptr [0x0081a830]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x7659faull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x81a830),8,0x0ull,4,10));
return 0x765a00;}
case 0x765a00:{ // JMP 0x00765a04
return 0x765a04;
return 0x765a02;}
case 0x765a02:{ // FLDZ
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765a02ull));
wu<10>(c,0xb0900,float_op("INT2FLOAT",0x0ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xb0900)));
return 0x765a04;}
case 0x765a04:{ // FSTP double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765a04ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,u<4>(c,0x6600),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765a07;}
case 0x765a07:{ // FLD double ptr [EBP + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x10ull));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765a07ull));
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
return 0x765a0a;}
case 0x765a0a:{ // JMP 0x00765a0e
return 0x765a0e;
return 0x765a0c;}
case 0x765a0c:{ // FLD1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765a0cull));
wu<10>(c,0xaf700,float_op("INT2FLOAT",0x1ull,4,0x0ull,4,10));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0xaf700)));
return 0x765a0e;}
case 0x765a0e:{ // MOV EAX,dword ptr [EBP + 0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x18ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765a11;}
case 0x765a11:{ // FSTP double ptr [EAX]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x765a11ull));
wu<8>(c,0xaa00,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wm<8>(c,r<4>(c,0x0),u<8>(c,0xaa00));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x765a13;}
case 0x765a13:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x765a15;}
case 0x765a15:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765a16;}
case 0x765a16:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x765a17;}
case 0x765a17:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765a18;}
case 0x765a18:{ // SUB EAX,0x3a4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x3a4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x3a4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x3a4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a1d;}
case 0x765a1d:{ // JZ 0x00765a41
if(r<1>(c,0x206)){return 0x765a41;}
return 0x765a1f;}
case 0x765a1f:{ // SUB EAX,0x4
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x4ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a22;}
case 0x765a22:{ // JZ 0x00765a3b
if(r<1>(c,0x206)){return 0x765a3b;}
return 0x765a24;}
case 0x765a24:{ // SUB EAX,0xd
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xdull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xdull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xdull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a27;}
case 0x765a27:{ // JZ 0x00765a35
if(r<1>(c,0x206)){return 0x765a35;}
return 0x765a29;}
case 0x765a29:{ // DEC EAX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a2a;}
case 0x765a2a:{ // JZ 0x00765a2f
if(r<1>(c,0x206)){return 0x765a2f;}
return 0x765a2c;}
case 0x765a2c:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a2e;}
case 0x765a2e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765a2f;}
case 0x765a2f:{ // MOV EAX,0x404
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x404ull));
return 0x765a34;}
case 0x765a34:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765a35;}
case 0x765a35:{ // MOV EAX,0x412
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x412ull));
return 0x765a3a;}
case 0x765a3a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765a3b;}
case 0x765a3b:{ // MOV EAX,0x804
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x804ull));
return 0x765a40;}
case 0x765a40:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765a41;}
case 0x765a41:{ // MOV EAX,0x411
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x411ull));
return 0x765a46;}
case 0x765a46:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765a47;}
case 0x765a47:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765a48;}
case 0x765a48:{ // PUSH 0x40
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765a4a;}
case 0x765a4a:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a4c;}
case 0x765a4c:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765a4d;}
case 0x765a4d:{ // MOV EDI,0x8ba260
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8ba260ull));
return 0x765a52;}
case 0x765a52:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x765a54;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765a52;
return 0x765a54;}
case 0x765a54:{ // STOSB ES:EDI
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x765a55;}
case 0x765a55:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a57;}
case 0x765a57:{ // MOV [0x008ba364],EAX
wm<4>(c,0x8ba364,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x765a5c;}
case 0x765a5c:{ // MOV [0x008ba240],EAX
wm<4>(c,0x8ba240,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x765a61;}
case 0x765a61:{ // MOV [0x008ba238],EAX
wm<4>(c,0x8ba238,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x765a66;}
case 0x765a66:{ // MOV EDI,0x8ba370
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8ba370ull));
return 0x765a6b;}
case 0x765a6b:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765a6c;}
case 0x765a6c:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765a6d;}
case 0x765a6d:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765a6e;}
case 0x765a6e:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765a6f;}
case 0x765a6f:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765a70;}
case 0x765a70:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765a71;}
case 0x765a71:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x765a73;}
case 0x765a73:{ // SUB ESP,0x518
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x518ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x518ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x518ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a79;}
case 0x765a79:{ // MOV EAX,[0x0081a1d0]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x81a1d0)));
return 0x765a7e;}
case 0x765a7e:{ // XOR EAX,dword ptr [EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765a81;}
case 0x765a81:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765a82;}
case 0x765a82:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765a85;}
case 0x765a85:{ // LEA EAX,[EBP + -0x18]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x765a88;}
case 0x765a88:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765a89;}
case 0x765a89:{ // PUSH dword ptr [0x008ba364]
wu<4>(c,0x41500,eval<Op::COPY,4,4>(m<4>(c,0x8ba364)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765a8f;}
case 0x765a8f:{ // CALL dword ptr [0x007830c4]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x7830c4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765a95ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x765a95;}
case 0x765a95:{ // CMP EAX,0x1
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
return 0x765a98;}
case 0x765a98:{ // MOV ESI,0x100
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x100ull));
return 0x765a9d;}
case 0x765a9d:{ // JNZ 0x00765bb0
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765bb0;}
return 0x765aa3;}
case 0x765aa3:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765aa5;}
case 0x765aa5:{ // MOV byte ptr [EBP + EAX*0x1 + 0xfffffee8],AL
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffee8ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x7d00),u<1>(c,0xa100));
return 0x765aac;}
case 0x765aac:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765aad;}
case 0x765aad:{ // CMP EAX,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765aaf;}
case 0x765aaf:{ // JC 0x00765aa5
if(r<1>(c,0x200)){return 0x765aa5;}
return 0x765ab1;}
case 0x765ab1:{ // MOV AL,byte ptr [EBP + -0x12]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffeeull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765ab4;}
case 0x765ab4:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ab6;}
case 0x765ab6:{ // MOV byte ptr [EBP + 0xfffffee8],0x20
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee8ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x20ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x765abd;}
case 0x765abd:{ // JZ 0x00765af5
if(r<1>(c,0x206)){return 0x765af5;}
return 0x765abf;}
case 0x765abf:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765ac0;}
case 0x765ac0:{ // LEA EDX,[EBP + -0x11]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffefull));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x765ac3;}
case 0x765ac3:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765ac4;}
case 0x765ac4:{ // MOVZX ECX,byte ptr [EDX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x8)));
wr<4>(c,0x4,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x765ac7;}
case 0x765ac7:{ // MOVZX EAX,AL
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x0)));
return 0x765aca;}
case 0x765aca:{ // CMP EAX,ECX
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
return 0x765acc;}
case 0x765acc:{ // JA 0x00765aeb
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x765aeb;}
return 0x765ace;}
case 0x765ace:{ // SUB ECX,EAX
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ad0;}
case 0x765ad0:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ad1;}
case 0x765ad1:{ // MOV EBX,ECX
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x765ad3;}
case 0x765ad3:{ // SHR ECX,0x2
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
return 0x765ad6;}
case 0x765ad6:{ // LEA EDI,[EBP + EAX*0x1 + 0xfffffee8]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffee8ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x7d00)));
return 0x765add;}
case 0x765add:{ // MOV EAX,0x20202020
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x20202020ull));
return 0x765ae2;}
case 0x765ae2:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x765ae4;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765ae2;
return 0x765ae4;}
case 0x765ae4:{ // MOV ECX,EBX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x765ae6;}
case 0x765ae6:{ // AND ECX,0x3
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0x3ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ae9;}
case 0x765ae9:{ // STOSB.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x765aeb;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x765ae9;
return 0x765aeb;}
case 0x765aeb:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765aec;}
case 0x765aec:{ // MOV AL,byte ptr [EDX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x8)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765aee;}
case 0x765aee:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765aef;}
case 0x765aef:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765af1;}
case 0x765af1:{ // JNZ 0x00765ac4
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765ac4;}
return 0x765af3;}
case 0x765af3:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765af4;}
case 0x765af4:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765af5;}
case 0x765af5:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765af7;}
case 0x765af7:{ // PUSH dword ptr [0x008ba238]
wu<4>(c,0x41500,eval<Op::COPY,4,4>(m<4>(c,0x8ba238)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765afd;}
case 0x765afd:{ // LEA EAX,[EBP + 0xfffffae8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffae8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x765b03;}
case 0x765b03:{ // PUSH dword ptr [0x008ba364]
wu<4>(c,0x41500,eval<Op::COPY,4,4>(m<4>(c,0x8ba364)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b09;}
case 0x765b09:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b0a;}
case 0x765b0a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b0b;}
case 0x765b0b:{ // LEA EAX,[EBP + 0xfffffee8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x765b11;}
case 0x765b11:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b12;}
case 0x765b12:{ // PUSH 0x1
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x1ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765b14;}
case 0x765b14:{ // CALL 0x007692c8
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765b19ull);
return 0x7692c8;
return 0x765b19;}
case 0x765b19:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765b1b;}
case 0x765b1b:{ // PUSH dword ptr [0x008ba364]
wu<4>(c,0x41500,eval<Op::COPY,4,4>(m<4>(c,0x8ba364)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b21;}
case 0x765b21:{ // LEA EAX,[EBP + 0xfffffde8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffde8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x765b27;}
case 0x765b27:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b28;}
case 0x765b28:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b29;}
case 0x765b29:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b2a;}
case 0x765b2a:{ // LEA EAX,[EBP + 0xfffffee8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x765b30;}
case 0x765b30:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b31;}
case 0x765b31:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b32;}
case 0x765b32:{ // PUSH dword ptr [0x008ba238]
wu<4>(c,0x41500,eval<Op::COPY,4,4>(m<4>(c,0x8ba238)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b38;}
case 0x765b38:{ // CALL 0x00767819
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765b3dull);
return 0x767819;
return 0x765b3d;}
case 0x765b3d:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765b3f;}
case 0x765b3f:{ // PUSH dword ptr [0x008ba364]
wu<4>(c,0x41500,eval<Op::COPY,4,4>(m<4>(c,0x8ba364)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b45;}
case 0x765b45:{ // LEA EAX,[EBP + 0xfffffce8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffce8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x765b4b;}
case 0x765b4b:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b4c;}
case 0x765b4c:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b4d;}
case 0x765b4d:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b4e;}
case 0x765b4e:{ // LEA EAX,[EBP + 0xfffffee8]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffee8ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x765b54;}
case 0x765b54:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b55;}
case 0x765b55:{ // PUSH 0x200
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x200ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x765b5a;}
case 0x765b5a:{ // PUSH dword ptr [0x008ba238]
wu<4>(c,0x41500,eval<Op::COPY,4,4>(m<4>(c,0x8ba238)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765b60;}
case 0x765b60:{ // CALL 0x00767819
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765b65ull);
return 0x767819;
return 0x765b65;}
case 0x765b65:{ // ADD ESP,0x5c
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x5cull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x5cull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x5cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765b68;}
case 0x765b68:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765b6a;}
case 0x765b6a:{ // MOV CX,word ptr [EBP + EAX*0x2 + 0xfffffae8]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffae8ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x7d00)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x765b72;}
case 0x765b72:{ // TEST CL,0x1
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765b75;}
case 0x765b75:{ // JZ 0x00765b8d
if(r<1>(c,0x206)){return 0x765b8d;}
return 0x765b77;}
case 0x765b77:{ // OR byte ptr [EAX + 0x8ba261],0x10
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba261ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x10ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765b7e;}
case 0x765b7e:{ // MOV CL,byte ptr [EBP + EAX*0x1 + 0xfffffde8]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffde8ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x7d00)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765b85;}
case 0x765b85:{ // MOV byte ptr [EAX + 0x8ba380],CL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba380ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x765b8b;}
case 0x765b8b:{ // JMP 0x00765ba9
return 0x765ba9;
return 0x765b8d;}
case 0x765b8d:{ // TEST CL,0x2
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0x2ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765b90;}
case 0x765b90:{ // JZ 0x00765ba2
if(r<1>(c,0x206)){return 0x765ba2;}
return 0x765b92;}
case 0x765b92:{ // OR byte ptr [EAX + 0x8ba261],0x20
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba261ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x20ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765b99;}
case 0x765b99:{ // MOV CL,byte ptr [EBP + EAX*0x1 + 0xfffffce8]
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0xfffffce8ull,r<4>(c,0x14)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x7d00)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765ba0;}
case 0x765ba0:{ // JMP 0x00765b85
return 0x765b85;
return 0x765ba2;}
case 0x765ba2:{ // AND byte ptr [EAX + 0x8ba380],0x0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba380ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0x0ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ba9;}
case 0x765ba9:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765baa;}
case 0x765baa:{ // CMP EAX,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bac;}
case 0x765bac:{ // JC 0x00765b6a
if(r<1>(c,0x200)){return 0x765b6a;}
return 0x765bae;}
case 0x765bae:{ // JMP 0x00765bf4
return 0x765bf4;
return 0x765bb0;}
case 0x765bb0:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bb2;}
case 0x765bb2:{ // CMP EAX,0x41
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x41ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x41ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x41ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bb5;}
case 0x765bb5:{ // JC 0x00765bd0
if(r<1>(c,0x200)){return 0x765bd0;}
return 0x765bb7;}
case 0x765bb7:{ // CMP EAX,0x5a
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x5aull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x5aull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x5aull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bba;}
case 0x765bba:{ // JA 0x00765bd0
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x765bd0;}
return 0x765bbc;}
case 0x765bbc:{ // OR byte ptr [EAX + 0x8ba261],0x10
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba261ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x10ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bc3;}
case 0x765bc3:{ // MOV CL,AL
wr<1>(c,0x4,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x765bc5;}
case 0x765bc5:{ // ADD CL,0x20
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(r<1>(c,0x4),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x4),0x20ull));
wr<1>(c,0x4,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x4),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bc8;}
case 0x765bc8:{ // MOV byte ptr [EAX + 0x8ba380],CL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba380ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x765bce;}
case 0x765bce:{ // JMP 0x00765bef
return 0x765bef;
return 0x765bd0;}
case 0x765bd0:{ // CMP EAX,0x61
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x61ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x61ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x61ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bd3;}
case 0x765bd3:{ // JC 0x00765be8
if(r<1>(c,0x200)){return 0x765be8;}
return 0x765bd5;}
case 0x765bd5:{ // CMP EAX,0x7a
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x7aull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x7aull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x7aull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bd8;}
case 0x765bd8:{ // JA 0x00765be8
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x765be8;}
return 0x765bda;}
case 0x765bda:{ // OR byte ptr [EAX + 0x8ba261],0x20
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba261ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x20ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765be1;}
case 0x765be1:{ // MOV CL,AL
wr<1>(c,0x4,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x765be3;}
case 0x765be3:{ // SUB CL,0x20
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(r<1>(c,0x4),0x20ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(r<1>(c,0x4),0x20ull));
wr<1>(c,0x4,eval<Op::INT_SUB,1,1,1>(r<1>(c,0x4),0x20ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x4),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765be6;}
case 0x765be6:{ // JMP 0x00765bc8
return 0x765bc8;
return 0x765be8;}
case 0x765be8:{ // AND byte ptr [EAX + 0x8ba380],0x0
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba380ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0x0ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bef;}
case 0x765bef:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bf0;}
case 0x765bf0:{ // CMP EAX,ESI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bf2;}
case 0x765bf2:{ // JC 0x00765bb2
if(r<1>(c,0x200)){return 0x765bb2;}
return 0x765bf4;}
case 0x765bf4:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765bf7;}
case 0x765bf7:{ // XOR ECX,dword ptr [EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765bfa;}
case 0x765bfa:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765bfb;}
case 0x765bfb:{ // CALL 0x0076115e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765c00ull);
return 0x76115e;
return 0x765c00;}
case 0x765c00:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x765c01;}
case 0x765c01:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765c02;}
case 0x765c02:{ // PUSH 0x10
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765c04;}
case 0x765c04:{ // PUSH 0x7d7c88
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7d7c88ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x765c09;}
case 0x765c09:{ // CALL 0x00760da0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765c0eull);
return 0x760da0;
return 0x765c0e;}
case 0x765c0e:{ // PUSH 0xd
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xdull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765c10;}
case 0x765c10:{ // CALL 0x007631f1
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765c15ull);
return 0x7631f1;
return 0x765c15;}
case 0x765c15:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765c16;}
case 0x765c16:{ // AND dword ptr [EBP + -0x4],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0x0ull));
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
return 0x765c1a;}
case 0x765c1a:{ // CALL 0x00761e3c
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765c1full);
return 0x761e3c;
return 0x765c1f;}
case 0x765c1f:{ // MOV EDI,EAX
wr<4>(c,0x1c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x765c21;}
case 0x765c21:{ // MOV dword ptr [EBP + -0x1c],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765c24;}
case 0x765c24:{ // MOV ESI,dword ptr [EDI + 0x60]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765c27;}
case 0x765c27:{ // MOV dword ptr [EBP + -0x20],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765c2a;}
case 0x765c2a:{ // CMP ESI,dword ptr [0x008ba23c]
wu<4>(c,0x63000,eval<Op::COPY,4,4>(m<4>(c,0x8ba23c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c30;}
case 0x765c30:{ // JZ 0x00765c54
if(r<1>(c,0x206)){return 0x765c54;}
return 0x765c32;}
case 0x765c32:{ // TEST ESI,ESI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c34;}
case 0x765c34:{ // JZ 0x00765c41
if(r<1>(c,0x206)){return 0x765c41;}
return 0x765c36;}
case 0x765c36:{ // DEC dword ptr [ESI]
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wu<4>(c,0xa300,eval<Op::INT_SUB,4,4,4>(u<4>(c,0xa300),0x1ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c38;}
case 0x765c38:{ // JNZ 0x00765c41
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765c41;}
return 0x765c3a;}
case 0x765c3a:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765c3b;}
case 0x765c3b:{ // CALL 0x0075c6da
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765c40ull);
return 0x75c6da;
return 0x765c40;}
case 0x765c40:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765c41;}
case 0x765c41:{ // MOV EAX,[0x008ba23c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8ba23c)));
return 0x765c46;}
case 0x765c46:{ // MOV dword ptr [EDI + 0x60],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x60ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765c49;}
case 0x765c49:{ // MOV ESI,dword ptr [0x008ba23c]
wr<4>(c,0x18,eval<Op::COPY,4,4>(m<4>(c,0x8ba23c)));
return 0x765c4f;}
case 0x765c4f:{ // MOV dword ptr [EBP + -0x20],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765c52;}
case 0x765c52:{ // INC dword ptr [ESI]
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(u<4>(c,0xa300),0x1ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wu<4>(c,0xa300,eval<Op::INT_ADD,4,4,4>(u<4>(c,0xa300),0x1ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa300),0x0ull));
wu<4>(c,0xa300,m<4>(c,r<4>(c,0x18)));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa300),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c54;}
case 0x765c54:{ // OR dword ptr [EBP + -0x4],0xffffffff
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0xffffffffull));
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
return 0x765c58;}
case 0x765c58:{ // CALL 0x00765c68
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765c5dull);
return 0x765c68;
return 0x765c5d;}
case 0x765c5d:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x765c5f;}
case 0x765c5f:{ // CALL 0x00760ddb
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765c64ull);
return 0x760ddb;
return 0x765c64;}
case 0x765c64:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765c65;}
case 0x765c68:{ // PUSH 0xd
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xdull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765c6a;}
case 0x765c6a:{ // CALL 0x0076315d
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765c6full);
return 0x76315d;
return 0x765c6f;}
case 0x765c6f:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765c70;}
case 0x765c70:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765c71;}
case 0x765c71:{ // PUSH EBP
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765c72;}
case 0x765c72:{ // MOV EBP,ESP
wr<4>(c,0x14,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x765c74;}
case 0x765c74:{ // SUB ESP,0x1c
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x10),0x1cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x1cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c77;}
case 0x765c77:{ // MOV EAX,[0x0081a1d0]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x81a1d0)));
return 0x765c7c;}
case 0x765c7c:{ // XOR EAX,dword ptr [EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c7f;}
case 0x765c7f:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765c80;}
case 0x765c80:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765c81;}
case 0x765c81:{ // MOV ESI,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765c84;}
case 0x765c84:{ // XOR EBX,EBX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0xc,eval<Op::INT_XOR,4,4,4>(r<4>(c,0xc),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c86;}
case 0x765c86:{ // CMP ESI,EBX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c88;}
case 0x765c88:{ // MOV dword ptr [EBP + -0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765c8b;}
case 0x765c8b:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765c8c;}
case 0x765c8c:{ // JZ 0x00765de6
if(r<1>(c,0x206)){return 0x765de6;}
return 0x765c92;}
case 0x765c92:{ // XOR EDX,EDX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x8,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x8),r<4>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c94;}
case 0x765c94:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765c96;}
case 0x765c96:{ // CMP dword ptr [EAX + 0x81a508],ESI
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x81a508ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6800)));
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
return 0x765c9c;}
case 0x765c9c:{ // JZ 0x00765d03
if(r<1>(c,0x206)){return 0x765d03;}
return 0x765c9e;}
case 0x765c9e:{ // ADD EAX,0x30
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x30ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ca1;}
case 0x765ca1:{ // INC EDX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ca2;}
case 0x765ca2:{ // CMP EAX,0xf0
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xf0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xf0ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xf0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ca7;}
case 0x765ca7:{ // JC 0x00765c96
if(r<1>(c,0x200)){return 0x765c96;}
return 0x765ca9;}
case 0x765ca9:{ // LEA EAX,[EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x765cac;}
case 0x765cac:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765cad;}
case 0x765cad:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765cae;}
case 0x765cae:{ // CALL dword ptr [0x007830c4]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x7830c4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765cb4ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x765cb4;}
case 0x765cb4:{ // CMP EAX,0x1
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
return 0x765cb7;}
case 0x765cb7:{ // JNZ 0x00765dde
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765dde;}
return 0x765cbd;}
case 0x765cbd:{ // PUSH 0x40
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765cbf;}
case 0x765cbf:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765cc1;}
case 0x765cc1:{ // CMP dword ptr [EBP + -0x1c],0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x1ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765cc5;}
case 0x765cc5:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765cc6;}
case 0x765cc6:{ // MOV EDI,0x8ba260
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8ba260ull));
return 0x765ccb;}
case 0x765ccb:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x765ccd;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765ccb;
return 0x765ccd;}
case 0x765ccd:{ // STOSB ES:EDI
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x765cce;}
case 0x765cce:{ // MOV dword ptr [0x008ba364],ESI
wm<4>(c,0x8ba364,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x765cd4;}
case 0x765cd4:{ // MOV dword ptr [0x008ba238],EBX
wm<4>(c,0x8ba238,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x765cda;}
case 0x765cda:{ // JBE 0x00765dcc
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x765dcc;}
return 0x765ce0;}
case 0x765ce0:{ // CMP byte ptr [EBP + -0x16],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffeaull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x0ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ce4;}
case 0x765ce4:{ // JZ 0x00765da4
if(r<1>(c,0x206)){return 0x765da4;}
return 0x765cea;}
case 0x765cea:{ // LEA ECX,[EBP + -0x15]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffebull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x765ced;}
case 0x765ced:{ // MOV DL,byte ptr [ECX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x4)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765cef;}
case 0x765cef:{ // TEST DL,DL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x8),r<1>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765cf1;}
case 0x765cf1:{ // JZ 0x00765da4
if(r<1>(c,0x206)){return 0x765da4;}
return 0x765cf7;}
case 0x765cf7:{ // MOVZX EAX,byte ptr [ECX + -0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xffffffffull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(u<1>(c,0x17000)));
return 0x765cfb;}
case 0x765cfb:{ // MOVZX EDX,DL
wr<4>(c,0x8,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x8)));
return 0x765cfe;}
case 0x765cfe:{ // JMP 0x00765d94
return 0x765d94;
return 0x765d03;}
case 0x765d03:{ // PUSH 0x40
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765d05;}
case 0x765d05:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d07;}
case 0x765d07:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765d08;}
case 0x765d08:{ // MOV EDI,0x8ba260
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8ba260ull));
return 0x765d0d;}
case 0x765d0d:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x765d0f;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765d0d;
return 0x765d0f;}
case 0x765d0f:{ // LEA ECX,[EDX + EDX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x8),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),u<4>(c,0x6a00)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x765d12;}
case 0x765d12:{ // SHL ECX,0x4
wu<4>(c,0x9c000,eval<Op::INT_AND,4,4,4>(0x4ull,0x1full));
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
return 0x765d15;}
case 0x765d15:{ // MOV dword ptr [EBP + -0x8],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765d18;}
case 0x765d18:{ // STOSB ES:EDI
wu<4>(c,0x15000,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x15100,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x1ull));
wu<4>(c,0x15200,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x15300,eval<Op::INT_MULT,4,4,4>(0x2ull,u<4>(c,0x15200)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x15100),u<4>(c,0x15300)));
wu<1>(c,0x15500,eval<Op::COPY,1,1>(r<1>(c,0x0)));
wm<1>(c,u<4>(c,0x15000),u<1>(c,0x15500));
return 0x765d19;}
case 0x765d19:{ // LEA EBX,[ECX + 0x81a518]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x81a518ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x765d1f;}
case 0x765d1f:{ // MOV AL,byte ptr [EBX]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0xc)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765d21;}
case 0x765d21:{ // MOV ESI,EBX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x765d23;}
case 0x765d23:{ // JMP 0x00765d4e
return 0x765d4e;
return 0x765d25;}
case 0x765d25:{ // MOV DL,byte ptr [ESI + 0x1]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765d28;}
case 0x765d28:{ // TEST DL,DL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x8),r<1>(c,0x8)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d2a;}
case 0x765d2a:{ // JZ 0x00765d52
if(r<1>(c,0x206)){return 0x765d52;}
return 0x765d2c;}
case 0x765d2c:{ // MOVZX EAX,AL
wr<4>(c,0x0,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x0)));
return 0x765d2f;}
case 0x765d2f:{ // MOVZX EDI,DL
wr<4>(c,0x1c,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x8)));
return 0x765d32;}
case 0x765d32:{ // CMP EAX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d34;}
case 0x765d34:{ // JA 0x00765d4a
wu<1>(c,0x17f00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
wu<1>(c,0x18100,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x17f00)));
if(u<1>(c,0x18100)){return 0x765d4a;}
return 0x765d36;}
case 0x765d36:{ // MOV EDX,dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765d39;}
case 0x765d39:{ // MOV DL,byte ptr [EDX + 0x81a500]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),0x81a500ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x8,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765d3f;}
case 0x765d3f:{ // OR byte ptr [EAX + 0x8ba261],DL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba261ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),r<1>(c,0x8)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d45;}
case 0x765d45:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d46;}
case 0x765d46:{ // CMP EAX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d48;}
case 0x765d48:{ // JBE 0x00765d3f
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x765d3f;}
return 0x765d4a;}
case 0x765d4a:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d4b;}
case 0x765d4b:{ // INC ESI
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x1ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d4c;}
case 0x765d4c:{ // MOV AL,byte ptr [ESI]
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x18)));
wr<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765d4e;}
case 0x765d4e:{ // TEST AL,AL
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa4200,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),r<1>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa4200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa4200),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa4200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d50;}
case 0x765d50:{ // JNZ 0x00765d25
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765d25;}
return 0x765d52;}
case 0x765d52:{ // INC dword ptr [EBP + -0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
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
return 0x765d55;}
case 0x765d55:{ // ADD EBX,0x8
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0xc),0x8ull));
wr<4>(c,0xc,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0x8ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d58;}
case 0x765d58:{ // CMP dword ptr [EBP + -0x8],0x4
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffff8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x4ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d5c;}
case 0x765d5c:{ // JC 0x00765d1f
if(r<1>(c,0x200)){return 0x765d1f;}
return 0x765d5e;}
case 0x765d5e:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765d61;}
case 0x765d61:{ // MOV [0x008ba364],EAX
wm<4>(c,0x8ba364,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x765d66;}
case 0x765d66:{ // MOV dword ptr [0x008ba240],0x1
wm<4>(c,0x8ba240,eval<Op::COPY,4,4>(0x1ull));
return 0x765d70;}
case 0x765d70:{ // CALL 0x00765a18
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765d75ull);
return 0x765a18;
return 0x765d75;}
case 0x765d75:{ // LEA ECX,[ECX + 0x81a50c]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x81a50cull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x6800)));
return 0x765d7b;}
case 0x765d7b:{ // MOV ESI,ECX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x765d7d;}
case 0x765d7d:{ // MOV EDI,0x8ba370
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8ba370ull));
return 0x765d82;}
case 0x765d82:{ // MOVSD ES:EDI,ESI
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
return 0x765d83;}
case 0x765d83:{ // MOVSD ES:EDI,ESI
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
return 0x765d84;}
case 0x765d84:{ // MOV [0x008ba238],EAX
wm<4>(c,0x8ba238,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x765d89;}
case 0x765d89:{ // MOVSD ES:EDI,ESI
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
return 0x765d8a;}
case 0x765d8a:{ // JMP 0x00765deb
return 0x765deb;
return 0x765d8c;}
case 0x765d8c:{ // OR byte ptr [EAX + 0x8ba261],0x4
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba261ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x4ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d93;}
case 0x765d93:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d94;}
case 0x765d94:{ // CMP EAX,EDX
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x8)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d96;}
case 0x765d96:{ // JBE 0x00765d8c
wu<1>(c,0x17e00,eval<Op::BOOL_OR,1,1,1>(r<1>(c,0x200),r<1>(c,0x206)));
if(u<1>(c,0x17e00)){return 0x765d8c;}
return 0x765d98;}
case 0x765d98:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d99;}
case 0x765d99:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d9a;}
case 0x765d9a:{ // CMP byte ptr [ECX + -0x1],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0xffffffffull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6600)));
wu<1>(c,0x60f00,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,1,1>(u<1>(c,0x60f00),0x0ull));
wu<1>(c,0x61100,eval<Op::INT_SUB,1,1,1>(u<1>(c,0x60f00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x61100),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x61100),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0x61100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765d9e;}
case 0x765d9e:{ // JNZ 0x00765ced
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765ced;}
return 0x765da4;}
case 0x765da4:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765da6;}
case 0x765da6:{ // INC ECX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765da7;}
case 0x765da7:{ // MOV EAX,ECX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x765da9;}
case 0x765da9:{ // OR byte ptr [EAX + 0x8ba261],0x8
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba261ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_OR,1,1,1>(u<1>(c,0xa100),0x8ull));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765db0;}
case 0x765db0:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765db1;}
case 0x765db1:{ // CMP EAX,0xff
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0xffull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0xffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765db6;}
case 0x765db6:{ // JC 0x00765da9
if(r<1>(c,0x200)){return 0x765da9;}
return 0x765db8;}
case 0x765db8:{ // MOV EAX,ESI
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x765dba;}
case 0x765dba:{ // CALL 0x00765a18
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765dbfull);
return 0x765a18;
return 0x765dbf;}
case 0x765dbf:{ // MOV [0x008ba238],EAX
wm<4>(c,0x8ba238,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x765dc4;}
case 0x765dc4:{ // MOV dword ptr [0x008ba240],ECX
wm<4>(c,0x8ba240,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x765dca;}
case 0x765dca:{ // JMP 0x00765dd2
return 0x765dd2;
return 0x765dcc;}
case 0x765dcc:{ // MOV dword ptr [0x008ba240],EBX
wm<4>(c,0x8ba240,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x765dd2;}
case 0x765dd2:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765dd4;}
case 0x765dd4:{ // MOV EDI,0x8ba370
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8ba370ull));
return 0x765dd9;}
case 0x765dd9:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765dda;}
case 0x765dda:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765ddb;}
case 0x765ddb:{ // STOSD ES:EDI
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x765ddc;}
case 0x765ddc:{ // JMP 0x00765deb
return 0x765deb;
return 0x765dde;}
case 0x765dde:{ // CMP dword ptr [0x008b8718],EBX
wu<4>(c,0x62400,eval<Op::COPY,4,4>(m<4>(c,0x8b8718)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0xc)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0xc)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0xc)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765de4;}
case 0x765de4:{ // JZ 0x00765df4
if(r<1>(c,0x206)){return 0x765df4;}
return 0x765de6;}
case 0x765de6:{ // CALL 0x00765a47
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765debull);
return 0x765a47;
return 0x765deb;}
case 0x765deb:{ // CALL 0x00765a70
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765df0ull);
return 0x765a70;
return 0x765df0;}
case 0x765df0:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765df2;}
case 0x765df2:{ // JMP 0x00765df7
return 0x765df7;
return 0x765df4;}
case 0x765df4:{ // OR EAX,0xffffffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_OR,4,4,4>(r<4>(c,0x0),0xffffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765df7;}
case 0x765df7:{ // MOV ECX,dword ptr [EBP + -0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765dfa;}
case 0x765dfa:{ // XOR ECX,dword ptr [EBP + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x4ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),u<4>(c,0x17200)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765dfd;}
case 0x765dfd:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765dfe;}
case 0x765dfe:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765dff;}
case 0x765dff:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765e00;}
case 0x765e00:{ // CALL 0x0076115e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765e05ull);
return 0x76115e;
return 0x765e05;}
case 0x765e05:{ // LEAVE
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x14)));
wr<4>(c,0x14,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return 0x765e06;}
case 0x765e06:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765e07;}
case 0x765e07:{ // PUSH 0x14
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x14ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765e09;}
case 0x765e09:{ // PUSH 0x7d7c98
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7d7c98ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x765e0e;}
case 0x765e0e:{ // CALL 0x00760da0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765e13ull);
return 0x760da0;
return 0x765e13;}
case 0x765e13:{ // OR dword ptr [EBP + -0x1c],0xffffffff
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0xffffffffull));
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
return 0x765e17;}
case 0x765e17:{ // PUSH 0xd
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xdull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765e19;}
case 0x765e19:{ // CALL 0x007631f1
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765e1eull);
return 0x7631f1;
return 0x765e1e;}
case 0x765e1e:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765e1f;}
case 0x765e1f:{ // XOR EDI,EDI
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x1c),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765e21;}
case 0x765e21:{ // MOV dword ptr [EBP + -0x4],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765e24;}
case 0x765e24:{ // MOV dword ptr [0x008b8718],EDI
wm<4>(c,0x8b8718,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
return 0x765e2a;}
case 0x765e2a:{ // MOV EAX,dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765e2d;}
case 0x765e2d:{ // CMP EAX,-0x2
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0xfffffffeull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0xfffffffeull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0xfffffffeull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765e30;}
case 0x765e30:{ // JNZ 0x00765e44
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765e44;}
return 0x765e32;}
case 0x765e32:{ // MOV dword ptr [0x008b8718],0x1
wm<4>(c,0x8b8718,eval<Op::COPY,4,4>(0x1ull));
return 0x765e3c;}
case 0x765e3c:{ // CALL dword ptr [0x007830c8]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x7830c8)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765e42ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x765e42;}
case 0x765e42:{ // JMP 0x00765e6f
return 0x765e6f;
return 0x765e44;}
case 0x765e44:{ // CMP EAX,-0x3
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0xfffffffdull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0xfffffffdull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0xfffffffdull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765e47;}
case 0x765e47:{ // JNZ 0x00765e5b
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765e5b;}
return 0x765e49;}
case 0x765e49:{ // MOV dword ptr [0x008b8718],0x1
wm<4>(c,0x8b8718,eval<Op::COPY,4,4>(0x1ull));
return 0x765e53;}
case 0x765e53:{ // CALL dword ptr [0x007830cc]
wu<4>(c,0x5ef00,eval<Op::COPY,4,4>(m<4>(c,0x7830cc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765e59ull);
return uint32_t(u<4>(c,0x5ef00));
return 0x765e59;}
case 0x765e59:{ // JMP 0x00765e6f
return 0x765e6f;
return 0x765e5b;}
case 0x765e5b:{ // CMP EAX,-0x4
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0xfffffffcull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0xfffffffcull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0xfffffffcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765e5e;}
case 0x765e5e:{ // JNZ 0x00765e6f
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765e6f;}
return 0x765e60;}
case 0x765e60:{ // MOV dword ptr [0x008b8718],0x1
wm<4>(c,0x8b8718,eval<Op::COPY,4,4>(0x1ull));
return 0x765e6a;}
case 0x765e6a:{ // MOV EAX,[0x008b8844]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8b8844)));
return 0x765e6f;}
case 0x765e6f:{ // MOV dword ptr [EBP + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765e72;}
case 0x765e72:{ // CMP EAX,dword ptr [0x008ba364]
wu<4>(c,0x63000,eval<Op::COPY,4,4>(m<4>(c,0x8ba364)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765e78;}
case 0x765e78:{ // JZ 0x00765f39
if(r<1>(c,0x206)){return 0x765f39;}
return 0x765e7e;}
case 0x765e7e:{ // MOV ESI,dword ptr [0x008ba23c]
wr<4>(c,0x18,eval<Op::COPY,4,4>(m<4>(c,0x8ba23c)));
return 0x765e84;}
case 0x765e84:{ // MOV dword ptr [EBP + -0x20],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765e87;}
case 0x765e87:{ // CMP ESI,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765e89;}
case 0x765e89:{ // JZ 0x00765e8f
if(r<1>(c,0x206)){return 0x765e8f;}
return 0x765e8b;}
case 0x765e8b:{ // CMP dword ptr [ESI],EDI
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x18)));
wu<4>(c,0x62400,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x62400),r<4>(c,0x1c)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x62400),r<4>(c,0x1c)));
wu<4>(c,0x62600,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x62400),r<4>(c,0x1c)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765e8d;}
case 0x765e8d:{ // JZ 0x00765e9f
if(r<1>(c,0x206)){return 0x765e9f;}
return 0x765e8f;}
case 0x765e8f:{ // PUSH 0x220
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x220ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x765e94;}
case 0x765e94:{ // CALL 0x0075c6c8
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765e99ull);
return 0x75c6c8;
return 0x765e99;}
case 0x765e99:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765e9a;}
case 0x765e9a:{ // MOV ESI,EAX
wr<4>(c,0x18,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x765e9c;}
case 0x765e9c:{ // MOV dword ptr [EBP + -0x20],ESI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe0ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765e9f;}
case 0x765e9f:{ // CMP ESI,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ea1;}
case 0x765ea1:{ // JZ 0x00765f22
if(r<1>(c,0x206)){return 0x765f22;}
return 0x765ea3;}
case 0x765ea3:{ // PUSH dword ptr [EBP + 0x8]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0x8ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765ea6;}
case 0x765ea6:{ // CALL 0x00765c71
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765eabull);
return 0x765c71;
return 0x765eab;}
case 0x765eab:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765eac;}
case 0x765eac:{ // MOV dword ptr [EBP + -0x1c],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765eaf;}
case 0x765eaf:{ // CMP EAX,EDI
wu<4>(c,0x62d00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wu<4>(c,0x62f00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),u<4>(c,0x62d00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x62f00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x62f00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x62f00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765eb1;}
case 0x765eb1:{ // JNZ 0x00765f22
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765f22;}
return 0x765eb3;}
case 0x765eb3:{ // MOV dword ptr [ESI],EDI
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x765eb5;}
case 0x765eb5:{ // MOV EAX,[0x008ba364]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8ba364)));
return 0x765eba;}
case 0x765eba:{ // MOV dword ptr [ESI + 0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765ebd;}
case 0x765ebd:{ // MOV EAX,[0x008ba240]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8ba240)));
return 0x765ec2;}
case 0x765ec2:{ // MOV dword ptr [ESI + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765ec5;}
case 0x765ec5:{ // MOV EAX,[0x008ba238]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x8ba238)));
return 0x765eca;}
case 0x765eca:{ // MOV dword ptr [ESI + 0xc],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765ecd;}
case 0x765ecd:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ecf;}
case 0x765ecf:{ // MOV dword ptr [EBP + -0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765ed2;}
case 0x765ed2:{ // CMP EAX,0x5
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x5ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x5ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ed5;}
case 0x765ed5:{ // JGE 0x00765ee7
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x765ee7;}
return 0x765ed7;}
case 0x765ed7:{ // MOV CX,word ptr [EAX*0x2 + 0x8ba370]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x8ba370ull,u<4>(c,0x6d00)));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6f00)));
wr<2>(c,0x4,eval<Op::COPY,2,2>(u<2>(c,0x17100)));
return 0x765edf;}
case 0x765edf:{ // MOV word ptr [ESI + EAX*0x2 + 0x10],CX
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x10ull,r<4>(c,0x18)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<2>(c,0xa200,eval<Op::COPY,2,2>(r<2>(c,0x4)));
wm<2>(c,u<4>(c,0x7400),u<2>(c,0xa200));
return 0x765ee4;}
case 0x765ee4:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ee5;}
case 0x765ee5:{ // JMP 0x00765ecf
return 0x765ecf;
return 0x765ee7;}
case 0x765ee7:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ee9;}
case 0x765ee9:{ // MOV dword ptr [EBP + -0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765eec;}
case 0x765eec:{ // CMP EAX,0x101
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x101ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x101ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x101ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ef1;}
case 0x765ef1:{ // JGE 0x00765f00
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x765f00;}
return 0x765ef3;}
case 0x765ef3:{ // MOV CL,byte ptr [EAX + 0x8ba260]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba260ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765ef9;}
case 0x765ef9:{ // MOV byte ptr [EAX + ESI*0x1 + 0x1c],CL
wu<4>(c,0x7100,eval<Op::INT_ADD,4,4,4>(0x1cull,r<4>(c,0x0)));
wu<4>(c,0x7200,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7400,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7100),u<4>(c,0x7200)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x7400),u<1>(c,0xa100));
return 0x765efd;}
case 0x765efd:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765efe;}
case 0x765efe:{ // JMP 0x00765ee9
return 0x765ee9;
return 0x765f00;}
case 0x765f00:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f02;}
case 0x765f02:{ // MOV dword ptr [EBP + -0x24],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffdcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765f05;}
case 0x765f05:{ // CMP EAX,0x100
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x100ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x100ull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x100ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f0a;}
case 0x765f0a:{ // JGE 0x00765f1c
wu<1>(c,0x18900,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18900)){return 0x765f1c;}
return 0x765f0c;}
case 0x765f0c:{ // MOV CL,byte ptr [EAX + 0x8ba380]
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ba380ull));
wu<1>(c,0x17000,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x4,eval<Op::COPY,1,1>(u<1>(c,0x17000)));
return 0x765f12;}
case 0x765f12:{ // MOV byte ptr [EAX + ESI*0x1 + 0x11d],CL
wu<4>(c,0x7a00,eval<Op::INT_ADD,4,4,4>(0x11dull,r<4>(c,0x0)));
wu<4>(c,0x7b00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x18),0x1ull));
wu<4>(c,0x7d00,eval<Op::INT_ADD,4,4,4>(u<4>(c,0x7a00),u<4>(c,0x7b00)));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x7d00),u<1>(c,0xa100));
return 0x765f19;}
case 0x765f19:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f1a;}
case 0x765f1a:{ // JMP 0x00765f02
return 0x765f02;
return 0x765f1c;}
case 0x765f1c:{ // MOV dword ptr [0x008ba23c],ESI
wm<4>(c,0x8ba23c,eval<Op::COPY,4,4>(r<4>(c,0x18)));
return 0x765f22;}
case 0x765f22:{ // CMP dword ptr [EBP + -0x1c],-0x1
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0xffffffffull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0xffffffffull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0xffffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f26;}
case 0x765f26:{ // JNZ 0x00765f3c
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765f3c;}
return 0x765f28;}
case 0x765f28:{ // CMP ESI,dword ptr [0x008ba23c]
wu<4>(c,0x63000,eval<Op::COPY,4,4>(m<4>(c,0x8ba23c)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wu<4>(c,0x63200,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x18),u<4>(c,0x63000)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x63200),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x63200),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x63200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f2e;}
case 0x765f2e:{ // JZ 0x00765f3c
if(r<1>(c,0x206)){return 0x765f3c;}
return 0x765f30;}
case 0x765f30:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765f31;}
case 0x765f31:{ // CALL 0x0075c6da
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765f36ull);
return 0x75c6da;
return 0x765f36;}
case 0x765f36:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765f37;}
case 0x765f37:{ // JMP 0x00765f3c
return 0x765f3c;
return 0x765f39;}
case 0x765f39:{ // MOV dword ptr [EBP + -0x1c],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765f3c;}
case 0x765f3c:{ // OR dword ptr [EBP + -0x4],0xffffffff
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xfffffffcull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa300,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0xa300,eval<Op::INT_OR,4,4,4>(u<4>(c,0xa300),0xffffffffull));
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
return 0x765f40;}
case 0x765f40:{ // CALL 0x00765f4e
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765f45ull);
return 0x765f4e;
return 0x765f45;}
case 0x765f45:{ // MOV EAX,dword ptr [EBP + -0x1c]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x14),0xffffffe4ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765f48;}
case 0x765f48:{ // CALL 0x00760ddb
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765f4dull);
return 0x760ddb;
return 0x765f4d;}
case 0x765f4d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765f4e;}
case 0x765f4e:{ // PUSH 0xd
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xdull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765f50;}
case 0x765f50:{ // CALL 0x0076315d
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765f55ull);
return 0x76315d;
return 0x765f55;}
case 0x765f55:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765f56;}
case 0x765f56:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765f57;}
case 0x765f57:{ // CMP dword ptr [0x008bb5f0],0x0
wu<4>(c,0x61b00,eval<Op::COPY,4,4>(m<4>(c,0x8bb5f0)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61b00),0x0ull));
wu<4>(c,0x61d00,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61b00),0x0ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61d00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61d00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61d00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f5e;}
case 0x765f5e:{ // JNZ 0x00765f72
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765f72;}
return 0x765f60;}
case 0x765f60:{ // PUSH -0x3
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xfffffffdull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765f62;}
case 0x765f62:{ // CALL 0x00765e07
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765f67ull);
return 0x765e07;
return 0x765f67;}
case 0x765f67:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765f68;}
case 0x765f68:{ // MOV dword ptr [0x008bb5f0],0x1
wm<4>(c,0x8bb5f0,eval<Op::COPY,4,4>(0x1ull));
return 0x765f72;}
case 0x765f72:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f74;}
case 0x765f74:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765f75;}
case 0x765f75:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765f76;}
case 0x765f76:{ // MOV ESI,dword ptr [ESP + 0x8]
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x8ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765f7a;}
case 0x765f7a:{ // PUSH dword ptr [ESI + 0x10]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x10ull));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x6600)));
wu<4>(c,0x41500,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765f7d;}
case 0x765f7d:{ // CALL 0x0076ca2b
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765f82ull);
return 0x76ca2b;
return 0x765f82;}
case 0x765f82:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f84;}
case 0x765f84:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765f85;}
case 0x765f85:{ // JZ 0x00765ff9
if(r<1>(c,0x206)){return 0x765ff9;}
return 0x765f87;}
case 0x765f87:{ // CMP ESI,0x819f30
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x819f30ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x819f30ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x819f30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f8d;}
case 0x765f8d:{ // JNZ 0x00765f93
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765f93;}
return 0x765f8f;}
case 0x765f8f:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f91;}
case 0x765f91:{ // JMP 0x00765f9e
return 0x765f9e;
return 0x765f93;}
case 0x765f93:{ // CMP ESI,0x819f50
wu<4>(c,0x61500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(u<4>(c,0x61500),0x819f50ull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(u<4>(c,0x61500),0x819f50ull));
wu<4>(c,0x61700,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x61500),0x819f50ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x61700),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x61700),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x61700),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f99;}
case 0x765f99:{ // JNZ 0x00765ff9
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765ff9;}
return 0x765f9b;}
case 0x765f9b:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f9d;}
case 0x765f9d:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765f9e;}
case 0x765f9e:{ // INC dword ptr [0x008b8484]
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(m<4>(c,0x8b8484),0x1ull));
wm<4>(c,0x8b8484,eval<Op::INT_ADD,4,4,4>(m<4>(c,0x8b8484),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(m<4>(c,0x8b8484),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(m<4>(c,0x8b8484),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(m<4>(c,0x8b8484),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765fa4;}
case 0x765fa4:{ // TEST word ptr [ESI + 0xc],0x10c
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0x17100,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa3e00,eval<Op::INT_AND,2,2,2>(u<2>(c,0x17100),0x10cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa3e00),0x0ull));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa3e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765faa;}
case 0x765faa:{ // JNZ 0x00765ff9
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765ff9;}
return 0x765fac;}
case 0x765fac:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765fad;}
case 0x765fad:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765fae;}
case 0x765fae:{ // LEA EDI,[EAX*0x4 + 0x8b871c]
wu<4>(c,0x6d00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0x6f00,eval<Op::INT_ADD,4,4,4>(0x8b871cull,u<4>(c,0x6d00)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x6f00)));
return 0x765fb5;}
case 0x765fb5:{ // CMP dword ptr [EDI],0x0
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
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
return 0x765fb8;}
case 0x765fb8:{ // MOV EBX,0x1000
wr<4>(c,0xc,eval<Op::COPY,4,4>(0x1000ull));
return 0x765fbd;}
case 0x765fbd:{ // JNZ 0x00765fdf
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765fdf;}
return 0x765fbf;}
case 0x765fbf:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x765fc0;}
case 0x765fc0:{ // CALL 0x0075c6c8
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x765fc5ull);
return 0x75c6c8;
return 0x765fc5;}
case 0x765fc5:{ // TEST EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<4>(c,0xa4600,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0xa4600),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0xa4600),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0xa4600),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765fc7;}
case 0x765fc7:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765fc8;}
case 0x765fc8:{ // MOV dword ptr [EDI],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x1c),u<4>(c,0xa300));
return 0x765fca;}
case 0x765fca:{ // JNZ 0x00765fdf
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x765fdf;}
return 0x765fcc;}
case 0x765fcc:{ // LEA EAX,[ESI + 0x14]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x14ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x765fcf;}
case 0x765fcf:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x765fd1;}
case 0x765fd1:{ // MOV dword ptr [ESI + 0x8],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765fd4;}
case 0x765fd4:{ // MOV dword ptr [ESI],EAX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x765fd6;}
case 0x765fd6:{ // POP EAX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765fd7;}
case 0x765fd7:{ // MOV dword ptr [ESI + 0x18],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x18ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765fda;}
case 0x765fda:{ // MOV dword ptr [ESI + 0x4],EAX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765fdd;}
case 0x765fdd:{ // JMP 0x00765fec
return 0x765fec;
return 0x765fdf;}
case 0x765fdf:{ // MOV EDI,dword ptr [EDI]
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x1c)));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x17200)));
return 0x765fe1;}
case 0x765fe1:{ // MOV dword ptr [ESI + 0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765fe4;}
case 0x765fe4:{ // MOV dword ptr [ESI],EDI
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x765fe6;}
case 0x765fe6:{ // MOV dword ptr [ESI + 0x18],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x18ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765fe9;}
case 0x765fe9:{ // MOV dword ptr [ESI + 0x4],EBX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x765fec;}
case 0x765fec:{ // OR word ptr [ESI + 0xc],0x1102
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xcull));
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0xa200,eval<Op::INT_OR,2,2,2>(u<2>(c,0xa200),0x1102ull));
wm<2>(c,u<4>(c,0x6600),u<2>(c,0xa200));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,2,2>(u<2>(c,0xa200),0x0ull));
wu<2>(c,0xa200,m<2>(c,u<4>(c,0x6600)));
wu<2>(c,0x49800,eval<Op::INT_AND,2,2,2>(u<2>(c,0xa200),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,2>(u<2>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ff2;}
case 0x765ff2:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765ff3;}
case 0x765ff3:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ff5;}
case 0x765ff5:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765ff6;}
case 0x765ff6:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ff7;}
case 0x765ff7:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765ff8;}
case 0x765ff8:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765ff9;}
case 0x765ff9:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x765ffb;}
case 0x765ffb:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x765ffc;}
case 0x765ffc:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x765ffd;}
case 0x765ffd:{ // CMP dword ptr [ESP + 0x4],0x0
wu<4>(c,0x7600,eval<Op::INT_ADD,4,4,4>(0x4ull,r<4>(c,0x10)));
wu<4>(c,0x17200,m<4>(c,u<4>(c,0x7600)));
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
return 0x766002;}
default:missing_instruction(c.pc);}}
}
