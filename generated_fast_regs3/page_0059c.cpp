#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c990(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c9c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c9d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43d1e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_571640(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5716c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_571770(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5764d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_578ce0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_578d90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5913d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_591480(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5921b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59bb00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c086(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c120(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c227(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c25a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c278(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c295(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c2b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c350(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c37b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c466(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c4b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c4b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c4dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c4e8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c581(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c5b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c5bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c5de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c6d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c738(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c7cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c7ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c7ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c970(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ca1d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ca1f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ca27(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ca29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ca36(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ca38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cb76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cf8e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cf92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cfae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cfc9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e7e70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c00f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c06d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c095(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c0af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c0c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c1e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c31c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c32c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c364(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c3ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c428(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c4c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c5f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c71f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c744(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c75e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c779(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c980(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c996(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c9a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c9ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c9ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c9c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c9d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c9e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c9f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ca06(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cb7d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cb90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cbeb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cbf9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ce82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ce8d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59ce9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cee8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cf5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c001:L59c001:{bud-=5;NFSU2_TR(0x59c001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c004:{NFSU2_TR(0x59c004);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c005:{NFSU2_TR(0x59c005);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c009:{NFSU2_TR(0x59c009);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c00a:{NFSU2_TR(0x59c00a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c00full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43d1e0u);}[[clang::musttail]] return blk_43d1e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c00f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c00f:L59c00f:{bud-=25;NFSU2_TR(0x59c00f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c013:{NFSU2_TR(0x59c013);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c019:{NFSU2_TR(0x59c019);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c01c:{NFSU2_TR(0x59c01c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c020:{NFSU2_TR(0x59c020);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c021:{NFSU2_TR(0x59c021);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c025:{NFSU2_TR(0x59c025);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c02b:{NFSU2_TR(0x59c02b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c02c:{NFSU2_TR(0x59c02c);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c030:{NFSU2_TR(0x59c030);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c034:{NFSU2_TR(0x59c034);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c03a:{NFSU2_TR(0x59c03a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c03e:{NFSU2_TR(0x59c03e);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c042:{NFSU2_TR(0x59c042);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c048:{NFSU2_TR(0x59c048);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c04c:{NFSU2_TR(0x59c04c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c04e:{NFSU2_TR(0x59c04e);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c052:{NFSU2_TR(0x59c052);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c056:{NFSU2_TR(0x59c056);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c058:{NFSU2_TR(0x59c058);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c05c:{NFSU2_TR(0x59c05c);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c060:{NFSU2_TR(0x59c060);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c062:{NFSU2_TR(0x59c062);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c066:{NFSU2_TR(0x59c066);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c068:{NFSU2_TR(0x59c068);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c06dull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c9d0u);}[[clang::musttail]] return blk_43c9d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c06d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c06d:L59c06d:{bud-=5;NFSU2_TR(0x59c06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c073:{NFSU2_TR(0x59c073);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
}
B59c076:{NFSU2_TR(0x59c076);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B59c078:{NFSU2_TR(0x59c078);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59c07e:{NFSU2_TR(0x59c07e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c086(ARGS);}}
}
B59c080:L59c080:{bud-=1;NFSU2_TR(0x59c080);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((G+0),(U+0),4);
{[[clang::musttail]] return blk_59c086(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c086(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c086:L59c086:{bud-=5;NFSU2_TR(0x59c086);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c087:{NFSU2_TR(0x59c087);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c08e:{NFSU2_TR(0x59c08e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c08f:{NFSU2_TR(0x59c08f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c090:{NFSU2_TR(0x59c090);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c095ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c990u);}[[clang::musttail]] return blk_43c990(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c095(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c095:L59c095:{bud-=7;NFSU2_TR(0x59c095);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59c099:{NFSU2_TR(0x59c099);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c09a:{NFSU2_TR(0x59c09a);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c0a1:{NFSU2_TR(0x59c0a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c0a2:{NFSU2_TR(0x59c0a2);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c0a9:{NFSU2_TR(0x59c0a9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c0aa:{NFSU2_TR(0x59c0aa);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c0afull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c990u);}[[clang::musttail]] return blk_43c990(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c0af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c0af:L59c0af:{bud-=7;NFSU2_TR(0x59c0af);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59c0b3:{NFSU2_TR(0x59c0b3);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c0b4:{NFSU2_TR(0x59c0b4);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c0bb:{NFSU2_TR(0x59c0bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c0bc:{NFSU2_TR(0x59c0bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c0c0:{NFSU2_TR(0x59c0c0);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c0c1:{NFSU2_TR(0x59c0c1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c0c6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c9c0u);}[[clang::musttail]] return blk_43c9c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c0c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c0c6:L59c0c6:{bud-=25;NFSU2_TR(0x59c0c6);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0ca:{NFSU2_TR(0x59c0ca);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0ce:{NFSU2_TR(0x59c0ce);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x24ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x24ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x24ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B59c0d1:{NFSU2_TR(0x59c0d1);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0d5:{NFSU2_TR(0x59c0d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c0d6:{NFSU2_TR(0x59c0d6);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0da:{NFSU2_TR(0x59c0da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c0db:{NFSU2_TR(0x59c0db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c0dd:{NFSU2_TR(0x59c0dd);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0e1:{NFSU2_TR(0x59c0e1);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0e5:{NFSU2_TR(0x59c0e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c0e7:{NFSU2_TR(0x59c0e7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0ed:{NFSU2_TR(0x59c0ed);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0f1:{NFSU2_TR(0x59c0f1);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0f5:{NFSU2_TR(0x59c0f5);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0f9:{NFSU2_TR(0x59c0f9);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0fd:{NFSU2_TR(0x59c0fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c0ff:{NFSU2_TR(0x59c0ff);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c103:{NFSU2_TR(0x59c103);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c107:{NFSU2_TR(0x59c107);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c109:{NFSU2_TR(0x59c109);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c10f:{NFSU2_TR(0x59c10f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c111:{NFSU2_TR(0x59c111);
__builtin_memmove((G+16),(R+20),4);
}
B59c113:{NFSU2_TR(0x59c113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c114:{NFSU2_TR(0x59c114);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
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
PN u32 blk_59c120(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c120:L59c120:{bud-=68;NFSU2_TR(0x59c120);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c124:{NFSU2_TR(0x59c124);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c128:{NFSU2_TR(0x59c128);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c12b:{NFSU2_TR(0x59c12b);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c12e:{NFSU2_TR(0x59c12e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c132:{NFSU2_TR(0x59c132);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c135:{NFSU2_TR(0x59c135);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c136:{NFSU2_TR(0x59c136);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c139:{NFSU2_TR(0x59c139);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B59c13b:{NFSU2_TR(0x59c13b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c13d:{NFSU2_TR(0x59c13d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c13f:{NFSU2_TR(0x59c13f);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c142:{NFSU2_TR(0x59c142);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c145:{NFSU2_TR(0x59c145);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c148:{NFSU2_TR(0x59c148);
{u32 ea_=u32(r4(G+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c14b:{NFSU2_TR(0x59c14b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c14d:{NFSU2_TR(0x59c14d);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c150:{NFSU2_TR(0x59c150);
{u32 ea_=u32(r4(G+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c153:{NFSU2_TR(0x59c153);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c156:{NFSU2_TR(0x59c156);
{u32 ea_=u32(r4(G+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c159:{NFSU2_TR(0x59c159);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c15c:{NFSU2_TR(0x59c15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c15f:{NFSU2_TR(0x59c15f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c161:{NFSU2_TR(0x59c161);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c164:{NFSU2_TR(0x59c164);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c167:{NFSU2_TR(0x59c167);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c169:{NFSU2_TR(0x59c169);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c16c:{NFSU2_TR(0x59c16c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c16e:{NFSU2_TR(0x59c16e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c170:{NFSU2_TR(0x59c170);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c173:{NFSU2_TR(0x59c173);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c176:{NFSU2_TR(0x59c176);
{u32 ea_=u32(r4(G+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c179:{NFSU2_TR(0x59c179);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c17b:{NFSU2_TR(0x59c17b);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c17e:{NFSU2_TR(0x59c17e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c180:{NFSU2_TR(0x59c180);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c183:{NFSU2_TR(0x59c183);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c186:{NFSU2_TR(0x59c186);
{u32 ea_=u32(r4(G+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c189:{NFSU2_TR(0x59c189);
{u32 ea_=u32(r4(G+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c18c:{NFSU2_TR(0x59c18c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c18e:{NFSU2_TR(0x59c18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c191:{NFSU2_TR(0x59c191);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c193:{NFSU2_TR(0x59c193);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c196:{NFSU2_TR(0x59c196);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c198:{NFSU2_TR(0x59c198);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c19b:{NFSU2_TR(0x59c19b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c19d:{NFSU2_TR(0x59c19d);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1a0:{NFSU2_TR(0x59c1a0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c1a2:{NFSU2_TR(0x59c1a2);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c1a5:{NFSU2_TR(0x59c1a5);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1a7:{NFSU2_TR(0x59c1a7);
{u32 ea_=u32(r4(G+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1aa:{NFSU2_TR(0x59c1aa);
{u32 ea_=u32(r4(G+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1ad:{NFSU2_TR(0x59c1ad);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1b0:{NFSU2_TR(0x59c1b0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c1b2:{NFSU2_TR(0x59c1b2);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c1b5:{NFSU2_TR(0x59c1b5);
{u32 ea_=u32(r4(G+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1b8:{NFSU2_TR(0x59c1b8);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1ba:{NFSU2_TR(0x59c1ba);
{u32 ea_=u32(r4(G+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1bd:{NFSU2_TR(0x59c1bd);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1c0:{NFSU2_TR(0x59c1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c1c3:{NFSU2_TR(0x59c1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c1c6:{NFSU2_TR(0x59c1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c1c9:{NFSU2_TR(0x59c1c9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c1cb:{NFSU2_TR(0x59c1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c1ce:{NFSU2_TR(0x59c1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c1d5:{NFSU2_TR(0x59c1d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c1d6:{NFSU2_TR(0x59c1d6);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c1d9:{NFSU2_TR(0x59c1d9);
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
PN u32 blk_59c1e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c1e0:L59c1e0:{bud-=13;NFSU2_TR(0x59c1e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c1e1:{NFSU2_TR(0x59c1e1);
__builtin_memmove((R+20),(G+16),4);
}
B59c1e3:{NFSU2_TR(0x59c1e3);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B59c1e6:{NFSU2_TR(0x59c1e6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x74ull))));
}
B59c1e9:{NFSU2_TR(0x59c1e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c1ea:{NFSU2_TR(0x59c1ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c1eb:{NFSU2_TR(0x59c1eb);
__builtin_memmove((R+24),(G+4),4);
}
B59c1ed:{NFSU2_TR(0x59c1ed);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1f3:{NFSU2_TR(0x59c1f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c1f4:{NFSU2_TR(0x59c1f4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c1fa:{NFSU2_TR(0x59c1fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c1fc:{NFSU2_TR(0x59c1fc);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59c1ff:{NFSU2_TR(0x59c1ff);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c37b(ARGS);}}
}
B59c205:L59c205:{bud-=6;NFSU2_TR(0x59c205);
{u32 ea_=u32(r4(R+24)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c20b:{NFSU2_TR(0x59c20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c211:{NFSU2_TR(0x59c211);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B59c213:{NFSU2_TR(0x59c213);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c219:{NFSU2_TR(0x59c219);
{u32 ea_=u32(u32(8003200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c21f:{NFSU2_TR(0x59c21f);
if(r1(F+6)){{[[clang::musttail]] return blk_59c227(ARGS);}}
}
B59c221:L59c221:{bud-=1;NFSU2_TR(0x59c221);
{u32 ea_=u32(u32(8002328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59c227(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c227(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c227:L59c227:{bud-=8;NFSU2_TR(0x59c227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c22a:{NFSU2_TR(0x59c22a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c22e:{NFSU2_TR(0x59c22e);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c232:{NFSU2_TR(0x59c232);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c238:{NFSU2_TR(0x59c238);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c23c:{NFSU2_TR(0x59c23c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c23e:{NFSU2_TR(0x59c23e);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c241:{NFSU2_TR(0x59c241);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c278(ARGS);}}
}
B59c243:L59c243:{bud-=4;NFSU2_TR(0x59c243);
{u32 ea_=u32(u32(8002292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c249:{NFSU2_TR(0x59c249);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c24b:{NFSU2_TR(0x59c24b);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c24e:{NFSU2_TR(0x59c24e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c25a(ARGS);}}
}
B59c250:L59c250:{bud-=2;NFSU2_TR(0x59c250);
__builtin_memmove((G+4),gp(0x7a1af4),4);
}
B59c256:{NFSU2_TR(0x59c256);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_59c25a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c25a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c25a:L59c25a:{bud-=6;NFSU2_TR(0x59c25a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c260:{NFSU2_TR(0x59c260);
{u32 ea_=u32(u32(8002288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59c266:{NFSU2_TR(0x59c266);
{u32 ea_=u32(u32(8002292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c26c:{NFSU2_TR(0x59c26c);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c270:{NFSU2_TR(0x59c270);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59c276:{NFSU2_TR(0x59c276);
{[[clang::musttail]] return blk_59c2b1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c278(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c278:L59c278:{bud-=6;NFSU2_TR(0x59c278);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c27a:{NFSU2_TR(0x59c27a);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59c27e:{NFSU2_TR(0x59c27e);
{u32 ea_=u32(u32(8002284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c284:{NFSU2_TR(0x59c284);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c286:{NFSU2_TR(0x59c286);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c289:{NFSU2_TR(0x59c289);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c295(ARGS);}}
}
B59c28b:L59c28b:{bud-=2;NFSU2_TR(0x59c28b);
__builtin_memmove((R+8),gp(0x7a1aec),4);
}
B59c291:{NFSU2_TR(0x59c291);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_59c295(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c295(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c295:L59c295:{bud-=5;NFSU2_TR(0x59c295);
{u32 ea_=u32(u32(8002280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c29b:{NFSU2_TR(0x59c29b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59c2a1:{NFSU2_TR(0x59c2a1);
{u32 ea_=u32(u32(8002284u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c2a7:{NFSU2_TR(0x59c2a7);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c2ab:{NFSU2_TR(0x59c2ab);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59c2b1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c2b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c2b1:L59c2b1:{bud-=17;NFSU2_TR(0x59c2b1);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59c2b3:{NFSU2_TR(0x59c2b3);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c2b9:{NFSU2_TR(0x59c2b9);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c2bf:{NFSU2_TR(0x59c2bf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c2c1:{NFSU2_TR(0x59c2c1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c2c3:{NFSU2_TR(0x59c2c3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c2c5:{NFSU2_TR(0x59c2c5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c2c7:{NFSU2_TR(0x59c2c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c2c9:{NFSU2_TR(0x59c2c9);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c2cb:{NFSU2_TR(0x59c2cb);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B59c2cd:{NFSU2_TR(0x59c2cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c2cf:{NFSU2_TR(0x59c2cf);
{u32 ea_=u32(u32(8003196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c2d5:{NFSU2_TR(0x59c2d5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59c2d7:{NFSU2_TR(0x59c2d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c2d9:{NFSU2_TR(0x59c2d9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c2db:{NFSU2_TR(0x59c2db);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c2de:{NFSU2_TR(0x59c2de);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c37b(ARGS);}}
}
B59c2e4:L59c2e4:{bud-=14;NFSU2_TR(0x59c2e4);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c2e7:{NFSU2_TR(0x59c2e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c2ea:{NFSU2_TR(0x59c2ea);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c2f0:{NFSU2_TR(0x59c2f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c2f6:{NFSU2_TR(0x59c2f6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c2f9:{NFSU2_TR(0x59c2f9);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c2fc:{NFSU2_TR(0x59c2fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c2fe:{NFSU2_TR(0x59c2fe);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c300:{NFSU2_TR(0x59c300);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c302:{NFSU2_TR(0x59c302);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c304:{NFSU2_TR(0x59c304);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c30a:{NFSU2_TR(0x59c30a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c30c:{NFSU2_TR(0x59c30c);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c30f:{NFSU2_TR(0x59c30f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c37b(ARGS);}}
}
B59c311:L59c311:{bud-=4;NFSU2_TR(0x59c311);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c315:{NFSU2_TR(0x59c315);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c316:{NFSU2_TR(0x59c316);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c317:{NFSU2_TR(0x59c317);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c31cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c9d0u);}[[clang::musttail]] return blk_43c9d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c31c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c31c:L59c31c:{bud-=6;NFSU2_TR(0x59c31c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c31d:{NFSU2_TR(0x59c31d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59c321:{NFSU2_TR(0x59c321);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c322:{NFSU2_TR(0x59c322);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c326:{NFSU2_TR(0x59c326);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c327:{NFSU2_TR(0x59c327);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c32cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c9c0u);}[[clang::musttail]] return blk_43c9c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c32c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c32c:L59c32c:{bud-=8;NFSU2_TR(0x59c32c);
{u32 ea_=u32(u32(8002300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c332:{NFSU2_TR(0x59c332);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c336:{NFSU2_TR(0x59c336);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
}
B59c339:{NFSU2_TR(0x59c339);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c33b:{NFSU2_TR(0x59c33b);
{u32 ea_=u32(u32(8002296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59c341:{NFSU2_TR(0x59c341);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c343:{NFSU2_TR(0x59c343);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c346:{NFSU2_TR(0x59c346);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c350(ARGS);}}
}
B59c348:L59c348:{bud-=2;NFSU2_TR(0x59c348);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c34a:{NFSU2_TR(0x59c34a);
{u32 ea_=u32(u32(8002296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59c350(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c350(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c350:L59c350:{bud-=7;NFSU2_TR(0x59c350);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c354:{NFSU2_TR(0x59c354);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c358:{NFSU2_TR(0x59c358);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c359:{NFSU2_TR(0x59c359);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59c35d:{NFSU2_TR(0x59c35d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c35e:{NFSU2_TR(0x59c35e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c35f:{NFSU2_TR(0x59c35f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c364ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c9c0u);}[[clang::musttail]] return blk_43c9c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c364(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c364:L59c364:{bud-=7;NFSU2_TR(0x59c364);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c368:{NFSU2_TR(0x59c368);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c36c:{NFSU2_TR(0x59c36c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c370:{NFSU2_TR(0x59c370);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B59c373:{NFSU2_TR(0x59c373);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59c375:{NFSU2_TR(0x59c375);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c378:{NFSU2_TR(0x59c378);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_59c37b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c37b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c37b:L59c37b:{bud-=15;NFSU2_TR(0x59c37b);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c381:{NFSU2_TR(0x59c381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59c384:{NFSU2_TR(0x59c384);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c38a:{NFSU2_TR(0x59c38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c390:{NFSU2_TR(0x59c390);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59c393:{NFSU2_TR(0x59c393);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c395:{NFSU2_TR(0x59c395);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c396:{NFSU2_TR(0x59c396);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c399:{NFSU2_TR(0x59c399);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c39f:{NFSU2_TR(0x59c39f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59c3a2:{NFSU2_TR(0x59c3a2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3a5:{NFSU2_TR(0x59c3a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c3a6:{NFSU2_TR(0x59c3a6);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c3a7:{NFSU2_TR(0x59c3a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59c3a9:{NFSU2_TR(0x59c3a9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c3aeull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59c120u);}[[clang::musttail]] return blk_59c120(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c3ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c3ae:L59c3ae:{bud-=34;NFSU2_TR(0x59c3ae);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3b4:{NFSU2_TR(0x59c3b4);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3ba:{NFSU2_TR(0x59c3ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c3c0:{NFSU2_TR(0x59c3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c3c3:{NFSU2_TR(0x59c3c3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c3c5:{NFSU2_TR(0x59c3c5);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3c8:{NFSU2_TR(0x59c3c8);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B59c3cb:{NFSU2_TR(0x59c3cb);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3ce:{NFSU2_TR(0x59c3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c3d4:{NFSU2_TR(0x59c3d4);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3da:{NFSU2_TR(0x59c3da);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3e0:{NFSU2_TR(0x59c3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c3e3:{NFSU2_TR(0x59c3e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c3e5:{NFSU2_TR(0x59c3e5);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3e8:{NFSU2_TR(0x59c3e8);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3eb:{NFSU2_TR(0x59c3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c3f1:{NFSU2_TR(0x59c3f1);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B59c3f3:{NFSU2_TR(0x59c3f3);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3f6:{NFSU2_TR(0x59c3f6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3f9:{NFSU2_TR(0x59c3f9);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3fb:{NFSU2_TR(0x59c3fb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c3fd:{NFSU2_TR(0x59c3fd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c3ff:{NFSU2_TR(0x59c3ff);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c401:{NFSU2_TR(0x59c401);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c403:{NFSU2_TR(0x59c403);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c405:{NFSU2_TR(0x59c405);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59c407:{NFSU2_TR(0x59c407);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59c409:{NFSU2_TR(0x59c409);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c40b:{NFSU2_TR(0x59c40b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c40d:{NFSU2_TR(0x59c40d);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59c40f:{NFSU2_TR(0x59c40f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c411:{NFSU2_TR(0x59c411);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c413:{NFSU2_TR(0x59c413);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c417:{NFSU2_TR(0x59c417);
if(r1(F+6)){{[[clang::musttail]] return blk_59c466(ARGS);}}
}
B59c419:L59c419:{bud-=4;NFSU2_TR(0x59c419);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c41d:{NFSU2_TR(0x59c41d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c41e:{NFSU2_TR(0x59c41e);
w4(G+4,u32(0x7fc92cull));
}
B59c423:{NFSU2_TR(0x59c423);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c428ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5764d0u);}[[clang::musttail]] return blk_5764d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c428(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c428:L59c428:{bud-=18;NFSU2_TR(0x59c428);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c42a:{NFSU2_TR(0x59c42a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c42c:{NFSU2_TR(0x59c42c);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c432:{NFSU2_TR(0x59c432);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c438:{NFSU2_TR(0x59c438);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c43a:{NFSU2_TR(0x59c43a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c43e:{NFSU2_TR(0x59c43e);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c444:{NFSU2_TR(0x59c444);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c446:{NFSU2_TR(0x59c446);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c44a:{NFSU2_TR(0x59c44a);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c44d:{NFSU2_TR(0x59c44d);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c450:{NFSU2_TR(0x59c450);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c452:{NFSU2_TR(0x59c452);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c456:{NFSU2_TR(0x59c456);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c459:{NFSU2_TR(0x59c459);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c45c:{NFSU2_TR(0x59c45c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c460:{NFSU2_TR(0x59c460);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c463:{NFSU2_TR(0x59c463);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59c466(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c466(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c466:L59c466:{bud-=23;NFSU2_TR(0x59c466);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c46c:{NFSU2_TR(0x59c46c);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c472:{NFSU2_TR(0x59c472);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c478:{NFSU2_TR(0x59c478);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c47a:{NFSU2_TR(0x59c47a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c47c:{NFSU2_TR(0x59c47c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c47e:{NFSU2_TR(0x59c47e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c480:{NFSU2_TR(0x59c480);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c482:{NFSU2_TR(0x59c482);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59c484:{NFSU2_TR(0x59c484);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59c486:{NFSU2_TR(0x59c486);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c488:{NFSU2_TR(0x59c488);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c48a:{NFSU2_TR(0x59c48a);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59c48c:{NFSU2_TR(0x59c48c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c48e:{NFSU2_TR(0x59c48e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c490:{NFSU2_TR(0x59c490);
{u32 ea_=u32(u32(8002304u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c496:{NFSU2_TR(0x59c496);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c49a:{NFSU2_TR(0x59c49a);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c49e:{NFSU2_TR(0x59c49e);
{u32 ea_=u32(u32(8002308u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c4a4:{NFSU2_TR(0x59c4a4);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59c4a8:{NFSU2_TR(0x59c4a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c4aa:{NFSU2_TR(0x59c4aa);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c4ad:{NFSU2_TR(0x59c4ad);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c4b5(ARGS);}}
}
B59c4af:L59c4af:{bud-=2;NFSU2_TR(0x59c4af);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c4b3:{NFSU2_TR(0x59c4b3);
{[[clang::musttail]] return blk_59c4b7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c4b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c4b5:L59c4b5:{bud-=1;NFSU2_TR(0x59c4b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_59c4b7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c4b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c4b7:L59c4b7:{bud-=4;NFSU2_TR(0x59c4b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c4bb:{NFSU2_TR(0x59c4bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c4bc:{NFSU2_TR(0x59c4bc);
w4(G+4,u32(0x7fc940ull));
}
B59c4c1:{NFSU2_TR(0x59c4c1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c4c6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5764d0u);}[[clang::musttail]] return blk_5764d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c4c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c4c6:L59c4c6:{bud-=4;NFSU2_TR(0x59c4c6);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c4cc:{NFSU2_TR(0x59c4cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c4ce:{NFSU2_TR(0x59c4ce);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c4d1:{NFSU2_TR(0x59c4d1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c4dd(ARGS);}}
}
B59c4d3:L59c4d3:{bud-=3;NFSU2_TR(0x59c4d3);
__builtin_memmove((G+0),gp(0x7a1b10),4);
}
B59c4d8:{NFSU2_TR(0x59c4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c4db:{NFSU2_TR(0x59c4db);
{[[clang::musttail]] return blk_59c4e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c4dd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c4dd:L59c4dd:{bud-=3;NFSU2_TR(0x59c4dd);
{u32 ea_=u32(u32(8002324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c4e3:{NFSU2_TR(0x59c4e3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c4e5:{NFSU2_TR(0x59c4e5);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59c4e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c4e8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c4e8:L59c4e8:{bud-=3;NFSU2_TR(0x59c4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c4ee:{NFSU2_TR(0x59c4ee);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B59c4f0:{NFSU2_TR(0x59c4f0);
if(r1(F+6)){{[[clang::musttail]] return blk_59c581(ARGS);}}
}
B59c4f6:L59c4f6:{bud-=40;NFSU2_TR(0x59c4f6);
{u32 ea_=u32(u32(8002316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c4fc:{NFSU2_TR(0x59c4fc);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c502:{NFSU2_TR(0x59c502);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c504:{NFSU2_TR(0x59c504);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c506:{NFSU2_TR(0x59c506);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c50c:{NFSU2_TR(0x59c50c);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c512:{NFSU2_TR(0x59c512);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c514:{NFSU2_TR(0x59c514);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c518:{NFSU2_TR(0x59c518);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c51e:{NFSU2_TR(0x59c51e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c520:{NFSU2_TR(0x59c520);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c524:{NFSU2_TR(0x59c524);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c527:{NFSU2_TR(0x59c527);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c52a:{NFSU2_TR(0x59c52a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c52c:{NFSU2_TR(0x59c52c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c530:{NFSU2_TR(0x59c530);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c533:{NFSU2_TR(0x59c533);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c536:{NFSU2_TR(0x59c536);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c53a:{NFSU2_TR(0x59c53a);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c53d:{NFSU2_TR(0x59c53d);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c540:{NFSU2_TR(0x59c540);
{u32 ea_=u32(u32(8002312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c546:{NFSU2_TR(0x59c546);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c54c:{NFSU2_TR(0x59c54c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c54e:{NFSU2_TR(0x59c54e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c550:{NFSU2_TR(0x59c550);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c553:{NFSU2_TR(0x59c553);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c556:{NFSU2_TR(0x59c556);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c558:{NFSU2_TR(0x59c558);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c55c:{NFSU2_TR(0x59c55c);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c55f:{NFSU2_TR(0x59c55f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c561:{NFSU2_TR(0x59c561);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c565:{NFSU2_TR(0x59c565);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c568:{NFSU2_TR(0x59c568);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c56b:{NFSU2_TR(0x59c56b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c56d:{NFSU2_TR(0x59c56d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c571:{NFSU2_TR(0x59c571);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c574:{NFSU2_TR(0x59c574);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c577:{NFSU2_TR(0x59c577);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c57b:{NFSU2_TR(0x59c57b);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c57e:{NFSU2_TR(0x59c57e);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59c581(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c581(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c581:L59c581:{bud-=5;NFSU2_TR(0x59c581);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c587:{NFSU2_TR(0x59c587);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c58d:{NFSU2_TR(0x59c58d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c58f:{NFSU2_TR(0x59c58f);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59c592:{NFSU2_TR(0x59c592);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_59c5b0(ARGS);}}
}
B59c594:L59c594:{bud-=5;NFSU2_TR(0x59c594);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c59a:{NFSU2_TR(0x59c59a);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c5a0:{NFSU2_TR(0x59c5a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c5a2:{NFSU2_TR(0x59c5a2);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59c5a5:{NFSU2_TR(0x59c5a5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c5bb(ARGS);}}
}
B59c5a7:L59c5a7:{bud-=2;NFSU2_TR(0x59c5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c5ad:{NFSU2_TR(0x59c5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_59c5b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c5b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c5b0:L59c5b0:{bud-=7;NFSU2_TR(0x59c5b0);
__builtin_memmove((G+0),(R+28),4);
}
B59c5b2:{NFSU2_TR(0x59c5b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c5b3:{NFSU2_TR(0x59c5b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c5b4:{NFSU2_TR(0x59c5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c5b5:{NFSU2_TR(0x59c5b5);
__builtin_memmove((G+16),(R+20),4);
}
B59c5b7:{NFSU2_TR(0x59c5b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c5b8:{NFSU2_TR(0x59c5b8);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_59c5bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c5bb:L59c5bb:{bud-=7;NFSU2_TR(0x59c5bb);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c5c1:{NFSU2_TR(0x59c5c1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c5c3:{NFSU2_TR(0x59c5c3);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59c5c9:{NFSU2_TR(0x59c5c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c5cb:{NFSU2_TR(0x59c5cb);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59c5ce:{NFSU2_TR(0x59c5ce);
__builtin_memmove((G+0),(R+28),4);
}
B59c5d0:{NFSU2_TR(0x59c5d0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_59c5de(ARGS);}}
}
B59c5d2:L59c5d2:{bud-=7;NFSU2_TR(0x59c5d2);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c5d5:{NFSU2_TR(0x59c5d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c5d6:{NFSU2_TR(0x59c5d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c5d7:{NFSU2_TR(0x59c5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c5d8:{NFSU2_TR(0x59c5d8);
__builtin_memmove((G+16),(R+20),4);
}
B59c5da:{NFSU2_TR(0x59c5da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c5db:{NFSU2_TR(0x59c5db);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_59c5de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c5de:L59c5de:{bud-=7;NFSU2_TR(0x59c5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c5df:{NFSU2_TR(0x59c5df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c5e1:{NFSU2_TR(0x59c5e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c5e2:{NFSU2_TR(0x59c5e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c5e3:{NFSU2_TR(0x59c5e3);
__builtin_memmove((G+16),(R+20),4);
}
B59c5e5:{NFSU2_TR(0x59c5e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c5e6:{NFSU2_TR(0x59c5e6);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_59c5f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c5f0:L59c5f0:{bud-=41;NFSU2_TR(0x59c5f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c5f1:{NFSU2_TR(0x59c5f1);
__builtin_memmove((R+20),(G+16),4);
}
B59c5f3:{NFSU2_TR(0x59c5f3);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B59c5f6:{NFSU2_TR(0x59c5f6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xe4ull))));
}
B59c5fc:{NFSU2_TR(0x59c5fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c5fd:{NFSU2_TR(0x59c5fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c5fe:{NFSU2_TR(0x59c5fe);
__builtin_memmove((R+24),(G+4),4);
}
B59c600:{NFSU2_TR(0x59c600);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c606:{NFSU2_TR(0x59c606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c609:{NFSU2_TR(0x59c609);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c60c:{NFSU2_TR(0x59c60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c610:{NFSU2_TR(0x59c610);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59c612:{NFSU2_TR(0x59c612);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c613:{NFSU2_TR(0x59c613);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c616:{NFSU2_TR(0x59c616);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c61c:{NFSU2_TR(0x59c61c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c61e:{NFSU2_TR(0x59c61e);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c624:{NFSU2_TR(0x59c624);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c628:{NFSU2_TR(0x59c628);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c62a:{NFSU2_TR(0x59c62a);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c630:{NFSU2_TR(0x59c630);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c632:{NFSU2_TR(0x59c632);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c638:{NFSU2_TR(0x59c638);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c63e:{NFSU2_TR(0x59c63e);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c644:{NFSU2_TR(0x59c644);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c646:{NFSU2_TR(0x59c646);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c648:{NFSU2_TR(0x59c648);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c64a:{NFSU2_TR(0x59c64a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c64c:{NFSU2_TR(0x59c64c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c64e:{NFSU2_TR(0x59c64e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59c650:{NFSU2_TR(0x59c650);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59c652:{NFSU2_TR(0x59c652);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c654:{NFSU2_TR(0x59c654);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c656:{NFSU2_TR(0x59c656);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59c658:{NFSU2_TR(0x59c658);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c65a:{NFSU2_TR(0x59c65a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c65c:{NFSU2_TR(0x59c65c);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59c660:{NFSU2_TR(0x59c660);
{u32 ea_=u32(u32(8373996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c666:{NFSU2_TR(0x59c666);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c668:{NFSU2_TR(0x59c668);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c66b:{NFSU2_TR(0x59c66b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c6d1(ARGS);}}
}
B59c66d:L59c66d:{bud-=5;NFSU2_TR(0x59c66d);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c673:{NFSU2_TR(0x59c673);
{u32 ea_=u32(u32(8003208u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B59c679:{NFSU2_TR(0x59c679);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c67b:{NFSU2_TR(0x59c67b);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c67e:{NFSU2_TR(0x59c67e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c6d1(ARGS);}}
}
B59c680:L59c680:{bud-=23;NFSU2_TR(0x59c680);
{u32 ea_=u32(u32(8373996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c686:{NFSU2_TR(0x59c686);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c68a:{NFSU2_TR(0x59c68a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c68c:{NFSU2_TR(0x59c68c);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c68f:{NFSU2_TR(0x59c68f);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c692:{NFSU2_TR(0x59c692);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c694:{NFSU2_TR(0x59c694);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c697:{NFSU2_TR(0x59c697);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c69a:{NFSU2_TR(0x59c69a);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c69d:{NFSU2_TR(0x59c69d);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c6a0:{NFSU2_TR(0x59c6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c6a3:{NFSU2_TR(0x59c6a3);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6a9:{NFSU2_TR(0x59c6a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c6ad:{NFSU2_TR(0x59c6ad);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6b0:{NFSU2_TR(0x59c6b0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59c6b2:{NFSU2_TR(0x59c6b2);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c6b5:{NFSU2_TR(0x59c6b5);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c6bb:{NFSU2_TR(0x59c6bb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c6bd:{NFSU2_TR(0x59c6bd);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c6c3:{NFSU2_TR(0x59c6c3);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6c7:{NFSU2_TR(0x59c6c7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c6c9:{NFSU2_TR(0x59c6c9);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c6cf:{NFSU2_TR(0x59c6cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_59c6d1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c6d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c6d1:L59c6d1:{bud-=19;NFSU2_TR(0x59c6d1);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6d7:{NFSU2_TR(0x59c6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c6dd:{NFSU2_TR(0x59c6dd);
{u32 ea_=u32(u32(8003204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c6e3:{NFSU2_TR(0x59c6e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c6e7:{NFSU2_TR(0x59c6e7);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6ed:{NFSU2_TR(0x59c6ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c6f0:{NFSU2_TR(0x59c6f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c6f4:{NFSU2_TR(0x59c6f4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59c6f6:{NFSU2_TR(0x59c6f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c6f7:{NFSU2_TR(0x59c6f7);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c6fd:{NFSU2_TR(0x59c6fd);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c6fe:{NFSU2_TR(0x59c6fe);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c704:{NFSU2_TR(0x59c704);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c706:{NFSU2_TR(0x59c706);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c70c:{NFSU2_TR(0x59c70c);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c710:{NFSU2_TR(0x59c710);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c712:{NFSU2_TR(0x59c712);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c718:{NFSU2_TR(0x59c718);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c71a:{NFSU2_TR(0x59c71a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c71full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c9d0u);}[[clang::musttail]] return blk_43c9d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c71f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c71f:L59c71f:{bud-=5;NFSU2_TR(0x59c71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59c725:{NFSU2_TR(0x59c725);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B59c728:{NFSU2_TR(0x59c728);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B59c72a:{NFSU2_TR(0x59c72a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59c730:{NFSU2_TR(0x59c730);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c738(ARGS);}}
}
B59c732:L59c732:{bud-=1;NFSU2_TR(0x59c732);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((G+0),(U+0),4);
{[[clang::musttail]] return blk_59c738(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c738(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c738:L59c738:{bud-=5;NFSU2_TR(0x59c738);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c739:{NFSU2_TR(0x59c739);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59c73d:{NFSU2_TR(0x59c73d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c73e:{NFSU2_TR(0x59c73e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c73f:{NFSU2_TR(0x59c73f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c744ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c990u);}[[clang::musttail]] return blk_43c990(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c744(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c744:L59c744:{bud-=7;NFSU2_TR(0x59c744);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c748:{NFSU2_TR(0x59c748);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c749:{NFSU2_TR(0x59c749);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c750:{NFSU2_TR(0x59c750);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c751:{NFSU2_TR(0x59c751);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59c758:{NFSU2_TR(0x59c758);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c759:{NFSU2_TR(0x59c759);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c75eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c990u);}[[clang::musttail]] return blk_43c990(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c75e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c75e:L59c75e:{bud-=7;NFSU2_TR(0x59c75e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59c764:{NFSU2_TR(0x59c764);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c765:{NFSU2_TR(0x59c765);
u8 U[4];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c76c:{NFSU2_TR(0x59c76c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c76d:{NFSU2_TR(0x59c76d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c773:{NFSU2_TR(0x59c773);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c774:{NFSU2_TR(0x59c774);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c779ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c9c0u);}[[clang::musttail]] return blk_43c9c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c779(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c779:L59c779:{bud-=20;NFSU2_TR(0x59c779);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c77c:{NFSU2_TR(0x59c77c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c77f:{NFSU2_TR(0x59c77f);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x24ull))));
}
B59c782:{NFSU2_TR(0x59c782);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c784:{NFSU2_TR(0x59c784);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c786:{NFSU2_TR(0x59c786);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c788:{NFSU2_TR(0x59c788);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c78a:{NFSU2_TR(0x59c78a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c78c:{NFSU2_TR(0x59c78c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c78e:{NFSU2_TR(0x59c78e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59c790:{NFSU2_TR(0x59c790);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59c792:{NFSU2_TR(0x59c792);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c794:{NFSU2_TR(0x59c794);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c796:{NFSU2_TR(0x59c796);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59c798:{NFSU2_TR(0x59c798);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c79a:{NFSU2_TR(0x59c79a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c79c:{NFSU2_TR(0x59c79c);
{u32 ea_=u32(u32(8002332u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59c7a2:{NFSU2_TR(0x59c7a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c7a4:{NFSU2_TR(0x59c7a4);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59c7a7:{NFSU2_TR(0x59c7a7);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59c7cd(ARGS);}}
}
B59c7a9:L59c7a9:{bud-=12;NFSU2_TR(0x59c7a9);
{u32 ea_=u32(u32(8002332u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59c7af:{NFSU2_TR(0x59c7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c7b2:{NFSU2_TR(0x59c7b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c7b6:{NFSU2_TR(0x59c7b6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7b9:{NFSU2_TR(0x59c7b9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59c7bb:{NFSU2_TR(0x59c7bb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c7bd:{NFSU2_TR(0x59c7bd);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c7bf:{NFSU2_TR(0x59c7bf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c7c1:{NFSU2_TR(0x59c7c1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c7c4:{NFSU2_TR(0x59c7c4);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7c8:{NFSU2_TR(0x59c7c8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c7ca:{NFSU2_TR(0x59c7ca);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59c7cd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c7cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c7cd:L59c7cd:{bud-=6;NFSU2_TR(0x59c7cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c7cf:{NFSU2_TR(0x59c7cf);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7d5:{NFSU2_TR(0x59c7d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c7db:{NFSU2_TR(0x59c7db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c7dd:{NFSU2_TR(0x59c7dd);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59c7e0:{NFSU2_TR(0x59c7e0);
if(r1(F+2)){{[[clang::musttail]] return blk_59c7ec(ARGS);}}
}
B59c7e2:L59c7e2:{bud-=3;NFSU2_TR(0x59c7e2);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B59c7e4:{NFSU2_TR(0x59c7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c7ea:{NFSU2_TR(0x59c7ea);
{[[clang::musttail]] return blk_59c7ee(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c7ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c7ec:L59c7ec:{bud-=1;NFSU2_TR(0x59c7ec);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_59c7ee(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c7ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c7ee:L59c7ee:{bud-=67;NFSU2_TR(0x59c7ee);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7f1:{NFSU2_TR(0x59c7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c7f4:{NFSU2_TR(0x59c7f4);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7f7:{NFSU2_TR(0x59c7f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+4),(U+0),4);
}
B59c7f9:{NFSU2_TR(0x59c7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c7ff:{NFSU2_TR(0x59c7ff);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c801:{NFSU2_TR(0x59c801);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c807:{NFSU2_TR(0x59c807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c80d:{NFSU2_TR(0x59c80d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c811:{NFSU2_TR(0x59c811);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c817:{NFSU2_TR(0x59c817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c81a:{NFSU2_TR(0x59c81a);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c81d:{NFSU2_TR(0x59c81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c820:{NFSU2_TR(0x59c820);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c823:{NFSU2_TR(0x59c823);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c829:{NFSU2_TR(0x59c829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c82f:{NFSU2_TR(0x59c82f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c831:{NFSU2_TR(0x59c831);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c837:{NFSU2_TR(0x59c837);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c83b:{NFSU2_TR(0x59c83b);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c841:{NFSU2_TR(0x59c841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c844:{NFSU2_TR(0x59c844);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c847:{NFSU2_TR(0x59c847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c84a:{NFSU2_TR(0x59c84a);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c84d:{NFSU2_TR(0x59c84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c853:{NFSU2_TR(0x59c853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c859:{NFSU2_TR(0x59c859);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c85b:{NFSU2_TR(0x59c85b);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c861:{NFSU2_TR(0x59c861);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c865:{NFSU2_TR(0x59c865);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c86b:{NFSU2_TR(0x59c86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c86e:{NFSU2_TR(0x59c86e);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c871:{NFSU2_TR(0x59c871);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c874:{NFSU2_TR(0x59c874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c87a:{NFSU2_TR(0x59c87a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c87c:{NFSU2_TR(0x59c87c);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c882:{NFSU2_TR(0x59c882);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c888:{NFSU2_TR(0x59c888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c892:{NFSU2_TR(0x59c892);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c898:{NFSU2_TR(0x59c898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c89e:{NFSU2_TR(0x59c89e);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8a4:{NFSU2_TR(0x59c8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8aa:{NFSU2_TR(0x59c8aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c8ac:{NFSU2_TR(0x59c8ac);
__builtin_memmove((R+8),(G+0),4);
}
B59c8ae:{NFSU2_TR(0x59c8ae);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c8b4:{NFSU2_TR(0x59c8b4);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c8ba:{NFSU2_TR(0x59c8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59c8c0:{NFSU2_TR(0x59c8c0);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8c6:{NFSU2_TR(0x59c8c6);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8cc:{NFSU2_TR(0x59c8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8d2:{NFSU2_TR(0x59c8d2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c8d4:{NFSU2_TR(0x59c8d4);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c8da:{NFSU2_TR(0x59c8da);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c8e0:{NFSU2_TR(0x59c8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8e6:{NFSU2_TR(0x59c8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8ec:{NFSU2_TR(0x59c8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8f2:{NFSU2_TR(0x59c8f2);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8f8:{NFSU2_TR(0x59c8f8);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8fe:{NFSU2_TR(0x59c8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c904:{NFSU2_TR(0x59c904);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c906:{NFSU2_TR(0x59c906);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c90c:{NFSU2_TR(0x59c90c);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c912:{NFSU2_TR(0x59c912);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c918:{NFSU2_TR(0x59c918);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c91e:{NFSU2_TR(0x59c91e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59c920:{NFSU2_TR(0x59c920);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59c923:{NFSU2_TR(0x59c923);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_59c970(ARGS);}}
}
B59c925:L59c925:{bud-=15;NFSU2_TR(0x59c925);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c92b:{NFSU2_TR(0x59c92b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59c92f:{NFSU2_TR(0x59c92f);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c935:{NFSU2_TR(0x59c935);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c936:{NFSU2_TR(0x59c936);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59c93a:{NFSU2_TR(0x59c93a);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c93b:{NFSU2_TR(0x59c93b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c93d:{NFSU2_TR(0x59c93d);
__builtin_memmove((G+4),(R+24),4);
}
B59c93f:{NFSU2_TR(0x59c93f);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c943:{NFSU2_TR(0x59c943);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c94b:{NFSU2_TR(0x59c94b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c953:{NFSU2_TR(0x59c953);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c95b:{NFSU2_TR(0x59c95b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c963:{NFSU2_TR(0x59c963);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c96b:{NFSU2_TR(0x59c96b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c970ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59bb00u);}[[clang::musttail]] return blk_59bb00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c970(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c970:L59c970:{bud-=6;NFSU2_TR(0x59c970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c971:{NFSU2_TR(0x59c971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c972:{NFSU2_TR(0x59c972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c973:{NFSU2_TR(0x59c973);
__builtin_memmove((G+16),(R+20),4);
}
B59c975:{NFSU2_TR(0x59c975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c976:{NFSU2_TR(0x59c976);
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
PN u32 blk_59c980(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c980:L59c980:{bud-=8;NFSU2_TR(0x59c980);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c981:{NFSU2_TR(0x59c981);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59c985:{NFSU2_TR(0x59c985);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c986:{NFSU2_TR(0x59c986);
u8 U[4];
w4(U+0,u32(0x7a1e90ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c98b:{NFSU2_TR(0x59c98b);
__builtin_memmove((R+24),(G+4),4);
}
B59c98d:{NFSU2_TR(0x59c98d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c98f:{NFSU2_TR(0x59c98f);
__builtin_memmove((G+4),(R+12),4);
}
B59c991:{NFSU2_TR(0x59c991);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c996ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x578ce0u);}[[clang::musttail]] return blk_578ce0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c996(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c996:L59c996:{bud-=4;NFSU2_TR(0x59c996);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59c999:{NFSU2_TR(0x59c999);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c99a:{NFSU2_TR(0x59c99a);
__builtin_memmove((G+4),(R+12),4);
}
B59c99c:{NFSU2_TR(0x59c99c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c9a1ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x571770u);}[[clang::musttail]] return blk_571770(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c9a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c9a1:L59c9a1:{bud-=4;NFSU2_TR(0x59c9a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59c9a4:{NFSU2_TR(0x59c9a4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9a5:{NFSU2_TR(0x59c9a5);
__builtin_memmove((G+4),(R+12),4);
}
B59c9a7:{NFSU2_TR(0x59c9a7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c9acull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x571770u);}[[clang::musttail]] return blk_571770(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c9ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c9ac:L59c9ac:{bud-=4;NFSU2_TR(0x59c9ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59c9b2:{NFSU2_TR(0x59c9b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9b3:{NFSU2_TR(0x59c9b3);
__builtin_memmove((G+4),(R+12),4);
}
B59c9b5:{NFSU2_TR(0x59c9b5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c9baull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x571770u);}[[clang::musttail]] return blk_571770(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c9ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c9ba:L59c9ba:{bud-=4;NFSU2_TR(0x59c9ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59c9c0:{NFSU2_TR(0x59c9c0);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9c1:{NFSU2_TR(0x59c9c1);
__builtin_memmove((G+4),(R+12),4);
}
B59c9c3:{NFSU2_TR(0x59c9c3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c9c8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x571770u);}[[clang::musttail]] return blk_571770(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c9c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c9c8:L59c9c8:{bud-=4;NFSU2_TR(0x59c9c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59c9ce:{NFSU2_TR(0x59c9ce);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9cf:{NFSU2_TR(0x59c9cf);
__builtin_memmove((G+4),(R+12),4);
}
B59c9d1:{NFSU2_TR(0x59c9d1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c9d6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x571770u);}[[clang::musttail]] return blk_571770(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c9d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c9d6:L59c9d6:{bud-=4;NFSU2_TR(0x59c9d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B59c9dc:{NFSU2_TR(0x59c9dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9dd:{NFSU2_TR(0x59c9dd);
__builtin_memmove((G+4),(R+12),4);
}
B59c9df:{NFSU2_TR(0x59c9df);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c9e4ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5716c0u);}[[clang::musttail]] return blk_5716c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c9e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c9e4:L59c9e4:{bud-=4;NFSU2_TR(0x59c9e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59c9ea:{NFSU2_TR(0x59c9ea);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9eb:{NFSU2_TR(0x59c9eb);
__builtin_memmove((G+4),(R+12),4);
}
B59c9ed:{NFSU2_TR(0x59c9ed);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59c9f2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x571770u);}[[clang::musttail]] return blk_571770(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59c9f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59c9f2:L59c9f2:{bud-=7;NFSU2_TR(0x59c9f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9f4:{NFSU2_TR(0x59c9f4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9f6:{NFSU2_TR(0x59c9f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9f8:{NFSU2_TR(0x59c9f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59c9fe:{NFSU2_TR(0x59c9fe);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59c9ff:{NFSU2_TR(0x59c9ff);
__builtin_memmove((G+4),(R+12),4);
}
B59ca01:{NFSU2_TR(0x59ca01);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59ca06ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x571640u);}[[clang::musttail]] return blk_571640(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ca06(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ca06:L59ca06:{bud-=3;NFSU2_TR(0x59ca06);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59ca09:{NFSU2_TR(0x59ca09);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
w1(F+6,u8((r1(R+8))==(u8(0x0ull))));
}
B59ca0c:{NFSU2_TR(0x59ca0c);
if(r1(F+6)){{[[clang::musttail]] return blk_59cb76(ARGS);}}
}
B59ca12:L59ca12:{bud-=4;NFSU2_TR(0x59ca12);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B59ca14:{NFSU2_TR(0x59ca14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59ca15:{NFSU2_TR(0x59ca15);
w4(G+4,u32(0x10ull));
}
B59ca1a:{NFSU2_TR(0x59ca1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_59ca1d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ca1d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ca1d:L59ca1d:{bud-=1;NFSU2_TR(0x59ca1d);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_59ca1f(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59ca1du);}goto L59ca1d;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ca1f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ca1f:L59ca1f:{bud-=2;NFSU2_TR(0x59ca1f);
w4(G+4,u32(0x10ull));
}
B59ca24:{NFSU2_TR(0x59ca24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_59ca27(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ca27(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ca27:L59ca27:{bud-=1;NFSU2_TR(0x59ca27);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_59ca29(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59ca27u);}goto L59ca27;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ca29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ca29:L59ca29:{bud-=3;NFSU2_TR(0x59ca29);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59ca2b:{NFSU2_TR(0x59ca2b);
w4(G+4,u32(0x10ull));
}
B59ca30:{NFSU2_TR(0x59ca30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_59ca36(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ca36(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ca36:L59ca36:{bud-=1;NFSU2_TR(0x59ca36);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_59ca38(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59ca36u);}goto L59ca36;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ca38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ca38:L59ca38:{bud-=61;NFSU2_TR(0x59ca38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59ca3e:{NFSU2_TR(0x59ca3e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B59ca40:{NFSU2_TR(0x59ca40);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca43:{NFSU2_TR(0x59ca43);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca46:{NFSU2_TR(0x59ca46);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca49:{NFSU2_TR(0x59ca49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59ca4f:{NFSU2_TR(0x59ca4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B59ca51:{NFSU2_TR(0x59ca51);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca54:{NFSU2_TR(0x59ca54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca5a:{NFSU2_TR(0x59ca5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ca64:{NFSU2_TR(0x59ca64);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B59ca66:{NFSU2_TR(0x59ca66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59ca6c:{NFSU2_TR(0x59ca6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B59ca72:{NFSU2_TR(0x59ca72);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59ca74:{NFSU2_TR(0x59ca74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59ca7a:{NFSU2_TR(0x59ca7a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B59ca7c:{NFSU2_TR(0x59ca7c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca7f:{NFSU2_TR(0x59ca7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59ca85:{NFSU2_TR(0x59ca85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B59ca87:{NFSU2_TR(0x59ca87);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca8a:{NFSU2_TR(0x59ca8a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca8d:{NFSU2_TR(0x59ca8d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca90:{NFSU2_TR(0x59ca90);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B59ca92:{NFSU2_TR(0x59ca92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59ca98:{NFSU2_TR(0x59ca98);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B59ca9a:{NFSU2_TR(0x59ca9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca9d:{NFSU2_TR(0x59ca9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59caa0:{NFSU2_TR(0x59caa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59caa3:{NFSU2_TR(0x59caa3);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B59caa5:{NFSU2_TR(0x59caa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59caab:{NFSU2_TR(0x59caab);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B59caad:{NFSU2_TR(0x59caad);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cab0:{NFSU2_TR(0x59cab0);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cab3:{NFSU2_TR(0x59cab3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cab6:{NFSU2_TR(0x59cab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59cabc:{NFSU2_TR(0x59cabc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59cac3:{NFSU2_TR(0x59cac3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B59cacc:{NFSU2_TR(0x59cacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cad6:{NFSU2_TR(0x59cad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cae0:{NFSU2_TR(0x59cae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59cae6:{NFSU2_TR(0x59cae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59caf0:{NFSU2_TR(0x59caf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59caf6:{NFSU2_TR(0x59caf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59cafc:{NFSU2_TR(0x59cafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb06:{NFSU2_TR(0x59cb06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59cb0c:{NFSU2_TR(0x59cb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb16:{NFSU2_TR(0x59cb16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((G+0),(U+0),4);
}
B59cb1c:{NFSU2_TR(0x59cb1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59cb22:{NFSU2_TR(0x59cb22);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59cb28:{NFSU2_TR(0x59cb28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((G+0),(U+0),4);
}
B59cb2e:{NFSU2_TR(0x59cb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb38:{NFSU2_TR(0x59cb38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59cb3e:{NFSU2_TR(0x59cb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb48:{NFSU2_TR(0x59cb48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59cb4e:{NFSU2_TR(0x59cb4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59cb54:{NFSU2_TR(0x59cb54);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(G+0)),r4(U+0));
}
B59cb5a:{NFSU2_TR(0x59cb5a);
w4(G+0,u32(0x3f800000ull));
}
B59cb5f:{NFSU2_TR(0x59cb5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cb65:{NFSU2_TR(0x59cb65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cb6b:{NFSU2_TR(0x59cb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb75:{NFSU2_TR(0x59cb75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_59cb76(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cb76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cb76:L59cb76:{bud-=2;NFSU2_TR(0x59cb76);
__builtin_memmove((G+4),(R+12),4);
}
B59cb78:{NFSU2_TR(0x59cb78);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59cb7dull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x578d90u);}[[clang::musttail]] return blk_578d90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cb7d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cb7d:L59cb7d:{bud-=3;NFSU2_TR(0x59cb7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59cb7e:{NFSU2_TR(0x59cb7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59cb7f:{NFSU2_TR(0x59cb7f);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_59cb90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cb90:L59cb90:{bud-=27;NFSU2_TR(0x59cb90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cb91:{NFSU2_TR(0x59cb91);
__builtin_memmove((R+20),(G+16),4);
}
B59cb93:{NFSU2_TR(0x59cb93);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B59cb96:{NFSU2_TR(0x59cb96);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x114ull))));
}
B59cb9c:{NFSU2_TR(0x59cb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59cb9f:{NFSU2_TR(0x59cb9f);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cba2:{NFSU2_TR(0x59cba2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cba3:{NFSU2_TR(0x59cba3);
__builtin_memmove((R+12),(G+4),4);
}
B59cba5:{NFSU2_TR(0x59cba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59cba8:{NFSU2_TR(0x59cba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59cbab:{NFSU2_TR(0x59cbab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cbac:{NFSU2_TR(0x59cbac);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59cbaf:{NFSU2_TR(0x59cbaf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((G+0),(U+4),2);
}
B59cbb3:{NFSU2_TR(0x59cbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cbb6:{NFSU2_TR(0x59cbb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cbb7:{NFSU2_TR(0x59cbb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59cbba:{NFSU2_TR(0x59cbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cbbd:{NFSU2_TR(0x59cbbd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59cbc4:{NFSU2_TR(0x59cbc4);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cbcb:{NFSU2_TR(0x59cbcb);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cbce:{NFSU2_TR(0x59cbce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cbcf:{NFSU2_TR(0x59cbcf);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(768u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cbd6:{NFSU2_TR(0x59cbd6);
__builtin_memmove((G+4),(R+28),4);
}
B59cbd8:{NFSU2_TR(0x59cbd8);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cbdb:{NFSU2_TR(0x59cbdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cbdf:{NFSU2_TR(0x59cbdf);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cbe6:{NFSU2_TR(0x59cbe6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59cbebull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5921b0u);}[[clang::musttail]] return blk_5921b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cbeb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cbeb:L59cbeb:{bud-=5;NFSU2_TR(0x59cbeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((G+4),(U+0),4);
}
B59cbee:{NFSU2_TR(0x59cbee);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cbef:{NFSU2_TR(0x59cbef);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59cbf3:{NFSU2_TR(0x59cbf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cbf4:{NFSU2_TR(0x59cbf4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59cbf9ull));
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
PN u32 blk_59cbf9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cbf9:L59cbf9:{bud-=196;NFSU2_TR(0x59cbf9);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cbfc:{NFSU2_TR(0x59cbfc);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cbff:{NFSU2_TR(0x59cbff);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(F+0))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(F+11))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+24))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B59cc02:{NFSU2_TR(0x59cc02);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc05:{NFSU2_TR(0x59cc05);
u8 U[12];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B59cc0c:{NFSU2_TR(0x59cc0c);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cc10:{NFSU2_TR(0x59cc10);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59cc12:{NFSU2_TR(0x59cc12);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc15:{NFSU2_TR(0x59cc15);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc19:{NFSU2_TR(0x59cc19);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc1c:{NFSU2_TR(0x59cc1c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc1e:{NFSU2_TR(0x59cc1e);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc22:{NFSU2_TR(0x59cc22);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc24:{NFSU2_TR(0x59cc24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc26:{NFSU2_TR(0x59cc26);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc2a:{NFSU2_TR(0x59cc2a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc2d:{NFSU2_TR(0x59cc2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc2f:{NFSU2_TR(0x59cc2f);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cc33:{NFSU2_TR(0x59cc33);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59cc35:{NFSU2_TR(0x59cc35);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc38:{NFSU2_TR(0x59cc38);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc3c:{NFSU2_TR(0x59cc3c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc3f:{NFSU2_TR(0x59cc3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc41:{NFSU2_TR(0x59cc41);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc45:{NFSU2_TR(0x59cc45);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc47:{NFSU2_TR(0x59cc47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc49:{NFSU2_TR(0x59cc49);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc4d:{NFSU2_TR(0x59cc4d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc50:{NFSU2_TR(0x59cc50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc52:{NFSU2_TR(0x59cc52);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cc56:{NFSU2_TR(0x59cc56);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc5a:{NFSU2_TR(0x59cc5a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc5d:{NFSU2_TR(0x59cc5d);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc61:{NFSU2_TR(0x59cc61);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc63:{NFSU2_TR(0x59cc63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc65:{NFSU2_TR(0x59cc65);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc69:{NFSU2_TR(0x59cc69);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc6c:{NFSU2_TR(0x59cc6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc6e:{NFSU2_TR(0x59cc6e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc72:{NFSU2_TR(0x59cc72);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc75:{NFSU2_TR(0x59cc75);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc77:{NFSU2_TR(0x59cc77);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cc7e:{NFSU2_TR(0x59cc7e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc82:{NFSU2_TR(0x59cc82);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc85:{NFSU2_TR(0x59cc85);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc89:{NFSU2_TR(0x59cc89);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc8b:{NFSU2_TR(0x59cc8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc8d:{NFSU2_TR(0x59cc8d);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc91:{NFSU2_TR(0x59cc91);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc94:{NFSU2_TR(0x59cc94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc96:{NFSU2_TR(0x59cc96);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cc99:{NFSU2_TR(0x59cc99);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cca0:{NFSU2_TR(0x59cca0);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cca4:{NFSU2_TR(0x59cca4);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cca7:{NFSU2_TR(0x59cca7);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccab:{NFSU2_TR(0x59ccab);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccae:{NFSU2_TR(0x59ccae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccb0:{NFSU2_TR(0x59ccb0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59ccb2:{NFSU2_TR(0x59ccb2);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccb5:{NFSU2_TR(0x59ccb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccb7:{NFSU2_TR(0x59ccb7);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccbb:{NFSU2_TR(0x59ccbb);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccbe:{NFSU2_TR(0x59ccbe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccc0:{NFSU2_TR(0x59ccc0);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ccc7:{NFSU2_TR(0x59ccc7);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cccb:{NFSU2_TR(0x59cccb);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccce:{NFSU2_TR(0x59ccce);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccd2:{NFSU2_TR(0x59ccd2);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccd5:{NFSU2_TR(0x59ccd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccd7:{NFSU2_TR(0x59ccd7);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccdb:{NFSU2_TR(0x59ccdb);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccde:{NFSU2_TR(0x59ccde);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cce0:{NFSU2_TR(0x59cce0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59cce2:{NFSU2_TR(0x59cce2);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cce5:{NFSU2_TR(0x59cce5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cce7:{NFSU2_TR(0x59cce7);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ccee:{NFSU2_TR(0x59ccee);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccf2:{NFSU2_TR(0x59ccf2);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccf5:{NFSU2_TR(0x59ccf5);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccf9:{NFSU2_TR(0x59ccf9);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccfc:{NFSU2_TR(0x59ccfc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccfe:{NFSU2_TR(0x59ccfe);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd02:{NFSU2_TR(0x59cd02);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd05:{NFSU2_TR(0x59cd05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd07:{NFSU2_TR(0x59cd07);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd0b:{NFSU2_TR(0x59cd0b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd0e:{NFSU2_TR(0x59cd0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd10:{NFSU2_TR(0x59cd10);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cd17:{NFSU2_TR(0x59cd17);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd1b:{NFSU2_TR(0x59cd1b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd1e:{NFSU2_TR(0x59cd1e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd22:{NFSU2_TR(0x59cd22);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd25:{NFSU2_TR(0x59cd25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd27:{NFSU2_TR(0x59cd27);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd2b:{NFSU2_TR(0x59cd2b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd2e:{NFSU2_TR(0x59cd2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd30:{NFSU2_TR(0x59cd30);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cd33:{NFSU2_TR(0x59cd33);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cd3a:{NFSU2_TR(0x59cd3a);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd3e:{NFSU2_TR(0x59cd3e);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd41:{NFSU2_TR(0x59cd41);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd45:{NFSU2_TR(0x59cd45);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd48:{NFSU2_TR(0x59cd48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd4a:{NFSU2_TR(0x59cd4a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59cd4c:{NFSU2_TR(0x59cd4c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd4f:{NFSU2_TR(0x59cd4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd51:{NFSU2_TR(0x59cd51);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd55:{NFSU2_TR(0x59cd55);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd58:{NFSU2_TR(0x59cd58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd5a:{NFSU2_TR(0x59cd5a);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cd61:{NFSU2_TR(0x59cd61);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd65:{NFSU2_TR(0x59cd65);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd68:{NFSU2_TR(0x59cd68);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd6c:{NFSU2_TR(0x59cd6c);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd6f:{NFSU2_TR(0x59cd6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd71:{NFSU2_TR(0x59cd71);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd75:{NFSU2_TR(0x59cd75);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd78:{NFSU2_TR(0x59cd78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd7a:{NFSU2_TR(0x59cd7a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59cd7c:{NFSU2_TR(0x59cd7c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd7f:{NFSU2_TR(0x59cd7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd81:{NFSU2_TR(0x59cd81);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cd88:{NFSU2_TR(0x59cd88);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd8c:{NFSU2_TR(0x59cd8c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd8f:{NFSU2_TR(0x59cd8f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd93:{NFSU2_TR(0x59cd93);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd96:{NFSU2_TR(0x59cd96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd98:{NFSU2_TR(0x59cd98);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd9c:{NFSU2_TR(0x59cd9c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd9f:{NFSU2_TR(0x59cd9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cda1:{NFSU2_TR(0x59cda1);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cda5:{NFSU2_TR(0x59cda5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cda8:{NFSU2_TR(0x59cda8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cdaa:{NFSU2_TR(0x59cdaa);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cdb1:{NFSU2_TR(0x59cdb1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdb5:{NFSU2_TR(0x59cdb5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cdb8:{NFSU2_TR(0x59cdb8);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdbc:{NFSU2_TR(0x59cdbc);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cdbf:{NFSU2_TR(0x59cdbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cdc1:{NFSU2_TR(0x59cdc1);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdc5:{NFSU2_TR(0x59cdc5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cdc8:{NFSU2_TR(0x59cdc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cdca:{NFSU2_TR(0x59cdca);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cdcd:{NFSU2_TR(0x59cdcd);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cdd4:{NFSU2_TR(0x59cdd4);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdd8:{NFSU2_TR(0x59cdd8);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cddb:{NFSU2_TR(0x59cddb);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cddf:{NFSU2_TR(0x59cddf);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cde2:{NFSU2_TR(0x59cde2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cde4:{NFSU2_TR(0x59cde4);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59cde6:{NFSU2_TR(0x59cde6);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cde9:{NFSU2_TR(0x59cde9);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B59cdeb:{NFSU2_TR(0x59cdeb);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdef:{NFSU2_TR(0x59cdef);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cdf2:{NFSU2_TR(0x59cdf2);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B59cdf4:{NFSU2_TR(0x59cdf4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59cdf6:{NFSU2_TR(0x59cdf6);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cdfd:{NFSU2_TR(0x59cdfd);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce01:{NFSU2_TR(0x59ce01);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce04:{NFSU2_TR(0x59ce04);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce08:{NFSU2_TR(0x59ce08);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce0b:{NFSU2_TR(0x59ce0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59ce0f:{NFSU2_TR(0x59ce0f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59ce10:{NFSU2_TR(0x59ce10);
u8 U[4];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59ce17:{NFSU2_TR(0x59ce17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce19:{NFSU2_TR(0x59ce19);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce1d:{NFSU2_TR(0x59ce1d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59ce1e:{NFSU2_TR(0x59ce1e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce21:{NFSU2_TR(0x59ce21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce23:{NFSU2_TR(0x59ce23);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59ce25:{NFSU2_TR(0x59ce25);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce28:{NFSU2_TR(0x59ce28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce2a:{NFSU2_TR(0x59ce2a);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ce31:{NFSU2_TR(0x59ce31);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce35:{NFSU2_TR(0x59ce35);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce38:{NFSU2_TR(0x59ce38);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce3c:{NFSU2_TR(0x59ce3c);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce3f:{NFSU2_TR(0x59ce3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce41:{NFSU2_TR(0x59ce41);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce45:{NFSU2_TR(0x59ce45);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce48:{NFSU2_TR(0x59ce48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce4a:{NFSU2_TR(0x59ce4a);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce4e:{NFSU2_TR(0x59ce4e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce51:{NFSU2_TR(0x59ce51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce53:{NFSU2_TR(0x59ce53);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ce5a:{NFSU2_TR(0x59ce5a);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce5e:{NFSU2_TR(0x59ce5e);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce61:{NFSU2_TR(0x59ce61);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce65:{NFSU2_TR(0x59ce65);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce68:{NFSU2_TR(0x59ce68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce6a:{NFSU2_TR(0x59ce6a);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce6e:{NFSU2_TR(0x59ce6e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce71:{NFSU2_TR(0x59ce71);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce73:{NFSU2_TR(0x59ce73);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ce76:{NFSU2_TR(0x59ce76);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ce7d:{NFSU2_TR(0x59ce7d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59ce82ull));
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
PN u32 blk_59ce82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ce82:L59ce82:{bud-=4;NFSU2_TR(0x59ce82);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x10ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x10ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B59ce85:{NFSU2_TR(0x59ce85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59ce86:{NFSU2_TR(0x59ce86);
__builtin_memmove((G+4),(R+12),4);
}
B59ce88:{NFSU2_TR(0x59ce88);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59ce8dull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x591480u);}[[clang::musttail]] return blk_591480(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ce8d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ce8d:L59ce8d:{bud-=4;NFSU2_TR(0x59ce8d);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ce94:{NFSU2_TR(0x59ce94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59ce95:{NFSU2_TR(0x59ce95);
__builtin_memmove((G+4),(R+12),4);
}
B59ce97:{NFSU2_TR(0x59ce97);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59ce9cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5913d0u);}[[clang::musttail]] return blk_5913d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59ce9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59ce9c:L59ce9c:{bud-=16;NFSU2_TR(0x59ce9c);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cea3:{NFSU2_TR(0x59cea3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59cea6:{NFSU2_TR(0x59cea6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B59ceac:{NFSU2_TR(0x59ceac);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cead:{NFSU2_TR(0x59cead);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59ceb4:{NFSU2_TR(0x59ceb4);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cebb:{NFSU2_TR(0x59cebb);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cebe:{NFSU2_TR(0x59cebe);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cebf:{NFSU2_TR(0x59cebf);
{u32 ea_=u32(r4(G+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59cec6:{NFSU2_TR(0x59cec6);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ceca:{NFSU2_TR(0x59ceca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cecb:{NFSU2_TR(0x59cecb);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ced2:{NFSU2_TR(0x59ced2);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ced5:{NFSU2_TR(0x59ced5);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59cedc:{NFSU2_TR(0x59cedc);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cee3:{NFSU2_TR(0x59cee3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59cee8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43d1e0u);}[[clang::musttail]] return blk_43d1e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cee8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cee8:L59cee8:{bud-=28;NFSU2_TR(0x59cee8);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ceec:{NFSU2_TR(0x59ceec);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ceef:{NFSU2_TR(0x59ceef);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B59cef2:{NFSU2_TR(0x59cef2);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59cef6:{NFSU2_TR(0x59cef6);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cef9:{NFSU2_TR(0x59cef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59cf00:{NFSU2_TR(0x59cf00);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59cf07:{NFSU2_TR(0x59cf07);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cf0b:{NFSU2_TR(0x59cf0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cf0d:{NFSU2_TR(0x59cf0d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cf14:{NFSU2_TR(0x59cf14);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59cf18:{NFSU2_TR(0x59cf18);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59cf1c:{NFSU2_TR(0x59cf1c);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cf1f:{NFSU2_TR(0x59cf1f);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cf26:{NFSU2_TR(0x59cf26);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cf2a:{NFSU2_TR(0x59cf2a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cf2e:{NFSU2_TR(0x59cf2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59cf32:{NFSU2_TR(0x59cf32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cf38:{NFSU2_TR(0x59cf38);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59cf3a:{NFSU2_TR(0x59cf3a);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59cf41:{NFSU2_TR(0x59cf41);
{u32 ea_=u32(r4(R+12)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cf47:{NFSU2_TR(0x59cf47);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cf48:{NFSU2_TR(0x59cf48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cf49:{NFSU2_TR(0x59cf49);
{u32 ea_=u32(r4(R+12)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cf4f:{NFSU2_TR(0x59cf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59cf52:{NFSU2_TR(0x59cf52);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B59cf59:{NFSU2_TR(0x59cf59);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59cf5a:{NFSU2_TR(0x59cf5a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59cf5full));
{[[clang::musttail]] return blk_5e7e70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cf5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cf5f:L59cf5f:{bud-=5;NFSU2_TR(0x59cf5f);
{u32 ea_=u32(r4(R+12)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cf65:{NFSU2_TR(0x59cf65);
__builtin_memmove((G+0),gp(0x89e7d8),1);
}
B59cf6a:{NFSU2_TR(0x59cf6a);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59cf6c:{NFSU2_TR(0x59cf6c);
w4(R+8,u32(0x1ull));
}
B59cf71:{NFSU2_TR(0x59cf71);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59cf8e(ARGS);}}
}
B59cf73:L59cf73:{bud-=3;NFSU2_TR(0x59cf73);
__builtin_memmove((G+0),gp(0x890108),4);
}
B59cf78:{NFSU2_TR(0x59cf78);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B59cf7a:{NFSU2_TR(0x59cf7a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59cf8e(ARGS);}}
}
B59cf7c:L59cf7c:{bud-=3;NFSU2_TR(0x59cf7c);
__builtin_memmove((G+0),gp(0x89e7e3),1);
}
B59cf81:{NFSU2_TR(0x59cf81);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59cf83:{NFSU2_TR(0x59cf83);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59cf8e(ARGS);}}
}
B59cf85:L59cf85:{bud-=3;NFSU2_TR(0x59cf85);
__builtin_memmove((G+0),gp(0x89010c),4);
}
B59cf8a:{NFSU2_TR(0x59cf8a);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B59cf8c:{NFSU2_TR(0x59cf8c);
if(r1(F+6)){{[[clang::musttail]] return blk_59cf92(ARGS);}}
{[[clang::musttail]] return blk_59cf8e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cf8e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cf8e:L59cf8e:{bud-=1;NFSU2_TR(0x59cf8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_59cf92(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cf92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cf92:L59cf92:{bud-=5;NFSU2_TR(0x59cf92);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59cf96:{NFSU2_TR(0x59cf96);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((G+4),(U+12),1);
}
B59cf9d:{NFSU2_TR(0x59cf9d);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(r1(G+4))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B59cf9f:{NFSU2_TR(0x59cf9f);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B59cfa6:{NFSU2_TR(0x59cfa6);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_59cfae(ARGS);}}
}
B59cfa8:L59cfa8:{bud-=1;NFSU2_TR(0x59cfa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_59cfae(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cfae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cfae:L59cfae:{bud-=4;NFSU2_TR(0x59cfae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59cfb2:{NFSU2_TR(0x59cfb2);
u8 U[30];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(F+0,u8((r4(G+4))<(r4(U+22))));
w1(F+11,sborrow<u32>(r4(G+4),r4(U+22)));
w4(U+26,u32(u32(r4(G+4))-u32(r4(U+22))));
w1(F+7,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+21))==(u8(0x0ull))));
}
B59cfb9:{NFSU2_TR(0x59cfb9);
u8 U[16];
w4(U+0,u32(u32(u32(0x354ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59cfc0:{NFSU2_TR(0x59cfc0);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_59cfc9(ARGS);}}
}
B59cfc2:L59cfc2:{bud-=1;NFSU2_TR(0x59cfc2);
u8 U[16];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_59cfc9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59cfc9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59cfc9:L59cfc9:{bud-=9;NFSU2_TR(0x59cfc9);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59cfd0:{NFSU2_TR(0x59cfd0);
{u32 ea_=u32(r4(R+12)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cfd6:{NFSU2_TR(0x59cfd6);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59cfdd:{NFSU2_TR(0x59cfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cfe3:{NFSU2_TR(0x59cfe3);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59cfea:{NFSU2_TR(0x59cfea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cff0:{NFSU2_TR(0x59cff0);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59cff7:{NFSU2_TR(0x59cff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cffd:{NFSU2_TR(0x59cffd);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{EXIT(0x59d004u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_59c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x59c00f:[[clang::musttail]] return blk_59c00f(c,a4,a0,a1,bud);
case 0x59c06d:[[clang::musttail]] return blk_59c06d(c,a4,a0,a1,bud);
case 0x59c086:[[clang::musttail]] return blk_59c086(c,a4,a0,a1,bud);
case 0x59c095:[[clang::musttail]] return blk_59c095(c,a4,a0,a1,bud);
case 0x59c0af:[[clang::musttail]] return blk_59c0af(c,a4,a0,a1,bud);
case 0x59c0c6:[[clang::musttail]] return blk_59c0c6(c,a4,a0,a1,bud);
case 0x59c120:[[clang::musttail]] return blk_59c120(c,a4,a0,a1,bud);
case 0x59c1e0:[[clang::musttail]] return blk_59c1e0(c,a4,a0,a1,bud);
case 0x59c227:[[clang::musttail]] return blk_59c227(c,a4,a0,a1,bud);
case 0x59c25a:[[clang::musttail]] return blk_59c25a(c,a4,a0,a1,bud);
case 0x59c278:[[clang::musttail]] return blk_59c278(c,a4,a0,a1,bud);
case 0x59c295:[[clang::musttail]] return blk_59c295(c,a4,a0,a1,bud);
case 0x59c2b1:[[clang::musttail]] return blk_59c2b1(c,a4,a0,a1,bud);
case 0x59c31c:[[clang::musttail]] return blk_59c31c(c,a4,a0,a1,bud);
case 0x59c32c:[[clang::musttail]] return blk_59c32c(c,a4,a0,a1,bud);
case 0x59c350:[[clang::musttail]] return blk_59c350(c,a4,a0,a1,bud);
case 0x59c364:[[clang::musttail]] return blk_59c364(c,a4,a0,a1,bud);
case 0x59c37b:[[clang::musttail]] return blk_59c37b(c,a4,a0,a1,bud);
case 0x59c3ae:[[clang::musttail]] return blk_59c3ae(c,a4,a0,a1,bud);
case 0x59c428:[[clang::musttail]] return blk_59c428(c,a4,a0,a1,bud);
case 0x59c466:[[clang::musttail]] return blk_59c466(c,a4,a0,a1,bud);
case 0x59c4b5:[[clang::musttail]] return blk_59c4b5(c,a4,a0,a1,bud);
case 0x59c4b7:[[clang::musttail]] return blk_59c4b7(c,a4,a0,a1,bud);
case 0x59c4c6:[[clang::musttail]] return blk_59c4c6(c,a4,a0,a1,bud);
case 0x59c4dd:[[clang::musttail]] return blk_59c4dd(c,a4,a0,a1,bud);
case 0x59c4e8:[[clang::musttail]] return blk_59c4e8(c,a4,a0,a1,bud);
case 0x59c581:[[clang::musttail]] return blk_59c581(c,a4,a0,a1,bud);
case 0x59c5b0:[[clang::musttail]] return blk_59c5b0(c,a4,a0,a1,bud);
case 0x59c5bb:[[clang::musttail]] return blk_59c5bb(c,a4,a0,a1,bud);
case 0x59c5de:[[clang::musttail]] return blk_59c5de(c,a4,a0,a1,bud);
case 0x59c5f0:[[clang::musttail]] return blk_59c5f0(c,a4,a0,a1,bud);
case 0x59c6d1:[[clang::musttail]] return blk_59c6d1(c,a4,a0,a1,bud);
case 0x59c71f:[[clang::musttail]] return blk_59c71f(c,a4,a0,a1,bud);
case 0x59c738:[[clang::musttail]] return blk_59c738(c,a4,a0,a1,bud);
case 0x59c744:[[clang::musttail]] return blk_59c744(c,a4,a0,a1,bud);
case 0x59c75e:[[clang::musttail]] return blk_59c75e(c,a4,a0,a1,bud);
case 0x59c779:[[clang::musttail]] return blk_59c779(c,a4,a0,a1,bud);
case 0x59c7cd:[[clang::musttail]] return blk_59c7cd(c,a4,a0,a1,bud);
case 0x59c7ec:[[clang::musttail]] return blk_59c7ec(c,a4,a0,a1,bud);
case 0x59c7ee:[[clang::musttail]] return blk_59c7ee(c,a4,a0,a1,bud);
case 0x59c970:[[clang::musttail]] return blk_59c970(c,a4,a0,a1,bud);
case 0x59c980:[[clang::musttail]] return blk_59c980(c,a4,a0,a1,bud);
case 0x59c996:[[clang::musttail]] return blk_59c996(c,a4,a0,a1,bud);
case 0x59c9a1:[[clang::musttail]] return blk_59c9a1(c,a4,a0,a1,bud);
case 0x59c9ac:[[clang::musttail]] return blk_59c9ac(c,a4,a0,a1,bud);
case 0x59c9ba:[[clang::musttail]] return blk_59c9ba(c,a4,a0,a1,bud);
case 0x59c9c8:[[clang::musttail]] return blk_59c9c8(c,a4,a0,a1,bud);
case 0x59c9d6:[[clang::musttail]] return blk_59c9d6(c,a4,a0,a1,bud);
case 0x59c9e4:[[clang::musttail]] return blk_59c9e4(c,a4,a0,a1,bud);
case 0x59c9f2:[[clang::musttail]] return blk_59c9f2(c,a4,a0,a1,bud);
case 0x59ca06:[[clang::musttail]] return blk_59ca06(c,a4,a0,a1,bud);
case 0x59ca1d:[[clang::musttail]] return blk_59ca1d(c,a4,a0,a1,bud);
case 0x59ca1f:[[clang::musttail]] return blk_59ca1f(c,a4,a0,a1,bud);
case 0x59ca27:[[clang::musttail]] return blk_59ca27(c,a4,a0,a1,bud);
case 0x59ca29:[[clang::musttail]] return blk_59ca29(c,a4,a0,a1,bud);
case 0x59ca36:[[clang::musttail]] return blk_59ca36(c,a4,a0,a1,bud);
case 0x59ca38:[[clang::musttail]] return blk_59ca38(c,a4,a0,a1,bud);
case 0x59cb76:[[clang::musttail]] return blk_59cb76(c,a4,a0,a1,bud);
case 0x59cb7d:[[clang::musttail]] return blk_59cb7d(c,a4,a0,a1,bud);
case 0x59cb90:[[clang::musttail]] return blk_59cb90(c,a4,a0,a1,bud);
case 0x59cbeb:[[clang::musttail]] return blk_59cbeb(c,a4,a0,a1,bud);
case 0x59cbf9:[[clang::musttail]] return blk_59cbf9(c,a4,a0,a1,bud);
case 0x59ce82:[[clang::musttail]] return blk_59ce82(c,a4,a0,a1,bud);
case 0x59ce8d:[[clang::musttail]] return blk_59ce8d(c,a4,a0,a1,bud);
case 0x59ce9c:[[clang::musttail]] return blk_59ce9c(c,a4,a0,a1,bud);
case 0x59cee8:[[clang::musttail]] return blk_59cee8(c,a4,a0,a1,bud);
case 0x59cf5f:[[clang::musttail]] return blk_59cf5f(c,a4,a0,a1,bud);
case 0x59cf8e:[[clang::musttail]] return blk_59cf8e(c,a4,a0,a1,bud);
case 0x59cf92:[[clang::musttail]] return blk_59cf92(c,a4,a0,a1,bud);
case 0x59cfae:[[clang::musttail]] return blk_59cfae(c,a4,a0,a1,bud);
case 0x59cfc9:[[clang::musttail]] return blk_59cfc9(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_59c(Cpu& c){u8* R=c.regs.data();return ent_59c(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
