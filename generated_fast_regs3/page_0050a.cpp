#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a03c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a1ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a1b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a207(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a37e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a382(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a4ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a501(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a631(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a63f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a774(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a7ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a8e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a8f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50aa2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50aa72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50aba1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50abaf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50ac16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50ac80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50adf6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50adfa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50ae51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50afb3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50afc9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50b000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50a002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a002:L50a002:{bud-=14;NFSU2_TR(0x50a002);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B50a004:{NFSU2_TR(0x50a004);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a008:{NFSU2_TR(0x50a008);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B50a00b:{NFSU2_TR(0x50a00b);
w4(R+12,u32(0x18ull));
}
B50a010:{NFSU2_TR(0x50a010);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B50a012:{NFSU2_TR(0x50a012);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a016:{NFSU2_TR(0x50a016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50a019:{NFSU2_TR(0x50a019);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a020:{NFSU2_TR(0x50a020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a023:{NFSU2_TR(0x50a023);
w4(G+0,u32(0xcull));
}
B50a028:{NFSU2_TR(0x50a028);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B50a02b:{NFSU2_TR(0x50a02b);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+12))));
}
B50a02d:{NFSU2_TR(0x50a02d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50a035:{NFSU2_TR(0x50a035);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_50a03c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a03c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a03c:L50a03c:{bud-=6;NFSU2_TR(0x50a03c);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a03f:{NFSU2_TR(0x50a03f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50a042:{NFSU2_TR(0x50a042);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B50a044:{NFSU2_TR(0x50a044);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B50a048:{NFSU2_TR(0x50a048);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B50a04b:{NFSU2_TR(0x50a04b);
if(r1(F+2)){{[[clang::musttail]] return blk_50a207(ARGS);}}
}
B50a051:L50a051:{bud-=2;NFSU2_TR(0x50a051);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50a053:{NFSU2_TR(0x50a053);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_50a1ac(ARGS);}}
}
B50a059:L50a059:{bud-=105;NFSU2_TR(0x50a059);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a05c:{NFSU2_TR(0x50a05c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a060:{NFSU2_TR(0x50a060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a063:{NFSU2_TR(0x50a063);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a066:{NFSU2_TR(0x50a066);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a06a:{NFSU2_TR(0x50a06a);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50a06d:{NFSU2_TR(0x50a06d);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a070:{NFSU2_TR(0x50a070);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a074:{NFSU2_TR(0x50a074);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a07b:{NFSU2_TR(0x50a07b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a082:{NFSU2_TR(0x50a082);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a084:{NFSU2_TR(0x50a084);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a086:{NFSU2_TR(0x50a086);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a089:{NFSU2_TR(0x50a089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a08c:{NFSU2_TR(0x50a08c);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a08f:{NFSU2_TR(0x50a08f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a092:{NFSU2_TR(0x50a092);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a096:{NFSU2_TR(0x50a096);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a099:{NFSU2_TR(0x50a099);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a09b:{NFSU2_TR(0x50a09b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a09d:{NFSU2_TR(0x50a09d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a09f:{NFSU2_TR(0x50a09f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a0a1:{NFSU2_TR(0x50a0a1);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a0a4:{NFSU2_TR(0x50a0a4);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0a7:{NFSU2_TR(0x50a0a7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a0a9:{NFSU2_TR(0x50a0a9);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a0ac:{NFSU2_TR(0x50a0ac);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0af:{NFSU2_TR(0x50a0af);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0b3:{NFSU2_TR(0x50a0b3);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0b7:{NFSU2_TR(0x50a0b7);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0b9:{NFSU2_TR(0x50a0b9);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a0bc:{NFSU2_TR(0x50a0bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a0c0:{NFSU2_TR(0x50a0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a0c3:{NFSU2_TR(0x50a0c3);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0c5:{NFSU2_TR(0x50a0c5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a0c7:{NFSU2_TR(0x50a0c7);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a0ca:{NFSU2_TR(0x50a0ca);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0cd:{NFSU2_TR(0x50a0cd);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a0d0:{NFSU2_TR(0x50a0d0);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0d3:{NFSU2_TR(0x50a0d3);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0d6:{NFSU2_TR(0x50a0d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a0da:{NFSU2_TR(0x50a0da);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a0dd:{NFSU2_TR(0x50a0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a0e1:{NFSU2_TR(0x50a0e1);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0e4:{NFSU2_TR(0x50a0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a0e7:{NFSU2_TR(0x50a0e7);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a0eb:{NFSU2_TR(0x50a0eb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a0ed:{NFSU2_TR(0x50a0ed);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a0ef:{NFSU2_TR(0x50a0ef);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0f3:{NFSU2_TR(0x50a0f3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a0f5:{NFSU2_TR(0x50a0f5);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a0f9:{NFSU2_TR(0x50a0f9);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a0fd:{NFSU2_TR(0x50a0fd);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a100:{NFSU2_TR(0x50a100);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a104:{NFSU2_TR(0x50a104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a107:{NFSU2_TR(0x50a107);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a10b:{NFSU2_TR(0x50a10b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a10f:{NFSU2_TR(0x50a10f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a111:{NFSU2_TR(0x50a111);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a114:{NFSU2_TR(0x50a114);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a118:{NFSU2_TR(0x50a118);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a11c:{NFSU2_TR(0x50a11c);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a11f:{NFSU2_TR(0x50a11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a122:{NFSU2_TR(0x50a122);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a125:{NFSU2_TR(0x50a125);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a128:{NFSU2_TR(0x50a128);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50a12b:{NFSU2_TR(0x50a12b);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a12f:{NFSU2_TR(0x50a12f);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a132:{NFSU2_TR(0x50a132);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a136:{NFSU2_TR(0x50a136);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a13a:{NFSU2_TR(0x50a13a);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a13d:{NFSU2_TR(0x50a13d);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a141:{NFSU2_TR(0x50a141);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a146:{NFSU2_TR(0x50a146);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a14a:{NFSU2_TR(0x50a14a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a14c:{NFSU2_TR(0x50a14c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a14e:{NFSU2_TR(0x50a14e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a152:{NFSU2_TR(0x50a152);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a154:{NFSU2_TR(0x50a154);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a158:{NFSU2_TR(0x50a158);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a15c:{NFSU2_TR(0x50a15c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a15e:{NFSU2_TR(0x50a15e);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a162:{NFSU2_TR(0x50a162);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a166:{NFSU2_TR(0x50a166);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a16a:{NFSU2_TR(0x50a16a);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a16d:{NFSU2_TR(0x50a16d);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a171:{NFSU2_TR(0x50a171);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a175:{NFSU2_TR(0x50a175);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a179:{NFSU2_TR(0x50a179);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a17d:{NFSU2_TR(0x50a17d);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a181:{NFSU2_TR(0x50a181);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a185:{NFSU2_TR(0x50a185);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a189:{NFSU2_TR(0x50a189);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a18d:{NFSU2_TR(0x50a18d);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B50a18f:{NFSU2_TR(0x50a18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a192:{NFSU2_TR(0x50a192);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a193:{NFSU2_TR(0x50a193);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a197:{NFSU2_TR(0x50a197);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a19b:{NFSU2_TR(0x50a19b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a19d:{NFSU2_TR(0x50a19d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a19f:{NFSU2_TR(0x50a19f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a1a2:{NFSU2_TR(0x50a1a2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a1a5:{NFSU2_TR(0x50a1a5);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1a8:{NFSU2_TR(0x50a1a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50a1aa:{NFSU2_TR(0x50a1aa);
{[[clang::musttail]] return blk_50a1b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a1ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a1ac:L50a1ac:{bud-=1;NFSU2_TR(0x50a1ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_50a1b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a1b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a1b0:L50a1b0:{bud-=28;NFSU2_TR(0x50a1b0);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1b3:{NFSU2_TR(0x50a1b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a1b7:{NFSU2_TR(0x50a1b7);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1ba:{NFSU2_TR(0x50a1ba);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a1bb:{NFSU2_TR(0x50a1bb);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1be:{NFSU2_TR(0x50a1be);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50a1c1:{NFSU2_TR(0x50a1c1);
{u32 ea_=u32(r4(G+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1c4:{NFSU2_TR(0x50a1c4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a1c6:{NFSU2_TR(0x50a1c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a1ca:{NFSU2_TR(0x50a1ca);
{u32 ea_=u32(r4(G+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1cd:{NFSU2_TR(0x50a1cd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a1d0:{NFSU2_TR(0x50a1d0);
{u32 ea_=u32(r4(G+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1d3:{NFSU2_TR(0x50a1d3);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1d6:{NFSU2_TR(0x50a1d6);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1d9:{NFSU2_TR(0x50a1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a1dc:{NFSU2_TR(0x50a1dc);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1e0:{NFSU2_TR(0x50a1e0);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1e4:{NFSU2_TR(0x50a1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a1e7:{NFSU2_TR(0x50a1e7);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1ea:{NFSU2_TR(0x50a1ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a1ee:{NFSU2_TR(0x50a1ee);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1f1:{NFSU2_TR(0x50a1f1);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a1f4:{NFSU2_TR(0x50a1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a1f7:{NFSU2_TR(0x50a1f7);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1fa:{NFSU2_TR(0x50a1fa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a1fc:{NFSU2_TR(0x50a1fc);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a1ff:{NFSU2_TR(0x50a1ff);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a202:{NFSU2_TR(0x50a202);
{[[clang::musttail]] return blk_50a382(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a207(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a207:L50a207:{bud-=2;NFSU2_TR(0x50a207);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50a209:{NFSU2_TR(0x50a209);
if(r1(F+6)){{[[clang::musttail]] return blk_50a37e(ARGS);}}
}
B50a20f:L50a20f:{bud-=106;NFSU2_TR(0x50a20f);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a212:{NFSU2_TR(0x50a212);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a216:{NFSU2_TR(0x50a216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a219:{NFSU2_TR(0x50a219);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a21c:{NFSU2_TR(0x50a21c);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a220:{NFSU2_TR(0x50a220);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50a223:{NFSU2_TR(0x50a223);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a226:{NFSU2_TR(0x50a226);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a22a:{NFSU2_TR(0x50a22a);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a231:{NFSU2_TR(0x50a231);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a238:{NFSU2_TR(0x50a238);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a23a:{NFSU2_TR(0x50a23a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a23c:{NFSU2_TR(0x50a23c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a23f:{NFSU2_TR(0x50a23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a242:{NFSU2_TR(0x50a242);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a245:{NFSU2_TR(0x50a245);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a248:{NFSU2_TR(0x50a248);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a24c:{NFSU2_TR(0x50a24c);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a24f:{NFSU2_TR(0x50a24f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a251:{NFSU2_TR(0x50a251);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a253:{NFSU2_TR(0x50a253);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a255:{NFSU2_TR(0x50a255);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a257:{NFSU2_TR(0x50a257);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a25a:{NFSU2_TR(0x50a25a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a25d:{NFSU2_TR(0x50a25d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a25f:{NFSU2_TR(0x50a25f);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a262:{NFSU2_TR(0x50a262);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a265:{NFSU2_TR(0x50a265);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a269:{NFSU2_TR(0x50a269);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a26d:{NFSU2_TR(0x50a26d);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a270:{NFSU2_TR(0x50a270);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a274:{NFSU2_TR(0x50a274);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a276:{NFSU2_TR(0x50a276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a279:{NFSU2_TR(0x50a279);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a27b:{NFSU2_TR(0x50a27b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a27d:{NFSU2_TR(0x50a27d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a280:{NFSU2_TR(0x50a280);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a283:{NFSU2_TR(0x50a283);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a286:{NFSU2_TR(0x50a286);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a289:{NFSU2_TR(0x50a289);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a28c:{NFSU2_TR(0x50a28c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a290:{NFSU2_TR(0x50a290);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a293:{NFSU2_TR(0x50a293);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a297:{NFSU2_TR(0x50a297);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a29a:{NFSU2_TR(0x50a29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a29d:{NFSU2_TR(0x50a29d);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2a1:{NFSU2_TR(0x50a2a1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a2a3:{NFSU2_TR(0x50a2a3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a2a5:{NFSU2_TR(0x50a2a5);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2a9:{NFSU2_TR(0x50a2a9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a2ab:{NFSU2_TR(0x50a2ab);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2af:{NFSU2_TR(0x50a2af);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2b3:{NFSU2_TR(0x50a2b3);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a2b6:{NFSU2_TR(0x50a2b6);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2ba:{NFSU2_TR(0x50a2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a2bd:{NFSU2_TR(0x50a2bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a2c1:{NFSU2_TR(0x50a2c1);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a2c5:{NFSU2_TR(0x50a2c5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a2c7:{NFSU2_TR(0x50a2c7);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2ca:{NFSU2_TR(0x50a2ca);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2ce:{NFSU2_TR(0x50a2ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a2d2:{NFSU2_TR(0x50a2d2);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2d5:{NFSU2_TR(0x50a2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a2d8:{NFSU2_TR(0x50a2d8);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2db:{NFSU2_TR(0x50a2db);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2de:{NFSU2_TR(0x50a2de);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50a2e1:{NFSU2_TR(0x50a2e1);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2e5:{NFSU2_TR(0x50a2e5);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2e8:{NFSU2_TR(0x50a2e8);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2ec:{NFSU2_TR(0x50a2ec);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a2f3:{NFSU2_TR(0x50a2f3);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a2f6:{NFSU2_TR(0x50a2f6);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a2fa:{NFSU2_TR(0x50a2fa);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a2ff:{NFSU2_TR(0x50a2ff);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a306:{NFSU2_TR(0x50a306);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a308:{NFSU2_TR(0x50a308);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a30a:{NFSU2_TR(0x50a30a);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a30e:{NFSU2_TR(0x50a30e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a310:{NFSU2_TR(0x50a310);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a314:{NFSU2_TR(0x50a314);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a31b:{NFSU2_TR(0x50a31b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a31d:{NFSU2_TR(0x50a31d);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a321:{NFSU2_TR(0x50a321);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a328:{NFSU2_TR(0x50a328);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a32c:{NFSU2_TR(0x50a32c);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a32f:{NFSU2_TR(0x50a32f);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a333:{NFSU2_TR(0x50a333);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a337:{NFSU2_TR(0x50a337);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a33b:{NFSU2_TR(0x50a33b);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a33f:{NFSU2_TR(0x50a33f);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a346:{NFSU2_TR(0x50a346);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a34a:{NFSU2_TR(0x50a34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a351:{NFSU2_TR(0x50a351);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50a355:{NFSU2_TR(0x50a355);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B50a357:{NFSU2_TR(0x50a357);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a35a:{NFSU2_TR(0x50a35a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a35b:{NFSU2_TR(0x50a35b);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a362:{NFSU2_TR(0x50a362);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a369:{NFSU2_TR(0x50a369);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a36b:{NFSU2_TR(0x50a36b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a36d:{NFSU2_TR(0x50a36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a370:{NFSU2_TR(0x50a370);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a374:{NFSU2_TR(0x50a374);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a377:{NFSU2_TR(0x50a377);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a37a:{NFSU2_TR(0x50a37a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50a37c:{NFSU2_TR(0x50a37c);
{[[clang::musttail]] return blk_50a382(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a37e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a37e:L50a37e:{bud-=1;NFSU2_TR(0x50a37e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_50a382(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a382(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a382:L50a382:{bud-=6;NFSU2_TR(0x50a382);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a385:{NFSU2_TR(0x50a385);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50a388:{NFSU2_TR(0x50a388);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B50a38a:{NFSU2_TR(0x50a38a);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B50a38e:{NFSU2_TR(0x50a38e);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B50a391:{NFSU2_TR(0x50a391);
if(r1(F+2)){{[[clang::musttail]] return blk_50a501(ARGS);}}
}
B50a397:L50a397:{bud-=2;NFSU2_TR(0x50a397);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50a399:{NFSU2_TR(0x50a399);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_50a4ba(ARGS);}}
}
B50a39f:L50a39f:{bud-=92;NFSU2_TR(0x50a39f);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3a2:{NFSU2_TR(0x50a3a2);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a3a5:{NFSU2_TR(0x50a3a5);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3a8:{NFSU2_TR(0x50a3a8);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a3ab:{NFSU2_TR(0x50a3ab);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3ad:{NFSU2_TR(0x50a3ad);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a3b0:{NFSU2_TR(0x50a3b0);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3b7:{NFSU2_TR(0x50a3b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a3be:{NFSU2_TR(0x50a3be);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a3c0:{NFSU2_TR(0x50a3c0);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3c2:{NFSU2_TR(0x50a3c2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a3c5:{NFSU2_TR(0x50a3c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a3c9:{NFSU2_TR(0x50a3c9);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3cc:{NFSU2_TR(0x50a3cc);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3cf:{NFSU2_TR(0x50a3cf);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a3d2:{NFSU2_TR(0x50a3d2);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a3d5:{NFSU2_TR(0x50a3d5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a3d7:{NFSU2_TR(0x50a3d7);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a3d9:{NFSU2_TR(0x50a3d9);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3db:{NFSU2_TR(0x50a3db);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a3dd:{NFSU2_TR(0x50a3dd);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a3e0:{NFSU2_TR(0x50a3e0);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3e3:{NFSU2_TR(0x50a3e3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a3e5:{NFSU2_TR(0x50a3e5);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a3e8:{NFSU2_TR(0x50a3e8);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3eb:{NFSU2_TR(0x50a3eb);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3ee:{NFSU2_TR(0x50a3ee);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3f1:{NFSU2_TR(0x50a3f1);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a3f3:{NFSU2_TR(0x50a3f3);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a3f6:{NFSU2_TR(0x50a3f6);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a3f8:{NFSU2_TR(0x50a3f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a3fa:{NFSU2_TR(0x50a3fa);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a3fd:{NFSU2_TR(0x50a3fd);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a400:{NFSU2_TR(0x50a400);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a403:{NFSU2_TR(0x50a403);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a406:{NFSU2_TR(0x50a406);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a409:{NFSU2_TR(0x50a409);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a40c:{NFSU2_TR(0x50a40c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a40e:{NFSU2_TR(0x50a40e);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a411:{NFSU2_TR(0x50a411);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a413:{NFSU2_TR(0x50a413);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a415:{NFSU2_TR(0x50a415);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a419:{NFSU2_TR(0x50a419);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a41b:{NFSU2_TR(0x50a41b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a41f:{NFSU2_TR(0x50a41f);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a423:{NFSU2_TR(0x50a423);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a426:{NFSU2_TR(0x50a426);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a42a:{NFSU2_TR(0x50a42a);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a42d:{NFSU2_TR(0x50a42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a430:{NFSU2_TR(0x50a430);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a432:{NFSU2_TR(0x50a432);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a435:{NFSU2_TR(0x50a435);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a439:{NFSU2_TR(0x50a439);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a43d:{NFSU2_TR(0x50a43d);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a440:{NFSU2_TR(0x50a440);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a443:{NFSU2_TR(0x50a443);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a446:{NFSU2_TR(0x50a446);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a449:{NFSU2_TR(0x50a449);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a44c:{NFSU2_TR(0x50a44c);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a44f:{NFSU2_TR(0x50a44f);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a453:{NFSU2_TR(0x50a453);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a455:{NFSU2_TR(0x50a455);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a458:{NFSU2_TR(0x50a458);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a45c:{NFSU2_TR(0x50a45c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a45e:{NFSU2_TR(0x50a45e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a460:{NFSU2_TR(0x50a460);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a461:{NFSU2_TR(0x50a461);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50a464:{NFSU2_TR(0x50a464);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a467:{NFSU2_TR(0x50a467);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a46b:{NFSU2_TR(0x50a46b);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a470:{NFSU2_TR(0x50a470);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a472:{NFSU2_TR(0x50a472);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a476:{NFSU2_TR(0x50a476);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a47a:{NFSU2_TR(0x50a47a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a47c:{NFSU2_TR(0x50a47c);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a480:{NFSU2_TR(0x50a480);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a484:{NFSU2_TR(0x50a484);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a488:{NFSU2_TR(0x50a488);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a48b:{NFSU2_TR(0x50a48b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a48f:{NFSU2_TR(0x50a48f);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a492:{NFSU2_TR(0x50a492);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a496:{NFSU2_TR(0x50a496);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a499:{NFSU2_TR(0x50a499);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a49d:{NFSU2_TR(0x50a49d);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a4a1:{NFSU2_TR(0x50a4a1);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50a4a3:{NFSU2_TR(0x50a4a3);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a4a6:{NFSU2_TR(0x50a4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a4a9:{NFSU2_TR(0x50a4a9);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4ad:{NFSU2_TR(0x50a4ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a4b1:{NFSU2_TR(0x50a4b1);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4b4:{NFSU2_TR(0x50a4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a4b7:{NFSU2_TR(0x50a4b7);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_50a4ba(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a4ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a4ba:L50a4ba:{bud-=24;NFSU2_TR(0x50a4ba);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4bd:{NFSU2_TR(0x50a4bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a4c1:{NFSU2_TR(0x50a4c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4c3:{NFSU2_TR(0x50a4c3);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4c6:{NFSU2_TR(0x50a4c6);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4c8:{NFSU2_TR(0x50a4c8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a4ca:{NFSU2_TR(0x50a4ca);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4cd:{NFSU2_TR(0x50a4cd);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4d0:{NFSU2_TR(0x50a4d0);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4d2:{NFSU2_TR(0x50a4d2);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4d5:{NFSU2_TR(0x50a4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a4d8:{NFSU2_TR(0x50a4d8);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4db:{NFSU2_TR(0x50a4db);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4df:{NFSU2_TR(0x50a4df);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a4e3:{NFSU2_TR(0x50a4e3);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4e6:{NFSU2_TR(0x50a4e6);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4e9:{NFSU2_TR(0x50a4e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+0),(U+0),4);
}
B50a4eb:{NFSU2_TR(0x50a4eb);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a4ee:{NFSU2_TR(0x50a4ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a4f2:{NFSU2_TR(0x50a4f2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4f4:{NFSU2_TR(0x50a4f4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a4f6:{NFSU2_TR(0x50a4f6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4f9:{NFSU2_TR(0x50a4f9);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a4fc:{NFSU2_TR(0x50a4fc);
{[[clang::musttail]] return blk_50a631(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a501(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a501:L50a501:{bud-=2;NFSU2_TR(0x50a501);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50a503:{NFSU2_TR(0x50a503);
if(r1(F+6)){{[[clang::musttail]] return blk_50a63f(ARGS);}}
}
B50a509:L50a509:{bud-=88;NFSU2_TR(0x50a509);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a50c:{NFSU2_TR(0x50a50c);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a50f:{NFSU2_TR(0x50a50f);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a512:{NFSU2_TR(0x50a512);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a515:{NFSU2_TR(0x50a515);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a517:{NFSU2_TR(0x50a517);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a51a:{NFSU2_TR(0x50a51a);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a521:{NFSU2_TR(0x50a521);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a528:{NFSU2_TR(0x50a528);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a52a:{NFSU2_TR(0x50a52a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a52c:{NFSU2_TR(0x50a52c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a52f:{NFSU2_TR(0x50a52f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a533:{NFSU2_TR(0x50a533);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a536:{NFSU2_TR(0x50a536);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a539:{NFSU2_TR(0x50a539);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a53c:{NFSU2_TR(0x50a53c);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a53f:{NFSU2_TR(0x50a53f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a541:{NFSU2_TR(0x50a541);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a543:{NFSU2_TR(0x50a543);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a545:{NFSU2_TR(0x50a545);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a547:{NFSU2_TR(0x50a547);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a54a:{NFSU2_TR(0x50a54a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a54d:{NFSU2_TR(0x50a54d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a54f:{NFSU2_TR(0x50a54f);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a552:{NFSU2_TR(0x50a552);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a555:{NFSU2_TR(0x50a555);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a558:{NFSU2_TR(0x50a558);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a55b:{NFSU2_TR(0x50a55b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a55d:{NFSU2_TR(0x50a55d);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a560:{NFSU2_TR(0x50a560);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a562:{NFSU2_TR(0x50a562);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a564:{NFSU2_TR(0x50a564);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a567:{NFSU2_TR(0x50a567);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a56a:{NFSU2_TR(0x50a56a);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a56d:{NFSU2_TR(0x50a56d);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a570:{NFSU2_TR(0x50a570);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a573:{NFSU2_TR(0x50a573);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a576:{NFSU2_TR(0x50a576);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a578:{NFSU2_TR(0x50a578);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a57b:{NFSU2_TR(0x50a57b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a57d:{NFSU2_TR(0x50a57d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a57f:{NFSU2_TR(0x50a57f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a583:{NFSU2_TR(0x50a583);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a585:{NFSU2_TR(0x50a585);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a589:{NFSU2_TR(0x50a589);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a58d:{NFSU2_TR(0x50a58d);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a590:{NFSU2_TR(0x50a590);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a594:{NFSU2_TR(0x50a594);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a597:{NFSU2_TR(0x50a597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a59a:{NFSU2_TR(0x50a59a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a59c:{NFSU2_TR(0x50a59c);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a59f:{NFSU2_TR(0x50a59f);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5a3:{NFSU2_TR(0x50a5a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a5a7:{NFSU2_TR(0x50a5a7);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5aa:{NFSU2_TR(0x50a5aa);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a5ad:{NFSU2_TR(0x50a5ad);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5b0:{NFSU2_TR(0x50a5b0);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a5b3:{NFSU2_TR(0x50a5b3);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5b6:{NFSU2_TR(0x50a5b6);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a5b9:{NFSU2_TR(0x50a5b9);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5c0:{NFSU2_TR(0x50a5c0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5c2:{NFSU2_TR(0x50a5c2);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a5c5:{NFSU2_TR(0x50a5c5);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5cc:{NFSU2_TR(0x50a5cc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a5ce:{NFSU2_TR(0x50a5ce);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a5d0:{NFSU2_TR(0x50a5d0);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a5d5:{NFSU2_TR(0x50a5d5);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5d9:{NFSU2_TR(0x50a5d9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a5db:{NFSU2_TR(0x50a5db);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5df:{NFSU2_TR(0x50a5df);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5e6:{NFSU2_TR(0x50a5e6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a5e8:{NFSU2_TR(0x50a5e8);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a5ec:{NFSU2_TR(0x50a5ec);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a5f3:{NFSU2_TR(0x50a5f3);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5f7:{NFSU2_TR(0x50a5f7);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a5fa:{NFSU2_TR(0x50a5fa);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a5fe:{NFSU2_TR(0x50a5fe);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a601:{NFSU2_TR(0x50a601);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a605:{NFSU2_TR(0x50a605);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a608:{NFSU2_TR(0x50a608);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a60f:{NFSU2_TR(0x50a60f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a616:{NFSU2_TR(0x50a616);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50a618:{NFSU2_TR(0x50a618);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a61b:{NFSU2_TR(0x50a61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a61e:{NFSU2_TR(0x50a61e);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a625:{NFSU2_TR(0x50a625);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a62c:{NFSU2_TR(0x50a62c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a62e:{NFSU2_TR(0x50a62e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_50a631(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a631(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a631:L50a631:{bud-=5;NFSU2_TR(0x50a631);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a632:{NFSU2_TR(0x50a632);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a635:{NFSU2_TR(0x50a635);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50a638:{NFSU2_TR(0x50a638);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a63c:{NFSU2_TR(0x50a63c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_50a63f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a63f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a63f:L50a63f:{bud-=6;NFSU2_TR(0x50a63f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a642:{NFSU2_TR(0x50a642);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50a645:{NFSU2_TR(0x50a645);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B50a647:{NFSU2_TR(0x50a647);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B50a64b:{NFSU2_TR(0x50a64b);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B50a64e:{NFSU2_TR(0x50a64e);
if(r1(F+2)){{[[clang::musttail]] return blk_50a7ba(ARGS);}}
}
B50a654:L50a654:{bud-=2;NFSU2_TR(0x50a654);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50a656:{NFSU2_TR(0x50a656);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_50a774(ARGS);}}
}
B50a65c:L50a65c:{bud-=92;NFSU2_TR(0x50a65c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a65f:{NFSU2_TR(0x50a65f);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a662:{NFSU2_TR(0x50a662);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a665:{NFSU2_TR(0x50a665);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a668:{NFSU2_TR(0x50a668);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a66b:{NFSU2_TR(0x50a66b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a66d:{NFSU2_TR(0x50a66d);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a674:{NFSU2_TR(0x50a674);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a67b:{NFSU2_TR(0x50a67b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a67d:{NFSU2_TR(0x50a67d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a67f:{NFSU2_TR(0x50a67f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a682:{NFSU2_TR(0x50a682);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a686:{NFSU2_TR(0x50a686);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a689:{NFSU2_TR(0x50a689);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a68c:{NFSU2_TR(0x50a68c);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a68f:{NFSU2_TR(0x50a68f);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a692:{NFSU2_TR(0x50a692);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a694:{NFSU2_TR(0x50a694);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a696:{NFSU2_TR(0x50a696);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a698:{NFSU2_TR(0x50a698);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a69a:{NFSU2_TR(0x50a69a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a69d:{NFSU2_TR(0x50a69d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6a0:{NFSU2_TR(0x50a6a0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a6a2:{NFSU2_TR(0x50a6a2);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a6a5:{NFSU2_TR(0x50a6a5);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6a8:{NFSU2_TR(0x50a6a8);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6ab:{NFSU2_TR(0x50a6ab);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6ad:{NFSU2_TR(0x50a6ad);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6af:{NFSU2_TR(0x50a6af);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6b2:{NFSU2_TR(0x50a6b2);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6b4:{NFSU2_TR(0x50a6b4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a6b6:{NFSU2_TR(0x50a6b6);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6b9:{NFSU2_TR(0x50a6b9);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6bc:{NFSU2_TR(0x50a6bc);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6bf:{NFSU2_TR(0x50a6bf);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6c2:{NFSU2_TR(0x50a6c2);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6c5:{NFSU2_TR(0x50a6c5);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a6c8:{NFSU2_TR(0x50a6c8);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6cb:{NFSU2_TR(0x50a6cb);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a6cd:{NFSU2_TR(0x50a6cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a6cf:{NFSU2_TR(0x50a6cf);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a6d1:{NFSU2_TR(0x50a6d1);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6d5:{NFSU2_TR(0x50a6d5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a6d7:{NFSU2_TR(0x50a6d7);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6db:{NFSU2_TR(0x50a6db);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6df:{NFSU2_TR(0x50a6df);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6e2:{NFSU2_TR(0x50a6e2);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6e6:{NFSU2_TR(0x50a6e6);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a6e8:{NFSU2_TR(0x50a6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a6eb:{NFSU2_TR(0x50a6eb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a6ed:{NFSU2_TR(0x50a6ed);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6f0:{NFSU2_TR(0x50a6f0);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a6f4:{NFSU2_TR(0x50a6f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a6f8:{NFSU2_TR(0x50a6f8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a6fb:{NFSU2_TR(0x50a6fb);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a6fe:{NFSU2_TR(0x50a6fe);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a701:{NFSU2_TR(0x50a701);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a704:{NFSU2_TR(0x50a704);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a707:{NFSU2_TR(0x50a707);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a70a:{NFSU2_TR(0x50a70a);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a70e:{NFSU2_TR(0x50a70e);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a711:{NFSU2_TR(0x50a711);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a713:{NFSU2_TR(0x50a713);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a717:{NFSU2_TR(0x50a717);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a719:{NFSU2_TR(0x50a719);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a71a:{NFSU2_TR(0x50a71a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a71c:{NFSU2_TR(0x50a71c);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50a71f:{NFSU2_TR(0x50a71f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a722:{NFSU2_TR(0x50a722);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a727:{NFSU2_TR(0x50a727);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a72b:{NFSU2_TR(0x50a72b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a72d:{NFSU2_TR(0x50a72d);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a731:{NFSU2_TR(0x50a731);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a735:{NFSU2_TR(0x50a735);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a737:{NFSU2_TR(0x50a737);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a73b:{NFSU2_TR(0x50a73b);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a73f:{NFSU2_TR(0x50a73f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a743:{NFSU2_TR(0x50a743);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a746:{NFSU2_TR(0x50a746);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a74a:{NFSU2_TR(0x50a74a);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a74d:{NFSU2_TR(0x50a74d);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a751:{NFSU2_TR(0x50a751);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a754:{NFSU2_TR(0x50a754);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a758:{NFSU2_TR(0x50a758);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a75c:{NFSU2_TR(0x50a75c);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50a75e:{NFSU2_TR(0x50a75e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a760:{NFSU2_TR(0x50a760);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a763:{NFSU2_TR(0x50a763);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a767:{NFSU2_TR(0x50a767);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a76b:{NFSU2_TR(0x50a76b);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a76e:{NFSU2_TR(0x50a76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a771:{NFSU2_TR(0x50a771);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_50a774(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a774(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a774:L50a774:{bud-=23;NFSU2_TR(0x50a774);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a777:{NFSU2_TR(0x50a777);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a77b:{NFSU2_TR(0x50a77b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a77e:{NFSU2_TR(0x50a77e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a781:{NFSU2_TR(0x50a781);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a783:{NFSU2_TR(0x50a783);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a785:{NFSU2_TR(0x50a785);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a788:{NFSU2_TR(0x50a788);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a78b:{NFSU2_TR(0x50a78b);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a78e:{NFSU2_TR(0x50a78e);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a791:{NFSU2_TR(0x50a791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a794:{NFSU2_TR(0x50a794);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a797:{NFSU2_TR(0x50a797);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a79b:{NFSU2_TR(0x50a79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a79e:{NFSU2_TR(0x50a79e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7a1:{NFSU2_TR(0x50a7a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a7a5:{NFSU2_TR(0x50a7a5);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7a8:{NFSU2_TR(0x50a7a8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7ab:{NFSU2_TR(0x50a7ab);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7ad:{NFSU2_TR(0x50a7ad);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a7af:{NFSU2_TR(0x50a7af);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7b2:{NFSU2_TR(0x50a7b2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7b5:{NFSU2_TR(0x50a7b5);
{[[clang::musttail]] return blk_50a8e7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a7ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a7ba:L50a7ba:{bud-=2;NFSU2_TR(0x50a7ba);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50a7bc:{NFSU2_TR(0x50a7bc);
if(r1(F+6)){{[[clang::musttail]] return blk_50a8f5(ARGS);}}
}
B50a7c2:L50a7c2:{bud-=88;NFSU2_TR(0x50a7c2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7c5:{NFSU2_TR(0x50a7c5);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a7c8:{NFSU2_TR(0x50a7c8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7cb:{NFSU2_TR(0x50a7cb);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a7ce:{NFSU2_TR(0x50a7ce);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7d1:{NFSU2_TR(0x50a7d1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a7d3:{NFSU2_TR(0x50a7d3);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7da:{NFSU2_TR(0x50a7da);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a7e1:{NFSU2_TR(0x50a7e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a7e3:{NFSU2_TR(0x50a7e3);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7e5:{NFSU2_TR(0x50a7e5);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a7e8:{NFSU2_TR(0x50a7e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a7ec:{NFSU2_TR(0x50a7ec);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7ef:{NFSU2_TR(0x50a7ef);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a7f2:{NFSU2_TR(0x50a7f2);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a7f5:{NFSU2_TR(0x50a7f5);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a7f8:{NFSU2_TR(0x50a7f8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a7fa:{NFSU2_TR(0x50a7fa);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a7fc:{NFSU2_TR(0x50a7fc);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a7fe:{NFSU2_TR(0x50a7fe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a800:{NFSU2_TR(0x50a800);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a803:{NFSU2_TR(0x50a803);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a806:{NFSU2_TR(0x50a806);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a808:{NFSU2_TR(0x50a808);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a80b:{NFSU2_TR(0x50a80b);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a80e:{NFSU2_TR(0x50a80e);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a811:{NFSU2_TR(0x50a811);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a813:{NFSU2_TR(0x50a813);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a815:{NFSU2_TR(0x50a815);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a818:{NFSU2_TR(0x50a818);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a81a:{NFSU2_TR(0x50a81a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a81c:{NFSU2_TR(0x50a81c);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a81f:{NFSU2_TR(0x50a81f);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a822:{NFSU2_TR(0x50a822);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a825:{NFSU2_TR(0x50a825);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a828:{NFSU2_TR(0x50a828);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a82b:{NFSU2_TR(0x50a82b);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a82e:{NFSU2_TR(0x50a82e);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a831:{NFSU2_TR(0x50a831);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a833:{NFSU2_TR(0x50a833);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a835:{NFSU2_TR(0x50a835);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a837:{NFSU2_TR(0x50a837);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a83b:{NFSU2_TR(0x50a83b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a83d:{NFSU2_TR(0x50a83d);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a841:{NFSU2_TR(0x50a841);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a845:{NFSU2_TR(0x50a845);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a848:{NFSU2_TR(0x50a848);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a84c:{NFSU2_TR(0x50a84c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a84e:{NFSU2_TR(0x50a84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a851:{NFSU2_TR(0x50a851);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a853:{NFSU2_TR(0x50a853);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a856:{NFSU2_TR(0x50a856);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a85a:{NFSU2_TR(0x50a85a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a85e:{NFSU2_TR(0x50a85e);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a861:{NFSU2_TR(0x50a861);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a864:{NFSU2_TR(0x50a864);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a867:{NFSU2_TR(0x50a867);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a86a:{NFSU2_TR(0x50a86a);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a86d:{NFSU2_TR(0x50a86d);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a870:{NFSU2_TR(0x50a870);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a877:{NFSU2_TR(0x50a877);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a87a:{NFSU2_TR(0x50a87a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a87c:{NFSU2_TR(0x50a87c);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a883:{NFSU2_TR(0x50a883);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a885:{NFSU2_TR(0x50a885);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a88a:{NFSU2_TR(0x50a88a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a88c:{NFSU2_TR(0x50a88c);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a890:{NFSU2_TR(0x50a890);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a892:{NFSU2_TR(0x50a892);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a896:{NFSU2_TR(0x50a896);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a89d:{NFSU2_TR(0x50a89d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a89f:{NFSU2_TR(0x50a89f);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8a3:{NFSU2_TR(0x50a8a3);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a8aa:{NFSU2_TR(0x50a8aa);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a8ae:{NFSU2_TR(0x50a8ae);
{u32 ea_=u32(r4(R+8)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a8b1:{NFSU2_TR(0x50a8b1);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a8b5:{NFSU2_TR(0x50a8b5);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a8b8:{NFSU2_TR(0x50a8b8);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a8bc:{NFSU2_TR(0x50a8bc);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a8bf:{NFSU2_TR(0x50a8bf);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8c6:{NFSU2_TR(0x50a8c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a8cd:{NFSU2_TR(0x50a8cd);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50a8cf:{NFSU2_TR(0x50a8cf);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a8d1:{NFSU2_TR(0x50a8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a8d4:{NFSU2_TR(0x50a8d4);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8db:{NFSU2_TR(0x50a8db);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a8e2:{NFSU2_TR(0x50a8e2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a8e4:{NFSU2_TR(0x50a8e4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_50a8e7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a8e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a8e7:L50a8e7:{bud-=5;NFSU2_TR(0x50a8e7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a8e8:{NFSU2_TR(0x50a8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a8eb:{NFSU2_TR(0x50a8eb);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50a8ee:{NFSU2_TR(0x50a8ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a8f2:{NFSU2_TR(0x50a8f2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_50a8f5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50a8f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50a8f5:L50a8f5:{bud-=6;NFSU2_TR(0x50a8f5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a8f8:{NFSU2_TR(0x50a8f8);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50a8fb:{NFSU2_TR(0x50a8fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B50a8fd:{NFSU2_TR(0x50a8fd);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B50a901:{NFSU2_TR(0x50a901);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B50a904:{NFSU2_TR(0x50a904);
if(r1(F+2)){{[[clang::musttail]] return blk_50aa72(ARGS);}}
}
B50a90a:L50a90a:{bud-=2;NFSU2_TR(0x50a90a);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50a90c:{NFSU2_TR(0x50a90c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_50aa2c(ARGS);}}
}
B50a912:L50a912:{bud-=91;NFSU2_TR(0x50a912);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a915:{NFSU2_TR(0x50a915);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a918:{NFSU2_TR(0x50a918);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a91b:{NFSU2_TR(0x50a91b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a91e:{NFSU2_TR(0x50a91e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a921:{NFSU2_TR(0x50a921);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a924:{NFSU2_TR(0x50a924);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a92b:{NFSU2_TR(0x50a92b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a932:{NFSU2_TR(0x50a932);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a934:{NFSU2_TR(0x50a934);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a936:{NFSU2_TR(0x50a936);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50a939:{NFSU2_TR(0x50a939);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a93d:{NFSU2_TR(0x50a93d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a940:{NFSU2_TR(0x50a940);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a943:{NFSU2_TR(0x50a943);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a946:{NFSU2_TR(0x50a946);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50a949:{NFSU2_TR(0x50a949);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a94b:{NFSU2_TR(0x50a94b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a94d:{NFSU2_TR(0x50a94d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a94f:{NFSU2_TR(0x50a94f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a951:{NFSU2_TR(0x50a951);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a954:{NFSU2_TR(0x50a954);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a957:{NFSU2_TR(0x50a957);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50a959:{NFSU2_TR(0x50a959);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a95c:{NFSU2_TR(0x50a95c);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a95f:{NFSU2_TR(0x50a95f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a962:{NFSU2_TR(0x50a962);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a965:{NFSU2_TR(0x50a965);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a967:{NFSU2_TR(0x50a967);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a96a:{NFSU2_TR(0x50a96a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a96c:{NFSU2_TR(0x50a96c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a96e:{NFSU2_TR(0x50a96e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a971:{NFSU2_TR(0x50a971);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a974:{NFSU2_TR(0x50a974);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a977:{NFSU2_TR(0x50a977);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a97a:{NFSU2_TR(0x50a97a);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a97d:{NFSU2_TR(0x50a97d);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a980:{NFSU2_TR(0x50a980);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a983:{NFSU2_TR(0x50a983);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a986:{NFSU2_TR(0x50a986);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a988:{NFSU2_TR(0x50a988);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a98a:{NFSU2_TR(0x50a98a);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a98e:{NFSU2_TR(0x50a98e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a990:{NFSU2_TR(0x50a990);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a994:{NFSU2_TR(0x50a994);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a998:{NFSU2_TR(0x50a998);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a99b:{NFSU2_TR(0x50a99b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a99f:{NFSU2_TR(0x50a99f);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a9a2:{NFSU2_TR(0x50a9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50a9a5:{NFSU2_TR(0x50a9a5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a9a7:{NFSU2_TR(0x50a9a7);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9aa:{NFSU2_TR(0x50a9aa);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9ae:{NFSU2_TR(0x50a9ae);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9b1:{NFSU2_TR(0x50a9b1);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a9b4:{NFSU2_TR(0x50a9b4);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9b7:{NFSU2_TR(0x50a9b7);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a9ba:{NFSU2_TR(0x50a9ba);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9bd:{NFSU2_TR(0x50a9bd);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a9c0:{NFSU2_TR(0x50a9c0);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9c4:{NFSU2_TR(0x50a9c4);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9c7:{NFSU2_TR(0x50a9c7);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50a9ca:{NFSU2_TR(0x50a9ca);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9ce:{NFSU2_TR(0x50a9ce);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50a9cf:{NFSU2_TR(0x50a9cf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50a9d1:{NFSU2_TR(0x50a9d1);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50a9d4:{NFSU2_TR(0x50a9d4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50a9d6:{NFSU2_TR(0x50a9d6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50a9d9:{NFSU2_TR(0x50a9d9);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50a9de:{NFSU2_TR(0x50a9de);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9e2:{NFSU2_TR(0x50a9e2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a9e4:{NFSU2_TR(0x50a9e4);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9e8:{NFSU2_TR(0x50a9e8);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9ec:{NFSU2_TR(0x50a9ec);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50a9ee:{NFSU2_TR(0x50a9ee);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50a9f2:{NFSU2_TR(0x50a9f2);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50a9f6:{NFSU2_TR(0x50a9f6);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50a9fa:{NFSU2_TR(0x50a9fa);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50a9fd:{NFSU2_TR(0x50a9fd);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa01:{NFSU2_TR(0x50aa01);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aa04:{NFSU2_TR(0x50aa04);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa08:{NFSU2_TR(0x50aa08);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aa0b:{NFSU2_TR(0x50aa0b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa0f:{NFSU2_TR(0x50aa0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aa13:{NFSU2_TR(0x50aa13);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50aa15:{NFSU2_TR(0x50aa15);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aa18:{NFSU2_TR(0x50aa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aa1b:{NFSU2_TR(0x50aa1b);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa1f:{NFSU2_TR(0x50aa1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aa23:{NFSU2_TR(0x50aa23);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa26:{NFSU2_TR(0x50aa26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aa29:{NFSU2_TR(0x50aa29);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_50aa2c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50aa2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50aa2c:L50aa2c:{bud-=23;NFSU2_TR(0x50aa2c);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa2f:{NFSU2_TR(0x50aa2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aa33:{NFSU2_TR(0x50aa33);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa36:{NFSU2_TR(0x50aa36);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa39:{NFSU2_TR(0x50aa39);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa3b:{NFSU2_TR(0x50aa3b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aa3d:{NFSU2_TR(0x50aa3d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa40:{NFSU2_TR(0x50aa40);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa43:{NFSU2_TR(0x50aa43);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa46:{NFSU2_TR(0x50aa46);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa49:{NFSU2_TR(0x50aa49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aa4c:{NFSU2_TR(0x50aa4c);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa4f:{NFSU2_TR(0x50aa4f);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa53:{NFSU2_TR(0x50aa53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aa56:{NFSU2_TR(0x50aa56);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa59:{NFSU2_TR(0x50aa59);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aa5d:{NFSU2_TR(0x50aa5d);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa60:{NFSU2_TR(0x50aa60);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa63:{NFSU2_TR(0x50aa63);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa65:{NFSU2_TR(0x50aa65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aa67:{NFSU2_TR(0x50aa67);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa6a:{NFSU2_TR(0x50aa6a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa6d:{NFSU2_TR(0x50aa6d);
{[[clang::musttail]] return blk_50aba1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50aa72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50aa72:L50aa72:{bud-=2;NFSU2_TR(0x50aa72);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50aa74:{NFSU2_TR(0x50aa74);
if(r1(F+6)){{[[clang::musttail]] return blk_50abaf(ARGS);}}
}
B50aa7a:L50aa7a:{bud-=87;NFSU2_TR(0x50aa7a);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa7d:{NFSU2_TR(0x50aa7d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aa80:{NFSU2_TR(0x50aa80);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa83:{NFSU2_TR(0x50aa83);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aa86:{NFSU2_TR(0x50aa86);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aa89:{NFSU2_TR(0x50aa89);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aa8c:{NFSU2_TR(0x50aa8c);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa93:{NFSU2_TR(0x50aa93);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aa9a:{NFSU2_TR(0x50aa9a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aa9c:{NFSU2_TR(0x50aa9c);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aa9e:{NFSU2_TR(0x50aa9e);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aaa1:{NFSU2_TR(0x50aaa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aaa5:{NFSU2_TR(0x50aaa5);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aaa8:{NFSU2_TR(0x50aaa8);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aaab:{NFSU2_TR(0x50aaab);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aaae:{NFSU2_TR(0x50aaae);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50aab1:{NFSU2_TR(0x50aab1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aab3:{NFSU2_TR(0x50aab3);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aab5:{NFSU2_TR(0x50aab5);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aab7:{NFSU2_TR(0x50aab7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aab9:{NFSU2_TR(0x50aab9);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aabc:{NFSU2_TR(0x50aabc);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aabf:{NFSU2_TR(0x50aabf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aac1:{NFSU2_TR(0x50aac1);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aac4:{NFSU2_TR(0x50aac4);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aac7:{NFSU2_TR(0x50aac7);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aaca:{NFSU2_TR(0x50aaca);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aacd:{NFSU2_TR(0x50aacd);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aacf:{NFSU2_TR(0x50aacf);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aad2:{NFSU2_TR(0x50aad2);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aad4:{NFSU2_TR(0x50aad4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aad6:{NFSU2_TR(0x50aad6);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aad9:{NFSU2_TR(0x50aad9);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aadc:{NFSU2_TR(0x50aadc);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aadf:{NFSU2_TR(0x50aadf);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aae2:{NFSU2_TR(0x50aae2);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aae5:{NFSU2_TR(0x50aae5);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aae8:{NFSU2_TR(0x50aae8);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aaeb:{NFSU2_TR(0x50aaeb);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aaee:{NFSU2_TR(0x50aaee);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aaf0:{NFSU2_TR(0x50aaf0);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50aaf2:{NFSU2_TR(0x50aaf2);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aaf6:{NFSU2_TR(0x50aaf6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50aaf8:{NFSU2_TR(0x50aaf8);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aafc:{NFSU2_TR(0x50aafc);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab00:{NFSU2_TR(0x50ab00);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab03:{NFSU2_TR(0x50ab03);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab07:{NFSU2_TR(0x50ab07);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab0a:{NFSU2_TR(0x50ab0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ab0d:{NFSU2_TR(0x50ab0d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ab0f:{NFSU2_TR(0x50ab0f);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab12:{NFSU2_TR(0x50ab12);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab16:{NFSU2_TR(0x50ab16);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab19:{NFSU2_TR(0x50ab19);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ab1c:{NFSU2_TR(0x50ab1c);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab1f:{NFSU2_TR(0x50ab1f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ab22:{NFSU2_TR(0x50ab22);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab25:{NFSU2_TR(0x50ab25);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ab28:{NFSU2_TR(0x50ab28);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab2f:{NFSU2_TR(0x50ab2f);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab32:{NFSU2_TR(0x50ab32);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ab35:{NFSU2_TR(0x50ab35);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab3c:{NFSU2_TR(0x50ab3c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50ab41:{NFSU2_TR(0x50ab41);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ab43:{NFSU2_TR(0x50ab43);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50ab45:{NFSU2_TR(0x50ab45);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab49:{NFSU2_TR(0x50ab49);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ab4b:{NFSU2_TR(0x50ab4b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab4f:{NFSU2_TR(0x50ab4f);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab56:{NFSU2_TR(0x50ab56);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ab58:{NFSU2_TR(0x50ab58);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab5c:{NFSU2_TR(0x50ab5c);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50ab63:{NFSU2_TR(0x50ab63);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab67:{NFSU2_TR(0x50ab67);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab6a:{NFSU2_TR(0x50ab6a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab6e:{NFSU2_TR(0x50ab6e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab71:{NFSU2_TR(0x50ab71);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ab75:{NFSU2_TR(0x50ab75);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab78:{NFSU2_TR(0x50ab78);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab7f:{NFSU2_TR(0x50ab7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ab86:{NFSU2_TR(0x50ab86);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50ab88:{NFSU2_TR(0x50ab88);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ab8b:{NFSU2_TR(0x50ab8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ab8e:{NFSU2_TR(0x50ab8e);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab95:{NFSU2_TR(0x50ab95);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ab9c:{NFSU2_TR(0x50ab9c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ab9e:{NFSU2_TR(0x50ab9e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_50aba1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50aba1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50aba1:L50aba1:{bud-=5;NFSU2_TR(0x50aba1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50aba2:{NFSU2_TR(0x50aba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50aba5:{NFSU2_TR(0x50aba5);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50aba8:{NFSU2_TR(0x50aba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abac:{NFSU2_TR(0x50abac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_50abaf(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50abaf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50abaf:L50abaf:{bud-=22;NFSU2_TR(0x50abaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50abb3:{NFSU2_TR(0x50abb3);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50abba:{NFSU2_TR(0x50abba);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abc1:{NFSU2_TR(0x50abc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50abc5:{NFSU2_TR(0x50abc5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+0))));
}
B50abc7:{NFSU2_TR(0x50abc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abcb:{NFSU2_TR(0x50abcb);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50abd2:{NFSU2_TR(0x50abd2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B50abd4:{NFSU2_TR(0x50abd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abd8:{NFSU2_TR(0x50abd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50abdc:{NFSU2_TR(0x50abdc);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
}
B50abdf:{NFSU2_TR(0x50abdf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B50abe2:{NFSU2_TR(0x50abe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abe6:{NFSU2_TR(0x50abe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50abea:{NFSU2_TR(0x50abea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50abee:{NFSU2_TR(0x50abee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50abf1:{NFSU2_TR(0x50abf1);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
}
B50abf4:{NFSU2_TR(0x50abf4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B50abf7:{NFSU2_TR(0x50abf7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B50abfa:{NFSU2_TR(0x50abfa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
}
B50abfc:{NFSU2_TR(0x50abfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac00:{NFSU2_TR(0x50ac00);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x50a03cu);}[[clang::musttail]] return blk_50a03c(ARGS);}}
}
B50ac06:L50ac06:{bud-=4;NFSU2_TR(0x50ac06);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ac0d:{NFSU2_TR(0x50ac0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ac10:{NFSU2_TR(0x50ac10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50ac13:{NFSU2_TR(0x50ac13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_50ac16(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50ac16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50ac16:L50ac16:{bud-=3;NFSU2_TR(0x50ac16);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B50ac1a:{NFSU2_TR(0x50ac1a);
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
B50ac1d:{NFSU2_TR(0x50ac1d);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_50b000(ARGS);}}
}
B50ac23:L50ac23:{bud-=25;NFSU2_TR(0x50ac23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B50ac2a:{NFSU2_TR(0x50ac2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac2e:{NFSU2_TR(0x50ac2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B50ac32:{NFSU2_TR(0x50ac32);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B50ac35:{NFSU2_TR(0x50ac35);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B50ac37:{NFSU2_TR(0x50ac37);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac3b:{NFSU2_TR(0x50ac3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ac3e:{NFSU2_TR(0x50ac3e);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B50ac40:{NFSU2_TR(0x50ac40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ac44:{NFSU2_TR(0x50ac44);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B50ac47:{NFSU2_TR(0x50ac47);
__builtin_memmove((R+8),(R+28),4);
}
B50ac49:{NFSU2_TR(0x50ac49);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B50ac4d:{NFSU2_TR(0x50ac4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac51:{NFSU2_TR(0x50ac51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ac54:{NFSU2_TR(0x50ac54);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B50ac58:{NFSU2_TR(0x50ac58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac5c:{NFSU2_TR(0x50ac5c);
__builtin_memmove((G+0),(R+12),4);
}
B50ac5e:{NFSU2_TR(0x50ac5e);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+28))));
}
B50ac60:{NFSU2_TR(0x50ac60);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac64:{NFSU2_TR(0x50ac64);
w4(G+0,u32(0xfffffffcull));
}
B50ac69:{NFSU2_TR(0x50ac69);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B50ac6c:{NFSU2_TR(0x50ac6c);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+28))));
}
B50ac6e:{NFSU2_TR(0x50ac6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ac72:{NFSU2_TR(0x50ac72);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ac79:{NFSU2_TR(0x50ac79);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_50ac80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50ac80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50ac80:L50ac80:{bud-=7;NFSU2_TR(0x50ac80);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ac84:{NFSU2_TR(0x50ac84);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ac86:{NFSU2_TR(0x50ac86);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50ac89:{NFSU2_TR(0x50ac89);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B50ac8b:{NFSU2_TR(0x50ac8b);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B50ac8f:{NFSU2_TR(0x50ac8f);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B50ac92:{NFSU2_TR(0x50ac92);
if(r1(F+2)){{[[clang::musttail]] return blk_50ae51(ARGS);}}
}
B50ac98:L50ac98:{bud-=2;NFSU2_TR(0x50ac98);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50ac9a:{NFSU2_TR(0x50ac9a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_50adf6(ARGS);}}
}
B50aca0:L50aca0:{bud-=105;NFSU2_TR(0x50aca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aca3:{NFSU2_TR(0x50aca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50aca7:{NFSU2_TR(0x50aca7);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acaa:{NFSU2_TR(0x50acaa);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50acad:{NFSU2_TR(0x50acad);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acb1:{NFSU2_TR(0x50acb1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50acb3:{NFSU2_TR(0x50acb3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acb6:{NFSU2_TR(0x50acb6);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50acba:{NFSU2_TR(0x50acba);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50acc1:{NFSU2_TR(0x50acc1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50acc8:{NFSU2_TR(0x50acc8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50acca:{NFSU2_TR(0x50acca);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50accc:{NFSU2_TR(0x50accc);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50accf:{NFSU2_TR(0x50accf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50acd3:{NFSU2_TR(0x50acd3);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50acd6:{NFSU2_TR(0x50acd6);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acd9:{NFSU2_TR(0x50acd9);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50acdd:{NFSU2_TR(0x50acdd);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50ace0:{NFSU2_TR(0x50ace0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50ace2:{NFSU2_TR(0x50ace2);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50ace4:{NFSU2_TR(0x50ace4);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ace6:{NFSU2_TR(0x50ace6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50ace8:{NFSU2_TR(0x50ace8);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aceb:{NFSU2_TR(0x50aceb);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50acee:{NFSU2_TR(0x50acee);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50acf0:{NFSU2_TR(0x50acf0);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50acf3:{NFSU2_TR(0x50acf3);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50acf6:{NFSU2_TR(0x50acf6);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acfa:{NFSU2_TR(0x50acfa);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50acfe:{NFSU2_TR(0x50acfe);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad00:{NFSU2_TR(0x50ad00);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad03:{NFSU2_TR(0x50ad03);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ad07:{NFSU2_TR(0x50ad07);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad09:{NFSU2_TR(0x50ad09);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ad0b:{NFSU2_TR(0x50ad0b);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad0e:{NFSU2_TR(0x50ad0e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad11:{NFSU2_TR(0x50ad11);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad14:{NFSU2_TR(0x50ad14);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad17:{NFSU2_TR(0x50ad17);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad1a:{NFSU2_TR(0x50ad1a);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad1d:{NFSU2_TR(0x50ad1d);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad21:{NFSU2_TR(0x50ad21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ad24:{NFSU2_TR(0x50ad24);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad28:{NFSU2_TR(0x50ad28);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ad2a:{NFSU2_TR(0x50ad2a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50ad2c:{NFSU2_TR(0x50ad2c);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad30:{NFSU2_TR(0x50ad30);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ad32:{NFSU2_TR(0x50ad32);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad36:{NFSU2_TR(0x50ad36);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad3a:{NFSU2_TR(0x50ad3a);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad3d:{NFSU2_TR(0x50ad3d);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad41:{NFSU2_TR(0x50ad41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ad45:{NFSU2_TR(0x50ad45);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50ad49:{NFSU2_TR(0x50ad49);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ad4b:{NFSU2_TR(0x50ad4b);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad4e:{NFSU2_TR(0x50ad4e);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad52:{NFSU2_TR(0x50ad52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ad56:{NFSU2_TR(0x50ad56);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad59:{NFSU2_TR(0x50ad59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ad5d:{NFSU2_TR(0x50ad5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ad61:{NFSU2_TR(0x50ad61);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad64:{NFSU2_TR(0x50ad64);
{u32 ea_=u32(r4(R+28)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad67:{NFSU2_TR(0x50ad67);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad6b:{NFSU2_TR(0x50ad6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ad6f:{NFSU2_TR(0x50ad6f);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad72:{NFSU2_TR(0x50ad72);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50ad75:{NFSU2_TR(0x50ad75);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ad79:{NFSU2_TR(0x50ad79);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad7d:{NFSU2_TR(0x50ad7d);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ad81:{NFSU2_TR(0x50ad81);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50ad83:{NFSU2_TR(0x50ad83);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ad87:{NFSU2_TR(0x50ad87);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50ad8c:{NFSU2_TR(0x50ad8c);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad90:{NFSU2_TR(0x50ad90);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ad92:{NFSU2_TR(0x50ad92);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50ad94:{NFSU2_TR(0x50ad94);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad98:{NFSU2_TR(0x50ad98);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ad9a:{NFSU2_TR(0x50ad9a);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ad9e:{NFSU2_TR(0x50ad9e);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ada2:{NFSU2_TR(0x50ada2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50ada4:{NFSU2_TR(0x50ada4);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ada8:{NFSU2_TR(0x50ada8);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50adac:{NFSU2_TR(0x50adac);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adb0:{NFSU2_TR(0x50adb0);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50adb3:{NFSU2_TR(0x50adb3);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adb7:{NFSU2_TR(0x50adb7);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50adbb:{NFSU2_TR(0x50adbb);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adbf:{NFSU2_TR(0x50adbf);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50adc3:{NFSU2_TR(0x50adc3);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50adc7:{NFSU2_TR(0x50adc7);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adcb:{NFSU2_TR(0x50adcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50adcf:{NFSU2_TR(0x50adcf);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B50add1:{NFSU2_TR(0x50add1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50add4:{NFSU2_TR(0x50add4);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50add8:{NFSU2_TR(0x50add8);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50addc:{NFSU2_TR(0x50addc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50adde:{NFSU2_TR(0x50adde);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ade0:{NFSU2_TR(0x50ade0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ade3:{NFSU2_TR(0x50ade3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50ade7:{NFSU2_TR(0x50ade7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50adea:{NFSU2_TR(0x50adea);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50adeb:{NFSU2_TR(0x50adeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50adef:{NFSU2_TR(0x50adef);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50adf1:{NFSU2_TR(0x50adf1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50adf4:{NFSU2_TR(0x50adf4);
{[[clang::musttail]] return blk_50adfa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50adf6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50adf6:L50adf6:{bud-=1;NFSU2_TR(0x50adf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_50adfa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50adfa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50adfa:L50adfa:{bud-=28;NFSU2_TR(0x50adfa);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50adfc:{NFSU2_TR(0x50adfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50adff:{NFSU2_TR(0x50adff);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae02:{NFSU2_TR(0x50ae02);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae05:{NFSU2_TR(0x50ae05);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ae09:{NFSU2_TR(0x50ae09);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae0b:{NFSU2_TR(0x50ae0b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ae0d:{NFSU2_TR(0x50ae0d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae10:{NFSU2_TR(0x50ae10);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae13:{NFSU2_TR(0x50ae13);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae17:{NFSU2_TR(0x50ae17);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae1a:{NFSU2_TR(0x50ae1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ae1e:{NFSU2_TR(0x50ae1e);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae21:{NFSU2_TR(0x50ae21);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae25:{NFSU2_TR(0x50ae25);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ae29:{NFSU2_TR(0x50ae29);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50ae2d:{NFSU2_TR(0x50ae2d);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae30:{NFSU2_TR(0x50ae30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ae34:{NFSU2_TR(0x50ae34);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae37:{NFSU2_TR(0x50ae37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50ae39:{NFSU2_TR(0x50ae39);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae3c:{NFSU2_TR(0x50ae3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ae40:{NFSU2_TR(0x50ae40);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae42:{NFSU2_TR(0x50ae42);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ae44:{NFSU2_TR(0x50ae44);
__builtin_memmove((G+0),(R+8),4);
}
B50ae46:{NFSU2_TR(0x50ae46);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae49:{NFSU2_TR(0x50ae49);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae4c:{NFSU2_TR(0x50ae4c);
{[[clang::musttail]] return blk_50afb3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50ae51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50ae51:L50ae51:{bud-=2;NFSU2_TR(0x50ae51);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50ae53:{NFSU2_TR(0x50ae53);
if(r1(F+6)){{[[clang::musttail]] return blk_50afc9(ARGS);}}
}
B50ae59:L50ae59:{bud-=98;NFSU2_TR(0x50ae59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50ae5c:{NFSU2_TR(0x50ae5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ae60:{NFSU2_TR(0x50ae60);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae63:{NFSU2_TR(0x50ae63);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ae66:{NFSU2_TR(0x50ae66);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae6a:{NFSU2_TR(0x50ae6a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50ae6c:{NFSU2_TR(0x50ae6c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae6f:{NFSU2_TR(0x50ae6f);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ae73:{NFSU2_TR(0x50ae73);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae7a:{NFSU2_TR(0x50ae7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ae81:{NFSU2_TR(0x50ae81);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50ae83:{NFSU2_TR(0x50ae83);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae85:{NFSU2_TR(0x50ae85);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ae88:{NFSU2_TR(0x50ae88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50ae8c:{NFSU2_TR(0x50ae8c);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae8f:{NFSU2_TR(0x50ae8f);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50ae92:{NFSU2_TR(0x50ae92);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50ae96:{NFSU2_TR(0x50ae96);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50ae99:{NFSU2_TR(0x50ae99);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50ae9b:{NFSU2_TR(0x50ae9b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50ae9d:{NFSU2_TR(0x50ae9d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ae9f:{NFSU2_TR(0x50ae9f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aea1:{NFSU2_TR(0x50aea1);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aea4:{NFSU2_TR(0x50aea4);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aea7:{NFSU2_TR(0x50aea7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50aea9:{NFSU2_TR(0x50aea9);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50aeac:{NFSU2_TR(0x50aeac);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aeaf:{NFSU2_TR(0x50aeaf);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aeb3:{NFSU2_TR(0x50aeb3);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aeb7:{NFSU2_TR(0x50aeb7);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aeba:{NFSU2_TR(0x50aeba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aebe:{NFSU2_TR(0x50aebe);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aec0:{NFSU2_TR(0x50aec0);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aec2:{NFSU2_TR(0x50aec2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aec4:{NFSU2_TR(0x50aec4);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aec7:{NFSU2_TR(0x50aec7);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aeca:{NFSU2_TR(0x50aeca);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aecd:{NFSU2_TR(0x50aecd);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aed0:{NFSU2_TR(0x50aed0);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aed3:{NFSU2_TR(0x50aed3);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aed6:{NFSU2_TR(0x50aed6);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aeda:{NFSU2_TR(0x50aeda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50aedd:{NFSU2_TR(0x50aedd);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50aee1:{NFSU2_TR(0x50aee1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50aee3:{NFSU2_TR(0x50aee3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50aee5:{NFSU2_TR(0x50aee5);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aee9:{NFSU2_TR(0x50aee9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50aeeb:{NFSU2_TR(0x50aeeb);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50aeef:{NFSU2_TR(0x50aeef);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aef3:{NFSU2_TR(0x50aef3);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50aef6:{NFSU2_TR(0x50aef6);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50aefa:{NFSU2_TR(0x50aefa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aefe:{NFSU2_TR(0x50aefe);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50af02:{NFSU2_TR(0x50af02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50af04:{NFSU2_TR(0x50af04);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af07:{NFSU2_TR(0x50af07);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af0b:{NFSU2_TR(0x50af0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50af0f:{NFSU2_TR(0x50af0f);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af12:{NFSU2_TR(0x50af12);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50af16:{NFSU2_TR(0x50af16);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50af1a:{NFSU2_TR(0x50af1a);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50af1d:{NFSU2_TR(0x50af1d);
{u32 ea_=u32(r4(G+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af20:{NFSU2_TR(0x50af20);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50af24:{NFSU2_TR(0x50af24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50af28:{NFSU2_TR(0x50af28);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af2b:{NFSU2_TR(0x50af2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50af2f:{NFSU2_TR(0x50af2f);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50af33:{NFSU2_TR(0x50af33);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af3a:{NFSU2_TR(0x50af3a);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af3e:{NFSU2_TR(0x50af3e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B50af40:{NFSU2_TR(0x50af40);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50af45:{NFSU2_TR(0x50af45);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af4c:{NFSU2_TR(0x50af4c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50af4e:{NFSU2_TR(0x50af4e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50af50:{NFSU2_TR(0x50af50);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af54:{NFSU2_TR(0x50af54);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50af56:{NFSU2_TR(0x50af56);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af5a:{NFSU2_TR(0x50af5a);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af61:{NFSU2_TR(0x50af61);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50af63:{NFSU2_TR(0x50af63);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af67:{NFSU2_TR(0x50af67);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50af6e:{NFSU2_TR(0x50af6e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af72:{NFSU2_TR(0x50af72);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50af75:{NFSU2_TR(0x50af75);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af79:{NFSU2_TR(0x50af79);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50af7d:{NFSU2_TR(0x50af7d);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af81:{NFSU2_TR(0x50af81);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50af85:{NFSU2_TR(0x50af85);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50af8c:{NFSU2_TR(0x50af8c);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50af90:{NFSU2_TR(0x50af90);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50af97:{NFSU2_TR(0x50af97);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B50af99:{NFSU2_TR(0x50af99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50af9c:{NFSU2_TR(0x50af9c);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50afa3:{NFSU2_TR(0x50afa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50afaa:{NFSU2_TR(0x50afaa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50afac:{NFSU2_TR(0x50afac);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50afae:{NFSU2_TR(0x50afae);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50afb1:{NFSU2_TR(0x50afb1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_50afb3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50afb3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50afb3:L50afb3:{bud-=7;NFSU2_TR(0x50afb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50afb6:{NFSU2_TR(0x50afb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50afba:{NFSU2_TR(0x50afba);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50afbd:{NFSU2_TR(0x50afbd);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B50afbe:{NFSU2_TR(0x50afbe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50afc1:{NFSU2_TR(0x50afc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50afc5:{NFSU2_TR(0x50afc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_50afc9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50afc9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50afc9:L50afc9:{bud-=12;NFSU2_TR(0x50afc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50afcd:{NFSU2_TR(0x50afcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B50afd4:{NFSU2_TR(0x50afd4);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50afdb:{NFSU2_TR(0x50afdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50afdf:{NFSU2_TR(0x50afdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50afe3:{NFSU2_TR(0x50afe3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B50afe5:{NFSU2_TR(0x50afe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B50afe9:{NFSU2_TR(0x50afe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B50afee:{NFSU2_TR(0x50afee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B50aff3:{NFSU2_TR(0x50aff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50aff7:{NFSU2_TR(0x50aff7);
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
B50affa:{NFSU2_TR(0x50affa);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x50ac80u);}[[clang::musttail]] return blk_50ac80(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_50b000(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_50a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x50a03c:[[clang::musttail]] return blk_50a03c(c,a4,a0,a1,bud);
case 0x50a1ac:[[clang::musttail]] return blk_50a1ac(c,a4,a0,a1,bud);
case 0x50a1b0:[[clang::musttail]] return blk_50a1b0(c,a4,a0,a1,bud);
case 0x50a207:[[clang::musttail]] return blk_50a207(c,a4,a0,a1,bud);
case 0x50a37e:[[clang::musttail]] return blk_50a37e(c,a4,a0,a1,bud);
case 0x50a382:[[clang::musttail]] return blk_50a382(c,a4,a0,a1,bud);
case 0x50a4ba:[[clang::musttail]] return blk_50a4ba(c,a4,a0,a1,bud);
case 0x50a501:[[clang::musttail]] return blk_50a501(c,a4,a0,a1,bud);
case 0x50a631:[[clang::musttail]] return blk_50a631(c,a4,a0,a1,bud);
case 0x50a63f:[[clang::musttail]] return blk_50a63f(c,a4,a0,a1,bud);
case 0x50a774:[[clang::musttail]] return blk_50a774(c,a4,a0,a1,bud);
case 0x50a7ba:[[clang::musttail]] return blk_50a7ba(c,a4,a0,a1,bud);
case 0x50a8e7:[[clang::musttail]] return blk_50a8e7(c,a4,a0,a1,bud);
case 0x50a8f5:[[clang::musttail]] return blk_50a8f5(c,a4,a0,a1,bud);
case 0x50aa2c:[[clang::musttail]] return blk_50aa2c(c,a4,a0,a1,bud);
case 0x50aa72:[[clang::musttail]] return blk_50aa72(c,a4,a0,a1,bud);
case 0x50aba1:[[clang::musttail]] return blk_50aba1(c,a4,a0,a1,bud);
case 0x50abaf:[[clang::musttail]] return blk_50abaf(c,a4,a0,a1,bud);
case 0x50ac16:[[clang::musttail]] return blk_50ac16(c,a4,a0,a1,bud);
case 0x50ac80:[[clang::musttail]] return blk_50ac80(c,a4,a0,a1,bud);
case 0x50adf6:[[clang::musttail]] return blk_50adf6(c,a4,a0,a1,bud);
case 0x50adfa:[[clang::musttail]] return blk_50adfa(c,a4,a0,a1,bud);
case 0x50ae51:[[clang::musttail]] return blk_50ae51(c,a4,a0,a1,bud);
case 0x50afb3:[[clang::musttail]] return blk_50afb3(c,a4,a0,a1,bud);
case 0x50afc9:[[clang::musttail]] return blk_50afc9(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_50a(Cpu& c){u8* R=c.regs.data();return ent_50a(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
