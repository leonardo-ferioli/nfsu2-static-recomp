#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d6,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d6,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d6(u8* __restrict R,Cpu& c);
u32 page_6d6(Cpu& c){return body_6d6(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d6(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d6143:goto L6d6143;
case 0x6d6149:c.instructions+=5;goto B6d6149;
case 0x6d614b:c.instructions+=4;goto B6d614b;
case 0x6d614e:c.instructions+=3;goto B6d614e;
case 0x6d6150:c.instructions+=2;goto B6d6150;
case 0x6d6152:c.instructions+=1;goto B6d6152;
case 0x6d6154:goto L6d6154;
case 0x6d6156:c.instructions+=5;goto B6d6156;
case 0x6d6158:c.instructions+=4;goto B6d6158;
case 0x6d615a:c.instructions+=3;goto B6d615a;
case 0x6d6160:c.instructions+=2;goto B6d6160;
case 0x6d6162:c.instructions+=1;goto B6d6162;
case 0x6d6164:goto L6d6164;
case 0x6d6166:c.instructions+=5;goto B6d6166;
case 0x6d6168:c.instructions+=4;goto B6d6168;
case 0x6d616a:c.instructions+=3;goto B6d616a;
case 0x6d6170:c.instructions+=2;goto B6d6170;
case 0x6d6172:c.instructions+=1;goto B6d6172;
case 0x6d6174:goto L6d6174;
case 0x6d6176:c.instructions+=5;goto B6d6176;
case 0x6d6178:c.instructions+=4;goto B6d6178;
case 0x6d617a:c.instructions+=3;goto B6d617a;
case 0x6d6180:c.instructions+=2;goto B6d6180;
case 0x6d6182:c.instructions+=1;goto B6d6182;
case 0x6d6184:goto L6d6184;
case 0x6d6186:c.instructions+=5;goto B6d6186;
case 0x6d6188:c.instructions+=4;goto B6d6188;
case 0x6d618a:c.instructions+=3;goto B6d618a;
case 0x6d6190:c.instructions+=2;goto B6d6190;
case 0x6d6192:c.instructions+=1;goto B6d6192;
case 0x6d6194:goto L6d6194;
case 0x6d6199:c.instructions+=4;goto B6d6199;
case 0x6d619e:c.instructions+=3;goto B6d619e;
case 0x6d61a0:c.instructions+=2;goto B6d61a0;
case 0x6d61a2:c.instructions+=1;goto B6d61a2;
case 0x6d61a4:goto L6d61a4;
case 0x6d61a9:c.instructions+=4;goto B6d61a9;
case 0x6d61ae:c.instructions+=3;goto B6d61ae;
case 0x6d61b0:c.instructions+=2;goto B6d61b0;
case 0x6d61b2:c.instructions+=1;goto B6d61b2;
case 0x6d61b4:goto L6d61b4;
case 0x6d61b9:c.instructions+=4;goto B6d61b9;
case 0x6d61be:c.instructions+=3;goto B6d61be;
case 0x6d61c0:c.instructions+=2;goto B6d61c0;
case 0x6d61c2:c.instructions+=1;goto B6d61c2;
case 0x6d61c4:goto L6d61c4;
case 0x6d61c9:c.instructions+=4;goto B6d61c9;
case 0x6d61ce:c.instructions+=3;goto B6d61ce;
case 0x6d61d0:c.instructions+=2;goto B6d61d0;
case 0x6d61d2:c.instructions+=1;goto B6d61d2;
case 0x6d61d4:goto L6d61d4;
case 0x6d61d9:c.instructions+=4;goto B6d61d9;
case 0x6d61de:c.instructions+=3;goto B6d61de;
case 0x6d61e0:c.instructions+=2;goto B6d61e0;
case 0x6d61e2:c.instructions+=1;goto B6d61e2;
case 0x6d61e4:goto L6d61e4;
case 0x6d61e9:c.instructions+=4;goto B6d61e9;
case 0x6d61ee:c.instructions+=3;goto B6d61ee;
case 0x6d61f0:c.instructions+=2;goto B6d61f0;
case 0x6d61f2:c.instructions+=1;goto B6d61f2;
case 0x6d61f4:goto L6d61f4;
case 0x6d61f9:c.instructions+=4;goto B6d61f9;
case 0x6d61fe:c.instructions+=3;goto B6d61fe;
case 0x6d6200:c.instructions+=2;goto B6d6200;
case 0x6d6202:c.instructions+=1;goto B6d6202;
case 0x6d6204:goto L6d6204;
case 0x6d6209:c.instructions+=4;goto B6d6209;
case 0x6d620e:c.instructions+=3;goto B6d620e;
case 0x6d6210:c.instructions+=2;goto B6d6210;
case 0x6d6212:c.instructions+=1;goto B6d6212;
case 0x6d6214:goto L6d6214;
case 0x6d6217:c.instructions+=4;goto B6d6217;
case 0x6d621a:c.instructions+=3;goto B6d621a;
case 0x6d6220:c.instructions+=2;goto B6d6220;
case 0x6d6222:c.instructions+=1;goto B6d6222;
case 0x6d6224:goto L6d6224;
case 0x6d6227:c.instructions+=4;goto B6d6227;
case 0x6d622a:c.instructions+=3;goto B6d622a;
case 0x6d6230:c.instructions+=2;goto B6d6230;
case 0x6d6232:c.instructions+=1;goto B6d6232;
case 0x6d6234:goto L6d6234;
default:missing_instruction(c.pc);}
B6d6143:L6d6143:{c.instructions+=6;NFSU2_TR(0x6d6143);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc000000ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+9))));
s1(u32(r4(U+0)),r1(U+4));
}
B6d6149:{NFSU2_TR(0x6d6149);
w1(R+12,u8(0x0ull));
}
B6d614b:{NFSU2_TR(0x6d614b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d614e:{NFSU2_TR(0x6d614e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6150:{NFSU2_TR(0x6d6150);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6152:{NFSU2_TR(0x6d6152);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6154;}}
}
B6d6154:L6d6154:{c.instructions+=6;NFSU2_TR(0x6d6154);
w1(R+1,u8(0x0ull));
}
B6d6156:{NFSU2_TR(0x6d6156);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6158:{NFSU2_TR(0x6d6158);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xb4ull))));
}
B6d615a:{NFSU2_TR(0x6d615a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6160:{NFSU2_TR(0x6d6160);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6162:{NFSU2_TR(0x6d6162);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6164;}}
}
B6d6164:L6d6164:{c.instructions+=6;NFSU2_TR(0x6d6164);
w1(R+5,u8(0x0ull));
}
B6d6166:{NFSU2_TR(0x6d6166);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6168:{NFSU2_TR(0x6d6168);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xb5ull))));
}
B6d616a:{NFSU2_TR(0x6d616a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6170:{NFSU2_TR(0x6d6170);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6172:{NFSU2_TR(0x6d6172);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6174;}}
}
B6d6174:L6d6174:{c.instructions+=6;NFSU2_TR(0x6d6174);
w1(R+9,u8(0x0ull));
}
B6d6176:{NFSU2_TR(0x6d6176);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6178:{NFSU2_TR(0x6d6178);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xb6ull))));
}
B6d617a:{NFSU2_TR(0x6d617a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6180:{NFSU2_TR(0x6d6180);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6182:{NFSU2_TR(0x6d6182);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6184;}}
}
B6d6184:L6d6184:{c.instructions+=6;NFSU2_TR(0x6d6184);
w1(R+13,u8(0x0ull));
}
B6d6186:{NFSU2_TR(0x6d6186);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6188:{NFSU2_TR(0x6d6188);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xb7ull))));
}
B6d618a:{NFSU2_TR(0x6d618a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6190:{NFSU2_TR(0x6d6190);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6192:{NFSU2_TR(0x6d6192);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6194;}}
}
B6d6194:L6d6194:{c.instructions+=5;NFSU2_TR(0x6d6194);
w4(R+0,u32(0xc000000ull));
}
B6d6199:{NFSU2_TR(0x6d6199);
w4(R+0,u32(0x8000ull));
}
B6d619e:{NFSU2_TR(0x6d619e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d61a0:{NFSU2_TR(0x6d61a0);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61a2:{NFSU2_TR(0x6d61a2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d61a4;}}
}
B6d61a4:L6d61a4:{c.instructions+=5;NFSU2_TR(0x6d61a4);
w4(R+4,u32(0xc000000ull));
}
B6d61a9:{NFSU2_TR(0x6d61a9);
w4(R+4,u32(0x8000ull));
}
B6d61ae:{NFSU2_TR(0x6d61ae);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d61b0:{NFSU2_TR(0x6d61b0);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61b2:{NFSU2_TR(0x6d61b2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d61b4;}}
}
B6d61b4:L6d61b4:{c.instructions+=5;NFSU2_TR(0x6d61b4);
w4(R+8,u32(0xc000000ull));
}
B6d61b9:{NFSU2_TR(0x6d61b9);
w4(R+8,u32(0x8000ull));
}
B6d61be:{NFSU2_TR(0x6d61be);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d61c0:{NFSU2_TR(0x6d61c0);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61c2:{NFSU2_TR(0x6d61c2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d61c4;}}
}
B6d61c4:L6d61c4:{c.instructions+=5;NFSU2_TR(0x6d61c4);
w4(R+12,u32(0xc000000ull));
}
B6d61c9:{NFSU2_TR(0x6d61c9);
w4(R+12,u32(0x8000ull));
}
B6d61ce:{NFSU2_TR(0x6d61ce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d61d0:{NFSU2_TR(0x6d61d0);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61d2:{NFSU2_TR(0x6d61d2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d61d4;}}
}
B6d61d4:L6d61d4:{c.instructions+=5;NFSU2_TR(0x6d61d4);
w4(R+16,u32(0xc000000ull));
}
B6d61d9:{NFSU2_TR(0x6d61d9);
w4(R+16,u32(0x8000ull));
}
B6d61de:{NFSU2_TR(0x6d61de);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d61e0:{NFSU2_TR(0x6d61e0);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61e2:{NFSU2_TR(0x6d61e2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d61e4;}}
}
B6d61e4:L6d61e4:{c.instructions+=5;NFSU2_TR(0x6d61e4);
w4(R+20,u32(0xc000000ull));
}
B6d61e9:{NFSU2_TR(0x6d61e9);
w4(R+20,u32(0x8000ull));
}
B6d61ee:{NFSU2_TR(0x6d61ee);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d61f0:{NFSU2_TR(0x6d61f0);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61f2:{NFSU2_TR(0x6d61f2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d61f4;}}
}
B6d61f4:L6d61f4:{c.instructions+=5;NFSU2_TR(0x6d61f4);
w4(R+24,u32(0xc000000ull));
}
B6d61f9:{NFSU2_TR(0x6d61f9);
w4(R+24,u32(0x8000ull));
}
B6d61fe:{NFSU2_TR(0x6d61fe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6200:{NFSU2_TR(0x6d6200);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6202:{NFSU2_TR(0x6d6202);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6204;}}
}
B6d6204:L6d6204:{c.instructions+=5;NFSU2_TR(0x6d6204);
w4(R+28,u32(0xc000000ull));
}
B6d6209:{NFSU2_TR(0x6d6209);
w4(R+28,u32(0x8000ull));
}
B6d620e:{NFSU2_TR(0x6d620e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6210:{NFSU2_TR(0x6d6210);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6212:{NFSU2_TR(0x6d6212);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6214;}}
}
B6d6214:L6d6214:{c.instructions+=5;NFSU2_TR(0x6d6214);
u8 U[11];
w4(U+1,u32(u32(u32(0x0ull))&u32(u32(0x7ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+5,shl<u8>(r1(U+0),u64(r4(U+1))));
w4(U+6,u32(u32(u32(0x8ull))-u32(r4(U+1))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+10,shr<u8>(r1(U+0),u64(r4(U+6))));
w1(U+0,u8(u32(r1(U+5))|u32(r1(U+10))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6217:{NFSU2_TR(0x6d6217);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+8,u8(u32(r1(U+8))+u32(r1(R+4))));
s1(u32(r4(U+4)),r1(U+8));
}
B6d621a:{NFSU2_TR(0x6d621a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6220:{NFSU2_TR(0x6d6220);
u8 U[3];
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6222:{NFSU2_TR(0x6d6222);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6224;}}
}
B6d6224:L6d6224:{c.instructions+=5;NFSU2_TR(0x6d6224);
u8 U[20];
w4(U+4,u32(u32(u32(0x0ull))&u32(u32(0x1full))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+8,shl<u32>(r4(U+0),u64(r4(U+4))));
w4(U+12,u32(u32(u32(0x20ull))-u32(r4(U+4))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+16,shr<u32>(r4(U+0),u64(r4(U+12))));
w4(U+0,u32(u32(r4(U+8))|u32(r4(U+16))));
s4(u32(r4(R+0)),r4(U+0));
}
B6d6227:{NFSU2_TR(0x6d6227);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+8,u8(u32(r1(U+8))+u32(r1(R+4))));
s1(u32(r4(U+4)),r1(U+8));
}
B6d622a:{NFSU2_TR(0x6d622a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B6d6230:{NFSU2_TR(0x6d6230);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+5,u8(u32(r1(R+5))&u32(r1(R+13))));
w1(R+519,u8(s8(r1(R+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+5))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6232:{NFSU2_TR(0x6d6232);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6d6234;}}
}
B6d6234:L6d6234:{c.instructions+=1;NFSU2_TR(0x6d6234);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x0ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x6d6,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
