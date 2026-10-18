#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48d860(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62600c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6262b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6262fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626345(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626388(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6263a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6263d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626416(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626438(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6264da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6264dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626505(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626761(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6269b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6269f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626a3a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626a3c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626a76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626cd1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626f22(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626f6f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626f80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626fa6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626faf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626fb1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626ff9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62700c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62700e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626005(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626013(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626289(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6262d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626324(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626363(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6263f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626462(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62646f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62675c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6269ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6269cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626ccc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626f1b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626f40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626f6a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626fc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626ff2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626005(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626005:L626005:{bud-=1;NFSU2_TR(0x626005);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
{[[clang::musttail]] return blk_62600c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62600c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62600c:L62600c:{bud-=2;NFSU2_TR(0x62600c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62600e:{NFSU2_TR(0x62600e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626013ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x401e80u);}[[clang::musttail]] return blk_401e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626013(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626013:L626013:{bud-=4;NFSU2_TR(0x626013);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B626016:{NFSU2_TR(0x626016);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626018:{NFSU2_TR(0x626018);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62601f:{NFSU2_TR(0x62601f);
if(r1(F+6)){{[[clang::musttail]] return blk_626438(ARGS);}}
}
B626025:L626025:{bud-=4;NFSU2_TR(0x626025);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B626029:{NFSU2_TR(0x626029);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62602f:{NFSU2_TR(0x62602f);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B626031:{NFSU2_TR(0x626031);
if(r1(F+6)){{[[clang::musttail]] return blk_6263a9(ARGS);}}
}
B626037:L626037:{bud-=197;NFSU2_TR(0x626037);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62603a:{NFSU2_TR(0x62603a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62603c:{NFSU2_TR(0x62603c);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62603f:{NFSU2_TR(0x62603f);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626042:{NFSU2_TR(0x626042);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626044:{NFSU2_TR(0x626044);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626047:{NFSU2_TR(0x626047);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62604a:{NFSU2_TR(0x62604a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62604c:{NFSU2_TR(0x62604c);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62604f:{NFSU2_TR(0x62604f);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626052:{NFSU2_TR(0x626052);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626054:{NFSU2_TR(0x626054);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626058:{NFSU2_TR(0x626058);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62605b:{NFSU2_TR(0x62605b);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62605e:{NFSU2_TR(0x62605e);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626061:{NFSU2_TR(0x626061);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626064:{NFSU2_TR(0x626064);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626066:{NFSU2_TR(0x626066);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626069:{NFSU2_TR(0x626069);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62606c:{NFSU2_TR(0x62606c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62606e:{NFSU2_TR(0x62606e);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626071:{NFSU2_TR(0x626071);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626074:{NFSU2_TR(0x626074);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626076:{NFSU2_TR(0x626076);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62607a:{NFSU2_TR(0x62607a);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62607d:{NFSU2_TR(0x62607d);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626080:{NFSU2_TR(0x626080);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626083:{NFSU2_TR(0x626083);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626086:{NFSU2_TR(0x626086);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626088:{NFSU2_TR(0x626088);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62608b:{NFSU2_TR(0x62608b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62608e:{NFSU2_TR(0x62608e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626090:{NFSU2_TR(0x626090);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626093:{NFSU2_TR(0x626093);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626096:{NFSU2_TR(0x626096);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626098:{NFSU2_TR(0x626098);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62609c:{NFSU2_TR(0x62609c);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62609f:{NFSU2_TR(0x62609f);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260a2:{NFSU2_TR(0x6260a2);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260a5:{NFSU2_TR(0x6260a5);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260a8:{NFSU2_TR(0x6260a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6260aa:{NFSU2_TR(0x6260aa);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260ad:{NFSU2_TR(0x6260ad);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260b0:{NFSU2_TR(0x6260b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6260b2:{NFSU2_TR(0x6260b2);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260b5:{NFSU2_TR(0x6260b5);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260b8:{NFSU2_TR(0x6260b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6260ba:{NFSU2_TR(0x6260ba);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6260be:{NFSU2_TR(0x6260be);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260c1:{NFSU2_TR(0x6260c1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260c3:{NFSU2_TR(0x6260c3);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260c6:{NFSU2_TR(0x6260c6);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260c9:{NFSU2_TR(0x6260c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6260cb:{NFSU2_TR(0x6260cb);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260ce:{NFSU2_TR(0x6260ce);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260d1:{NFSU2_TR(0x6260d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6260d3:{NFSU2_TR(0x6260d3);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260d6:{NFSU2_TR(0x6260d6);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260d9:{NFSU2_TR(0x6260d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6260db:{NFSU2_TR(0x6260db);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6260e2:{NFSU2_TR(0x6260e2);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260e5:{NFSU2_TR(0x6260e5);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260e8:{NFSU2_TR(0x6260e8);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260eb:{NFSU2_TR(0x6260eb);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260ee:{NFSU2_TR(0x6260ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6260f0:{NFSU2_TR(0x6260f0);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260f3:{NFSU2_TR(0x6260f3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260f6:{NFSU2_TR(0x6260f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6260f8:{NFSU2_TR(0x6260f8);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6260fb:{NFSU2_TR(0x6260fb);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6260fe:{NFSU2_TR(0x6260fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626100:{NFSU2_TR(0x626100);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626107:{NFSU2_TR(0x626107);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62610a:{NFSU2_TR(0x62610a);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62610d:{NFSU2_TR(0x62610d);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626110:{NFSU2_TR(0x626110);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626113:{NFSU2_TR(0x626113);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626115:{NFSU2_TR(0x626115);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626118:{NFSU2_TR(0x626118);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62611b:{NFSU2_TR(0x62611b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62611d:{NFSU2_TR(0x62611d);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626120:{NFSU2_TR(0x626120);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626123:{NFSU2_TR(0x626123);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626125:{NFSU2_TR(0x626125);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62612c:{NFSU2_TR(0x62612c);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62612f:{NFSU2_TR(0x62612f);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626132:{NFSU2_TR(0x626132);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626135:{NFSU2_TR(0x626135);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626138:{NFSU2_TR(0x626138);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62613a:{NFSU2_TR(0x62613a);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62613d:{NFSU2_TR(0x62613d);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626140:{NFSU2_TR(0x626140);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626142:{NFSU2_TR(0x626142);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626145:{NFSU2_TR(0x626145);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626148:{NFSU2_TR(0x626148);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62614a:{NFSU2_TR(0x62614a);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626151:{NFSU2_TR(0x626151);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626154:{NFSU2_TR(0x626154);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626156:{NFSU2_TR(0x626156);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626159:{NFSU2_TR(0x626159);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62615c:{NFSU2_TR(0x62615c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62615e:{NFSU2_TR(0x62615e);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626161:{NFSU2_TR(0x626161);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626164:{NFSU2_TR(0x626164);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626166:{NFSU2_TR(0x626166);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626169:{NFSU2_TR(0x626169);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62616c:{NFSU2_TR(0x62616c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62616e:{NFSU2_TR(0x62616e);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626175:{NFSU2_TR(0x626175);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626178:{NFSU2_TR(0x626178);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62617b:{NFSU2_TR(0x62617b);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62617e:{NFSU2_TR(0x62617e);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626181:{NFSU2_TR(0x626181);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626183:{NFSU2_TR(0x626183);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626186:{NFSU2_TR(0x626186);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626189:{NFSU2_TR(0x626189);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62618b:{NFSU2_TR(0x62618b);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62618e:{NFSU2_TR(0x62618e);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626191:{NFSU2_TR(0x626191);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626193:{NFSU2_TR(0x626193);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62619a:{NFSU2_TR(0x62619a);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62619d:{NFSU2_TR(0x62619d);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261a0:{NFSU2_TR(0x6261a0);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261a3:{NFSU2_TR(0x6261a3);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261a6:{NFSU2_TR(0x6261a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6261a8:{NFSU2_TR(0x6261a8);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261ab:{NFSU2_TR(0x6261ab);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261ae:{NFSU2_TR(0x6261ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6261b0:{NFSU2_TR(0x6261b0);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261b3:{NFSU2_TR(0x6261b3);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261b6:{NFSU2_TR(0x6261b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6261b8:{NFSU2_TR(0x6261b8);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6261bf:{NFSU2_TR(0x6261bf);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261c2:{NFSU2_TR(0x6261c2);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261c5:{NFSU2_TR(0x6261c5);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261c8:{NFSU2_TR(0x6261c8);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261cb:{NFSU2_TR(0x6261cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6261cd:{NFSU2_TR(0x6261cd);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261d0:{NFSU2_TR(0x6261d0);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261d3:{NFSU2_TR(0x6261d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6261d5:{NFSU2_TR(0x6261d5);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261d8:{NFSU2_TR(0x6261d8);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261db:{NFSU2_TR(0x6261db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6261dd:{NFSU2_TR(0x6261dd);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6261e4:{NFSU2_TR(0x6261e4);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261e7:{NFSU2_TR(0x6261e7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261e9:{NFSU2_TR(0x6261e9);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261ec:{NFSU2_TR(0x6261ec);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261ef:{NFSU2_TR(0x6261ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6261f1:{NFSU2_TR(0x6261f1);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261f4:{NFSU2_TR(0x6261f4);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261f7:{NFSU2_TR(0x6261f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6261f9:{NFSU2_TR(0x6261f9);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6261fc:{NFSU2_TR(0x6261fc);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6261ff:{NFSU2_TR(0x6261ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626201:{NFSU2_TR(0x626201);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626208:{NFSU2_TR(0x626208);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62620b:{NFSU2_TR(0x62620b);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62620e:{NFSU2_TR(0x62620e);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626211:{NFSU2_TR(0x626211);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626214:{NFSU2_TR(0x626214);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626216:{NFSU2_TR(0x626216);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626219:{NFSU2_TR(0x626219);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62621c:{NFSU2_TR(0x62621c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62621e:{NFSU2_TR(0x62621e);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626221:{NFSU2_TR(0x626221);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626224:{NFSU2_TR(0x626224);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626226:{NFSU2_TR(0x626226);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62622d:{NFSU2_TR(0x62622d);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626230:{NFSU2_TR(0x626230);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626233:{NFSU2_TR(0x626233);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626236:{NFSU2_TR(0x626236);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626239:{NFSU2_TR(0x626239);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62623b:{NFSU2_TR(0x62623b);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62623e:{NFSU2_TR(0x62623e);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626241:{NFSU2_TR(0x626241);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626243:{NFSU2_TR(0x626243);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626246:{NFSU2_TR(0x626246);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626249:{NFSU2_TR(0x626249);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62624b:{NFSU2_TR(0x62624b);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626252:{NFSU2_TR(0x626252);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626255:{NFSU2_TR(0x626255);
{u32 ea_=u32(r4(G+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626258:{NFSU2_TR(0x626258);
{u32 ea_=u32(r4(G+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62625b:{NFSU2_TR(0x62625b);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62625f:{NFSU2_TR(0x62625f);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626262:{NFSU2_TR(0x626262);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626263:{NFSU2_TR(0x626263);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626265:{NFSU2_TR(0x626265);
{u32 ea_=u32(r4(G+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626268:{NFSU2_TR(0x626268);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62626b:{NFSU2_TR(0x62626b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62626d:{NFSU2_TR(0x62626d);
{u32 ea_=u32(r4(G+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626270:{NFSU2_TR(0x626270);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626277:{NFSU2_TR(0x626277);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62627a:{NFSU2_TR(0x62627a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62627b:{NFSU2_TR(0x62627b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62627d:{NFSU2_TR(0x62627d);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626284:{NFSU2_TR(0x626284);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626289ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x4012b0u);}[[clang::musttail]] return blk_4012b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626289(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626289:L626289:{bud-=6;NFSU2_TR(0x626289);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62628d:{NFSU2_TR(0x62628d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1888ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B626294:{NFSU2_TR(0x626294);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B626297:{NFSU2_TR(0x626297);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62629e:{NFSU2_TR(0x62629e);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6262a9:{NFSU2_TR(0x6262a9);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_6262b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6262b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6262b0:L6262b0:{bud-=4;NFSU2_TR(0x6262b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6262b7:{NFSU2_TR(0x6262b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6262b9:{NFSU2_TR(0x6262b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6262bb:{NFSU2_TR(0x6262bb);
if(r1(F+6)){{[[clang::musttail]] return blk_6262fd(ARGS);}}
}
B6262bd:L6262bd:{bud-=5;NFSU2_TR(0x6262bd);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6262c4:{NFSU2_TR(0x6262c4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6262c5:{NFSU2_TR(0x6262c5);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6262ca:{NFSU2_TR(0x6262ca);
__builtin_memmove((G+4),(R+24),4);
}
B6262cc:{NFSU2_TR(0x6262cc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6262d1ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6262d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6262d1:L6262d1:{bud-=14;NFSU2_TR(0x6262d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6262d8:{NFSU2_TR(0x6262d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6262db:{NFSU2_TR(0x6262db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6262dd:{NFSU2_TR(0x6262dd);
__builtin_memmove((R+8),(R+28),4);
}
B6262df:{NFSU2_TR(0x6262df);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B6262e1:{NFSU2_TR(0x6262e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6262e8:{NFSU2_TR(0x6262e8);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+4))));
}
B6262ea:{NFSU2_TR(0x6262ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6262f1:{NFSU2_TR(0x6262f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6262f2:{NFSU2_TR(0x6262f2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6262f3:{NFSU2_TR(0x6262f3);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6262f4:{NFSU2_TR(0x6262f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6262f7:{NFSU2_TR(0x6262f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6262f8:{NFSU2_TR(0x6262f8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6262fdull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c5930u);}[[clang::musttail]] return blk_5c5930(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6262fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6262fd:L6262fd:{bud-=7;NFSU2_TR(0x6262fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626304:{NFSU2_TR(0x626304);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62630b:{NFSU2_TR(0x62630b);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B62630e:{NFSU2_TR(0x62630e);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B62630f:{NFSU2_TR(0x62630f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B626316:{NFSU2_TR(0x626316);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62631d:{NFSU2_TR(0x62631d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6262b0u);}[[clang::musttail]] return blk_6262b0(ARGS);}}
}
B62631f:L62631f:{bud-=1;NFSU2_TR(0x62631f);
{[[clang::musttail]] return blk_626438(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626324(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626324:L626324:{bud-=5;NFSU2_TR(0x626324);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626328:{NFSU2_TR(0x626328);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B62632f:{NFSU2_TR(0x62632f);
u8 U[12];
w4(U+0,u32(u32(u32(0x1928ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B626336:{NFSU2_TR(0x626336);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62633a:{NFSU2_TR(0x62633a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_626345(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626345(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626345:L626345:{bud-=4;NFSU2_TR(0x626345);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626349:{NFSU2_TR(0x626349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B62634b:{NFSU2_TR(0x62634b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62634d:{NFSU2_TR(0x62634d);
if(r1(F+6)){{[[clang::musttail]] return blk_626388(ARGS);}}
}
B62634f:L62634f:{bud-=5;NFSU2_TR(0x62634f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626356:{NFSU2_TR(0x626356);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626357:{NFSU2_TR(0x626357);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62635c:{NFSU2_TR(0x62635c);
__builtin_memmove((G+4),(R+24),4);
}
B62635e:{NFSU2_TR(0x62635e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626363ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626363(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626363:L626363:{bud-=13;NFSU2_TR(0x626363);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62636a:{NFSU2_TR(0x62636a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62636d:{NFSU2_TR(0x62636d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62636f:{NFSU2_TR(0x62636f);
__builtin_memmove((G+0),(R+28),4);
}
B626371:{NFSU2_TR(0x626371);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B626373:{NFSU2_TR(0x626373);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62637a:{NFSU2_TR(0x62637a);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62637c:{NFSU2_TR(0x62637c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62637d:{NFSU2_TR(0x62637d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62637e:{NFSU2_TR(0x62637e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626381:{NFSU2_TR(0x626381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626382:{NFSU2_TR(0x626382);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626383:{NFSU2_TR(0x626383);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626388ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c5930u);}[[clang::musttail]] return blk_5c5930(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626388(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626388:L626388:{bud-=7;NFSU2_TR(0x626388);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62638c:{NFSU2_TR(0x62638c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626393:{NFSU2_TR(0x626393);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B626396:{NFSU2_TR(0x626396);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B626397:{NFSU2_TR(0x626397);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62639b:{NFSU2_TR(0x62639b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6263a2:{NFSU2_TR(0x6263a2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x626345u);}[[clang::musttail]] return blk_626345(ARGS);}}
}
B6263a4:L6263a4:{bud-=1;NFSU2_TR(0x6263a4);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62600cu);}[[clang::musttail]] return blk_62600c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6263a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6263a9:L6263a9:{bud-=5;NFSU2_TR(0x6263a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6263ad:{NFSU2_TR(0x6263ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x1888ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6263b4:{NFSU2_TR(0x6263b4);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6263bb:{NFSU2_TR(0x6263bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6263c6:{NFSU2_TR(0x6263c6);
{[[clang::musttail]] return blk_6263d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6263d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6263d0:L6263d0:{bud-=4;NFSU2_TR(0x6263d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6263d7:{NFSU2_TR(0x6263d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6263d9:{NFSU2_TR(0x6263d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6263db:{NFSU2_TR(0x6263db);
if(r1(F+6)){{[[clang::musttail]] return blk_626416(ARGS);}}
}
B6263dd:L6263dd:{bud-=5;NFSU2_TR(0x6263dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6263e4:{NFSU2_TR(0x6263e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6263e5:{NFSU2_TR(0x6263e5);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6263ea:{NFSU2_TR(0x6263ea);
__builtin_memmove((G+4),(R+24),4);
}
B6263ec:{NFSU2_TR(0x6263ec);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6263f1ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6263f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6263f1:L6263f1:{bud-=13;NFSU2_TR(0x6263f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6263f8:{NFSU2_TR(0x6263f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6263fb:{NFSU2_TR(0x6263fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6263fd:{NFSU2_TR(0x6263fd);
__builtin_memmove((G+0),(R+28),4);
}
B6263ff:{NFSU2_TR(0x6263ff);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B626401:{NFSU2_TR(0x626401);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626408:{NFSU2_TR(0x626408);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62640a:{NFSU2_TR(0x62640a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62640b:{NFSU2_TR(0x62640b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62640c:{NFSU2_TR(0x62640c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62640f:{NFSU2_TR(0x62640f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626410:{NFSU2_TR(0x626410);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626411:{NFSU2_TR(0x626411);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626416ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c5930u);}[[clang::musttail]] return blk_5c5930(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626416(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626416:L626416:{bud-=7;NFSU2_TR(0x626416);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62641d:{NFSU2_TR(0x62641d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626424:{NFSU2_TR(0x626424);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B626427:{NFSU2_TR(0x626427);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B626428:{NFSU2_TR(0x626428);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62642f:{NFSU2_TR(0x62642f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B626436:{NFSU2_TR(0x626436);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6263d0u);}[[clang::musttail]] return blk_6263d0(ARGS);}}
{[[clang::musttail]] return blk_626438(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626438(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626438:L626438:{bud-=5;NFSU2_TR(0x626438);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62643c:{NFSU2_TR(0x62643c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62643f:{NFSU2_TR(0x62643f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x610ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626445:{NFSU2_TR(0x626445);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626447:{NFSU2_TR(0x626447);
if(r1(F+6)){{[[clang::musttail]] return blk_626f6f(ARGS);}}
}
B62644d:L62644d:{bud-=4;NFSU2_TR(0x62644d);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B626450:{NFSU2_TR(0x626450);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(G+4,shr<u8>(r1(G+4),u64(r4(U+0))));
}
B626453:{NFSU2_TR(0x626453);
u8 U[1];
w1(F+11,u8(0x0ull));
w1(U+0,u8(u32(r1(G+4))&u32(r1(G+4))));
w1(F+7,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B626455:{NFSU2_TR(0x626455);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_626f6f(ARGS);}}
}
B62645b:L62645b:{bud-=2;NFSU2_TR(0x62645b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62645d:{NFSU2_TR(0x62645d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626462ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x401e80u);}[[clang::musttail]] return blk_401e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626462(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626462:L626462:{bud-=4;NFSU2_TR(0x626462);
__builtin_memmove((R+24),(G+0),4);
}
B626464:{NFSU2_TR(0x626464);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626466:{NFSU2_TR(0x626466);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62646a:{NFSU2_TR(0x62646a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62646full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x401e80u);}[[clang::musttail]] return blk_401e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62646f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62646f:L62646f:{bud-=13;NFSU2_TR(0x62646f);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B626476:{NFSU2_TR(0x626476);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62647a:{NFSU2_TR(0x62647a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2c10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626480:{NFSU2_TR(0x626480);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2c0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626486:{NFSU2_TR(0x626486);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62648d:{NFSU2_TR(0x62648d);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626491:{NFSU2_TR(0x626491);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ba8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B626498:{NFSU2_TR(0x626498);
u8 U[16];
w4(U+0,u32(u32(u32(0x1bb8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B62649f:{NFSU2_TR(0x62649f);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B6264a2:{NFSU2_TR(0x6264a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6264a4:{NFSU2_TR(0x6264a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6264a8:{NFSU2_TR(0x6264a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6264af:{NFSU2_TR(0x6264af);
if(r1(F+6)){{[[clang::musttail]] return blk_6269f5(ARGS);}}
}
B6264b5:L6264b5:{bud-=2;NFSU2_TR(0x6264b5);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6264b7:{NFSU2_TR(0x6264b7);
if(r1(F+6)){{[[clang::musttail]] return blk_6269f5(ARGS);}}
}
B6264bd:L6264bd:{bud-=2;NFSU2_TR(0x6264bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6264bf:{NFSU2_TR(0x6264bf);
if(r1(F+6)){{[[clang::musttail]] return blk_6269f5(ARGS);}}
}
B6264c5:L6264c5:{bud-=5;NFSU2_TR(0x6264c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6264cc:{NFSU2_TR(0x6264cc);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6264ce:{NFSU2_TR(0x6264ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6264d2:{NFSU2_TR(0x6264d2);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6264d5:{NFSU2_TR(0x6264d5);
w4(G+4,u32(0x10ull));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_6264da(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6264da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6264da:L6264da:{bud-=1;NFSU2_TR(0x6264da);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_6264dc(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(F+10)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6264dau);}goto L6264da;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6264dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6264dc:L6264dc:{bud-=1;NFSU2_TR(0x6264dc);
if(r1(F+6)){{[[clang::musttail]] return blk_626505(ARGS);}}
}
B6264de:L6264de:{bud-=3;NFSU2_TR(0x6264de);
__builtin_memmove((G+0),gp(0x803698),4);
}
B6264e3:{NFSU2_TR(0x6264e3);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6264e5:{NFSU2_TR(0x6264e5);
if(r1(F+6)){{[[clang::musttail]] return blk_626505(ARGS);}}
}
B6264e7:L6264e7:{bud-=6;NFSU2_TR(0x6264e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6264ee:{NFSU2_TR(0x6264ee);
{u32 ea_=u32(r4(G+4)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6264f4:{NFSU2_TR(0x6264f4);
{u32 ea_=u32(u32(8403252u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6264fa:{NFSU2_TR(0x6264fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6264fc:{NFSU2_TR(0x6264fc);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6264ff:{NFSU2_TR(0x6264ff);
if(r1(F+6)){{[[clang::musttail]] return blk_6269f5(ARGS);}}
{[[clang::musttail]] return blk_626505(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626505(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626505:L626505:{bud-=3;NFSU2_TR(0x626505);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626509:{NFSU2_TR(0x626509);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B62650b:{NFSU2_TR(0x62650b);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_626761(ARGS);}}
}
B626511:L626511:{bud-=197;NFSU2_TR(0x626511);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B626515:{NFSU2_TR(0x626515);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626518:{NFSU2_TR(0x626518);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62651b:{NFSU2_TR(0x62651b);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62651e:{NFSU2_TR(0x62651e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626521:{NFSU2_TR(0x626521);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626523:{NFSU2_TR(0x626523);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626525:{NFSU2_TR(0x626525);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626527:{NFSU2_TR(0x626527);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626529:{NFSU2_TR(0x626529);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62652c:{NFSU2_TR(0x62652c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62652f:{NFSU2_TR(0x62652f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626531:{NFSU2_TR(0x626531);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626535:{NFSU2_TR(0x626535);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626538:{NFSU2_TR(0x626538);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62653b:{NFSU2_TR(0x62653b);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62653e:{NFSU2_TR(0x62653e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626541:{NFSU2_TR(0x626541);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626543:{NFSU2_TR(0x626543);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626546:{NFSU2_TR(0x626546);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626548:{NFSU2_TR(0x626548);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62654a:{NFSU2_TR(0x62654a);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62654d:{NFSU2_TR(0x62654d);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626550:{NFSU2_TR(0x626550);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626552:{NFSU2_TR(0x626552);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626556:{NFSU2_TR(0x626556);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626559:{NFSU2_TR(0x626559);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62655c:{NFSU2_TR(0x62655c);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62655f:{NFSU2_TR(0x62655f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626561:{NFSU2_TR(0x626561);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626563:{NFSU2_TR(0x626563);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626566:{NFSU2_TR(0x626566);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626569:{NFSU2_TR(0x626569);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62656b:{NFSU2_TR(0x62656b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62656e:{NFSU2_TR(0x62656e);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626571:{NFSU2_TR(0x626571);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626573:{NFSU2_TR(0x626573);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626577:{NFSU2_TR(0x626577);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626579:{NFSU2_TR(0x626579);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62657c:{NFSU2_TR(0x62657c);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62657f:{NFSU2_TR(0x62657f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626582:{NFSU2_TR(0x626582);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626584:{NFSU2_TR(0x626584);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626587:{NFSU2_TR(0x626587);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62658a:{NFSU2_TR(0x62658a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62658c:{NFSU2_TR(0x62658c);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62658f:{NFSU2_TR(0x62658f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626592:{NFSU2_TR(0x626592);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626594:{NFSU2_TR(0x626594);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626598:{NFSU2_TR(0x626598);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62659b:{NFSU2_TR(0x62659b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62659e:{NFSU2_TR(0x62659e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265a0:{NFSU2_TR(0x6265a0);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265a3:{NFSU2_TR(0x6265a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265a5:{NFSU2_TR(0x6265a5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265a8:{NFSU2_TR(0x6265a8);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265ab:{NFSU2_TR(0x6265ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265ad:{NFSU2_TR(0x6265ad);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265b0:{NFSU2_TR(0x6265b0);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265b3:{NFSU2_TR(0x6265b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265b5:{NFSU2_TR(0x6265b5);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6265bc:{NFSU2_TR(0x6265bc);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265bf:{NFSU2_TR(0x6265bf);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265c2:{NFSU2_TR(0x6265c2);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265c5:{NFSU2_TR(0x6265c5);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265c8:{NFSU2_TR(0x6265c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265ca:{NFSU2_TR(0x6265ca);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265cd:{NFSU2_TR(0x6265cd);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265d0:{NFSU2_TR(0x6265d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265d2:{NFSU2_TR(0x6265d2);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265d5:{NFSU2_TR(0x6265d5);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265d8:{NFSU2_TR(0x6265d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265da:{NFSU2_TR(0x6265da);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6265e1:{NFSU2_TR(0x6265e1);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265e4:{NFSU2_TR(0x6265e4);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265e7:{NFSU2_TR(0x6265e7);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265ea:{NFSU2_TR(0x6265ea);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265ed:{NFSU2_TR(0x6265ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265ef:{NFSU2_TR(0x6265ef);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265f2:{NFSU2_TR(0x6265f2);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265f5:{NFSU2_TR(0x6265f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265f7:{NFSU2_TR(0x6265f7);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6265fa:{NFSU2_TR(0x6265fa);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6265fd:{NFSU2_TR(0x6265fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6265ff:{NFSU2_TR(0x6265ff);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626606:{NFSU2_TR(0x626606);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626609:{NFSU2_TR(0x626609);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62660c:{NFSU2_TR(0x62660c);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62660f:{NFSU2_TR(0x62660f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626612:{NFSU2_TR(0x626612);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626614:{NFSU2_TR(0x626614);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626617:{NFSU2_TR(0x626617);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62661a:{NFSU2_TR(0x62661a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62661c:{NFSU2_TR(0x62661c);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62661f:{NFSU2_TR(0x62661f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626622:{NFSU2_TR(0x626622);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626624:{NFSU2_TR(0x626624);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62662b:{NFSU2_TR(0x62662b);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62662e:{NFSU2_TR(0x62662e);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626631:{NFSU2_TR(0x626631);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626633:{NFSU2_TR(0x626633);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626636:{NFSU2_TR(0x626636);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626638:{NFSU2_TR(0x626638);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62663b:{NFSU2_TR(0x62663b);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62663e:{NFSU2_TR(0x62663e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626640:{NFSU2_TR(0x626640);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626643:{NFSU2_TR(0x626643);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626646:{NFSU2_TR(0x626646);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626648:{NFSU2_TR(0x626648);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62664f:{NFSU2_TR(0x62664f);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626652:{NFSU2_TR(0x626652);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626655:{NFSU2_TR(0x626655);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626658:{NFSU2_TR(0x626658);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62665b:{NFSU2_TR(0x62665b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62665d:{NFSU2_TR(0x62665d);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626660:{NFSU2_TR(0x626660);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626663:{NFSU2_TR(0x626663);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626665:{NFSU2_TR(0x626665);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626668:{NFSU2_TR(0x626668);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62666b:{NFSU2_TR(0x62666b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62666d:{NFSU2_TR(0x62666d);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626674:{NFSU2_TR(0x626674);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626677:{NFSU2_TR(0x626677);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62667a:{NFSU2_TR(0x62667a);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62667d:{NFSU2_TR(0x62667d);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626680:{NFSU2_TR(0x626680);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626682:{NFSU2_TR(0x626682);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626685:{NFSU2_TR(0x626685);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626688:{NFSU2_TR(0x626688);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62668a:{NFSU2_TR(0x62668a);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62668d:{NFSU2_TR(0x62668d);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626690:{NFSU2_TR(0x626690);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626692:{NFSU2_TR(0x626692);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626699:{NFSU2_TR(0x626699);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62669c:{NFSU2_TR(0x62669c);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62669f:{NFSU2_TR(0x62669f);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266a2:{NFSU2_TR(0x6266a2);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266a5:{NFSU2_TR(0x6266a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6266a7:{NFSU2_TR(0x6266a7);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266aa:{NFSU2_TR(0x6266aa);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266ad:{NFSU2_TR(0x6266ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6266af:{NFSU2_TR(0x6266af);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266b2:{NFSU2_TR(0x6266b2);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266b5:{NFSU2_TR(0x6266b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6266b7:{NFSU2_TR(0x6266b7);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6266be:{NFSU2_TR(0x6266be);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266c1:{NFSU2_TR(0x6266c1);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266c4:{NFSU2_TR(0x6266c4);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266c6:{NFSU2_TR(0x6266c6);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266c9:{NFSU2_TR(0x6266c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6266cb:{NFSU2_TR(0x6266cb);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266ce:{NFSU2_TR(0x6266ce);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266d1:{NFSU2_TR(0x6266d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6266d3:{NFSU2_TR(0x6266d3);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266d6:{NFSU2_TR(0x6266d6);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266d9:{NFSU2_TR(0x6266d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6266db:{NFSU2_TR(0x6266db);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6266e2:{NFSU2_TR(0x6266e2);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266e5:{NFSU2_TR(0x6266e5);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266e8:{NFSU2_TR(0x6266e8);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266eb:{NFSU2_TR(0x6266eb);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266ee:{NFSU2_TR(0x6266ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6266f0:{NFSU2_TR(0x6266f0);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266f3:{NFSU2_TR(0x6266f3);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266f6:{NFSU2_TR(0x6266f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6266f8:{NFSU2_TR(0x6266f8);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6266fb:{NFSU2_TR(0x6266fb);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6266fe:{NFSU2_TR(0x6266fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626700:{NFSU2_TR(0x626700);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626707:{NFSU2_TR(0x626707);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62670a:{NFSU2_TR(0x62670a);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62670d:{NFSU2_TR(0x62670d);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626710:{NFSU2_TR(0x626710);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626713:{NFSU2_TR(0x626713);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626715:{NFSU2_TR(0x626715);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626718:{NFSU2_TR(0x626718);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62671b:{NFSU2_TR(0x62671b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62671d:{NFSU2_TR(0x62671d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626720:{NFSU2_TR(0x626720);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626723:{NFSU2_TR(0x626723);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626725:{NFSU2_TR(0x626725);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62672c:{NFSU2_TR(0x62672c);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62672f:{NFSU2_TR(0x62672f);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626732:{NFSU2_TR(0x626732);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626735:{NFSU2_TR(0x626735);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626738:{NFSU2_TR(0x626738);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62673c:{NFSU2_TR(0x62673c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62673d:{NFSU2_TR(0x62673d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62673e:{NFSU2_TR(0x62673e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626740:{NFSU2_TR(0x626740);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626743:{NFSU2_TR(0x626743);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626746:{NFSU2_TR(0x626746);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626748:{NFSU2_TR(0x626748);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62674b:{NFSU2_TR(0x62674b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62674e:{NFSU2_TR(0x62674e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626750:{NFSU2_TR(0x626750);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626757:{NFSU2_TR(0x626757);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62675cull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x4012b0u);}[[clang::musttail]] return blk_4012b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62675c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62675c:L62675c:{bud-=1;NFSU2_TR(0x62675c);
{[[clang::musttail]] return blk_6269b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626761(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626761:L626761:{bud-=197;NFSU2_TR(0x626761);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626765:{NFSU2_TR(0x626765);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626768:{NFSU2_TR(0x626768);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62676b:{NFSU2_TR(0x62676b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62676d:{NFSU2_TR(0x62676d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62676f:{NFSU2_TR(0x62676f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626771:{NFSU2_TR(0x626771);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626774:{NFSU2_TR(0x626774);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626777:{NFSU2_TR(0x626777);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626779:{NFSU2_TR(0x626779);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62677c:{NFSU2_TR(0x62677c);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62677f:{NFSU2_TR(0x62677f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626781:{NFSU2_TR(0x626781);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626785:{NFSU2_TR(0x626785);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626788:{NFSU2_TR(0x626788);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62678b:{NFSU2_TR(0x62678b);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62678e:{NFSU2_TR(0x62678e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626790:{NFSU2_TR(0x626790);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626792:{NFSU2_TR(0x626792);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626795:{NFSU2_TR(0x626795);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626798:{NFSU2_TR(0x626798);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62679a:{NFSU2_TR(0x62679a);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62679d:{NFSU2_TR(0x62679d);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267a0:{NFSU2_TR(0x6267a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267a2:{NFSU2_TR(0x6267a2);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6267a6:{NFSU2_TR(0x6267a6);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267a9:{NFSU2_TR(0x6267a9);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267ac:{NFSU2_TR(0x6267ac);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267af:{NFSU2_TR(0x6267af);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267b2:{NFSU2_TR(0x6267b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267b4:{NFSU2_TR(0x6267b4);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267b7:{NFSU2_TR(0x6267b7);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267b9:{NFSU2_TR(0x6267b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267bb:{NFSU2_TR(0x6267bb);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267be:{NFSU2_TR(0x6267be);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267c1:{NFSU2_TR(0x6267c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267c3:{NFSU2_TR(0x6267c3);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6267c7:{NFSU2_TR(0x6267c7);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267c9:{NFSU2_TR(0x6267c9);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267cc:{NFSU2_TR(0x6267cc);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267cf:{NFSU2_TR(0x6267cf);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267d2:{NFSU2_TR(0x6267d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267d4:{NFSU2_TR(0x6267d4);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267d7:{NFSU2_TR(0x6267d7);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267da:{NFSU2_TR(0x6267da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267dc:{NFSU2_TR(0x6267dc);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267df:{NFSU2_TR(0x6267df);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267e2:{NFSU2_TR(0x6267e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267e4:{NFSU2_TR(0x6267e4);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6267e8:{NFSU2_TR(0x6267e8);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267eb:{NFSU2_TR(0x6267eb);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267ee:{NFSU2_TR(0x6267ee);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267f0:{NFSU2_TR(0x6267f0);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267f3:{NFSU2_TR(0x6267f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267f5:{NFSU2_TR(0x6267f5);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6267f8:{NFSU2_TR(0x6267f8);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6267fb:{NFSU2_TR(0x6267fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6267fd:{NFSU2_TR(0x6267fd);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626800:{NFSU2_TR(0x626800);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626803:{NFSU2_TR(0x626803);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626805:{NFSU2_TR(0x626805);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62680c:{NFSU2_TR(0x62680c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62680f:{NFSU2_TR(0x62680f);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626812:{NFSU2_TR(0x626812);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626815:{NFSU2_TR(0x626815);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626818:{NFSU2_TR(0x626818);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62681a:{NFSU2_TR(0x62681a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62681d:{NFSU2_TR(0x62681d);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626820:{NFSU2_TR(0x626820);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626822:{NFSU2_TR(0x626822);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626825:{NFSU2_TR(0x626825);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626828:{NFSU2_TR(0x626828);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62682a:{NFSU2_TR(0x62682a);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626831:{NFSU2_TR(0x626831);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626834:{NFSU2_TR(0x626834);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626837:{NFSU2_TR(0x626837);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62683a:{NFSU2_TR(0x62683a);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62683d:{NFSU2_TR(0x62683d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62683f:{NFSU2_TR(0x62683f);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626842:{NFSU2_TR(0x626842);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626845:{NFSU2_TR(0x626845);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626847:{NFSU2_TR(0x626847);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62684a:{NFSU2_TR(0x62684a);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62684d:{NFSU2_TR(0x62684d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62684f:{NFSU2_TR(0x62684f);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626856:{NFSU2_TR(0x626856);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626859:{NFSU2_TR(0x626859);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62685c:{NFSU2_TR(0x62685c);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62685f:{NFSU2_TR(0x62685f);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626862:{NFSU2_TR(0x626862);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626864:{NFSU2_TR(0x626864);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626867:{NFSU2_TR(0x626867);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62686a:{NFSU2_TR(0x62686a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62686c:{NFSU2_TR(0x62686c);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62686f:{NFSU2_TR(0x62686f);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626872:{NFSU2_TR(0x626872);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626874:{NFSU2_TR(0x626874);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62687b:{NFSU2_TR(0x62687b);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62687e:{NFSU2_TR(0x62687e);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626881:{NFSU2_TR(0x626881);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626883:{NFSU2_TR(0x626883);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626886:{NFSU2_TR(0x626886);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626888:{NFSU2_TR(0x626888);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62688b:{NFSU2_TR(0x62688b);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62688e:{NFSU2_TR(0x62688e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626890:{NFSU2_TR(0x626890);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626893:{NFSU2_TR(0x626893);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626896:{NFSU2_TR(0x626896);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626898:{NFSU2_TR(0x626898);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62689f:{NFSU2_TR(0x62689f);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268a2:{NFSU2_TR(0x6268a2);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268a5:{NFSU2_TR(0x6268a5);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268a8:{NFSU2_TR(0x6268a8);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268ab:{NFSU2_TR(0x6268ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6268ad:{NFSU2_TR(0x6268ad);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268b0:{NFSU2_TR(0x6268b0);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268b3:{NFSU2_TR(0x6268b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6268b5:{NFSU2_TR(0x6268b5);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268b8:{NFSU2_TR(0x6268b8);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268bb:{NFSU2_TR(0x6268bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6268bd:{NFSU2_TR(0x6268bd);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6268c4:{NFSU2_TR(0x6268c4);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268c7:{NFSU2_TR(0x6268c7);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268ca:{NFSU2_TR(0x6268ca);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268cd:{NFSU2_TR(0x6268cd);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268d0:{NFSU2_TR(0x6268d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6268d2:{NFSU2_TR(0x6268d2);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268d5:{NFSU2_TR(0x6268d5);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268d8:{NFSU2_TR(0x6268d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6268da:{NFSU2_TR(0x6268da);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268dd:{NFSU2_TR(0x6268dd);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268e0:{NFSU2_TR(0x6268e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6268e2:{NFSU2_TR(0x6268e2);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6268e9:{NFSU2_TR(0x6268e9);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268ec:{NFSU2_TR(0x6268ec);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268ef:{NFSU2_TR(0x6268ef);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268f2:{NFSU2_TR(0x6268f2);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268f5:{NFSU2_TR(0x6268f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6268f7:{NFSU2_TR(0x6268f7);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6268fa:{NFSU2_TR(0x6268fa);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6268fd:{NFSU2_TR(0x6268fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6268ff:{NFSU2_TR(0x6268ff);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626902:{NFSU2_TR(0x626902);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626905:{NFSU2_TR(0x626905);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626907:{NFSU2_TR(0x626907);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62690e:{NFSU2_TR(0x62690e);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626911:{NFSU2_TR(0x626911);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626914:{NFSU2_TR(0x626914);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626916:{NFSU2_TR(0x626916);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626919:{NFSU2_TR(0x626919);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62691b:{NFSU2_TR(0x62691b);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62691e:{NFSU2_TR(0x62691e);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626921:{NFSU2_TR(0x626921);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626923:{NFSU2_TR(0x626923);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626926:{NFSU2_TR(0x626926);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626929:{NFSU2_TR(0x626929);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62692b:{NFSU2_TR(0x62692b);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626932:{NFSU2_TR(0x626932);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626935:{NFSU2_TR(0x626935);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626938:{NFSU2_TR(0x626938);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62693b:{NFSU2_TR(0x62693b);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62693e:{NFSU2_TR(0x62693e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626940:{NFSU2_TR(0x626940);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626943:{NFSU2_TR(0x626943);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626946:{NFSU2_TR(0x626946);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626948:{NFSU2_TR(0x626948);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62694b:{NFSU2_TR(0x62694b);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62694e:{NFSU2_TR(0x62694e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626950:{NFSU2_TR(0x626950);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626957:{NFSU2_TR(0x626957);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62695a:{NFSU2_TR(0x62695a);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62695d:{NFSU2_TR(0x62695d);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626960:{NFSU2_TR(0x626960);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626963:{NFSU2_TR(0x626963);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626965:{NFSU2_TR(0x626965);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626968:{NFSU2_TR(0x626968);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62696b:{NFSU2_TR(0x62696b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62696d:{NFSU2_TR(0x62696d);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626970:{NFSU2_TR(0x626970);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626973:{NFSU2_TR(0x626973);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626975:{NFSU2_TR(0x626975);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62697c:{NFSU2_TR(0x62697c);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62697f:{NFSU2_TR(0x62697f);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626982:{NFSU2_TR(0x626982);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626985:{NFSU2_TR(0x626985);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626988:{NFSU2_TR(0x626988);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62698c:{NFSU2_TR(0x62698c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62698d:{NFSU2_TR(0x62698d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62698e:{NFSU2_TR(0x62698e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626990:{NFSU2_TR(0x626990);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626993:{NFSU2_TR(0x626993);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626996:{NFSU2_TR(0x626996);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626998:{NFSU2_TR(0x626998);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62699b:{NFSU2_TR(0x62699b);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62699e:{NFSU2_TR(0x62699e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6269a0:{NFSU2_TR(0x6269a0);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6269a7:{NFSU2_TR(0x6269a7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6269acull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x4012b0u);}[[clang::musttail]] return blk_4012b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6269ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6269ac:L6269ac:{bud-=1;NFSU2_TR(0x6269ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_6269b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6269b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6269b0:L6269b0:{bud-=7;NFSU2_TR(0x6269b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6269b7:{NFSU2_TR(0x6269b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6269bb:{NFSU2_TR(0x6269bb);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B6269be:{NFSU2_TR(0x6269be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6269bf:{NFSU2_TR(0x6269bf);
u8 U[4];
w4(U+0,u32(0x6bfa56daull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6269c4:{NFSU2_TR(0x6269c4);
__builtin_memmove((G+4),(R+28),4);
}
B6269c6:{NFSU2_TR(0x6269c6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6269cbull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6269cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6269cb:L6269cb:{bud-=13;NFSU2_TR(0x6269cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6269d2:{NFSU2_TR(0x6269d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6269d9:{NFSU2_TR(0x6269d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6269dc:{NFSU2_TR(0x6269dc);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B6269de:{NFSU2_TR(0x6269de);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6269e5:{NFSU2_TR(0x6269e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6269e7:{NFSU2_TR(0x6269e7);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B6269e9:{NFSU2_TR(0x6269e9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6269ea:{NFSU2_TR(0x6269ea);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6269eb:{NFSU2_TR(0x6269eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6269ee:{NFSU2_TR(0x6269ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6269ef:{NFSU2_TR(0x6269ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6269f0:{NFSU2_TR(0x6269f0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6269f5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c5930u);}[[clang::musttail]] return blk_5c5930(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6269f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6269f5:L6269f5:{bud-=3;NFSU2_TR(0x6269f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6269fc:{NFSU2_TR(0x6269fc);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6269fe:{NFSU2_TR(0x6269fe);
if(r1(F+6)){{[[clang::musttail]] return blk_62700e(ARGS);}}
}
B626a04:L626a04:{bud-=3;NFSU2_TR(0x626a04);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626a0b:{NFSU2_TR(0x626a0b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626a0d:{NFSU2_TR(0x626a0d);
if(r1(F+6)){{[[clang::musttail]] return blk_62700e(ARGS);}}
}
B626a13:L626a13:{bud-=3;NFSU2_TR(0x626a13);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626a1a:{NFSU2_TR(0x626a1a);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626a1c:{NFSU2_TR(0x626a1c);
if(r1(F+6)){{[[clang::musttail]] return blk_62700e(ARGS);}}
}
B626a22:L626a22:{bud-=5;NFSU2_TR(0x626a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626a29:{NFSU2_TR(0x626a29);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B626a30:{NFSU2_TR(0x626a30);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B626a33:{NFSU2_TR(0x626a33);
__builtin_memmove((R+28),(G+0),4);
}
B626a35:{NFSU2_TR(0x626a35);
w4(G+4,u32(0x10ull));
{[[clang::musttail]] return blk_626a3a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626a3a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626a3a:L626a3a:{bud-=1;NFSU2_TR(0x626a3a);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_626a3c(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(F+10)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(bud<=0,0)){EXIT(0x626a3au);}goto L626a3a;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626a3c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626a3c:L626a3c:{bud-=6;NFSU2_TR(0x626a3c);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626a3f:{NFSU2_TR(0x626a3f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B626a41:{NFSU2_TR(0x626a41);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B626a44:{NFSU2_TR(0x626a44);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626a4b:{NFSU2_TR(0x626a4b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626a4d:{NFSU2_TR(0x626a4d);
if(r1(F+6)){{[[clang::musttail]] return blk_626a76(ARGS);}}
}
B626a4f:L626a4f:{bud-=3;NFSU2_TR(0x626a4f);
__builtin_memmove((G+0),gp(0x8036a8),4);
}
B626a54:{NFSU2_TR(0x626a54);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626a56:{NFSU2_TR(0x626a56);
if(r1(F+6)){{[[clang::musttail]] return blk_626a76(ARGS);}}
}
B626a58:L626a58:{bud-=6;NFSU2_TR(0x626a58);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626a5f:{NFSU2_TR(0x626a5f);
{u32 ea_=u32(r4(R+8)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626a65:{NFSU2_TR(0x626a65);
{u32 ea_=u32(u32(8403252u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B626a6b:{NFSU2_TR(0x626a6b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B626a6d:{NFSU2_TR(0x626a6d);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B626a70:{NFSU2_TR(0x626a70);
if(r1(F+6)){{[[clang::musttail]] return blk_62700c(ARGS);}}
{[[clang::musttail]] return blk_626a76(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626a76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626a76:L626a76:{bud-=3;NFSU2_TR(0x626a76);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626a7a:{NFSU2_TR(0x626a7a);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B626a7c:{NFSU2_TR(0x626a7c);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_626cd1(ARGS);}}
}
B626a82:L626a82:{bud-=197;NFSU2_TR(0x626a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B626a89:{NFSU2_TR(0x626a89);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626a8b:{NFSU2_TR(0x626a8b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626a8d:{NFSU2_TR(0x626a8d);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626a90:{NFSU2_TR(0x626a90);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626a93:{NFSU2_TR(0x626a93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626a95:{NFSU2_TR(0x626a95);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626a98:{NFSU2_TR(0x626a98);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626a9b:{NFSU2_TR(0x626a9b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626a9d:{NFSU2_TR(0x626a9d);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626aa0:{NFSU2_TR(0x626aa0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626aa3:{NFSU2_TR(0x626aa3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626aa5:{NFSU2_TR(0x626aa5);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626aa9:{NFSU2_TR(0x626aa9);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626aac:{NFSU2_TR(0x626aac);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626aae:{NFSU2_TR(0x626aae);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ab1:{NFSU2_TR(0x626ab1);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ab4:{NFSU2_TR(0x626ab4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ab6:{NFSU2_TR(0x626ab6);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ab9:{NFSU2_TR(0x626ab9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626abc:{NFSU2_TR(0x626abc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626abe:{NFSU2_TR(0x626abe);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ac1:{NFSU2_TR(0x626ac1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ac4:{NFSU2_TR(0x626ac4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ac6:{NFSU2_TR(0x626ac6);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626aca:{NFSU2_TR(0x626aca);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626acc:{NFSU2_TR(0x626acc);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626acf:{NFSU2_TR(0x626acf);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ad2:{NFSU2_TR(0x626ad2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ad5:{NFSU2_TR(0x626ad5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ad7:{NFSU2_TR(0x626ad7);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ada:{NFSU2_TR(0x626ada);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626add:{NFSU2_TR(0x626add);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626adf:{NFSU2_TR(0x626adf);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ae2:{NFSU2_TR(0x626ae2);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ae5:{NFSU2_TR(0x626ae5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ae7:{NFSU2_TR(0x626ae7);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626aeb:{NFSU2_TR(0x626aeb);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626aee:{NFSU2_TR(0x626aee);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626af1:{NFSU2_TR(0x626af1);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626af4:{NFSU2_TR(0x626af4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626af7:{NFSU2_TR(0x626af7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626af9:{NFSU2_TR(0x626af9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626afb:{NFSU2_TR(0x626afb);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626afe:{NFSU2_TR(0x626afe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b00:{NFSU2_TR(0x626b00);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b03:{NFSU2_TR(0x626b03);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b06:{NFSU2_TR(0x626b06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b08:{NFSU2_TR(0x626b08);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626b0c:{NFSU2_TR(0x626b0c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B626b0e:{NFSU2_TR(0x626b0e);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b11:{NFSU2_TR(0x626b11);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b14:{NFSU2_TR(0x626b14);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b17:{NFSU2_TR(0x626b17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b19:{NFSU2_TR(0x626b19);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b1c:{NFSU2_TR(0x626b1c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b1f:{NFSU2_TR(0x626b1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b21:{NFSU2_TR(0x626b21);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b23:{NFSU2_TR(0x626b23);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b26:{NFSU2_TR(0x626b26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b28:{NFSU2_TR(0x626b28);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626b2f:{NFSU2_TR(0x626b2f);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b32:{NFSU2_TR(0x626b32);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b35:{NFSU2_TR(0x626b35);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b38:{NFSU2_TR(0x626b38);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b3b:{NFSU2_TR(0x626b3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b3d:{NFSU2_TR(0x626b3d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B626b3f:{NFSU2_TR(0x626b3f);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b42:{NFSU2_TR(0x626b42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b44:{NFSU2_TR(0x626b44);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b47:{NFSU2_TR(0x626b47);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b4a:{NFSU2_TR(0x626b4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b4c:{NFSU2_TR(0x626b4c);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626b53:{NFSU2_TR(0x626b53);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B626b55:{NFSU2_TR(0x626b55);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b58:{NFSU2_TR(0x626b58);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b5b:{NFSU2_TR(0x626b5b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b5e:{NFSU2_TR(0x626b5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b60:{NFSU2_TR(0x626b60);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b63:{NFSU2_TR(0x626b63);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b66:{NFSU2_TR(0x626b66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b68:{NFSU2_TR(0x626b68);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b6b:{NFSU2_TR(0x626b6b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b6e:{NFSU2_TR(0x626b6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b70:{NFSU2_TR(0x626b70);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626b77:{NFSU2_TR(0x626b77);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b7a:{NFSU2_TR(0x626b7a);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b7d:{NFSU2_TR(0x626b7d);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b80:{NFSU2_TR(0x626b80);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b83:{NFSU2_TR(0x626b83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b85:{NFSU2_TR(0x626b85);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B626b87:{NFSU2_TR(0x626b87);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b8a:{NFSU2_TR(0x626b8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b8c:{NFSU2_TR(0x626b8c);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b8f:{NFSU2_TR(0x626b8f);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626b92:{NFSU2_TR(0x626b92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626b94:{NFSU2_TR(0x626b94);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626b9b:{NFSU2_TR(0x626b9b);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626b9e:{NFSU2_TR(0x626b9e);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ba1:{NFSU2_TR(0x626ba1);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ba4:{NFSU2_TR(0x626ba4);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ba7:{NFSU2_TR(0x626ba7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ba9:{NFSU2_TR(0x626ba9);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bac:{NFSU2_TR(0x626bac);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626baf:{NFSU2_TR(0x626baf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626bb1:{NFSU2_TR(0x626bb1);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bb3:{NFSU2_TR(0x626bb3);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626bb6:{NFSU2_TR(0x626bb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626bb8:{NFSU2_TR(0x626bb8);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626bbf:{NFSU2_TR(0x626bbf);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bc2:{NFSU2_TR(0x626bc2);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626bc5:{NFSU2_TR(0x626bc5);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bc8:{NFSU2_TR(0x626bc8);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626bcb:{NFSU2_TR(0x626bcb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626bcd:{NFSU2_TR(0x626bcd);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bd0:{NFSU2_TR(0x626bd0);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626bd3:{NFSU2_TR(0x626bd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626bd5:{NFSU2_TR(0x626bd5);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bd8:{NFSU2_TR(0x626bd8);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626bdb:{NFSU2_TR(0x626bdb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626bdd:{NFSU2_TR(0x626bdd);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626be4:{NFSU2_TR(0x626be4);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626be7:{NFSU2_TR(0x626be7);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626bea:{NFSU2_TR(0x626bea);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bed:{NFSU2_TR(0x626bed);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626bf0:{NFSU2_TR(0x626bf0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626bf2:{NFSU2_TR(0x626bf2);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bf5:{NFSU2_TR(0x626bf5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626bf8:{NFSU2_TR(0x626bf8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626bfa:{NFSU2_TR(0x626bfa);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626bfd:{NFSU2_TR(0x626bfd);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c00:{NFSU2_TR(0x626c00);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c02:{NFSU2_TR(0x626c02);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626c09:{NFSU2_TR(0x626c09);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c0c:{NFSU2_TR(0x626c0c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c0f:{NFSU2_TR(0x626c0f);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c12:{NFSU2_TR(0x626c12);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c15:{NFSU2_TR(0x626c15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c17:{NFSU2_TR(0x626c17);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c1a:{NFSU2_TR(0x626c1a);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c1d:{NFSU2_TR(0x626c1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c1f:{NFSU2_TR(0x626c1f);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c22:{NFSU2_TR(0x626c22);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c25:{NFSU2_TR(0x626c25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c27:{NFSU2_TR(0x626c27);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626c2e:{NFSU2_TR(0x626c2e);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c31:{NFSU2_TR(0x626c31);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c34:{NFSU2_TR(0x626c34);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c37:{NFSU2_TR(0x626c37);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c3a:{NFSU2_TR(0x626c3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c3c:{NFSU2_TR(0x626c3c);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c3f:{NFSU2_TR(0x626c3f);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c42:{NFSU2_TR(0x626c42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c44:{NFSU2_TR(0x626c44);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c46:{NFSU2_TR(0x626c46);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c49:{NFSU2_TR(0x626c49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c4b:{NFSU2_TR(0x626c4b);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626c52:{NFSU2_TR(0x626c52);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c55:{NFSU2_TR(0x626c55);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c58:{NFSU2_TR(0x626c58);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c5b:{NFSU2_TR(0x626c5b);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c5e:{NFSU2_TR(0x626c5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c60:{NFSU2_TR(0x626c60);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c63:{NFSU2_TR(0x626c63);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c66:{NFSU2_TR(0x626c66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c68:{NFSU2_TR(0x626c68);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c6b:{NFSU2_TR(0x626c6b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c6e:{NFSU2_TR(0x626c6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c70:{NFSU2_TR(0x626c70);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626c77:{NFSU2_TR(0x626c77);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c7a:{NFSU2_TR(0x626c7a);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c7d:{NFSU2_TR(0x626c7d);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c80:{NFSU2_TR(0x626c80);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c83:{NFSU2_TR(0x626c83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c85:{NFSU2_TR(0x626c85);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c88:{NFSU2_TR(0x626c88);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c8b:{NFSU2_TR(0x626c8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c8d:{NFSU2_TR(0x626c8d);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c90:{NFSU2_TR(0x626c90);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626c93:{NFSU2_TR(0x626c93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626c95:{NFSU2_TR(0x626c95);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626c9c:{NFSU2_TR(0x626c9c);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626c9f:{NFSU2_TR(0x626c9f);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ca2:{NFSU2_TR(0x626ca2);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ca5:{NFSU2_TR(0x626ca5);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ca8:{NFSU2_TR(0x626ca8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626caa:{NFSU2_TR(0x626caa);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626cad:{NFSU2_TR(0x626cad);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626cb0:{NFSU2_TR(0x626cb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626cb2:{NFSU2_TR(0x626cb2);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626cb5:{NFSU2_TR(0x626cb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B626cb9:{NFSU2_TR(0x626cb9);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626cbc:{NFSU2_TR(0x626cbc);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626cbd:{NFSU2_TR(0x626cbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626cbe:{NFSU2_TR(0x626cbe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626cc0:{NFSU2_TR(0x626cc0);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626cc7:{NFSU2_TR(0x626cc7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626cccull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x4012b0u);}[[clang::musttail]] return blk_4012b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626ccc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626ccc:L626ccc:{bud-=1;NFSU2_TR(0x626ccc);
{[[clang::musttail]] return blk_626f22(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626cd1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626cd1:L626cd1:{bud-=197;NFSU2_TR(0x626cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626cd8:{NFSU2_TR(0x626cd8);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626cda:{NFSU2_TR(0x626cda);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626cdc:{NFSU2_TR(0x626cdc);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626cdf:{NFSU2_TR(0x626cdf);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ce2:{NFSU2_TR(0x626ce2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ce4:{NFSU2_TR(0x626ce4);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ce7:{NFSU2_TR(0x626ce7);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626cea:{NFSU2_TR(0x626cea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626cec:{NFSU2_TR(0x626cec);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626cef:{NFSU2_TR(0x626cef);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626cf2:{NFSU2_TR(0x626cf2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626cf4:{NFSU2_TR(0x626cf4);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626cf8:{NFSU2_TR(0x626cf8);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626cfa:{NFSU2_TR(0x626cfa);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626cfd:{NFSU2_TR(0x626cfd);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d00:{NFSU2_TR(0x626d00);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d03:{NFSU2_TR(0x626d03);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d05:{NFSU2_TR(0x626d05);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d08:{NFSU2_TR(0x626d08);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d0b:{NFSU2_TR(0x626d0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d0d:{NFSU2_TR(0x626d0d);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d10:{NFSU2_TR(0x626d10);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d13:{NFSU2_TR(0x626d13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d15:{NFSU2_TR(0x626d15);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626d19:{NFSU2_TR(0x626d19);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d1c:{NFSU2_TR(0x626d1c);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d1f:{NFSU2_TR(0x626d1f);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d21:{NFSU2_TR(0x626d21);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d24:{NFSU2_TR(0x626d24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d26:{NFSU2_TR(0x626d26);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d29:{NFSU2_TR(0x626d29);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d2c:{NFSU2_TR(0x626d2c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d2e:{NFSU2_TR(0x626d2e);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d31:{NFSU2_TR(0x626d31);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d34:{NFSU2_TR(0x626d34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d36:{NFSU2_TR(0x626d36);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626d3a:{NFSU2_TR(0x626d3a);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d3d:{NFSU2_TR(0x626d3d);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d40:{NFSU2_TR(0x626d40);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d43:{NFSU2_TR(0x626d43);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d46:{NFSU2_TR(0x626d46);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d48:{NFSU2_TR(0x626d48);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d4a:{NFSU2_TR(0x626d4a);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d4d:{NFSU2_TR(0x626d4d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d4f:{NFSU2_TR(0x626d4f);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d52:{NFSU2_TR(0x626d52);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d55:{NFSU2_TR(0x626d55);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d57:{NFSU2_TR(0x626d57);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626d5b:{NFSU2_TR(0x626d5b);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d5e:{NFSU2_TR(0x626d5e);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d61:{NFSU2_TR(0x626d61);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d64:{NFSU2_TR(0x626d64);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d66:{NFSU2_TR(0x626d66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d68:{NFSU2_TR(0x626d68);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B626d6a:{NFSU2_TR(0x626d6a);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d6d:{NFSU2_TR(0x626d6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d6f:{NFSU2_TR(0x626d6f);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d72:{NFSU2_TR(0x626d72);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d75:{NFSU2_TR(0x626d75);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d77:{NFSU2_TR(0x626d77);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626d7e:{NFSU2_TR(0x626d7e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B626d80:{NFSU2_TR(0x626d80);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d83:{NFSU2_TR(0x626d83);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d86:{NFSU2_TR(0x626d86);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d89:{NFSU2_TR(0x626d89);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d8b:{NFSU2_TR(0x626d8b);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d8e:{NFSU2_TR(0x626d8e);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d91:{NFSU2_TR(0x626d91);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d93:{NFSU2_TR(0x626d93);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626d96:{NFSU2_TR(0x626d96);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626d99:{NFSU2_TR(0x626d99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626d9b:{NFSU2_TR(0x626d9b);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626da2:{NFSU2_TR(0x626da2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B626da4:{NFSU2_TR(0x626da4);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626da7:{NFSU2_TR(0x626da7);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626daa:{NFSU2_TR(0x626daa);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626dad:{NFSU2_TR(0x626dad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626daf:{NFSU2_TR(0x626daf);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626db2:{NFSU2_TR(0x626db2);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626db5:{NFSU2_TR(0x626db5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626db7:{NFSU2_TR(0x626db7);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626dba:{NFSU2_TR(0x626dba);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626dbd:{NFSU2_TR(0x626dbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626dbf:{NFSU2_TR(0x626dbf);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626dc6:{NFSU2_TR(0x626dc6);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626dc9:{NFSU2_TR(0x626dc9);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626dcc:{NFSU2_TR(0x626dcc);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626dcf:{NFSU2_TR(0x626dcf);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626dd2:{NFSU2_TR(0x626dd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626dd4:{NFSU2_TR(0x626dd4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B626dd6:{NFSU2_TR(0x626dd6);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626dd9:{NFSU2_TR(0x626dd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ddb:{NFSU2_TR(0x626ddb);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626dde:{NFSU2_TR(0x626dde);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626de1:{NFSU2_TR(0x626de1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626de3:{NFSU2_TR(0x626de3);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626dea:{NFSU2_TR(0x626dea);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ded:{NFSU2_TR(0x626ded);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626def:{NFSU2_TR(0x626def);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626df2:{NFSU2_TR(0x626df2);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626df5:{NFSU2_TR(0x626df5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626df7:{NFSU2_TR(0x626df7);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626dfa:{NFSU2_TR(0x626dfa);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626dfd:{NFSU2_TR(0x626dfd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626dff:{NFSU2_TR(0x626dff);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e02:{NFSU2_TR(0x626e02);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e05:{NFSU2_TR(0x626e05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e07:{NFSU2_TR(0x626e07);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626e0e:{NFSU2_TR(0x626e0e);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e11:{NFSU2_TR(0x626e11);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e14:{NFSU2_TR(0x626e14);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e17:{NFSU2_TR(0x626e17);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e1a:{NFSU2_TR(0x626e1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e1c:{NFSU2_TR(0x626e1c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e1f:{NFSU2_TR(0x626e1f);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e22:{NFSU2_TR(0x626e22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e24:{NFSU2_TR(0x626e24);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e27:{NFSU2_TR(0x626e27);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e2a:{NFSU2_TR(0x626e2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e2c:{NFSU2_TR(0x626e2c);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626e33:{NFSU2_TR(0x626e33);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e36:{NFSU2_TR(0x626e36);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e39:{NFSU2_TR(0x626e39);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e3c:{NFSU2_TR(0x626e3c);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e3f:{NFSU2_TR(0x626e3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e41:{NFSU2_TR(0x626e41);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e44:{NFSU2_TR(0x626e44);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e47:{NFSU2_TR(0x626e47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e49:{NFSU2_TR(0x626e49);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e4c:{NFSU2_TR(0x626e4c);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e4f:{NFSU2_TR(0x626e4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e51:{NFSU2_TR(0x626e51);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626e58:{NFSU2_TR(0x626e58);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e5b:{NFSU2_TR(0x626e5b);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e5e:{NFSU2_TR(0x626e5e);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e61:{NFSU2_TR(0x626e61);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e64:{NFSU2_TR(0x626e64);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e66:{NFSU2_TR(0x626e66);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e69:{NFSU2_TR(0x626e69);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e6c:{NFSU2_TR(0x626e6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e6e:{NFSU2_TR(0x626e6e);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e71:{NFSU2_TR(0x626e71);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e74:{NFSU2_TR(0x626e74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e76:{NFSU2_TR(0x626e76);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626e7d:{NFSU2_TR(0x626e7d);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e80:{NFSU2_TR(0x626e80);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e82:{NFSU2_TR(0x626e82);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e85:{NFSU2_TR(0x626e85);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e88:{NFSU2_TR(0x626e88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e8a:{NFSU2_TR(0x626e8a);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e8d:{NFSU2_TR(0x626e8d);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e90:{NFSU2_TR(0x626e90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e92:{NFSU2_TR(0x626e92);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626e95:{NFSU2_TR(0x626e95);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626e98:{NFSU2_TR(0x626e98);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626e9a:{NFSU2_TR(0x626e9a);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626ea1:{NFSU2_TR(0x626ea1);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ea4:{NFSU2_TR(0x626ea4);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ea7:{NFSU2_TR(0x626ea7);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626eaa:{NFSU2_TR(0x626eaa);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ead:{NFSU2_TR(0x626ead);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626eaf:{NFSU2_TR(0x626eaf);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626eb2:{NFSU2_TR(0x626eb2);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626eb5:{NFSU2_TR(0x626eb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626eb7:{NFSU2_TR(0x626eb7);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626eba:{NFSU2_TR(0x626eba);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ebd:{NFSU2_TR(0x626ebd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ebf:{NFSU2_TR(0x626ebf);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626ec6:{NFSU2_TR(0x626ec6);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ec9:{NFSU2_TR(0x626ec9);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ecc:{NFSU2_TR(0x626ecc);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ecf:{NFSU2_TR(0x626ecf);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ed2:{NFSU2_TR(0x626ed2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ed4:{NFSU2_TR(0x626ed4);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ed7:{NFSU2_TR(0x626ed7);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626eda:{NFSU2_TR(0x626eda);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626edc:{NFSU2_TR(0x626edc);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626edf:{NFSU2_TR(0x626edf);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ee2:{NFSU2_TR(0x626ee2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626ee4:{NFSU2_TR(0x626ee4);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626eeb:{NFSU2_TR(0x626eeb);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626eee:{NFSU2_TR(0x626eee);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ef1:{NFSU2_TR(0x626ef1);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626ef4:{NFSU2_TR(0x626ef4);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626ef7:{NFSU2_TR(0x626ef7);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B626efb:{NFSU2_TR(0x626efb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626efc:{NFSU2_TR(0x626efc);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626efd:{NFSU2_TR(0x626efd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626eff:{NFSU2_TR(0x626eff);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626f02:{NFSU2_TR(0x626f02);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626f05:{NFSU2_TR(0x626f05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626f07:{NFSU2_TR(0x626f07);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B626f0a:{NFSU2_TR(0x626f0a);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B626f0d:{NFSU2_TR(0x626f0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B626f0f:{NFSU2_TR(0x626f0f);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B626f16:{NFSU2_TR(0x626f16);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626f1bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x4012b0u);}[[clang::musttail]] return blk_4012b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626f1b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626f1b:L626f1b:{bud-=1;NFSU2_TR(0x626f1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_626f22(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626f22(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626f22:L626f22:{bud-=7;NFSU2_TR(0x626f22);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626f29:{NFSU2_TR(0x626f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B626f30:{NFSU2_TR(0x626f30);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B626f33:{NFSU2_TR(0x626f33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626f34:{NFSU2_TR(0x626f34);
u8 U[4];
w4(U+0,u32(0x6bfa56daull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626f39:{NFSU2_TR(0x626f39);
__builtin_memmove((G+4),(R+28),4);
}
B626f3b:{NFSU2_TR(0x626f3b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626f40ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626f40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626f40:L626f40:{bud-=13;NFSU2_TR(0x626f40);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626f47:{NFSU2_TR(0x626f47);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626f4e:{NFSU2_TR(0x626f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626f51:{NFSU2_TR(0x626f51);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B626f53:{NFSU2_TR(0x626f53);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626f5a:{NFSU2_TR(0x626f5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626f5c:{NFSU2_TR(0x626f5c);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B626f5e:{NFSU2_TR(0x626f5e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626f5f:{NFSU2_TR(0x626f5f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626f60:{NFSU2_TR(0x626f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626f63:{NFSU2_TR(0x626f63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626f64:{NFSU2_TR(0x626f64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626f65:{NFSU2_TR(0x626f65);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626f6aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c5930u);}[[clang::musttail]] return blk_5c5930(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626f6a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626f6a:L626f6a:{bud-=1;NFSU2_TR(0x626f6a);
{[[clang::musttail]] return blk_62700e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626f6f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626f6f:L626f6f:{bud-=3;NFSU2_TR(0x626f6f);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B626f71:{NFSU2_TR(0x626f71);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B626f78:{NFSU2_TR(0x626f78);
{[[clang::musttail]] return blk_626f80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626f80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626f80:L626f80:{bud-=6;NFSU2_TR(0x626f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626f84:{NFSU2_TR(0x626f84);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B626f87:{NFSU2_TR(0x626f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626f8b:{NFSU2_TR(0x626f8b);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ba8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B626f92:{NFSU2_TR(0x626f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626f94:{NFSU2_TR(0x626f94);
if(r1(F+6)){{[[clang::musttail]] return blk_626ff9(ARGS);}}
}
B626f96:L626f96:{bud-=3;NFSU2_TR(0x626f96);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626f9a:{NFSU2_TR(0x626f9a);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626f9c:{NFSU2_TR(0x626f9c);
if(r1(F+6)){{[[clang::musttail]] return blk_626faf(ARGS);}}
}
B626f9e:L626f9e:{bud-=2;NFSU2_TR(0x626f9e);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B626fa0:{NFSU2_TR(0x626fa0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_626fa6(ARGS);}}
}
B626fa2:L626fa2:{bud-=2;NFSU2_TR(0x626fa2);
__builtin_memmove((R+28),(G+4),4);
}
B626fa4:{NFSU2_TR(0x626fa4);
{[[clang::musttail]] return blk_626fb1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626fa6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626fa6:L626fa6:{bud-=3;NFSU2_TR(0x626fa6);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B626fa9:{NFSU2_TR(0x626fa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B626fad:{NFSU2_TR(0x626fad);
if(r1(F+6)){{[[clang::musttail]] return blk_626fb1(ARGS);}}
{[[clang::musttail]] return blk_626faf(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626faf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626faf:L626faf:{bud-=1;NFSU2_TR(0x626faf);
__builtin_memmove((R+28),(R+12),4);
{[[clang::musttail]] return blk_626fb1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626fb1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626fb1:L626fb1:{bud-=6;NFSU2_TR(0x626fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626fb5:{NFSU2_TR(0x626fb5);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626fbb:{NFSU2_TR(0x626fbb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626fbc:{NFSU2_TR(0x626fbc);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626fc1:{NFSU2_TR(0x626fc1);
__builtin_memmove((G+4),(R+24),4);
}
B626fc3:{NFSU2_TR(0x626fc3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626fc8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626fc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626fc8:L626fc8:{bud-=13;NFSU2_TR(0x626fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626fcf:{NFSU2_TR(0x626fcf);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B626fd6:{NFSU2_TR(0x626fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626fd9:{NFSU2_TR(0x626fd9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626fdb:{NFSU2_TR(0x626fdb);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B626fdd:{NFSU2_TR(0x626fdd);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B626fe4:{NFSU2_TR(0x626fe4);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+4))));
}
B626fe6:{NFSU2_TR(0x626fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B626fe9:{NFSU2_TR(0x626fe9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626fea:{NFSU2_TR(0x626fea);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626feb:{NFSU2_TR(0x626feb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626fec:{NFSU2_TR(0x626fec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B626fed:{NFSU2_TR(0x626fed);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x626ff2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c5930u);}[[clang::musttail]] return blk_5c5930(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626ff2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626ff2:L626ff2:{bud-=1;NFSU2_TR(0x626ff2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_626ff9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_626ff9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B626ff9:L626ff9:{bud-=3;NFSU2_TR(0x626ff9);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B626ffa:{NFSU2_TR(0x626ffa);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B626ffd:{NFSU2_TR(0x626ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);EXIT(0x627004u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_626(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x626005:[[clang::musttail]] return blk_626005(c,a4,a0,a1,bud);
case 0x62600c:[[clang::musttail]] return blk_62600c(c,a4,a0,a1,bud);
case 0x626013:[[clang::musttail]] return blk_626013(c,a4,a0,a1,bud);
case 0x626289:[[clang::musttail]] return blk_626289(c,a4,a0,a1,bud);
case 0x6262b0:[[clang::musttail]] return blk_6262b0(c,a4,a0,a1,bud);
case 0x6262d1:[[clang::musttail]] return blk_6262d1(c,a4,a0,a1,bud);
case 0x6262fd:[[clang::musttail]] return blk_6262fd(c,a4,a0,a1,bud);
case 0x626324:[[clang::musttail]] return blk_626324(c,a4,a0,a1,bud);
case 0x626345:[[clang::musttail]] return blk_626345(c,a4,a0,a1,bud);
case 0x626363:[[clang::musttail]] return blk_626363(c,a4,a0,a1,bud);
case 0x626388:[[clang::musttail]] return blk_626388(c,a4,a0,a1,bud);
case 0x6263a9:[[clang::musttail]] return blk_6263a9(c,a4,a0,a1,bud);
case 0x6263d0:[[clang::musttail]] return blk_6263d0(c,a4,a0,a1,bud);
case 0x6263f1:[[clang::musttail]] return blk_6263f1(c,a4,a0,a1,bud);
case 0x626416:[[clang::musttail]] return blk_626416(c,a4,a0,a1,bud);
case 0x626438:[[clang::musttail]] return blk_626438(c,a4,a0,a1,bud);
case 0x626462:[[clang::musttail]] return blk_626462(c,a4,a0,a1,bud);
case 0x62646f:[[clang::musttail]] return blk_62646f(c,a4,a0,a1,bud);
case 0x6264da:[[clang::musttail]] return blk_6264da(c,a4,a0,a1,bud);
case 0x6264dc:[[clang::musttail]] return blk_6264dc(c,a4,a0,a1,bud);
case 0x626505:[[clang::musttail]] return blk_626505(c,a4,a0,a1,bud);
case 0x62675c:[[clang::musttail]] return blk_62675c(c,a4,a0,a1,bud);
case 0x626761:[[clang::musttail]] return blk_626761(c,a4,a0,a1,bud);
case 0x6269ac:[[clang::musttail]] return blk_6269ac(c,a4,a0,a1,bud);
case 0x6269b0:[[clang::musttail]] return blk_6269b0(c,a4,a0,a1,bud);
case 0x6269cb:[[clang::musttail]] return blk_6269cb(c,a4,a0,a1,bud);
case 0x6269f5:[[clang::musttail]] return blk_6269f5(c,a4,a0,a1,bud);
case 0x626a3a:[[clang::musttail]] return blk_626a3a(c,a4,a0,a1,bud);
case 0x626a3c:[[clang::musttail]] return blk_626a3c(c,a4,a0,a1,bud);
case 0x626a76:[[clang::musttail]] return blk_626a76(c,a4,a0,a1,bud);
case 0x626ccc:[[clang::musttail]] return blk_626ccc(c,a4,a0,a1,bud);
case 0x626cd1:[[clang::musttail]] return blk_626cd1(c,a4,a0,a1,bud);
case 0x626f1b:[[clang::musttail]] return blk_626f1b(c,a4,a0,a1,bud);
case 0x626f22:[[clang::musttail]] return blk_626f22(c,a4,a0,a1,bud);
case 0x626f40:[[clang::musttail]] return blk_626f40(c,a4,a0,a1,bud);
case 0x626f6a:[[clang::musttail]] return blk_626f6a(c,a4,a0,a1,bud);
case 0x626f6f:[[clang::musttail]] return blk_626f6f(c,a4,a0,a1,bud);
case 0x626f80:[[clang::musttail]] return blk_626f80(c,a4,a0,a1,bud);
case 0x626fa6:[[clang::musttail]] return blk_626fa6(c,a4,a0,a1,bud);
case 0x626faf:[[clang::musttail]] return blk_626faf(c,a4,a0,a1,bud);
case 0x626fb1:[[clang::musttail]] return blk_626fb1(c,a4,a0,a1,bud);
case 0x626fc8:[[clang::musttail]] return blk_626fc8(c,a4,a0,a1,bud);
case 0x626ff2:[[clang::musttail]] return blk_626ff2(c,a4,a0,a1,bud);
case 0x626ff9:[[clang::musttail]] return blk_626ff9(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_626(Cpu& c){u8* R=c.regs.data();return ent_626(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
