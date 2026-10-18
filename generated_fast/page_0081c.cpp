#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x81c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x81c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_81c(u8* __restrict R,Cpu& c);
u32 page_81c(Cpu& c){return body_81c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_81c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x81cb20:goto L81cb20;
case 0x81cb22:c.instructions+=16;goto B81cb22;
case 0x81cb24:c.instructions+=15;goto B81cb24;
case 0x81cb26:c.instructions+=14;goto B81cb26;
case 0x81cb28:c.instructions+=13;goto B81cb28;
case 0x81cb2a:c.instructions+=12;goto B81cb2a;
case 0x81cb2c:c.instructions+=11;goto B81cb2c;
case 0x81cb2e:c.instructions+=10;goto B81cb2e;
case 0x81cb30:c.instructions+=9;goto B81cb30;
case 0x81cb32:c.instructions+=8;goto B81cb32;
case 0x81cb34:c.instructions+=7;goto B81cb34;
case 0x81cb36:c.instructions+=6;goto B81cb36;
case 0x81cb38:c.instructions+=5;goto B81cb38;
case 0x81cb3a:c.instructions+=4;goto B81cb3a;
case 0x81cb3c:c.instructions+=3;goto B81cb3c;
case 0x81cb3e:c.instructions+=2;goto B81cb3e;
case 0x81cb40:c.instructions+=1;goto B81cb40;
case 0x81cb58:goto L81cb58;
case 0x81cb5a:c.instructions+=16;goto B81cb5a;
case 0x81cb5c:c.instructions+=15;goto B81cb5c;
case 0x81cb5e:c.instructions+=14;goto B81cb5e;
case 0x81cb60:c.instructions+=13;goto B81cb60;
case 0x81cb62:c.instructions+=12;goto B81cb62;
case 0x81cb64:c.instructions+=11;goto B81cb64;
case 0x81cb66:c.instructions+=10;goto B81cb66;
case 0x81cb68:c.instructions+=9;goto B81cb68;
case 0x81cb6a:c.instructions+=8;goto B81cb6a;
case 0x81cb6c:c.instructions+=7;goto B81cb6c;
case 0x81cb6e:c.instructions+=6;goto B81cb6e;
case 0x81cb70:c.instructions+=5;goto B81cb70;
case 0x81cb72:c.instructions+=4;goto B81cb72;
case 0x81cb74:c.instructions+=3;goto B81cb74;
case 0x81cb76:c.instructions+=2;goto B81cb76;
case 0x81cb78:c.instructions+=1;goto B81cb78;
default:missing_instruction(c.pc);}
B81cb20:L81cb20:{c.instructions+=17;NFSU2_TR(0x81cb20);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb22:{NFSU2_TR(0x81cb22);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb24:{NFSU2_TR(0x81cb24);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb26:{NFSU2_TR(0x81cb26);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb28:{NFSU2_TR(0x81cb28);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb2a:{NFSU2_TR(0x81cb2a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb2c:{NFSU2_TR(0x81cb2c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb2e:{NFSU2_TR(0x81cb2e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb30:{NFSU2_TR(0x81cb30);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb32:{NFSU2_TR(0x81cb32);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb34:{NFSU2_TR(0x81cb34);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb36:{NFSU2_TR(0x81cb36);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb38:{NFSU2_TR(0x81cb38);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb3a:{NFSU2_TR(0x81cb3a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb3c:{NFSU2_TR(0x81cb3c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb3e:{NFSU2_TR(0x81cb3e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb40:{NFSU2_TR(0x81cb40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+512,carry<u8>(r1(U+0),r1(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+523,scarry<u8>(r1(U+0),r1(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
EXIT(0x81cb42u);
}
B81cb58:L81cb58:{c.instructions+=17;NFSU2_TR(0x81cb58);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb5a:{NFSU2_TR(0x81cb5a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb5c:{NFSU2_TR(0x81cb5c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb5e:{NFSU2_TR(0x81cb5e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb60:{NFSU2_TR(0x81cb60);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb62:{NFSU2_TR(0x81cb62);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb64:{NFSU2_TR(0x81cb64);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb66:{NFSU2_TR(0x81cb66);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb68:{NFSU2_TR(0x81cb68);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb6a:{NFSU2_TR(0x81cb6a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb6c:{NFSU2_TR(0x81cb6c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb6e:{NFSU2_TR(0x81cb6e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb70:{NFSU2_TR(0x81cb70);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb72:{NFSU2_TR(0x81cb72);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb74:{NFSU2_TR(0x81cb74);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb76:{NFSU2_TR(0x81cb76);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
}
B81cb78:{NFSU2_TR(0x81cb78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+512,carry<u8>(r1(U+0),r1(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+523,scarry<u8>(r1(U+0),r1(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+0))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
EXIT(0x81cb7au);
}
XIT:NFSU2_TR_EXIT(0x81c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
