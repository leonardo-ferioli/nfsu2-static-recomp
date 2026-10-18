#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4031c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c570(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c9c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_571640(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_578ce0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_578d90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_598840(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5989f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_598a70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59b6f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59b940(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59b9b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59c980(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59cb90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59dbb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a20ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a20c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a20f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2100(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2102(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2133(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2140(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2142(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2173(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2180(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2182(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a21bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a21c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a21cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a21e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a21f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2227(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2234(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2236(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2240(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a226a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a22c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a22e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a22f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a249f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a24a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a24b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a24b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2551(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2565(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2575(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a259e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a25b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a25c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a25f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a25f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2605(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2608(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2693(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a26ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a26ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a26d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a26e8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2712(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a271b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a27ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a27b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2805(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2839(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a287d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a28a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a28b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2958(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2963(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a29c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2a37(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2b2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2b37(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2bc2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2bdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2bfc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2c0f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2dc7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2dd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2e1f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2e81(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2e8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2e92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2eda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2ee0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2f4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2f69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a3373(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5f67f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75bed4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2010(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2280(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a22a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a232b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2360(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2394(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a23d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a23f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a247a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a25d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a274f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2780(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2900(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a291c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2925(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a292e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a296c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a297a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2990(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2997(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a29a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a29cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2a52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2a60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2a91(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2acc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2b01(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2b4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2b60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2c1a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2c60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2c6e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2ca3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2d33(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2e45(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2f52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2fd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a2001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2001:L5a2001:{bud-=6;NFSU2_TR(0x5a2001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2002:{NFSU2_TR(0x5a2002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2003:{NFSU2_TR(0x5a2003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2004:{NFSU2_TR(0x5a2004);
__builtin_memmove((G+16),(R+20),4);
}
B5a2006:{NFSU2_TR(0x5a2006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a2007:{NFSU2_TR(0x5a2007);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
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
PN u32 blk_5a2010(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2010:L5a2010:{bud-=21;NFSU2_TR(0x5a2010);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2014:{NFSU2_TR(0x5a2014);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B5a2017:{NFSU2_TR(0x5a2017);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(G+0),4);
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(F+0))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(F+11))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5a201a:{NFSU2_TR(0x5a201a);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5a201f:{NFSU2_TR(0x5a201f);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B5a2023:{NFSU2_TR(0x5a2023);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2027:{NFSU2_TR(0x5a2027);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a202b:{NFSU2_TR(0x5a202b);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a202f:{NFSU2_TR(0x5a202f);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2033:{NFSU2_TR(0x5a2033);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a2037:{NFSU2_TR(0x5a2037);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a203b:{NFSU2_TR(0x5a203b);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a203f:{NFSU2_TR(0x5a203f);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2043:{NFSU2_TR(0x5a2043);
{u32 ea_=u32(r4(G+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2046:{NFSU2_TR(0x5a2046);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2049:{NFSU2_TR(0x5a2049);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a204c:{NFSU2_TR(0x5a204c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a204e:{NFSU2_TR(0x5a204e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2051:{NFSU2_TR(0x5a2051);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2054:{NFSU2_TR(0x5a2054);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2057:{NFSU2_TR(0x5a2057);
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
PN u32 blk_5a2060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2060:L5a2060:{bud-=18;NFSU2_TR(0x5a2060);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2061:{NFSU2_TR(0x5a2061);
__builtin_memmove((R+20),(G+16),4);
}
B5a2063:{NFSU2_TR(0x5a2063);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B5a2066:{NFSU2_TR(0x5a2066);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x14ull))));
}
B5a2069:{NFSU2_TR(0x5a2069);
__builtin_memmove((R+8),(G+4),4);
}
B5a206b:{NFSU2_TR(0x5a206b);
{u32 ea_=u32(r4(R+8)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2071:{NFSU2_TR(0x5a2071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2072:{NFSU2_TR(0x5a2072);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2078:{NFSU2_TR(0x5a2078);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2079:{NFSU2_TR(0x5a2079);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B5a207b:{NFSU2_TR(0x5a207b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a207c:{NFSU2_TR(0x5a207c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a207f:{NFSU2_TR(0x5a207f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2081:{NFSU2_TR(0x5a2081);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2085:{NFSU2_TR(0x5a2085);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
w4(U+4,u32(0xfcdc84dcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a208d:{NFSU2_TR(0x5a208d);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2090:{NFSU2_TR(0x5a2090);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2094:{NFSU2_TR(0x5a2094);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a20ad(ARGS);}}
}
B5a2096:L5a2096:{bud-=3;NFSU2_TR(0x5a2096);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B5a209c:{NFSU2_TR(0x5a209c);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a209e:{NFSU2_TR(0x5a209e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a20ad(ARGS);}}
}
B5a20a0:L5a20a0:{bud-=6;NFSU2_TR(0x5a20a0);
__builtin_memmove((G+0),(R+28),4);
}
B5a20a2:{NFSU2_TR(0x5a20a2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5a20a3:{NFSU2_TR(0x5a20a3);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B5a20a5:{NFSU2_TR(0x5a20a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a20a9:{NFSU2_TR(0x5a20a9);
w4(G+0,sar<u32>(r4(G+0),u64(u32(0x1ull))));
}
B5a20ab:{NFSU2_TR(0x5a20ab);
__builtin_memmove((R+28),(G+0),4);
{[[clang::musttail]] return blk_5a20ad(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a20ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a20ad:L5a20ad:{bud-=4;NFSU2_TR(0x5a20ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a20b0:{NFSU2_TR(0x5a20b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5a20b2:{NFSU2_TR(0x5a20b2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a20b5:{NFSU2_TR(0x5a20b5);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a21e7(ARGS);}}
}
B5a20bb:L5a20bb:{bud-=2;NFSU2_TR(0x5a20bb);
w4(G+4,u32(0x3ull));
}
B5a20c0:{NFSU2_TR(0x5a20c0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x34ull))));
{[[clang::musttail]] return blk_5a20c3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a20c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a20c3:L5a20c3:{bud-=12;NFSU2_TR(0x5a20c3);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a20c6:{NFSU2_TR(0x5a20c6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a20c8:{NFSU2_TR(0x5a20c8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a20cb:{NFSU2_TR(0x5a20cb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a20ce:{NFSU2_TR(0x5a20ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a20d0:{NFSU2_TR(0x5a20d0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a20d3:{NFSU2_TR(0x5a20d3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a20d5:{NFSU2_TR(0x5a20d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a20d7:{NFSU2_TR(0x5a20d7);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a20db:{NFSU2_TR(0x5a20db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a20dd:{NFSU2_TR(0x5a20dd);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a20e0:{NFSU2_TR(0x5a20e0);
if(r1(F+6)){{[[clang::musttail]] return blk_5a20f3(ARGS);}}
}
B5a20e2:L5a20e2:{bud-=5;NFSU2_TR(0x5a20e2);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a20e6:{NFSU2_TR(0x5a20e6);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a20ec:{NFSU2_TR(0x5a20ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a20ee:{NFSU2_TR(0x5a20ee);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a20f1:{NFSU2_TR(0x5a20f1);
if(r1(F+2)){{[[clang::musttail]] return blk_5a2100(ARGS);}}
{[[clang::musttail]] return blk_5a20f3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a20f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a20f3:L5a20f3:{bud-=4;NFSU2_TR(0x5a20f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffecull))));
__builtin_memmove((G+0),(U+0),4);
}
B5a20f6:{NFSU2_TR(0x5a20f6);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a20fa:{NFSU2_TR(0x5a20fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a20fe:{NFSU2_TR(0x5a20fe);
{[[clang::musttail]] return blk_5a2102(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2100(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2100:L5a2100:{bud-=1;NFSU2_TR(0x5a2100);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_5a2102(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2102(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2102:L5a2102:{bud-=12;NFSU2_TR(0x5a2102);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2105:{NFSU2_TR(0x5a2105);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2108:{NFSU2_TR(0x5a2108);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a210b:{NFSU2_TR(0x5a210b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a210e:{NFSU2_TR(0x5a210e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2110:{NFSU2_TR(0x5a2110);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2113:{NFSU2_TR(0x5a2113);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2115:{NFSU2_TR(0x5a2115);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2117:{NFSU2_TR(0x5a2117);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a211b:{NFSU2_TR(0x5a211b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a211d:{NFSU2_TR(0x5a211d);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2120:{NFSU2_TR(0x5a2120);
if(r1(F+6)){{[[clang::musttail]] return blk_5a2133(ARGS);}}
}
B5a2122:L5a2122:{bud-=5;NFSU2_TR(0x5a2122);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2126:{NFSU2_TR(0x5a2126);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a212c:{NFSU2_TR(0x5a212c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a212e:{NFSU2_TR(0x5a212e);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2131:{NFSU2_TR(0x5a2131);
if(r1(F+2)){{[[clang::musttail]] return blk_5a2140(ARGS);}}
{[[clang::musttail]] return blk_5a2133(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2133(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2133:L5a2133:{bud-=4;NFSU2_TR(0x5a2133);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((G+0),(U+0),4);
}
B5a2136:{NFSU2_TR(0x5a2136);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a213a:{NFSU2_TR(0x5a213a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a213e:{NFSU2_TR(0x5a213e);
{[[clang::musttail]] return blk_5a2142(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2140(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2140:L5a2140:{bud-=1;NFSU2_TR(0x5a2140);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_5a2142(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2142(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2142:L5a2142:{bud-=12;NFSU2_TR(0x5a2142);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2145:{NFSU2_TR(0x5a2145);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2148:{NFSU2_TR(0x5a2148);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a214b:{NFSU2_TR(0x5a214b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a214e:{NFSU2_TR(0x5a214e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2150:{NFSU2_TR(0x5a2150);
{u32 ea_=u32(r4(R+8)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2153:{NFSU2_TR(0x5a2153);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2155:{NFSU2_TR(0x5a2155);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2157:{NFSU2_TR(0x5a2157);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a215b:{NFSU2_TR(0x5a215b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a215d:{NFSU2_TR(0x5a215d);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2160:{NFSU2_TR(0x5a2160);
if(r1(F+6)){{[[clang::musttail]] return blk_5a2173(ARGS);}}
}
B5a2162:L5a2162:{bud-=5;NFSU2_TR(0x5a2162);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2166:{NFSU2_TR(0x5a2166);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a216c:{NFSU2_TR(0x5a216c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a216e:{NFSU2_TR(0x5a216e);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2171:{NFSU2_TR(0x5a2171);
if(r1(F+2)){{[[clang::musttail]] return blk_5a2180(ARGS);}}
{[[clang::musttail]] return blk_5a2173(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2173(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2173:L5a2173:{bud-=4;NFSU2_TR(0x5a2173);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((G+0),(U+0),4);
}
B5a2176:{NFSU2_TR(0x5a2176);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a217a:{NFSU2_TR(0x5a217a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a217e:{NFSU2_TR(0x5a217e);
{[[clang::musttail]] return blk_5a2182(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2180(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2180:L5a2180:{bud-=1;NFSU2_TR(0x5a2180);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_5a2182(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2182(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2182:L5a2182:{bud-=12;NFSU2_TR(0x5a2182);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2188:{NFSU2_TR(0x5a2188);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a218b:{NFSU2_TR(0x5a218b);
{u32 ea_=u32(r4(R+8)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2191:{NFSU2_TR(0x5a2191);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2194:{NFSU2_TR(0x5a2194);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2196:{NFSU2_TR(0x5a2196);
{u32 ea_=u32(r4(R+8)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a219c:{NFSU2_TR(0x5a219c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a219e:{NFSU2_TR(0x5a219e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a21a0:{NFSU2_TR(0x5a21a0);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a21a4:{NFSU2_TR(0x5a21a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a21a6:{NFSU2_TR(0x5a21a6);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a21a9:{NFSU2_TR(0x5a21a9);
if(r1(F+6)){{[[clang::musttail]] return blk_5a21bc(ARGS);}}
}
B5a21ab:L5a21ab:{bud-=5;NFSU2_TR(0x5a21ab);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a21af:{NFSU2_TR(0x5a21af);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a21b5:{NFSU2_TR(0x5a21b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a21b7:{NFSU2_TR(0x5a21b7);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a21ba:{NFSU2_TR(0x5a21ba);
if(r1(F+2)){{[[clang::musttail]] return blk_5a21c9(ARGS);}}
{[[clang::musttail]] return blk_5a21bc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a21bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a21bc:L5a21bc:{bud-=4;NFSU2_TR(0x5a21bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((G+0),(U+0),4);
}
B5a21bf:{NFSU2_TR(0x5a21bf);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a21c3:{NFSU2_TR(0x5a21c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a21c7:{NFSU2_TR(0x5a21c7);
{[[clang::musttail]] return blk_5a21cb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a21c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a21c9:L5a21c9:{bud-=1;NFSU2_TR(0x5a21c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_5a21cb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a21cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a21cb:L5a21cb:{bud-=5;NFSU2_TR(0x5a21cb);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x4ull))));
}
B5a21ce:{NFSU2_TR(0x5a21ce);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a21d1:{NFSU2_TR(0x5a21d1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
}
B5a21d7:{NFSU2_TR(0x5a21d7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a21d9:{NFSU2_TR(0x5a21d9);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5a20c3u);}[[clang::musttail]] return blk_5a20c3(ARGS);}}
}
B5a21df:L5a21df:{bud-=2;NFSU2_TR(0x5a21df);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a21e3:{NFSU2_TR(0x5a21e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_5a21e7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a21e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a21e7:L5a21e7:{bud-=2;NFSU2_TR(0x5a21e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a21e9:{NFSU2_TR(0x5a21e9);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2240(ARGS);}}
}
B5a21eb:L5a21eb:{bud-=4;NFSU2_TR(0x5a21eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B5a21ee:{NFSU2_TR(0x5a21ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B5a21f1:{NFSU2_TR(0x5a21f1);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B5a21f5:{NFSU2_TR(0x5a21f5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
{[[clang::musttail]] return blk_5a21f7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a21f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a21f7:L5a21f7:{bud-=12;NFSU2_TR(0x5a21f7);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a21fa:{NFSU2_TR(0x5a21fa);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a21fc:{NFSU2_TR(0x5a21fc);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a21ff:{NFSU2_TR(0x5a21ff);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2202:{NFSU2_TR(0x5a2202);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2204:{NFSU2_TR(0x5a2204);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2206:{NFSU2_TR(0x5a2206);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2209:{NFSU2_TR(0x5a2209);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a220b:{NFSU2_TR(0x5a220b);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a220f:{NFSU2_TR(0x5a220f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2211:{NFSU2_TR(0x5a2211);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2214:{NFSU2_TR(0x5a2214);
if(r1(F+6)){{[[clang::musttail]] return blk_5a2227(ARGS);}}
}
B5a2216:L5a2216:{bud-=5;NFSU2_TR(0x5a2216);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a221a:{NFSU2_TR(0x5a221a);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2220:{NFSU2_TR(0x5a2220);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2222:{NFSU2_TR(0x5a2222);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2225:{NFSU2_TR(0x5a2225);
if(r1(F+2)){{[[clang::musttail]] return blk_5a2234(ARGS);}}
{[[clang::musttail]] return blk_5a2227(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2227(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2227:L5a2227:{bud-=4;NFSU2_TR(0x5a2227);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffecull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a222a:{NFSU2_TR(0x5a222a);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a222e:{NFSU2_TR(0x5a222e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2232:{NFSU2_TR(0x5a2232);
{[[clang::musttail]] return blk_5a2236(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2234(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2234:L5a2234:{bud-=1;NFSU2_TR(0x5a2234);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_5a2236(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2236(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2236:L5a2236:{bud-=3;NFSU2_TR(0x5a2236);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x30ull))));
}
B5a2239:{NFSU2_TR(0x5a2239);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B5a223a:{NFSU2_TR(0x5a223a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5a21f7u);}[[clang::musttail]] return blk_5a21f7(ARGS);}}
}
B5a223c:L5a223c:{bud-=1;NFSU2_TR(0x5a223c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_5a2240(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2240(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2240:L5a2240:{bud-=3;NFSU2_TR(0x5a2240);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2242:{NFSU2_TR(0x5a2242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2245:{NFSU2_TR(0x5a2245);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5a226a(ARGS);}}
}
B5a2247:L5a2247:{bud-=10;NFSU2_TR(0x5a2247);
{u32 ea_=u32(r4(G+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a224a:{NFSU2_TR(0x5a224a);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a224d:{NFSU2_TR(0x5a224d);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2250:{NFSU2_TR(0x5a2250);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2253:{NFSU2_TR(0x5a2253);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2255:{NFSU2_TR(0x5a2255);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a225c:{NFSU2_TR(0x5a225c);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a225f:{NFSU2_TR(0x5a225f);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2262:{NFSU2_TR(0x5a2262);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((G+4),(U+4),2);
}
B5a2266:{NFSU2_TR(0x5a2266);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+4),2);
s2(u32(r4(U+0)),r2(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5a226a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a226a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a226a:L5a226a:{bud-=6;NFSU2_TR(0x5a226a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a226b:{NFSU2_TR(0x5a226b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a226c:{NFSU2_TR(0x5a226c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a226d:{NFSU2_TR(0x5a226d);
__builtin_memmove((G+16),(R+20),4);
}
B5a226f:{NFSU2_TR(0x5a226f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a2270:{NFSU2_TR(0x5a2270);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
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
PN u32 blk_5a2280(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2280:L5a2280:{bud-=15;NFSU2_TR(0x5a2280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2281:{NFSU2_TR(0x5a2281);
__builtin_memmove((R+20),(G+16),4);
}
B5a2283:{NFSU2_TR(0x5a2283);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B5a2286:{NFSU2_TR(0x5a2286);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x28ull))));
}
B5a2289:{NFSU2_TR(0x5a2289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a228c:{NFSU2_TR(0x5a228c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a228d:{NFSU2_TR(0x5a228d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a228e:{NFSU2_TR(0x5a228e);
__builtin_memmove((R+24),(G+4),4);
}
B5a2290:{NFSU2_TR(0x5a2290);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2293:{NFSU2_TR(0x5a2293);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2294:{NFSU2_TR(0x5a2294);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2295:{NFSU2_TR(0x5a2295);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a2299:{NFSU2_TR(0x5a2299);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a229a:{NFSU2_TR(0x5a229a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5a229c:{NFSU2_TR(0x5a229c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a22a1ull));
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
PN u32 blk_5a22a1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a22a1:L5a22a1:{bud-=9;NFSU2_TR(0x5a22a1);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22a4:{NFSU2_TR(0x5a22a4);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22a7:{NFSU2_TR(0x5a22a7);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B5a22aa:{NFSU2_TR(0x5a22aa);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22ad:{NFSU2_TR(0x5a22ad);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22b1:{NFSU2_TR(0x5a22b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a22b7:{NFSU2_TR(0x5a22b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a22b9:{NFSU2_TR(0x5a22b9);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a22bc:{NFSU2_TR(0x5a22bc);
if(r1(F+2)){{[[clang::musttail]] return blk_5a22c9(ARGS);}}
}
B5a22be:L5a22be:{bud-=4;NFSU2_TR(0x5a22be);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a22c0:{NFSU2_TR(0x5a22c0);
w4(R+28,u32(0x1ull));
}
B5a22c5:{NFSU2_TR(0x5a22c5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a22c7:{NFSU2_TR(0x5a22c7);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
{[[clang::musttail]] return blk_5a22c9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a22c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a22c9:L5a22c9:{bud-=5;NFSU2_TR(0x5a22c9);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22cd:{NFSU2_TR(0x5a22cd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a22d3:{NFSU2_TR(0x5a22d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a22d5:{NFSU2_TR(0x5a22d5);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a22d8:{NFSU2_TR(0x5a22d8);
if(r1(F+2)){{[[clang::musttail]] return blk_5a22e3(ARGS);}}
}
B5a22da:L5a22da:{bud-=4;NFSU2_TR(0x5a22da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a22dc:{NFSU2_TR(0x5a22dc);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x2ull))));
}
B5a22df:{NFSU2_TR(0x5a22df);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a22e1:{NFSU2_TR(0x5a22e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
{[[clang::musttail]] return blk_5a22e3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a22e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a22e3:L5a22e3:{bud-=5;NFSU2_TR(0x5a22e3);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a22e7:{NFSU2_TR(0x5a22e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a22ed:{NFSU2_TR(0x5a22ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a22ef:{NFSU2_TR(0x5a22ef);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a22f2:{NFSU2_TR(0x5a22f2);
if(r1(F+2)){{[[clang::musttail]] return blk_5a22f9(ARGS);}}
}
B5a22f4:L5a22f4:{bud-=2;NFSU2_TR(0x5a22f4);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x4ull))));
}
B5a22f7:{NFSU2_TR(0x5a22f7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
{[[clang::musttail]] return blk_5a22f9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a22f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a22f9:L5a22f9:{bud-=18;NFSU2_TR(0x5a22f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a22fc:{NFSU2_TR(0x5a22fc);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a22fe:{NFSU2_TR(0x5a22fe);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a2301:{NFSU2_TR(0x5a2301);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5a2305:{NFSU2_TR(0x5a2305);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2306:{NFSU2_TR(0x5a2306);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2307:{NFSU2_TR(0x5a2307);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a230b:{NFSU2_TR(0x5a230b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a230f:{NFSU2_TR(0x5a230f);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2312:{NFSU2_TR(0x5a2312);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2313:{NFSU2_TR(0x5a2313);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a2315:{NFSU2_TR(0x5a2315);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2319:{NFSU2_TR(0x5a2319);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a231c:{NFSU2_TR(0x5a231c);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5a231e:{NFSU2_TR(0x5a231e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2322:{NFSU2_TR(0x5a2322);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5a2324:{NFSU2_TR(0x5a2324);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2326:{NFSU2_TR(0x5a2326);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a232bull));
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
PN u32 blk_5a232b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a232b:L5a232b:{bud-=15;NFSU2_TR(0x5a232b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a232e:{NFSU2_TR(0x5a232e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2332:{NFSU2_TR(0x5a2332);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2336:{NFSU2_TR(0x5a2336);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2339:{NFSU2_TR(0x5a2339);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a233d:{NFSU2_TR(0x5a233d);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0xcull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0xcull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2340:{NFSU2_TR(0x5a2340);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2343:{NFSU2_TR(0x5a2343);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2346:{NFSU2_TR(0x5a2346);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a234d:{NFSU2_TR(0x5a234d);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2351:{NFSU2_TR(0x5a2351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2352:{NFSU2_TR(0x5a2352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2353:{NFSU2_TR(0x5a2353);
__builtin_memmove((G+16),(R+20),4);
}
B5a2355:{NFSU2_TR(0x5a2355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a2356:{NFSU2_TR(0x5a2356);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
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
PN u32 blk_5a2360(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2360:L5a2360:{bud-=19;NFSU2_TR(0x5a2360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2361:{NFSU2_TR(0x5a2361);
__builtin_memmove((R+20),(G+16),4);
}
B5a2363:{NFSU2_TR(0x5a2363);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B5a2366:{NFSU2_TR(0x5a2366);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x1cull))));
}
B5a2369:{NFSU2_TR(0x5a2369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a236c:{NFSU2_TR(0x5a236c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a236d:{NFSU2_TR(0x5a236d);
__builtin_memmove((R+24),(G+4),4);
}
B5a236f:{NFSU2_TR(0x5a236f);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2372:{NFSU2_TR(0x5a2372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2375:{NFSU2_TR(0x5a2375);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5a2379:{NFSU2_TR(0x5a2379);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a237a:{NFSU2_TR(0x5a237a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a237e:{NFSU2_TR(0x5a237e);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2382:{NFSU2_TR(0x5a2382);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2385:{NFSU2_TR(0x5a2385);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2386:{NFSU2_TR(0x5a2386);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5a238a:{NFSU2_TR(0x5a238a);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a238e:{NFSU2_TR(0x5a238e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a238f:{NFSU2_TR(0x5a238f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2394ull));
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
PN u32 blk_5a2394(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2394:L5a2394:{bud-=15;NFSU2_TR(0x5a2394);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2397:{NFSU2_TR(0x5a2397);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a239b:{NFSU2_TR(0x5a239b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a239f:{NFSU2_TR(0x5a239f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a23a2:{NFSU2_TR(0x5a23a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a23a6:{NFSU2_TR(0x5a23a6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a23a9:{NFSU2_TR(0x5a23a9);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a23ac:{NFSU2_TR(0x5a23ac);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a23b3:{NFSU2_TR(0x5a23b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a23b7:{NFSU2_TR(0x5a23b7);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0xcull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0xcull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a23ba:{NFSU2_TR(0x5a23ba);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a23be:{NFSU2_TR(0x5a23be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a23bf:{NFSU2_TR(0x5a23bf);
__builtin_memmove((G+16),(R+20),4);
}
B5a23c1:{NFSU2_TR(0x5a23c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a23c2:{NFSU2_TR(0x5a23c2);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
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
PN u32 blk_5a23d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a23d0:L5a23d0:{bud-=15;NFSU2_TR(0x5a23d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a23d1:{NFSU2_TR(0x5a23d1);
__builtin_memmove((R+20),(G+16),4);
}
B5a23d3:{NFSU2_TR(0x5a23d3);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B5a23d6:{NFSU2_TR(0x5a23d6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x44ull))));
}
B5a23d9:{NFSU2_TR(0x5a23d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a23dc:{NFSU2_TR(0x5a23dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a23dd:{NFSU2_TR(0x5a23dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a23de:{NFSU2_TR(0x5a23de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a23df:{NFSU2_TR(0x5a23df);
__builtin_memmove((R+28),(G+4),4);
}
B5a23e1:{NFSU2_TR(0x5a23e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a23e4:{NFSU2_TR(0x5a23e4);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a23e5:{NFSU2_TR(0x5a23e5);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a23e6:{NFSU2_TR(0x5a23e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5a23ea:{NFSU2_TR(0x5a23ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a23eb:{NFSU2_TR(0x5a23eb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a23f0ull));
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
PN u32 blk_5a23f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a23f0:L5a23f0:{bud-=37;NFSU2_TR(0x5a23f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a23f3:{NFSU2_TR(0x5a23f3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B5a23f6:{NFSU2_TR(0x5a23f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B5a23f9:{NFSU2_TR(0x5a23f9);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a23ff:{NFSU2_TR(0x5a23ff);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5a2405:{NFSU2_TR(0x5a2405);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5a2408:{NFSU2_TR(0x5a2408);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a240c:{NFSU2_TR(0x5a240c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5a240f:{NFSU2_TR(0x5a240f);
{u32 ea_=u32(r4(R+24)+r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2413:{NFSU2_TR(0x5a2413);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2417:{NFSU2_TR(0x5a2417);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a2419:{NFSU2_TR(0x5a2419);
u8 U[12];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B5a241d:{NFSU2_TR(0x5a241d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a241f:{NFSU2_TR(0x5a241f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2423:{NFSU2_TR(0x5a2423);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a2425:{NFSU2_TR(0x5a2425);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B5a2428:{NFSU2_TR(0x5a2428);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a242a:{NFSU2_TR(0x5a242a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a242e:{NFSU2_TR(0x5a242e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2430:{NFSU2_TR(0x5a2430);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2432:{NFSU2_TR(0x5a2432);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5a2434:{NFSU2_TR(0x5a2434);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2436:{NFSU2_TR(0x5a2436);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5a243c:{NFSU2_TR(0x5a243c);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a2440:{NFSU2_TR(0x5a2440);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2442:{NFSU2_TR(0x5a2442);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2446:{NFSU2_TR(0x5a2446);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a244a:{NFSU2_TR(0x5a244a);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a244e:{NFSU2_TR(0x5a244e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2450:{NFSU2_TR(0x5a2450);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a2452:{NFSU2_TR(0x5a2452);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2456:{NFSU2_TR(0x5a2456);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5a2458:{NFSU2_TR(0x5a2458);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a245c:{NFSU2_TR(0x5a245c);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a2460:{NFSU2_TR(0x5a2460);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2462:{NFSU2_TR(0x5a2462);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2465:{NFSU2_TR(0x5a2465);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a25c2(ARGS);}}
}
B5a246b:L5a246b:{bud-=3;NFSU2_TR(0x5a246b);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a246f:{NFSU2_TR(0x5a246f);
{u32 ea_=u32(u32(8003700u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2475:{NFSU2_TR(0x5a2475);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a247aull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a247a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a247a:L5a247a:{bud-=7;NFSU2_TR(0x5a247a);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a247e:{NFSU2_TR(0x5a247e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2484:{NFSU2_TR(0x5a2484);
__builtin_memmove((G+4),(G+0),4);
}
B5a2486:{NFSU2_TR(0x5a2486);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a248a:{NFSU2_TR(0x5a248a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a248c:{NFSU2_TR(0x5a248c);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a248f:{NFSU2_TR(0x5a248f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a24a4(ARGS);}}
}
B5a2491:L5a2491:{bud-=2;NFSU2_TR(0x5a2491);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5a2494:{NFSU2_TR(0x5a2494);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5a249f(ARGS);}}
}
B5a2496:L5a2496:{bud-=2;NFSU2_TR(0x5a2496);
w4(G+4,u32(0x7ull));
}
B5a249b:{NFSU2_TR(0x5a249b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5a249f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a249f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a249f:L5a249f:{bud-=2;NFSU2_TR(0x5a249f);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a24a2:{NFSU2_TR(0x5a24a2);
{[[clang::musttail]] return blk_5a24b5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a24a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a24a4:L5a24a4:{bud-=2;NFSU2_TR(0x5a24a4);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0xfffffff9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff9ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a24a7:{NFSU2_TR(0x5a24a7);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a24b2(ARGS);}}
}
B5a24a9:L5a24a9:{bud-=2;NFSU2_TR(0x5a24a9);
w4(G+4,u32(0xfffffff9ull));
}
B5a24ae:{NFSU2_TR(0x5a24ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5a24b2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a24b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a24b2:L5a24b2:{bud-=1;NFSU2_TR(0x5a24b2);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
{[[clang::musttail]] return blk_5a24b5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a24b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a24b5:L5a24b5:{bud-=32;NFSU2_TR(0x5a24b5);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a24b9:{NFSU2_TR(0x5a24b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a24bd:{NFSU2_TR(0x5a24bd);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a24c3:{NFSU2_TR(0x5a24c3);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a24c7:{NFSU2_TR(0x5a24c7);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a24cb:{NFSU2_TR(0x5a24cb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a24d1:{NFSU2_TR(0x5a24d1);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a24d3:{NFSU2_TR(0x5a24d3);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a24d7:{NFSU2_TR(0x5a24d7);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a24db:{NFSU2_TR(0x5a24db);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a24e1:{NFSU2_TR(0x5a24e1);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a24e5:{NFSU2_TR(0x5a24e5);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a24e9:{NFSU2_TR(0x5a24e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a24ef:{NFSU2_TR(0x5a24ef);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a24f1:{NFSU2_TR(0x5a24f1);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a24f5:{NFSU2_TR(0x5a24f5);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a24f9:{NFSU2_TR(0x5a24f9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a24fb:{NFSU2_TR(0x5a24fb);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a24ff:{NFSU2_TR(0x5a24ff);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2503:{NFSU2_TR(0x5a2503);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2505:{NFSU2_TR(0x5a2505);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2509:{NFSU2_TR(0x5a2509);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5a250b:{NFSU2_TR(0x5a250b);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a250f:{NFSU2_TR(0x5a250f);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2513:{NFSU2_TR(0x5a2513);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2515:{NFSU2_TR(0x5a2515);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5a2517:{NFSU2_TR(0x5a2517);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2519:{NFSU2_TR(0x5a2519);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a251b:{NFSU2_TR(0x5a251b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2521:{NFSU2_TR(0x5a2521);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2524:{NFSU2_TR(0x5a2524);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2526:{NFSU2_TR(0x5a2526);
if(r1(F+2)){{[[clang::musttail]] return blk_5a2575(ARGS);}}
}
B5a2528:L5a2528:{bud-=4;NFSU2_TR(0x5a2528);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a252b:{NFSU2_TR(0x5a252b);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a252f:{NFSU2_TR(0x5a252f);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2532:{NFSU2_TR(0x5a2532);
if(r1(F+2)){{[[clang::musttail]] return blk_5a2551(ARGS);}}
}
B5a2534:L5a2534:{bud-=8;NFSU2_TR(0x5a2534);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2536:{NFSU2_TR(0x5a2536);
{u32 ea_=u32(r4(R+24)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a253a:{NFSU2_TR(0x5a253a);
w4(R+24,u32(0x18ull));
}
B5a253f:{NFSU2_TR(0x5a253f);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2543:{NFSU2_TR(0x5a2543);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B5a2545:{NFSU2_TR(0x5a2545);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2548:{NFSU2_TR(0x5a2548);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a254c:{NFSU2_TR(0x5a254c);
{[[clang::musttail]] return blk_5a26e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2551(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2551:L5a2551:{bud-=4;NFSU2_TR(0x5a2551);
{u32 ea_=u32(r4(R+24)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2555:{NFSU2_TR(0x5a2555);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2558:{NFSU2_TR(0x5a2558);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x8000003full))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B5a255e:{NFSU2_TR(0x5a255e);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2565(ARGS);}}
}
B5a2560:L5a2560:{bud-=3;NFSU2_TR(0x5a2560);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5a2561:{NFSU2_TR(0x5a2561);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffc0ull))));
}
B5a2564:{NFSU2_TR(0x5a2564);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5a2565(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2565(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2565:L5a2565:{bud-=4;NFSU2_TR(0x5a2565);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2569:{NFSU2_TR(0x5a2569);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a256c:{NFSU2_TR(0x5a256c);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2570:{NFSU2_TR(0x5a2570);
{[[clang::musttail]] return blk_5a26e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2575(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2575:L5a2575:{bud-=4;NFSU2_TR(0x5a2575);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2578:{NFSU2_TR(0x5a2578);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a257c:{NFSU2_TR(0x5a257c);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a257f:{NFSU2_TR(0x5a257f);
if(r1(F+2)){{[[clang::musttail]] return blk_5a259e(ARGS);}}
}
B5a2581:L5a2581:{bud-=8;NFSU2_TR(0x5a2581);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2583:{NFSU2_TR(0x5a2583);
{u32 ea_=u32(r4(R+24)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2587:{NFSU2_TR(0x5a2587);
w4(R+24,u32(0x18ull));
}
B5a258c:{NFSU2_TR(0x5a258c);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2590:{NFSU2_TR(0x5a2590);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B5a2592:{NFSU2_TR(0x5a2592);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2595:{NFSU2_TR(0x5a2595);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2599:{NFSU2_TR(0x5a2599);
{[[clang::musttail]] return blk_5a26e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a259e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a259e:L5a259e:{bud-=4;NFSU2_TR(0x5a259e);
{u32 ea_=u32(r4(R+24)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a25a2:{NFSU2_TR(0x5a25a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a25a5:{NFSU2_TR(0x5a25a5);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x8000003full))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B5a25ab:{NFSU2_TR(0x5a25ab);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a25b2(ARGS);}}
}
B5a25ad:L5a25ad:{bud-=3;NFSU2_TR(0x5a25ad);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5a25ae:{NFSU2_TR(0x5a25ae);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffc0ull))));
}
B5a25b1:{NFSU2_TR(0x5a25b1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5a25b2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a25b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a25b2:L5a25b2:{bud-=4;NFSU2_TR(0x5a25b2);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a25b6:{NFSU2_TR(0x5a25b6);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a25b9:{NFSU2_TR(0x5a25b9);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a25bd:{NFSU2_TR(0x5a25bd);
{[[clang::musttail]] return blk_5a26e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a25c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a25c2:L5a25c2:{bud-=4;NFSU2_TR(0x5a25c2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a25c4:{NFSU2_TR(0x5a25c4);
{u32 ea_=u32(u32(8003700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a25ca:{NFSU2_TR(0x5a25ca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a25cc:{NFSU2_TR(0x5a25cc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a25d1ull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a25d1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a25d1:L5a25d1:{bud-=6;NFSU2_TR(0x5a25d1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a25d7:{NFSU2_TR(0x5a25d7);
__builtin_memmove((G+4),(G+0),4);
}
B5a25d9:{NFSU2_TR(0x5a25d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a25dd:{NFSU2_TR(0x5a25dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a25df:{NFSU2_TR(0x5a25df);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a25e2:{NFSU2_TR(0x5a25e2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a25f7(ARGS);}}
}
B5a25e4:L5a25e4:{bud-=2;NFSU2_TR(0x5a25e4);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5a25e7:{NFSU2_TR(0x5a25e7);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_5a25f2(ARGS);}}
}
B5a25e9:L5a25e9:{bud-=2;NFSU2_TR(0x5a25e9);
w4(G+4,u32(0x7ull));
}
B5a25ee:{NFSU2_TR(0x5a25ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5a25f2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a25f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a25f2:L5a25f2:{bud-=2;NFSU2_TR(0x5a25f2);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a25f5:{NFSU2_TR(0x5a25f5);
{[[clang::musttail]] return blk_5a2608(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a25f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a25f7:L5a25f7:{bud-=2;NFSU2_TR(0x5a25f7);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0xfffffff9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff9ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a25fa:{NFSU2_TR(0x5a25fa);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2605(ARGS);}}
}
B5a25fc:L5a25fc:{bud-=2;NFSU2_TR(0x5a25fc);
w4(G+4,u32(0xfffffff9ull));
}
B5a2601:{NFSU2_TR(0x5a2601);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5a2605(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2605(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2605:L5a2605:{bud-=1;NFSU2_TR(0x5a2605);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
{[[clang::musttail]] return blk_5a2608(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2608(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2608:L5a2608:{bud-=29;NFSU2_TR(0x5a2608);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a260c:{NFSU2_TR(0x5a260c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2610:{NFSU2_TR(0x5a2610);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2614:{NFSU2_TR(0x5a2614);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a261a:{NFSU2_TR(0x5a261a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a261c:{NFSU2_TR(0x5a261c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a261e:{NFSU2_TR(0x5a261e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a2624:{NFSU2_TR(0x5a2624);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2626:{NFSU2_TR(0x5a2626);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a262a:{NFSU2_TR(0x5a262a);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2630:{NFSU2_TR(0x5a2630);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a2634:{NFSU2_TR(0x5a2634);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2638:{NFSU2_TR(0x5a2638);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a263e:{NFSU2_TR(0x5a263e);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2640:{NFSU2_TR(0x5a2640);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2644:{NFSU2_TR(0x5a2644);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2648:{NFSU2_TR(0x5a2648);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a264a:{NFSU2_TR(0x5a264a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a264c:{NFSU2_TR(0x5a264c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a264e:{NFSU2_TR(0x5a264e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2650:{NFSU2_TR(0x5a2650);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2654:{NFSU2_TR(0x5a2654);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2658:{NFSU2_TR(0x5a2658);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a265c:{NFSU2_TR(0x5a265c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a265e:{NFSU2_TR(0x5a265e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2660:{NFSU2_TR(0x5a2660);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5a2662:{NFSU2_TR(0x5a2662);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2664:{NFSU2_TR(0x5a2664);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2667:{NFSU2_TR(0x5a2667);
if(r1(F+2)){{[[clang::musttail]] return blk_5a26ab(ARGS);}}
}
B5a2669:L5a2669:{bud-=6;NFSU2_TR(0x5a2669);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a266d:{NFSU2_TR(0x5a266d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2673:{NFSU2_TR(0x5a2673);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2676:{NFSU2_TR(0x5a2676);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2678:{NFSU2_TR(0x5a2678);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a267b:{NFSU2_TR(0x5a267b);
if(r1(F+2)){{[[clang::musttail]] return blk_5a2693(ARGS);}}
}
B5a267d:L5a267d:{bud-=7;NFSU2_TR(0x5a267d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2681:{NFSU2_TR(0x5a2681);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2683:{NFSU2_TR(0x5a2683);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2687:{NFSU2_TR(0x5a2687);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a268a:{NFSU2_TR(0x5a268a);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a268d:{NFSU2_TR(0x5a268d);
{u32 ea_=u32(r4(G+0)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2691:{NFSU2_TR(0x5a2691);
{[[clang::musttail]] return blk_5a26e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2693(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2693:L5a2693:{bud-=7;NFSU2_TR(0x5a2693);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2697:{NFSU2_TR(0x5a2697);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a269b:{NFSU2_TR(0x5a269b);
w4(R+24,u32(0x8ull));
}
B5a26a0:{NFSU2_TR(0x5a26a0);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a26a3:{NFSU2_TR(0x5a26a3);
w4(R+24,u32(u32(r4(R+24))-u32(r4(G+4))));
}
B5a26a5:{NFSU2_TR(0x5a26a5);
{u32 ea_=u32(r4(G+0)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a26a9:{NFSU2_TR(0x5a26a9);
{[[clang::musttail]] return blk_5a26e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a26ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a26ab:L5a26ab:{bud-=9;NFSU2_TR(0x5a26ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a26ad:{NFSU2_TR(0x5a26ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a26af:{NFSU2_TR(0x5a26af);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a26b3:{NFSU2_TR(0x5a26b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a26b9:{NFSU2_TR(0x5a26b9);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a26bd:{NFSU2_TR(0x5a26bd);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a26c0:{NFSU2_TR(0x5a26c0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a26c2:{NFSU2_TR(0x5a26c2);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a26c5:{NFSU2_TR(0x5a26c5);
if(r1(F+2)){{[[clang::musttail]] return blk_5a26ce(ARGS);}}
}
B5a26c7:L5a26c7:{bud-=3;NFSU2_TR(0x5a26c7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a26c9:{NFSU2_TR(0x5a26c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a26cc:{NFSU2_TR(0x5a26cc);
{[[clang::musttail]] return blk_5a26d5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a26ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a26ce:L5a26ce:{bud-=2;NFSU2_TR(0x5a26ce);
w4(R+24,u32(0x8ull));
}
B5a26d3:{NFSU2_TR(0x5a26d3);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
{[[clang::musttail]] return blk_5a26d5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a26d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a26d5:L5a26d5:{bud-=5;NFSU2_TR(0x5a26d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a26d9:{NFSU2_TR(0x5a26d9);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a26dd:{NFSU2_TR(0x5a26dd);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a26e1:{NFSU2_TR(0x5a26e1);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a26e4:{NFSU2_TR(0x5a26e4);
{u32 ea_=u32(r4(G+4)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a26e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a26e8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a26e8:L5a26e8:{bud-=8;NFSU2_TR(0x5a26e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a26ec:{NFSU2_TR(0x5a26ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7a1938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a26f2:{NFSU2_TR(0x5a26f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B5a26f5:{NFSU2_TR(0x5a26f5);
{u32 ea_=u32(r4(G+4)+r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a26f9:{NFSU2_TR(0x5a26f9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a26ff:{NFSU2_TR(0x5a26ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2701:{NFSU2_TR(0x5a2701);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2704:{NFSU2_TR(0x5a2704);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2712(ARGS);}}
}
B5a2706:L5a2706:{bud-=4;NFSU2_TR(0x5a2706);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2709:{NFSU2_TR(0x5a2709);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5a270c:{NFSU2_TR(0x5a270c);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5a2710:{NFSU2_TR(0x5a2710);
{[[clang::musttail]] return blk_5a271b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2712(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2712:L5a2712:{bud-=3;NFSU2_TR(0x5a2712);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2715:{NFSU2_TR(0x5a2715);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2717:{NFSU2_TR(0x5a2717);
{u32 ea_=u32(r4(G+4)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a271b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a271b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a271b:L5a271b:{bud-=16;NFSU2_TR(0x5a271b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a271f:{NFSU2_TR(0x5a271f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2722:{NFSU2_TR(0x5a2722);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a2725:{NFSU2_TR(0x5a2725);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5a2729:{NFSU2_TR(0x5a2729);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a272a:{NFSU2_TR(0x5a272a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a272b:{NFSU2_TR(0x5a272b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a272f:{NFSU2_TR(0x5a272f);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5a2733:{NFSU2_TR(0x5a2733);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2736:{NFSU2_TR(0x5a2736);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2737:{NFSU2_TR(0x5a2737);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a273b:{NFSU2_TR(0x5a273b);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a273f:{NFSU2_TR(0x5a273f);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2742:{NFSU2_TR(0x5a2742);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a2746:{NFSU2_TR(0x5a2746);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a274a:{NFSU2_TR(0x5a274a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a274full));
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
PN u32 blk_5a274f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a274f:L5a274f:{bud-=16;NFSU2_TR(0x5a274f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2752:{NFSU2_TR(0x5a2752);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2756:{NFSU2_TR(0x5a2756);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a275a:{NFSU2_TR(0x5a275a);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0xcull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0xcull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a275d:{NFSU2_TR(0x5a275d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2760:{NFSU2_TR(0x5a2760);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2764:{NFSU2_TR(0x5a2764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2765:{NFSU2_TR(0x5a2765);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2768:{NFSU2_TR(0x5a2768);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a276b:{NFSU2_TR(0x5a276b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2772:{NFSU2_TR(0x5a2772);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2776:{NFSU2_TR(0x5a2776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2777:{NFSU2_TR(0x5a2777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2778:{NFSU2_TR(0x5a2778);
__builtin_memmove((G+16),(R+20),4);
}
B5a277a:{NFSU2_TR(0x5a277a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a277b:{NFSU2_TR(0x5a277b);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
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
PN u32 blk_5a2780(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2780:L5a2780:{bud-=13;NFSU2_TR(0x5a2780);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2781:{NFSU2_TR(0x5a2781);
__builtin_memmove((R+20),(G+16),4);
}
B5a2783:{NFSU2_TR(0x5a2783);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B5a2786:{NFSU2_TR(0x5a2786);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x18ull))));
}
B5a2789:{NFSU2_TR(0x5a2789);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a278c:{NFSU2_TR(0x5a278c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a278f:{NFSU2_TR(0x5a278f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B5a2792:{NFSU2_TR(0x5a2792);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2793:{NFSU2_TR(0x5a2793);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B5a2796:{NFSU2_TR(0x5a2796);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5a2799:{NFSU2_TR(0x5a2799);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1938ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a279f:{NFSU2_TR(0x5a279f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a27a0:{NFSU2_TR(0x5a27a0);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a27ae(ARGS);}}
}
B5a27a2:L5a27a2:{bud-=4;NFSU2_TR(0x5a27a2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5a27a5:{NFSU2_TR(0x5a27a5);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5a27a9:{NFSU2_TR(0x5a27a9);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x40ull))));
}
B5a27ac:{NFSU2_TR(0x5a27ac);
{[[clang::musttail]] return blk_5a27b7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a27ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a27ae:L5a27ae:{bud-=3;NFSU2_TR(0x5a27ae);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a27b1:{NFSU2_TR(0x5a27b1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a27b3:{NFSU2_TR(0x5a27b3);
{u32 ea_=u32((r4(R+24)*4u)+r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a27b7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a27b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a27b7:L5a27b7:{bud-=2;NFSU2_TR(0x5a27b7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5a27ba:{NFSU2_TR(0x5a27ba);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_5a2839(ARGS);}}
}
B5a27bc:L5a27bc:{bud-=2;NFSU2_TR(0x5a27bc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5a27bf:{NFSU2_TR(0x5a27bf);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_5a2805(ARGS);}}
}
B5a27c1:L5a27c1:{bud-=18;NFSU2_TR(0x5a27c1);
w4(R+24,u32(0x8ull));
}
B5a27c6:{NFSU2_TR(0x5a27c6);
u8 U[6];
w1(F+0,u8((r4(R+24))<(r4(R+8))));
w1(F+11,sborrow<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a27c8:{NFSU2_TR(0x5a27c8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a27ce:{NFSU2_TR(0x5a27ce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a27d2:{NFSU2_TR(0x5a27d2);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a27d6:{NFSU2_TR(0x5a27d6);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a27da:{NFSU2_TR(0x5a27da);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a27e0:{NFSU2_TR(0x5a27e0);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a27e6:{NFSU2_TR(0x5a27e6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a27e8:{NFSU2_TR(0x5a27e8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a27ea:{NFSU2_TR(0x5a27ea);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a27ec:{NFSU2_TR(0x5a27ec);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a27f2:{NFSU2_TR(0x5a27f2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a27f4:{NFSU2_TR(0x5a27f4);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a27f7:{NFSU2_TR(0x5a27f7);
{u32 ea_=u32((r4(G+0)*4u)+r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a27fb:{NFSU2_TR(0x5a27fb);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a27fd:{NFSU2_TR(0x5a27fd);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2800:{NFSU2_TR(0x5a2800);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5a28b8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2805(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2805:L5a2805:{bud-=15;NFSU2_TR(0x5a2805);
w4(R+24,u32(0x18ull));
}
B5a280a:{NFSU2_TR(0x5a280a);
u8 U[6];
w1(F+0,u8((r4(R+24))<(r4(R+8))));
w1(F+11,sborrow<u32>(r4(R+24),r4(R+8)));
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a280c:{NFSU2_TR(0x5a280c);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2812:{NFSU2_TR(0x5a2812);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2816:{NFSU2_TR(0x5a2816);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a281a:{NFSU2_TR(0x5a281a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a281e:{NFSU2_TR(0x5a281e);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2824:{NFSU2_TR(0x5a2824);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a2826:{NFSU2_TR(0x5a2826);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a2828:{NFSU2_TR(0x5a2828);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a282a:{NFSU2_TR(0x5a282a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a2830:{NFSU2_TR(0x5a2830);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2832:{NFSU2_TR(0x5a2832);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2835:{NFSU2_TR(0x5a2835);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2837:{NFSU2_TR(0x5a2837);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5a28a9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2839(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2839:L5a2839:{bud-=2;NFSU2_TR(0x5a2839);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B5a283c:{NFSU2_TR(0x5a283c);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_5a287d(ARGS);}}
}
B5a283e:L5a283e:{bud-=18;NFSU2_TR(0x5a283e);
u8 U[6];
w1(F+0,carry<u32>(r4(R+8),u32(0xffffffd8ull)));
w1(F+11,scarry<u32>(r4(R+8),u32(0xffffffd8ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xffffffd8ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2841:{NFSU2_TR(0x5a2841);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2845:{NFSU2_TR(0x5a2845);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a2849:{NFSU2_TR(0x5a2849);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a284f:{NFSU2_TR(0x5a284f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a2853:{NFSU2_TR(0x5a2853);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2859:{NFSU2_TR(0x5a2859);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a285f:{NFSU2_TR(0x5a285f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a2861:{NFSU2_TR(0x5a2861);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a2863:{NFSU2_TR(0x5a2863);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a2865:{NFSU2_TR(0x5a2865);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a286b:{NFSU2_TR(0x5a286b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a286d:{NFSU2_TR(0x5a286d);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2870:{NFSU2_TR(0x5a2870);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5a2872:{NFSU2_TR(0x5a2872);
{u32 ea_=u32((r4(G+0)*4u)+r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2876:{NFSU2_TR(0x5a2876);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2878:{NFSU2_TR(0x5a2878);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a287b:{NFSU2_TR(0x5a287b);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5a28b8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a287d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a287d:L5a287d:{bud-=12;NFSU2_TR(0x5a287d);
u8 U[6];
w1(F+0,carry<u32>(r4(R+8),u32(0xffffffc8ull)));
w1(F+11,scarry<u32>(r4(R+8),u32(0xffffffc8ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xffffffc8ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2880:{NFSU2_TR(0x5a2880);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2884:{NFSU2_TR(0x5a2884);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a2888:{NFSU2_TR(0x5a2888);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a288e:{NFSU2_TR(0x5a288e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5a2892:{NFSU2_TR(0x5a2892);
{u32 ea_=u32(u32(8003696u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2898:{NFSU2_TR(0x5a2898);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5a289a:{NFSU2_TR(0x5a289a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a289c:{NFSU2_TR(0x5a289c);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5a289e:{NFSU2_TR(0x5a289e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5a28a4:{NFSU2_TR(0x5a28a4);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a28a6:{NFSU2_TR(0x5a28a6);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5a28a9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a28a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a28a9:L5a28a9:{bud-=4;NFSU2_TR(0x5a28a9);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7a1930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a28af:{NFSU2_TR(0x5a28af);
{u32 ea_=u32((r4(G+0)*4u)+r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28b3:{NFSU2_TR(0x5a28b3);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a28b6:{NFSU2_TR(0x5a28b6);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a28b8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a28b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a28b8:L5a28b8:{bud-=20;NFSU2_TR(0x5a28b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a28bb:{NFSU2_TR(0x5a28bb);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28bd:{NFSU2_TR(0x5a28bd);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a28c1:{NFSU2_TR(0x5a28c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a28c2:{NFSU2_TR(0x5a28c2);
{u32 ea_=u32(r4(G+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a28c5:{NFSU2_TR(0x5a28c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a28c6:{NFSU2_TR(0x5a28c6);
{u32 ea_=u32(r4(G+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a28c9:{NFSU2_TR(0x5a28c9);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a28cd:{NFSU2_TR(0x5a28cd);
{u32 ea_=u32(r4(G+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a28d0:{NFSU2_TR(0x5a28d0);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a28d7:{NFSU2_TR(0x5a28d7);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a28db:{NFSU2_TR(0x5a28db);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28df:{NFSU2_TR(0x5a28df);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a28e3:{NFSU2_TR(0x5a28e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a28e5:{NFSU2_TR(0x5a28e5);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a28e8:{NFSU2_TR(0x5a28e8);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28eb:{NFSU2_TR(0x5a28eb);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a28ee:{NFSU2_TR(0x5a28ee);
__builtin_memmove((G+16),(R+20),4);
}
B5a28f0:{NFSU2_TR(0x5a28f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a28f1:{NFSU2_TR(0x5a28f1);
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
PN u32 blk_5a2900(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2900:L5a2900:{bud-=13;NFSU2_TR(0x5a2900);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2901:{NFSU2_TR(0x5a2901);
__builtin_memmove((R+20),(G+16),4);
}
B5a2903:{NFSU2_TR(0x5a2903);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B5a2906:{NFSU2_TR(0x5a2906);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2907:{NFSU2_TR(0x5a2907);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2908:{NFSU2_TR(0x5a2908);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2909:{NFSU2_TR(0x5a2909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a290c:{NFSU2_TR(0x5a290c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a290d:{NFSU2_TR(0x5a290d);
__builtin_memmove((R+12),(G+4),4);
}
B5a290f:{NFSU2_TR(0x5a290f);
u8 U[4];
w4(U+0,u32(0x7a2078ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2914:{NFSU2_TR(0x5a2914);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2915:{NFSU2_TR(0x5a2915);
__builtin_memmove((G+4),(R+24),4);
}
B5a2917:{NFSU2_TR(0x5a2917);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a291cull));
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
PN u32 blk_5a291c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a291c:L5a291c:{bud-=3;NFSU2_TR(0x5a291c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a291f:{NFSU2_TR(0x5a291f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2920:{NFSU2_TR(0x5a2920);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2925ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59b6f0u);}[[clang::musttail]] return blk_59b6f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2925(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2925:L5a2925:{bud-=3;NFSU2_TR(0x5a2925);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2928:{NFSU2_TR(0x5a2928);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2929:{NFSU2_TR(0x5a2929);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a292eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x598840u);}[[clang::musttail]] return blk_598840(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a292e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a292e:L5a292e:{bud-=4;NFSU2_TR(0x5a292e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B5a2931:{NFSU2_TR(0x5a2931);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(G+4,u8(u32(r1(G+4))|u32(r1(U+4))));
w1(F+6,u8((r1(G+4))==(u8(0x0ull))));
}
B5a2934:{NFSU2_TR(0x5a2934);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2937:{NFSU2_TR(0x5a2937);
if(r1(F+6)){{[[clang::musttail]] return blk_5a2958(ARGS);}}
}
B5a2939:L5a2939:{bud-=10;NFSU2_TR(0x5a2939);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B5a293b:{NFSU2_TR(0x5a293b);
w4(R+8,u32(0x3f800000ull));
}
B5a2940:{NFSU2_TR(0x5a2940);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2943:{NFSU2_TR(0x5a2943);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2946:{NFSU2_TR(0x5a2946);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2949:{NFSU2_TR(0x5a2949);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a294c:{NFSU2_TR(0x5a294c);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a294f:{NFSU2_TR(0x5a294f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2952:{NFSU2_TR(0x5a2952);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2955:{NFSU2_TR(0x5a2955);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5a2958(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2958(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2958:L5a2958:{bud-=2;NFSU2_TR(0x5a2958);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a295b:{NFSU2_TR(0x5a295b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5a2963(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2963(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2963:L5a2963:{bud-=3;NFSU2_TR(0x5a2963);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2966:{NFSU2_TR(0x5a2966);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2967:{NFSU2_TR(0x5a2967);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a296cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59c980u);}[[clang::musttail]] return blk_59c980(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a296c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a296c:L5a296c:{bud-=6;NFSU2_TR(0x5a296c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a296e:{NFSU2_TR(0x5a296e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2970:{NFSU2_TR(0x5a2970);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2972:{NFSU2_TR(0x5a2972);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2973:{NFSU2_TR(0x5a2973);
__builtin_memmove((G+4),(R+24),4);
}
B5a2975:{NFSU2_TR(0x5a2975);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a297aull));
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
PN u32 blk_5a297a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a297a:L5a297a:{bud-=5;NFSU2_TR(0x5a297a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a297e:{NFSU2_TR(0x5a297e);
w1(F+0,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5a2981:{NFSU2_TR(0x5a2981);
u8 U[6];
w1(F+11,sborrow<u32>(r4(G+0),u32(0x1ull)));
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2982:{NFSU2_TR(0x5a2982);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2986:{NFSU2_TR(0x5a2986);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5a2963u);}[[clang::musttail]] return blk_5a2963(ARGS);}}
}
B5a2988:L5a2988:{bud-=3;NFSU2_TR(0x5a2988);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2989:{NFSU2_TR(0x5a2989);
__builtin_memmove((G+4),(R+12),4);
}
B5a298b:{NFSU2_TR(0x5a298b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2990ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x4031c0u);}[[clang::musttail]] return blk_4031c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2990(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2990:L5a2990:{bud-=2;NFSU2_TR(0x5a2990);
__builtin_memmove((G+4),(R+24),4);
}
B5a2992:{NFSU2_TR(0x5a2992);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2997ull));
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
PN u32 blk_5a2997(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2997:L5a2997:{bud-=6;NFSU2_TR(0x5a2997);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2998:{NFSU2_TR(0x5a2998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2999:{NFSU2_TR(0x5a2999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a299a:{NFSU2_TR(0x5a299a);
__builtin_memmove((G+16),(R+20),4);
}
B5a299c:{NFSU2_TR(0x5a299c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a299d:{NFSU2_TR(0x5a299d);
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
PN u32 blk_5a29a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a29a0:L5a29a0:{bud-=5;NFSU2_TR(0x5a29a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a29a1:{NFSU2_TR(0x5a29a1);
__builtin_memmove((R+24),(G+4),4);
}
B5a29a3:{NFSU2_TR(0x5a29a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a29a6:{NFSU2_TR(0x5a29a6);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B5a29a8:{NFSU2_TR(0x5a29a8);
if(r1(F+6)){{[[clang::musttail]] return blk_5a29c4(ARGS);}}
}
B5a29aa:L5a29aa:{bud-=9;NFSU2_TR(0x5a29aa);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29ad:{NFSU2_TR(0x5a29ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a29b0:{NFSU2_TR(0x5a29b0);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29b3:{NFSU2_TR(0x5a29b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+4),(U+0),4);
}
B5a29b5:{NFSU2_TR(0x5a29b5);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1f0ull))));
}
B5a29ba:{NFSU2_TR(0x5a29ba);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a29bc:{NFSU2_TR(0x5a29bc);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a29bf:{NFSU2_TR(0x5a29bf);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
}
B5a29c1:{NFSU2_TR(0x5a29c1);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a29c4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a29c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a29c4:L5a29c4:{bud-=2;NFSU2_TR(0x5a29c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a29c7:{NFSU2_TR(0x5a29c7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a29ccull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59b940u);}[[clang::musttail]] return blk_59b940(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a29cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a29cc:L5a29cc:{bud-=24;NFSU2_TR(0x5a29cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a29cf:{NFSU2_TR(0x5a29cf);
{u32 ea_=u32(r4(R+8)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29d5:{NFSU2_TR(0x5a29d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a29d8:{NFSU2_TR(0x5a29d8);
{u32 ea_=u32(r4(G+0)+u32(488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a29de:{NFSU2_TR(0x5a29de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a29e1:{NFSU2_TR(0x5a29e1);
{u32 ea_=u32(r4(G+4)+u32(956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29e7:{NFSU2_TR(0x5a29e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a29ea:{NFSU2_TR(0x5a29ea);
{u32 ea_=u32(r4(R+8)+u32(492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a29f0:{NFSU2_TR(0x5a29f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a29f3:{NFSU2_TR(0x5a29f3);
{u32 ea_=u32(r4(G+0)+u32(960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a29f9:{NFSU2_TR(0x5a29f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a29fc:{NFSU2_TR(0x5a29fc);
{u32 ea_=u32(r4(G+4)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2a02:{NFSU2_TR(0x5a2a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2a05:{NFSU2_TR(0x5a2a05);
{u32 ea_=u32(r4(R+8)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a0b:{NFSU2_TR(0x5a2a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2a0e:{NFSU2_TR(0x5a2a0e);
{u32 ea_=u32(r4(G+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2a14:{NFSU2_TR(0x5a2a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2a17:{NFSU2_TR(0x5a2a17);
{u32 ea_=u32(r4(G+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a1d:{NFSU2_TR(0x5a2a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2a20:{NFSU2_TR(0x5a2a20);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a26:{NFSU2_TR(0x5a2a26);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a2a28:{NFSU2_TR(0x5a2a28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2a2a:{NFSU2_TR(0x5a2a2a);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2a2d:{NFSU2_TR(0x5a2a2d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2a37(ARGS);}}
}
B5a2a2f:L5a2a2f:{bud-=2;NFSU2_TR(0x5a2a2f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2a31:{NFSU2_TR(0x5a2a31);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a2a37(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2a37(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2a37:L5a2a37:{bud-=10;NFSU2_TR(0x5a2a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B5a2a39:{NFSU2_TR(0x5a2a39);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a3c:{NFSU2_TR(0x5a2a3c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2a3d:{NFSU2_TR(0x5a2a3d);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5a2a40:{NFSU2_TR(0x5a2a40);
{u32 ea_=u32(r4(G+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2a43:{NFSU2_TR(0x5a2a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2a46:{NFSU2_TR(0x5a2a46);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a2a48:{NFSU2_TR(0x5a2a48);
{u32 ea_=u32(r4(G+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2a4b:{NFSU2_TR(0x5a2a4b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2a4d:{NFSU2_TR(0x5a2a4d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2a52ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5989f0u);}[[clang::musttail]] return blk_5989f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2a52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2a52:L5a2a52:{bud-=2;NFSU2_TR(0x5a2a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2a53:{NFSU2_TR(0x5a2a53);
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
PN u32 blk_5a2a60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2a60:L5a2a60:{bud-=13;NFSU2_TR(0x5a2a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2a61:{NFSU2_TR(0x5a2a61);
__builtin_memmove((R+24),(G+4),4);
}
B5a2a63:{NFSU2_TR(0x5a2a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2a66:{NFSU2_TR(0x5a2a66);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5a2a6d:{NFSU2_TR(0x5a2a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2a70:{NFSU2_TR(0x5a2a70);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2a77:{NFSU2_TR(0x5a2a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2a7a:{NFSU2_TR(0x5a2a7a);
{u32 ea_=u32(r4(G+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2a80:{NFSU2_TR(0x5a2a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2a83:{NFSU2_TR(0x5a2a83);
{u32 ea_=u32(r4(G+4)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2a89:{NFSU2_TR(0x5a2a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2a8c:{NFSU2_TR(0x5a2a8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2a8e:{NFSU2_TR(0x5a2a8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2a91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2a91(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2a91:L5a2a91:{bud-=18;NFSU2_TR(0x5a2a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2a94:{NFSU2_TR(0x5a2a94);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2a9a:{NFSU2_TR(0x5a2a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2a9d:{NFSU2_TR(0x5a2a9d);
{u32 ea_=u32(r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2aa3:{NFSU2_TR(0x5a2aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2aa6:{NFSU2_TR(0x5a2aa6);
{u32 ea_=u32(r4(G+0)+u32(300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2aac:{NFSU2_TR(0x5a2aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2aaf:{NFSU2_TR(0x5a2aaf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2ab1:{NFSU2_TR(0x5a2ab1);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xd0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5a2ab7:{NFSU2_TR(0x5a2ab7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2ab8:{NFSU2_TR(0x5a2ab8);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5a2abb:{NFSU2_TR(0x5a2abb);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5a2abe:{NFSU2_TR(0x5a2abe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2abf:{NFSU2_TR(0x5a2abf);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2ac0:{NFSU2_TR(0x5a2ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2ac3:{NFSU2_TR(0x5a2ac3);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
}
B5a2ac6:{NFSU2_TR(0x5a2ac6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2ac7:{NFSU2_TR(0x5a2ac7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2accull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59b9b0u);}[[clang::musttail]] return blk_59b9b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2acc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2acc:L5a2acc:{bud-=12;NFSU2_TR(0x5a2acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2acf:{NFSU2_TR(0x5a2acf);
{u32 ea_=u32(r4(G+0)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ad5:{NFSU2_TR(0x5a2ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2ad8:{NFSU2_TR(0x5a2ad8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x10ull))));
}
B5a2adb:{NFSU2_TR(0x5a2adb);
{u32 ea_=u32(r4(G+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2adf:{NFSU2_TR(0x5a2adf);
{u32 ea_=u32(r4(G+0)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ae5:{NFSU2_TR(0x5a2ae5);
{u32 ea_=u32(r4(G+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2ae9:{NFSU2_TR(0x5a2ae9);
{u32 ea_=u32(r4(G+0)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2aef:{NFSU2_TR(0x5a2aef);
{u32 ea_=u32(r4(G+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2af3:{NFSU2_TR(0x5a2af3);
{u32 ea_=u32(r4(G+0)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2af9:{NFSU2_TR(0x5a2af9);
{u32 ea_=u32(r4(G+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2afc:{NFSU2_TR(0x5a2afc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2b01ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x598a70u);}[[clang::musttail]] return blk_598a70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2b01(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2b01:L5a2b01:{bud-=9;NFSU2_TR(0x5a2b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2b04:{NFSU2_TR(0x5a2b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2b07:{NFSU2_TR(0x5a2b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2b0d:{NFSU2_TR(0x5a2b0d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2b13:{NFSU2_TR(0x5a2b13);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2b19:{NFSU2_TR(0x5a2b19);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2b1f:{NFSU2_TR(0x5a2b1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2b21:{NFSU2_TR(0x5a2b21);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2b24:{NFSU2_TR(0x5a2b24);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2b2e(ARGS);}}
}
B5a2b26:L5a2b26:{bud-=2;NFSU2_TR(0x5a2b26);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2b2c:{NFSU2_TR(0x5a2b2c);
{[[clang::musttail]] return blk_5a2b37(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2b2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2b2e:L5a2b2e:{bud-=2;NFSU2_TR(0x5a2b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2b31:{NFSU2_TR(0x5a2b31);
{u32 ea_=u32(r4(R+8)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a2b37(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2b37(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2b37:L5a2b37:{bud-=6;NFSU2_TR(0x5a2b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2b3a:{NFSU2_TR(0x5a2b3a);
u8 U[6];
w1(F+0,carry<u32>(r4(R+24),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2b3d:{NFSU2_TR(0x5a2b3d);
{u32 ea_=u32(r4(G+0)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2b43:{NFSU2_TR(0x5a2b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2b45:{NFSU2_TR(0x5a2b45);
__builtin_memmove((G+4),(R+24),4);
}
B5a2b47:{NFSU2_TR(0x5a2b47);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2b4aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2b4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2b4a:L5a2b4a:{bud-=4;NFSU2_TR(0x5a2b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B5a2b4c:{NFSU2_TR(0x5a2b4c);
__builtin_memmove((G+4),(R+24),4);
}
B5a2b4e:{NFSU2_TR(0x5a2b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2b4f:{NFSU2_TR(0x5a2b4f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2b60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2b60:L5a2b60:{bud-=26;NFSU2_TR(0x5a2b60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2b61:{NFSU2_TR(0x5a2b61);
__builtin_memmove((R+20),(G+16),4);
}
B5a2b63:{NFSU2_TR(0x5a2b63);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B5a2b66:{NFSU2_TR(0x5a2b66);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x44ull))));
}
B5a2b69:{NFSU2_TR(0x5a2b69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2b6a:{NFSU2_TR(0x5a2b6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2b6b:{NFSU2_TR(0x5a2b6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2b6c:{NFSU2_TR(0x5a2b6c);
__builtin_memmove((R+28),(G+4),4);
}
B5a2b6e:{NFSU2_TR(0x5a2b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5a2b71:{NFSU2_TR(0x5a2b71);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B5a2b78:{NFSU2_TR(0x5a2b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2b7b:{NFSU2_TR(0x5a2b7b);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5a2b82:{NFSU2_TR(0x5a2b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2b86:{NFSU2_TR(0x5a2b86);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a2b8a:{NFSU2_TR(0x5a2b8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2b8e:{NFSU2_TR(0x5a2b8e);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2b94:{NFSU2_TR(0x5a2b94);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2b98:{NFSU2_TR(0x5a2b98);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5a2b9c:{NFSU2_TR(0x5a2b9c);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2ba2:{NFSU2_TR(0x5a2ba2);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ba5:{NFSU2_TR(0x5a2ba5);
{u32 ea_=u32(u32(7909248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2bab:{NFSU2_TR(0x5a2bab);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2baf:{NFSU2_TR(0x5a2baf);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a2bb5:{NFSU2_TR(0x5a2bb5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2bb7:{NFSU2_TR(0x5a2bb7);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2bba:{NFSU2_TR(0x5a2bba);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2bc2(ARGS);}}
}
B5a2bbc:L5a2bbc:{bud-=1;NFSU2_TR(0x5a2bbc);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a2bc2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2bc2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2bc2:L5a2bc2:{bud-=5;NFSU2_TR(0x5a2bc2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a2bc4:{NFSU2_TR(0x5a2bc4);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5a2bca:{NFSU2_TR(0x5a2bca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2bcc:{NFSU2_TR(0x5a2bcc);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2bcf:{NFSU2_TR(0x5a2bcf);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2bdb(ARGS);}}
}
B5a2bd1:L5a2bd1:{bud-=3;NFSU2_TR(0x5a2bd1);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5a2bd3:{NFSU2_TR(0x5a2bd3);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2bd9:{NFSU2_TR(0x5a2bd9);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
{[[clang::musttail]] return blk_5a2bdb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2bdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2bdb:L5a2bdb:{bud-=10;NFSU2_TR(0x5a2bdb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5a2bdd:{NFSU2_TR(0x5a2bdd);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5a2bdf:{NFSU2_TR(0x5a2bdf);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2be3:{NFSU2_TR(0x5a2be3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5a2be5:{NFSU2_TR(0x5a2be5);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2be9:{NFSU2_TR(0x5a2be9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2beb:{NFSU2_TR(0x5a2beb);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a2bef:{NFSU2_TR(0x5a2bef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2bf1:{NFSU2_TR(0x5a2bf1);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2bf4:{NFSU2_TR(0x5a2bf4);
if(r1(F+6)){{[[clang::musttail]] return blk_5a2bfc(ARGS);}}
}
B5a2bf6:L5a2bf6:{bud-=2;NFSU2_TR(0x5a2bf6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2bf8:{NFSU2_TR(0x5a2bf8);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a2bfc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2bfc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2bfc:L5a2bfc:{bud-=5;NFSU2_TR(0x5a2bfc);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c00:{NFSU2_TR(0x5a2c00);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5a2c02:{NFSU2_TR(0x5a2c02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2c04:{NFSU2_TR(0x5a2c04);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2c07:{NFSU2_TR(0x5a2c07);
if(r1(F+2)){{[[clang::musttail]] return blk_5a2c0f(ARGS);}}
}
B5a2c09:L5a2c09:{bud-=2;NFSU2_TR(0x5a2c09);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2c0b:{NFSU2_TR(0x5a2c0b);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a2c0f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2c0f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2c0f:L5a2c0f:{bud-=2;NFSU2_TR(0x5a2c0f);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2c15:{NFSU2_TR(0x5a2c15);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2c1aull));
{[[clang::musttail]] return blk_75bed4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2c1a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2c1a:L5a2c1a:{bud-=24;NFSU2_TR(0x5a2c1a);
__builtin_memmove((G+4),(G+0),4);
}
B5a2c1c:{NFSU2_TR(0x5a2c1c);
w4(G+0,u32(0xb60b60b7ull));
}
B5a2c21:{NFSU2_TR(0x5a2c21);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B5a2c23:{NFSU2_TR(0x5a2c23);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B5a2c25:{NFSU2_TR(0x5a2c25);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5a2c28:{NFSU2_TR(0x5a2c28);
__builtin_memmove((G+0),(R+8),4);
}
B5a2c2a:{NFSU2_TR(0x5a2c2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B5a2c2d:{NFSU2_TR(0x5a2c2d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B5a2c2f:{NFSU2_TR(0x5a2c2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2c36:{NFSU2_TR(0x5a2c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2c39:{NFSU2_TR(0x5a2c39);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2c3c:{NFSU2_TR(0x5a2c3c);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
}
B5a2c3f:{NFSU2_TR(0x5a2c3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2c42:{NFSU2_TR(0x5a2c42);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c45:{NFSU2_TR(0x5a2c45);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c48:{NFSU2_TR(0x5a2c48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2c4b:{NFSU2_TR(0x5a2c4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2c4d:{NFSU2_TR(0x5a2c4d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c50:{NFSU2_TR(0x5a2c50);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c53:{NFSU2_TR(0x5a2c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2c56:{NFSU2_TR(0x5a2c56);
u8 U[6];
w1(F+0,carry<u32>(r4(R+8),u32(0x30ull)));
w1(F+11,scarry<u32>(r4(R+8),u32(0x30ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2c59:{NFSU2_TR(0x5a2c59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2c5a:{NFSU2_TR(0x5a2c5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2c5b:{NFSU2_TR(0x5a2c5b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2c60ull));
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
PN u32 blk_5a2c60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2c60:L5a2c60:{bud-=6;NFSU2_TR(0x5a2c60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B5a2c62:{NFSU2_TR(0x5a2c62);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2c63:{NFSU2_TR(0x5a2c63);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5a2c67:{NFSU2_TR(0x5a2c67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2c68:{NFSU2_TR(0x5a2c68);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2c69:{NFSU2_TR(0x5a2c69);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2c6eull));
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
PN u32 blk_5a2c6e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2c6e:L5a2c6e:{bud-=16;NFSU2_TR(0x5a2c6e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c71:{NFSU2_TR(0x5a2c71);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2c75:{NFSU2_TR(0x5a2c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((G+0),(U+0),4);
}
B5a2c7b:{NFSU2_TR(0x5a2c7b);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c7e:{NFSU2_TR(0x5a2c7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2c7f:{NFSU2_TR(0x5a2c7f);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2c83:{NFSU2_TR(0x5a2c83);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2c86:{NFSU2_TR(0x5a2c86);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2c87:{NFSU2_TR(0x5a2c87);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2c8b:{NFSU2_TR(0x5a2c8b);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c8f:{NFSU2_TR(0x5a2c8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2c93:{NFSU2_TR(0x5a2c93);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2c95:{NFSU2_TR(0x5a2c95);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c98:{NFSU2_TR(0x5a2c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2c9b:{NFSU2_TR(0x5a2c9b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2c9e:{NFSU2_TR(0x5a2c9e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2ca3ull));
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
PN u32 blk_5a2ca3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2ca3:L5a2ca3:{bud-=41;NFSU2_TR(0x5a2ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2ca6:{NFSU2_TR(0x5a2ca6);
{u32 ea_=u32(r4(G+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cac:{NFSU2_TR(0x5a2cac);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2cb2:{NFSU2_TR(0x5a2cb2);
{u32 ea_=u32(r4(G+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cb8:{NFSU2_TR(0x5a2cb8);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0xa0ull))));
}
B5a2cbd:{NFSU2_TR(0x5a2cbd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2cbf:{NFSU2_TR(0x5a2cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2cc2:{NFSU2_TR(0x5a2cc2);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2cc5:{NFSU2_TR(0x5a2cc5);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2cc8:{NFSU2_TR(0x5a2cc8);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ccb:{NFSU2_TR(0x5a2ccb);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cce:{NFSU2_TR(0x5a2cce);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cd0:{NFSU2_TR(0x5a2cd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5a2cd7:{NFSU2_TR(0x5a2cd7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5a2cd9:{NFSU2_TR(0x5a2cd9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5a2cdb:{NFSU2_TR(0x5a2cdb);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5a2cdd:{NFSU2_TR(0x5a2cdd);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5a2cdf:{NFSU2_TR(0x5a2cdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2ce1:{NFSU2_TR(0x5a2ce1);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5a2ce3:{NFSU2_TR(0x5a2ce3);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5a2ce5:{NFSU2_TR(0x5a2ce5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2ce7:{NFSU2_TR(0x5a2ce7);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5a2ce9:{NFSU2_TR(0x5a2ce9);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5a2ceb:{NFSU2_TR(0x5a2ceb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2ced:{NFSU2_TR(0x5a2ced);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2cef:{NFSU2_TR(0x5a2cef);
{u32 ea_=u32(r4(R+24)+u32(1008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2cf5:{NFSU2_TR(0x5a2cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2cf8:{NFSU2_TR(0x5a2cf8);
{u32 ea_=u32(r4(G+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2cfe:{NFSU2_TR(0x5a2cfe);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2d04:{NFSU2_TR(0x5a2d04);
{u32 ea_=u32(r4(G+0)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2d0a:{NFSU2_TR(0x5a2d0a);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0xc0ull))));
}
B5a2d0f:{NFSU2_TR(0x5a2d0f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5a2d11:{NFSU2_TR(0x5a2d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d17:{NFSU2_TR(0x5a2d17);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2d1d:{NFSU2_TR(0x5a2d1d);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2d23:{NFSU2_TR(0x5a2d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2d26:{NFSU2_TR(0x5a2d26);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2d29:{NFSU2_TR(0x5a2d29);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2d2c:{NFSU2_TR(0x5a2d2c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2d2d:{NFSU2_TR(0x5a2d2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2d2e:{NFSU2_TR(0x5a2d2e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2d33ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c570u);}[[clang::musttail]] return blk_43c570(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2d33(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2d33:L5a2d33:{bud-=37;NFSU2_TR(0x5a2d33);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5a2d3a:{NFSU2_TR(0x5a2d3a);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2d3d:{NFSU2_TR(0x5a2d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2d40:{NFSU2_TR(0x5a2d40);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2d43:{NFSU2_TR(0x5a2d43);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
}
B5a2d46:{NFSU2_TR(0x5a2d46);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2d49:{NFSU2_TR(0x5a2d49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((G+4),(U+0),4);
}
B5a2d4f:{NFSU2_TR(0x5a2d4f);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2d52:{NFSU2_TR(0x5a2d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d56:{NFSU2_TR(0x5a2d56);
w4(G+4,u32(0xfffffc98ull));
}
B5a2d5b:{NFSU2_TR(0x5a2d5b);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+24))));
}
B5a2d5d:{NFSU2_TR(0x5a2d5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2d5f:{NFSU2_TR(0x5a2d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d63:{NFSU2_TR(0x5a2d63);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2d65:{NFSU2_TR(0x5a2d65);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B5a2d67:{NFSU2_TR(0x5a2d67);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2d6a:{NFSU2_TR(0x5a2d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3dcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d70:{NFSU2_TR(0x5a2d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d76:{NFSU2_TR(0x5a2d76);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d7a:{NFSU2_TR(0x5a2d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((G+0),(U+0),4);
}
B5a2d7d:{NFSU2_TR(0x5a2d7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2d7f:{NFSU2_TR(0x5a2d7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2d83:{NFSU2_TR(0x5a2d83);
w4(G+0,u32(0xfffffc68ull));
}
B5a2d88:{NFSU2_TR(0x5a2d88);
w4(R+8,u32(0xfffffc78ull));
}
B5a2d8d:{NFSU2_TR(0x5a2d8d);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B5a2d8f:{NFSU2_TR(0x5a2d8f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B5a2d91:{NFSU2_TR(0x5a2d91);
w4(G+4,u32(0xfffffca8ull));
}
B5a2d96:{NFSU2_TR(0x5a2d96);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x24ull))));
}
B5a2d99:{NFSU2_TR(0x5a2d99);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+24))));
}
B5a2d9b:{NFSU2_TR(0x5a2d9b);
{u32 ea_=u32(r4(R+24)+u32(1004u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2da1:{NFSU2_TR(0x5a2da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2dab:{NFSU2_TR(0x5a2dab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
w4(U+4,u32(0x90ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2db3:{NFSU2_TR(0x5a2db3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2db9:{NFSU2_TR(0x5a2db9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2dbd:{NFSU2_TR(0x5a2dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2dc1:{NFSU2_TR(0x5a2dc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2dc5:{NFSU2_TR(0x5a2dc5);
{[[clang::musttail]] return blk_5a2dd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2dc7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2dc7:L5a2dc7:{bud-=3;NFSU2_TR(0x5a2dc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2dcb:{NFSU2_TR(0x5a2dcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2dcf:{NFSU2_TR(0x5a2dcf);
{[[clang::musttail]] return blk_5a2dd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2dd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2dd0:L5a2dd0:{bud-=23;NFSU2_TR(0x5a2dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2dd3:{NFSU2_TR(0x5a2dd3);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B5a2dd5:{NFSU2_TR(0x5a2dd5);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2dd8:{NFSU2_TR(0x5a2dd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2ddc:{NFSU2_TR(0x5a2ddc);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2de0:{NFSU2_TR(0x5a2de0);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B5a2de2:{NFSU2_TR(0x5a2de2);
{u32 ea_=u32(r4(R+12)+u32(4294967112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2de8:{NFSU2_TR(0x5a2de8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5a2de9:{NFSU2_TR(0x5a2de9);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ded:{NFSU2_TR(0x5a2ded);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5a2df0:{NFSU2_TR(0x5a2df0);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B5a2df2:{NFSU2_TR(0x5a2df2);
w4(G+0,sar<u32>(r4(G+0),u64(u32(0x1ull))));
}
B5a2df4:{NFSU2_TR(0x5a2df4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B5a2df7:{NFSU2_TR(0x5a2df7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5a2df9:{NFSU2_TR(0x5a2df9);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2dfd:{NFSU2_TR(0x5a2dfd);
{u32 ea_=u32(r4(R+12)+r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2e00:{NFSU2_TR(0x5a2e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2e03:{NFSU2_TR(0x5a2e03);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2e0a:{NFSU2_TR(0x5a2e0a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2e0e:{NFSU2_TR(0x5a2e0e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5a2e12:{NFSU2_TR(0x5a2e12);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5a2e14:{NFSU2_TR(0x5a2e14);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2e17:{NFSU2_TR(0x5a2e17);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2e1f(ARGS);}}
}
B5a2e19:L5a2e19:{bud-=2;NFSU2_TR(0x5a2e19);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5a2e1b:{NFSU2_TR(0x5a2e1b);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a2e1f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2e1f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2e1f:L5a2e1f:{bud-=14;NFSU2_TR(0x5a2e1f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5a2e21:{NFSU2_TR(0x5a2e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e25:{NFSU2_TR(0x5a2e25);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B5a2e27:{NFSU2_TR(0x5a2e27);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((G+0),(U+4),2);
}
B5a2e2e:{NFSU2_TR(0x5a2e2e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2e2f:{NFSU2_TR(0x5a2e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2e33:{NFSU2_TR(0x5a2e33);
{u32 ea_=u32(r4(G+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2e36:{NFSU2_TR(0x5a2e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+4),(U+0),4);
}
B5a2e38:{NFSU2_TR(0x5a2e38);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2e39:{NFSU2_TR(0x5a2e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2e3d:{NFSU2_TR(0x5a2e3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2e3e:{NFSU2_TR(0x5a2e3e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2e3f:{NFSU2_TR(0x5a2e3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2e40:{NFSU2_TR(0x5a2e40);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2e45ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59cb90u);}[[clang::musttail]] return blk_59cb90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2e45(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2e45:L5a2e45:{bud-=12;NFSU2_TR(0x5a2e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e49:{NFSU2_TR(0x5a2e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2e4c:{NFSU2_TR(0x5a2e4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B5a2e4f:{NFSU2_TR(0x5a2e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e53:{NFSU2_TR(0x5a2e53);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5a2e5a:{NFSU2_TR(0x5a2e5a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B5a2e5d:{NFSU2_TR(0x5a2e5d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a2e61:{NFSU2_TR(0x5a2e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e65:{NFSU2_TR(0x5a2e65);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5a2e6c:{NFSU2_TR(0x5a2e6c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5a2e70:{NFSU2_TR(0x5a2e70);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2e72:{NFSU2_TR(0x5a2e72);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2e81(ARGS);}}
}
B5a2e74:L5a2e74:{bud-=2;NFSU2_TR(0x5a2e74);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2e76:{NFSU2_TR(0x5a2e76);
if(r1(F+6)){{[[clang::musttail]] return blk_5a2e92(ARGS);}}
}
B5a2e78:L5a2e78:{bud-=3;NFSU2_TR(0x5a2e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2e7e:{NFSU2_TR(0x5a2e7e);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B5a2e7f:{NFSU2_TR(0x5a2e7f);
{[[clang::musttail]] return blk_5a2e8c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2e81(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2e81:L5a2e81:{bud-=2;NFSU2_TR(0x5a2e81);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2e83:{NFSU2_TR(0x5a2e83);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2e92(ARGS);}}
}
B5a2e85:L5a2e85:{bud-=2;NFSU2_TR(0x5a2e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2e8b:{NFSU2_TR(0x5a2e8b);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
{[[clang::musttail]] return blk_5a2e8c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2e8c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2e8c:L5a2e8c:{bud-=1;NFSU2_TR(0x5a2e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5a2e92(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2e92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2e92:L5a2e92:{bud-=18;NFSU2_TR(0x5a2e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2e95:{NFSU2_TR(0x5a2e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2e99:{NFSU2_TR(0x5a2e99);
{u32 ea_=u32(r4(R+8)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2e9d:{NFSU2_TR(0x5a2e9d);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B5a2e9f:{NFSU2_TR(0x5a2e9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2ea1:{NFSU2_TR(0x5a2ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2ea5:{NFSU2_TR(0x5a2ea5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B5a2ea7:{NFSU2_TR(0x5a2ea7);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2eaa:{NFSU2_TR(0x5a2eaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2eae:{NFSU2_TR(0x5a2eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2eb5:{NFSU2_TR(0x5a2eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2eb8:{NFSU2_TR(0x5a2eb8);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B5a2eba:{NFSU2_TR(0x5a2eba);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ebd:{NFSU2_TR(0x5a2ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2ec1:{NFSU2_TR(0x5a2ec1);
{u32 ea_=u32(r4(R+12)+u32(4294967128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2ec7:{NFSU2_TR(0x5a2ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+0),(U+0),4);
}
B5a2ec9:{NFSU2_TR(0x5a2ec9);
u8 U[7];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B5a2ed0:{NFSU2_TR(0x5a2ed0);
if(r1(F+6)){{[[clang::musttail]] return blk_5a2eda(ARGS);}}
}
B5a2ed2:L5a2ed2:{bud-=2;NFSU2_TR(0x5a2ed2);
{u32 ea_=u32(r4(G+0)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ed8:{NFSU2_TR(0x5a2ed8);
{[[clang::musttail]] return blk_5a2ee0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2eda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2eda:L5a2eda:{bud-=1;NFSU2_TR(0x5a2eda);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5a2ee0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2ee0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2ee0:L5a2ee0:{bud-=25;NFSU2_TR(0x5a2ee0);
{u32 ea_=u32(r4(R+12)+u32(4294967144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2ee6:{NFSU2_TR(0x5a2ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2ee9:{NFSU2_TR(0x5a2ee9);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((G+0),(U+8),1);
}
B5a2eec:{NFSU2_TR(0x5a2eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2eee:{NFSU2_TR(0x5a2eee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2ef2:{NFSU2_TR(0x5a2ef2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a2ef8:{NFSU2_TR(0x5a2ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2efb:{NFSU2_TR(0x5a2efb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2eff:{NFSU2_TR(0x5a2eff);
{u32 ea_=u32(r4(R+8)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2f03:{NFSU2_TR(0x5a2f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+4),(U+0),4);
}
B5a2f05:{NFSU2_TR(0x5a2f05);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B5a2f07:{NFSU2_TR(0x5a2f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5a2f09:{NFSU2_TR(0x5a2f09);
{u32 ea_=u32(r4(G+4)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2f0f:{NFSU2_TR(0x5a2f0f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f15:{NFSU2_TR(0x5a2f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+0),(U+0),4);
}
B5a2f17:{NFSU2_TR(0x5a2f17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2f1b:{NFSU2_TR(0x5a2f1b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f21:{NFSU2_TR(0x5a2f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+0),(U+0),4);
}
B5a2f23:{NFSU2_TR(0x5a2f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2f26:{NFSU2_TR(0x5a2f26);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2f2a:{NFSU2_TR(0x5a2f2a);
u8 U[13];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((G+4),(U+12),1);
}
B5a2f31:{NFSU2_TR(0x5a2f31);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5a2f37:{NFSU2_TR(0x5a2f37);
__builtin_memmove((G+0),gp(0x89e7a0),4);
}
B5a2f3c:{NFSU2_TR(0x5a2f3c);
u8 U[4];
w1(F+11,sborrow<u32>(r4(G+0),u32(0x1130ull)));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x1130ull))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5a2f41:{NFSU2_TR(0x5a2f41);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2f4a(ARGS);}}
}
B5a2f43:L5a2f43:{bud-=2;NFSU2_TR(0x5a2f43);
u8 U[4];
w1(F+11,sborrow<u32>(r4(G+0),u32(0x1194ull)));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x1194ull))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5a2f48:{NFSU2_TR(0x5a2f48);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_5a2f69(ARGS);}}
{[[clang::musttail]] return blk_5a2f4a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2f4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2f4a:L5a2f4a:{bud-=2;NFSU2_TR(0x5a2f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2f4d:{NFSU2_TR(0x5a2f4d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2f52ull));
{[[clang::musttail]] return blk_5f67f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2f52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2f52:L5a2f52:{bud-=2;NFSU2_TR(0x5a2f52);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5a2f54:{NFSU2_TR(0x5a2f54);
if(r1(F+6)){{[[clang::musttail]] return blk_5a2f69(ARGS);}}
}
B5a2f56:L5a2f56:{bud-=7;NFSU2_TR(0x5a2f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2f59:{NFSU2_TR(0x5a2f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2f5c:{NFSU2_TR(0x5a2f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2f60:{NFSU2_TR(0x5a2f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+4),(U+0),4);
}
B5a2f62:{NFSU2_TR(0x5a2f62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2f63:{NFSU2_TR(0x5a2f63);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2f64:{NFSU2_TR(0x5a2f64);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5a2f69ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59dbb0u);}[[clang::musttail]] return blk_59dbb0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5a2f69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2f69:L5a2f69:{bud-=13;NFSU2_TR(0x5a2f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2f6d:{NFSU2_TR(0x5a2f6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2f71:{NFSU2_TR(0x5a2f71);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B5a2f72:{NFSU2_TR(0x5a2f72);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f76:{NFSU2_TR(0x5a2f76);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f7b:{NFSU2_TR(0x5a2f7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2f7f:{NFSU2_TR(0x5a2f7f);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B5a2f82:{NFSU2_TR(0x5a2f82);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x4ull))));
}
B5a2f85:{NFSU2_TR(0x5a2f85);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5a2f88:{NFSU2_TR(0x5a2f88);
u8 U[10];
w1(F+0,u8((r4(G+0))<(u32(0xb0ull))));
w1(F+11,sborrow<u32>(r4(G+0),u32(0xb0ull)));
w4(U+6,u32(u32(r4(G+0))-u32(u32(0xb0ull))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5a2f8d:{NFSU2_TR(0x5a2f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f91:{NFSU2_TR(0x5a2f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2f95:{NFSU2_TR(0x5a2f95);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5a2dc7u);}[[clang::musttail]] return blk_5a2dc7(ARGS);}}
}
B5a2f9b:L5a2f9b:{bud-=12;NFSU2_TR(0x5a2f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2f9e:{NFSU2_TR(0x5a2f9e);
{u32 ea_=u32(r4(R+8)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2fa4:{NFSU2_TR(0x5a2fa4);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5a2faa:{NFSU2_TR(0x5a2faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2fad:{NFSU2_TR(0x5a2fad);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2fb3:{NFSU2_TR(0x5a2fb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5a2fb4:{NFSU2_TR(0x5a2fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5a2fba:{NFSU2_TR(0x5a2fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5a2fbb:{NFSU2_TR(0x5a2fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5a2fbc:{NFSU2_TR(0x5a2fbc);
__builtin_memmove((G+16),(R+20),4);
}
B5a2fbe:{NFSU2_TR(0x5a2fbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5a2fbf:{NFSU2_TR(0x5a2fbf);
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
PN u32 blk_5a2fd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5a2fd0:L5a2fd0:{bud-=13;NFSU2_TR(0x5a2fd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2fd1:{NFSU2_TR(0x5a2fd1);
__builtin_memmove((R+20),(G+16),4);
}
B5a2fd3:{NFSU2_TR(0x5a2fd3);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B5a2fd6:{NFSU2_TR(0x5a2fd6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x74ull))));
}
B5a2fd9:{NFSU2_TR(0x5a2fd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2fda:{NFSU2_TR(0x5a2fda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2fdb:{NFSU2_TR(0x5a2fdb);
__builtin_memmove((R+24),(G+4),4);
}
B5a2fdd:{NFSU2_TR(0x5a2fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5a2fe0:{NFSU2_TR(0x5a2fe0);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5a2fe3:{NFSU2_TR(0x5a2fe3);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B5a2fe6:{NFSU2_TR(0x5a2fe6);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5a2fe8:{NFSU2_TR(0x5a2fe8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5a2fe9:{NFSU2_TR(0x5a2fe9);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5a3373(ARGS);}}
}
B5a2fef:L5a2fef:{bud-=4;NFSU2_TR(0x5a2fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5a2ff2:{NFSU2_TR(0x5a2ff2);
{u32 ea_=u32(r4(R+8)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5a2ff8:{NFSU2_TR(0x5a2ff8);
w1(G+4,u8(u32(r1(G+4))^u32(r1(G+4))));
}
B5a2ffa:{NFSU2_TR(0x5a2ffa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
{EXIT(0x5a3000u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_5a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x5a2001:[[clang::musttail]] return blk_5a2001(c,a4,a0,a1,bud);
case 0x5a2010:[[clang::musttail]] return blk_5a2010(c,a4,a0,a1,bud);
case 0x5a2060:[[clang::musttail]] return blk_5a2060(c,a4,a0,a1,bud);
case 0x5a20ad:[[clang::musttail]] return blk_5a20ad(c,a4,a0,a1,bud);
case 0x5a20c3:[[clang::musttail]] return blk_5a20c3(c,a4,a0,a1,bud);
case 0x5a20f3:[[clang::musttail]] return blk_5a20f3(c,a4,a0,a1,bud);
case 0x5a2100:[[clang::musttail]] return blk_5a2100(c,a4,a0,a1,bud);
case 0x5a2102:[[clang::musttail]] return blk_5a2102(c,a4,a0,a1,bud);
case 0x5a2133:[[clang::musttail]] return blk_5a2133(c,a4,a0,a1,bud);
case 0x5a2140:[[clang::musttail]] return blk_5a2140(c,a4,a0,a1,bud);
case 0x5a2142:[[clang::musttail]] return blk_5a2142(c,a4,a0,a1,bud);
case 0x5a2173:[[clang::musttail]] return blk_5a2173(c,a4,a0,a1,bud);
case 0x5a2180:[[clang::musttail]] return blk_5a2180(c,a4,a0,a1,bud);
case 0x5a2182:[[clang::musttail]] return blk_5a2182(c,a4,a0,a1,bud);
case 0x5a21bc:[[clang::musttail]] return blk_5a21bc(c,a4,a0,a1,bud);
case 0x5a21c9:[[clang::musttail]] return blk_5a21c9(c,a4,a0,a1,bud);
case 0x5a21cb:[[clang::musttail]] return blk_5a21cb(c,a4,a0,a1,bud);
case 0x5a21e7:[[clang::musttail]] return blk_5a21e7(c,a4,a0,a1,bud);
case 0x5a21f7:[[clang::musttail]] return blk_5a21f7(c,a4,a0,a1,bud);
case 0x5a2227:[[clang::musttail]] return blk_5a2227(c,a4,a0,a1,bud);
case 0x5a2234:[[clang::musttail]] return blk_5a2234(c,a4,a0,a1,bud);
case 0x5a2236:[[clang::musttail]] return blk_5a2236(c,a4,a0,a1,bud);
case 0x5a2240:[[clang::musttail]] return blk_5a2240(c,a4,a0,a1,bud);
case 0x5a226a:[[clang::musttail]] return blk_5a226a(c,a4,a0,a1,bud);
case 0x5a2280:[[clang::musttail]] return blk_5a2280(c,a4,a0,a1,bud);
case 0x5a22a1:[[clang::musttail]] return blk_5a22a1(c,a4,a0,a1,bud);
case 0x5a22c9:[[clang::musttail]] return blk_5a22c9(c,a4,a0,a1,bud);
case 0x5a22e3:[[clang::musttail]] return blk_5a22e3(c,a4,a0,a1,bud);
case 0x5a22f9:[[clang::musttail]] return blk_5a22f9(c,a4,a0,a1,bud);
case 0x5a232b:[[clang::musttail]] return blk_5a232b(c,a4,a0,a1,bud);
case 0x5a2360:[[clang::musttail]] return blk_5a2360(c,a4,a0,a1,bud);
case 0x5a2394:[[clang::musttail]] return blk_5a2394(c,a4,a0,a1,bud);
case 0x5a23d0:[[clang::musttail]] return blk_5a23d0(c,a4,a0,a1,bud);
case 0x5a23f0:[[clang::musttail]] return blk_5a23f0(c,a4,a0,a1,bud);
case 0x5a247a:[[clang::musttail]] return blk_5a247a(c,a4,a0,a1,bud);
case 0x5a249f:[[clang::musttail]] return blk_5a249f(c,a4,a0,a1,bud);
case 0x5a24a4:[[clang::musttail]] return blk_5a24a4(c,a4,a0,a1,bud);
case 0x5a24b2:[[clang::musttail]] return blk_5a24b2(c,a4,a0,a1,bud);
case 0x5a24b5:[[clang::musttail]] return blk_5a24b5(c,a4,a0,a1,bud);
case 0x5a2551:[[clang::musttail]] return blk_5a2551(c,a4,a0,a1,bud);
case 0x5a2565:[[clang::musttail]] return blk_5a2565(c,a4,a0,a1,bud);
case 0x5a2575:[[clang::musttail]] return blk_5a2575(c,a4,a0,a1,bud);
case 0x5a259e:[[clang::musttail]] return blk_5a259e(c,a4,a0,a1,bud);
case 0x5a25b2:[[clang::musttail]] return blk_5a25b2(c,a4,a0,a1,bud);
case 0x5a25c2:[[clang::musttail]] return blk_5a25c2(c,a4,a0,a1,bud);
case 0x5a25d1:[[clang::musttail]] return blk_5a25d1(c,a4,a0,a1,bud);
case 0x5a25f2:[[clang::musttail]] return blk_5a25f2(c,a4,a0,a1,bud);
case 0x5a25f7:[[clang::musttail]] return blk_5a25f7(c,a4,a0,a1,bud);
case 0x5a2605:[[clang::musttail]] return blk_5a2605(c,a4,a0,a1,bud);
case 0x5a2608:[[clang::musttail]] return blk_5a2608(c,a4,a0,a1,bud);
case 0x5a2693:[[clang::musttail]] return blk_5a2693(c,a4,a0,a1,bud);
case 0x5a26ab:[[clang::musttail]] return blk_5a26ab(c,a4,a0,a1,bud);
case 0x5a26ce:[[clang::musttail]] return blk_5a26ce(c,a4,a0,a1,bud);
case 0x5a26d5:[[clang::musttail]] return blk_5a26d5(c,a4,a0,a1,bud);
case 0x5a26e8:[[clang::musttail]] return blk_5a26e8(c,a4,a0,a1,bud);
case 0x5a2712:[[clang::musttail]] return blk_5a2712(c,a4,a0,a1,bud);
case 0x5a271b:[[clang::musttail]] return blk_5a271b(c,a4,a0,a1,bud);
case 0x5a274f:[[clang::musttail]] return blk_5a274f(c,a4,a0,a1,bud);
case 0x5a2780:[[clang::musttail]] return blk_5a2780(c,a4,a0,a1,bud);
case 0x5a27ae:[[clang::musttail]] return blk_5a27ae(c,a4,a0,a1,bud);
case 0x5a27b7:[[clang::musttail]] return blk_5a27b7(c,a4,a0,a1,bud);
case 0x5a2805:[[clang::musttail]] return blk_5a2805(c,a4,a0,a1,bud);
case 0x5a2839:[[clang::musttail]] return blk_5a2839(c,a4,a0,a1,bud);
case 0x5a287d:[[clang::musttail]] return blk_5a287d(c,a4,a0,a1,bud);
case 0x5a28a9:[[clang::musttail]] return blk_5a28a9(c,a4,a0,a1,bud);
case 0x5a28b8:[[clang::musttail]] return blk_5a28b8(c,a4,a0,a1,bud);
case 0x5a2900:[[clang::musttail]] return blk_5a2900(c,a4,a0,a1,bud);
case 0x5a291c:[[clang::musttail]] return blk_5a291c(c,a4,a0,a1,bud);
case 0x5a2925:[[clang::musttail]] return blk_5a2925(c,a4,a0,a1,bud);
case 0x5a292e:[[clang::musttail]] return blk_5a292e(c,a4,a0,a1,bud);
case 0x5a2958:[[clang::musttail]] return blk_5a2958(c,a4,a0,a1,bud);
case 0x5a2963:[[clang::musttail]] return blk_5a2963(c,a4,a0,a1,bud);
case 0x5a296c:[[clang::musttail]] return blk_5a296c(c,a4,a0,a1,bud);
case 0x5a297a:[[clang::musttail]] return blk_5a297a(c,a4,a0,a1,bud);
case 0x5a2990:[[clang::musttail]] return blk_5a2990(c,a4,a0,a1,bud);
case 0x5a2997:[[clang::musttail]] return blk_5a2997(c,a4,a0,a1,bud);
case 0x5a29a0:[[clang::musttail]] return blk_5a29a0(c,a4,a0,a1,bud);
case 0x5a29c4:[[clang::musttail]] return blk_5a29c4(c,a4,a0,a1,bud);
case 0x5a29cc:[[clang::musttail]] return blk_5a29cc(c,a4,a0,a1,bud);
case 0x5a2a37:[[clang::musttail]] return blk_5a2a37(c,a4,a0,a1,bud);
case 0x5a2a52:[[clang::musttail]] return blk_5a2a52(c,a4,a0,a1,bud);
case 0x5a2a60:[[clang::musttail]] return blk_5a2a60(c,a4,a0,a1,bud);
case 0x5a2a91:[[clang::musttail]] return blk_5a2a91(c,a4,a0,a1,bud);
case 0x5a2acc:[[clang::musttail]] return blk_5a2acc(c,a4,a0,a1,bud);
case 0x5a2b01:[[clang::musttail]] return blk_5a2b01(c,a4,a0,a1,bud);
case 0x5a2b2e:[[clang::musttail]] return blk_5a2b2e(c,a4,a0,a1,bud);
case 0x5a2b37:[[clang::musttail]] return blk_5a2b37(c,a4,a0,a1,bud);
case 0x5a2b4a:[[clang::musttail]] return blk_5a2b4a(c,a4,a0,a1,bud);
case 0x5a2b60:[[clang::musttail]] return blk_5a2b60(c,a4,a0,a1,bud);
case 0x5a2bc2:[[clang::musttail]] return blk_5a2bc2(c,a4,a0,a1,bud);
case 0x5a2bdb:[[clang::musttail]] return blk_5a2bdb(c,a4,a0,a1,bud);
case 0x5a2bfc:[[clang::musttail]] return blk_5a2bfc(c,a4,a0,a1,bud);
case 0x5a2c0f:[[clang::musttail]] return blk_5a2c0f(c,a4,a0,a1,bud);
case 0x5a2c1a:[[clang::musttail]] return blk_5a2c1a(c,a4,a0,a1,bud);
case 0x5a2c60:[[clang::musttail]] return blk_5a2c60(c,a4,a0,a1,bud);
case 0x5a2c6e:[[clang::musttail]] return blk_5a2c6e(c,a4,a0,a1,bud);
case 0x5a2ca3:[[clang::musttail]] return blk_5a2ca3(c,a4,a0,a1,bud);
case 0x5a2d33:[[clang::musttail]] return blk_5a2d33(c,a4,a0,a1,bud);
case 0x5a2dc7:[[clang::musttail]] return blk_5a2dc7(c,a4,a0,a1,bud);
case 0x5a2dd0:[[clang::musttail]] return blk_5a2dd0(c,a4,a0,a1,bud);
case 0x5a2e1f:[[clang::musttail]] return blk_5a2e1f(c,a4,a0,a1,bud);
case 0x5a2e45:[[clang::musttail]] return blk_5a2e45(c,a4,a0,a1,bud);
case 0x5a2e81:[[clang::musttail]] return blk_5a2e81(c,a4,a0,a1,bud);
case 0x5a2e8c:[[clang::musttail]] return blk_5a2e8c(c,a4,a0,a1,bud);
case 0x5a2e92:[[clang::musttail]] return blk_5a2e92(c,a4,a0,a1,bud);
case 0x5a2eda:[[clang::musttail]] return blk_5a2eda(c,a4,a0,a1,bud);
case 0x5a2ee0:[[clang::musttail]] return blk_5a2ee0(c,a4,a0,a1,bud);
case 0x5a2f4a:[[clang::musttail]] return blk_5a2f4a(c,a4,a0,a1,bud);
case 0x5a2f52:[[clang::musttail]] return blk_5a2f52(c,a4,a0,a1,bud);
case 0x5a2f69:[[clang::musttail]] return blk_5a2f69(c,a4,a0,a1,bud);
case 0x5a2fd0:[[clang::musttail]] return blk_5a2fd0(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_5a2(Cpu& c){u8* R=c.regs.data();return ent_5a2(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
