#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_6d6(Cpu& c){switch(c.pc){
case 0x6d6143:{ // ADD byte ptr [EBX + 0xc000000],DH
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0xc),0xc000000ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x9)));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x9)));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6800)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x9)));
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
return 0x6d6149;}
case 0x6d6149:{ // MOV BL,0x0
wr<1>(c,0xc,eval<Op::COPY,1,1>(0x0ull));
return 0x6d614b;}
case 0x6d614b:{ // ADD byte ptr [EAX],0x0
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),0x0ull));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d614e;}
case 0x6d614e:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6150;}
case 0x6d6150:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6152;}
case 0x6d6152:{ // JNP 0x006d6154
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6154;}
return 0x6d6154;}
case 0x6d6154:{ // MOV AH,0x0
wr<1>(c,0x1,eval<Op::COPY,1,1>(0x0ull));
return 0x6d6156;}
case 0x6d6156:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6158;}
case 0x6d6158:{ // OR AL,0xb4
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_OR,1,1,1>(r<1>(c,0x0),0xb4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d615a;}
case 0x6d615a:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6160;}
case 0x6d6160:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6162;}
case 0x6d6162:{ // JNP 0x006d6164
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6164;}
return 0x6d6164;}
case 0x6d6164:{ // MOV CH,0x0
wr<1>(c,0x5,eval<Op::COPY,1,1>(0x0ull));
return 0x6d6166;}
case 0x6d6166:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6168;}
case 0x6d6168:{ // OR AL,0xb5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_OR,1,1,1>(r<1>(c,0x0),0xb5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d616a;}
case 0x6d616a:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6170;}
case 0x6d6170:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6172;}
case 0x6d6172:{ // JNP 0x006d6174
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6174;}
return 0x6d6174;}
case 0x6d6174:{ // MOV DH,0x0
wr<1>(c,0x9,eval<Op::COPY,1,1>(0x0ull));
return 0x6d6176;}
case 0x6d6176:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6178;}
case 0x6d6178:{ // OR AL,0xb6
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_OR,1,1,1>(r<1>(c,0x0),0xb6ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d617a;}
case 0x6d617a:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6180;}
case 0x6d6180:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6182;}
case 0x6d6182:{ // JNP 0x006d6184
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6184;}
return 0x6d6184;}
case 0x6d6184:{ // MOV BH,0x0
wr<1>(c,0xd,eval<Op::COPY,1,1>(0x0ull));
return 0x6d6186;}
case 0x6d6186:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6188;}
case 0x6d6188:{ // OR AL,0xb7
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x0,eval<Op::INT_OR,1,1,1>(r<1>(c,0x0),0xb7ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d618a;}
case 0x6d618a:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6190;}
case 0x6d6190:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6192;}
case 0x6d6192:{ // JNP 0x006d6194
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6194;}
return 0x6d6194;}
case 0x6d6194:{ // MOV EAX,0xc000000
wr<4>(c,0x0,eval<Op::COPY,4,4>(0xc000000ull));
return 0x6d6199;}
case 0x6d6199:{ // MOV EAX,0x8000
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x8000ull));
return 0x6d619e;}
case 0x6d619e:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61a0;}
case 0x6d61a0:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61a2;}
case 0x6d61a2:{ // JNP 0x006d61a4
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d61a4;}
return 0x6d61a4;}
case 0x6d61a4:{ // MOV ECX,0xc000000
wr<4>(c,0x4,eval<Op::COPY,4,4>(0xc000000ull));
return 0x6d61a9;}
case 0x6d61a9:{ // MOV ECX,0x8000
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8000ull));
return 0x6d61ae;}
case 0x6d61ae:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61b0;}
case 0x6d61b0:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61b2;}
case 0x6d61b2:{ // JNP 0x006d61b4
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d61b4;}
return 0x6d61b4;}
case 0x6d61b4:{ // MOV EDX,0xc000000
wr<4>(c,0x8,eval<Op::COPY,4,4>(0xc000000ull));
return 0x6d61b9;}
case 0x6d61b9:{ // MOV EDX,0x8000
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x8000ull));
return 0x6d61be;}
case 0x6d61be:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61c0;}
case 0x6d61c0:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61c2;}
case 0x6d61c2:{ // JNP 0x006d61c4
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d61c4;}
return 0x6d61c4;}
case 0x6d61c4:{ // MOV EBX,0xc000000
wr<4>(c,0xc,eval<Op::COPY,4,4>(0xc000000ull));
return 0x6d61c9;}
case 0x6d61c9:{ // MOV EBX,0x8000
wr<4>(c,0xc,eval<Op::COPY,4,4>(0x8000ull));
return 0x6d61ce;}
case 0x6d61ce:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61d0;}
case 0x6d61d0:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61d2;}
case 0x6d61d2:{ // JNP 0x006d61d4
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d61d4;}
return 0x6d61d4;}
case 0x6d61d4:{ // MOV ESP,0xc000000
wr<4>(c,0x10,eval<Op::COPY,4,4>(0xc000000ull));
return 0x6d61d9;}
case 0x6d61d9:{ // MOV ESP,0x8000
wr<4>(c,0x10,eval<Op::COPY,4,4>(0x8000ull));
return 0x6d61de;}
case 0x6d61de:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61e0;}
case 0x6d61e0:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61e2;}
case 0x6d61e2:{ // JNP 0x006d61e4
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d61e4;}
return 0x6d61e4;}
case 0x6d61e4:{ // MOV EBP,0xc000000
wr<4>(c,0x14,eval<Op::COPY,4,4>(0xc000000ull));
return 0x6d61e9;}
case 0x6d61e9:{ // MOV EBP,0x8000
wr<4>(c,0x14,eval<Op::COPY,4,4>(0x8000ull));
return 0x6d61ee;}
case 0x6d61ee:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61f0;}
case 0x6d61f0:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d61f2;}
case 0x6d61f2:{ // JNP 0x006d61f4
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d61f4;}
return 0x6d61f4;}
case 0x6d61f4:{ // MOV ESI,0xc000000
wr<4>(c,0x18,eval<Op::COPY,4,4>(0xc000000ull));
return 0x6d61f9;}
case 0x6d61f9:{ // MOV ESI,0x8000
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x8000ull));
return 0x6d61fe;}
case 0x6d61fe:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6200;}
case 0x6d6200:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6202;}
case 0x6d6202:{ // JNP 0x006d6204
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6204;}
return 0x6d6204;}
case 0x6d6204:{ // MOV EDI,0xc000000
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0xc000000ull));
return 0x6d6209;}
case 0x6d6209:{ // MOV EDI,0x8000
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8000ull));
return 0x6d620e;}
case 0x6d620e:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6210;}
case 0x6d6210:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6212;}
case 0x6d6212:{ // JNP 0x006d6214
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6214;}
return 0x6d6214;}
case 0x6d6214:{ // ROL byte ptr [EAX],0x0
wu<4>(c,0x8f700,eval<Op::INT_AND,4,4,4>(0x0ull,0x7ull));
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x8f800,eval<Op::INT_LEFT,1,1,4>(u<1>(c,0x17000),u<4>(c,0x8f700)));
wu<4>(c,0x8f900,eval<Op::INT_SUB,4,4,4>(0x8ull,u<4>(c,0x8f700)));
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x8fa00,eval<Op::INT_RIGHT,1,1,4>(u<1>(c,0x17000),u<4>(c,0x8f900)));
wu<1>(c,0x17000,eval<Op::INT_OR,1,1,1>(u<1>(c,0x8f800),u<1>(c,0x8fa00)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0x17000));
wu<1>(c,0x8fc00,eval<Op::INT_AND,1,1,1>(0x0ull,0x1full));
wu<1>(c,0x4ba00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x8fc00),0x0ull));
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x4bb00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x17000),0x1ull));
wu<1>(c,0x4bc00,eval<Op::INT_NOTEQUAL,1,1,1>(u<1>(c,0x4bb00),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ba00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ba00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4bc00)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4bd00,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x8fc00),0x1ull));
wu<1>(c,0x17000,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x4be00,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0x17000),0x0ull));
wu<1>(c,0x4bf00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4be00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4bd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4bf00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4bd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
return 0x6d6217;}
case 0x6d6217:{ // ADD byte ptr [EAX + EAX*0x8],CL
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),u<4>(c,0x6a00)));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x4)));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x4)));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x6c00),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d621a;}
case 0x6d621a:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6220;}
case 0x6d6220:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6222;}
case 0x6d6222:{ // JNP 0x006d6224
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6224;}
return 0x6d6224;}
case 0x6d6224:{ // ROL dword ptr [EAX],0x0
wu<4>(c,0x91f00,eval<Op::INT_AND,4,4,4>(0x0ull,0x1full));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x92000,eval<Op::INT_LEFT,4,4,4>(u<4>(c,0x17200),u<4>(c,0x91f00)));
wu<4>(c,0x92100,eval<Op::INT_SUB,4,4,4>(0x20ull,u<4>(c,0x91f00)));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x92200,eval<Op::INT_RIGHT,4,4,4>(u<4>(c,0x17200),u<4>(c,0x92100)));
wu<4>(c,0x17200,eval<Op::INT_OR,4,4,4>(u<4>(c,0x92000),u<4>(c,0x92200)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0x17200));
wu<1>(c,0x4ba00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x91f00),0x0ull));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wu<4>(c,0x4bb00,eval<Op::INT_AND,4,4,4>(u<4>(c,0x17200),0x1ull));
wu<1>(c,0x4bc00,eval<Op::INT_NOTEQUAL,1,4,4>(u<4>(c,0x4bb00),0x0ull));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4ba00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),r<1>(c,0x200)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4ba00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),u<1>(c,0x4bc00)));
wr<1>(c,0x200,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
wu<1>(c,0x4bd00,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x91f00),0x1ull));
wu<4>(c,0x17200,m<4>(c,r<4>(c,0x0)));
wu<1>(c,0x4be00,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x17200),0x0ull));
wu<1>(c,0x4bf00,eval<Op::INT_XOR,1,1,1>(r<1>(c,0x200),u<1>(c,0x4be00)));
wu<1>(c,0x0,eval<Op::COPY,1,1>(u<1>(c,0x4bd00)));
wu<1>(c,0x100,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x0),u<1>(c,0x4bf00)));
wu<1>(c,0x200,eval<Op::BOOL_NEGATE,1,1>(u<1>(c,0x4bd00)));
wu<1>(c,0x300,eval<Op::COPY,1,1>(u<1>(c,0x200)));
wu<1>(c,0x400,eval<Op::INT_MULT,1,1,1>(u<1>(c,0x300),r<1>(c,0x20b)));
wr<1>(c,0x20b,eval<Op::INT_OR,1,1,1>(u<1>(c,0x100),u<1>(c,0x400)));
return 0x6d6227;}
case 0x6d6227:{ // ADD byte ptr [ECX + EAX*0x8],CL
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x4)));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x4)));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x6c00),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,u<4>(c,0x6c00)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d622a;}
case 0x6d622a:{ // ADD byte ptr [EAX],AL
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x200,eval<Op::INT_CARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0xa100,eval<Op::INT_ADD,1,1,1>(u<1>(c,0xa100),r<1>(c,0x0)));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa100),0x0ull));
wu<1>(c,0xa100,m<1>(c,r<4>(c,0x0)));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa100),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6230;}
case 0x6d6230:{ // AND CH,BH
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x5,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),r<1>(c,0xd)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x5),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x5),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x5),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x6d6232;}
case 0x6d6232:{ // JNP 0x006d6234
wu<1>(c,0x18500,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x202)));
if(u<1>(c,0x18500)){return 0x6d6234;}
return 0x6d6234;}
case 0x6d6234:{ // RET 0x0
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x0ull));
return uint32_t(r<4>(c,0x284));
return 0x6d6237;}
default:missing_instruction(c.pc);}}
}
