#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_77d(Cpu& c){switch(c.pc){
case 0x77d002:{ // MOV [0x007f6971],AL
wm<1>(c,0x7f6971,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d007;}
case 0x77d007:{ // MOV [0x007f6974],EAX
wm<4>(c,0x7f6974,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d00c;}
case 0x77d00c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d00d;}
case 0x77d010:{ // MOV EAX,[0x0078e024]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x78e024)));
return 0x77d015;}
case 0x77d015:{ // MOV ECX,0x1
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x1ull));
return 0x77d01a;}
case 0x77d01a:{ // MOV [0x007f6bb0],EAX
wm<4>(c,0x7f6bb0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d01f;}
case 0x77d01f:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77d021;}
case 0x77d021:{ // MOV dword ptr [0x007f6bb4],0x3e800000
wm<4>(c,0x7f6bb4,eval<Op::COPY,4,4>(0x3e800000ull));
return 0x77d02b;}
case 0x77d02b:{ // MOV dword ptr [0x007f6bb8],0xbdcccccd
wm<4>(c,0x7f6bb8,eval<Op::COPY,4,4>(0xbdcccccdull));
return 0x77d035;}
case 0x77d035:{ // MOV dword ptr [0x007f6bbc],0x41200000
wm<4>(c,0x7f6bbc,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77d03f;}
case 0x77d03f:{ // MOV dword ptr [0x007f6bc0],ECX
wm<4>(c,0x7f6bc0,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d045;}
case 0x77d045:{ // MOV dword ptr [0x007f6bc4],ECX
wm<4>(c,0x7f6bc4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d04b;}
case 0x77d04b:{ // MOV dword ptr [0x007f6bc8],0x3f000000
wm<4>(c,0x7f6bc8,eval<Op::COPY,4,4>(0x3f000000ull));
return 0x77d055;}
case 0x77d055:{ // MOV dword ptr [0x007f6bcc],0x40100000
wm<4>(c,0x7f6bcc,eval<Op::COPY,4,4>(0x40100000ull));
return 0x77d05f;}
case 0x77d05f:{ // MOV dword ptr [0x007f6bd0],0x0
wm<4>(c,0x7f6bd0,eval<Op::COPY,4,4>(0x0ull));
return 0x77d069;}
case 0x77d069:{ // MOV dword ptr [0x007f6bd4],0x3ecccccd
wm<4>(c,0x7f6bd4,eval<Op::COPY,4,4>(0x3ecccccdull));
return 0x77d073;}
case 0x77d073:{ // MOV [0x007f6bd8],EAX
wm<4>(c,0x7f6bd8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d078;}
case 0x77d078:{ // MOV dword ptr [0x007f6bdc],0x3f800000
wm<4>(c,0x7f6bdc,eval<Op::COPY,4,4>(0x3f800000ull));
return 0x77d082;}
case 0x77d082:{ // MOV dword ptr [0x007f6be0],0x40533333
wm<4>(c,0x7f6be0,eval<Op::COPY,4,4>(0x40533333ull));
return 0x77d08c;}
case 0x77d08c:{ // MOV dword ptr [0x007f6be4],0x42200000
wm<4>(c,0x7f6be4,eval<Op::COPY,4,4>(0x42200000ull));
return 0x77d096;}
case 0x77d096:{ // MOV [0x007f6be8],EAX
wm<4>(c,0x7f6be8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d09b;}
case 0x77d09b:{ // MOV [0x007f6bec],EAX
wm<4>(c,0x7f6bec,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d0a0;}
case 0x77d0a0:{ // MOV dword ptr [0x007f6bf0],0x3f800000
wm<4>(c,0x7f6bf0,eval<Op::COPY,4,4>(0x3f800000ull));
return 0x77d0aa;}
case 0x77d0aa:{ // MOV dword ptr [0x007f6bf4],0x3ecccccd
wm<4>(c,0x7f6bf4,eval<Op::COPY,4,4>(0x3ecccccdull));
return 0x77d0b4;}
case 0x77d0b4:{ // MOV [0x007f6bf8],EAX
wm<4>(c,0x7f6bf8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d0b9;}
case 0x77d0b9:{ // MOV dword ptr [0x007f6bfc],0xbf800000
wm<4>(c,0x7f6bfc,eval<Op::COPY,4,4>(0xbf800000ull));
return 0x77d0c3;}
case 0x77d0c3:{ // MOV dword ptr [0x007f6c00],ECX
wm<4>(c,0x7f6c00,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d0c9;}
case 0x77d0c9:{ // MOV dword ptr [0x007f6c04],0x3f000000
wm<4>(c,0x7f6c04,eval<Op::COPY,4,4>(0x3f000000ull));
return 0x77d0d3;}
case 0x77d0d3:{ // MOV dword ptr [0x007f6c08],0x40100000
wm<4>(c,0x7f6c08,eval<Op::COPY,4,4>(0x40100000ull));
return 0x77d0dd;}
case 0x77d0dd:{ // MOV dword ptr [0x007f6c0c],0x41880000
wm<4>(c,0x7f6c0c,eval<Op::COPY,4,4>(0x41880000ull));
return 0x77d0e7;}
case 0x77d0e7:{ // MOV dword ptr [0x007f6c10],0x3ecccccd
wm<4>(c,0x7f6c10,eval<Op::COPY,4,4>(0x3ecccccdull));
return 0x77d0f1;}
case 0x77d0f1:{ // MOV [0x007f6c14],EAX
wm<4>(c,0x7f6c14,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d0f6;}
case 0x77d0f6:{ // MOV dword ptr [0x007f6c18],0x3f800000
wm<4>(c,0x7f6c18,eval<Op::COPY,4,4>(0x3f800000ull));
return 0x77d100;}
case 0x77d100:{ // MOV dword ptr [0x007f6c1c],0x40000000
wm<4>(c,0x7f6c1c,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77d10a;}
case 0x77d10a:{ // MOV [0x007f6c20],EAX
wm<4>(c,0x7f6c20,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d10f;}
case 0x77d10f:{ // MOV [0x007f6c24],EAX
wm<4>(c,0x7f6c24,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d114;}
case 0x77d114:{ // MOV [0x007f6c28],EAX
wm<4>(c,0x7f6c28,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d119;}
case 0x77d119:{ // MOV dword ptr [0x007f6c2c],0x3f800000
wm<4>(c,0x7f6c2c,eval<Op::COPY,4,4>(0x3f800000ull));
return 0x77d123;}
case 0x77d123:{ // MOV dword ptr [0x007f6c30],0x3ecccccd
wm<4>(c,0x7f6c30,eval<Op::COPY,4,4>(0x3ecccccdull));
return 0x77d12d;}
case 0x77d12d:{ // MOV [0x007f6c34],EAX
wm<4>(c,0x7f6c34,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d132;}
case 0x77d132:{ // MOV dword ptr [0x007f6c38],0xbf800000
wm<4>(c,0x7f6c38,eval<Op::COPY,4,4>(0xbf800000ull));
return 0x77d13c;}
case 0x77d13c:{ // MOV [0x007f6c3c],EAX
wm<4>(c,0x7f6c3c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d141;}
case 0x77d141:{ // MOV dword ptr [0x007f6c40],0x3f000000
wm<4>(c,0x7f6c40,eval<Op::COPY,4,4>(0x3f000000ull));
return 0x77d14b;}
case 0x77d14b:{ // MOV dword ptr [0x007f6c44],0x40100000
wm<4>(c,0x7f6c44,eval<Op::COPY,4,4>(0x40100000ull));
return 0x77d155;}
case 0x77d155:{ // MOV [0x007f6c48],EAX
wm<4>(c,0x7f6c48,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d15a;}
case 0x77d15a:{ // MOV dword ptr [0x007f6c4c],0x3ecccccd
wm<4>(c,0x7f6c4c,eval<Op::COPY,4,4>(0x3ecccccdull));
return 0x77d164;}
case 0x77d164:{ // MOV [0x007f6c50],EAX
wm<4>(c,0x7f6c50,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d169;}
case 0x77d169:{ // MOV dword ptr [0x007f6c54],0x3f800000
wm<4>(c,0x7f6c54,eval<Op::COPY,4,4>(0x3f800000ull));
return 0x77d173;}
case 0x77d173:{ // MOV dword ptr [0x007f6c58],0x4007df3b
wm<4>(c,0x7f6c58,eval<Op::COPY,4,4>(0x4007df3bull));
return 0x77d17d;}
case 0x77d17d:{ // MOV dword ptr [0x007f6c5c],0x42200000
wm<4>(c,0x7f6c5c,eval<Op::COPY,4,4>(0x42200000ull));
return 0x77d187;}
case 0x77d187:{ // MOV [0x007f6c60],EAX
wm<4>(c,0x7f6c60,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d18c;}
case 0x77d18c:{ // MOV [0x007f6c64],EAX
wm<4>(c,0x7f6c64,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d191;}
case 0x77d191:{ // MOV dword ptr [0x007f6c68],0xbf800000
wm<4>(c,0x7f6c68,eval<Op::COPY,4,4>(0xbf800000ull));
return 0x77d19b;}
case 0x77d19b:{ // MOV dword ptr [0x007f6c6c],0x3ecccccd
wm<4>(c,0x7f6c6c,eval<Op::COPY,4,4>(0x3ecccccdull));
return 0x77d1a5;}
case 0x77d1a5:{ // MOV [0x007f6c70],EAX
wm<4>(c,0x7f6c70,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d1aa;}
case 0x77d1aa:{ // MOV dword ptr [0x007f6c74],0xbf800000
wm<4>(c,0x7f6c74,eval<Op::COPY,4,4>(0xbf800000ull));
return 0x77d1b4;}
case 0x77d1b4:{ // MOV [0x007f6c78],EAX
wm<4>(c,0x7f6c78,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d1b9;}
case 0x77d1b9:{ // MOV dword ptr [0x007f6c7c],0x3f000000
wm<4>(c,0x7f6c7c,eval<Op::COPY,4,4>(0x3f000000ull));
return 0x77d1c3;}
case 0x77d1c3:{ // MOV dword ptr [0x007f6c80],0x40100000
wm<4>(c,0x7f6c80,eval<Op::COPY,4,4>(0x40100000ull));
return 0x77d1cd;}
case 0x77d1cd:{ // MOV dword ptr [0x007f6c84],0x41880000
wm<4>(c,0x7f6c84,eval<Op::COPY,4,4>(0x41880000ull));
return 0x77d1d7;}
case 0x77d1d7:{ // MOV dword ptr [0x007f6c88],0x3ecccccd
wm<4>(c,0x7f6c88,eval<Op::COPY,4,4>(0x3ecccccdull));
return 0x77d1e1;}
case 0x77d1e1:{ // MOV [0x007f6c8c],EAX
wm<4>(c,0x7f6c8c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d1e6;}
case 0x77d1e6:{ // MOV dword ptr [0x007f6c90],0x3f800000
wm<4>(c,0x7f6c90,eval<Op::COPY,4,4>(0x3f800000ull));
return 0x77d1f0;}
case 0x77d1f0:{ // MOV dword ptr [0x007f6c94],0x40000000
wm<4>(c,0x7f6c94,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77d1fa;}
case 0x77d1fa:{ // MOV [0x007f6c98],EAX
wm<4>(c,0x7f6c98,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d1ff;}
case 0x77d1ff:{ // MOV [0x007f6c9c],EAX
wm<4>(c,0x7f6c9c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d204;}
case 0x77d204:{ // MOV [0x007f6ca0],EAX
wm<4>(c,0x7f6ca0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d209;}
case 0x77d209:{ // MOV dword ptr [0x007f6ca4],0xbf800000
wm<4>(c,0x7f6ca4,eval<Op::COPY,4,4>(0xbf800000ull));
return 0x77d213;}
case 0x77d213:{ // MOV dword ptr [0x007f6ca8],0x3ecccccd
wm<4>(c,0x7f6ca8,eval<Op::COPY,4,4>(0x3ecccccdull));
return 0x77d21d;}
case 0x77d21d:{ // MOV [0x007f6cac],EAX
wm<4>(c,0x7f6cac,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d222;}
case 0x77d222:{ // MOV dword ptr [0x007f6cb0],0xbf800000
wm<4>(c,0x7f6cb0,eval<Op::COPY,4,4>(0xbf800000ull));
return 0x77d22c;}
case 0x77d22c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d22d;}
case 0x77d230:{ // MOV ECX,0x8371b0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8371b0ull));
return 0x77d235;}
case 0x77d235:{ // CALL 0x0040c910
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d23aull);
return 0x40c910;
return 0x77d23a;}
case 0x77d23a:{ // PUSH 0x781f20
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d23f;}
case 0x77d23f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d244ull);
return 0x75c5ed;
return 0x77d244;}
case 0x77d244:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d245;}
case 0x77d245:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d246;}
case 0x77d250:{ // MOV ECX,0x836750
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x836750ull));
return 0x77d255;}
case 0x77d255:{ // CALL 0x0040c910
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d25aull);
return 0x40c910;
return 0x77d25a;}
case 0x77d25a:{ // PUSH 0x781f30
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d25f;}
case 0x77d25f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d264ull);
return 0x75c5ed;
return 0x77d264;}
case 0x77d264:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d265;}
case 0x77d265:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d266;}
case 0x77d270:{ // PUSH EBX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0xc)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77d271;}
case 0x77d271:{ // PUSH ESI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x18)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77d272;}
case 0x77d272:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77d273;}
case 0x77d273:{ // MOV ESI,0x837048
wr<4>(c,0x18,eval<Op::COPY,4,4>(0x837048ull));
return 0x77d278;}
case 0x77d278:{ // MOV EBX,0x6
wr<4>(c,0xc,eval<Op::COPY,4,4>(0x6ull));
return 0x77d27d;}
case 0x77d27d:{ // OR EDI,0xffffffff
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x1c,eval<Op::INT_OR,4,4,4>(r<4>(c,0x1c),0xffffffffull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x1c),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x1c),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x1c),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77d280;}
case 0x77d280:{ // PUSH 0x783fe5
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x783fe5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d285;}
case 0x77d285:{ // MOV dword ptr [ESI],0x0
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x77d28b;}
case 0x77d28b:{ // LEA EAX,[ESI + 0x4]
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x4ull));
wr<4>(c,0x0,eval<Op::COPY,4,4>(u<4>(c,0x6600)));
return 0x77d28e;}
case 0x77d28e:{ // PUSH 0x20
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77d290;}
case 0x77d290:{ // PUSH EAX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77d291;}
case 0x77d291:{ // MOV dword ptr [ESI + -0x8],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffff8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77d294;}
case 0x77d294:{ // MOV dword ptr [ESI + -0x4],EDI
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77d297;}
case 0x77d297:{ // MOV dword ptr [ESI],0x0
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,r<4>(c,0x18),u<4>(c,0xa300));
return 0x77d29d;}
case 0x77d29d:{ // CALL 0x0050c960
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d2a2ull);
return 0x50c960;
return 0x77d2a2;}
case 0x77d2a2:{ // MOV dword ptr [ESI + 0x28],0x0
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x28ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77d2a9;}
case 0x77d2a9:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77d2ac;}
case 0x77d2ac:{ // ADD ESI,0x34
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x18),0x34ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x18),0x34ull));
wr<4>(c,0x18,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x18),0x34ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x18),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x18),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x18),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77d2af;}
case 0x77d2af:{ // DEC EBX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0xc),0x1ull));
wr<4>(c,0xc,eval<Op::INT_SUB,4,4,4>(r<4>(c,0xc),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0xc),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0xc),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0xc),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77d2b0;}
case 0x77d2b0:{ // JNZ 0x0077d280
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x77d280;}
return 0x77d2b2;}
case 0x77d2b2:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d2b3;}
case 0x77d2b3:{ // POP ESI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x18,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d2b4;}
case 0x77d2b4:{ // POP EBX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0xc,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d2b5;}
case 0x77d2b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d2b6;}
case 0x77d2c0:{ // MOV ECX,0x836560
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x836560ull));
return 0x77d2c5;}
case 0x77d2c5:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d2caull);
return 0x57bcd0;
return 0x77d2ca;}
case 0x77d2ca:{ // PUSH 0x781f40
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d2cf;}
case 0x77d2cf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d2d4ull);
return 0x75c5ed;
return 0x77d2d4;}
case 0x77d2d4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d2d5;}
case 0x77d2d5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d2d6;}
case 0x77d2e0:{ // MOV ECX,0x863760
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x863760ull));
return 0x77d2e5;}
case 0x77d2e5:{ // CALL 0x004fe350
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d2eaull);
return 0x4fe350;
return 0x77d2ea;}
case 0x77d2ea:{ // PUSH 0x781f50
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f50ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d2ef;}
case 0x77d2ef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d2f4ull);
return 0x75c5ed;
return 0x77d2f4;}
case 0x77d2f4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d2f5;}
case 0x77d2f5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d2f6;}
case 0x77d300:{ // PUSH 0x781f90
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f90ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d305;}
case 0x77d305:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d30aull);
return 0x75c5ed;
return 0x77d30a;}
case 0x77d30a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d30b;}
case 0x77d30b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d30c;}
case 0x77d310:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d310ull));
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
return 0x77d316;}
case 0x77d316:{ // FDIV float ptr [0x007992e0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d316ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x7992e0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77d31c;}
case 0x77d31c:{ // FSTP float ptr [0x0086375c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d31cull));
wm<4>(c,0x86375c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77d322;}
case 0x77d322:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d323;}
case 0x77d330:{ // MOV ECX,0x838640
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x838640ull));
return 0x77d335;}
case 0x77d335:{ // JMP 0x004ff250
return 0x4ff250;
return 0x77d33a;}
case 0x77d340:{ // MOV EAX,[0x007fa2b0]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fa2b0)));
return 0x77d345;}
case 0x77d345:{ // MOV ECX,dword ptr [0x007fa2b4]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7fa2b4)));
return 0x77d34b;}
case 0x77d34b:{ // MOV EDX,dword ptr [0x007fa2b8]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x7fa2b8)));
return 0x77d351;}
case 0x77d351:{ // MOV [0x00839be0],EAX
wm<4>(c,0x839be0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d356;}
case 0x77d356:{ // MOV EAX,[0x007fa2bc]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fa2bc)));
return 0x77d35b;}
case 0x77d35b:{ // MOV dword ptr [0x00839be4],ECX
wm<4>(c,0x839be4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d361;}
case 0x77d361:{ // MOV dword ptr [0x00839be8],EDX
wm<4>(c,0x839be8,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77d367;}
case 0x77d367:{ // MOV [0x00839bec],EAX
wm<4>(c,0x839bec,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d36c;}
case 0x77d36c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d36d;}
case 0x77d370:{ // MOV ECX,0x85ad40
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x85ad40ull));
return 0x77d375;}
case 0x77d375:{ // CALL 0x00532740
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d37aull);
return 0x532740;
return 0x77d37a;}
case 0x77d37a:{ // PUSH 0x781fa0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781fa0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d37f;}
case 0x77d37f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d384ull);
return 0x75c5ed;
return 0x77d384;}
case 0x77d384:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d385;}
case 0x77d385:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d386;}
case 0x77d390:{ // MOV ECX,0x83a9d0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x83a9d0ull));
return 0x77d395;}
case 0x77d395:{ // CALL 0x0053ed20
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d39aull);
return 0x53ed20;
return 0x77d39a;}
case 0x77d39a:{ // PUSH 0x781fe0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781fe0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d39f;}
case 0x77d39f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d3a4ull);
return 0x75c5ed;
return 0x77d3a4;}
case 0x77d3a4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d3a5;}
case 0x77d3a5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d3a6;}
case 0x77d3b0:{ // PUSH 0x79da1c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x79da1cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d3b5;}
case 0x77d3b5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d3baull);
return 0x43db50;
return 0x77d3ba;}
case 0x77d3ba:{ // PUSH 0x79da04
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x79da04ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d3bf;}
case 0x77d3bf:{ // MOV [0x008641ac],EAX
wm<4>(c,0x8641ac,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d3c4;}
case 0x77d3c4:{ // MOV dword ptr [0x008641b0],0x4
wm<4>(c,0x8641b0,eval<Op::COPY,4,4>(0x4ull));
return 0x77d3ce;}
case 0x77d3ce:{ // MOV dword ptr [0x008641b4],0x1
wm<4>(c,0x8641b4,eval<Op::COPY,4,4>(0x1ull));
return 0x77d3d8;}
case 0x77d3d8:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d3ddull);
return 0x43db50;
return 0x77d3dd;}
case 0x77d3dd:{ // PUSH 0x79d9f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x79d9f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d3e2;}
case 0x77d3e2:{ // MOV [0x008641b8],EAX
wm<4>(c,0x8641b8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d3e7;}
case 0x77d3e7:{ // MOV dword ptr [0x008641bc],0x1
wm<4>(c,0x8641bc,eval<Op::COPY,4,4>(0x1ull));
return 0x77d3f1;}
case 0x77d3f1:{ // MOV dword ptr [0x008641c0],0x2
wm<4>(c,0x8641c0,eval<Op::COPY,4,4>(0x2ull));
return 0x77d3fb;}
case 0x77d3fb:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d400ull);
return 0x43db50;
return 0x77d400;}
case 0x77d400:{ // MOV [0x008641c4],EAX
wm<4>(c,0x8641c4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d405;}
case 0x77d405:{ // MOV EAX,0x3
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x3ull));
return 0x77d40a;}
case 0x77d40a:{ // PUSH 0x79d9dc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x79d9dcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d40f;}
case 0x77d40f:{ // MOV [0x008641c8],EAX
wm<4>(c,0x8641c8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d414;}
case 0x77d414:{ // MOV [0x008641cc],EAX
wm<4>(c,0x8641cc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d419;}
case 0x77d419:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d41eull);
return 0x43db50;
return 0x77d41e;}
case 0x77d41e:{ // PUSH 0x79d9c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x79d9c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d423;}
case 0x77d423:{ // MOV [0x008641d0],EAX
wm<4>(c,0x8641d0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d428;}
case 0x77d428:{ // MOV dword ptr [0x008641d4],0x2
wm<4>(c,0x8641d4,eval<Op::COPY,4,4>(0x2ull));
return 0x77d432;}
case 0x77d432:{ // MOV dword ptr [0x008641d8],0x4
wm<4>(c,0x8641d8,eval<Op::COPY,4,4>(0x4ull));
return 0x77d43c;}
case 0x77d43c:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d441ull);
return 0x43db50;
return 0x77d441;}
case 0x77d441:{ // PUSH 0x79d9ac
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x79d9acull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d446;}
case 0x77d446:{ // MOV [0x008641dc],EAX
wm<4>(c,0x8641dc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d44b;}
case 0x77d44b:{ // MOV dword ptr [0x008641e0],0x0
wm<4>(c,0x8641e0,eval<Op::COPY,4,4>(0x0ull));
return 0x77d455;}
case 0x77d455:{ // MOV dword ptr [0x008641e4],0xa
wm<4>(c,0x8641e4,eval<Op::COPY,4,4>(0xaull));
return 0x77d45f;}
case 0x77d45f:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d464ull);
return 0x43db50;
return 0x77d464;}
case 0x77d464:{ // ADD ESP,0x18
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x18ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x18ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77d467;}
case 0x77d467:{ // MOV [0x008641e8],EAX
wm<4>(c,0x8641e8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d46c;}
case 0x77d46c:{ // MOV dword ptr [0x008641ec],0x1
wm<4>(c,0x8641ec,eval<Op::COPY,4,4>(0x1ull));
return 0x77d476;}
case 0x77d476:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d477;}
case 0x77d480:{ // MOV ECX,0x8637a0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8637a0ull));
return 0x77d485;}
case 0x77d485:{ // CALL 0x0052c270
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d48aull);
return 0x52c270;
return 0x77d48a;}
case 0x77d48a:{ // PUSH 0x781ff0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ff0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d48f;}
case 0x77d48f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d494ull);
return 0x75c5ed;
return 0x77d494;}
case 0x77d494:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d495;}
case 0x77d495:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d496;}
case 0x77d4a0:{ // MOV ECX,0x863770
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x863770ull));
return 0x77d4a5;}
case 0x77d4a5:{ // CALL 0x0052c270
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d4aaull);
return 0x52c270;
return 0x77d4aa;}
case 0x77d4aa:{ // PUSH 0x782000
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782000ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d4af;}
case 0x77d4af:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d4b4ull);
return 0x75c5ed;
return 0x77d4b4;}
case 0x77d4b4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d4b5;}
case 0x77d4b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d4b6;}
case 0x77d4c0:{ // MOV ECX,0x839c30
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x839c30ull));
return 0x77d4c5;}
case 0x77d4c5:{ // CALL 0x0052c270
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d4caull);
return 0x52c270;
return 0x77d4ca;}
case 0x77d4ca:{ // PUSH 0x782010
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782010ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d4cf;}
case 0x77d4cf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d4d4ull);
return 0x75c5ed;
return 0x77d4d4;}
case 0x77d4d4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d4d5;}
case 0x77d4d5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d4d6;}
case 0x77d4e0:{ // MOV ECX,0x839bd0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x839bd0ull));
return 0x77d4e5;}
case 0x77d4e5:{ // CALL 0x0052c270
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d4eaull);
return 0x52c270;
return 0x77d4ea;}
case 0x77d4ea:{ // PUSH 0x782020
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782020ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d4ef;}
case 0x77d4ef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d4f4ull);
return 0x75c5ed;
return 0x77d4f4;}
case 0x77d4f4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d4f5;}
case 0x77d4f5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d4f6;}
case 0x77d500:{ // PUSH 0x525c50
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x525c50ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d505;}
case 0x77d505:{ // PUSH 0x57bcd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x57bcd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d50a;}
case 0x77d50a:{ // PUSH 0x100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d50f;}
case 0x77d50f:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77d511;}
case 0x77d511:{ // PUSH 0x8639a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x8639a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d516;}
case 0x77d516:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d51bull);
return 0x75c461;
return 0x77d51b;}
case 0x77d51b:{ // PUSH 0x781fb0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781fb0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d520;}
case 0x77d520:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d525ull);
return 0x75c5ed;
return 0x77d525;}
case 0x77d525:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d526;}
case 0x77d526:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d527;}
case 0x77d530:{ // MOV ECX,0x8637b0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8637b0ull));
return 0x77d535;}
case 0x77d535:{ // CALL 0x0052cc50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d53aull);
return 0x52cc50;
return 0x77d53a;}
case 0x77d53a:{ // PUSH 0x781fd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781fd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d53f;}
case 0x77d53f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d544ull);
return 0x75c5ed;
return 0x77d544;}
case 0x77d544:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d545;}
case 0x77d545:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d546;}
case 0x77d550:{ // MOV ECX,0x863768
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x863768ull));
return 0x77d555;}
case 0x77d555:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d55aull);
return 0x598750;
return 0x77d55a;}
case 0x77d55a:{ // PUSH 0x782030
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782030ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d55f;}
case 0x77d55f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d564ull);
return 0x75c5ed;
return 0x77d564;}
case 0x77d564:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d565;}
case 0x77d565:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d566;}
case 0x77d570:{ // MOV ECX,0x8637bc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8637bcull));
return 0x77d575;}
case 0x77d575:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d57aull);
return 0x57bcd0;
return 0x77d57a;}
case 0x77d57a:{ // PUSH 0x782050
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782050ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d57f;}
case 0x77d57f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d584ull);
return 0x75c5ed;
return 0x77d584;}
case 0x77d584:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d585;}
case 0x77d585:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d586;}
case 0x77d590:{ // MOV ECX,0x838980
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x838980ull));
return 0x77d595;}
case 0x77d595:{ // CALL 0x0053adf0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d59aull);
return 0x53adf0;
return 0x77d59a;}
case 0x77d59a:{ // PUSH 0x782040
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782040ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d59f;}
case 0x77d59f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d5a4ull);
return 0x75c5ed;
return 0x77d5a4;}
case 0x77d5a4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d5a5;}
case 0x77d5a5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d5a6;}
case 0x77d5b0:{ // MOV ECX,0x839c40
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x839c40ull));
return 0x77d5b5;}
case 0x77d5b5:{ // CALL 0x00522400
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d5baull);
return 0x522400;
return 0x77d5ba;}
case 0x77d5ba:{ // PUSH 0x781f60
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f60ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d5bf;}
case 0x77d5bf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d5c4ull);
return 0x75c5ed;
return 0x77d5c4;}
case 0x77d5c4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d5c5;}
case 0x77d5c5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d5c6;}
case 0x77d5d0:{ // FLD float ptr [0x00799388]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d5d0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x799388),4,0x0ull,4,10));
return 0x77d5d6;}
case 0x77d5d6:{ // FMUL float ptr [0x0079da34]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d5d6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x79da34),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77d5dc;}
case 0x77d5dc:{ // FSUB float ptr [0x00799390]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d5dcull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x799390),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77d5e2;}
case 0x77d5e2:{ // FSTP float ptr [0x008637c4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d5e2ull));
wm<4>(c,0x8637c4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77d5e8;}
case 0x77d5e8:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d5e9;}
case 0x77d5f0:{ // MOV ECX,0x8637d0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8637d0ull));
return 0x77d5f5;}
case 0x77d5f5:{ // CALL 0x005315b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d5faull);
return 0x5315b0;
return 0x77d5fa;}
case 0x77d5fa:{ // PUSH 0x781f80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d5ff;}
case 0x77d5ff:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d604ull);
return 0x75c5ed;
return 0x77d604;}
case 0x77d604:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d605;}
case 0x77d605:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d606;}
case 0x77d610:{ // PUSH 0x781f70
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781f70ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d615;}
case 0x77d615:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d61aull);
return 0x75c5ed;
return 0x77d61a;}
case 0x77d61a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d61b;}
case 0x77d61b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d61c;}
case 0x77d620:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d620ull));
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
return 0x77d626;}
case 0x77d626:{ // FDIV float ptr [0x0079da40]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d626ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x79da40),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77d62c;}
case 0x77d62c:{ // FSTP float ptr [0x00864638]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d62cull));
wm<4>(c,0x864638,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77d632;}
case 0x77d632:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d633;}
case 0x77d640:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d645;}
case 0x77d645:{ // PUSH 0x56d770
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x56d770ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d64a;}
case 0x77d64a:{ // PUSH 0x6
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x6ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77d64c;}
case 0x77d64c:{ // PUSH 0x20
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77d64e;}
case 0x77d64e:{ // PUSH 0x864640
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x864640ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d653;}
case 0x77d653:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d658ull);
return 0x75c461;
return 0x77d658;}
case 0x77d658:{ // PUSH 0x782060
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782060ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d65d;}
case 0x77d65d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d662ull);
return 0x75c5ed;
return 0x77d662;}
case 0x77d662:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d663;}
case 0x77d663:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d664;}
case 0x77d670:{ // MOV ECX,0x864630
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x864630ull));
return 0x77d675;}
case 0x77d675:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d67aull);
return 0x598750;
return 0x77d67a;}
case 0x77d67a:{ // PUSH 0x782080
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782080ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d67f;}
case 0x77d67f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d684ull);
return 0x75c5ed;
return 0x77d684;}
case 0x77d684:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d685;}
case 0x77d685:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d686;}
case 0x77d690:{ // MOV ECX,0x865210
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x865210ull));
return 0x77d695;}
case 0x77d695:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d69aull);
return 0x57bcd0;
return 0x77d69a;}
case 0x77d69a:{ // PUSH 0x782280
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782280ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d69f;}
case 0x77d69f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d6a4ull);
return 0x75c5ed;
return 0x77d6a4;}
case 0x77d6a4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d6a5;}
case 0x77d6a5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d6a6;}
case 0x77d6b0:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d6b0ull));
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
return 0x77d6b6;}
case 0x77d6b6:{ // FDIV float ptr [0x0079dc44]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d6b6ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x79dc44),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77d6bc;}
case 0x77d6bc:{ // FSTP float ptr [0x0086554c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77d6bcull));
wm<4>(c,0x86554c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77d6c2;}
case 0x77d6c2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d6c3;}
case 0x77d6d0:{ // MOV EAX,[0x0079dc50]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x79dc50)));
return 0x77d6d5;}
case 0x77d6d5:{ // MOV EDX,dword ptr [0x0079dc48]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x79dc48)));
return 0x77d6db;}
case 0x77d6db:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d6dd;}
case 0x77d6dd:{ // MOV [0x007fb8e8],EAX
wm<4>(c,0x7fb8e8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d6e2;}
case 0x77d6e2:{ // MOV dword ptr [0x007fb8ec],ECX
wm<4>(c,0x7fb8ec,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d6e8;}
case 0x77d6e8:{ // MOV ECX,dword ptr [0x0079dc4c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x79dc4c)));
return 0x77d6ee;}
case 0x77d6ee:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77d6f0;}
case 0x77d6f0:{ // MOV dword ptr [0x007fb920],EDX
wm<4>(c,0x7fb920,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77d6f6;}
case 0x77d6f6:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d6f8;}
case 0x77d6f8:{ // MOV [0x007fb924],EAX
wm<4>(c,0x7fb924,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d6fd;}
case 0x77d6fd:{ // MOV dword ptr [0x007fb928],ECX
wm<4>(c,0x7fb928,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d703;}
case 0x77d703:{ // MOV CL,0x80
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x80ull));
return 0x77d705;}
case 0x77d705:{ // MOV AL,0x25
wr<1>(c,0x0,eval<Op::COPY,1,1>(0x25ull));
return 0x77d707;}
case 0x77d707:{ // MOV [0x007fb948],AL
wm<1>(c,0x7fb948,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d70c;}
case 0x77d70c:{ // MOV [0x007fb949],AL
wm<1>(c,0x7fb949,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d711;}
case 0x77d711:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77d713;}
case 0x77d713:{ // MOV byte ptr [0x007fb94e],CL
wm<1>(c,0x7fb94e,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77d719;}
case 0x77d719:{ // MOV byte ptr [0x007fb94f],CL
wm<1>(c,0x7fb94f,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77d71f;}
case 0x77d71f:{ // MOV byte ptr [0x007fb950],CL
wm<1>(c,0x7fb950,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77d725;}
case 0x77d725:{ // MOV byte ptr [0x007fb951],CL
wm<1>(c,0x7fb951,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77d72b;}
case 0x77d72b:{ // MOV byte ptr [0x007fb952],CL
wm<1>(c,0x7fb952,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77d731;}
case 0x77d731:{ // MOV byte ptr [0x007fb953],CL
wm<1>(c,0x7fb953,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77d737;}
case 0x77d737:{ // MOV CL,0x32
wr<1>(c,0x4,eval<Op::COPY,1,1>(0x32ull));
return 0x77d739;}
case 0x77d739:{ // MOV dword ptr [0x007fb8f0],0x0
wm<4>(c,0x7fb8f0,eval<Op::COPY,4,4>(0x0ull));
return 0x77d743;}
case 0x77d743:{ // MOV dword ptr [0x007fb8f4],0x41200000
wm<4>(c,0x7fb8f4,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77d74d;}
case 0x77d74d:{ // MOV dword ptr [0x007fb8f8],0x40000000
wm<4>(c,0x7fb8f8,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77d757;}
case 0x77d757:{ // MOV dword ptr [0x007fb8fc],0x0
wm<4>(c,0x7fb8fc,eval<Op::COPY,4,4>(0x0ull));
return 0x77d761;}
case 0x77d761:{ // MOV dword ptr [0x007fb900],0x41200000
wm<4>(c,0x7fb900,eval<Op::COPY,4,4>(0x41200000ull));
return 0x77d76b;}
case 0x77d76b:{ // MOV dword ptr [0x007fb904],0x40000000
wm<4>(c,0x7fb904,eval<Op::COPY,4,4>(0x40000000ull));
return 0x77d775;}
case 0x77d775:{ // MOV dword ptr [0x007fb908],0x0
wm<4>(c,0x7fb908,eval<Op::COPY,4,4>(0x0ull));
return 0x77d77f;}
case 0x77d77f:{ // MOV dword ptr [0x007fb90c],0x0
wm<4>(c,0x7fb90c,eval<Op::COPY,4,4>(0x0ull));
return 0x77d789;}
case 0x77d789:{ // MOV dword ptr [0x007fb910],0x0
wm<4>(c,0x7fb910,eval<Op::COPY,4,4>(0x0ull));
return 0x77d793;}
case 0x77d793:{ // MOV dword ptr [0x007fb914],0x0
wm<4>(c,0x7fb914,eval<Op::COPY,4,4>(0x0ull));
return 0x77d79d;}
case 0x77d79d:{ // MOV dword ptr [0x007fb918],0x0
wm<4>(c,0x7fb918,eval<Op::COPY,4,4>(0x0ull));
return 0x77d7a7;}
case 0x77d7a7:{ // MOV dword ptr [0x007fb91c],0x0
wm<4>(c,0x7fb91c,eval<Op::COPY,4,4>(0x0ull));
return 0x77d7b1;}
case 0x77d7b1:{ // MOV dword ptr [0x007fb92c],EDX
wm<4>(c,0x7fb92c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77d7b7;}
case 0x77d7b7:{ // MOV dword ptr [0x007fb930],0x0
wm<4>(c,0x7fb930,eval<Op::COPY,4,4>(0x0ull));
return 0x77d7c1;}
case 0x77d7c1:{ // MOV dword ptr [0x007fb934],0x0
wm<4>(c,0x7fb934,eval<Op::COPY,4,4>(0x0ull));
return 0x77d7cb;}
case 0x77d7cb:{ // MOV dword ptr [0x007fb938],0x0
wm<4>(c,0x7fb938,eval<Op::COPY,4,4>(0x0ull));
return 0x77d7d5;}
case 0x77d7d5:{ // MOV dword ptr [0x007fb93c],0x0
wm<4>(c,0x7fb93c,eval<Op::COPY,4,4>(0x0ull));
return 0x77d7df;}
case 0x77d7df:{ // MOV dword ptr [0x007fb940],0x0
wm<4>(c,0x7fb940,eval<Op::COPY,4,4>(0x0ull));
return 0x77d7e9;}
case 0x77d7e9:{ // MOV dword ptr [0x007fb944],0x0
wm<4>(c,0x7fb944,eval<Op::COPY,4,4>(0x0ull));
return 0x77d7f3;}
case 0x77d7f3:{ // MOV [0x007fb94a],AL
wm<1>(c,0x7fb94a,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d7f8;}
case 0x77d7f8:{ // MOV [0x007fb94b],AL
wm<1>(c,0x7fb94b,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d7fd;}
case 0x77d7fd:{ // MOV [0x007fb94c],AL
wm<1>(c,0x7fb94c,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d802;}
case 0x77d802:{ // MOV [0x007fb94d],AL
wm<1>(c,0x7fb94d,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d807;}
case 0x77d807:{ // MOV [0x007fb954],AL
wm<1>(c,0x7fb954,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d80c;}
case 0x77d80c:{ // MOV byte ptr [0x007fb955],CL
wm<1>(c,0x7fb955,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77d812;}
case 0x77d812:{ // MOV [0x007fb956],AL
wm<1>(c,0x7fb956,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d817;}
case 0x77d817:{ // MOV byte ptr [0x007fb957],CL
wm<1>(c,0x7fb957,eval<Op::COPY,1,1>(r<1>(c,0x4)));
return 0x77d81d;}
case 0x77d81d:{ // MOV [0x007fb958],AL
wm<1>(c,0x7fb958,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d822;}
case 0x77d822:{ // MOV [0x007fb959],AL
wm<1>(c,0x7fb959,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77d827;}
case 0x77d827:{ // MOV [0x007fb95c],EAX
wm<4>(c,0x7fb95c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d82c;}
case 0x77d82c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d82d;}
case 0x77d830:{ // MOV ECX,0x8651a4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8651a4ull));
return 0x77d835;}
case 0x77d835:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d83aull);
return 0x598750;
return 0x77d83a;}
case 0x77d83a:{ // PUSH 0x7821f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7821f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d83f;}
case 0x77d83f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d844ull);
return 0x75c5ed;
return 0x77d844;}
case 0x77d844:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d845;}
case 0x77d845:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d846;}
case 0x77d850:{ // MOV EAX,[0x007fa99c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fa99c)));
return 0x77d855;}
case 0x77d855:{ // MOV ECX,dword ptr [0x007fa9a0]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7fa9a0)));
return 0x77d85b;}
case 0x77d85b:{ // MOV EDX,dword ptr [0x007fa97c]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x7fa97c)));
return 0x77d861;}
case 0x77d861:{ // MOV [0x0086658c],EAX
wm<4>(c,0x86658c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d866;}
case 0x77d866:{ // MOV EAX,[0x007fa980]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fa980)));
return 0x77d86b;}
case 0x77d86b:{ // MOV dword ptr [0x00866590],ECX
wm<4>(c,0x866590,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d871;}
case 0x77d871:{ // MOV ECX,dword ptr [0x007fa984]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7fa984)));
return 0x77d877;}
case 0x77d877:{ // MOV dword ptr [0x00866594],EDX
wm<4>(c,0x866594,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77d87d;}
case 0x77d87d:{ // MOV EDX,dword ptr [0x007fa988]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x7fa988)));
return 0x77d883;}
case 0x77d883:{ // MOV [0x00866598],EAX
wm<4>(c,0x866598,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d888;}
case 0x77d888:{ // MOV EAX,[0x007fa98c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fa98c)));
return 0x77d88d;}
case 0x77d88d:{ // MOV dword ptr [0x0086659c],ECX
wm<4>(c,0x86659c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d893;}
case 0x77d893:{ // MOV ECX,dword ptr [0x007fa990]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7fa990)));
return 0x77d899;}
case 0x77d899:{ // MOV dword ptr [0x008665a0],EDX
wm<4>(c,0x8665a0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77d89f;}
case 0x77d89f:{ // MOV EDX,dword ptr [0x007fa994]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x7fa994)));
return 0x77d8a5;}
case 0x77d8a5:{ // MOV [0x008665a4],EAX
wm<4>(c,0x8665a4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d8aa;}
case 0x77d8aa:{ // MOV EAX,[0x007fa998]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fa998)));
return 0x77d8af;}
case 0x77d8af:{ // MOV dword ptr [0x008665a8],ECX
wm<4>(c,0x8665a8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d8b5;}
case 0x77d8b5:{ // MOV ECX,dword ptr [0x007fa978]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7fa978)));
return 0x77d8bb;}
case 0x77d8bb:{ // MOV dword ptr [0x008665ac],EDX
wm<4>(c,0x8665ac,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77d8c1;}
case 0x77d8c1:{ // MOV [0x008665b0],EAX
wm<4>(c,0x8665b0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d8c6;}
case 0x77d8c6:{ // MOV dword ptr [0x008665b4],ECX
wm<4>(c,0x8665b4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77d8cc;}
case 0x77d8cc:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d8cd;}
case 0x77d8d0:{ // PUSH 0x782090
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782090ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d8d5;}
case 0x77d8d5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d8daull);
return 0x75c5ed;
return 0x77d8da;}
case 0x77d8da:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d8db;}
case 0x77d8db:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d8dc;}
case 0x77d8e0:{ // PUSH 0x78c13c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78c13cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d8e5;}
case 0x77d8e5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d8eaull);
return 0x43db50;
return 0x77d8ea;}
case 0x77d8ea:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77d8ed;}
case 0x77d8ed:{ // MOV [0x00865598],EAX
wm<4>(c,0x865598,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77d8f2;}
case 0x77d8f2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d8f3;}
case 0x77d900:{ // MOV ECX,0x86519c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86519cull));
return 0x77d905;}
case 0x77d905:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d90aull);
return 0x598750;
return 0x77d90a;}
case 0x77d90a:{ // PUSH 0x782200
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782200ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d90f;}
case 0x77d90f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d914ull);
return 0x75c5ed;
return 0x77d914;}
case 0x77d914:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d915;}
case 0x77d915:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d916;}
case 0x77d920:{ // MOV ECX,0x86555c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86555cull));
return 0x77d925;}
case 0x77d925:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d92aull);
return 0x598750;
return 0x77d92a;}
case 0x77d92a:{ // PUSH 0x782220
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782220ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d92f;}
case 0x77d92f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d934ull);
return 0x75c5ed;
return 0x77d934;}
case 0x77d934:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d935;}
case 0x77d935:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d936;}
case 0x77d940:{ // MOV ECX,0x865564
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x865564ull));
return 0x77d945;}
case 0x77d945:{ // CALL 0x0057afa0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d94aull);
return 0x57afa0;
return 0x77d94a;}
case 0x77d94a:{ // PUSH 0x782230
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782230ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d94f;}
case 0x77d94f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d954ull);
return 0x75c5ed;
return 0x77d954;}
case 0x77d954:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d955;}
case 0x77d955:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d956;}
case 0x77d960:{ // PUSH 0x579350
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x579350ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d965;}
case 0x77d965:{ // PUSH 0x579340
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x579340ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d96a;}
case 0x77d96a:{ // PUSH 0x39100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x39100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d96f;}
case 0x77d96f:{ // MOV ECX,0x86596c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86596cull));
return 0x77d974;}
case 0x77d974:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d979ull);
return 0x43c0b0;
return 0x77d979;}
case 0x77d979:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d97a;}
case 0x77d980:{ // PUSH 0x579350
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x579350ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d985;}
case 0x77d985:{ // PUSH 0x579340
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x579340ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d98a;}
case 0x77d98a:{ // PUSH 0x39101
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x39101ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d98f;}
case 0x77d98f:{ // MOV ECX,0x8653a0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8653a0ull));
return 0x77d994;}
case 0x77d994:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d999ull);
return 0x43c0b0;
return 0x77d999;}
case 0x77d999:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d99a;}
case 0x77d9a0:{ // PUSH 0x579350
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x579350ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9a5;}
case 0x77d9a5:{ // PUSH 0x579340
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x579340ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9aa;}
case 0x77d9aa:{ // PUSH 0x39102
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x39102ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9af;}
case 0x77d9af:{ // MOV ECX,0x865470
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x865470ull));
return 0x77d9b4;}
case 0x77d9b4:{ // CALL 0x0043c0b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d9b9ull);
return 0x43c0b0;
return 0x77d9b9;}
case 0x77d9b9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d9ba;}
case 0x77d9c0:{ // PUSH 0x57c320
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x57c320ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9c5;}
case 0x77d9c5:{ // PUSH 0x57c240
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x57c240ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9ca;}
case 0x77d9ca:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77d9cc;}
case 0x77d9cc:{ // PUSH 0x1c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x1c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9d1;}
case 0x77d9d1:{ // PUSH 0x8655a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x8655a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9d6;}
case 0x77d9d6:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d9dbull);
return 0x75c461;
return 0x77d9db;}
case 0x77d9db:{ // PUSH 0x782290
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782290ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9e0;}
case 0x77d9e0:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d9e5ull);
return 0x75c5ed;
return 0x77d9e5;}
case 0x77d9e5:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d9e6;}
case 0x77d9e6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d9e7;}
case 0x77d9f0:{ // PUSH 0x7820a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7820a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77d9f5;}
case 0x77d9f5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77d9faull);
return 0x75c5ed;
return 0x77d9fa;}
case 0x77d9fa:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77d9fb;}
case 0x77d9fb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77d9fc;}
case 0x77da00:{ // PUSH 0x7820b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7820b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da05;}
case 0x77da05:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da0aull);
return 0x75c5ed;
return 0x77da0a;}
case 0x77da0a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da0b;}
case 0x77da0b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da0c;}
case 0x77da10:{ // PUSH 0x7820c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7820c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da15;}
case 0x77da15:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da1aull);
return 0x75c5ed;
return 0x77da1a;}
case 0x77da1a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da1b;}
case 0x77da1b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da1c;}
case 0x77da20:{ // PUSH 0x7820d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7820d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da25;}
case 0x77da25:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da2aull);
return 0x75c5ed;
return 0x77da2a;}
case 0x77da2a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da2b;}
case 0x77da2b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da2c;}
case 0x77da30:{ // PUSH 0x7820e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7820e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da35;}
case 0x77da35:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da3aull);
return 0x75c5ed;
return 0x77da3a;}
case 0x77da3a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da3b;}
case 0x77da3b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da3c;}
case 0x77da40:{ // PUSH 0x7820f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7820f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da45;}
case 0x77da45:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da4aull);
return 0x75c5ed;
return 0x77da4a;}
case 0x77da4a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da4b;}
case 0x77da4b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da4c;}
case 0x77da50:{ // PUSH 0x782100
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782100ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da55;}
case 0x77da55:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da5aull);
return 0x75c5ed;
return 0x77da5a;}
case 0x77da5a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da5b;}
case 0x77da5b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da5c;}
case 0x77da60:{ // PUSH 0x782110
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782110ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da65;}
case 0x77da65:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da6aull);
return 0x75c5ed;
return 0x77da6a;}
case 0x77da6a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da6b;}
case 0x77da6b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da6c;}
case 0x77da70:{ // PUSH 0x782120
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782120ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da75;}
case 0x77da75:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da7aull);
return 0x75c5ed;
return 0x77da7a;}
case 0x77da7a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da7b;}
case 0x77da7b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da7c;}
case 0x77da80:{ // PUSH 0x782130
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782130ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da85;}
case 0x77da85:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da8aull);
return 0x75c5ed;
return 0x77da8a;}
case 0x77da8a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da8b;}
case 0x77da8b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da8c;}
case 0x77da90:{ // PUSH 0x782140
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782140ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77da95;}
case 0x77da95:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77da9aull);
return 0x75c5ed;
return 0x77da9a;}
case 0x77da9a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77da9b;}
case 0x77da9b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77da9c;}
case 0x77daa0:{ // PUSH 0x782150
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782150ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77daa5;}
case 0x77daa5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77daaaull);
return 0x75c5ed;
return 0x77daaa;}
case 0x77daaa:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77daab;}
case 0x77daab:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77daac;}
case 0x77dab0:{ // PUSH 0x782160
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782160ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dab5;}
case 0x77dab5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dabaull);
return 0x75c5ed;
return 0x77daba;}
case 0x77daba:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dabb;}
case 0x77dabb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dabc;}
case 0x77dac0:{ // PUSH 0x782170
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782170ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dac5;}
case 0x77dac5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dacaull);
return 0x75c5ed;
return 0x77daca;}
case 0x77daca:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dacb;}
case 0x77dacb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dacc;}
case 0x77dad0:{ // PUSH 0x782180
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782180ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dad5;}
case 0x77dad5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dadaull);
return 0x75c5ed;
return 0x77dada;}
case 0x77dada:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dadb;}
case 0x77dadb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dadc;}
case 0x77dae0:{ // PUSH EDI
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77dae1;}
case 0x77dae1:{ // MOV ECX,0x18
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x18ull));
return 0x77dae6;}
case 0x77dae6:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77dae8;}
case 0x77dae8:{ // MOV EDI,0x8651b0
wr<4>(c,0x1c,eval<Op::COPY,4,4>(0x8651b0ull));
return 0x77daed;}
case 0x77daed:{ // STOSD.REP ES:EDI
wu<1>(c,0x19300,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
if(u<1>(c,0x19300)){return 0x77daef;}
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wu<4>(c,0x16a00,eval<Op::COPY,4,4>(r<4>(c,0x1c)));
wu<4>(c,0x16b00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x1c),0x4ull));
wu<4>(c,0x16c00,eval<Op::INT_ZEXT,4,1>(r<1>(c,0x20a)));
wu<4>(c,0x16d00,eval<Op::INT_MULT,4,4,4>(0x8ull,u<4>(c,0x16c00)));
wr<4>(c,0x1c,eval<Op::INT_SUB,4,4,4>(u<4>(c,0x16b00),u<4>(c,0x16d00)));
wu<4>(c,0x16f00,eval<Op::COPY,4,4>(r<4>(c,0x0)));
wm<4>(c,u<4>(c,0x16a00),u<4>(c,0x16f00));
return 0x77daed;
return 0x77daef;}
case 0x77daef:{ // POP EDI
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x1c,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77daf0;}
case 0x77daf0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77daf1;}
case 0x77db00:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db05;}
case 0x77db05:{ // PUSH 0x572340
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x572340ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db0a;}
case 0x77db0a:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77db0c;}
case 0x77db0c:{ // PUSH 0x30
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x30ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77db0e;}
case 0x77db0e:{ // PUSH 0x8653b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x8653b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db13;}
case 0x77db13:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77db18ull);
return 0x75c461;
return 0x77db18;}
case 0x77db18:{ // PUSH 0x782190
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782190ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db1d;}
case 0x77db1d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77db22ull);
return 0x75c5ed;
return 0x77db22;}
case 0x77db22:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77db23;}
case 0x77db23:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77db24;}
case 0x77db30:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db35;}
case 0x77db35:{ // PUSH 0x5796d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x5796d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db3a;}
case 0x77db3a:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77db3c;}
case 0x77db3c:{ // PUSH 0x20
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77db3e;}
case 0x77db3e:{ // PUSH 0x865360
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x865360ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db43;}
case 0x77db43:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77db48ull);
return 0x75c461;
return 0x77db48;}
case 0x77db48:{ // PUSH 0x7821b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7821b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db4d;}
case 0x77db4d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77db52ull);
return 0x75c5ed;
return 0x77db52;}
case 0x77db52:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77db53;}
case 0x77db53:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77db54;}
case 0x77db60:{ // MOV ECX,0x865220
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x865220ull));
return 0x77db65;}
case 0x77db65:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77db6aull);
return 0x598750;
return 0x77db6a;}
case 0x77db6a:{ // PUSH 0x782240
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782240ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db6f;}
case 0x77db6f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77db74ull);
return 0x75c5ed;
return 0x77db74;}
case 0x77db74:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77db75;}
case 0x77db75:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77db76;}
case 0x77db80:{ // MOV ECX,0x865550
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x865550ull));
return 0x77db85;}
case 0x77db85:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77db8aull);
return 0x598750;
return 0x77db8a;}
case 0x77db8a:{ // PUSH 0x782250
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782250ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77db8f;}
case 0x77db8f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77db94ull);
return 0x75c5ed;
return 0x77db94;}
case 0x77db94:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77db95;}
case 0x77db95:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77db96;}
case 0x77dba0:{ // MOV ECX,0x865218
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x865218ull));
return 0x77dba5;}
case 0x77dba5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dbaaull);
return 0x598750;
return 0x77dbaa;}
case 0x77dbaa:{ // PUSH 0x7822b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7822b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dbaf;}
case 0x77dbaf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dbb4ull);
return 0x75c5ed;
return 0x77dbb4;}
case 0x77dbb4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dbb5;}
case 0x77dbb5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dbb6;}
case 0x77dbc0:{ // MOV ECX,0x866584
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x866584ull));
return 0x77dbc5;}
case 0x77dbc5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dbcaull);
return 0x598750;
return 0x77dbca;}
case 0x77dbca:{ // PUSH 0x782210
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782210ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dbcf;}
case 0x77dbcf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dbd4ull);
return 0x75c5ed;
return 0x77dbd4;}
case 0x77dbd4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dbd5;}
case 0x77dbd5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dbd6;}
case 0x77dbe0:{ // MOV ECX,0x8652f0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8652f0ull));
return 0x77dbe5;}
case 0x77dbe5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dbeaull);
return 0x598750;
return 0x77dbea;}
case 0x77dbea:{ // PUSH 0x782260
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782260ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dbef;}
case 0x77dbef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dbf4ull);
return 0x75c5ed;
return 0x77dbf4;}
case 0x77dbf4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dbf5;}
case 0x77dbf5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dbf6;}
case 0x77dc00:{ // MOV ECX,0x865190
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x865190ull));
return 0x77dc05;}
case 0x77dc05:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dc0aull);
return 0x598750;
return 0x77dc0a;}
case 0x77dc0a:{ // PUSH 0x782270
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782270ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dc0f;}
case 0x77dc0f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dc14ull);
return 0x75c5ed;
return 0x77dc14;}
case 0x77dc14:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dc15;}
case 0x77dc15:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dc16;}
case 0x77dc20:{ // MOV EAX,[0x0079dd48]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x79dd48)));
return 0x77dc25;}
case 0x77dc25:{ // MOV ECX,dword ptr [0x0079dd4c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x79dd4c)));
return 0x77dc2b;}
case 0x77dc2b:{ // MOV EDX,dword ptr [0x0079dd50]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x79dd50)));
return 0x77dc31;}
case 0x77dc31:{ // MOV [0x007fb8a0],EAX
wm<4>(c,0x7fb8a0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77dc36;}
case 0x77dc36:{ // MOV EAX,0x3
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x3ull));
return 0x77dc3b;}
case 0x77dc3b:{ // MOV [0x007fb8a4],EAX
wm<4>(c,0x7fb8a4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77dc40;}
case 0x77dc40:{ // MOV [0x007fb8b0],EAX
wm<4>(c,0x7fb8b0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77dc45;}
case 0x77dc45:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77dc47;}
case 0x77dc47:{ // MOV dword ptr [0x007fb8a8],0x8a3b24
wm<4>(c,0x7fb8a8,eval<Op::COPY,4,4>(0x8a3b24ull));
return 0x77dc51;}
case 0x77dc51:{ // MOV dword ptr [0x007fb8ac],ECX
wm<4>(c,0x7fb8ac,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77dc57;}
case 0x77dc57:{ // MOV dword ptr [0x007fb8b4],0x8a3b38
wm<4>(c,0x7fb8b4,eval<Op::COPY,4,4>(0x8a3b38ull));
return 0x77dc61;}
case 0x77dc61:{ // MOV dword ptr [0x007fb8b8],EDX
wm<4>(c,0x7fb8b8,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77dc67;}
case 0x77dc67:{ // MOV dword ptr [0x007fb8bc],0x6
wm<4>(c,0x7fb8bc,eval<Op::COPY,4,4>(0x6ull));
return 0x77dc71;}
case 0x77dc71:{ // MOV dword ptr [0x007fb8c0],0x7fb624
wm<4>(c,0x7fb8c0,eval<Op::COPY,4,4>(0x7fb624ull));
return 0x77dc7b;}
case 0x77dc7b:{ // MOV [0x007fb8c4],EAX
wm<4>(c,0x7fb8c4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77dc80;}
case 0x77dc80:{ // MOV dword ptr [0x007fb8c8],0x7
wm<4>(c,0x7fb8c8,eval<Op::COPY,4,4>(0x7ull));
return 0x77dc8a;}
case 0x77dc8a:{ // MOV [0x007fb8cc],EAX
wm<4>(c,0x7fb8cc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77dc8f;}
case 0x77dc8f:{ // MOV [0x007fb8d0],EAX
wm<4>(c,0x7fb8d0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77dc94;}
case 0x77dc94:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dc95;}
case 0x77dca0:{ // MOV ECX,0x865930
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x865930ull));
return 0x77dca5;}
case 0x77dca5:{ // CALL 0x00575770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dcaaull);
return 0x575770;
return 0x77dcaa;}
case 0x77dcaa:{ // PUSH 0x7821d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7821d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dcaf;}
case 0x77dcaf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dcb4ull);
return 0x75c5ed;
return 0x77dcb4;}
case 0x77dcb4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dcb5;}
case 0x77dcb5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dcb6;}
case 0x77dcc0:{ // FILD dword ptr [0x007fb70c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77dcc0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("INT2FLOAT",m<4>(c,0x7fb70c),4,0x0ull,4,10));
return 0x77dcc6;}
case 0x77dcc6:{ // FMUL float ptr [0x00786460]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77dcc6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x786460),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77dccc;}
case 0x77dccc:{ // FSTP float ptr [0x00865198]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77dcccull));
wm<4>(c,0x865198,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77dcd2;}
case 0x77dcd2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dcd3;}
case 0x77dce0:{ // MOV EAX,[0x007fb710]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fb710)));
return 0x77dce5;}
case 0x77dce5:{ // MOV [0x00865558],EAX
wm<4>(c,0x865558,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77dcea;}
case 0x77dcea:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dceb;}
case 0x77dcf0:{ // MOV ECX,0x8652f8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8652f8ull));
return 0x77dcf5;}
case 0x77dcf5:{ // CALL 0x00577430
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dcfaull);
return 0x577430;
return 0x77dcfa;}
case 0x77dcfa:{ // PUSH 0x7821e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7821e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dcff;}
case 0x77dcff:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dd04ull);
return 0x75c5ed;
return 0x77dd04;}
case 0x77dd04:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dd05;}
case 0x77dd05:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dd06;}
case 0x77dd10:{ // MOV EAX,0x8698dc
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x8698dcull));
return 0x77dd15;}
case 0x77dd15:{ // MOV byte ptr [EAX],0x0
wu<1>(c,0xa100,eval<Op::COPY,1,1>(0x0ull));
wm<1>(c,r<4>(c,0x0),u<1>(c,0xa100));
return 0x77dd18;}
case 0x77dd18:{ // ADD EAX,0x10
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x10ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x10ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77dd1b;}
case 0x77dd1b:{ // CMP EAX,0x86993c
wr<1>(c,0x200,eval<Op::INT_LESS,1,4,4>(r<4>(c,0x0),0x86993cull));
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x0),0x86993cull));
wu<4>(c,0x60e00,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x0),0x86993cull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(u<4>(c,0x60e00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(u<4>(c,0x60e00),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(u<4>(c,0x60e00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77dd20;}
case 0x77dd20:{ // JL 0x0077dd15
wu<1>(c,0x18700,eval<Op::INT_NOTEQUAL,1,1,1>(r<1>(c,0x20b),r<1>(c,0x207)));
if(u<1>(c,0x18700)){return 0x77dd15;}
return 0x77dd22;}
case 0x77dd22:{ // PUSH 0x7822c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7822c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dd27;}
case 0x77dd27:{ // MOV byte ptr [0x0086993c],0x0
wm<1>(c,0x86993c,eval<Op::COPY,1,1>(0x0ull));
return 0x77dd2e;}
case 0x77dd2e:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dd33ull);
return 0x75c5ed;
return 0x77dd33;}
case 0x77dd33:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dd34;}
case 0x77dd34:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dd35;}
case 0x77dd40:{ // MOV EAX,[0x007fbdfc]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7fbdfc)));
return 0x77dd45;}
case 0x77dd45:{ // INC EAX
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x1ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77dd46;}
case 0x77dd46:{ // MOV [0x00869674],AX
wm<2>(c,0x869674,eval<Op::COPY,2,2>(r<2>(c,0x0)));
return 0x77dd4c;}
case 0x77dd4c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dd4d;}
case 0x77dd50:{ // PUSH 0x7822e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7822e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dd55;}
case 0x77dd55:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dd5aull);
return 0x75c5ed;
return 0x77dd5a;}
case 0x77dd5a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dd5b;}
case 0x77dd5b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dd5c;}
case 0x77dd60:{ // PUSH 0x7822f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7822f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dd65;}
case 0x77dd65:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dd6aull);
return 0x75c5ed;
return 0x77dd6a;}
case 0x77dd6a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dd6b;}
case 0x77dd6b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dd6c;}
case 0x77dd70:{ // MOV EAX,0x8691e0
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x8691e0ull));
return 0x77dd75;}
case 0x77dd75:{ // MOV ECX,0x5
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x5ull));
return 0x77dd7a;}
case 0x77dd7a:{ // LEA EBX,[EBX]
wr<4>(c,0xc,eval<Op::COPY,4,4>(r<4>(c,0xc)));
return 0x77dd80;}
case 0x77dd80:{ // MOV dword ptr [EAX],0x0
wu<4>(c,0xa300,eval<Op::COPY,4,4>(0x0ull));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x77dd86;}
case 0x77dd86:{ // ADD EAX,0x14
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x14ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x14ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x14ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77dd89;}
case 0x77dd89:{ // DEC ECX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x4),0x1ull));
wr<4>(c,0x4,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x4),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77dd8a;}
case 0x77dd8a:{ // JNZ 0x0077dd80
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x77dd80;}
return 0x77dd8c;}
case 0x77dd8c:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dd8d;}
case 0x77dd90:{ // PUSH 0x782300
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782300ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dd95;}
case 0x77dd95:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dd9aull);
return 0x75c5ed;
return 0x77dd9a;}
case 0x77dd9a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77dd9b;}
case 0x77dd9b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dd9c;}
case 0x77dda0:{ // PUSH 0x782310
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782310ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dda5;}
case 0x77dda5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ddaaull);
return 0x75c5ed;
return 0x77ddaa;}
case 0x77ddaa:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ddab;}
case 0x77ddab:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ddac;}
case 0x77ddb0:{ // XOR EAX,EAX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x0,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x0),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ddb2;}
case 0x77ddb2:{ // MOV [0x00869074],EAX
wm<4>(c,0x869074,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ddb7;}
case 0x77ddb7:{ // MOV [0x00869078],EAX
wm<4>(c,0x869078,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ddbc;}
case 0x77ddbc:{ // MOV [0x0086907c],EAX
wm<4>(c,0x86907c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ddc1;}
case 0x77ddc1:{ // MOV [0x00869080],EAX
wm<4>(c,0x869080,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ddc6;}
case 0x77ddc6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ddc7;}
case 0x77ddd0:{ // PUSH 0x783fe5
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x783fe5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ddd5;}
case 0x77ddd5:{ // PUSH 0x869088
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x869088ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ddda;}
case 0x77ddda:{ // CALL 0x0043dbd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dddfull);
return 0x43dbd0;
return 0x77dddf;}
case 0x77dddf:{ // PUSH 0x782320
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782320ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dde4;}
case 0x77dde4:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dde9ull);
return 0x75c5ed;
return 0x77dde9;}
case 0x77dde9:{ // ADD ESP,0xc
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0xcull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0xcull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77ddec;}
case 0x77ddec:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dded;}
case 0x77ddf0:{ // PUSH 0x782330
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782330ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77ddf5;}
case 0x77ddf5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ddfaull);
return 0x75c5ed;
return 0x77ddfa;}
case 0x77ddfa:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ddfb;}
case 0x77ddfb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ddfc;}
case 0x77de00:{ // MOV EAX,0x866c20
wr<4>(c,0x0,eval<Op::COPY,4,4>(0x866c20ull));
return 0x77de05;}
case 0x77de05:{ // MOV EDX,0x12
wr<4>(c,0x8,eval<Op::COPY,4,4>(0x12ull));
return 0x77de0a;}
case 0x77de0a:{ // XOR ECX,ECX
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wr<4>(c,0x4,eval<Op::INT_XOR,4,4,4>(r<4>(c,0x4),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x4),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x4),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x4),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77de0c;}
case 0x77de0c:{ // LEA ESP,[ESP]
wr<4>(c,0x10,eval<Op::COPY,4,4>(r<4>(c,0x10)));
return 0x77de10;}
case 0x77de10:{ // MOV byte ptr [EAX + 0xfffffe08],CL
wu<4>(c,0x6800,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffe08ull));
wu<1>(c,0xa100,eval<Op::COPY,1,1>(r<1>(c,0x4)));
wm<1>(c,u<4>(c,0x6800),u<1>(c,0xa100));
return 0x77de16;}
case 0x77de16:{ // MOV dword ptr [EAX + -0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0xfffffffcull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77de19;}
case 0x77de19:{ // MOV dword ptr [EAX],ECX
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,r<4>(c,0x0),u<4>(c,0xa300));
return 0x77de1b;}
case 0x77de1b:{ // MOV dword ptr [EAX + 0x4],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x4ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77de1e;}
case 0x77de1e:{ // MOV dword ptr [EAX + 0x8],ECX
wu<4>(c,0x6600,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x8ull));
wu<4>(c,0xa300,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wm<4>(c,u<4>(c,0x6600),u<4>(c,0xa300));
return 0x77de21;}
case 0x77de21:{ // ADD EAX,0x204
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x0),0x204ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x0),0x204ull));
wr<4>(c,0x0,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x0),0x204ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x0),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77de26;}
case 0x77de26:{ // DEC EDX
wr<1>(c,0x20b,eval<Op::INT_SBORROW,1,4,4>(r<4>(c,0x8),0x1ull));
wr<4>(c,0x8,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x8),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77de27;}
case 0x77de27:{ // JNZ 0x0077de10
wu<1>(c,0x17c00,eval<Op::BOOL_NEGATE,1,1>(r<1>(c,0x206)));
if(u<1>(c,0x17c00)){return 0x77de10;}
return 0x77de29;}
case 0x77de29:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77de2a;}
case 0x77de30:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77de35;}
case 0x77de35:{ // PUSH 0x588130
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x588130ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77de3a;}
case 0x77de3a:{ // PUSH 0x5
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77de3c;}
case 0x77de3c:{ // PUSH 0x20
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x20ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77de3e;}
case 0x77de3e:{ // PUSH 0x8693c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x8693c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77de43;}
case 0x77de43:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77de48ull);
return 0x75c461;
return 0x77de48;}
case 0x77de48:{ // PUSH 0x782340
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782340ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77de4d;}
case 0x77de4d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77de52ull);
return 0x75c5ed;
return 0x77de52;}
case 0x77de52:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77de53;}
case 0x77de53:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77de54;}
case 0x77de60:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77de60ull));
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
return 0x77de66;}
case 0x77de66:{ // FDIV float ptr [0x007a17bc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77de66ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x7a17bc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77de6c;}
case 0x77de6c:{ // FSTP float ptr [0x0086b4bc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77de6cull));
wm<4>(c,0x86b4bc,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77de72;}
case 0x77de72:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77de73;}
case 0x77de80:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77de82;}
case 0x77de82:{ // PUSH 0x7fc880
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7fc880ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77de87;}
case 0x77de87:{ // MOV ECX,0x86b3c0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b3c0ull));
return 0x77de8c;}
case 0x77de8c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77de91ull);
return 0x576770;
return 0x77de91;}
case 0x77de91:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77de92;}
case 0x77dea0:{ // PUSH 0x4
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77dea2;}
case 0x77dea2:{ // PUSH 0x7fc8a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7fc8a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77dea7;}
case 0x77dea7:{ // MOV ECX,0x86b590
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b590ull));
return 0x77deac;}
case 0x77deac:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77deb1ull);
return 0x576770;
return 0x77deb1;}
case 0x77deb1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77deb2;}
case 0x77dec0:{ // MOV ECX,0x86b4c8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b4c8ull));
return 0x77dec5;}
case 0x77dec5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77decaull);
return 0x598750;
return 0x77deca;}
case 0x77deca:{ // PUSH 0x7823e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7823e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77decf;}
case 0x77decf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ded4ull);
return 0x75c5ed;
return 0x77ded4;}
case 0x77ded4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77ded5;}
case 0x77ded5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ded6;}
case 0x77dee0:{ // MOV ECX,0x86b490
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b490ull));
return 0x77dee5;}
case 0x77dee5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77deeaull);
return 0x598750;
return 0x77deea;}
case 0x77deea:{ // PUSH 0x7823f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7823f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77deef;}
case 0x77deef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77def4ull);
return 0x75c5ed;
return 0x77def4;}
case 0x77def4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77def5;}
case 0x77def5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77def6;}
case 0x77df00:{ // MOV ECX,0x86b5a0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b5a0ull));
return 0x77df05;}
case 0x77df05:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77df0aull);
return 0x57bcd0;
return 0x77df0a;}
case 0x77df0a:{ // PUSH 0x782410
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782410ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77df0f;}
case 0x77df0f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77df14ull);
return 0x75c5ed;
return 0x77df14;}
case 0x77df14:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77df15;}
case 0x77df15:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77df16;}
case 0x77df20:{ // MOV ECX,0x86b598
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b598ull));
return 0x77df25;}
case 0x77df25:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77df2aull);
return 0x598750;
return 0x77df2a;}
case 0x77df2a:{ // PUSH 0x782400
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x782400ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77df2f;}
case 0x77df2f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77df34ull);
return 0x75c5ed;
return 0x77df34;}
case 0x77df34:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77df35;}
case 0x77df35:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77df36;}
case 0x77df40:{ // PUSH 0x3
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x3ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77df42;}
case 0x77df42:{ // PUSH 0x7fc8c8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7fc8c8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77df47;}
case 0x77df47:{ // MOV ECX,0x86b578
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b578ull));
return 0x77df4c;}
case 0x77df4c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77df51ull);
return 0x576770;
return 0x77df51;}
case 0x77df51:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77df52;}
case 0x77df60:{ // PUSH 0x3
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x3ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77df62;}
case 0x77df62:{ // PUSH 0x7fc8e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7fc8e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77df67;}
case 0x77df67:{ // MOV ECX,0x86b498
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b498ull));
return 0x77df6c;}
case 0x77df6c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77df71ull);
return 0x576770;
return 0x77df71;}
case 0x77df71:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77df72;}
case 0x77df80:{ // MOV dword ptr [0x0086b4a8],0x3db2b8c2
wm<4>(c,0x86b4a8,eval<Op::COPY,4,4>(0x3db2b8c2ull));
return 0x77df8a;}
case 0x77df8a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77df8b;}
case 0x77df90:{ // PUSH 0x3
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x3ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77df92;}
case 0x77df92:{ // PUSH 0x7fc8f8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7fc8f8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77df97;}
case 0x77df97:{ // MOV ECX,0x86b4a0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x86b4a0ull));
return 0x77df9c;}
case 0x77df9c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77dfa1ull);
return 0x576770;
return 0x77dfa1;}
case 0x77dfa1:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77dfa2;}
case 0x77dfb0:{ // MOV dword ptr [0x0086b5e8],0x0
wm<4>(c,0x86b5e8,eval<Op::COPY,4,4>(0x0ull));
return 0x77dfba;}
case 0x77dfba:{ // MOV dword ptr [0x0086b5ec],0x0
wm<4>(c,0x86b5ec,eval<Op::COPY,4,4>(0x0ull));
return 0x77dfc4;}
case 0x77dfc4:{ // MOV dword ptr [0x0086b5f0],0x3e860a92
wm<4>(c,0x86b5f0,eval<Op::COPY,4,4>(0x3e860a92ull));
return 0x77dfce;}
case 0x77dfce:{ // MOV dword ptr [0x0086b5f4],0x3dcccccd
wm<4>(c,0x86b5f4,eval<Op::COPY,4,4>(0x3dcccccdull));
return 0x77dfd8;}
case 0x77dfd8:{ // MOV dword ptr [0x0086b5f8],0x3f060a92
wm<4>(c,0x86b5f8,eval<Op::COPY,4,4>(0x3f060a92ull));
return 0x77dfe2;}
case 0x77dfe2:{ // MOV dword ptr [0x0086b5fc],0x3ee66666
wm<4>(c,0x86b5fc,eval<Op::COPY,4,4>(0x3ee66666ull));
return 0x77dfec;}
case 0x77dfec:{ // MOV dword ptr [0x0086b600],0x3f490fdb
wm<4>(c,0x86b600,eval<Op::COPY,4,4>(0x3f490fdbull));
return 0x77dff6;}
case 0x77dff6:{ // MOV dword ptr [0x0086b604],0x3f59999a
wm<4>(c,0x86b604,eval<Op::COPY,4,4>(0x3f59999aull));
return 0x77e000;}
default:missing_instruction(c.pc);}}
}
