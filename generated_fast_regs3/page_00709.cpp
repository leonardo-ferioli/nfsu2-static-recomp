#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_708fc0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_708fef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_70903e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709100(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709106(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709111(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709115(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_70912a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709130(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_70913b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_70913f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709222(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709257(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709280(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7092de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7092eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709342(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709362(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709365(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709378(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709393(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709396(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_70946f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7094a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7094c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7095b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7095f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709697(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7096b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709765(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709770(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709796(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7097a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_70989b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_70991a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709974(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7099a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7099ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709a0f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709aac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709ab2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709abd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709ac1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709ad6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709adc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709ae7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709aeb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709bcc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709c00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709c14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709c48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709d3a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709d5b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709ddd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709e00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709e03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709e16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709e31(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709e34(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709e52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709e74(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709f73(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709ff5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_70a275(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709282(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7094c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709c4d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_709000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709000:L709000:{bud-=18;NFSU2_TR(0x709000);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B709004:{NFSU2_TR(0x709004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709007:{NFSU2_TR(0x709007);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B70900b:{NFSU2_TR(0x70900b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70900e:{NFSU2_TR(0x70900e);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B709012:{NFSU2_TR(0x709012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709015:{NFSU2_TR(0x709015);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B709019:{NFSU2_TR(0x709019);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70901c:{NFSU2_TR(0x70901c);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B709020:{NFSU2_TR(0x709020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709023:{NFSU2_TR(0x709023);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B709025:{NFSU2_TR(0x709025);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709028:{NFSU2_TR(0x709028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70902b:{NFSU2_TR(0x70902b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70902e:{NFSU2_TR(0x70902e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709031:{NFSU2_TR(0x709031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709034:{NFSU2_TR(0x709034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709037:{NFSU2_TR(0x709037);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_70903e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_70903e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B70903e:L70903e:{bud-=9;NFSU2_TR(0x70903e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709041:{NFSU2_TR(0x709041);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B709045:{NFSU2_TR(0x709045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709048:{NFSU2_TR(0x709048);
__builtin_memmove((R+12),(G+0),4);
}
B70904a:{NFSU2_TR(0x70904a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70904d:{NFSU2_TR(0x70904d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709050:{NFSU2_TR(0x709050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709053:{NFSU2_TR(0x709053);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B709057:{NFSU2_TR(0x709057);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x70903eu);}goto L70903e;}}
}
B709059:L709059:{bud-=1;NFSU2_TR(0x709059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709060(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709060:L709060:{bud-=9;NFSU2_TR(0x709060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709063:{NFSU2_TR(0x709063);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B709067:{NFSU2_TR(0x709067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70906a:{NFSU2_TR(0x70906a);
__builtin_memmove((R+12),(G+0),4);
}
B70906c:{NFSU2_TR(0x70906c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70906f:{NFSU2_TR(0x70906f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709072:{NFSU2_TR(0x709072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709075:{NFSU2_TR(0x709075);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B709079:{NFSU2_TR(0x709079);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x709060u);}goto L709060;}}
}
B70907b:L70907b:{bud-=27;NFSU2_TR(0x70907b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70907e:{NFSU2_TR(0x70907e);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709081:{NFSU2_TR(0x709081);
w4(G+0,sar<u32>(r4(G+0),u64(u32(0x1ull))));
}
B709083:{NFSU2_TR(0x709083);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B709085:{NFSU2_TR(0x709085);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709088:{NFSU2_TR(0x709088);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B70908b:{NFSU2_TR(0x70908b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70908e:{NFSU2_TR(0x70908e);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709091:{NFSU2_TR(0x709091);
w4(G+0,sar<u32>(r4(G+0),u64(u32(0x1ull))));
}
B709093:{NFSU2_TR(0x709093);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B709095:{NFSU2_TR(0x709095);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709098:{NFSU2_TR(0x709098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B70909b:{NFSU2_TR(0x70909b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70909e:{NFSU2_TR(0x70909e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7090a1:{NFSU2_TR(0x7090a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7090a4:{NFSU2_TR(0x7090a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B7090a7:{NFSU2_TR(0x7090a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7090aa:{NFSU2_TR(0x7090aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(G+0)),r4(U+0));
}
B7090ac:{NFSU2_TR(0x7090ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7090af:{NFSU2_TR(0x7090af);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7090b2:{NFSU2_TR(0x7090b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7090b5:{NFSU2_TR(0x7090b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B7090b9:{NFSU2_TR(0x7090b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7090bc:{NFSU2_TR(0x7090bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(G+0)),r4(U+0));
}
B7090be:{NFSU2_TR(0x7090be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7090c1:{NFSU2_TR(0x7090c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7090c4:{NFSU2_TR(0x7090c4);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709222(ARGS);}}
}
B7090ca:L7090ca:{bud-=2;NFSU2_TR(0x7090ca);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7090cc:{NFSU2_TR(0x7090cc);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709222(ARGS);}}
}
B7090d2:L7090d2:{bud-=4;NFSU2_TR(0x7090d2);
__builtin_memmove((G+0),(R+28),4);
}
B7090d4:{NFSU2_TR(0x7090d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B7090d7:{NFSU2_TR(0x7090d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7090da:{NFSU2_TR(0x7090da);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709222(ARGS);}}
}
B7090e0:L7090e0:{bud-=4;NFSU2_TR(0x7090e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7090e3:{NFSU2_TR(0x7090e3);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+28))));
}
B7090e5:{NFSU2_TR(0x7090e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7090e8:{NFSU2_TR(0x7090e8);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709222(ARGS);}}
}
B7090ee:L7090ee:{bud-=5;NFSU2_TR(0x7090ee);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B7090f2:{NFSU2_TR(0x7090f2);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B7090f6:{NFSU2_TR(0x7090f6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B7090f8:{NFSU2_TR(0x7090f8);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B7090fa:{NFSU2_TR(0x7090fa);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_709100(ARGS);}}
}
B7090fc:L7090fc:{bud-=2;NFSU2_TR(0x7090fc);
__builtin_memmove((G+0),(R+12),4);
}
B7090fe:{NFSU2_TR(0x7090fe);
{[[clang::musttail]] return blk_709106(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709100(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709100:L709100:{bud-=2;NFSU2_TR(0x709100);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709104:{NFSU2_TR(0x709104);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+12))));
{[[clang::musttail]] return blk_709106(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709106(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709106:L709106:{bud-=2;NFSU2_TR(0x709106);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709109:{NFSU2_TR(0x709109);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709111(ARGS);}}
}
B70910b:L70910b:{bud-=2;NFSU2_TR(0x70910b);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B70910f:{NFSU2_TR(0x70910f);
{[[clang::musttail]] return blk_709115(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709111(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709111:L709111:{bud-=1;NFSU2_TR(0x709111);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
{[[clang::musttail]] return blk_709115(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709115(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709115:L709115:{bud-=6;NFSU2_TR(0x709115);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709119:{NFSU2_TR(0x709119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70911c:{NFSU2_TR(0x70911c);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B709120:{NFSU2_TR(0x709120);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B709122:{NFSU2_TR(0x709122);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B709124:{NFSU2_TR(0x709124);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_70912a(ARGS);}}
}
B709126:L709126:{bud-=2;NFSU2_TR(0x709126);
__builtin_memmove((G+0),(R+12),4);
}
B709128:{NFSU2_TR(0x709128);
{[[clang::musttail]] return blk_709130(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_70912a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B70912a:L70912a:{bud-=2;NFSU2_TR(0x70912a);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70912e:{NFSU2_TR(0x70912e);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+12))));
{[[clang::musttail]] return blk_709130(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709130(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709130:L709130:{bud-=2;NFSU2_TR(0x709130);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709133:{NFSU2_TR(0x709133);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70913b(ARGS);}}
}
B709135:L709135:{bud-=2;NFSU2_TR(0x709135);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B709139:{NFSU2_TR(0x709139);
{[[clang::musttail]] return blk_70913f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_70913b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B70913b:L70913b:{bud-=1;NFSU2_TR(0x70913b);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
{[[clang::musttail]] return blk_70913f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_70913f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B70913f:L70913f:{bud-=86;NFSU2_TR(0x70913f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709142:{NFSU2_TR(0x709142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709145:{NFSU2_TR(0x709145);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709148:{NFSU2_TR(0x709148);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B70914b:{NFSU2_TR(0x70914b);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+12))));
}
B70914d:{NFSU2_TR(0x70914d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B709150:{NFSU2_TR(0x709150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B709153:{NFSU2_TR(0x709153);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B709157:{NFSU2_TR(0x709157);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B709159:{NFSU2_TR(0x709159);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70915b:{NFSU2_TR(0x70915b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70915e:{NFSU2_TR(0x70915e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B709160:{NFSU2_TR(0x709160);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709163:{NFSU2_TR(0x709163);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709166:{NFSU2_TR(0x709166);
__builtin_memmove((R+8),(R+28),4);
}
B709168:{NFSU2_TR(0x709168);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B70916a:{NFSU2_TR(0x70916a);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B70916c:{NFSU2_TR(0x70916c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70916f:{NFSU2_TR(0x70916f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B709171:{NFSU2_TR(0x709171);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709173:{NFSU2_TR(0x709173);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B709175:{NFSU2_TR(0x709175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709178:{NFSU2_TR(0x709178);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70917b:{NFSU2_TR(0x70917b);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70917d:{NFSU2_TR(0x70917d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709180:{NFSU2_TR(0x709180);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B709182:{NFSU2_TR(0x709182);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B709184:{NFSU2_TR(0x709184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709187:{NFSU2_TR(0x709187);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B709189:{NFSU2_TR(0x709189);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70918b:{NFSU2_TR(0x70918b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70918e:{NFSU2_TR(0x70918e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709191:{NFSU2_TR(0x709191);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709194:{NFSU2_TR(0x709194);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709197:{NFSU2_TR(0x709197);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70919a:{NFSU2_TR(0x70919a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B70919c:{NFSU2_TR(0x70919c);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B70919e:{NFSU2_TR(0x70919e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091a1:{NFSU2_TR(0x7091a1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B7091a3:{NFSU2_TR(0x7091a3);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7091a5:{NFSU2_TR(0x7091a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091a8:{NFSU2_TR(0x7091a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091ab:{NFSU2_TR(0x7091ab);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B7091ad:{NFSU2_TR(0x7091ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7091b0:{NFSU2_TR(0x7091b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7091b3:{NFSU2_TR(0x7091b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7091b6:{NFSU2_TR(0x7091b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091b9:{NFSU2_TR(0x7091b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091bc:{NFSU2_TR(0x7091bc);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B7091be:{NFSU2_TR(0x7091be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7091c1:{NFSU2_TR(0x7091c1);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7091c3:{NFSU2_TR(0x7091c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091c6:{NFSU2_TR(0x7091c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091c9:{NFSU2_TR(0x7091c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7091cc:{NFSU2_TR(0x7091cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7091cf:{NFSU2_TR(0x7091cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7091d2:{NFSU2_TR(0x7091d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7091d5:{NFSU2_TR(0x7091d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091d8:{NFSU2_TR(0x7091d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091db:{NFSU2_TR(0x7091db);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B7091dd:{NFSU2_TR(0x7091dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091e0:{NFSU2_TR(0x7091e0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B7091e2:{NFSU2_TR(0x7091e2);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7091e4:{NFSU2_TR(0x7091e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091e7:{NFSU2_TR(0x7091e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7091ea:{NFSU2_TR(0x7091ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7091ed:{NFSU2_TR(0x7091ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7091f0:{NFSU2_TR(0x7091f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091f3:{NFSU2_TR(0x7091f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7091f6:{NFSU2_TR(0x7091f6);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B7091f8:{NFSU2_TR(0x7091f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7091fb:{NFSU2_TR(0x7091fb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B7091fd:{NFSU2_TR(0x7091fd);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7091ff:{NFSU2_TR(0x7091ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709202:{NFSU2_TR(0x709202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709205:{NFSU2_TR(0x709205);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709208:{NFSU2_TR(0x709208);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70920b:{NFSU2_TR(0x70920b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70920e:{NFSU2_TR(0x70920e);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B709210:{NFSU2_TR(0x709210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B709213:{NFSU2_TR(0x709213);
w4(G+0,shl<u32>(r4(G+0),u64(u32(0x1ull))));
}
B709215:{NFSU2_TR(0x709215);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+28))));
}
B709217:{NFSU2_TR(0x709217);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B70921a:{NFSU2_TR(0x70921a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B70921d:{NFSU2_TR(0x70921d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709220:{NFSU2_TR(0x709220);
{[[clang::musttail]] return blk_709257(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709222(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709222:L709222:{bud-=16;NFSU2_TR(0x709222);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709225:{NFSU2_TR(0x709225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709228:{NFSU2_TR(0x709228);
__builtin_memmove((G+0),(R+28),4);
}
B70922a:{NFSU2_TR(0x70922a);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B70922c:{NFSU2_TR(0x70922c);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B70922f:{NFSU2_TR(0x70922f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B709232:{NFSU2_TR(0x709232);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B709236:{NFSU2_TR(0x709236);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709239:{NFSU2_TR(0x709239);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70923c:{NFSU2_TR(0x70923c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B70923f:{NFSU2_TR(0x70923f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B709242:{NFSU2_TR(0x709242);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B709249:{NFSU2_TR(0x709249);
w4(R+28,u32(u32(r4(R+28))-u32(r4(G+0))));
}
B70924b:{NFSU2_TR(0x70924b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70924e:{NFSU2_TR(0x70924e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B709254:{NFSU2_TR(0x709254);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_709257(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709257(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709257:L709257:{bud-=4;NFSU2_TR(0x709257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B70925a:{NFSU2_TR(0x70925a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70925d:{NFSU2_TR(0x70925d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B709260:{NFSU2_TR(0x709260);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x708fefu);}[[clang::musttail]] return blk_708fef(ARGS);}}
}
B709266:L709266:{bud-=6;NFSU2_TR(0x709266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709269:{NFSU2_TR(0x709269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70926c:{NFSU2_TR(0x70926c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709270:{NFSU2_TR(0x709270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709274:{NFSU2_TR(0x709274);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B709277:{NFSU2_TR(0x709277);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x708fc0u);}[[clang::musttail]] return blk_708fc0(ARGS);}}
}
B70927d:L70927d:{bud-=3;NFSU2_TR(0x70927d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70927e:{NFSU2_TR(0x70927e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70927f:{NFSU2_TR(0x70927f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_709280(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709280(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709280:L709280:{bud-=2;NFSU2_TR(0x709280);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B709281:{NFSU2_TR(0x709281);
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
PN u32 blk_709282(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709282:L709282:{bud-=14;NFSU2_TR(0x709282);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709283:{NFSU2_TR(0x709283);
__builtin_memmove((R+20),(G+16),4);
}
B709285:{NFSU2_TR(0x709285);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4cull))));
}
B709288:{NFSU2_TR(0x709288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70928b:{NFSU2_TR(0x70928b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70928e:{NFSU2_TR(0x70928e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709291:{NFSU2_TR(0x709291);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B709294:{NFSU2_TR(0x709294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709297:{NFSU2_TR(0x709297);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709298:{NFSU2_TR(0x709298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70929b:{NFSU2_TR(0x70929b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B70929f:{NFSU2_TR(0x70929f);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(R+28))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B7092a1:{NFSU2_TR(0x7092a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092a4:{NFSU2_TR(0x7092a4);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7094c6(ARGS);}}
}
B7092aa:L7092aa:{bud-=19;NFSU2_TR(0x7092aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7092ad:{NFSU2_TR(0x7092ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B7092b0:{NFSU2_TR(0x7092b0);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B7092b3:{NFSU2_TR(0x7092b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B7092b6:{NFSU2_TR(0x7092b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092b9:{NFSU2_TR(0x7092b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7092bc:{NFSU2_TR(0x7092bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7092bd:{NFSU2_TR(0x7092bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7092be:{NFSU2_TR(0x7092be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092c1:{NFSU2_TR(0x7092c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B7092c4:{NFSU2_TR(0x7092c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7092c7:{NFSU2_TR(0x7092c7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B7092ca:{NFSU2_TR(0x7092ca);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B7092cd:{NFSU2_TR(0x7092cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x5ull))));
}
B7092d0:{NFSU2_TR(0x7092d0);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B7092d2:{NFSU2_TR(0x7092d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092d5:{NFSU2_TR(0x7092d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092d8:{NFSU2_TR(0x7092d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092db:{NFSU2_TR(0x7092db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7092de(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7092de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7092de:L7092de:{bud-=3;NFSU2_TR(0x7092de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7092e1:{NFSU2_TR(0x7092e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7092e4:{NFSU2_TR(0x7092e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7092eb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7092eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7092eb:L7092eb:{bud-=24;NFSU2_TR(0x7092eb);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B7092ef:{NFSU2_TR(0x7092ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7092f2:{NFSU2_TR(0x7092f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7092f5:{NFSU2_TR(0x7092f5);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(G+4,u32(r1(U+8)));
}
B7092f9:{NFSU2_TR(0x7092f9);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7092fd:{NFSU2_TR(0x7092fd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w4(R+28,u32(r1(U+0)));
}
B709300:{NFSU2_TR(0x709300);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709303:{NFSU2_TR(0x709303);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B709307:{NFSU2_TR(0x709307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70930b:{NFSU2_TR(0x70930b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70930f:{NFSU2_TR(0x70930f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709312:{NFSU2_TR(0x709312);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B709316:{NFSU2_TR(0x709316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709319:{NFSU2_TR(0x709319);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B70931d:{NFSU2_TR(0x70931d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709320:{NFSU2_TR(0x709320);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B709324:{NFSU2_TR(0x709324);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709327:{NFSU2_TR(0x709327);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B70932b:{NFSU2_TR(0x70932b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70932e:{NFSU2_TR(0x70932e);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B709332:{NFSU2_TR(0x709332);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709335:{NFSU2_TR(0x709335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709338:{NFSU2_TR(0x709338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70933b:{NFSU2_TR(0x70933b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709342(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709342(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709342:L709342:{bud-=10;NFSU2_TR(0x709342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709345:{NFSU2_TR(0x709345);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B709348:{NFSU2_TR(0x709348);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B70934c:{NFSU2_TR(0x70934c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70934f:{NFSU2_TR(0x70934f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709352:{NFSU2_TR(0x709352);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B709355:{NFSU2_TR(0x709355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709358:{NFSU2_TR(0x709358);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+4))));
}
B70935a:{NFSU2_TR(0x70935a);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B70935c:{NFSU2_TR(0x70935c);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_709362(ARGS);}}
}
B70935e:L70935e:{bud-=2;NFSU2_TR(0x70935e);
__builtin_memmove((G+4),(R+12),4);
}
B709360:{NFSU2_TR(0x709360);
{[[clang::musttail]] return blk_709365(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709362(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709362:L709362:{bud-=1;NFSU2_TR(0x709362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
{[[clang::musttail]] return blk_709365(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709365(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709365:L709365:{bud-=4;NFSU2_TR(0x709365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709368:{NFSU2_TR(0x709368);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70936b:{NFSU2_TR(0x70936b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B70936f:{NFSU2_TR(0x70936f);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x709342u);}[[clang::musttail]] return blk_709342(ARGS);}}
}
B709371:L709371:{bud-=1;NFSU2_TR(0x709371);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709378(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709378(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709378:L709378:{bud-=8;NFSU2_TR(0x709378);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70937b:{NFSU2_TR(0x70937b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B70937e:{NFSU2_TR(0x70937e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B709382:{NFSU2_TR(0x709382);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B709386:{NFSU2_TR(0x709386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709389:{NFSU2_TR(0x709389);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+4))));
}
B70938b:{NFSU2_TR(0x70938b);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B70938d:{NFSU2_TR(0x70938d);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_709393(ARGS);}}
}
B70938f:L70938f:{bud-=2;NFSU2_TR(0x70938f);
__builtin_memmove((G+4),(R+12),4);
}
B709391:{NFSU2_TR(0x709391);
{[[clang::musttail]] return blk_709396(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709393(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709393:L709393:{bud-=1;NFSU2_TR(0x709393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
{[[clang::musttail]] return blk_709396(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709396(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709396:L709396:{bud-=4;NFSU2_TR(0x709396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709399:{NFSU2_TR(0x709399);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70939c:{NFSU2_TR(0x70939c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B7093a0:{NFSU2_TR(0x7093a0);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x709378u);}[[clang::musttail]] return blk_709378(ARGS);}}
}
B7093a2:L7093a2:{bud-=3;NFSU2_TR(0x7093a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7093a5:{NFSU2_TR(0x7093a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7093a8:{NFSU2_TR(0x7093a8);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70946f(ARGS);}}
}
B7093ae:L7093ae:{bud-=2;NFSU2_TR(0x7093ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7093b1:{NFSU2_TR(0x7093b1);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70946f(ARGS);}}
}
B7093b7:L7093b7:{bud-=4;NFSU2_TR(0x7093b7);
__builtin_memmove((G+4),(R+28),4);
}
B7093b9:{NFSU2_TR(0x7093b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B7093bc:{NFSU2_TR(0x7093bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7093bf:{NFSU2_TR(0x7093bf);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70946f(ARGS);}}
}
B7093c5:L7093c5:{bud-=4;NFSU2_TR(0x7093c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7093c8:{NFSU2_TR(0x7093c8);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B7093ca:{NFSU2_TR(0x7093ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7093cd:{NFSU2_TR(0x7093cd);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70946f(ARGS);}}
}
B7093d3:L7093d3:{bud-=57;NFSU2_TR(0x7093d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7093d6:{NFSU2_TR(0x7093d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7093d9:{NFSU2_TR(0x7093d9);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7093dc:{NFSU2_TR(0x7093dc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B7093de:{NFSU2_TR(0x7093de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B7093e1:{NFSU2_TR(0x7093e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B7093e4:{NFSU2_TR(0x7093e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B7093e8:{NFSU2_TR(0x7093e8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B7093ea:{NFSU2_TR(0x7093ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7093ed:{NFSU2_TR(0x7093ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7093f0:{NFSU2_TR(0x7093f0);
__builtin_memmove((R+8),(R+28),4);
}
B7093f2:{NFSU2_TR(0x7093f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7093f5:{NFSU2_TR(0x7093f5);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B7093f7:{NFSU2_TR(0x7093f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7093fa:{NFSU2_TR(0x7093fa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B7093fc:{NFSU2_TR(0x7093fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7093ff:{NFSU2_TR(0x7093ff);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709401:{NFSU2_TR(0x709401);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709404:{NFSU2_TR(0x709404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709407:{NFSU2_TR(0x709407);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709409:{NFSU2_TR(0x709409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70940c:{NFSU2_TR(0x70940c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B70940e:{NFSU2_TR(0x70940e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709411:{NFSU2_TR(0x709411);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709414:{NFSU2_TR(0x709414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709417:{NFSU2_TR(0x709417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70941a:{NFSU2_TR(0x70941a);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B70941c:{NFSU2_TR(0x70941c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70941f:{NFSU2_TR(0x70941f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709421:{NFSU2_TR(0x709421);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709424:{NFSU2_TR(0x709424);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709427:{NFSU2_TR(0x709427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70942a:{NFSU2_TR(0x70942a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70942d:{NFSU2_TR(0x70942d);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B70942f:{NFSU2_TR(0x70942f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B709432:{NFSU2_TR(0x709432);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709435:{NFSU2_TR(0x709435);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709438:{NFSU2_TR(0x709438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70943b:{NFSU2_TR(0x70943b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70943e:{NFSU2_TR(0x70943e);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709440:{NFSU2_TR(0x709440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709443:{NFSU2_TR(0x709443);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709445:{NFSU2_TR(0x709445);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709448:{NFSU2_TR(0x709448);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70944b:{NFSU2_TR(0x70944b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70944e:{NFSU2_TR(0x70944e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709451:{NFSU2_TR(0x709451);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709453:{NFSU2_TR(0x709453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709456:{NFSU2_TR(0x709456);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709458:{NFSU2_TR(0x709458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B70945b:{NFSU2_TR(0x70945b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70945e:{NFSU2_TR(0x70945e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B709461:{NFSU2_TR(0x709461);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709464:{NFSU2_TR(0x709464);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B709467:{NFSU2_TR(0x709467);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B70946a:{NFSU2_TR(0x70946a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70946d:{NFSU2_TR(0x70946d);
{[[clang::musttail]] return blk_7094a4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_70946f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B70946f:L70946f:{bud-=16;NFSU2_TR(0x70946f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709472:{NFSU2_TR(0x709472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709475:{NFSU2_TR(0x709475);
__builtin_memmove((G+4),(R+28),4);
}
B709477:{NFSU2_TR(0x709477);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+8))));
}
B709479:{NFSU2_TR(0x709479);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B70947c:{NFSU2_TR(0x70947c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B70947f:{NFSU2_TR(0x70947f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B709483:{NFSU2_TR(0x709483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709486:{NFSU2_TR(0x709486);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709489:{NFSU2_TR(0x709489);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B70948c:{NFSU2_TR(0x70948c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B70948f:{NFSU2_TR(0x70948f);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B709496:{NFSU2_TR(0x709496);
w4(R+28,u32(u32(r4(R+28))-u32(r4(G+4))));
}
B709498:{NFSU2_TR(0x709498);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70949b:{NFSU2_TR(0x70949b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B7094a1:{NFSU2_TR(0x7094a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_7094a4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7094a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7094a4:L7094a4:{bud-=4;NFSU2_TR(0x7094a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B7094a7:{NFSU2_TR(0x7094a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B7094aa:{NFSU2_TR(0x7094aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B7094ad:{NFSU2_TR(0x7094ad);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7092ebu);}[[clang::musttail]] return blk_7092eb(ARGS);}}
}
B7094b3:L7094b3:{bud-=4;NFSU2_TR(0x7094b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7094b7:{NFSU2_TR(0x7094b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(U+4),u32(0x8ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7094bb:{NFSU2_TR(0x7094bb);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+11,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B7094be:{NFSU2_TR(0x7094be);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7092deu);}[[clang::musttail]] return blk_7092de(ARGS);}}
}
B7094c4:L7094c4:{bud-=2;NFSU2_TR(0x7094c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7094c5:{NFSU2_TR(0x7094c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7094c6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7094c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7094c6:L7094c6:{bud-=3;NFSU2_TR(0x7094c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7094c7:{NFSU2_TR(0x7094c7);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7094c8:{NFSU2_TR(0x7094c8);
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
PN u32 blk_7094c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7094c9:L7094c9:{bud-=20;NFSU2_TR(0x7094c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7094ca:{NFSU2_TR(0x7094ca);
__builtin_memmove((R+20),(G+16),4);
}
B7094cc:{NFSU2_TR(0x7094cc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xb8ull))));
}
B7094d2:{NFSU2_TR(0x7094d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7094d5:{NFSU2_TR(0x7094d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7094d6:{NFSU2_TR(0x7094d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7094d7:{NFSU2_TR(0x7094d7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B7094da:{NFSU2_TR(0x7094da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7094dd:{NFSU2_TR(0x7094dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7094e0:{NFSU2_TR(0x7094e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7094e1:{NFSU2_TR(0x7094e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7094e4:{NFSU2_TR(0x7094e4);
__builtin_memmove((R+24),(G+0),4);
}
B7094e6:{NFSU2_TR(0x7094e6);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B7094e8:{NFSU2_TR(0x7094e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B7094eb:{NFSU2_TR(0x7094eb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(F+0,u8((r4(R+28))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B7094ed:{NFSU2_TR(0x7094ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7094f0:{NFSU2_TR(0x7094f0);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B7094f3:{NFSU2_TR(0x7094f3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7094f6:{NFSU2_TR(0x7094f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7094fc:{NFSU2_TR(0x7094fc);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_709c48(ARGS);}}
}
B709502:L709502:{bud-=52;NFSU2_TR(0x709502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709505:{NFSU2_TR(0x709505);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B709508:{NFSU2_TR(0x709508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70950b:{NFSU2_TR(0x70950b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70950e:{NFSU2_TR(0x70950e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709511:{NFSU2_TR(0x709511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B709514:{NFSU2_TR(0x709514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709517:{NFSU2_TR(0x709517);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70951a:{NFSU2_TR(0x70951a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709520:{NFSU2_TR(0x709520);
__builtin_memmove((R+28),(R+24),4);
}
B709522:{NFSU2_TR(0x709522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709525:{NFSU2_TR(0x709525);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B709528:{NFSU2_TR(0x709528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70952e:{NFSU2_TR(0x70952e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709531:{NFSU2_TR(0x709531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709534:{NFSU2_TR(0x709534);
__builtin_memmove((R+12),(G+0),4);
}
B709536:{NFSU2_TR(0x709536);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709539:{NFSU2_TR(0x709539);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70953c:{NFSU2_TR(0x70953c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709542:{NFSU2_TR(0x709542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709548:{NFSU2_TR(0x709548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70954e:{NFSU2_TR(0x70954e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709554:{NFSU2_TR(0x709554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B70955a:{NFSU2_TR(0x70955a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709560:{NFSU2_TR(0x709560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709566:{NFSU2_TR(0x709566);
__builtin_memmove((R+28),(G+0),4);
}
B709568:{NFSU2_TR(0x709568);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70956b:{NFSU2_TR(0x70956b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B70956e:{NFSU2_TR(0x70956e);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+12))));
}
B709570:{NFSU2_TR(0x709570);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B709573:{NFSU2_TR(0x709573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B709579:{NFSU2_TR(0x709579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70957c:{NFSU2_TR(0x70957c);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0xfffffffeull))));
}
B70957f:{NFSU2_TR(0x70957f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709585:{NFSU2_TR(0x709585);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70958b:{NFSU2_TR(0x70958b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70958e:{NFSU2_TR(0x70958e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B709591:{NFSU2_TR(0x709591);
__builtin_memmove((R+12),(R+24),4);
}
B709593:{NFSU2_TR(0x709593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B709596:{NFSU2_TR(0x709596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709599:{NFSU2_TR(0x709599);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70959c:{NFSU2_TR(0x70959c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70959f:{NFSU2_TR(0x70959f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B7095a1:{NFSU2_TR(0x7095a1);
__builtin_memmove((R+8),(G+0),4);
}
B7095a3:{NFSU2_TR(0x7095a3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B7095a5:{NFSU2_TR(0x7095a5);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B7095a7:{NFSU2_TR(0x7095a7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7095a9:{NFSU2_TR(0x7095a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095ac:{NFSU2_TR(0x7095ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095af:{NFSU2_TR(0x7095af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095b2:{NFSU2_TR(0x7095b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095b5:{NFSU2_TR(0x7095b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_7095b6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7095b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7095b6:L7095b6:{bud-=19;NFSU2_TR(0x7095b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7095b9:{NFSU2_TR(0x7095b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7095bc:{NFSU2_TR(0x7095bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095c2:{NFSU2_TR(0x7095c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7095c5:{NFSU2_TR(0x7095c5);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7095c8:{NFSU2_TR(0x7095c8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B7095cb:{NFSU2_TR(0x7095cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7095ce:{NFSU2_TR(0x7095ce);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B7095d1:{NFSU2_TR(0x7095d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7095d4:{NFSU2_TR(0x7095d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095d7:{NFSU2_TR(0x7095d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B7095da:{NFSU2_TR(0x7095da);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B7095dd:{NFSU2_TR(0x7095dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B7095e0:{NFSU2_TR(0x7095e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095e3:{NFSU2_TR(0x7095e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7095e6:{NFSU2_TR(0x7095e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095e9:{NFSU2_TR(0x7095e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7095ec:{NFSU2_TR(0x7095ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7095f2:{NFSU2_TR(0x7095f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7095f5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7095f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7095f5:L7095f5:{bud-=42;NFSU2_TR(0x7095f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7095fb:{NFSU2_TR(0x7095fb);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B7095fd:{NFSU2_TR(0x7095fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709603:{NFSU2_TR(0x709603);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B709606:{NFSU2_TR(0x709606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709609:{NFSU2_TR(0x709609);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70960f:{NFSU2_TR(0x70960f);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709611:{NFSU2_TR(0x709611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709617:{NFSU2_TR(0x709617);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B70961a:{NFSU2_TR(0x70961a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70961d:{NFSU2_TR(0x70961d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709620:{NFSU2_TR(0x709620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709626:{NFSU2_TR(0x709626);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709628:{NFSU2_TR(0x709628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70962e:{NFSU2_TR(0x70962e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B709631:{NFSU2_TR(0x709631);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709634:{NFSU2_TR(0x709634);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70963a:{NFSU2_TR(0x70963a);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B70963e:{NFSU2_TR(0x70963e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709644:{NFSU2_TR(0x709644);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(R+28,u32(r1(U+0)));
}
B709647:{NFSU2_TR(0x709647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70964a:{NFSU2_TR(0x70964a);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B70964c:{NFSU2_TR(0x70964c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709652:{NFSU2_TR(0x709652);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709658:{NFSU2_TR(0x709658);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B70965a:{NFSU2_TR(0x70965a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709660:{NFSU2_TR(0x709660);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B709663:{NFSU2_TR(0x709663);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709666:{NFSU2_TR(0x709666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70966c:{NFSU2_TR(0x70966c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(G+4,u32(r1(U+8)));
}
B709670:{NFSU2_TR(0x709670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709673:{NFSU2_TR(0x709673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709676:{NFSU2_TR(0x709676);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B709679:{NFSU2_TR(0x709679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70967c:{NFSU2_TR(0x70967c);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B70967e:{NFSU2_TR(0x70967e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709681:{NFSU2_TR(0x709681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709684:{NFSU2_TR(0x709684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709687:{NFSU2_TR(0x709687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70968a:{NFSU2_TR(0x70968a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70968d:{NFSU2_TR(0x70968d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709690:{NFSU2_TR(0x709690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709697(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709697(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709697:L709697:{bud-=9;NFSU2_TR(0x709697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70969a:{NFSU2_TR(0x70969a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B70969e:{NFSU2_TR(0x70969e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096a1:{NFSU2_TR(0x7096a1);
__builtin_memmove((R+12),(G+4),4);
}
B7096a3:{NFSU2_TR(0x7096a3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7096a6:{NFSU2_TR(0x7096a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096a9:{NFSU2_TR(0x7096a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096ac:{NFSU2_TR(0x7096ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B7096b0:{NFSU2_TR(0x7096b0);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x709697u);}goto L709697;}}
}
B7096b2:L7096b2:{bud-=1;NFSU2_TR(0x7096b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7096b9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7096b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7096b9:L7096b9:{bud-=9;NFSU2_TR(0x7096b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7096bc:{NFSU2_TR(0x7096bc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B7096c0:{NFSU2_TR(0x7096c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096c3:{NFSU2_TR(0x7096c3);
__builtin_memmove((R+12),(G+4),4);
}
B7096c5:{NFSU2_TR(0x7096c5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7096c8:{NFSU2_TR(0x7096c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096cb:{NFSU2_TR(0x7096cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096ce:{NFSU2_TR(0x7096ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B7096d2:{NFSU2_TR(0x7096d2);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7096b9u);}goto L7096b9;}}
}
B7096d4:L7096d4:{bud-=27;NFSU2_TR(0x7096d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7096d7:{NFSU2_TR(0x7096d7);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7096da:{NFSU2_TR(0x7096da);
w4(G+4,sar<u32>(r4(G+4),u64(u32(0x1ull))));
}
B7096dc:{NFSU2_TR(0x7096dc);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7096de:{NFSU2_TR(0x7096de);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7096e1:{NFSU2_TR(0x7096e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096e4:{NFSU2_TR(0x7096e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7096e7:{NFSU2_TR(0x7096e7);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7096ea:{NFSU2_TR(0x7096ea);
w4(G+4,sar<u32>(r4(G+4),u64(u32(0x1ull))));
}
B7096ec:{NFSU2_TR(0x7096ec);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7096ee:{NFSU2_TR(0x7096ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7096f1:{NFSU2_TR(0x7096f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7096f4:{NFSU2_TR(0x7096f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7096f7:{NFSU2_TR(0x7096f7);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7096fa:{NFSU2_TR(0x7096fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7096fd:{NFSU2_TR(0x7096fd);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B7096ff:{NFSU2_TR(0x7096ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709702:{NFSU2_TR(0x709702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(G+4)),r4(U+0));
}
B709704:{NFSU2_TR(0x709704);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709707:{NFSU2_TR(0x709707);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70970a:{NFSU2_TR(0x70970a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70970d:{NFSU2_TR(0x70970d);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B70970f:{NFSU2_TR(0x70970f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709712:{NFSU2_TR(0x709712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(G+4)),r4(U+0));
}
B709714:{NFSU2_TR(0x709714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709717:{NFSU2_TR(0x709717);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70971a:{NFSU2_TR(0x70971a);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70989b(ARGS);}}
}
B709720:L709720:{bud-=2;NFSU2_TR(0x709720);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B709722:{NFSU2_TR(0x709722);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70989b(ARGS);}}
}
B709728:L709728:{bud-=4;NFSU2_TR(0x709728);
__builtin_memmove((G+4),(R+28),4);
}
B70972a:{NFSU2_TR(0x70972a);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+8))));
}
B70972c:{NFSU2_TR(0x70972c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70972f:{NFSU2_TR(0x70972f);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70989b(ARGS);}}
}
B709735:L709735:{bud-=4;NFSU2_TR(0x709735);
__builtin_memmove((G+4),(R+8),4);
}
B709737:{NFSU2_TR(0x709737);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B709739:{NFSU2_TR(0x709739);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70973c:{NFSU2_TR(0x70973c);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_70989b(ARGS);}}
}
B709742:L709742:{bud-=9;NFSU2_TR(0x709742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709748:{NFSU2_TR(0x709748);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70974b:{NFSU2_TR(0x70974b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709751:{NFSU2_TR(0x709751);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B709754:{NFSU2_TR(0x709754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709757:{NFSU2_TR(0x709757);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+12))));
}
B709759:{NFSU2_TR(0x709759);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B70975b:{NFSU2_TR(0x70975b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70975e:{NFSU2_TR(0x70975e);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_709765(ARGS);}}
}
B709760:L709760:{bud-=2;NFSU2_TR(0x709760);
__builtin_memmove((G+4),(R+12),4);
}
B709762:{NFSU2_TR(0x709762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
{[[clang::musttail]] return blk_709765(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709765(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709765:L709765:{bud-=3;NFSU2_TR(0x709765);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709768:{NFSU2_TR(0x709768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70976b:{NFSU2_TR(0x70976b);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709770(ARGS);}}
}
B70976d:L70976d:{bud-=1;NFSU2_TR(0x70976d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_709770(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709770(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709770:L709770:{bud-=10;NFSU2_TR(0x709770);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709773:{NFSU2_TR(0x709773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709779:{NFSU2_TR(0x709779);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70977c:{NFSU2_TR(0x70977c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70977f:{NFSU2_TR(0x70977f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B709782:{NFSU2_TR(0x709782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709785:{NFSU2_TR(0x709785);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+12))));
}
B709787:{NFSU2_TR(0x709787);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B709789:{NFSU2_TR(0x709789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70978f:{NFSU2_TR(0x70978f);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_709796(ARGS);}}
}
B709791:L709791:{bud-=2;NFSU2_TR(0x709791);
__builtin_memmove((G+4),(R+12),4);
}
B709793:{NFSU2_TR(0x709793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
{[[clang::musttail]] return blk_709796(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709796(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709796:L709796:{bud-=3;NFSU2_TR(0x709796);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709799:{NFSU2_TR(0x709799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B70979f:{NFSU2_TR(0x70979f);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_7097a4(ARGS);}}
}
B7097a1:L7097a1:{bud-=1;NFSU2_TR(0x7097a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_7097a4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7097a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7097a4:L7097a4:{bud-=92;NFSU2_TR(0x7097a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7097a7:{NFSU2_TR(0x7097a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7097aa:{NFSU2_TR(0x7097aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7097ad:{NFSU2_TR(0x7097ad);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B7097b0:{NFSU2_TR(0x7097b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B7097b3:{NFSU2_TR(0x7097b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B7097b6:{NFSU2_TR(0x7097b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B7097b9:{NFSU2_TR(0x7097b9);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B7097bd:{NFSU2_TR(0x7097bd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B7097bf:{NFSU2_TR(0x7097bf);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7097c1:{NFSU2_TR(0x7097c1);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B7097c3:{NFSU2_TR(0x7097c3);
__builtin_memmove((R+8),(R+28),4);
}
B7097c5:{NFSU2_TR(0x7097c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7097c8:{NFSU2_TR(0x7097c8);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B7097ca:{NFSU2_TR(0x7097ca);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B7097cc:{NFSU2_TR(0x7097cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7097cf:{NFSU2_TR(0x7097cf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B7097d1:{NFSU2_TR(0x7097d1);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7097d3:{NFSU2_TR(0x7097d3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B7097d5:{NFSU2_TR(0x7097d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7097d8:{NFSU2_TR(0x7097d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B7097db:{NFSU2_TR(0x7097db);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B7097de:{NFSU2_TR(0x7097de);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(G+0)),r1(U+0));
}
B7097e0:{NFSU2_TR(0x7097e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7097e3:{NFSU2_TR(0x7097e3);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7097e6:{NFSU2_TR(0x7097e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7097e9:{NFSU2_TR(0x7097e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7097ec:{NFSU2_TR(0x7097ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7097ef:{NFSU2_TR(0x7097ef);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B7097f1:{NFSU2_TR(0x7097f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7097f4:{NFSU2_TR(0x7097f4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B7097f6:{NFSU2_TR(0x7097f6);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7097f8:{NFSU2_TR(0x7097f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B7097fb:{NFSU2_TR(0x7097fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B7097fe:{NFSU2_TR(0x7097fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709801:{NFSU2_TR(0x709801);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709804:{NFSU2_TR(0x709804);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709807:{NFSU2_TR(0x709807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70980a:{NFSU2_TR(0x70980a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70980d:{NFSU2_TR(0x70980d);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B70980f:{NFSU2_TR(0x70980f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709812:{NFSU2_TR(0x709812);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709814:{NFSU2_TR(0x709814);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709816:{NFSU2_TR(0x709816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709819:{NFSU2_TR(0x709819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70981c:{NFSU2_TR(0x70981c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B70981f:{NFSU2_TR(0x70981f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709822:{NFSU2_TR(0x709822);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709825:{NFSU2_TR(0x709825);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709828:{NFSU2_TR(0x709828);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70982b:{NFSU2_TR(0x70982b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70982e:{NFSU2_TR(0x70982e);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709830:{NFSU2_TR(0x709830);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B709833:{NFSU2_TR(0x709833);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709835:{NFSU2_TR(0x709835);
__builtin_memmove((R+12),(R+8),4);
}
B709837:{NFSU2_TR(0x709837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B70983a:{NFSU2_TR(0x70983a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70983d:{NFSU2_TR(0x70983d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B709840:{NFSU2_TR(0x709840);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B709843:{NFSU2_TR(0x709843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709846:{NFSU2_TR(0x709846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709849:{NFSU2_TR(0x709849);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70984c:{NFSU2_TR(0x70984c);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70984f:{NFSU2_TR(0x70984f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709852:{NFSU2_TR(0x709852);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709855:{NFSU2_TR(0x709855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709858:{NFSU2_TR(0x709858);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B70985a:{NFSU2_TR(0x70985a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70985d:{NFSU2_TR(0x70985d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B70985f:{NFSU2_TR(0x70985f);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709861:{NFSU2_TR(0x709861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709864:{NFSU2_TR(0x709864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709867:{NFSU2_TR(0x709867);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70986a:{NFSU2_TR(0x70986a);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70986d:{NFSU2_TR(0x70986d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709870:{NFSU2_TR(0x709870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709873:{NFSU2_TR(0x709873);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709875:{NFSU2_TR(0x709875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709878:{NFSU2_TR(0x709878);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B70987a:{NFSU2_TR(0x70987a);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70987c:{NFSU2_TR(0x70987c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B70987f:{NFSU2_TR(0x70987f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709882:{NFSU2_TR(0x709882);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709885:{NFSU2_TR(0x709885);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709887:{NFSU2_TR(0x709887);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70988a:{NFSU2_TR(0x70988a);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B70988c:{NFSU2_TR(0x70988c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B70988f:{NFSU2_TR(0x70988f);
w4(G+4,shl<u32>(r4(G+4),u64(u32(0x1ull))));
}
B709891:{NFSU2_TR(0x709891);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B709893:{NFSU2_TR(0x709893);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B709896:{NFSU2_TR(0x709896);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B709899:{NFSU2_TR(0x709899);
{[[clang::musttail]] return blk_70991a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_70989b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B70989b:L70989b:{bud-=38;NFSU2_TR(0x70989b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70989e:{NFSU2_TR(0x70989e);
__builtin_memmove((G+4),(R+28),4);
}
B7098a0:{NFSU2_TR(0x7098a0);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+8))));
}
B7098a2:{NFSU2_TR(0x7098a2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B7098a5:{NFSU2_TR(0x7098a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B7098a8:{NFSU2_TR(0x7098a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B7098ac:{NFSU2_TR(0x7098ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7098af:{NFSU2_TR(0x7098af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7098b2:{NFSU2_TR(0x7098b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B7098b5:{NFSU2_TR(0x7098b5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B7098b8:{NFSU2_TR(0x7098b8);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B7098bf:{NFSU2_TR(0x7098bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7098c2:{NFSU2_TR(0x7098c2);
w4(R+28,u32(u32(r4(R+28))-u32(r4(G+4))));
}
B7098c4:{NFSU2_TR(0x7098c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7098c7:{NFSU2_TR(0x7098c7);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7098ca:{NFSU2_TR(0x7098ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B7098d0:{NFSU2_TR(0x7098d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B7098d3:{NFSU2_TR(0x7098d3);
u8 U[9];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7098d6:{NFSU2_TR(0x7098d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7098dc:{NFSU2_TR(0x7098dc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+4),(U+0),1);
}
B7098de:{NFSU2_TR(0x7098de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7098e1:{NFSU2_TR(0x7098e1);
u8 U[1];
__builtin_memmove((U+0),(G+4),1);
s1(u32(r4(G+0)),r1(U+0));
}
B7098e3:{NFSU2_TR(0x7098e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7098e9:{NFSU2_TR(0x7098e9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+4),(U+0),1);
}
B7098eb:{NFSU2_TR(0x7098eb);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7098ee:{NFSU2_TR(0x7098ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7098f4:{NFSU2_TR(0x7098f4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+4),(U+0),1);
}
B7098f6:{NFSU2_TR(0x7098f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7098f9:{NFSU2_TR(0x7098f9);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B7098fc:{NFSU2_TR(0x7098fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709902:{NFSU2_TR(0x709902);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+4),(U+0),1);
}
B709904:{NFSU2_TR(0x709904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709907:{NFSU2_TR(0x709907);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70990a:{NFSU2_TR(0x70990a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709910:{NFSU2_TR(0x709910);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((G+4),(U+8),1);
}
B709913:{NFSU2_TR(0x709913);
u8 U[1];
__builtin_memmove((U+0),(G+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709915:{NFSU2_TR(0x709915);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709918:{NFSU2_TR(0x709918);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+4),(U+0),1);
{[[clang::musttail]] return blk_70991a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_70991a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B70991a:L70991a:{bud-=13;NFSU2_TR(0x70991a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709920:{NFSU2_TR(0x709920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709926:{NFSU2_TR(0x709926);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709929:{NFSU2_TR(0x709929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70992f:{NFSU2_TR(0x70992f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B709930:{NFSU2_TR(0x709930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709933:{NFSU2_TR(0x709933);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B709934:{NFSU2_TR(0x709934);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709936:{NFSU2_TR(0x709936);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B709937:{NFSU2_TR(0x709937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B70993a:{NFSU2_TR(0x70993a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B70993b:{NFSU2_TR(0x70993b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709941:{NFSU2_TR(0x709941);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7095f5u);}[[clang::musttail]] return blk_7095f5(ARGS);}}
}
B709947:L709947:{bud-=3;NFSU2_TR(0x709947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70994a:{NFSU2_TR(0x70994a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B70994d:{NFSU2_TR(0x70994d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_709974(ARGS);}}
}
B70994f:L70994f:{bud-=11;NFSU2_TR(0x70994f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709952:{NFSU2_TR(0x709952);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709955:{NFSU2_TR(0x709955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709958:{NFSU2_TR(0x709958);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70995b:{NFSU2_TR(0x70995b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70995e:{NFSU2_TR(0x70995e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709961:{NFSU2_TR(0x709961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709964:{NFSU2_TR(0x709964);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709967:{NFSU2_TR(0x709967);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70996b:{NFSU2_TR(0x70996b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70996f:{NFSU2_TR(0x70996f);
{[[clang::musttail]] return blk_709c14(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709974(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709974:L709974:{bud-=15;NFSU2_TR(0x709974);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709977:{NFSU2_TR(0x709977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70997a:{NFSU2_TR(0x70997a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70997d:{NFSU2_TR(0x70997d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709980:{NFSU2_TR(0x709980);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709983:{NFSU2_TR(0x709983);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B709986:{NFSU2_TR(0x709986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709989:{NFSU2_TR(0x709989);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B70998c:{NFSU2_TR(0x70998c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70998f:{NFSU2_TR(0x70998f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B709992:{NFSU2_TR(0x709992);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B709995:{NFSU2_TR(0x709995);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B709998:{NFSU2_TR(0x709998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70999b:{NFSU2_TR(0x70999b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B70999e:{NFSU2_TR(0x70999e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7099a1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7099a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7099a1:L7099a1:{bud-=22;NFSU2_TR(0x7099a1);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B7099a5:{NFSU2_TR(0x7099a5);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7099a9:{NFSU2_TR(0x7099a9);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7099ad:{NFSU2_TR(0x7099ad);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7099b1:{NFSU2_TR(0x7099b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099b4:{NFSU2_TR(0x7099b4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w4(G+4,u32(r1(U+0)));
}
B7099b7:{NFSU2_TR(0x7099b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099ba:{NFSU2_TR(0x7099ba);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B7099be:{NFSU2_TR(0x7099be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099c1:{NFSU2_TR(0x7099c1);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B7099c5:{NFSU2_TR(0x7099c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099c8:{NFSU2_TR(0x7099c8);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B7099cc:{NFSU2_TR(0x7099cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099cf:{NFSU2_TR(0x7099cf);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B7099d1:{NFSU2_TR(0x7099d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099d4:{NFSU2_TR(0x7099d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099d7:{NFSU2_TR(0x7099d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099da:{NFSU2_TR(0x7099da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099dd:{NFSU2_TR(0x7099dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099e0:{NFSU2_TR(0x7099e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099e3:{NFSU2_TR(0x7099e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7099e6:{NFSU2_TR(0x7099e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7099ed(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7099ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7099ed:L7099ed:{bud-=9;NFSU2_TR(0x7099ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7099f0:{NFSU2_TR(0x7099f0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B7099f4:{NFSU2_TR(0x7099f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B7099f7:{NFSU2_TR(0x7099f7);
__builtin_memmove((R+12),(G+4),4);
}
B7099f9:{NFSU2_TR(0x7099f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B7099fc:{NFSU2_TR(0x7099fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B7099ff:{NFSU2_TR(0x7099ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a02:{NFSU2_TR(0x709a02);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B709a06:{NFSU2_TR(0x709a06);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7099edu);}goto L7099ed;}}
}
B709a08:L709a08:{bud-=1;NFSU2_TR(0x709a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709a0f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709a0f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709a0f:L709a0f:{bud-=9;NFSU2_TR(0x709a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709a12:{NFSU2_TR(0x709a12);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B709a16:{NFSU2_TR(0x709a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a19:{NFSU2_TR(0x709a19);
__builtin_memmove((R+12),(G+4),4);
}
B709a1b:{NFSU2_TR(0x709a1b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709a1e:{NFSU2_TR(0x709a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a21:{NFSU2_TR(0x709a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a24:{NFSU2_TR(0x709a24);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B709a28:{NFSU2_TR(0x709a28);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x709a0fu);}goto L709a0f;}}
}
B709a2a:L709a2a:{bud-=27;NFSU2_TR(0x709a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709a2d:{NFSU2_TR(0x709a2d);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709a30:{NFSU2_TR(0x709a30);
w4(G+4,sar<u32>(r4(G+4),u64(u32(0x1ull))));
}
B709a32:{NFSU2_TR(0x709a32);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B709a34:{NFSU2_TR(0x709a34);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709a37:{NFSU2_TR(0x709a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a3a:{NFSU2_TR(0x709a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709a3d:{NFSU2_TR(0x709a3d);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709a40:{NFSU2_TR(0x709a40);
w4(G+4,sar<u32>(r4(G+4),u64(u32(0x1ull))));
}
B709a42:{NFSU2_TR(0x709a42);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B709a44:{NFSU2_TR(0x709a44);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B709a47:{NFSU2_TR(0x709a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B709a4a:{NFSU2_TR(0x709a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709a4d:{NFSU2_TR(0x709a4d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709a50:{NFSU2_TR(0x709a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709a53:{NFSU2_TR(0x709a53);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B709a57:{NFSU2_TR(0x709a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709a5a:{NFSU2_TR(0x709a5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(G+4)),r4(U+0));
}
B709a5c:{NFSU2_TR(0x709a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709a5f:{NFSU2_TR(0x709a5f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709a62:{NFSU2_TR(0x709a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709a65:{NFSU2_TR(0x709a65);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B709a67:{NFSU2_TR(0x709a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709a6a:{NFSU2_TR(0x709a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(G+4)),r4(U+0));
}
B709a6c:{NFSU2_TR(0x709a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709a6f:{NFSU2_TR(0x709a6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709a72:{NFSU2_TR(0x709a72);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709bcc(ARGS);}}
}
B709a78:L709a78:{bud-=2;NFSU2_TR(0x709a78);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B709a7a:{NFSU2_TR(0x709a7a);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709bcc(ARGS);}}
}
B709a80:L709a80:{bud-=4;NFSU2_TR(0x709a80);
__builtin_memmove((G+4),(R+24),4);
}
B709a82:{NFSU2_TR(0x709a82);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B709a84:{NFSU2_TR(0x709a84);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709a87:{NFSU2_TR(0x709a87);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709bcc(ARGS);}}
}
B709a8d:L709a8d:{bud-=4;NFSU2_TR(0x709a8d);
__builtin_memmove((G+4),(R+28),4);
}
B709a8f:{NFSU2_TR(0x709a8f);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+24))));
}
B709a91:{NFSU2_TR(0x709a91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709a94:{NFSU2_TR(0x709a94);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709bcc(ARGS);}}
}
B709a9a:L709a9a:{bud-=5;NFSU2_TR(0x709a9a);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B709a9e:{NFSU2_TR(0x709a9e);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709aa2:{NFSU2_TR(0x709aa2);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+4))));
}
B709aa4:{NFSU2_TR(0x709aa4);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B709aa6:{NFSU2_TR(0x709aa6);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_709aac(ARGS);}}
}
B709aa8:L709aa8:{bud-=2;NFSU2_TR(0x709aa8);
__builtin_memmove((G+4),(R+12),4);
}
B709aaa:{NFSU2_TR(0x709aaa);
{[[clang::musttail]] return blk_709ab2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709aac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709aac:L709aac:{bud-=2;NFSU2_TR(0x709aac);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709ab0:{NFSU2_TR(0x709ab0);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+12))));
{[[clang::musttail]] return blk_709ab2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709ab2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709ab2:L709ab2:{bud-=2;NFSU2_TR(0x709ab2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709ab5:{NFSU2_TR(0x709ab5);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709abd(ARGS);}}
}
B709ab7:L709ab7:{bud-=2;NFSU2_TR(0x709ab7);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B709abb:{NFSU2_TR(0x709abb);
{[[clang::musttail]] return blk_709ac1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709abd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709abd:L709abd:{bud-=1;NFSU2_TR(0x709abd);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
{[[clang::musttail]] return blk_709ac1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709ac1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709ac1:L709ac1:{bud-=6;NFSU2_TR(0x709ac1);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709ac5:{NFSU2_TR(0x709ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709ac8:{NFSU2_TR(0x709ac8);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B709acc:{NFSU2_TR(0x709acc);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+4))));
}
B709ace:{NFSU2_TR(0x709ace);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B709ad0:{NFSU2_TR(0x709ad0);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_709ad6(ARGS);}}
}
B709ad2:L709ad2:{bud-=2;NFSU2_TR(0x709ad2);
__builtin_memmove((G+4),(R+12),4);
}
B709ad4:{NFSU2_TR(0x709ad4);
{[[clang::musttail]] return blk_709adc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709ad6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709ad6:L709ad6:{bud-=2;NFSU2_TR(0x709ad6);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B709ada:{NFSU2_TR(0x709ada);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+12))));
{[[clang::musttail]] return blk_709adc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709adc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709adc:L709adc:{bud-=2;NFSU2_TR(0x709adc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709adf:{NFSU2_TR(0x709adf);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709ae7(ARGS);}}
}
B709ae1:L709ae1:{bud-=2;NFSU2_TR(0x709ae1);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B709ae5:{NFSU2_TR(0x709ae5);
{[[clang::musttail]] return blk_709aeb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709ae7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709ae7:L709ae7:{bud-=1;NFSU2_TR(0x709ae7);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
{[[clang::musttail]] return blk_709aeb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709aeb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709aeb:L709aeb:{bud-=85;NFSU2_TR(0x709aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709aee:{NFSU2_TR(0x709aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709af1:{NFSU2_TR(0x709af1);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709af4:{NFSU2_TR(0x709af4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B709af6:{NFSU2_TR(0x709af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709af9:{NFSU2_TR(0x709af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709afc:{NFSU2_TR(0x709afc);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B709b00:{NFSU2_TR(0x709b00);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709b02:{NFSU2_TR(0x709b02);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b04:{NFSU2_TR(0x709b04);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B709b06:{NFSU2_TR(0x709b06);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B709b08:{NFSU2_TR(0x709b08);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b0b:{NFSU2_TR(0x709b0b);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709b0e:{NFSU2_TR(0x709b0e);
__builtin_memmove((R+8),(R+24),4);
}
B709b10:{NFSU2_TR(0x709b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b13:{NFSU2_TR(0x709b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709b16:{NFSU2_TR(0x709b16);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709b18:{NFSU2_TR(0x709b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b1b:{NFSU2_TR(0x709b1b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709b1d:{NFSU2_TR(0x709b1d);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b1f:{NFSU2_TR(0x709b1f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B709b21:{NFSU2_TR(0x709b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b24:{NFSU2_TR(0x709b24);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b27:{NFSU2_TR(0x709b27);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709b2a:{NFSU2_TR(0x709b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b2d:{NFSU2_TR(0x709b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b30:{NFSU2_TR(0x709b30);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709b32:{NFSU2_TR(0x709b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b35:{NFSU2_TR(0x709b35);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709b37:{NFSU2_TR(0x709b37);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b39:{NFSU2_TR(0x709b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b3c:{NFSU2_TR(0x709b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b3f:{NFSU2_TR(0x709b3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b42:{NFSU2_TR(0x709b42);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(G+0)),r1(U+0));
}
B709b44:{NFSU2_TR(0x709b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b47:{NFSU2_TR(0x709b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b4a:{NFSU2_TR(0x709b4a);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709b4c:{NFSU2_TR(0x709b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B709b4f:{NFSU2_TR(0x709b4f);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b51:{NFSU2_TR(0x709b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b54:{NFSU2_TR(0x709b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b57:{NFSU2_TR(0x709b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b5a:{NFSU2_TR(0x709b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b5d:{NFSU2_TR(0x709b5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b60:{NFSU2_TR(0x709b60);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709b63:{NFSU2_TR(0x709b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b66:{NFSU2_TR(0x709b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b69:{NFSU2_TR(0x709b69);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709b6b:{NFSU2_TR(0x709b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B709b6e:{NFSU2_TR(0x709b6e);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b70:{NFSU2_TR(0x709b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b73:{NFSU2_TR(0x709b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b76:{NFSU2_TR(0x709b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b79:{NFSU2_TR(0x709b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b7c:{NFSU2_TR(0x709b7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b7f:{NFSU2_TR(0x709b7f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+12)),r1(U+0));
}
B709b81:{NFSU2_TR(0x709b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b84:{NFSU2_TR(0x709b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b87:{NFSU2_TR(0x709b87);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709b89:{NFSU2_TR(0x709b89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b8c:{NFSU2_TR(0x709b8c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709b8e:{NFSU2_TR(0x709b8e);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709b90:{NFSU2_TR(0x709b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709b93:{NFSU2_TR(0x709b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709b96:{NFSU2_TR(0x709b96);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709b99:{NFSU2_TR(0x709b99);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709b9c:{NFSU2_TR(0x709b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709b9f:{NFSU2_TR(0x709b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709ba2:{NFSU2_TR(0x709ba2);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709ba4:{NFSU2_TR(0x709ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709ba7:{NFSU2_TR(0x709ba7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709ba9:{NFSU2_TR(0x709ba9);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B709bab:{NFSU2_TR(0x709bab);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B709bad:{NFSU2_TR(0x709bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B709bb0:{NFSU2_TR(0x709bb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709bb3:{NFSU2_TR(0x709bb3);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709bb6:{NFSU2_TR(0x709bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709bb9:{NFSU2_TR(0x709bb9);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709bbb:{NFSU2_TR(0x709bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B709bbe:{NFSU2_TR(0x709bbe);
w4(G+4,shl<u32>(r4(G+4),u64(u32(0x1ull))));
}
B709bc0:{NFSU2_TR(0x709bc0);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+24))));
}
B709bc2:{NFSU2_TR(0x709bc2);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B709bc4:{NFSU2_TR(0x709bc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B709bc7:{NFSU2_TR(0x709bc7);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709bca:{NFSU2_TR(0x709bca);
{[[clang::musttail]] return blk_709c00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709bcc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709bcc:L709bcc:{bud-=16;NFSU2_TR(0x709bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709bcf:{NFSU2_TR(0x709bcf);
__builtin_memmove((G+4),(R+24),4);
}
B709bd1:{NFSU2_TR(0x709bd1);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B709bd3:{NFSU2_TR(0x709bd3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B709bd6:{NFSU2_TR(0x709bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B709bd9:{NFSU2_TR(0x709bd9);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B709bdd:{NFSU2_TR(0x709bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709be0:{NFSU2_TR(0x709be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709be3:{NFSU2_TR(0x709be3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B709be6:{NFSU2_TR(0x709be6);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B709be9:{NFSU2_TR(0x709be9);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B709bf0:{NFSU2_TR(0x709bf0);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B709bf3:{NFSU2_TR(0x709bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709bf6:{NFSU2_TR(0x709bf6);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B709bf8:{NFSU2_TR(0x709bf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B709bfe:{NFSU2_TR(0x709bfe);
u8 U[1];
__builtin_memmove((U+0),(G+4),1);
s1(u32(r4(R+8)),r1(U+0));
{[[clang::musttail]] return blk_709c00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709c00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709c00:L709c00:{bud-=7;NFSU2_TR(0x709c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709c03:{NFSU2_TR(0x709c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c06:{NFSU2_TR(0x709c06);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709c08:{NFSU2_TR(0x709c08);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B709c0a:{NFSU2_TR(0x709c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B709c0d:{NFSU2_TR(0x709c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B709c0e:{NFSU2_TR(0x709c0e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7099a1u);}[[clang::musttail]] return blk_7099a1(ARGS);}}
{[[clang::musttail]] return blk_709c14(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709c14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709c14:L709c14:{bud-=15;NFSU2_TR(0x709c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c17:{NFSU2_TR(0x709c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B709c1a:{NFSU2_TR(0x709c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709c1d:{NFSU2_TR(0x709c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c20:{NFSU2_TR(0x709c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c23:{NFSU2_TR(0x709c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c26:{NFSU2_TR(0x709c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c29:{NFSU2_TR(0x709c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c2c:{NFSU2_TR(0x709c2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c2f:{NFSU2_TR(0x709c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c33:{NFSU2_TR(0x709c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709c37:{NFSU2_TR(0x709c37);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+4))));
}
B709c39:{NFSU2_TR(0x709c39);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
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
B709c3f:{NFSU2_TR(0x709c3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c42:{NFSU2_TR(0x709c42);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7095b6u);}[[clang::musttail]] return blk_7095b6(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_709c48(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709c48(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709c48:L709c48:{bud-=5;NFSU2_TR(0x709c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B709c49:{NFSU2_TR(0x709c49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B709c4a:{NFSU2_TR(0x709c4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B709c4b:{NFSU2_TR(0x709c4b);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B709c4c:{NFSU2_TR(0x709c4c);
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
PN u32 blk_709c4d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709c4d:L709c4d:{bud-=22;NFSU2_TR(0x709c4d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709c4e:{NFSU2_TR(0x709c4e);
__builtin_memmove((R+20),(G+16),4);
}
B709c50:{NFSU2_TR(0x709c50);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xa0ull))));
}
B709c56:{NFSU2_TR(0x709c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709c59:{NFSU2_TR(0x709c59);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709c5c:{NFSU2_TR(0x709c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709c5f:{NFSU2_TR(0x709c5f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709c60:{NFSU2_TR(0x709c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709c63:{NFSU2_TR(0x709c63);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B709c66:{NFSU2_TR(0x709c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709c69:{NFSU2_TR(0x709c69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709c6a:{NFSU2_TR(0x709c6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709c6b:{NFSU2_TR(0x709c6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709c6e:{NFSU2_TR(0x709c6e);
__builtin_memmove((R+24),(R+8),4);
}
B709c70:{NFSU2_TR(0x709c70);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B709c72:{NFSU2_TR(0x709c72);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B709c75:{NFSU2_TR(0x709c75);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(F+0,u8((r4(R+28))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B709c77:{NFSU2_TR(0x709c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c7a:{NFSU2_TR(0x709c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B709c7d:{NFSU2_TR(0x709c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c80:{NFSU2_TR(0x709c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c86:{NFSU2_TR(0x709c86);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_70a275(ARGS);}}
}
B709c8c:L709c8c:{bud-=59;NFSU2_TR(0x709c8c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B709c8f:{NFSU2_TR(0x709c8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B709c92:{NFSU2_TR(0x709c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c98:{NFSU2_TR(0x709c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c9b:{NFSU2_TR(0x709c9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709c9e:{NFSU2_TR(0x709c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B709ca1:{NFSU2_TR(0x709ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B709ca4:{NFSU2_TR(0x709ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B709ca7:{NFSU2_TR(0x709ca7);
__builtin_memmove((R+28),(R+24),4);
}
B709ca9:{NFSU2_TR(0x709ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709cac:{NFSU2_TR(0x709cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709caf:{NFSU2_TR(0x709caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cb2:{NFSU2_TR(0x709cb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((G+4),(U+0),4);
}
B709cb5:{NFSU2_TR(0x709cb5);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
}
B709cb8:{NFSU2_TR(0x709cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cbe:{NFSU2_TR(0x709cbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709cc1:{NFSU2_TR(0x709cc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B709cc4:{NFSU2_TR(0x709cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B709cc7:{NFSU2_TR(0x709cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709ccd:{NFSU2_TR(0x709ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B709cd3:{NFSU2_TR(0x709cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cd6:{NFSU2_TR(0x709cd6);
__builtin_memmove((R+28),(R+8),4);
}
B709cd8:{NFSU2_TR(0x709cd8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B709cdb:{NFSU2_TR(0x709cdb);
__builtin_memmove((G+4),(R+12),4);
}
B709cdd:{NFSU2_TR(0x709cdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B709ce0:{NFSU2_TR(0x709ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709ce3:{NFSU2_TR(0x709ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B709ce6:{NFSU2_TR(0x709ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B709ce9:{NFSU2_TR(0x709ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cec:{NFSU2_TR(0x709cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cef:{NFSU2_TR(0x709cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cf2:{NFSU2_TR(0x709cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709cf5:{NFSU2_TR(0x709cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709cf8:{NFSU2_TR(0x709cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709cfb:{NFSU2_TR(0x709cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B709cfe:{NFSU2_TR(0x709cfe);
__builtin_memmove((R+12),(R+8),4);
}
B709d00:{NFSU2_TR(0x709d00);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B709d03:{NFSU2_TR(0x709d03);
__builtin_memmove((G+4),(R+28),4);
}
B709d05:{NFSU2_TR(0x709d05);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+12))));
}
B709d07:{NFSU2_TR(0x709d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d0a:{NFSU2_TR(0x709d0a);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0xfffffffcull))));
}
B709d0d:{NFSU2_TR(0x709d0d);
__builtin_memmove((R+12),(R+24),4);
}
B709d0f:{NFSU2_TR(0x709d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))-u32(r4(U+4))));
}
B709d12:{NFSU2_TR(0x709d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d15:{NFSU2_TR(0x709d15);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B709d17:{NFSU2_TR(0x709d17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d1a:{NFSU2_TR(0x709d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d1d:{NFSU2_TR(0x709d1d);
__builtin_memmove((G+4),(R+8),4);
}
B709d1f:{NFSU2_TR(0x709d1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B709d22:{NFSU2_TR(0x709d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d25:{NFSU2_TR(0x709d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B709d28:{NFSU2_TR(0x709d28);
__builtin_memmove((R+24),(R+28),4);
}
B709d2a:{NFSU2_TR(0x709d2a);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B709d2c:{NFSU2_TR(0x709d2c);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+28))));
}
B709d2e:{NFSU2_TR(0x709d2e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B709d30:{NFSU2_TR(0x709d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d33:{NFSU2_TR(0x709d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d36:{NFSU2_TR(0x709d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d39:{NFSU2_TR(0x709d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_709d3a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709d3a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709d3a:L709d3a:{bud-=9;NFSU2_TR(0x709d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709d3d:{NFSU2_TR(0x709d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709d40:{NFSU2_TR(0x709d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B709d43:{NFSU2_TR(0x709d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d49:{NFSU2_TR(0x709d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709d4c:{NFSU2_TR(0x709d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d4f:{NFSU2_TR(0x709d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B709d52:{NFSU2_TR(0x709d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d58:{NFSU2_TR(0x709d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709d5b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709d5b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709d5b:L709d5b:{bud-=37;NFSU2_TR(0x709d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709d5e:{NFSU2_TR(0x709d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709d64:{NFSU2_TR(0x709d64);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B709d66:{NFSU2_TR(0x709d66);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B709d6a:{NFSU2_TR(0x709d6a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B709d6d:{NFSU2_TR(0x709d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d70:{NFSU2_TR(0x709d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709d73:{NFSU2_TR(0x709d73);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B709d77:{NFSU2_TR(0x709d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d7a:{NFSU2_TR(0x709d7a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+12,u32(r1(U+0)));
}
B709d7d:{NFSU2_TR(0x709d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d80:{NFSU2_TR(0x709d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709d83:{NFSU2_TR(0x709d83);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B709d85:{NFSU2_TR(0x709d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709d88:{NFSU2_TR(0x709d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d8b:{NFSU2_TR(0x709d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709d91:{NFSU2_TR(0x709d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709d97:{NFSU2_TR(0x709d97);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+28,u32(r1(U+0)));
}
B709d9a:{NFSU2_TR(0x709d9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709d9e:{NFSU2_TR(0x709d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709da1:{NFSU2_TR(0x709da1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(R+28,u32(r1(U+0)));
}
B709da4:{NFSU2_TR(0x709da4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(G+4,u32(r1(U+0)));
}
B709da7:{NFSU2_TR(0x709da7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709daa:{NFSU2_TR(0x709daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709dad:{NFSU2_TR(0x709dad);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(G+4,u32(r1(U+8)));
}
B709db1:{NFSU2_TR(0x709db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709db4:{NFSU2_TR(0x709db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709db7:{NFSU2_TR(0x709db7);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B709db9:{NFSU2_TR(0x709db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709dbd:{NFSU2_TR(0x709dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dc3:{NFSU2_TR(0x709dc3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+4,u32(r1(U+0)));
}
B709dc6:{NFSU2_TR(0x709dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dc9:{NFSU2_TR(0x709dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709dcc:{NFSU2_TR(0x709dcc);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(G+4,u32(r1(U+8)));
}
B709dd0:{NFSU2_TR(0x709dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dd3:{NFSU2_TR(0x709dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dd6:{NFSU2_TR(0x709dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709ddd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709ddd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709ddd:L709ddd:{bud-=10;NFSU2_TR(0x709ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709de0:{NFSU2_TR(0x709de0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B709de3:{NFSU2_TR(0x709de3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B709de7:{NFSU2_TR(0x709de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709dea:{NFSU2_TR(0x709dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709df0:{NFSU2_TR(0x709df0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B709df3:{NFSU2_TR(0x709df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709df6:{NFSU2_TR(0x709df6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+4))));
}
B709df8:{NFSU2_TR(0x709df8);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B709dfa:{NFSU2_TR(0x709dfa);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_709e00(ARGS);}}
}
B709dfc:L709dfc:{bud-=2;NFSU2_TR(0x709dfc);
__builtin_memmove((G+4),(R+12),4);
}
B709dfe:{NFSU2_TR(0x709dfe);
{[[clang::musttail]] return blk_709e03(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709e00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709e00:L709e00:{bud-=1;NFSU2_TR(0x709e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
{[[clang::musttail]] return blk_709e03(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709e03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709e03:L709e03:{bud-=4;NFSU2_TR(0x709e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709e06:{NFSU2_TR(0x709e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709e09:{NFSU2_TR(0x709e09);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B709e0d:{NFSU2_TR(0x709e0d);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x709dddu);}[[clang::musttail]] return blk_709ddd(ARGS);}}
}
B709e0f:L709e0f:{bud-=1;NFSU2_TR(0x709e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709e16(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709e16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709e16:L709e16:{bud-=8;NFSU2_TR(0x709e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709e19:{NFSU2_TR(0x709e19);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B709e1c:{NFSU2_TR(0x709e1c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B709e20:{NFSU2_TR(0x709e20);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B709e24:{NFSU2_TR(0x709e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709e27:{NFSU2_TR(0x709e27);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+4))));
}
B709e29:{NFSU2_TR(0x709e29);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B709e2b:{NFSU2_TR(0x709e2b);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_709e31(ARGS);}}
}
B709e2d:L709e2d:{bud-=2;NFSU2_TR(0x709e2d);
__builtin_memmove((G+4),(R+12),4);
}
B709e2f:{NFSU2_TR(0x709e2f);
{[[clang::musttail]] return blk_709e34(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709e31(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709e31:L709e31:{bud-=1;NFSU2_TR(0x709e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
{[[clang::musttail]] return blk_709e34(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709e34(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709e34:L709e34:{bud-=4;NFSU2_TR(0x709e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B709e37:{NFSU2_TR(0x709e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709e3a:{NFSU2_TR(0x709e3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B709e3e:{NFSU2_TR(0x709e3e);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x709e16u);}[[clang::musttail]] return blk_709e16(ARGS);}}
}
B709e40:L709e40:{bud-=5;NFSU2_TR(0x709e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e43:{NFSU2_TR(0x709e43);
w4(G+4,u32(0xffull));
}
B709e48:{NFSU2_TR(0x709e48);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B709e4a:{NFSU2_TR(0x709e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709e4d:{NFSU2_TR(0x709e4d);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_709e52(ARGS);}}
}
B709e4f:L709e4f:{bud-=1;NFSU2_TR(0x709e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709e52(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709e52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709e52:L709e52:{bud-=11;NFSU2_TR(0x709e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709e55:{NFSU2_TR(0x709e55);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709e58:{NFSU2_TR(0x709e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e5b:{NFSU2_TR(0x709e5b);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B709e5d:{NFSU2_TR(0x709e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e60:{NFSU2_TR(0x709e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(G+4)),r4(U+0));
}
B709e62:{NFSU2_TR(0x709e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e65:{NFSU2_TR(0x709e65);
w4(G+4,u32(0xffull));
}
B709e6a:{NFSU2_TR(0x709e6a);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B709e6c:{NFSU2_TR(0x709e6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709e6f:{NFSU2_TR(0x709e6f);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_709e74(ARGS);}}
}
B709e71:L709e71:{bud-=1;NFSU2_TR(0x709e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_709e74(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709e74(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709e74:L709e74:{bud-=9;NFSU2_TR(0x709e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709e77:{NFSU2_TR(0x709e77);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709e7a:{NFSU2_TR(0x709e7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e7d:{NFSU2_TR(0x709e7d);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B709e7f:{NFSU2_TR(0x709e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709e82:{NFSU2_TR(0x709e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(G+4)),r4(U+0));
}
B709e84:{NFSU2_TR(0x709e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709e8a:{NFSU2_TR(0x709e8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709e8d:{NFSU2_TR(0x709e8d);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709f73(ARGS);}}
}
B709e93:L709e93:{bud-=2;NFSU2_TR(0x709e93);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709e96:{NFSU2_TR(0x709e96);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709f73(ARGS);}}
}
B709e9c:L709e9c:{bud-=4;NFSU2_TR(0x709e9c);
__builtin_memmove((G+4),(R+28),4);
}
B709e9e:{NFSU2_TR(0x709e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B709ea1:{NFSU2_TR(0x709ea1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709ea4:{NFSU2_TR(0x709ea4);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709f73(ARGS);}}
}
B709eaa:L709eaa:{bud-=4;NFSU2_TR(0x709eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709ead:{NFSU2_TR(0x709ead);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B709eaf:{NFSU2_TR(0x709eaf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+8)));
w4(U+12,u32(u32(r4(G+4))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B709eb2:{NFSU2_TR(0x709eb2);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_709f73(ARGS);}}
}
B709eb8:L709eb8:{bud-=65;NFSU2_TR(0x709eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709ebb:{NFSU2_TR(0x709ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709ebe:{NFSU2_TR(0x709ebe);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709ec1:{NFSU2_TR(0x709ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709ec4:{NFSU2_TR(0x709ec4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B709ec6:{NFSU2_TR(0x709ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709ec9:{NFSU2_TR(0x709ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B709ecc:{NFSU2_TR(0x709ecc);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B709ed0:{NFSU2_TR(0x709ed0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709ed2:{NFSU2_TR(0x709ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709ed5:{NFSU2_TR(0x709ed5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709ed8:{NFSU2_TR(0x709ed8);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(G+0)),r1(U+0));
}
B709eda:{NFSU2_TR(0x709eda);
__builtin_memmove((R+8),(R+28),4);
}
B709edc:{NFSU2_TR(0x709edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709edf:{NFSU2_TR(0x709edf);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709ee1:{NFSU2_TR(0x709ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709ee4:{NFSU2_TR(0x709ee4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709ee6:{NFSU2_TR(0x709ee6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709ee9:{NFSU2_TR(0x709ee9);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709eec:{NFSU2_TR(0x709eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709eef:{NFSU2_TR(0x709eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709ef2:{NFSU2_TR(0x709ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709ef5:{NFSU2_TR(0x709ef5);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709ef7:{NFSU2_TR(0x709ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709efa:{NFSU2_TR(0x709efa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709efc:{NFSU2_TR(0x709efc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709eff:{NFSU2_TR(0x709eff);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f02:{NFSU2_TR(0x709f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709f05:{NFSU2_TR(0x709f05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709f08:{NFSU2_TR(0x709f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f0b:{NFSU2_TR(0x709f0b);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709f0d:{NFSU2_TR(0x709f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709f10:{NFSU2_TR(0x709f10);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B709f12:{NFSU2_TR(0x709f12);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B709f15:{NFSU2_TR(0x709f15);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f18:{NFSU2_TR(0x709f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709f1b:{NFSU2_TR(0x709f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B709f1e:{NFSU2_TR(0x709f1e);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B709f20:{NFSU2_TR(0x709f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B709f23:{NFSU2_TR(0x709f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709f26:{NFSU2_TR(0x709f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f29:{NFSU2_TR(0x709f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709f2c:{NFSU2_TR(0x709f2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B709f2f:{NFSU2_TR(0x709f2f);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B709f31:{NFSU2_TR(0x709f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f34:{NFSU2_TR(0x709f34);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f37:{NFSU2_TR(0x709f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709f3a:{NFSU2_TR(0x709f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f3d:{NFSU2_TR(0x709f3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B709f40:{NFSU2_TR(0x709f40);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f43:{NFSU2_TR(0x709f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f46:{NFSU2_TR(0x709f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709f49:{NFSU2_TR(0x709f49);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B709f4b:{NFSU2_TR(0x709f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f4e:{NFSU2_TR(0x709f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B709f51:{NFSU2_TR(0x709f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B709f54:{NFSU2_TR(0x709f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f57:{NFSU2_TR(0x709f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B709f5a:{NFSU2_TR(0x709f5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B709f5d:{NFSU2_TR(0x709f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B709f60:{NFSU2_TR(0x709f60);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709f62:{NFSU2_TR(0x709f62);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B709f65:{NFSU2_TR(0x709f65);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709f68:{NFSU2_TR(0x709f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709f6e:{NFSU2_TR(0x709f6e);
{[[clang::musttail]] return blk_709ff5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709f73(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709f73:L709f73:{bud-=40;NFSU2_TR(0x709f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f76:{NFSU2_TR(0x709f76);
__builtin_memmove((G+4),(R+28),4);
}
B709f78:{NFSU2_TR(0x709f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B709f7b:{NFSU2_TR(0x709f7b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B709f7e:{NFSU2_TR(0x709f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))-u32(r4(U+4))));
}
B709f81:{NFSU2_TR(0x709f81);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B709f85:{NFSU2_TR(0x709f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f88:{NFSU2_TR(0x709f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f8b:{NFSU2_TR(0x709f8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B709f8e:{NFSU2_TR(0x709f8e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B709f91:{NFSU2_TR(0x709f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709f94:{NFSU2_TR(0x709f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B709f97:{NFSU2_TR(0x709f97);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((G+4),(U+12),1);
}
B709f9e:{NFSU2_TR(0x709f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fa1:{NFSU2_TR(0x709fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B709fa4:{NFSU2_TR(0x709fa4);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fa7:{NFSU2_TR(0x709fa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B709fad:{NFSU2_TR(0x709fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B709fb3:{NFSU2_TR(0x709fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fb6:{NFSU2_TR(0x709fb6);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fb9:{NFSU2_TR(0x709fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709fbc:{NFSU2_TR(0x709fbc);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((G+4),(U+8),1);
}
B709fbf:{NFSU2_TR(0x709fbf);
u8 U[1];
__builtin_memmove((U+0),(G+4),1);
s1(u32(r4(G+0)),r1(U+0));
}
B709fc1:{NFSU2_TR(0x709fc1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((G+4),(U+0),1);
}
B709fc3:{NFSU2_TR(0x709fc3);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fc6:{NFSU2_TR(0x709fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709fcc:{NFSU2_TR(0x709fcc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+4),(U+0),1);
}
B709fce:{NFSU2_TR(0x709fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fd1:{NFSU2_TR(0x709fd1);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fd4:{NFSU2_TR(0x709fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709fd7:{NFSU2_TR(0x709fd7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+4),(U+0),1);
}
B709fd9:{NFSU2_TR(0x709fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fdc:{NFSU2_TR(0x709fdc);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B709fdf:{NFSU2_TR(0x709fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709fe2:{NFSU2_TR(0x709fe2);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((G+4),(U+8),1);
}
B709fe5:{NFSU2_TR(0x709fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B709fe8:{NFSU2_TR(0x709fe8);
u8 U[1];
__builtin_memmove((U+0),(G+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B709fea:{NFSU2_TR(0x709fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B709ff0:{NFSU2_TR(0x709ff0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+4),(U+0),1);
}
B709ff2:{NFSU2_TR(0x709ff2);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
{[[clang::musttail]] return blk_709ff5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_709ff5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B709ff5:L709ff5:{bud-=4;NFSU2_TR(0x709ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709ffb:{NFSU2_TR(0x709ffb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B709ffc:{NFSU2_TR(0x709ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B709fff:{NFSU2_TR(0x709fff);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
{EXIT(0x70a000u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_709(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x70903e:[[clang::musttail]] return blk_70903e(c,a4,a0,a1,bud);
case 0x709060:[[clang::musttail]] return blk_709060(c,a4,a0,a1,bud);
case 0x709100:[[clang::musttail]] return blk_709100(c,a4,a0,a1,bud);
case 0x709106:[[clang::musttail]] return blk_709106(c,a4,a0,a1,bud);
case 0x709111:[[clang::musttail]] return blk_709111(c,a4,a0,a1,bud);
case 0x709115:[[clang::musttail]] return blk_709115(c,a4,a0,a1,bud);
case 0x70912a:[[clang::musttail]] return blk_70912a(c,a4,a0,a1,bud);
case 0x709130:[[clang::musttail]] return blk_709130(c,a4,a0,a1,bud);
case 0x70913b:[[clang::musttail]] return blk_70913b(c,a4,a0,a1,bud);
case 0x70913f:[[clang::musttail]] return blk_70913f(c,a4,a0,a1,bud);
case 0x709222:[[clang::musttail]] return blk_709222(c,a4,a0,a1,bud);
case 0x709257:[[clang::musttail]] return blk_709257(c,a4,a0,a1,bud);
case 0x709280:[[clang::musttail]] return blk_709280(c,a4,a0,a1,bud);
case 0x709282:[[clang::musttail]] return blk_709282(c,a4,a0,a1,bud);
case 0x7092de:[[clang::musttail]] return blk_7092de(c,a4,a0,a1,bud);
case 0x7092eb:[[clang::musttail]] return blk_7092eb(c,a4,a0,a1,bud);
case 0x709342:[[clang::musttail]] return blk_709342(c,a4,a0,a1,bud);
case 0x709362:[[clang::musttail]] return blk_709362(c,a4,a0,a1,bud);
case 0x709365:[[clang::musttail]] return blk_709365(c,a4,a0,a1,bud);
case 0x709378:[[clang::musttail]] return blk_709378(c,a4,a0,a1,bud);
case 0x709393:[[clang::musttail]] return blk_709393(c,a4,a0,a1,bud);
case 0x709396:[[clang::musttail]] return blk_709396(c,a4,a0,a1,bud);
case 0x70946f:[[clang::musttail]] return blk_70946f(c,a4,a0,a1,bud);
case 0x7094a4:[[clang::musttail]] return blk_7094a4(c,a4,a0,a1,bud);
case 0x7094c6:[[clang::musttail]] return blk_7094c6(c,a4,a0,a1,bud);
case 0x7094c9:[[clang::musttail]] return blk_7094c9(c,a4,a0,a1,bud);
case 0x7095b6:[[clang::musttail]] return blk_7095b6(c,a4,a0,a1,bud);
case 0x7095f5:[[clang::musttail]] return blk_7095f5(c,a4,a0,a1,bud);
case 0x709697:[[clang::musttail]] return blk_709697(c,a4,a0,a1,bud);
case 0x7096b9:[[clang::musttail]] return blk_7096b9(c,a4,a0,a1,bud);
case 0x709765:[[clang::musttail]] return blk_709765(c,a4,a0,a1,bud);
case 0x709770:[[clang::musttail]] return blk_709770(c,a4,a0,a1,bud);
case 0x709796:[[clang::musttail]] return blk_709796(c,a4,a0,a1,bud);
case 0x7097a4:[[clang::musttail]] return blk_7097a4(c,a4,a0,a1,bud);
case 0x70989b:[[clang::musttail]] return blk_70989b(c,a4,a0,a1,bud);
case 0x70991a:[[clang::musttail]] return blk_70991a(c,a4,a0,a1,bud);
case 0x709974:[[clang::musttail]] return blk_709974(c,a4,a0,a1,bud);
case 0x7099a1:[[clang::musttail]] return blk_7099a1(c,a4,a0,a1,bud);
case 0x7099ed:[[clang::musttail]] return blk_7099ed(c,a4,a0,a1,bud);
case 0x709a0f:[[clang::musttail]] return blk_709a0f(c,a4,a0,a1,bud);
case 0x709aac:[[clang::musttail]] return blk_709aac(c,a4,a0,a1,bud);
case 0x709ab2:[[clang::musttail]] return blk_709ab2(c,a4,a0,a1,bud);
case 0x709abd:[[clang::musttail]] return blk_709abd(c,a4,a0,a1,bud);
case 0x709ac1:[[clang::musttail]] return blk_709ac1(c,a4,a0,a1,bud);
case 0x709ad6:[[clang::musttail]] return blk_709ad6(c,a4,a0,a1,bud);
case 0x709adc:[[clang::musttail]] return blk_709adc(c,a4,a0,a1,bud);
case 0x709ae7:[[clang::musttail]] return blk_709ae7(c,a4,a0,a1,bud);
case 0x709aeb:[[clang::musttail]] return blk_709aeb(c,a4,a0,a1,bud);
case 0x709bcc:[[clang::musttail]] return blk_709bcc(c,a4,a0,a1,bud);
case 0x709c00:[[clang::musttail]] return blk_709c00(c,a4,a0,a1,bud);
case 0x709c14:[[clang::musttail]] return blk_709c14(c,a4,a0,a1,bud);
case 0x709c48:[[clang::musttail]] return blk_709c48(c,a4,a0,a1,bud);
case 0x709c4d:[[clang::musttail]] return blk_709c4d(c,a4,a0,a1,bud);
case 0x709d3a:[[clang::musttail]] return blk_709d3a(c,a4,a0,a1,bud);
case 0x709d5b:[[clang::musttail]] return blk_709d5b(c,a4,a0,a1,bud);
case 0x709ddd:[[clang::musttail]] return blk_709ddd(c,a4,a0,a1,bud);
case 0x709e00:[[clang::musttail]] return blk_709e00(c,a4,a0,a1,bud);
case 0x709e03:[[clang::musttail]] return blk_709e03(c,a4,a0,a1,bud);
case 0x709e16:[[clang::musttail]] return blk_709e16(c,a4,a0,a1,bud);
case 0x709e31:[[clang::musttail]] return blk_709e31(c,a4,a0,a1,bud);
case 0x709e34:[[clang::musttail]] return blk_709e34(c,a4,a0,a1,bud);
case 0x709e52:[[clang::musttail]] return blk_709e52(c,a4,a0,a1,bud);
case 0x709e74:[[clang::musttail]] return blk_709e74(c,a4,a0,a1,bud);
case 0x709f73:[[clang::musttail]] return blk_709f73(c,a4,a0,a1,bud);
case 0x709ff5:[[clang::musttail]] return blk_709ff5(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_709(Cpu& c){u8* R=c.regs.data();return ent_709(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
