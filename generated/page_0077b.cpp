#include "runtime.hpp"
namespace nfsu2raw {
uint32_t page_77b(Cpu& c){switch(c.pc){
case 0x77b000:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b005;}
case 0x77b005:{ // PUSH 0x4fe910
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4fe910ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b00a;}
case 0x77b00a:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77b00c;}
case 0x77b00c:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77b00e;}
case 0x77b00e:{ // PUSH 0x827d38
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x827d38ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b013;}
case 0x77b013:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b018ull);
return 0x75c461;
return 0x77b018;}
case 0x77b018:{ // PUSH 0x7819b0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7819b0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b01d;}
case 0x77b01d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b022ull);
return 0x75c5ed;
return 0x77b022;}
case 0x77b022:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b023;}
case 0x77b023:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b024;}
case 0x77b030:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b035;}
case 0x77b035:{ // PUSH 0x4fe910
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4fe910ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b03a;}
case 0x77b03a:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77b03c;}
case 0x77b03c:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77b03e;}
case 0x77b03e:{ // PUSH 0x827db8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x827db8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b043;}
case 0x77b043:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b048ull);
return 0x75c461;
return 0x77b048;}
case 0x77b048:{ // PUSH 0x7819d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7819d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b04d;}
case 0x77b04d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b052ull);
return 0x75c5ed;
return 0x77b052;}
case 0x77b052:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b053;}
case 0x77b053:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b054;}
case 0x77b060:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b065;}
case 0x77b065:{ // PUSH 0x4fe910
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4fe910ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b06a;}
case 0x77b06a:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77b06c;}
case 0x77b06c:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77b06e;}
case 0x77b06e:{ // PUSH 0x827e28
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x827e28ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b073;}
case 0x77b073:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b078ull);
return 0x75c461;
return 0x77b078;}
case 0x77b078:{ // PUSH 0x7819f0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7819f0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b07d;}
case 0x77b07d:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b082ull);
return 0x75c5ed;
return 0x77b082;}
case 0x77b082:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b083;}
case 0x77b083:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b084;}
case 0x77b090:{ // PUSH 0x4022c0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4022c0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b095;}
case 0x77b095:{ // PUSH 0x4fe910
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x4fe910ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b09a;}
case 0x77b09a:{ // PUSH 0x8
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77b09c;}
case 0x77b09c:{ // PUSH 0xc
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0xcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77b09e;}
case 0x77b09e:{ // PUSH 0x827cd0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x827cd0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b0a3;}
case 0x77b0a3:{ // CALL 0x0075c461
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b0a8ull);
return 0x75c461;
return 0x77b0a8;}
case 0x77b0a8:{ // PUSH 0x781a10
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781a10ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b0ad;}
case 0x77b0ad:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b0b2ull);
return 0x75c5ed;
return 0x77b0b2;}
case 0x77b0b2:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b0b3;}
case 0x77b0b3:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b0b4;}
case 0x77b0c0:{ // PUSH 0x781a50
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781a50ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b0c5;}
case 0x77b0c5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b0caull);
return 0x75c5ed;
return 0x77b0ca;}
case 0x77b0ca:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b0cb;}
case 0x77b0cb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b0cc;}
case 0x77b0d0:{ // PUSH 0x781a70
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781a70ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b0d5;}
case 0x77b0d5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b0daull);
return 0x75c5ed;
return 0x77b0da;}
case 0x77b0da:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b0db;}
case 0x77b0db:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b0dc;}
case 0x77b0e0:{ // PUSH 0x781a90
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781a90ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b0e5;}
case 0x77b0e5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b0eaull);
return 0x75c5ed;
return 0x77b0ea;}
case 0x77b0ea:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b0eb;}
case 0x77b0eb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b0ec;}
case 0x77b0f0:{ // PUSH 0x781ab0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ab0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b0f5;}
case 0x77b0f5:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b0faull);
return 0x75c5ed;
return 0x77b0fa;}
case 0x77b0fa:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b0fb;}
case 0x77b0fb:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b0fc;}
case 0x77b100:{ // MOV ECX,0x827c9c
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827c9cull));
return 0x77b105;}
case 0x77b105:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b10aull);
return 0x598750;
return 0x77b10a;}
case 0x77b10a:{ // PUSH 0x781ae0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ae0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b10f;}
case 0x77b10f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b114ull);
return 0x75c5ed;
return 0x77b114;}
case 0x77b114:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b115;}
case 0x77b115:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b116;}
case 0x77b120:{ // MOV ECX,0x827ca4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827ca4ull));
return 0x77b125;}
case 0x77b125:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b12aull);
return 0x57bcd0;
return 0x77b12a;}
case 0x77b12a:{ // PUSH 0x781b40
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b40ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b12f;}
case 0x77b12f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b134ull);
return 0x75c5ed;
return 0x77b134;}
case 0x77b134:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b135;}
case 0x77b135:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b136;}
case 0x77b140:{ // PUSH 0x785c3c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x785c3cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b145;}
case 0x77b145:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b14aull);
return 0x43db50;
return 0x77b14a;}
case 0x77b14a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b14d;}
case 0x77b14d:{ // MOV [0x00827c84],EAX
wm<4>(c,0x827c84,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b152;}
case 0x77b152:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b153;}
case 0x77b160:{ // PUSH 0x786738
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786738ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b165;}
case 0x77b165:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b16aull);
return 0x43db50;
return 0x77b16a;}
case 0x77b16a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b16d;}
case 0x77b16d:{ // MOV [0x00827f54],EAX
wm<4>(c,0x827f54,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b172;}
case 0x77b172:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b173;}
case 0x77b180:{ // PUSH 0x786748
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786748ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b185;}
case 0x77b185:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b18aull);
return 0x43db50;
return 0x77b18a;}
case 0x77b18a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b18d;}
case 0x77b18d:{ // MOV [0x00827c6c],EAX
wm<4>(c,0x827c6c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b192;}
case 0x77b192:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b193;}
case 0x77b1a0:{ // PUSH 0x786760
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786760ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b1a5;}
case 0x77b1a5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b1aaull);
return 0x43db50;
return 0x77b1aa;}
case 0x77b1aa:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b1ad;}
case 0x77b1ad:{ // MOV [0x00827f48],EAX
wm<4>(c,0x827f48,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b1b2;}
case 0x77b1b2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b1b3;}
case 0x77b1c0:{ // PUSH 0x786774
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786774ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b1c5;}
case 0x77b1c5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b1caull);
return 0x43db50;
return 0x77b1ca;}
case 0x77b1ca:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b1cd;}
case 0x77b1cd:{ // MOV [0x00827f4c],EAX
wm<4>(c,0x827f4c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b1d2;}
case 0x77b1d2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b1d3;}
case 0x77b1e0:{ // PUSH 0x78678c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78678cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b1e5;}
case 0x77b1e5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b1eaull);
return 0x43db50;
return 0x77b1ea;}
case 0x77b1ea:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b1ed;}
case 0x77b1ed:{ // MOV [0x00827cc8],EAX
wm<4>(c,0x827cc8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b1f2;}
case 0x77b1f2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b1f3;}
case 0x77b200:{ // PUSH 0x7867a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7867a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b205;}
case 0x77b205:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b20aull);
return 0x43db50;
return 0x77b20a;}
case 0x77b20a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b20d;}
case 0x77b20d:{ // MOV [0x00827f44],EAX
wm<4>(c,0x827f44,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b212;}
case 0x77b212:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b213;}
case 0x77b220:{ // PUSH 0x7867b4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7867b4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b225;}
case 0x77b225:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b22aull);
return 0x43db50;
return 0x77b22a;}
case 0x77b22a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b22d;}
case 0x77b22d:{ // MOV [0x00827f5c],EAX
wm<4>(c,0x827f5c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b232;}
case 0x77b232:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b233;}
case 0x77b240:{ // PUSH 0x7867cc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7867ccull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b245;}
case 0x77b245:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b24aull);
return 0x43db50;
return 0x77b24a;}
case 0x77b24a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b24d;}
case 0x77b24d:{ // MOV [0x00827f58],EAX
wm<4>(c,0x827f58,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b252;}
case 0x77b252:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b253;}
case 0x77b260:{ // PUSH 0x7867e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7867e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b265;}
case 0x77b265:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b26aull);
return 0x43db50;
return 0x77b26a;}
case 0x77b26a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b26d;}
case 0x77b26d:{ // MOV [0x00827f50],EAX
wm<4>(c,0x827f50,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b272;}
case 0x77b272:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b273;}
case 0x77b280:{ // PUSH 0x7867f8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7867f8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b285;}
case 0x77b285:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b28aull);
return 0x43db50;
return 0x77b28a;}
case 0x77b28a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b28d;}
case 0x77b28d:{ // MOV [0x00827c44],EAX
wm<4>(c,0x827c44,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b292;}
case 0x77b292:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b293;}
case 0x77b2a0:{ // PUSH 0x786810
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786810ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b2a5;}
case 0x77b2a5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b2aaull);
return 0x43db50;
return 0x77b2aa;}
case 0x77b2aa:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b2ad;}
case 0x77b2ad:{ // MOV [0x00827c58],EAX
wm<4>(c,0x827c58,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b2b2;}
case 0x77b2b2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b2b3;}
case 0x77b2c0:{ // PUSH 0x786828
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786828ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b2c5;}
case 0x77b2c5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b2caull);
return 0x43db50;
return 0x77b2ca;}
case 0x77b2ca:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b2cd;}
case 0x77b2cd:{ // MOV [0x00827c94],EAX
wm<4>(c,0x827c94,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b2d2;}
case 0x77b2d2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b2d3;}
case 0x77b2e0:{ // PUSH 0x786838
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786838ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b2e5;}
case 0x77b2e5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b2eaull);
return 0x43db50;
return 0x77b2ea;}
case 0x77b2ea:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b2ed;}
case 0x77b2ed:{ // MOV [0x00827c90],EAX
wm<4>(c,0x827c90,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b2f2;}
case 0x77b2f2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b2f3;}
case 0x77b300:{ // PUSH 0x78684c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78684cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b305;}
case 0x77b305:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b30aull);
return 0x43db50;
return 0x77b30a;}
case 0x77b30a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b30d;}
case 0x77b30d:{ // MOV [0x00827c70],EAX
wm<4>(c,0x827c70,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b312;}
case 0x77b312:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b313;}
case 0x77b320:{ // PUSH 0x786860
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786860ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b325;}
case 0x77b325:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b32aull);
return 0x43db50;
return 0x77b32a;}
case 0x77b32a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b32d;}
case 0x77b32d:{ // MOV [0x00827c54],EAX
wm<4>(c,0x827c54,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b332;}
case 0x77b332:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b333;}
case 0x77b340:{ // PUSH 0x786874
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786874ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b345;}
case 0x77b345:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b34aull);
return 0x43db50;
return 0x77b34a;}
case 0x77b34a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b34d;}
case 0x77b34d:{ // MOV [0x00827c80],EAX
wm<4>(c,0x827c80,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b352;}
case 0x77b352:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b353;}
case 0x77b360:{ // PUSH 0x786888
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x786888ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b365;}
case 0x77b365:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b36aull);
return 0x43db50;
return 0x77b36a;}
case 0x77b36a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b36d;}
case 0x77b36d:{ // MOV [0x00827db4],EAX
wm<4>(c,0x827db4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b372;}
case 0x77b372:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b373;}
case 0x77b380:{ // PUSH 0x7868a0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7868a0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b385;}
case 0x77b385:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b38aull);
return 0x43db50;
return 0x77b38a;}
case 0x77b38a:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b38d;}
case 0x77b38d:{ // MOV [0x00827d30],EAX
wm<4>(c,0x827d30,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b392;}
case 0x77b392:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b393;}
case 0x77b3a0:{ // PUSH 0x7868b8
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7868b8ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b3a5;}
case 0x77b3a5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b3aaull);
return 0x43db50;
return 0x77b3aa;}
case 0x77b3aa:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b3ad;}
case 0x77b3ad:{ // MOV [0x00827c88],EAX
wm<4>(c,0x827c88,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b3b2;}
case 0x77b3b2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b3b3;}
case 0x77b3c0:{ // PUSH 0x7868d0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7868d0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b3c5;}
case 0x77b3c5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b3caull);
return 0x43db50;
return 0x77b3ca;}
case 0x77b3ca:{ // ADD ESP,0x4
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b3cd;}
case 0x77b3cd:{ // MOV [0x00827e18],EAX
wm<4>(c,0x827e18,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b3d2;}
case 0x77b3d2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b3d3;}
case 0x77b3e0:{ // MOV EAX,[0x00827c84]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x827c84)));
return 0x77b3e5;}
case 0x77b3e5:{ // MOV ECX,dword ptr [0x00827f54]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x827f54)));
return 0x77b3eb;}
case 0x77b3eb:{ // MOV EDX,dword ptr [0x00827c6c]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x827c6c)));
return 0x77b3f1;}
case 0x77b3f1:{ // MOV [0x007ea56c],EAX
wm<4>(c,0x7ea56c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b3f6;}
case 0x77b3f6:{ // MOV EAX,[0x00827f48]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x827f48)));
return 0x77b3fb;}
case 0x77b3fb:{ // MOV dword ptr [0x007ea574],ECX
wm<4>(c,0x7ea574,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b401;}
case 0x77b401:{ // MOV ECX,dword ptr [0x00827f4c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x827f4c)));
return 0x77b407;}
case 0x77b407:{ // MOV dword ptr [0x007ea57c],EDX
wm<4>(c,0x7ea57c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b40d;}
case 0x77b40d:{ // MOV EDX,dword ptr [0x00827cc8]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x827cc8)));
return 0x77b413;}
case 0x77b413:{ // MOV [0x007ea584],EAX
wm<4>(c,0x7ea584,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b418;}
case 0x77b418:{ // MOV EAX,[0x00827f44]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x827f44)));
return 0x77b41d;}
case 0x77b41d:{ // MOV dword ptr [0x007ea58c],ECX
wm<4>(c,0x7ea58c,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b423;}
case 0x77b423:{ // MOV ECX,dword ptr [0x00827f5c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x827f5c)));
return 0x77b429;}
case 0x77b429:{ // MOV dword ptr [0x007ea594],EDX
wm<4>(c,0x7ea594,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b42f;}
case 0x77b42f:{ // MOV EDX,dword ptr [0x00827f58]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x827f58)));
return 0x77b435;}
case 0x77b435:{ // MOV [0x007ea59c],EAX
wm<4>(c,0x7ea59c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b43a;}
case 0x77b43a:{ // MOV EAX,[0x00827f50]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x827f50)));
return 0x77b43f;}
case 0x77b43f:{ // MOV dword ptr [0x007ea5a4],ECX
wm<4>(c,0x7ea5a4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b445;}
case 0x77b445:{ // MOV ECX,dword ptr [0x00827c44]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x827c44)));
return 0x77b44b;}
case 0x77b44b:{ // MOV dword ptr [0x007ea5ac],EDX
wm<4>(c,0x7ea5ac,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b451;}
case 0x77b451:{ // MOV EDX,dword ptr [0x00827c58]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x827c58)));
return 0x77b457;}
case 0x77b457:{ // MOV [0x007ea5b4],EAX
wm<4>(c,0x7ea5b4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b45c;}
case 0x77b45c:{ // MOV EAX,[0x00827c94]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x827c94)));
return 0x77b461;}
case 0x77b461:{ // MOV dword ptr [0x007ea5bc],ECX
wm<4>(c,0x7ea5bc,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b467;}
case 0x77b467:{ // MOV ECX,dword ptr [0x00827c90]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x827c90)));
return 0x77b46d;}
case 0x77b46d:{ // MOV dword ptr [0x007ea5c4],EDX
wm<4>(c,0x7ea5c4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b473;}
case 0x77b473:{ // MOV EDX,dword ptr [0x00827c70]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x827c70)));
return 0x77b479;}
case 0x77b479:{ // MOV [0x007ea5cc],EAX
wm<4>(c,0x7ea5cc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b47e;}
case 0x77b47e:{ // MOV EAX,[0x00827c54]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x827c54)));
return 0x77b483;}
case 0x77b483:{ // MOV dword ptr [0x007ea5d4],ECX
wm<4>(c,0x7ea5d4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b489;}
case 0x77b489:{ // MOV ECX,dword ptr [0x00827c80]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x827c80)));
return 0x77b48f;}
case 0x77b48f:{ // MOV dword ptr [0x007ea5dc],EDX
wm<4>(c,0x7ea5dc,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b495;}
case 0x77b495:{ // MOV EDX,dword ptr [0x00827db4]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x827db4)));
return 0x77b49b;}
case 0x77b49b:{ // MOV [0x007ea5e4],EAX
wm<4>(c,0x7ea5e4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b4a0;}
case 0x77b4a0:{ // MOV EAX,[0x00827d30]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x827d30)));
return 0x77b4a5;}
case 0x77b4a5:{ // MOV dword ptr [0x007ea5ec],ECX
wm<4>(c,0x7ea5ec,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b4ab;}
case 0x77b4ab:{ // MOV ECX,dword ptr [0x00827c88]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x827c88)));
return 0x77b4b1;}
case 0x77b4b1:{ // MOV dword ptr [0x007ea5f4],EDX
wm<4>(c,0x7ea5f4,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b4b7;}
case 0x77b4b7:{ // MOV EDX,dword ptr [0x00827e18]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x827e18)));
return 0x77b4bd;}
case 0x77b4bd:{ // MOV dword ptr [0x007ea570],0x786738
wm<4>(c,0x7ea570,eval<Op::COPY,4,4>(0x786738ull));
return 0x77b4c7;}
case 0x77b4c7:{ // MOV dword ptr [0x007ea578],0x786748
wm<4>(c,0x7ea578,eval<Op::COPY,4,4>(0x786748ull));
return 0x77b4d1;}
case 0x77b4d1:{ // MOV dword ptr [0x007ea580],0x786760
wm<4>(c,0x7ea580,eval<Op::COPY,4,4>(0x786760ull));
return 0x77b4db;}
case 0x77b4db:{ // MOV dword ptr [0x007ea588],0x786774
wm<4>(c,0x7ea588,eval<Op::COPY,4,4>(0x786774ull));
return 0x77b4e5;}
case 0x77b4e5:{ // MOV dword ptr [0x007ea590],0x78678c
wm<4>(c,0x7ea590,eval<Op::COPY,4,4>(0x78678cull));
return 0x77b4ef;}
case 0x77b4ef:{ // MOV dword ptr [0x007ea598],0x7867a0
wm<4>(c,0x7ea598,eval<Op::COPY,4,4>(0x7867a0ull));
return 0x77b4f9;}
case 0x77b4f9:{ // MOV dword ptr [0x007ea5a0],0x7867b4
wm<4>(c,0x7ea5a0,eval<Op::COPY,4,4>(0x7867b4ull));
return 0x77b503;}
case 0x77b503:{ // MOV dword ptr [0x007ea5a8],0x7867cc
wm<4>(c,0x7ea5a8,eval<Op::COPY,4,4>(0x7867ccull));
return 0x77b50d;}
case 0x77b50d:{ // MOV dword ptr [0x007ea5b0],0x7867e4
wm<4>(c,0x7ea5b0,eval<Op::COPY,4,4>(0x7867e4ull));
return 0x77b517;}
case 0x77b517:{ // MOV dword ptr [0x007ea5b8],0x7867f8
wm<4>(c,0x7ea5b8,eval<Op::COPY,4,4>(0x7867f8ull));
return 0x77b521;}
case 0x77b521:{ // MOV dword ptr [0x007ea5c0],0x786810
wm<4>(c,0x7ea5c0,eval<Op::COPY,4,4>(0x786810ull));
return 0x77b52b;}
case 0x77b52b:{ // MOV dword ptr [0x007ea5c8],0x786828
wm<4>(c,0x7ea5c8,eval<Op::COPY,4,4>(0x786828ull));
return 0x77b535;}
case 0x77b535:{ // MOV dword ptr [0x007ea5d0],0x786838
wm<4>(c,0x7ea5d0,eval<Op::COPY,4,4>(0x786838ull));
return 0x77b53f;}
case 0x77b53f:{ // MOV dword ptr [0x007ea5d8],0x78684c
wm<4>(c,0x7ea5d8,eval<Op::COPY,4,4>(0x78684cull));
return 0x77b549;}
case 0x77b549:{ // MOV dword ptr [0x007ea5e0],0x786860
wm<4>(c,0x7ea5e0,eval<Op::COPY,4,4>(0x786860ull));
return 0x77b553;}
case 0x77b553:{ // MOV dword ptr [0x007ea5e8],0x786874
wm<4>(c,0x7ea5e8,eval<Op::COPY,4,4>(0x786874ull));
return 0x77b55d;}
case 0x77b55d:{ // MOV dword ptr [0x007ea5f0],0x786888
wm<4>(c,0x7ea5f0,eval<Op::COPY,4,4>(0x786888ull));
return 0x77b567;}
case 0x77b567:{ // MOV dword ptr [0x007ea5f8],0x7868a0
wm<4>(c,0x7ea5f8,eval<Op::COPY,4,4>(0x7868a0ull));
return 0x77b571;}
case 0x77b571:{ // MOV [0x007ea5fc],EAX
wm<4>(c,0x7ea5fc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b576;}
case 0x77b576:{ // MOV dword ptr [0x007ea600],0x7868b8
wm<4>(c,0x7ea600,eval<Op::COPY,4,4>(0x7868b8ull));
return 0x77b580;}
case 0x77b580:{ // MOV dword ptr [0x007ea604],ECX
wm<4>(c,0x7ea604,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b586;}
case 0x77b586:{ // MOV dword ptr [0x007ea608],0x7868d0
wm<4>(c,0x7ea608,eval<Op::COPY,4,4>(0x7868d0ull));
return 0x77b590;}
case 0x77b590:{ // MOV dword ptr [0x007ea60c],EDX
wm<4>(c,0x7ea60c,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b596;}
case 0x77b596:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b597;}
case 0x77b5a0:{ // MOV ECX,0x827da4
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827da4ull));
return 0x77b5a5;}
case 0x77b5a5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b5aaull);
return 0x598750;
return 0x77b5aa;}
case 0x77b5aa:{ // PUSH 0x781af0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781af0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b5af;}
case 0x77b5af:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b5b4ull);
return 0x75c5ed;
return 0x77b5b4;}
case 0x77b5b4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b5b5;}
case 0x77b5b5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b5b6;}
case 0x77b5c0:{ // MOV ECX,0x827c74
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827c74ull));
return 0x77b5c5;}
case 0x77b5c5:{ // CALL 0x00598750
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b5caull);
return 0x598750;
return 0x77b5ca;}
case 0x77b5ca:{ // PUSH 0x781b00
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b00ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b5cf;}
case 0x77b5cf:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b5d4ull);
return 0x75c5ed;
return 0x77b5d4;}
case 0x77b5d4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b5d5;}
case 0x77b5d5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b5d6;}
case 0x77b5e0:{ // MOV ECX,0x827ef0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x827ef0ull));
return 0x77b5e5;}
case 0x77b5e5:{ // CALL 0x00439ea0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b5eaull);
return 0x439ea0;
return 0x77b5ea;}
case 0x77b5ea:{ // PUSH 0x781b50
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b50ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b5ef;}
case 0x77b5ef:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b5f4ull);
return 0x75c5ed;
return 0x77b5f4;}
case 0x77b5f4:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b5f5;}
case 0x77b5f5:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b5f6;}
case 0x77b600:{ // MOV ECX,0x828520
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x828520ull));
return 0x77b605;}
case 0x77b605:{ // CALL 0x0057bcd0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b60aull);
return 0x57bcd0;
return 0x77b60a;}
case 0x77b60a:{ // PUSH 0x781b80
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b80ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b60f;}
case 0x77b60f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b614ull);
return 0x75c5ed;
return 0x77b614;}
case 0x77b614:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b615;}
case 0x77b615:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b616;}
case 0x77b620:{ // MOV EAX,[0x00828050]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x828050)));
return 0x77b625;}
case 0x77b625:{ // MOV [0x007eb3f4],EAX
wm<4>(c,0x7eb3f4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b62a;}
case 0x77b62a:{ // MOV AL,[0x00827fe8]
wr<1>(c,0x0,eval<Op::COPY,1,1>(m<1>(c,0x827fe8)));
return 0x77b62f;}
case 0x77b62f:{ // INC AL
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,1,1>(r<1>(c,0x0),0x1ull));
wr<1>(c,0x0,eval<Op::INT_ADD,1,1,1>(r<1>(c,0x0),0x1ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(r<1>(c,0x0),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(r<1>(c,0x0),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(r<1>(c,0x0),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b631;}
case 0x77b631:{ // MOV dword ptr [0x00828050],0x7eb3f4
wm<4>(c,0x828050,eval<Op::COPY,4,4>(0x7eb3f4ull));
return 0x77b63b;}
case 0x77b63b:{ // MOV [0x00827fe8],AL
wm<1>(c,0x827fe8,eval<Op::COPY,1,1>(r<1>(c,0x0)));
return 0x77b640;}
case 0x77b640:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b641;}
case 0x77b650:{ // MOV ECX,0x828528
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x828528ull));
return 0x77b655;}
case 0x77b655:{ // CALL 0x0043e820
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b65aull);
return 0x43e820;
return 0x77b65a;}
case 0x77b65a:{ // PUSH 0x781b70
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b70ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b65f;}
case 0x77b65f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b664ull);
return 0x75c5ed;
return 0x77b664;}
case 0x77b664:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b665;}
case 0x77b665:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b666;}
case 0x77b670:{ // MOV ECX,0x828530
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x828530ull));
return 0x77b675;}
case 0x77b675:{ // CALL 0x004407b0
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b67aull);
return 0x4407b0;
return 0x77b67a;}
case 0x77b67a:{ // PUSH 0x781b90
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781b90ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b67f;}
case 0x77b67f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b684ull);
return 0x75c5ed;
return 0x77b684;}
case 0x77b684:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77b685;}
case 0x77b685:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b686;}
case 0x77b690:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b690ull));
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
return 0x77b696;}
case 0x77b696:{ // FDIV float ptr [0x00786f78]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b696ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x786f78),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77b69c;}
case 0x77b69c:{ // FSTP float ptr [0x00828734]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b69cull));
wm<4>(c,0x828734,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b6a2;}
case 0x77b6a2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b6a3;}
case 0x77b6b0:{ // MOV EAX,[0x00786f8c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x786f8c)));
return 0x77b6b5;}
case 0x77b6b5:{ // MOV EDX,dword ptr [0x00786f84]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x786f84)));
return 0x77b6bb;}
case 0x77b6bb:{ // MOV ECX,EAX
wr<4>(c,0x4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b6bd;}
case 0x77b6bd:{ // MOV dword ptr [0x007ec7c4],ECX
wm<4>(c,0x7ec7c4,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b6c3;}
case 0x77b6c3:{ // MOV ECX,dword ptr [0x00786f88]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x786f88)));
return 0x77b6c9;}
case 0x77b6c9:{ // MOV [0x007ec7c0],EAX
wm<4>(c,0x7ec7c0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b6ce;}
case 0x77b6ce:{ // MOV EAX,EDX
wr<4>(c,0x0,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b6d0;}
case 0x77b6d0:{ // MOV dword ptr [0x007ec7f8],EDX
wm<4>(c,0x7ec7f8,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b6d6;}
case 0x77b6d6:{ // MOV EDX,ECX
wr<4>(c,0x8,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b6d8;}
case 0x77b6d8:{ // MOV [0x007ec7fc],EAX
wm<4>(c,0x7ec7fc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b6dd;}
case 0x77b6dd:{ // MOV dword ptr [0x007ec800],ECX
wm<4>(c,0x7ec800,eval<Op::COPY,4,4>(r<4>(c,0x4)));
return 0x77b6e3;}
case 0x77b6e3:{ // MOV dword ptr [0x007ec804],EDX
wm<4>(c,0x7ec804,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77b6e9;}
case 0x77b6e9:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b6ea;}
case 0x77b6f0:{ // PUSH 0x7881e4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7881e4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b6f5;}
case 0x77b6f5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b6faull);
return 0x43db50;
return 0x77b6fa;}
case 0x77b6fa:{ // PUSH 0x7881e0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7881e0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b6ff;}
case 0x77b6ff:{ // MOV [0x007ec1f8],EAX
wm<4>(c,0x7ec1f8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b704;}
case 0x77b704:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b709ull);
return 0x43db50;
return 0x77b709;}
case 0x77b709:{ // PUSH 0x7881d4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7881d4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b70e;}
case 0x77b70e:{ // MOV [0x007ec1fc],EAX
wm<4>(c,0x7ec1fc,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b713;}
case 0x77b713:{ // MOV dword ptr [0x007ec214],0x7881cc
wm<4>(c,0x7ec214,eval<Op::COPY,4,4>(0x7881ccull));
return 0x77b71d;}
case 0x77b71d:{ // MOV dword ptr [0x007ec218],0x441b40
wm<4>(c,0x7ec218,eval<Op::COPY,4,4>(0x441b40ull));
return 0x77b727;}
case 0x77b727:{ // MOV dword ptr [0x007ec21c],0x404800
wm<4>(c,0x7ec21c,eval<Op::COPY,4,4>(0x404800ull));
return 0x77b731;}
case 0x77b731:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b736ull);
return 0x43db50;
return 0x77b736;}
case 0x77b736:{ // PUSH 0x7881cc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7881ccull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b73b;}
case 0x77b73b:{ // MOV [0x007ec20c],EAX
wm<4>(c,0x7ec20c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b740;}
case 0x77b740:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b745ull);
return 0x43db50;
return 0x77b745;}
case 0x77b745:{ // PUSH 0x7881bc
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7881bcull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b74a;}
case 0x77b74a:{ // MOV [0x007ec210],EAX
wm<4>(c,0x7ec210,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b74f;}
case 0x77b74f:{ // MOV dword ptr [0x007ec228],0x7881b4
wm<4>(c,0x7ec228,eval<Op::COPY,4,4>(0x7881b4ull));
return 0x77b759;}
case 0x77b759:{ // MOV dword ptr [0x007ec22c],0x441bf0
wm<4>(c,0x7ec22c,eval<Op::COPY,4,4>(0x441bf0ull));
return 0x77b763;}
case 0x77b763:{ // MOV dword ptr [0x007ec230],0x404800
wm<4>(c,0x7ec230,eval<Op::COPY,4,4>(0x404800ull));
return 0x77b76d;}
case 0x77b76d:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b772ull);
return 0x43db50;
return 0x77b772;}
case 0x77b772:{ // PUSH 0x7881b4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7881b4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b777;}
case 0x77b777:{ // MOV [0x007ec220],EAX
wm<4>(c,0x7ec220,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b77c;}
case 0x77b77c:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b781ull);
return 0x43db50;
return 0x77b781;}
case 0x77b781:{ // PUSH 0x7881a4
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7881a4ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b786;}
case 0x77b786:{ // MOV [0x007ec224],EAX
wm<4>(c,0x7ec224,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b78b;}
case 0x77b78b:{ // MOV dword ptr [0x007ec23c],0x78819c
wm<4>(c,0x7ec23c,eval<Op::COPY,4,4>(0x78819cull));
return 0x77b795;}
case 0x77b795:{ // MOV dword ptr [0x007ec240],0x441c80
wm<4>(c,0x7ec240,eval<Op::COPY,4,4>(0x441c80ull));
return 0x77b79f;}
case 0x77b79f:{ // MOV dword ptr [0x007ec244],0x441d00
wm<4>(c,0x7ec244,eval<Op::COPY,4,4>(0x441d00ull));
return 0x77b7a9;}
case 0x77b7a9:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b7aeull);
return 0x43db50;
return 0x77b7ae;}
case 0x77b7ae:{ // PUSH 0x78819c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78819cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b7b3;}
case 0x77b7b3:{ // MOV [0x007ec234],EAX
wm<4>(c,0x7ec234,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b7b8;}
case 0x77b7b8:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b7bdull);
return 0x43db50;
return 0x77b7bd;}
case 0x77b7bd:{ // PUSH 0x78818c
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x78818cull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b7c2;}
case 0x77b7c2:{ // MOV [0x007ec238],EAX
wm<4>(c,0x7ec238,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b7c7;}
case 0x77b7c7:{ // MOV dword ptr [0x007ec250],0x788184
wm<4>(c,0x7ec250,eval<Op::COPY,4,4>(0x788184ull));
return 0x77b7d1;}
case 0x77b7d1:{ // MOV dword ptr [0x007ec254],0x441d30
wm<4>(c,0x7ec254,eval<Op::COPY,4,4>(0x441d30ull));
return 0x77b7db;}
case 0x77b7db:{ // MOV dword ptr [0x007ec258],0x404800
wm<4>(c,0x7ec258,eval<Op::COPY,4,4>(0x404800ull));
return 0x77b7e5;}
case 0x77b7e5:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b7eaull);
return 0x43db50;
return 0x77b7ea;}
case 0x77b7ea:{ // PUSH 0x788184
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x788184ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b7ef;}
case 0x77b7ef:{ // MOV [0x007ec248],EAX
wm<4>(c,0x7ec248,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b7f4;}
case 0x77b7f4:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b7f9ull);
return 0x43db50;
return 0x77b7f9;}
case 0x77b7f9:{ // PUSH 0x788174
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x788174ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b7fe;}
case 0x77b7fe:{ // MOV [0x007ec24c],EAX
wm<4>(c,0x7ec24c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b803;}
case 0x77b803:{ // MOV dword ptr [0x007ec264],0x788168
wm<4>(c,0x7ec264,eval<Op::COPY,4,4>(0x788168ull));
return 0x77b80d;}
case 0x77b80d:{ // MOV dword ptr [0x007ec268],0x441e90
wm<4>(c,0x7ec268,eval<Op::COPY,4,4>(0x441e90ull));
return 0x77b817;}
case 0x77b817:{ // MOV dword ptr [0x007ec26c],0x441f40
wm<4>(c,0x7ec26c,eval<Op::COPY,4,4>(0x441f40ull));
return 0x77b821;}
case 0x77b821:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b826ull);
return 0x43db50;
return 0x77b826;}
case 0x77b826:{ // PUSH 0x788168
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x788168ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77b82b;}
case 0x77b82b:{ // MOV [0x007ec25c],EAX
wm<4>(c,0x7ec25c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b830;}
case 0x77b830:{ // CALL 0x0043db50
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b835ull);
return 0x43db50;
return 0x77b835;}
case 0x77b835:{ // ADD ESP,0x30
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x10),0x30ull));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x30ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x10),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x10),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x10),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77b838;}
case 0x77b838:{ // MOV [0x007ec260],EAX
wm<4>(c,0x7ec260,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b83d;}
case 0x77b83d:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b83e;}
case 0x77b840:{ // MOV EAX,[0x00786fbc]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x786fbc)));
return 0x77b845;}
case 0x77b845:{ // MOV [0x008286e0],EAX
wm<4>(c,0x8286e0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b84a;}
case 0x77b84a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b84b;}
case 0x77b850:{ // FLD float ptr [0x00786fb4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b850ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb4),4,0x0ull,4,10));
return 0x77b856;}
case 0x77b856:{ // FSUB float ptr [0x00786fbc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b856ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786fbc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b85c;}
case 0x77b85c:{ // FSTP float ptr [0x0082a458]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b85cull));
wm<4>(c,0x82a458,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b862;}
case 0x77b862:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b863;}
case 0x77b870:{ // FLD float ptr [0x00786fb8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b870ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb8),4,0x0ull,4,10));
return 0x77b876;}
case 0x77b876:{ // FSUB float ptr [0x00786fbc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b876ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786fbc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b87c;}
case 0x77b87c:{ // FSUB float ptr [0x007881f0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b87cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x7881f0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b882;}
case 0x77b882:{ // FSTP float ptr [0x0082871c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b882ull));
wm<4>(c,0x82871c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b888;}
case 0x77b888:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b889;}
case 0x77b890:{ // FLD float ptr [0x00786fb8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b890ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb8),4,0x0ull,4,10));
return 0x77b896;}
case 0x77b896:{ // FSUB float ptr [0x00786fbc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b896ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786fbc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b89c;}
case 0x77b89c:{ // FSTP float ptr [0x00828730]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b89cull));
wm<4>(c,0x828730,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b8a2;}
case 0x77b8a2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b8a3;}
case 0x77b8b0:{ // FLD float ptr [0x00786fb8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8b0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb8),4,0x0ull,4,10));
return 0x77b8b6;}
case 0x77b8b6:{ // FSUB float ptr [0x00786fbc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8b6ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786fbc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b8bc;}
case 0x77b8bc:{ // FADD float ptr [0x007881f4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8bcull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x7881f4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77b8c2;}
case 0x77b8c2:{ // FSTP float ptr [0x008286f4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8c2ull));
wm<4>(c,0x8286f4,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b8c8;}
case 0x77b8c8:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b8c9;}
case 0x77b8d0:{ // FLD float ptr [0x00786fb8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8d0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb8),4,0x0ull,4,10));
return 0x77b8d6;}
case 0x77b8d6:{ // FSUB float ptr [0x00786fbc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8d6ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786fbc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b8dc;}
case 0x77b8dc:{ // FADD float ptr [0x007881f8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8dcull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x7881f8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77b8e2;}
case 0x77b8e2:{ // FSTP float ptr [0x00828710]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8e2ull));
wm<4>(c,0x828710,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b8e8;}
case 0x77b8e8:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b8e9;}
case 0x77b8f0:{ // FLD float ptr [0x0082a458]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8f0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x82a458),4,0x0ull,4,10));
return 0x77b8f6;}
case 0x77b8f6:{ // FSUB float ptr [0x00786ff0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8f6ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786ff0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b8fc;}
case 0x77b8fc:{ // FSUB float ptr [0x00784560]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b8fcull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x784560),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b902;}
case 0x77b902:{ // FSUB float ptr [0x007844c0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b902ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x7844c0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b908;}
case 0x77b908:{ // FSUB float ptr [0x007844c0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b908ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x7844c0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b90e;}
case 0x77b90e:{ // FSTP float ptr [0x0082a4e8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b90eull));
wm<4>(c,0x82a4e8,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b914;}
case 0x77b914:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b915;}
case 0x77b920:{ // FLD float ptr [0x0082871c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b920ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x82871c),4,0x0ull,4,10));
return 0x77b926;}
case 0x77b926:{ // FSUB float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b926ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b92c;}
case 0x77b92c:{ // FSUB float ptr [0x00786ff0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b92cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786ff0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b932;}
case 0x77b932:{ // FSTP float ptr [0x0082874c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b932ull));
wm<4>(c,0x82874c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b938;}
case 0x77b938:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b939;}
case 0x77b940:{ // FLD float ptr [0x00786ff0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b940ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786ff0),4,0x0ull,4,10));
return 0x77b946;}
case 0x77b946:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b946ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77b948;}
case 0x77b948:{ // FSTP float ptr [0x00828750]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b948ull));
wm<4>(c,0x828750,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b94e;}
case 0x77b94e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b94f;}
case 0x77b950:{ // FLD float ptr [0x0082a4e8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b950ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x82a4e8),4,0x0ull,4,10));
return 0x77b956;}
case 0x77b956:{ // FSUB float ptr [0x00786ff0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b956ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786ff0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b95c;}
case 0x77b95c:{ // FSUB float ptr [0x00786ff4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b95cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786ff4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b962;}
case 0x77b962:{ // FSUB float ptr [0x007844c0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b962ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x7844c0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b968;}
case 0x77b968:{ // FSTP float ptr [0x0082a468]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b968ull));
wm<4>(c,0x82a468,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b96e;}
case 0x77b96e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b96f;}
case 0x77b970:{ // FLD float ptr [0x00786ff4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b970ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786ff4),4,0x0ull,4,10));
return 0x77b976;}
case 0x77b976:{ // FADD float ptr [0x00786ff0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b976ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x786ff0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77b97c;}
case 0x77b97c:{ // FADD float ptr [0x0082a4e8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b97cull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x82a4e8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77b982;}
case 0x77b982:{ // FADD float ptr [0x007844c0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b982ull));
wu<10>(c,0xa9500,float_op("FLOAT2FLOAT",m<4>(c,0x7844c0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,u<10>(c,0xa9500),10,10));
return 0x77b988;}
case 0x77b988:{ // FSTP float ptr [0x0082875c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b988ull));
wm<4>(c,0x82875c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b98e;}
case 0x77b98e:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b98f;}
case 0x77b990:{ // MOV EAX,[0x0082874c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x82874c)));
return 0x77b995;}
case 0x77b995:{ // MOV [0x00828724],EAX
wm<4>(c,0x828724,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b99a;}
case 0x77b99a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b99b;}
case 0x77b9a0:{ // FLD float ptr [0x00786ff0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9a0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786ff0),4,0x0ull,4,10));
return 0x77b9a6;}
case 0x77b9a6:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9a6ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77b9a8;}
case 0x77b9a8:{ // FSTP float ptr [0x0082a464]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9a8ull));
wm<4>(c,0x82a464,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b9ae;}
case 0x77b9ae:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b9af;}
case 0x77b9b0:{ // MOV EAX,[0x0082a4e8]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x82a4e8)));
return 0x77b9b5;}
case 0x77b9b5:{ // MOV [0x0082a4ec],EAX
wm<4>(c,0x82a4ec,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b9ba;}
case 0x77b9ba:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b9bb;}
case 0x77b9c0:{ // FLD float ptr [0x0082874c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9c0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x82874c),4,0x0ull,4,10));
return 0x77b9c6;}
case 0x77b9c6:{ // FSUB float ptr [0x00786ff0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9c6ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786ff0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b9cc;}
case 0x77b9cc:{ // FSUB float ptr [0x00786ff8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9ccull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786ff8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b9d2;}
case 0x77b9d2:{ // FSUB float ptr [0x007844c0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9d2ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x7844c0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77b9d8;}
case 0x77b9d8:{ // FSTP float ptr [0x0082876c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9d8ull));
wm<4>(c,0x82876c,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77b9de;}
case 0x77b9de:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b9df;}
case 0x77b9e0:{ // FLD float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77b9e0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
return 0x77b9e6;}
case 0x77b9e6:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77b9ebull);
return 0x75bed4;
return 0x77b9eb;}
case 0x77b9eb:{ // MOV [0x0082a47c],EAX
wm<4>(c,0x82a47c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77b9f0;}
case 0x77b9f0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77b9f1;}
case 0x77ba00:{ // FLD float ptr [0x0082871c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba00ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x82871c),4,0x0ull,4,10));
return 0x77ba06;}
case 0x77ba06:{ // FSUB float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba06ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77ba0c;}
case 0x77ba0c:{ // FSUB float ptr [0x007881f4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba0cull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x7881f4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77ba12;}
case 0x77ba12:{ // FLD float ptr [0x00786fb8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba12ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb8),4,0x0ull,4,10));
return 0x77ba18;}
case 0x77ba18:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba18ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77ba1e;}
case 0x77ba1e:{ // FSUBP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba1eull));
wr<10>(c,0x1110,float_op("FLOAT_SUB",r<10>(c,0x1110),10,r<10>(c,0x1100),10,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ba20;}
case 0x77ba20:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ba25ull);
return 0x75bed4;
return 0x77ba25;}
case 0x77ba25:{ // MOV [0x0082873c],EAX
wm<4>(c,0x82873c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ba2a;}
case 0x77ba2a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ba2b;}
case 0x77ba30:{ // FLD float ptr [0x008286e0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba30ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x8286e0),4,0x0ull,4,10));
return 0x77ba36;}
case 0x77ba36:{ // FSUB float ptr [0x007844c0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba36ull));
wu<10>(c,0xb7b00,float_op("FLOAT2FLOAT",m<4>(c,0x7844c0),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,u<10>(c,0xb7b00),10,10));
return 0x77ba3c;}
case 0x77ba3c:{ // FLD float ptr [0x00786fb4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba3cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb4),4,0x0ull,4,10));
return 0x77ba42;}
case 0x77ba42:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba42ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77ba48;}
case 0x77ba48:{ // FSUBP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba48ull));
wr<10>(c,0x1110,float_op("FLOAT_SUB",r<10>(c,0x1110),10,r<10>(c,0x1100),10,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ba4a;}
case 0x77ba4a:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ba4full);
return 0x75bed4;
return 0x77ba4f;}
case 0x77ba4f:{ // MOV [0x00828718],EAX
wm<4>(c,0x828718,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ba54;}
case 0x77ba54:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ba55;}
case 0x77ba60:{ // FLD float ptr [0x00786fb4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba60ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb4),4,0x0ull,4,10));
return 0x77ba66;}
case 0x77ba66:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba66ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77ba6c;}
case 0x77ba6c:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba6cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77ba72;}
case 0x77ba72:{ // FMUL float ptr [0x007881fc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba72ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7881fc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77ba78;}
case 0x77ba78:{ // FSUBR ST0,ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba78ull));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1110),10,r<10>(c,0x1100),10,10));
return 0x77ba7a;}
case 0x77ba7a:{ // FSUB ST0,ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba7aull));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77ba7c;}
case 0x77ba7c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77ba81ull);
return 0x75bed4;
return 0x77ba81;}
case 0x77ba81:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba81ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77ba83;}
case 0x77ba83:{ // MOV [0x0082a44c],EAX
wm<4>(c,0x82a44c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77ba88;}
case 0x77ba88:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77ba89;}
case 0x77ba90:{ // FLD float ptr [0x00786fb4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba90ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb4),4,0x0ull,4,10));
return 0x77ba96;}
case 0x77ba96:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba96ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77ba9c;}
case 0x77ba9c:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77ba9cull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77baa2;}
case 0x77baa2:{ // FMUL float ptr [0x00787adc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77baa2ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x787adc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77baa8;}
case 0x77baa8:{ // FSUBR ST0,ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77baa8ull));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1110),10,r<10>(c,0x1100),10,10));
return 0x77baaa;}
case 0x77baaa:{ // FSUB ST0,ST1
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77baaaull));
wr<10>(c,0x1100,float_op("FLOAT_SUB",r<10>(c,0x1100),10,r<10>(c,0x1110),10,10));
return 0x77baac;}
case 0x77baac:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bab1ull);
return 0x75bed4;
return 0x77bab1;}
case 0x77bab1:{ // FSTP ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bab1ull));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bab3;}
case 0x77bab3:{ // MOV [0x008286f0],EAX
wm<4>(c,0x8286f0,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bab8;}
case 0x77bab8:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bab9;}
case 0x77bac0:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bac0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bac6;}
case 0x77bac6:{ // FMUL float ptr [0x007881fc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bac6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7881fc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bacc;}
case 0x77bacc:{ // FSUBR float ptr [0x0082a458]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77baccull));
wu<10>(c,0xb8700,float_op("FLOAT2FLOAT",m<4>(c,0x82a458),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",u<10>(c,0xb8700),10,r<10>(c,0x1100),10,10));
return 0x77bad2;}
case 0x77bad2:{ // FLD float ptr [0x00786fb4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bad2ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb4),4,0x0ull,4,10));
return 0x77bad8;}
case 0x77bad8:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bad8ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bade;}
case 0x77bade:{ // FSUBP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77badeull));
wr<10>(c,0x1110,float_op("FLOAT_SUB",r<10>(c,0x1110),10,r<10>(c,0x1100),10,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bae0;}
case 0x77bae0:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bae5ull);
return 0x75bed4;
return 0x77bae5;}
case 0x77bae5:{ // MOV [0x0082a4d8],EAX
wm<4>(c,0x82a4d8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77baea;}
case 0x77baea:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77baeb;}
case 0x77baf0:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77baf0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77baf6;}
case 0x77baf6:{ // FMUL float ptr [0x007881f8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77baf6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7881f8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bafc;}
case 0x77bafc:{ // FSUBR float ptr [0x0082a458]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bafcull));
wu<10>(c,0xb8700,float_op("FLOAT2FLOAT",m<4>(c,0x82a458),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_SUB",u<10>(c,0xb8700),10,r<10>(c,0x1100),10,10));
return 0x77bb02;}
case 0x77bb02:{ // FLD float ptr [0x00786fb4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb02ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fb4),4,0x0ull,4,10));
return 0x77bb08;}
case 0x77bb08:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb08ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bb0e;}
case 0x77bb0e:{ // FSUBP
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb0eull));
wr<10>(c,0x1110,float_op("FLOAT_SUB",r<10>(c,0x1110),10,r<10>(c,0x1100),10,10));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bb10;}
case 0x77bb10:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bb15ull);
return 0x75bed4;
return 0x77bb15;}
case 0x77bb15:{ // MOV [0x0082a474],EAX
wm<4>(c,0x82a474,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bb1a;}
case 0x77bb1a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bb1b;}
case 0x77bb20:{ // FLD float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb20ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
return 0x77bb26;}
case 0x77bb26:{ // FMUL float ptr [0x00788200]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb26ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x788200),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bb2c;}
case 0x77bb2c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bb31ull);
return 0x75bed4;
return 0x77bb31;}
case 0x77bb31:{ // MOV [0x00828738],EAX
wm<4>(c,0x828738,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bb36;}
case 0x77bb36:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bb37;}
case 0x77bb40:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bb46;}
case 0x77bb46:{ // FMUL float ptr [0x00788204]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb46ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x788204),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bb4c;}
case 0x77bb4c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bb51ull);
return 0x75bed4;
return 0x77bb51;}
case 0x77bb51:{ // MOV [0x00828728],EAX
wm<4>(c,0x828728,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bb56;}
case 0x77bb56:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bb57;}
case 0x77bb60:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb60ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bb66;}
case 0x77bb66:{ // FMUL float ptr [0x007d7d3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb66ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d7d3c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bb6c;}
case 0x77bb6c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bb71ull);
return 0x75bed4;
return 0x77bb71;}
case 0x77bb71:{ // MOV [0x00828758],EAX
wm<4>(c,0x828758,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bb76;}
case 0x77bb76:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bb77;}
case 0x77bb80:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb80ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bb86;}
case 0x77bb86:{ // FMUL float ptr [0x007881f8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bb86ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7881f8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bb8c;}
case 0x77bb8c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bb91ull);
return 0x75bed4;
return 0x77bb91;}
case 0x77bb91:{ // MOV [0x00828748],EAX
wm<4>(c,0x828748,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bb96;}
case 0x77bb96:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bb97;}
case 0x77bba0:{ // FLD float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bba0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
return 0x77bba6;}
case 0x77bba6:{ // FMUL float ptr [0x00788208]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bba6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x788208),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bbac;}
case 0x77bbac:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bbb1ull);
return 0x75bed4;
return 0x77bbb1;}
case 0x77bbb1:{ // MOV [0x00828754],EAX
wm<4>(c,0x828754,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bbb6;}
case 0x77bbb6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bbb7;}
case 0x77bbc0:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bbc0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bbc6;}
case 0x77bbc6:{ // FMUL float ptr [0x0078820c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bbc6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x78820c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bbcc;}
case 0x77bbcc:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bbd1ull);
return 0x75bed4;
return 0x77bbd1;}
case 0x77bbd1:{ // MOV [0x0082a470],EAX
wm<4>(c,0x82a470,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bbd6;}
case 0x77bbd6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bbd7;}
case 0x77bbe0:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bbe0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bbe6;}
case 0x77bbe6:{ // FMUL float ptr [0x007843e8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bbe6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7843e8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bbec;}
case 0x77bbec:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bbf1ull);
return 0x75bed4;
return 0x77bbf1;}
case 0x77bbf1:{ // MOV [0x0082a460],EAX
wm<4>(c,0x82a460,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bbf6;}
case 0x77bbf6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bbf7;}
case 0x77bc00:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc00ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bc06;}
case 0x77bc06:{ // FMUL float ptr [0x00788210]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc06ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x788210),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bc0c;}
case 0x77bc0c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bc11ull);
return 0x75bed4;
return 0x77bc11;}
case 0x77bc11:{ // MOV [0x0082872c],EAX
wm<4>(c,0x82872c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bc16;}
case 0x77bc16:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bc17;}
case 0x77bc20:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc20ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bc26;}
case 0x77bc26:{ // FMUL float ptr [0x007881f8]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc26ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7881f8),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bc2c;}
case 0x77bc2c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bc31ull);
return 0x75bed4;
return 0x77bc31;}
case 0x77bc31:{ // MOV [0x0082a46c],EAX
wm<4>(c,0x82a46c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bc36;}
case 0x77bc36:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bc37;}
case 0x77bc40:{ // FLD float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
return 0x77bc46;}
case 0x77bc46:{ // FMUL float ptr [0x00787adc]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc46ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x787adc),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bc4c;}
case 0x77bc4c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bc51ull);
return 0x75bed4;
return 0x77bc51;}
case 0x77bc51:{ // MOV [0x0082a45c],EAX
wm<4>(c,0x82a45c,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bc56;}
case 0x77bc56:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bc57;}
case 0x77bc60:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc60ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bc66;}
case 0x77bc66:{ // FMUL float ptr [0x007881f4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc66ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7881f4),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bc6c;}
case 0x77bc6c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bc71ull);
return 0x75bed4;
return 0x77bc71;}
case 0x77bc71:{ // MOV [0x008286f8],EAX
wm<4>(c,0x8286f8,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bc76;}
case 0x77bc76:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bc77;}
case 0x77bc80:{ // FLD float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc80ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
return 0x77bc86;}
case 0x77bc86:{ // FMUL float ptr [0x007d7d3c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bc86ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x7d7d3c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bc8c;}
case 0x77bc8c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bc91ull);
return 0x75bed4;
return 0x77bc91;}
case 0x77bc91:{ // MOV [0x008286e4],EAX
wm<4>(c,0x8286e4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bc96;}
case 0x77bc96:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bc97;}
case 0x77bca0:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bca0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bca6;}
case 0x77bca6:{ // FMUL float ptr [0x00788214]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bca6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x788214),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bcac;}
case 0x77bcac:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bcb1ull);
return 0x75bed4;
return 0x77bcb1;}
case 0x77bcb1:{ // MOV [0x00828740],EAX
wm<4>(c,0x828740,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bcb6;}
case 0x77bcb6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bcb7;}
case 0x77bcc0:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bcc0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bcc6;}
case 0x77bcc6:{ // FMUL float ptr [0x00788218]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bcc6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x788218),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bccc;}
case 0x77bccc:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bcd1ull);
return 0x75bed4;
return 0x77bcd1;}
case 0x77bcd1:{ // MOV [0x00828714],EAX
wm<4>(c,0x828714,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bcd6;}
case 0x77bcd6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bcd7;}
case 0x77bce0:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bce0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bce6;}
case 0x77bce6:{ // FMUL float ptr [0x0078821c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bce6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x78821c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bcec;}
case 0x77bcec:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bcf1ull);
return 0x75bed4;
return 0x77bcf1;}
case 0x77bcf1:{ // MOV [0x00828720],EAX
wm<4>(c,0x828720,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bcf6;}
case 0x77bcf6:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bcf7;}
case 0x77bd00:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bd00ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bd06;}
case 0x77bd06:{ // FMUL float ptr [0x00788220]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bd06ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x788220),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bd0c;}
case 0x77bd0c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bd11ull);
return 0x75bed4;
return 0x77bd11;}
case 0x77bd11:{ // MOV [0x0082a4d4],EAX
wm<4>(c,0x82a4d4,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bd16;}
case 0x77bd16:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bd17;}
case 0x77bd20:{ // FLD float ptr [0x00786fc0]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bd20ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc0),4,0x0ull,4,10));
return 0x77bd26;}
case 0x77bd26:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bd2bull);
return 0x75bed4;
return 0x77bd2b;}
case 0x77bd2b:{ // MOV [0x008286ec],EAX
wm<4>(c,0x8286ec,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bd30;}
case 0x77bd30:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bd31;}
case 0x77bd40:{ // FLD float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bd40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
return 0x77bd46;}
case 0x77bd46:{ // FMUL float ptr [0x00784d28]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bd46ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784d28),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bd4c;}
case 0x77bd4c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bd51ull);
return 0x75bed4;
return 0x77bd51;}
case 0x77bd51:{ // MOV [0x0082a478],EAX
wm<4>(c,0x82a478,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bd56;}
case 0x77bd56:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bd57;}
case 0x77bd60:{ // FLD float ptr [0x00786fc4]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bd60ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786fc4),4,0x0ull,4,10));
return 0x77bd66;}
case 0x77bd66:{ // FMUL float ptr [0x00784d28]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bd66ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784d28),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bd6c;}
case 0x77bd6c:{ // CALL 0x0075bed4
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bd71ull);
return 0x75bed4;
return 0x77bd71;}
case 0x77bd71:{ // MOV [0x00828744],EAX
wm<4>(c,0x828744,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bd76;}
case 0x77bd76:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bd77;}
case 0x77bd80:{ // MOV ECX,0x828770
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x828770ull));
return 0x77bd85;}
case 0x77bd85:{ // CALL 0x00447c40
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bd8aull);
return 0x447c40;
return 0x77bd8a;}
case 0x77bd8a:{ // PUSH 0x781bb0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781bb0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77bd8f;}
case 0x77bd8f:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bd94ull);
return 0x75c5ed;
return 0x77bd94;}
case 0x77bd94:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77bd95;}
case 0x77bd95:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bd96;}
case 0x77bda0:{ // FLD float ptr [0x0078706c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bda0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x78706c),4,0x0ull,4,10));
return 0x77bda6;}
case 0x77bda6:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bda6ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77bda8;}
case 0x77bda8:{ // FSTP float ptr [0x00828768]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bda8ull));
wm<4>(c,0x828768,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bdae;}
case 0x77bdae:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bdaf;}
case 0x77bdb0:{ // FLD float ptr [0x0078706c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bdb0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x78706c),4,0x0ull,4,10));
return 0x77bdb6;}
case 0x77bdb6:{ // FMUL float ptr [0x00784260]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bdb6ull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x784260),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77bdbc;}
case 0x77bdbc:{ // FSTP float ptr [0x0082a448]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bdbcull));
wm<4>(c,0x82a448,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bdc2;}
case 0x77bdc2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bdc3;}
case 0x77bdd0:{ // FLD double ptr [0x00787070]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bdd0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x787070),8,0x0ull,4,10));
return 0x77bdd6;}
case 0x77bdd6:{ // FADD ST0,ST0
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bdd6ull));
wr<10>(c,0x1100,float_op("FLOAT_ADD",r<10>(c,0x1100),10,r<10>(c,0x1100),10,10));
return 0x77bdd8;}
case 0x77bdd8:{ // FSTP double ptr [0x0082a450]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bdd8ull));
wm<8>(c,0x82a450,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bdde;}
case 0x77bdde:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bddf;}
case 0x77bde0:{ // FLD double ptr [0x00787070]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bde0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x787070),8,0x0ull,4,10));
return 0x77bde6;}
case 0x77bde6:{ // FMUL double ptr [0x007864e0]
wu<10>(c,0xb1700,float_op("FLOAT2FLOAT",m<8>(c,0x7864e0),8,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1700),10,10));
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bde6ull));
return 0x77bdec;}
case 0x77bdec:{ // FSTP double ptr [0x00828760]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bdecull));
wm<8>(c,0x828760,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,8));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bdf2;}
case 0x77bdf2:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bdf3;}
case 0x77be00:{ // PUSH 0x2
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x2ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77be02;}
case 0x77be02:{ // PUSH 0x7ec420
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x7ec420ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77be07;}
case 0x77be07:{ // MOV ECX,0x82a4e0
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82a4e0ull));
return 0x77be0c;}
case 0x77be0c:{ // CALL 0x00576770
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77be11ull);
return 0x576770;
return 0x77be11;}
case 0x77be11:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77be12;}
case 0x77be20:{ // FLD float ptr [0x00786f60]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77be20ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x786f60),4,0x0ull,4,10));
return 0x77be26;}
case 0x77be26:{ // PUSH 0x3dcccccd
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x3dcccccdull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77be2b;}
case 0x77be2b:{ // FMUL float ptr [0x00787b5c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77be2bull));
wu<10>(c,0xb1500,float_op("FLOAT2FLOAT",m<4>(c,0x787b5c),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_MULT",r<10>(c,0x1100),10,u<10>(c,0xb1500),10,10));
return 0x77be31;}
case 0x77be31:{ // PUSH 0x3cf5c28f
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x3cf5c28full));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77be36;}
case 0x77be36:{ // PUSH 0x0
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77be38;}
case 0x77be38:{ // PUSH ECX
wu<4>(c,0x41500,eval<Op::COPY,4,4>(r<4>(c,0x4)));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x41500));
return 0x77be39;}
case 0x77be39:{ // MOV ECX,0x8286fc
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x8286fcull));
return 0x77be3e;}
case 0x77be3e:{ // FSTP float ptr [ESP]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77be3eull));
wu<4>(c,0xa900,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wm<4>(c,r<4>(c,0x10),u<4>(c,0xa900));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77be41;}
case 0x77be41:{ // CALL 0x00446690
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77be46ull);
return 0x446690;
return 0x77be46;}
case 0x77be46:{ // PUSH 0x781ba0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ba0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77be4b;}
case 0x77be4b:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77be50ull);
return 0x75c5ed;
return 0x77be50;}
case 0x77be50:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77be51;}
case 0x77be51:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77be52;}
case 0x77be60:{ // MOV word ptr [0x008286e8],0x38e
wm<2>(c,0x8286e8,eval<Op::COPY,2,2>(0x38eull));
return 0x77be69;}
case 0x77be69:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77be6a;}
case 0x77be70:{ // MOV word ptr [0x0082a4d0],0xbbb
wm<2>(c,0x82a4d0,eval<Op::COPY,2,2>(0xbbbull));
return 0x77be79;}
case 0x77be79:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77be7a;}
case 0x77be80:{ // MOV word ptr [0x0082a4dc],0x38e
wm<2>(c,0x82a4dc,eval<Op::COPY,2,2>(0x38eull));
return 0x77be89;}
case 0x77be89:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77be8a;}
case 0x77be90:{ // PUSH 0x781c90
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781c90ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77be95;}
case 0x77be95:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77be9aull);
return 0x75c5ed;
return 0x77be9a;}
case 0x77be9a:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77be9b;}
case 0x77be9b:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77be9c;}
case 0x77bea0:{ // MOV EAX,[0x007ed908]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7ed908)));
return 0x77bea5;}
case 0x77bea5:{ // MOV ECX,dword ptr [0x007ed91c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7ed91c)));
return 0x77beab;}
case 0x77beab:{ // LEA EDX,[ECX + EAX*0x2]
wu<4>(c,0x6a00,eval<Op::INT_MULT,4,4,4>(r<4>(c,0x0),0x2ull));
wu<4>(c,0x6c00,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x4),u<4>(c,0x6a00)));
wr<4>(c,0x8,eval<Op::COPY,4,4>(u<4>(c,0x6c00)));
return 0x77beae;}
case 0x77beae:{ // MOV ECX,dword ptr [0x007ed918]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7ed918)));
return 0x77beb4;}
case 0x77beb4:{ // MOV EAX,[0x007ed8f8]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7ed8f8)));
return 0x77beb9;}
case 0x77beb9:{ // ADD EDX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bebb;}
case 0x77bebb:{ // MOV ECX,dword ptr [0x007ed914]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7ed914)));
return 0x77bec1;}
case 0x77bec1:{ // ADD EDX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bec3;}
case 0x77bec3:{ // MOV EAX,[0x007ed8fc]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7ed8fc)));
return 0x77bec8;}
case 0x77bec8:{ // ADD EDX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77beca;}
case 0x77beca:{ // MOV ECX,dword ptr [0x007ed900]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7ed900)));
return 0x77bed0;}
case 0x77bed0:{ // ADD EDX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bed2;}
case 0x77bed2:{ // MOV EAX,[0x007ed904]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7ed904)));
return 0x77bed7;}
case 0x77bed7:{ // ADD EDX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bed9;}
case 0x77bed9:{ // MOV ECX,dword ptr [0x007ed90c]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x7ed90c)));
return 0x77bedf;}
case 0x77bedf:{ // ADD EDX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bee1;}
case 0x77bee1:{ // MOV EAX,[0x007ed910]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x7ed910)));
return 0x77bee6;}
case 0x77bee6:{ // ADD EDX,ECX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x4)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bee8;}
case 0x77bee8:{ // ADD EDX,EAX
wr<1>(c,0x200,eval<Op::INT_CARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x20b,eval<Op::INT_SCARRY,1,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<4>(c,0x8,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x8),r<4>(c,0x0)));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,4,4>(r<4>(c,0x8),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,4,4>(r<4>(c,0x8),0x0ull));
wu<4>(c,0x49800,eval<Op::INT_AND,4,4,4>(r<4>(c,0x8),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,4>(u<4>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77beea;}
case 0x77beea:{ // MOV dword ptr [0x0082bf30],EDX
wm<4>(c,0x82bf30,eval<Op::COPY,4,4>(r<4>(c,0x8)));
return 0x77bef0;}
case 0x77bef0:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bef1;}
case 0x77bf00:{ // FLD float ptr [0x00784250]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf00ull));
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
return 0x77bf06;}
case 0x77bf06:{ // FDIV float ptr [0x00788480]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf06ull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x788480),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77bf0c;}
case 0x77bf0c:{ // FSTP float ptr [0x0082bf44]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf0cull));
wm<4>(c,0x82bf44,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bf12;}
case 0x77bf12:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bf13;}
case 0x77bf20:{ // PUSH 0x5
wu<4>(c,0x84b00,eval<Op::COPY,4,4>(0x5ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84b00));
return 0x77bf22;}
case 0x77bf22:{ // MOV ECX,0x82c6e8
wr<4>(c,0x4,eval<Op::COPY,4,4>(0x82c6e8ull));
return 0x77bf27;}
case 0x77bf27:{ // CALL 0x00579f20
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bf2cull);
return 0x579f20;
return 0x77bf2c;}
case 0x77bf2c:{ // PUSH 0x781bc0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781bc0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77bf31;}
case 0x77bf31:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bf36ull);
return 0x75c5ed;
return 0x77bf36;}
case 0x77bf36:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77bf37;}
case 0x77bf37:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bf38;}
case 0x77bf40:{ // FLD double ptr [0x00786e68]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf40ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x786e68),8,0x0ull,4,10));
return 0x77bf46;}
case 0x77bf46:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf46ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77bf48;}
case 0x77bf48:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf48ull));
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
return 0x77bf4e;}
case 0x77bf4e:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77bf50;}
case 0x77bf50:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bf53;}
case 0x77bf53:{ // JP 0x0077bf5f
if(r<1>(c,0x202)){return 0x77bf5f;}
return 0x77bf55;}
case 0x77bf55:{ // MOV dword ptr [0x007f0008],0x3f800008
wm<4>(c,0x7f0008,eval<Op::COPY,4,4>(0x3f800008ull));
return 0x77bf5f;}
case 0x77bf5f:{ // PUSH 0x781ca0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781ca0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77bf64;}
case 0x77bf64:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bf69ull);
return 0x75c5ed;
return 0x77bf69;}
case 0x77bf69:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77bf6a;}
case 0x77bf6a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bf6b;}
case 0x77bf70:{ // FLD double ptr [0x0078c240]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf70ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x78c240),8,0x0ull,4,10));
return 0x77bf76;}
case 0x77bf76:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf76ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77bf78;}
case 0x77bf78:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bf78ull));
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
return 0x77bf7e;}
case 0x77bf7e:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77bf80;}
case 0x77bf80:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bf83;}
case 0x77bf83:{ // JP 0x0077bf8f
if(r<1>(c,0x202)){return 0x77bf8f;}
return 0x77bf85;}
case 0x77bf85:{ // MOV dword ptr [0x007f0024],0x42c80000
wm<4>(c,0x7f0024,eval<Op::COPY,4,4>(0x42c80000ull));
return 0x77bf8f;}
case 0x77bf8f:{ // PUSH 0x781cb0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781cb0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77bf94;}
case 0x77bf94:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bf99ull);
return 0x75c5ed;
return 0x77bf99;}
case 0x77bf99:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77bf9a;}
case 0x77bf9a:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bf9b;}
case 0x77bfa0:{ // FLD float ptr [0x0078848c]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bfa0ull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<4>(c,0x78848c),4,0x0ull,4,10));
return 0x77bfa6;}
case 0x77bfa6:{ // MOV EAX,[0x0078848c]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x78848c)));
return 0x77bfab;}
case 0x77bfab:{ // FDIV float ptr [0x00788490]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bfabull));
wu<10>(c,0xabb00,float_op("FLOAT2FLOAT",m<4>(c,0x788490),4,0x0ull,4,10));
wr<10>(c,0x1100,float_op("FLOAT_DIV",r<10>(c,0x1100),10,u<10>(c,0xabb00),10,10));
return 0x77bfb1;}
case 0x77bfb1:{ // MOV [0x007f0038],EAX
wm<4>(c,0x7f0038,eval<Op::COPY,4,4>(r<4>(c,0x0)));
return 0x77bfb6;}
case 0x77bfb6:{ // FST float ptr [0x007f0034]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bfb6ull));
wm<4>(c,0x7f0034,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
return 0x77bfbc;}
case 0x77bfbc:{ // FLD double ptr [0x0078c248]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bfbcull));
wu<10>(c,0x4e300,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
wr<10>(c,0x1170,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1100)));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(u<10>(c,0x4e300)));
wr<10>(c,0x1100,float_op("FLOAT2FLOAT",m<8>(c,0x78c248),8,0x0ull,4,10));
return 0x77bfc2;}
case 0x77bfc2:{ // FABS
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bfc2ull));
wr<10>(c,0x1100,float_op("FLOAT_ABS",r<10>(c,0x1100),10,0x0ull,4,10));
return 0x77bfc4;}
case 0x77bfc4:{ // FCOMP float ptr [0x00787594]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bfc4ull));
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
return 0x77bfca;}
case 0x77bfca:{ // FNSTSW AX
wr<2>(c,0x0,eval<Op::COPY,2,2>(r<2>(c,0x10a2)));
return 0x77bfcc;}
case 0x77bfcc:{ // TEST AH,0x5
wr<1>(c,0x200,eval<Op::COPY,1,1>(0x0ull));
wr<1>(c,0x20b,eval<Op::COPY,1,1>(0x0ull));
wu<1>(c,0xa3c00,eval<Op::INT_AND,1,1,1>(r<1>(c,0x1),0x5ull));
wr<1>(c,0x207,eval<Op::INT_SLESS,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wr<1>(c,0x206,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0xa3c00),0x0ull));
wu<1>(c,0x49800,eval<Op::INT_AND,1,1,1>(u<1>(c,0xa3c00),0xffull));
wu<1>(c,0x49900,eval<Op::POPCOUNT,1,1>(u<1>(c,0x49800)));
wu<1>(c,0x49a00,eval<Op::INT_AND,1,1,1>(u<1>(c,0x49900),0x1ull));
wr<1>(c,0x202,eval<Op::INT_EQUAL,1,1,1>(u<1>(c,0x49a00),0x0ull));
return 0x77bfcf;}
case 0x77bfcf:{ // JP 0x0077bfdb
if(r<1>(c,0x202)){return 0x77bfdb;}
return 0x77bfd1;}
case 0x77bfd1:{ // MOV dword ptr [0x007f0040],0x42fe0000
wm<4>(c,0x7f0040,eval<Op::COPY,4,4>(0x42fe0000ull));
return 0x77bfdb;}
case 0x77bfdb:{ // PUSH 0x781cc0
wu<4>(c,0x84f00,eval<Op::COPY,4,4>(0x781cc0ull));
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),u<4>(c,0x84f00));
return 0x77bfe0;}
case 0x77bfe0:{ // FSTP float ptr [0x007f0048]
wr<4>(c,0x10ac,eval<Op::COPY,4,4>(0x77bfe0ull));
wm<4>(c,0x7f0048,float_op("FLOAT2FLOAT",r<10>(c,0x1100),10,0x0ull,4,4));
wr<10>(c,0x1100,eval<Op::COPY,10,10>(r<10>(c,0x1110)));
wr<10>(c,0x1110,eval<Op::COPY,10,10>(r<10>(c,0x1120)));
wr<10>(c,0x1120,eval<Op::COPY,10,10>(r<10>(c,0x1130)));
wr<10>(c,0x1130,eval<Op::COPY,10,10>(r<10>(c,0x1140)));
wr<10>(c,0x1140,eval<Op::COPY,10,10>(r<10>(c,0x1150)));
wr<10>(c,0x1150,eval<Op::COPY,10,10>(r<10>(c,0x1160)));
wr<10>(c,0x1160,eval<Op::COPY,10,10>(r<10>(c,0x1170)));
return 0x77bfe6;}
case 0x77bfe6:{ // CALL 0x0075c5ed
wr<4>(c,0x10,eval<Op::INT_SUB,4,4,4>(r<4>(c,0x10),0x4ull));
wm<4>(c,r<4>(c,0x10),0x77bfebull);
return 0x75c5ed;
return 0x77bfeb;}
case 0x77bfeb:{ // POP ECX
wu<4>(c,0x84300,eval<Op::COPY,4,4>(0x0ull));
wu<4>(c,0x84300,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
wr<4>(c,0x4,eval<Op::COPY,4,4>(u<4>(c,0x84300)));
return 0x77bfec;}
case 0x77bfec:{ // RET
wr<4>(c,0x284,m<4>(c,r<4>(c,0x10)));
wr<4>(c,0x10,eval<Op::INT_ADD,4,4,4>(r<4>(c,0x10),0x4ull));
return uint32_t(r<4>(c,0x284));
return 0x77bfed;}
case 0x77bff0:{ // MOV EAX,[0x00788494]
wr<4>(c,0x0,eval<Op::COPY,4,4>(m<4>(c,0x788494)));
return 0x77bff5;}
case 0x77bff5:{ // MOV EDX,dword ptr [0x0078849c]
wr<4>(c,0x8,eval<Op::COPY,4,4>(m<4>(c,0x78849c)));
return 0x77bffb;}
case 0x77bffb:{ // MOV ECX,dword ptr [0x00788498]
wr<4>(c,0x4,eval<Op::COPY,4,4>(m<4>(c,0x788498)));
return 0x77c001;}
default:missing_instruction(c.pc);}}
}
