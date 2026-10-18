#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506dbb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5070fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507233(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50727a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5073a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5073b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5074eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507531(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50765d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50766b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5077a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5077e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507915(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507923(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50798a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5079f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507b65(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507b69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507bc4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507d24(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507d3a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507d71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507e0f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507e1c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507e8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507ffc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_508000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_508057(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_508a66(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5070f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507d80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_507000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507000:L507000:{bud-=68;NFSU2_TR(0x507000);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507003:{NFSU2_TR(0x507003);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507006:{NFSU2_TR(0x507006);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50700a:{NFSU2_TR(0x50700a);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50700d:{NFSU2_TR(0x50700d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507011:{NFSU2_TR(0x507011);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507014:{NFSU2_TR(0x507014);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507017:{NFSU2_TR(0x507017);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50701b:{NFSU2_TR(0x50701b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50701d:{NFSU2_TR(0x50701d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50701f:{NFSU2_TR(0x50701f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507023:{NFSU2_TR(0x507023);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507025:{NFSU2_TR(0x507025);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507029:{NFSU2_TR(0x507029);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50702d:{NFSU2_TR(0x50702d);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507030:{NFSU2_TR(0x507030);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507034:{NFSU2_TR(0x507034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507037:{NFSU2_TR(0x507037);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50703b:{NFSU2_TR(0x50703b);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50703f:{NFSU2_TR(0x50703f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507041:{NFSU2_TR(0x507041);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507044:{NFSU2_TR(0x507044);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507048:{NFSU2_TR(0x507048);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50704c:{NFSU2_TR(0x50704c);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50704f:{NFSU2_TR(0x50704f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507052:{NFSU2_TR(0x507052);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507055:{NFSU2_TR(0x507055);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507058:{NFSU2_TR(0x507058);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50705b:{NFSU2_TR(0x50705b);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50705f:{NFSU2_TR(0x50705f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507062:{NFSU2_TR(0x507062);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507066:{NFSU2_TR(0x507066);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50706d:{NFSU2_TR(0x50706d);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507070:{NFSU2_TR(0x507070);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507074:{NFSU2_TR(0x507074);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507079:{NFSU2_TR(0x507079);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507080:{NFSU2_TR(0x507080);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507082:{NFSU2_TR(0x507082);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507084:{NFSU2_TR(0x507084);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507088:{NFSU2_TR(0x507088);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50708a:{NFSU2_TR(0x50708a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50708e:{NFSU2_TR(0x50708e);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507095:{NFSU2_TR(0x507095);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507097:{NFSU2_TR(0x507097);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50709b:{NFSU2_TR(0x50709b);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5070a2:{NFSU2_TR(0x5070a2);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070a6:{NFSU2_TR(0x5070a6);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5070a9:{NFSU2_TR(0x5070a9);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070ad:{NFSU2_TR(0x5070ad);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5070b1:{NFSU2_TR(0x5070b1);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070b5:{NFSU2_TR(0x5070b5);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5070b9:{NFSU2_TR(0x5070b9);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5070c0:{NFSU2_TR(0x5070c0);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070c4:{NFSU2_TR(0x5070c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5070cb:{NFSU2_TR(0x5070cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5070cf:{NFSU2_TR(0x5070cf);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B5070d1:{NFSU2_TR(0x5070d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5070d4:{NFSU2_TR(0x5070d4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5070d5:{NFSU2_TR(0x5070d5);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5070dc:{NFSU2_TR(0x5070dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5070e3:{NFSU2_TR(0x5070e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5070e5:{NFSU2_TR(0x5070e5);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5070e7:{NFSU2_TR(0x5070e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5070ea:{NFSU2_TR(0x5070ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5070ee:{NFSU2_TR(0x5070ee);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5070f1:{NFSU2_TR(0x5070f1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5070f4:{NFSU2_TR(0x5070f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5070f6:{NFSU2_TR(0x5070f6);
{[[clang::musttail]] return blk_5070fc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5070f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5070f8:L5070f8:{bud-=1;NFSU2_TR(0x5070f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_5070fc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5070fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5070fc:L5070fc:{bud-=6;NFSU2_TR(0x5070fc);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5070ff:{NFSU2_TR(0x5070ff);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B507102:{NFSU2_TR(0x507102);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B507104:{NFSU2_TR(0x507104);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B507108:{NFSU2_TR(0x507108);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50710b:{NFSU2_TR(0x50710b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_50727a(ARGS);}}
}
B507111:L507111:{bud-=2;NFSU2_TR(0x507111);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507113:{NFSU2_TR(0x507113);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_507233(ARGS);}}
}
B507119:L507119:{bud-=92;NFSU2_TR(0x507119);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50711c:{NFSU2_TR(0x50711c);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50711f:{NFSU2_TR(0x50711f);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507122:{NFSU2_TR(0x507122);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507125:{NFSU2_TR(0x507125);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507127:{NFSU2_TR(0x507127);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50712a:{NFSU2_TR(0x50712a);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507131:{NFSU2_TR(0x507131);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507138:{NFSU2_TR(0x507138);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50713a:{NFSU2_TR(0x50713a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50713c:{NFSU2_TR(0x50713c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50713f:{NFSU2_TR(0x50713f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507143:{NFSU2_TR(0x507143);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507146:{NFSU2_TR(0x507146);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507149:{NFSU2_TR(0x507149);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50714c:{NFSU2_TR(0x50714c);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50714e:{NFSU2_TR(0x50714e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507150:{NFSU2_TR(0x507150);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507152:{NFSU2_TR(0x507152);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507154:{NFSU2_TR(0x507154);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507156:{NFSU2_TR(0x507156);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507159:{NFSU2_TR(0x507159);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50715c:{NFSU2_TR(0x50715c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50715e:{NFSU2_TR(0x50715e);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507161:{NFSU2_TR(0x507161);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507164:{NFSU2_TR(0x507164);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507167:{NFSU2_TR(0x507167);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50716a:{NFSU2_TR(0x50716a);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50716d:{NFSU2_TR(0x50716d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50716f:{NFSU2_TR(0x50716f);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507171:{NFSU2_TR(0x507171);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507173:{NFSU2_TR(0x507173);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507176:{NFSU2_TR(0x507176);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507179:{NFSU2_TR(0x507179);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50717c:{NFSU2_TR(0x50717c);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50717f:{NFSU2_TR(0x50717f);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507182:{NFSU2_TR(0x507182);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507185:{NFSU2_TR(0x507185);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507187:{NFSU2_TR(0x507187);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50718a:{NFSU2_TR(0x50718a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50718c:{NFSU2_TR(0x50718c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50718e:{NFSU2_TR(0x50718e);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507192:{NFSU2_TR(0x507192);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507194:{NFSU2_TR(0x507194);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507198:{NFSU2_TR(0x507198);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50719c:{NFSU2_TR(0x50719c);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50719f:{NFSU2_TR(0x50719f);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071a3:{NFSU2_TR(0x5071a3);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5071a6:{NFSU2_TR(0x5071a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5071a9:{NFSU2_TR(0x5071a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5071ab:{NFSU2_TR(0x5071ab);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071ae:{NFSU2_TR(0x5071ae);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071b2:{NFSU2_TR(0x5071b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5071b6:{NFSU2_TR(0x5071b6);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071b9:{NFSU2_TR(0x5071b9);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5071bc:{NFSU2_TR(0x5071bc);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071bf:{NFSU2_TR(0x5071bf);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5071c2:{NFSU2_TR(0x5071c2);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071c5:{NFSU2_TR(0x5071c5);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5071c8:{NFSU2_TR(0x5071c8);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071cc:{NFSU2_TR(0x5071cc);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071ce:{NFSU2_TR(0x5071ce);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5071d1:{NFSU2_TR(0x5071d1);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071d5:{NFSU2_TR(0x5071d5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5071d7:{NFSU2_TR(0x5071d7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5071d9:{NFSU2_TR(0x5071d9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5071da:{NFSU2_TR(0x5071da);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B5071dd:{NFSU2_TR(0x5071dd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5071e0:{NFSU2_TR(0x5071e0);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071e4:{NFSU2_TR(0x5071e4);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5071e9:{NFSU2_TR(0x5071e9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5071eb:{NFSU2_TR(0x5071eb);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071ef:{NFSU2_TR(0x5071ef);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5071f3:{NFSU2_TR(0x5071f3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5071f5:{NFSU2_TR(0x5071f5);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5071f9:{NFSU2_TR(0x5071f9);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5071fd:{NFSU2_TR(0x5071fd);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507201:{NFSU2_TR(0x507201);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507204:{NFSU2_TR(0x507204);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507208:{NFSU2_TR(0x507208);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50720b:{NFSU2_TR(0x50720b);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50720f:{NFSU2_TR(0x50720f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507212:{NFSU2_TR(0x507212);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507216:{NFSU2_TR(0x507216);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50721a:{NFSU2_TR(0x50721a);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50721c:{NFSU2_TR(0x50721c);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50721f:{NFSU2_TR(0x50721f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507222:{NFSU2_TR(0x507222);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507226:{NFSU2_TR(0x507226);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50722a:{NFSU2_TR(0x50722a);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50722d:{NFSU2_TR(0x50722d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507230:{NFSU2_TR(0x507230);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_507233(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507233(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507233:L507233:{bud-=24;NFSU2_TR(0x507233);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507236:{NFSU2_TR(0x507236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507239:{NFSU2_TR(0x507239);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50723b:{NFSU2_TR(0x50723b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B50723d:{NFSU2_TR(0x50723d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507241:{NFSU2_TR(0x507241);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507243:{NFSU2_TR(0x507243);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507246:{NFSU2_TR(0x507246);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507249:{NFSU2_TR(0x507249);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50724b:{NFSU2_TR(0x50724b);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50724e:{NFSU2_TR(0x50724e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507251:{NFSU2_TR(0x507251);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507254:{NFSU2_TR(0x507254);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507258:{NFSU2_TR(0x507258);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50725c:{NFSU2_TR(0x50725c);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50725f:{NFSU2_TR(0x50725f);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507262:{NFSU2_TR(0x507262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+0),(U+0),4);
}
B507264:{NFSU2_TR(0x507264);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507267:{NFSU2_TR(0x507267);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50726b:{NFSU2_TR(0x50726b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50726d:{NFSU2_TR(0x50726d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50726f:{NFSU2_TR(0x50726f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507272:{NFSU2_TR(0x507272);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507275:{NFSU2_TR(0x507275);
{[[clang::musttail]] return blk_5073a9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50727a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50727a:L50727a:{bud-=2;NFSU2_TR(0x50727a);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50727c:{NFSU2_TR(0x50727c);
if(r1(F+6)){{[[clang::musttail]] return blk_5073b7(ARGS);}}
}
B507282:L507282:{bud-=88;NFSU2_TR(0x507282);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507285:{NFSU2_TR(0x507285);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507288:{NFSU2_TR(0x507288);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50728b:{NFSU2_TR(0x50728b);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50728e:{NFSU2_TR(0x50728e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507290:{NFSU2_TR(0x507290);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507293:{NFSU2_TR(0x507293);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50729a:{NFSU2_TR(0x50729a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5072a1:{NFSU2_TR(0x5072a1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5072a3:{NFSU2_TR(0x5072a3);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072a5:{NFSU2_TR(0x5072a5);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5072a8:{NFSU2_TR(0x5072a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5072ac:{NFSU2_TR(0x5072ac);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072af:{NFSU2_TR(0x5072af);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072b2:{NFSU2_TR(0x5072b2);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5072b5:{NFSU2_TR(0x5072b5);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5072b7:{NFSU2_TR(0x5072b7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5072b9:{NFSU2_TR(0x5072b9);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5072bb:{NFSU2_TR(0x5072bb);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072bd:{NFSU2_TR(0x5072bd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5072bf:{NFSU2_TR(0x5072bf);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5072c2:{NFSU2_TR(0x5072c2);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072c5:{NFSU2_TR(0x5072c5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5072c7:{NFSU2_TR(0x5072c7);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5072ca:{NFSU2_TR(0x5072ca);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072cd:{NFSU2_TR(0x5072cd);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072d0:{NFSU2_TR(0x5072d0);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072d3:{NFSU2_TR(0x5072d3);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072d6:{NFSU2_TR(0x5072d6);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5072d8:{NFSU2_TR(0x5072d8);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072da:{NFSU2_TR(0x5072da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5072dc:{NFSU2_TR(0x5072dc);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5072df:{NFSU2_TR(0x5072df);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072e2:{NFSU2_TR(0x5072e2);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5072e5:{NFSU2_TR(0x5072e5);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072e8:{NFSU2_TR(0x5072e8);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072eb:{NFSU2_TR(0x5072eb);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5072ee:{NFSU2_TR(0x5072ee);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5072f0:{NFSU2_TR(0x5072f0);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5072f3:{NFSU2_TR(0x5072f3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5072f5:{NFSU2_TR(0x5072f5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5072f7:{NFSU2_TR(0x5072f7);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5072fb:{NFSU2_TR(0x5072fb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5072fd:{NFSU2_TR(0x5072fd);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507301:{NFSU2_TR(0x507301);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507305:{NFSU2_TR(0x507305);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507308:{NFSU2_TR(0x507308);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50730c:{NFSU2_TR(0x50730c);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50730f:{NFSU2_TR(0x50730f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507312:{NFSU2_TR(0x507312);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507314:{NFSU2_TR(0x507314);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507317:{NFSU2_TR(0x507317);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50731b:{NFSU2_TR(0x50731b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50731f:{NFSU2_TR(0x50731f);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507322:{NFSU2_TR(0x507322);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507325:{NFSU2_TR(0x507325);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507328:{NFSU2_TR(0x507328);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50732b:{NFSU2_TR(0x50732b);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50732e:{NFSU2_TR(0x50732e);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507331:{NFSU2_TR(0x507331);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507338:{NFSU2_TR(0x507338);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50733a:{NFSU2_TR(0x50733a);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50733d:{NFSU2_TR(0x50733d);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507344:{NFSU2_TR(0x507344);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507346:{NFSU2_TR(0x507346);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507348:{NFSU2_TR(0x507348);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50734d:{NFSU2_TR(0x50734d);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507351:{NFSU2_TR(0x507351);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507353:{NFSU2_TR(0x507353);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507357:{NFSU2_TR(0x507357);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50735e:{NFSU2_TR(0x50735e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507360:{NFSU2_TR(0x507360);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507364:{NFSU2_TR(0x507364);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50736b:{NFSU2_TR(0x50736b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50736f:{NFSU2_TR(0x50736f);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507372:{NFSU2_TR(0x507372);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507376:{NFSU2_TR(0x507376);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507379:{NFSU2_TR(0x507379);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50737d:{NFSU2_TR(0x50737d);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507380:{NFSU2_TR(0x507380);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507387:{NFSU2_TR(0x507387);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50738e:{NFSU2_TR(0x50738e);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B507390:{NFSU2_TR(0x507390);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507393:{NFSU2_TR(0x507393);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507396:{NFSU2_TR(0x507396);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50739d:{NFSU2_TR(0x50739d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5073a4:{NFSU2_TR(0x5073a4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5073a6:{NFSU2_TR(0x5073a6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5073a9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5073a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5073a9:L5073a9:{bud-=5;NFSU2_TR(0x5073a9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5073aa:{NFSU2_TR(0x5073aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5073ad:{NFSU2_TR(0x5073ad);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B5073b0:{NFSU2_TR(0x5073b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5073b4:{NFSU2_TR(0x5073b4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_5073b7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5073b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5073b7:L5073b7:{bud-=6;NFSU2_TR(0x5073b7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5073ba:{NFSU2_TR(0x5073ba);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5073bd:{NFSU2_TR(0x5073bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5073bf:{NFSU2_TR(0x5073bf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B5073c3:{NFSU2_TR(0x5073c3);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5073c6:{NFSU2_TR(0x5073c6);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_507531(ARGS);}}
}
B5073cc:L5073cc:{bud-=2;NFSU2_TR(0x5073cc);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5073ce:{NFSU2_TR(0x5073ce);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5074eb(ARGS);}}
}
B5073d4:L5073d4:{bud-=92;NFSU2_TR(0x5073d4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5073d7:{NFSU2_TR(0x5073d7);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5073da:{NFSU2_TR(0x5073da);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5073dd:{NFSU2_TR(0x5073dd);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5073e0:{NFSU2_TR(0x5073e0);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5073e3:{NFSU2_TR(0x5073e3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5073e5:{NFSU2_TR(0x5073e5);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5073ec:{NFSU2_TR(0x5073ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5073f3:{NFSU2_TR(0x5073f3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5073f5:{NFSU2_TR(0x5073f5);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5073f7:{NFSU2_TR(0x5073f7);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5073fa:{NFSU2_TR(0x5073fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5073fe:{NFSU2_TR(0x5073fe);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507401:{NFSU2_TR(0x507401);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507404:{NFSU2_TR(0x507404);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507407:{NFSU2_TR(0x507407);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507409:{NFSU2_TR(0x507409);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50740b:{NFSU2_TR(0x50740b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50740d:{NFSU2_TR(0x50740d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50740f:{NFSU2_TR(0x50740f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507411:{NFSU2_TR(0x507411);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507414:{NFSU2_TR(0x507414);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507417:{NFSU2_TR(0x507417);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507419:{NFSU2_TR(0x507419);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50741c:{NFSU2_TR(0x50741c);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50741f:{NFSU2_TR(0x50741f);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507422:{NFSU2_TR(0x507422);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507424:{NFSU2_TR(0x507424);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507426:{NFSU2_TR(0x507426);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507429:{NFSU2_TR(0x507429);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50742b:{NFSU2_TR(0x50742b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50742d:{NFSU2_TR(0x50742d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507430:{NFSU2_TR(0x507430);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507433:{NFSU2_TR(0x507433);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507436:{NFSU2_TR(0x507436);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507439:{NFSU2_TR(0x507439);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50743c:{NFSU2_TR(0x50743c);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50743f:{NFSU2_TR(0x50743f);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507442:{NFSU2_TR(0x507442);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507444:{NFSU2_TR(0x507444);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507446:{NFSU2_TR(0x507446);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507448:{NFSU2_TR(0x507448);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50744c:{NFSU2_TR(0x50744c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50744e:{NFSU2_TR(0x50744e);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507452:{NFSU2_TR(0x507452);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507456:{NFSU2_TR(0x507456);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507459:{NFSU2_TR(0x507459);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50745d:{NFSU2_TR(0x50745d);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50745f:{NFSU2_TR(0x50745f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507462:{NFSU2_TR(0x507462);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507464:{NFSU2_TR(0x507464);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507467:{NFSU2_TR(0x507467);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50746b:{NFSU2_TR(0x50746b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50746f:{NFSU2_TR(0x50746f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507472:{NFSU2_TR(0x507472);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507475:{NFSU2_TR(0x507475);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507478:{NFSU2_TR(0x507478);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50747b:{NFSU2_TR(0x50747b);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50747e:{NFSU2_TR(0x50747e);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507481:{NFSU2_TR(0x507481);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507485:{NFSU2_TR(0x507485);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507488:{NFSU2_TR(0x507488);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50748a:{NFSU2_TR(0x50748a);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50748e:{NFSU2_TR(0x50748e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507490:{NFSU2_TR(0x507490);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B507491:{NFSU2_TR(0x507491);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507493:{NFSU2_TR(0x507493);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B507496:{NFSU2_TR(0x507496);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507499:{NFSU2_TR(0x507499);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50749e:{NFSU2_TR(0x50749e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074a2:{NFSU2_TR(0x5074a2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5074a4:{NFSU2_TR(0x5074a4);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074a8:{NFSU2_TR(0x5074a8);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074ac:{NFSU2_TR(0x5074ac);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5074ae:{NFSU2_TR(0x5074ae);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074b2:{NFSU2_TR(0x5074b2);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5074b6:{NFSU2_TR(0x5074b6);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074ba:{NFSU2_TR(0x5074ba);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5074bd:{NFSU2_TR(0x5074bd);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074c1:{NFSU2_TR(0x5074c1);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5074c4:{NFSU2_TR(0x5074c4);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074c8:{NFSU2_TR(0x5074c8);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5074cb:{NFSU2_TR(0x5074cb);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074cf:{NFSU2_TR(0x5074cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5074d3:{NFSU2_TR(0x5074d3);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5074d5:{NFSU2_TR(0x5074d5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5074d7:{NFSU2_TR(0x5074d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5074da:{NFSU2_TR(0x5074da);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074de:{NFSU2_TR(0x5074de);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5074e2:{NFSU2_TR(0x5074e2);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074e5:{NFSU2_TR(0x5074e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5074e8:{NFSU2_TR(0x5074e8);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5074eb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5074eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5074eb:L5074eb:{bud-=23;NFSU2_TR(0x5074eb);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074ee:{NFSU2_TR(0x5074ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5074f1:{NFSU2_TR(0x5074f1);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5074f4:{NFSU2_TR(0x5074f4);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B5074f6:{NFSU2_TR(0x5074f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5074fa:{NFSU2_TR(0x5074fa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5074fc:{NFSU2_TR(0x5074fc);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5074ff:{NFSU2_TR(0x5074ff);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507502:{NFSU2_TR(0x507502);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507505:{NFSU2_TR(0x507505);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507508:{NFSU2_TR(0x507508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50750b:{NFSU2_TR(0x50750b);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50750e:{NFSU2_TR(0x50750e);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507512:{NFSU2_TR(0x507512);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507515:{NFSU2_TR(0x507515);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507518:{NFSU2_TR(0x507518);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50751c:{NFSU2_TR(0x50751c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50751f:{NFSU2_TR(0x50751f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507522:{NFSU2_TR(0x507522);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507524:{NFSU2_TR(0x507524);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507526:{NFSU2_TR(0x507526);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507529:{NFSU2_TR(0x507529);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50752c:{NFSU2_TR(0x50752c);
{[[clang::musttail]] return blk_50765d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507531(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507531:L507531:{bud-=2;NFSU2_TR(0x507531);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507533:{NFSU2_TR(0x507533);
if(r1(F+6)){{[[clang::musttail]] return blk_50766b(ARGS);}}
}
B507539:L507539:{bud-=88;NFSU2_TR(0x507539);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50753c:{NFSU2_TR(0x50753c);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50753f:{NFSU2_TR(0x50753f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507542:{NFSU2_TR(0x507542);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507545:{NFSU2_TR(0x507545);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507548:{NFSU2_TR(0x507548);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50754a:{NFSU2_TR(0x50754a);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507551:{NFSU2_TR(0x507551);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507558:{NFSU2_TR(0x507558);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50755a:{NFSU2_TR(0x50755a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50755c:{NFSU2_TR(0x50755c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50755f:{NFSU2_TR(0x50755f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507563:{NFSU2_TR(0x507563);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507566:{NFSU2_TR(0x507566);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507569:{NFSU2_TR(0x507569);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50756c:{NFSU2_TR(0x50756c);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50756e:{NFSU2_TR(0x50756e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507570:{NFSU2_TR(0x507570);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507572:{NFSU2_TR(0x507572);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507574:{NFSU2_TR(0x507574);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507576:{NFSU2_TR(0x507576);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507579:{NFSU2_TR(0x507579);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50757c:{NFSU2_TR(0x50757c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50757e:{NFSU2_TR(0x50757e);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507581:{NFSU2_TR(0x507581);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507584:{NFSU2_TR(0x507584);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507587:{NFSU2_TR(0x507587);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507589:{NFSU2_TR(0x507589);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50758b:{NFSU2_TR(0x50758b);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50758e:{NFSU2_TR(0x50758e);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507590:{NFSU2_TR(0x507590);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507592:{NFSU2_TR(0x507592);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507595:{NFSU2_TR(0x507595);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507598:{NFSU2_TR(0x507598);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50759b:{NFSU2_TR(0x50759b);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50759e:{NFSU2_TR(0x50759e);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075a1:{NFSU2_TR(0x5075a1);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075a4:{NFSU2_TR(0x5075a4);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075a7:{NFSU2_TR(0x5075a7);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075a9:{NFSU2_TR(0x5075a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5075ab:{NFSU2_TR(0x5075ab);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5075ad:{NFSU2_TR(0x5075ad);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075b1:{NFSU2_TR(0x5075b1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5075b3:{NFSU2_TR(0x5075b3);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075b7:{NFSU2_TR(0x5075b7);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075bb:{NFSU2_TR(0x5075bb);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5075be:{NFSU2_TR(0x5075be);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075c2:{NFSU2_TR(0x5075c2);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5075c4:{NFSU2_TR(0x5075c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5075c7:{NFSU2_TR(0x5075c7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5075c9:{NFSU2_TR(0x5075c9);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075cc:{NFSU2_TR(0x5075cc);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075d0:{NFSU2_TR(0x5075d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5075d4:{NFSU2_TR(0x5075d4);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075d7:{NFSU2_TR(0x5075d7);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075da:{NFSU2_TR(0x5075da);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075dd:{NFSU2_TR(0x5075dd);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075e0:{NFSU2_TR(0x5075e0);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075e3:{NFSU2_TR(0x5075e3);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075e6:{NFSU2_TR(0x5075e6);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075ed:{NFSU2_TR(0x5075ed);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5075f0:{NFSU2_TR(0x5075f0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5075f2:{NFSU2_TR(0x5075f2);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5075f9:{NFSU2_TR(0x5075f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5075fb:{NFSU2_TR(0x5075fb);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507600:{NFSU2_TR(0x507600);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507602:{NFSU2_TR(0x507602);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507606:{NFSU2_TR(0x507606);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507608:{NFSU2_TR(0x507608);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50760c:{NFSU2_TR(0x50760c);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507613:{NFSU2_TR(0x507613);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507615:{NFSU2_TR(0x507615);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507619:{NFSU2_TR(0x507619);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507620:{NFSU2_TR(0x507620);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507624:{NFSU2_TR(0x507624);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507627:{NFSU2_TR(0x507627);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50762b:{NFSU2_TR(0x50762b);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50762e:{NFSU2_TR(0x50762e);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507632:{NFSU2_TR(0x507632);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507635:{NFSU2_TR(0x507635);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50763c:{NFSU2_TR(0x50763c);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507643:{NFSU2_TR(0x507643);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B507645:{NFSU2_TR(0x507645);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507647:{NFSU2_TR(0x507647);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50764a:{NFSU2_TR(0x50764a);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507651:{NFSU2_TR(0x507651);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507658:{NFSU2_TR(0x507658);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50765a:{NFSU2_TR(0x50765a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_50765d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50765d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50765d:L50765d:{bud-=5;NFSU2_TR(0x50765d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50765e:{NFSU2_TR(0x50765e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507661:{NFSU2_TR(0x507661);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B507664:{NFSU2_TR(0x507664);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507668:{NFSU2_TR(0x507668);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_50766b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50766b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50766b:L50766b:{bud-=6;NFSU2_TR(0x50766b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50766e:{NFSU2_TR(0x50766e);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B507671:{NFSU2_TR(0x507671);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B507673:{NFSU2_TR(0x507673);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B507677:{NFSU2_TR(0x507677);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50767a:{NFSU2_TR(0x50767a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5077e7(ARGS);}}
}
B507680:L507680:{bud-=2;NFSU2_TR(0x507680);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507682:{NFSU2_TR(0x507682);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5077a1(ARGS);}}
}
B507688:L507688:{bud-=91;NFSU2_TR(0x507688);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50768b:{NFSU2_TR(0x50768b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50768e:{NFSU2_TR(0x50768e);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507691:{NFSU2_TR(0x507691);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507694:{NFSU2_TR(0x507694);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507697:{NFSU2_TR(0x507697);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50769a:{NFSU2_TR(0x50769a);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076a1:{NFSU2_TR(0x5076a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5076a8:{NFSU2_TR(0x5076a8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5076aa:{NFSU2_TR(0x5076aa);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076ac:{NFSU2_TR(0x5076ac);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5076af:{NFSU2_TR(0x5076af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5076b3:{NFSU2_TR(0x5076b3);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076b6:{NFSU2_TR(0x5076b6);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076b9:{NFSU2_TR(0x5076b9);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5076bc:{NFSU2_TR(0x5076bc);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5076be:{NFSU2_TR(0x5076be);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5076c0:{NFSU2_TR(0x5076c0);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5076c2:{NFSU2_TR(0x5076c2);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076c4:{NFSU2_TR(0x5076c4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5076c6:{NFSU2_TR(0x5076c6);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5076c9:{NFSU2_TR(0x5076c9);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076cc:{NFSU2_TR(0x5076cc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5076ce:{NFSU2_TR(0x5076ce);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5076d1:{NFSU2_TR(0x5076d1);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076d4:{NFSU2_TR(0x5076d4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076d7:{NFSU2_TR(0x5076d7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076da:{NFSU2_TR(0x5076da);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076dd:{NFSU2_TR(0x5076dd);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5076df:{NFSU2_TR(0x5076df);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076e1:{NFSU2_TR(0x5076e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5076e3:{NFSU2_TR(0x5076e3);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5076e6:{NFSU2_TR(0x5076e6);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076e9:{NFSU2_TR(0x5076e9);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5076ec:{NFSU2_TR(0x5076ec);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5076ef:{NFSU2_TR(0x5076ef);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076f2:{NFSU2_TR(0x5076f2);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5076f5:{NFSU2_TR(0x5076f5);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5076f8:{NFSU2_TR(0x5076f8);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5076fb:{NFSU2_TR(0x5076fb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5076fd:{NFSU2_TR(0x5076fd);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5076ff:{NFSU2_TR(0x5076ff);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507703:{NFSU2_TR(0x507703);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507705:{NFSU2_TR(0x507705);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507709:{NFSU2_TR(0x507709);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50770d:{NFSU2_TR(0x50770d);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507710:{NFSU2_TR(0x507710);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507714:{NFSU2_TR(0x507714);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507717:{NFSU2_TR(0x507717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50771a:{NFSU2_TR(0x50771a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50771c:{NFSU2_TR(0x50771c);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50771f:{NFSU2_TR(0x50771f);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507723:{NFSU2_TR(0x507723);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507726:{NFSU2_TR(0x507726);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507729:{NFSU2_TR(0x507729);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50772c:{NFSU2_TR(0x50772c);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50772f:{NFSU2_TR(0x50772f);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507732:{NFSU2_TR(0x507732);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507735:{NFSU2_TR(0x507735);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507739:{NFSU2_TR(0x507739);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50773c:{NFSU2_TR(0x50773c);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50773f:{NFSU2_TR(0x50773f);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507743:{NFSU2_TR(0x507743);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B507744:{NFSU2_TR(0x507744);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507746:{NFSU2_TR(0x507746);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B507749:{NFSU2_TR(0x507749);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50774b:{NFSU2_TR(0x50774b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50774e:{NFSU2_TR(0x50774e);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507753:{NFSU2_TR(0x507753);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507757:{NFSU2_TR(0x507757);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507759:{NFSU2_TR(0x507759);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50775d:{NFSU2_TR(0x50775d);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507761:{NFSU2_TR(0x507761);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507763:{NFSU2_TR(0x507763);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507767:{NFSU2_TR(0x507767);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50776b:{NFSU2_TR(0x50776b);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50776f:{NFSU2_TR(0x50776f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507772:{NFSU2_TR(0x507772);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507776:{NFSU2_TR(0x507776);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507779:{NFSU2_TR(0x507779);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50777d:{NFSU2_TR(0x50777d);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507780:{NFSU2_TR(0x507780);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507784:{NFSU2_TR(0x507784);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507788:{NFSU2_TR(0x507788);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50778a:{NFSU2_TR(0x50778a);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50778d:{NFSU2_TR(0x50778d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507790:{NFSU2_TR(0x507790);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507794:{NFSU2_TR(0x507794);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507798:{NFSU2_TR(0x507798);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50779b:{NFSU2_TR(0x50779b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50779e:{NFSU2_TR(0x50779e);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5077a1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5077a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5077a1:L5077a1:{bud-=23;NFSU2_TR(0x5077a1);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077a4:{NFSU2_TR(0x5077a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5077a7:{NFSU2_TR(0x5077a7);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077aa:{NFSU2_TR(0x5077aa);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B5077ac:{NFSU2_TR(0x5077ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5077b0:{NFSU2_TR(0x5077b0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5077b2:{NFSU2_TR(0x5077b2);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077b5:{NFSU2_TR(0x5077b5);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077b8:{NFSU2_TR(0x5077b8);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077bb:{NFSU2_TR(0x5077bb);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077be:{NFSU2_TR(0x5077be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5077c1:{NFSU2_TR(0x5077c1);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077c4:{NFSU2_TR(0x5077c4);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077c8:{NFSU2_TR(0x5077c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5077cb:{NFSU2_TR(0x5077cb);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077ce:{NFSU2_TR(0x5077ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5077d2:{NFSU2_TR(0x5077d2);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077d5:{NFSU2_TR(0x5077d5);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077d8:{NFSU2_TR(0x5077d8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077da:{NFSU2_TR(0x5077da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5077dc:{NFSU2_TR(0x5077dc);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077df:{NFSU2_TR(0x5077df);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5077e2:{NFSU2_TR(0x5077e2);
{[[clang::musttail]] return blk_507915(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5077e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5077e7:L5077e7:{bud-=2;NFSU2_TR(0x5077e7);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5077e9:{NFSU2_TR(0x5077e9);
if(r1(F+6)){{[[clang::musttail]] return blk_507923(ARGS);}}
}
B5077ef:L5077ef:{bud-=87;NFSU2_TR(0x5077ef);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077f2:{NFSU2_TR(0x5077f2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5077f5:{NFSU2_TR(0x5077f5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077f8:{NFSU2_TR(0x5077f8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5077fb:{NFSU2_TR(0x5077fb);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5077fe:{NFSU2_TR(0x5077fe);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507801:{NFSU2_TR(0x507801);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507808:{NFSU2_TR(0x507808);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50780f:{NFSU2_TR(0x50780f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507811:{NFSU2_TR(0x507811);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507813:{NFSU2_TR(0x507813);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507816:{NFSU2_TR(0x507816);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50781a:{NFSU2_TR(0x50781a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50781d:{NFSU2_TR(0x50781d);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507820:{NFSU2_TR(0x507820);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507823:{NFSU2_TR(0x507823);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507825:{NFSU2_TR(0x507825);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507827:{NFSU2_TR(0x507827);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507829:{NFSU2_TR(0x507829);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50782b:{NFSU2_TR(0x50782b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50782d:{NFSU2_TR(0x50782d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507830:{NFSU2_TR(0x507830);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507833:{NFSU2_TR(0x507833);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507835:{NFSU2_TR(0x507835);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507838:{NFSU2_TR(0x507838);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50783b:{NFSU2_TR(0x50783b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50783e:{NFSU2_TR(0x50783e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507841:{NFSU2_TR(0x507841);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507844:{NFSU2_TR(0x507844);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507846:{NFSU2_TR(0x507846);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507848:{NFSU2_TR(0x507848);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50784a:{NFSU2_TR(0x50784a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50784d:{NFSU2_TR(0x50784d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507850:{NFSU2_TR(0x507850);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507853:{NFSU2_TR(0x507853);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507856:{NFSU2_TR(0x507856);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507859:{NFSU2_TR(0x507859);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50785c:{NFSU2_TR(0x50785c);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50785f:{NFSU2_TR(0x50785f);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507862:{NFSU2_TR(0x507862);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507864:{NFSU2_TR(0x507864);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507866:{NFSU2_TR(0x507866);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50786a:{NFSU2_TR(0x50786a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50786c:{NFSU2_TR(0x50786c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507870:{NFSU2_TR(0x507870);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507874:{NFSU2_TR(0x507874);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507877:{NFSU2_TR(0x507877);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50787b:{NFSU2_TR(0x50787b);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50787e:{NFSU2_TR(0x50787e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507881:{NFSU2_TR(0x507881);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507883:{NFSU2_TR(0x507883);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507886:{NFSU2_TR(0x507886);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50788a:{NFSU2_TR(0x50788a);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50788d:{NFSU2_TR(0x50788d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507890:{NFSU2_TR(0x507890);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507893:{NFSU2_TR(0x507893);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507896:{NFSU2_TR(0x507896);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507899:{NFSU2_TR(0x507899);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50789c:{NFSU2_TR(0x50789c);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078a3:{NFSU2_TR(0x5078a3);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078a6:{NFSU2_TR(0x5078a6);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5078a9:{NFSU2_TR(0x5078a9);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078b0:{NFSU2_TR(0x5078b0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5078b5:{NFSU2_TR(0x5078b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5078b7:{NFSU2_TR(0x5078b7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5078b9:{NFSU2_TR(0x5078b9);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078bd:{NFSU2_TR(0x5078bd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5078bf:{NFSU2_TR(0x5078bf);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078c3:{NFSU2_TR(0x5078c3);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078ca:{NFSU2_TR(0x5078ca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5078cc:{NFSU2_TR(0x5078cc);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078d0:{NFSU2_TR(0x5078d0);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5078d7:{NFSU2_TR(0x5078d7);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078db:{NFSU2_TR(0x5078db);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5078de:{NFSU2_TR(0x5078de);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078e2:{NFSU2_TR(0x5078e2);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5078e5:{NFSU2_TR(0x5078e5);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5078e9:{NFSU2_TR(0x5078e9);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5078ec:{NFSU2_TR(0x5078ec);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5078f3:{NFSU2_TR(0x5078f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5078fa:{NFSU2_TR(0x5078fa);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5078fc:{NFSU2_TR(0x5078fc);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5078ff:{NFSU2_TR(0x5078ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507902:{NFSU2_TR(0x507902);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507909:{NFSU2_TR(0x507909);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507910:{NFSU2_TR(0x507910);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507912:{NFSU2_TR(0x507912);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_507915(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507915(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507915:L507915:{bud-=5;NFSU2_TR(0x507915);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B507916:{NFSU2_TR(0x507916);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507919:{NFSU2_TR(0x507919);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50791c:{NFSU2_TR(0x50791c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507920:{NFSU2_TR(0x507920);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_507923(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507923(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507923:L507923:{bud-=22;NFSU2_TR(0x507923);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507927:{NFSU2_TR(0x507927);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50792e:{NFSU2_TR(0x50792e);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507935:{NFSU2_TR(0x507935);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507939:{NFSU2_TR(0x507939);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+0))));
}
B50793b:{NFSU2_TR(0x50793b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50793f:{NFSU2_TR(0x50793f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507946:{NFSU2_TR(0x507946);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B507948:{NFSU2_TR(0x507948);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50794c:{NFSU2_TR(0x50794c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507950:{NFSU2_TR(0x507950);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
}
B507953:{NFSU2_TR(0x507953);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B507956:{NFSU2_TR(0x507956);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50795a:{NFSU2_TR(0x50795a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50795e:{NFSU2_TR(0x50795e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507962:{NFSU2_TR(0x507962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507965:{NFSU2_TR(0x507965);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
}
B507968:{NFSU2_TR(0x507968);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B50796b:{NFSU2_TR(0x50796b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B50796e:{NFSU2_TR(0x50796e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
}
B507970:{NFSU2_TR(0x507970);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507974:{NFSU2_TR(0x507974);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x506dbbu);}[[clang::musttail]] return blk_506dbb(ARGS);}}
}
B50797a:L50797a:{bud-=4;NFSU2_TR(0x50797a);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507981:{NFSU2_TR(0x507981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507984:{NFSU2_TR(0x507984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507987:{NFSU2_TR(0x507987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_50798a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50798a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50798a:L50798a:{bud-=3;NFSU2_TR(0x50798a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B50798e:{NFSU2_TR(0x50798e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(G+4))<(r4(U+14))));
w1(F+11,sborrow<u32>(r4(G+4),r4(U+14)));
w4(U+18,u32(u32(r4(G+4))-u32(r4(U+14))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B507991:{NFSU2_TR(0x507991);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_507d71(ARGS);}}
}
B507997:L507997:{bud-=25;NFSU2_TR(0x507997);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B50799e:{NFSU2_TR(0x50799e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079a2:{NFSU2_TR(0x5079a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5079a6:{NFSU2_TR(0x5079a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B5079a9:{NFSU2_TR(0x5079a9);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B5079ab:{NFSU2_TR(0x5079ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079af:{NFSU2_TR(0x5079af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5079b2:{NFSU2_TR(0x5079b2);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B5079b4:{NFSU2_TR(0x5079b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5079b8:{NFSU2_TR(0x5079b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B5079bb:{NFSU2_TR(0x5079bb);
__builtin_memmove((R+8),(R+28),4);
}
B5079bd:{NFSU2_TR(0x5079bd);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5079c1:{NFSU2_TR(0x5079c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079c5:{NFSU2_TR(0x5079c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5079c8:{NFSU2_TR(0x5079c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B5079cc:{NFSU2_TR(0x5079cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079d0:{NFSU2_TR(0x5079d0);
__builtin_memmove((G+0),(R+12),4);
}
B5079d2:{NFSU2_TR(0x5079d2);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+28))));
}
B5079d4:{NFSU2_TR(0x5079d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079d8:{NFSU2_TR(0x5079d8);
w4(G+0,u32(0xfffffff8ull));
}
B5079dd:{NFSU2_TR(0x5079dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5079e0:{NFSU2_TR(0x5079e0);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+28))));
}
B5079e2:{NFSU2_TR(0x5079e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5079e6:{NFSU2_TR(0x5079e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5079ed:{NFSU2_TR(0x5079ed);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_5079f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5079f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5079f0:L5079f0:{bud-=7;NFSU2_TR(0x5079f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5079f4:{NFSU2_TR(0x5079f4);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5079f7:{NFSU2_TR(0x5079f7);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5079fa:{NFSU2_TR(0x5079fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5079fc:{NFSU2_TR(0x5079fc);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B507a00:{NFSU2_TR(0x507a00);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507a03:{NFSU2_TR(0x507a03);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_507bc4(ARGS);}}
}
B507a09:L507a09:{bud-=2;NFSU2_TR(0x507a09);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507a0b:{NFSU2_TR(0x507a0b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_507b65(ARGS);}}
}
B507a11:L507a11:{bud-=105;NFSU2_TR(0x507a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507a14:{NFSU2_TR(0x507a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507a18:{NFSU2_TR(0x507a18);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a1b:{NFSU2_TR(0x507a1b);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a1e:{NFSU2_TR(0x507a1e);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a21:{NFSU2_TR(0x507a21);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a25:{NFSU2_TR(0x507a25);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a29:{NFSU2_TR(0x507a29);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507a2b:{NFSU2_TR(0x507a2b);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a32:{NFSU2_TR(0x507a32);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507a39:{NFSU2_TR(0x507a39);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507a3b:{NFSU2_TR(0x507a3b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a3d:{NFSU2_TR(0x507a3d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507a40:{NFSU2_TR(0x507a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507a44:{NFSU2_TR(0x507a44);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a47:{NFSU2_TR(0x507a47);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a4a:{NFSU2_TR(0x507a4a);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a4d:{NFSU2_TR(0x507a4d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507a4f:{NFSU2_TR(0x507a4f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507a51:{NFSU2_TR(0x507a51);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507a53:{NFSU2_TR(0x507a53);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a55:{NFSU2_TR(0x507a55);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507a57:{NFSU2_TR(0x507a57);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507a5a:{NFSU2_TR(0x507a5a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a5d:{NFSU2_TR(0x507a5d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507a5f:{NFSU2_TR(0x507a5f);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507a62:{NFSU2_TR(0x507a62);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a65:{NFSU2_TR(0x507a65);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a69:{NFSU2_TR(0x507a69);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a6d:{NFSU2_TR(0x507a6d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a6f:{NFSU2_TR(0x507a6f);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507a72:{NFSU2_TR(0x507a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507a76:{NFSU2_TR(0x507a76);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a78:{NFSU2_TR(0x507a78);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507a7a:{NFSU2_TR(0x507a7a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507a7d:{NFSU2_TR(0x507a7d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a80:{NFSU2_TR(0x507a80);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507a83:{NFSU2_TR(0x507a83);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a86:{NFSU2_TR(0x507a86);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a89:{NFSU2_TR(0x507a89);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a8c:{NFSU2_TR(0x507a8c);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507a90:{NFSU2_TR(0x507a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507a93:{NFSU2_TR(0x507a93);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507a97:{NFSU2_TR(0x507a97);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507a99:{NFSU2_TR(0x507a99);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507a9b:{NFSU2_TR(0x507a9b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507a9f:{NFSU2_TR(0x507a9f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507aa1:{NFSU2_TR(0x507aa1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507aa5:{NFSU2_TR(0x507aa5);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507aa9:{NFSU2_TR(0x507aa9);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507aac:{NFSU2_TR(0x507aac);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ab0:{NFSU2_TR(0x507ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507ab4:{NFSU2_TR(0x507ab4);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507ab8:{NFSU2_TR(0x507ab8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507aba:{NFSU2_TR(0x507aba);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507abd:{NFSU2_TR(0x507abd);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ac1:{NFSU2_TR(0x507ac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507ac5:{NFSU2_TR(0x507ac5);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ac8:{NFSU2_TR(0x507ac8);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507acb:{NFSU2_TR(0x507acb);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ace:{NFSU2_TR(0x507ace);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ad2:{NFSU2_TR(0x507ad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507ad6:{NFSU2_TR(0x507ad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507ada:{NFSU2_TR(0x507ada);
{u32 ea_=u32(r4(R+28)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507add:{NFSU2_TR(0x507add);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507ae1:{NFSU2_TR(0x507ae1);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ae5:{NFSU2_TR(0x507ae5);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B507ae8:{NFSU2_TR(0x507ae8);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507aec:{NFSU2_TR(0x507aec);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507af0:{NFSU2_TR(0x507af0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507af5:{NFSU2_TR(0x507af5);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507af7:{NFSU2_TR(0x507af7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507afb:{NFSU2_TR(0x507afb);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507aff:{NFSU2_TR(0x507aff);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507b01:{NFSU2_TR(0x507b01);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507b03:{NFSU2_TR(0x507b03);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b07:{NFSU2_TR(0x507b07);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507b09:{NFSU2_TR(0x507b09);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b0d:{NFSU2_TR(0x507b0d);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b11:{NFSU2_TR(0x507b11);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507b13:{NFSU2_TR(0x507b13);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b17:{NFSU2_TR(0x507b17);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507b1b:{NFSU2_TR(0x507b1b);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b1f:{NFSU2_TR(0x507b1f);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507b22:{NFSU2_TR(0x507b22);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b26:{NFSU2_TR(0x507b26);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507b2a:{NFSU2_TR(0x507b2a);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b2e:{NFSU2_TR(0x507b2e);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507b32:{NFSU2_TR(0x507b32);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b36:{NFSU2_TR(0x507b36);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b3a:{NFSU2_TR(0x507b3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b3e:{NFSU2_TR(0x507b3e);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B507b40:{NFSU2_TR(0x507b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507b43:{NFSU2_TR(0x507b43);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b47:{NFSU2_TR(0x507b47);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b4b:{NFSU2_TR(0x507b4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507b4d:{NFSU2_TR(0x507b4d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b4f:{NFSU2_TR(0x507b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507b52:{NFSU2_TR(0x507b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b56:{NFSU2_TR(0x507b56);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b59:{NFSU2_TR(0x507b59);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B507b5a:{NFSU2_TR(0x507b5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507b5e:{NFSU2_TR(0x507b5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B507b60:{NFSU2_TR(0x507b60);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507b63:{NFSU2_TR(0x507b63);
{[[clang::musttail]] return blk_507b69(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507b65(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507b65:L507b65:{bud-=1;NFSU2_TR(0x507b65);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_507b69(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507b69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507b69:L507b69:{bud-=29;NFSU2_TR(0x507b69);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b6c:{NFSU2_TR(0x507b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b6f:{NFSU2_TR(0x507b6f);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b71:{NFSU2_TR(0x507b71);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507b74:{NFSU2_TR(0x507b74);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B507b76:{NFSU2_TR(0x507b76);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507b78:{NFSU2_TR(0x507b78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507b7c:{NFSU2_TR(0x507b7c);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b7f:{NFSU2_TR(0x507b7f);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b82:{NFSU2_TR(0x507b82);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b86:{NFSU2_TR(0x507b86);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b89:{NFSU2_TR(0x507b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507b8d:{NFSU2_TR(0x507b8d);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b90:{NFSU2_TR(0x507b90);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507b94:{NFSU2_TR(0x507b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507b98:{NFSU2_TR(0x507b98);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507b9b:{NFSU2_TR(0x507b9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507b9f:{NFSU2_TR(0x507b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507ba3:{NFSU2_TR(0x507ba3);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ba6:{NFSU2_TR(0x507ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507baa:{NFSU2_TR(0x507baa);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507bad:{NFSU2_TR(0x507bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B507baf:{NFSU2_TR(0x507baf);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bb1:{NFSU2_TR(0x507bb1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507bb3:{NFSU2_TR(0x507bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507bb7:{NFSU2_TR(0x507bb7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bba:{NFSU2_TR(0x507bba);
__builtin_memmove((G+0),(R+8),4);
}
B507bbc:{NFSU2_TR(0x507bbc);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bbf:{NFSU2_TR(0x507bbf);
{[[clang::musttail]] return blk_507d24(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507bc4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507bc4:L507bc4:{bud-=2;NFSU2_TR(0x507bc4);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507bc6:{NFSU2_TR(0x507bc6);
if(r1(F+6)){{[[clang::musttail]] return blk_507d3a(ARGS);}}
}
B507bcc:L507bcc:{bud-=98;NFSU2_TR(0x507bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507bcf:{NFSU2_TR(0x507bcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507bd3:{NFSU2_TR(0x507bd3);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507bd6:{NFSU2_TR(0x507bd6);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507bd9:{NFSU2_TR(0x507bd9);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507bdc:{NFSU2_TR(0x507bdc);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507be0:{NFSU2_TR(0x507be0);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507be4:{NFSU2_TR(0x507be4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507be6:{NFSU2_TR(0x507be6);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bed:{NFSU2_TR(0x507bed);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507bf4:{NFSU2_TR(0x507bf4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507bf6:{NFSU2_TR(0x507bf6);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507bf8:{NFSU2_TR(0x507bf8);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507bfb:{NFSU2_TR(0x507bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507bff:{NFSU2_TR(0x507bff);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c02:{NFSU2_TR(0x507c02);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c05:{NFSU2_TR(0x507c05);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c08:{NFSU2_TR(0x507c08);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507c0a:{NFSU2_TR(0x507c0a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507c0c:{NFSU2_TR(0x507c0c);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507c0e:{NFSU2_TR(0x507c0e);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c10:{NFSU2_TR(0x507c10);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507c12:{NFSU2_TR(0x507c12);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507c15:{NFSU2_TR(0x507c15);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c18:{NFSU2_TR(0x507c18);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507c1a:{NFSU2_TR(0x507c1a);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507c1d:{NFSU2_TR(0x507c1d);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c20:{NFSU2_TR(0x507c20);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c24:{NFSU2_TR(0x507c24);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c28:{NFSU2_TR(0x507c28);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c2b:{NFSU2_TR(0x507c2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507c2f:{NFSU2_TR(0x507c2f);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c31:{NFSU2_TR(0x507c31);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c33:{NFSU2_TR(0x507c33);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507c35:{NFSU2_TR(0x507c35);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c38:{NFSU2_TR(0x507c38);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c3b:{NFSU2_TR(0x507c3b);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c3e:{NFSU2_TR(0x507c3e);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c41:{NFSU2_TR(0x507c41);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c44:{NFSU2_TR(0x507c44);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c47:{NFSU2_TR(0x507c47);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c4b:{NFSU2_TR(0x507c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507c4e:{NFSU2_TR(0x507c4e);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c52:{NFSU2_TR(0x507c52);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507c54:{NFSU2_TR(0x507c54);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507c56:{NFSU2_TR(0x507c56);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c5a:{NFSU2_TR(0x507c5a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507c5c:{NFSU2_TR(0x507c5c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c60:{NFSU2_TR(0x507c60);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c64:{NFSU2_TR(0x507c64);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c67:{NFSU2_TR(0x507c67);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c6b:{NFSU2_TR(0x507c6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507c6f:{NFSU2_TR(0x507c6f);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507c73:{NFSU2_TR(0x507c73);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507c75:{NFSU2_TR(0x507c75);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c78:{NFSU2_TR(0x507c78);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507c7c:{NFSU2_TR(0x507c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507c80:{NFSU2_TR(0x507c80);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c83:{NFSU2_TR(0x507c83);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c86:{NFSU2_TR(0x507c86);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c89:{NFSU2_TR(0x507c89);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507c8d:{NFSU2_TR(0x507c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507c91:{NFSU2_TR(0x507c91);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507c95:{NFSU2_TR(0x507c95);
{u32 ea_=u32(r4(G+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507c98:{NFSU2_TR(0x507c98);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507c9c:{NFSU2_TR(0x507c9c);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ca0:{NFSU2_TR(0x507ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507ca4:{NFSU2_TR(0x507ca4);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cab:{NFSU2_TR(0x507cab);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507caf:{NFSU2_TR(0x507caf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507cb4:{NFSU2_TR(0x507cb4);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507cb6:{NFSU2_TR(0x507cb6);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cbd:{NFSU2_TR(0x507cbd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507cbf:{NFSU2_TR(0x507cbf);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507cc1:{NFSU2_TR(0x507cc1);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cc5:{NFSU2_TR(0x507cc5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507cc7:{NFSU2_TR(0x507cc7);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ccb:{NFSU2_TR(0x507ccb);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507cd2:{NFSU2_TR(0x507cd2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507cd4:{NFSU2_TR(0x507cd4);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cd8:{NFSU2_TR(0x507cd8);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507cdf:{NFSU2_TR(0x507cdf);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ce3:{NFSU2_TR(0x507ce3);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507ce6:{NFSU2_TR(0x507ce6);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507cea:{NFSU2_TR(0x507cea);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507cee:{NFSU2_TR(0x507cee);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507cf2:{NFSU2_TR(0x507cf2);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507cf6:{NFSU2_TR(0x507cf6);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507cfd:{NFSU2_TR(0x507cfd);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507d01:{NFSU2_TR(0x507d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507d08:{NFSU2_TR(0x507d08);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B507d0a:{NFSU2_TR(0x507d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d0d:{NFSU2_TR(0x507d0d);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507d14:{NFSU2_TR(0x507d14);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507d1b:{NFSU2_TR(0x507d1b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507d1d:{NFSU2_TR(0x507d1d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507d1f:{NFSU2_TR(0x507d1f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507d22:{NFSU2_TR(0x507d22);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_507d24(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507d24(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507d24:L507d24:{bud-=7;NFSU2_TR(0x507d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d27:{NFSU2_TR(0x507d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507d2b:{NFSU2_TR(0x507d2b);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B507d2e:{NFSU2_TR(0x507d2e);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B507d2f:{NFSU2_TR(0x507d2f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507d32:{NFSU2_TR(0x507d32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d36:{NFSU2_TR(0x507d36);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_507d3a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507d3a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507d3a:L507d3a:{bud-=12;NFSU2_TR(0x507d3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507d3e:{NFSU2_TR(0x507d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B507d45:{NFSU2_TR(0x507d45);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507d4c:{NFSU2_TR(0x507d4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507d50:{NFSU2_TR(0x507d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507d54:{NFSU2_TR(0x507d54);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B507d56:{NFSU2_TR(0x507d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B507d5a:{NFSU2_TR(0x507d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B507d5f:{NFSU2_TR(0x507d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B507d64:{NFSU2_TR(0x507d64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507d68:{NFSU2_TR(0x507d68);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+14))));
w1(F+11,sborrow<u32>(r4(G+0),r4(U+14)));
w4(U+18,u32(u32(r4(G+0))-u32(r4(U+14))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B507d6b:{NFSU2_TR(0x507d6b);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5079f0u);}[[clang::musttail]] return blk_5079f0(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_507d71(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507d71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507d71:L507d71:{bud-=7;NFSU2_TR(0x507d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507d75:{NFSU2_TR(0x507d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B507d76:{NFSU2_TR(0x507d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B507d77:{NFSU2_TR(0x507d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B507d78:{NFSU2_TR(0x507d78);
__builtin_memmove((G+16),(R+20),4);
}
B507d7a:{NFSU2_TR(0x507d7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B507d7b:{NFSU2_TR(0x507d7b);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507d80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507d80:L507d80:{bud-=20;NFSU2_TR(0x507d80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B507d81:{NFSU2_TR(0x507d81);
__builtin_memmove((R+20),(G+16),4);
}
B507d83:{NFSU2_TR(0x507d83);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B507d86:{NFSU2_TR(0x507d86);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xd4ull))));
}
B507d8c:{NFSU2_TR(0x507d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507d8f:{NFSU2_TR(0x507d8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B507d90:{NFSU2_TR(0x507d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507d93:{NFSU2_TR(0x507d93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B507d94:{NFSU2_TR(0x507d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B507d97:{NFSU2_TR(0x507d97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B507d98:{NFSU2_TR(0x507d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B507d9b:{NFSU2_TR(0x507d9b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B507d9c:{NFSU2_TR(0x507d9c);
__builtin_memmove((G+4),(R+28),4);
}
B507d9e:{NFSU2_TR(0x507d9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B507da1:{NFSU2_TR(0x507da1);
{u32 ea_=u32(r4(R+8)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507da5:{NFSU2_TR(0x507da5);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B507da8:{NFSU2_TR(0x507da8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B507daa:{NFSU2_TR(0x507daa);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507dad:{NFSU2_TR(0x507dad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507db0:{NFSU2_TR(0x507db0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_507e0f(ARGS);}}
}
B507db2:L507db2:{bud-=28;NFSU2_TR(0x507db2);
{u32 ea_=u32(r4(R+8)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507db6:{NFSU2_TR(0x507db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507db9:{NFSU2_TR(0x507db9);
{u32 ea_=u32(r4(R+8)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507dbd:{NFSU2_TR(0x507dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B507dc0:{NFSU2_TR(0x507dc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B507dc2:{NFSU2_TR(0x507dc2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507dc4:{NFSU2_TR(0x507dc4);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507dc7:{NFSU2_TR(0x507dc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B507dcf:{NFSU2_TR(0x507dcf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507dd4:{NFSU2_TR(0x507dd4);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507dd7:{NFSU2_TR(0x507dd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B507dda:{NFSU2_TR(0x507dda);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507dde:{NFSU2_TR(0x507dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507de1:{NFSU2_TR(0x507de1);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507de4:{NFSU2_TR(0x507de4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B507de6:{NFSU2_TR(0x507de6);
{u32 ea_=u32(r4(R+12)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507dea:{NFSU2_TR(0x507dea);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B507ded:{NFSU2_TR(0x507ded);
{u32 ea_=u32(r4(R+12)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507df1:{NFSU2_TR(0x507df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507df4:{NFSU2_TR(0x507df4);
{u32 ea_=u32(r4(R+12)+r4(G+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507df8:{NFSU2_TR(0x507df8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B507dfa:{NFSU2_TR(0x507dfa);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507dfe:{NFSU2_TR(0x507dfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507e02:{NFSU2_TR(0x507e02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507e04:{NFSU2_TR(0x507e04);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507e07:{NFSU2_TR(0x507e07);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e0a:{NFSU2_TR(0x507e0a);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507e0d:{NFSU2_TR(0x507e0d);
{[[clang::musttail]] return blk_507e1c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507e0f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507e0f:L507e0f:{bud-=2;NFSU2_TR(0x507e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B507e17:{NFSU2_TR(0x507e17);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_507e1c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507e1c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507e1c:L507e1c:{bud-=3;NFSU2_TR(0x507e1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B507e20:{NFSU2_TR(0x507e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B507e28:{NFSU2_TR(0x507e28);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_508a66(ARGS);}}
}
B507e2e:L507e2e:{bud-=24;NFSU2_TR(0x507e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B507e31:{NFSU2_TR(0x507e31);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e35:{NFSU2_TR(0x507e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B507e3c:{NFSU2_TR(0x507e3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e40:{NFSU2_TR(0x507e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B507e44:{NFSU2_TR(0x507e44);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B507e47:{NFSU2_TR(0x507e47);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B507e4a:{NFSU2_TR(0x507e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507e4d:{NFSU2_TR(0x507e4d);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B507e4f:{NFSU2_TR(0x507e4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B507e52:{NFSU2_TR(0x507e52);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B507e54:{NFSU2_TR(0x507e54);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e58:{NFSU2_TR(0x507e58);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B507e5b:{NFSU2_TR(0x507e5b);
w4(R+12,u32(0x18ull));
}
B507e60:{NFSU2_TR(0x507e60);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B507e62:{NFSU2_TR(0x507e62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e66:{NFSU2_TR(0x507e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B507e69:{NFSU2_TR(0x507e69);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507e70:{NFSU2_TR(0x507e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507e73:{NFSU2_TR(0x507e73);
w4(G+0,u32(0xcull));
}
B507e78:{NFSU2_TR(0x507e78);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B507e7b:{NFSU2_TR(0x507e7b);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+12))));
}
B507e7d:{NFSU2_TR(0x507e7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B507e85:{NFSU2_TR(0x507e85);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_507e8c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507e8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507e8c:L507e8c:{bud-=6;NFSU2_TR(0x507e8c);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507e8f:{NFSU2_TR(0x507e8f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B507e92:{NFSU2_TR(0x507e92);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B507e94:{NFSU2_TR(0x507e94);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B507e98:{NFSU2_TR(0x507e98);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507e9b:{NFSU2_TR(0x507e9b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_508057(ARGS);}}
}
B507ea1:L507ea1:{bud-=2;NFSU2_TR(0x507ea1);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B507ea3:{NFSU2_TR(0x507ea3);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_507ffc(ARGS);}}
}
B507ea9:L507ea9:{bud-=105;NFSU2_TR(0x507ea9);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507eac:{NFSU2_TR(0x507eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507eb0:{NFSU2_TR(0x507eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507eb3:{NFSU2_TR(0x507eb3);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507eb6:{NFSU2_TR(0x507eb6);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507eba:{NFSU2_TR(0x507eba);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B507ebd:{NFSU2_TR(0x507ebd);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ec0:{NFSU2_TR(0x507ec0);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ec4:{NFSU2_TR(0x507ec4);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ecb:{NFSU2_TR(0x507ecb);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507ed2:{NFSU2_TR(0x507ed2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507ed4:{NFSU2_TR(0x507ed4);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ed6:{NFSU2_TR(0x507ed6);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507ed9:{NFSU2_TR(0x507ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507edc:{NFSU2_TR(0x507edc);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507edf:{NFSU2_TR(0x507edf);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507ee2:{NFSU2_TR(0x507ee2);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507ee6:{NFSU2_TR(0x507ee6);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B507ee9:{NFSU2_TR(0x507ee9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507eeb:{NFSU2_TR(0x507eeb);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507eed:{NFSU2_TR(0x507eed);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507eef:{NFSU2_TR(0x507eef);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507ef1:{NFSU2_TR(0x507ef1);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507ef4:{NFSU2_TR(0x507ef4);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ef7:{NFSU2_TR(0x507ef7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B507ef9:{NFSU2_TR(0x507ef9);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507efc:{NFSU2_TR(0x507efc);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507eff:{NFSU2_TR(0x507eff);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f03:{NFSU2_TR(0x507f03);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f07:{NFSU2_TR(0x507f07);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f09:{NFSU2_TR(0x507f09);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f0c:{NFSU2_TR(0x507f0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507f10:{NFSU2_TR(0x507f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f13:{NFSU2_TR(0x507f13);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f15:{NFSU2_TR(0x507f15);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507f17:{NFSU2_TR(0x507f17);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f1a:{NFSU2_TR(0x507f1a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f1d:{NFSU2_TR(0x507f1d);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f20:{NFSU2_TR(0x507f20);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f23:{NFSU2_TR(0x507f23);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f26:{NFSU2_TR(0x507f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507f2a:{NFSU2_TR(0x507f2a);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f2d:{NFSU2_TR(0x507f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f31:{NFSU2_TR(0x507f31);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f34:{NFSU2_TR(0x507f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f37:{NFSU2_TR(0x507f37);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f3b:{NFSU2_TR(0x507f3b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507f3d:{NFSU2_TR(0x507f3d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507f3f:{NFSU2_TR(0x507f3f);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f43:{NFSU2_TR(0x507f43);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507f45:{NFSU2_TR(0x507f45);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f49:{NFSU2_TR(0x507f49);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f4d:{NFSU2_TR(0x507f4d);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f50:{NFSU2_TR(0x507f50);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f54:{NFSU2_TR(0x507f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f57:{NFSU2_TR(0x507f57);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507f5b:{NFSU2_TR(0x507f5b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507f5f:{NFSU2_TR(0x507f5f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507f61:{NFSU2_TR(0x507f61);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f64:{NFSU2_TR(0x507f64);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f68:{NFSU2_TR(0x507f68);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507f6c:{NFSU2_TR(0x507f6c);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f6f:{NFSU2_TR(0x507f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507f72:{NFSU2_TR(0x507f72);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f75:{NFSU2_TR(0x507f75);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f78:{NFSU2_TR(0x507f78);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B507f7b:{NFSU2_TR(0x507f7b);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f7f:{NFSU2_TR(0x507f7f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f82:{NFSU2_TR(0x507f82);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f86:{NFSU2_TR(0x507f86);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f8a:{NFSU2_TR(0x507f8a);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507f8d:{NFSU2_TR(0x507f8d);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B507f91:{NFSU2_TR(0x507f91);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B507f96:{NFSU2_TR(0x507f96);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507f9a:{NFSU2_TR(0x507f9a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507f9c:{NFSU2_TR(0x507f9c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B507f9e:{NFSU2_TR(0x507f9e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fa2:{NFSU2_TR(0x507fa2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507fa4:{NFSU2_TR(0x507fa4);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fa8:{NFSU2_TR(0x507fa8);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fac:{NFSU2_TR(0x507fac);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B507fae:{NFSU2_TR(0x507fae);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fb2:{NFSU2_TR(0x507fb2);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B507fb6:{NFSU2_TR(0x507fb6);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fba:{NFSU2_TR(0x507fba);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507fbd:{NFSU2_TR(0x507fbd);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fc1:{NFSU2_TR(0x507fc1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507fc5:{NFSU2_TR(0x507fc5);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fc9:{NFSU2_TR(0x507fc9);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B507fcd:{NFSU2_TR(0x507fcd);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fd1:{NFSU2_TR(0x507fd1);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B507fd5:{NFSU2_TR(0x507fd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507fd9:{NFSU2_TR(0x507fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B507fdd:{NFSU2_TR(0x507fdd);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B507fdf:{NFSU2_TR(0x507fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507fe2:{NFSU2_TR(0x507fe2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B507fe3:{NFSU2_TR(0x507fe3);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fe7:{NFSU2_TR(0x507fe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B507feb:{NFSU2_TR(0x507feb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B507fed:{NFSU2_TR(0x507fed);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507fef:{NFSU2_TR(0x507fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B507ff2:{NFSU2_TR(0x507ff2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B507ff5:{NFSU2_TR(0x507ff5);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B507ff8:{NFSU2_TR(0x507ff8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B507ffa:{NFSU2_TR(0x507ffa);
{[[clang::musttail]] return blk_508000(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_507ffc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B507ffc:L507ffc:{bud-=1;NFSU2_TR(0x507ffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_508000(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_507(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x5070f8:[[clang::musttail]] return blk_5070f8(c,a4,a0,a1,bud);
case 0x5070fc:[[clang::musttail]] return blk_5070fc(c,a4,a0,a1,bud);
case 0x507233:[[clang::musttail]] return blk_507233(c,a4,a0,a1,bud);
case 0x50727a:[[clang::musttail]] return blk_50727a(c,a4,a0,a1,bud);
case 0x5073a9:[[clang::musttail]] return blk_5073a9(c,a4,a0,a1,bud);
case 0x5073b7:[[clang::musttail]] return blk_5073b7(c,a4,a0,a1,bud);
case 0x5074eb:[[clang::musttail]] return blk_5074eb(c,a4,a0,a1,bud);
case 0x507531:[[clang::musttail]] return blk_507531(c,a4,a0,a1,bud);
case 0x50765d:[[clang::musttail]] return blk_50765d(c,a4,a0,a1,bud);
case 0x50766b:[[clang::musttail]] return blk_50766b(c,a4,a0,a1,bud);
case 0x5077a1:[[clang::musttail]] return blk_5077a1(c,a4,a0,a1,bud);
case 0x5077e7:[[clang::musttail]] return blk_5077e7(c,a4,a0,a1,bud);
case 0x507915:[[clang::musttail]] return blk_507915(c,a4,a0,a1,bud);
case 0x507923:[[clang::musttail]] return blk_507923(c,a4,a0,a1,bud);
case 0x50798a:[[clang::musttail]] return blk_50798a(c,a4,a0,a1,bud);
case 0x5079f0:[[clang::musttail]] return blk_5079f0(c,a4,a0,a1,bud);
case 0x507b65:[[clang::musttail]] return blk_507b65(c,a4,a0,a1,bud);
case 0x507b69:[[clang::musttail]] return blk_507b69(c,a4,a0,a1,bud);
case 0x507bc4:[[clang::musttail]] return blk_507bc4(c,a4,a0,a1,bud);
case 0x507d24:[[clang::musttail]] return blk_507d24(c,a4,a0,a1,bud);
case 0x507d3a:[[clang::musttail]] return blk_507d3a(c,a4,a0,a1,bud);
case 0x507d71:[[clang::musttail]] return blk_507d71(c,a4,a0,a1,bud);
case 0x507d80:[[clang::musttail]] return blk_507d80(c,a4,a0,a1,bud);
case 0x507e0f:[[clang::musttail]] return blk_507e0f(c,a4,a0,a1,bud);
case 0x507e1c:[[clang::musttail]] return blk_507e1c(c,a4,a0,a1,bud);
case 0x507e8c:[[clang::musttail]] return blk_507e8c(c,a4,a0,a1,bud);
case 0x507ffc:[[clang::musttail]] return blk_507ffc(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_507(Cpu& c){u8* R=c.regs.data();return ent_507(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
