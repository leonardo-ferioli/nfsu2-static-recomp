#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71eca2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ed5e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71edbd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f01c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f045(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f065(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f082(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f090(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f091(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f0ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f0e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f11e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f168(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fb26(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fb9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fbdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fbe7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc07(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc1c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc7a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fc84(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcb4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcb7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcc3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcc6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcde(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcf3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fcf5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fd0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fd28(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fd43(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fd76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fd79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fd86(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fd89(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fdac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fdb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fdc7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fdda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fdff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe05(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe64(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe85(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe9f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fea4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71feb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71febd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fec9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fee1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fee3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fee8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71feea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff83(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ffa5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ffc4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ffd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ffeb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fff6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ffff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_720001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_720020(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_720031(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7350e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_735160(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_735620(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7357a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f021(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f043(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f08d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f093(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f0c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f102(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f147(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f1a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f69f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71faa0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fb03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fb7e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fbec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fddf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe61(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fe8a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fecc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71feef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71fefb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff0b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff15(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff35(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff46(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff5c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff73(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ff93(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ffaf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ffea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71f001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f001:L71f001:{bud-=10;NFSU2_TR(0x71f001);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B71f004:{NFSU2_TR(0x71f004);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x817b00ull))));
}
B71f009:{NFSU2_TR(0x71f009);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f00a:{NFSU2_TR(0x71f00a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f00c:{NFSU2_TR(0x71f00c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f00e:{NFSU2_TR(0x71f00e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f010:{NFSU2_TR(0x71f010);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B71f013:{NFSU2_TR(0x71f013);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B71f016:{NFSU2_TR(0x71f016);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f017:{NFSU2_TR(0x71f017);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71f01cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x71ed5eu);}[[clang::musttail]] return blk_71ed5e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f01c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f01c:L71f01c:{bud-=2;NFSU2_TR(0x71f01c);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x1cull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x1cull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x1cull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71f01f:{NFSU2_TR(0x71f01f);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71f090(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f021(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f021:L71f021:{bud-=3;NFSU2_TR(0x71f021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71f024:{NFSU2_TR(0x71f024);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71f026:{NFSU2_TR(0x71f026);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71f045(ARGS);}}
}
B71f028:L71f028:{bud-=11;NFSU2_TR(0x71f028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71f02b:{NFSU2_TR(0x71f02b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B71f02e:{NFSU2_TR(0x71f02e);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x817b00ull))));
}
B71f033:{NFSU2_TR(0x71f033);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f034:{NFSU2_TR(0x71f034);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f036:{NFSU2_TR(0x71f036);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f038:{NFSU2_TR(0x71f038);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f039:{NFSU2_TR(0x71f039);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f03a:{NFSU2_TR(0x71f03a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B71f03d:{NFSU2_TR(0x71f03d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f03e:{NFSU2_TR(0x71f03e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71f043ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x71edbdu);}[[clang::musttail]] return blk_71edbd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f043(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f043:L71f043:{bud-=1;NFSU2_TR(0x71f043);
{if(__builtin_expect(bud<=0,0)){EXIT(0x71f01cu);}[[clang::musttail]] return blk_71f01c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f045(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f045:L71f045:{bud-=3;NFSU2_TR(0x71f045);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f048:{NFSU2_TR(0x71f048);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71f04a:{NFSU2_TR(0x71f04a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71f065(ARGS);}}
}
B71f04c:L71f04c:{bud-=10;NFSU2_TR(0x71f04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f04f:{NFSU2_TR(0x71f04f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71f052:{NFSU2_TR(0x71f052);
w4(G+0,u32(0x817b00ull));
}
B71f057:{NFSU2_TR(0x71f057);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B71f059:{NFSU2_TR(0x71f059);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f05a:{NFSU2_TR(0x71f05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f05d:{NFSU2_TR(0x71f05d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71f060:{NFSU2_TR(0x71f060);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B71f062:{NFSU2_TR(0x71f062);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B71f063:{NFSU2_TR(0x71f063);
{[[clang::musttail]] return blk_71f082(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f065(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f065:L71f065:{bud-=3;NFSU2_TR(0x71f065);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f068:{NFSU2_TR(0x71f068);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(F+0,u8((r4(G+0))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(G+0),r4(U+6)));
w4(U+10,u32(u32(r4(G+0))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71f06a:{NFSU2_TR(0x71f06a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71f090(ARGS);}}
}
B71f06c:L71f06c:{bud-=8;NFSU2_TR(0x71f06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f06f:{NFSU2_TR(0x71f06f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71f072:{NFSU2_TR(0x71f072);
w4(G+0,u32(0x817b00ull));
}
B71f077:{NFSU2_TR(0x71f077);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B71f079:{NFSU2_TR(0x71f079);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f07a:{NFSU2_TR(0x71f07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f07d:{NFSU2_TR(0x71f07d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B71f080:{NFSU2_TR(0x71f080);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
{[[clang::musttail]] return blk_71f082(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f082(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f082:L71f082:{bud-=5;NFSU2_TR(0x71f082);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f083:{NFSU2_TR(0x71f083);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f084:{NFSU2_TR(0x71f084);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B71f087:{NFSU2_TR(0x71f087);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f088:{NFSU2_TR(0x71f088);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71f08dull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x71eca2u);}[[clang::musttail]] return blk_71eca2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f08d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f08d:L71f08d:{bud-=1;NFSU2_TR(0x71f08d);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x14ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x14ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71f090(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f090(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f090:L71f090:{bud-=1;NFSU2_TR(0x71f090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
{[[clang::musttail]] return blk_71f091(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f091(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f091:L71f091:{bud-=2;NFSU2_TR(0x71f091);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B71f092:{NFSU2_TR(0x71f092);
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
PN u32 blk_71f093(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f093:L71f093:{bud-=9;NFSU2_TR(0x71f093);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f094:{NFSU2_TR(0x71f094);
__builtin_memmove((R+20),(G+16),4);
}
B71f096:{NFSU2_TR(0x71f096);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f097:{NFSU2_TR(0x71f097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f098:{NFSU2_TR(0x71f098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71f09b:{NFSU2_TR(0x71f09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f09e:{NFSU2_TR(0x71f09e);
w4(G+4,u32(0x8ull));
}
B71f0a3:{NFSU2_TR(0x71f0a3);
w4(G+0,u32(0x10ull));
}
B71f0a8:{NFSU2_TR(0x71f0a8);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
{[[clang::musttail]] return blk_71f0ac(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f0ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f0ac:L71f0ac:{bud-=7;NFSU2_TR(0x71f0ac);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+24))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71f0b0:{NFSU2_TR(0x71f0b0);
__builtin_memmove((R+4815),(R+4615),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+4614),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+4613),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+4612),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+4611),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+4610),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+4609),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+4608),1);
}
B71f0b4:{NFSU2_TR(0x71f0b4);
u8 U[16];
__builtin_memmove((U+0),(R+4800),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71f0b8:{NFSU2_TR(0x71f0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71f0bb:{NFSU2_TR(0x71f0bb);
w1(F+0,carry<u32>(r4(R+28),r4(G+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
}
B71f0bd:{NFSU2_TR(0x71f0bd);
u8 U[6];
w1(F+11,sborrow<u32>(r4(G+4),u32(0x1ull)));
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71f0be:{NFSU2_TR(0x71f0be);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71f0acu);}goto L71f0ac;}}
}
B71f0c0:L71f0c0:{bud-=4;NFSU2_TR(0x71f0c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f0c1:{NFSU2_TR(0x71f0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f0c2:{NFSU2_TR(0x71f0c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f0c3:{NFSU2_TR(0x71f0c3);
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
PN u32 blk_71f0c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f0c4:L71f0c4:{bud-=10;NFSU2_TR(0x71f0c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f0c5:{NFSU2_TR(0x71f0c5);
__builtin_memmove((R+20),(G+16),4);
}
B71f0c7:{NFSU2_TR(0x71f0c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f0c8:{NFSU2_TR(0x71f0c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f0c9:{NFSU2_TR(0x71f0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71f0cc:{NFSU2_TR(0x71f0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f0cf:{NFSU2_TR(0x71f0cf);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>(gp(0x817e00))));
}
B71f0d7:{NFSU2_TR(0x71f0d7);
wv<16>((R+4800),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4800))));
}
B71f0db:{NFSU2_TR(0x71f0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f0de:{NFSU2_TR(0x71f0de);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_71f0e4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f0e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f0e4:L71f0e4:{bud-=8;NFSU2_TR(0x71f0e4);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((R+4736),(U+0),16);
}
B71f0e8:{NFSU2_TR(0x71f0e8);
{wv<16>((R+4736),uo::packsswb<16>(rv<16>((R+4736)),rv<16>((R+4800))));}
}
B71f0ec:{NFSU2_TR(0x71f0ec);
wv<16>((R+4736),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4608))));
}
B71f0f0:{NFSU2_TR(0x71f0f0);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71f0f3:{NFSU2_TR(0x71f0f3);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(G+0),r4(U+6)));
w4(U+10,u32(u32(r4(G+0))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71f0f5:{NFSU2_TR(0x71f0f5);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B71f0f9:{NFSU2_TR(0x71f0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71f0fc:{NFSU2_TR(0x71f0fc);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71f0e4u);}goto L71f0e4;}}
}
B71f0fe:L71f0fe:{bud-=4;NFSU2_TR(0x71f0fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f0ff:{NFSU2_TR(0x71f0ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f100:{NFSU2_TR(0x71f100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f101:{NFSU2_TR(0x71f101);
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
PN u32 blk_71f102(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f102:L71f102:{bud-=11;NFSU2_TR(0x71f102);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f103:{NFSU2_TR(0x71f103);
__builtin_memmove((R+20),(G+16),4);
}
B71f105:{NFSU2_TR(0x71f105);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f106:{NFSU2_TR(0x71f106);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f107:{NFSU2_TR(0x71f107);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f108:{NFSU2_TR(0x71f108);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f10b:{NFSU2_TR(0x71f10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71f10e:{NFSU2_TR(0x71f10e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71f111:{NFSU2_TR(0x71f111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f114:{NFSU2_TR(0x71f114);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71f118:{NFSU2_TR(0x71f118);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_71f11e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f11e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f11e:L71f11e:{bud-=11;NFSU2_TR(0x71f11e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71f122:{NFSU2_TR(0x71f122);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((R+4864),(U+0),16);
}
B71f126:{NFSU2_TR(0x71f126);
__builtin_memmove((R+4751),(R+4615),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+4614),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+4613),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+4612),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+4611),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+4610),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+4609),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+4608),1);
}
B71f12a:{NFSU2_TR(0x71f12a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B71f12c:{NFSU2_TR(0x71f12c);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4864))));}
}
B71f130:{NFSU2_TR(0x71f130);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71f133:{NFSU2_TR(0x71f133);
u8 U[54];
__builtin_memmove((U+5),(R+4736),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4736),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4737),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4738),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4739),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4740),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4741),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4742),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4743),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4744),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4745),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4746),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4747),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4748),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4749),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4750),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4751),(U+37),1);
}
B71f137:{NFSU2_TR(0x71f137);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(F+0,u8((r4(G+4))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(G+4),r4(U+6)));
w4(U+10,u32(u32(r4(G+4))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71f139:{NFSU2_TR(0x71f139);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B71f13d:{NFSU2_TR(0x71f13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B71f140:{NFSU2_TR(0x71f140);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71f11eu);}goto L71f11e;}}
}
B71f142:L71f142:{bud-=5;NFSU2_TR(0x71f142);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f143:{NFSU2_TR(0x71f143);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f144:{NFSU2_TR(0x71f144);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f145:{NFSU2_TR(0x71f145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f146:{NFSU2_TR(0x71f146);
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
PN u32 blk_71f147(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f147:L71f147:{bud-=14;NFSU2_TR(0x71f147);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f148:{NFSU2_TR(0x71f148);
__builtin_memmove((R+20),(G+16),4);
}
B71f14a:{NFSU2_TR(0x71f14a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f14b:{NFSU2_TR(0x71f14b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f14c:{NFSU2_TR(0x71f14c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f14d:{NFSU2_TR(0x71f14d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f14e:{NFSU2_TR(0x71f14e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f14f:{NFSU2_TR(0x71f14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71f152:{NFSU2_TR(0x71f152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71f155:{NFSU2_TR(0x71f155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71f158:{NFSU2_TR(0x71f158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f15b:{NFSU2_TR(0x71f15b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f15e:{NFSU2_TR(0x71f15e);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x80ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71f164:{NFSU2_TR(0x71f164);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
{[[clang::musttail]] return blk_71f168(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71f168(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f168:L71f168:{bud-=16;NFSU2_TR(0x71f168);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71f16c:{NFSU2_TR(0x71f16c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
wv<16>((R+4864),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71f170:{NFSU2_TR(0x71f170);
__builtin_memmove((R+4751),(R+4615),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+4614),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+4613),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+4612),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+4611),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+4610),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+4609),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+4608),1);
}
B71f174:{NFSU2_TR(0x71f174);
__builtin_memmove((R+4879),(R+4615),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4614),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4613),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4612),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4611),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4610),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4609),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4608),1);
}
B71f178:{NFSU2_TR(0x71f178);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f17c:{NFSU2_TR(0x71f17c);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4864))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4866))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4868))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4870))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4872))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4874))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4876))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4878))));
}
B71f180:{NFSU2_TR(0x71f180);
w2(R+4736,shr<u16>(r2(R+4736),u64(u32(0x1ull))));
w2(R+4738,shr<u16>(r2(R+4738),u64(u32(0x1ull))));
w2(R+4740,shr<u16>(r2(R+4740),u64(u32(0x1ull))));
w2(R+4742,shr<u16>(r2(R+4742),u64(u32(0x1ull))));
w2(R+4744,shr<u16>(r2(R+4744),u64(u32(0x1ull))));
w2(R+4746,shr<u16>(r2(R+4746),u64(u32(0x1ull))));
w2(R+4748,shr<u16>(r2(R+4748),u64(u32(0x1ull))));
w2(R+4750,shr<u16>(r2(R+4750),u64(u32(0x1ull))));
}
B71f185:{NFSU2_TR(0x71f185);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4992))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4994))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4996))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4998))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+5000))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+5002))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+5004))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+5006))));
}
B71f189:{NFSU2_TR(0x71f189);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71f18c:{NFSU2_TR(0x71f18c);
u8 U[54];
__builtin_memmove((U+5),(R+4736),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4736),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4737),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4738),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4739),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4740),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4741),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4742),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4743),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4744),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4745),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4746),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4747),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4748),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4749),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4750),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4751),(U+37),1);
}
B71f190:{NFSU2_TR(0x71f190);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B71f192:{NFSU2_TR(0x71f192);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B71f194:{NFSU2_TR(0x71f194);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(G+4),r4(U+6)));
w4(U+10,u32(u32(r4(G+4))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71f196:{NFSU2_TR(0x71f196);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+12)),r8(U+0));
}
B71f19a:{NFSU2_TR(0x71f19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71f19d:{NFSU2_TR(0x71f19d);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71f168u);}goto L71f168;}}
}
B71f19f:L71f19f:{bud-=7;NFSU2_TR(0x71f19f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f1a0:{NFSU2_TR(0x71f1a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f1a1:{NFSU2_TR(0x71f1a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71f1a2:{NFSU2_TR(0x71f1a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71f1a3:{NFSU2_TR(0x71f1a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f1a4:{NFSU2_TR(0x71f1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f1a5:{NFSU2_TR(0x71f1a5);
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
PN u32 blk_71f1a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f1a6:L71f1a6:{bud-=296;NFSU2_TR(0x71f1a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f1a7:{NFSU2_TR(0x71f1a7);
__builtin_memmove((R+20),(G+16),4);
}
B71f1a9:{NFSU2_TR(0x71f1a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f1aa:{NFSU2_TR(0x71f1aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f1ab:{NFSU2_TR(0x71f1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71f1ae:{NFSU2_TR(0x71f1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f1b1:{NFSU2_TR(0x71f1b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f1b4:{NFSU2_TR(0x71f1b4);
w4(G+4,u32(0x817e40ull));
}
B71f1ba:{NFSU2_TR(0x71f1ba);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f1be:{NFSU2_TR(0x71f1be);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f1c3:{NFSU2_TR(0x71f1c3);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+12))),16);
__builtin_memmove((U+16),(U+0),16);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(U+16))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(U+18))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(U+20))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(U+22))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(U+24))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(U+26))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(U+28))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(U+30))));
}
B71f1c7:{NFSU2_TR(0x71f1c7);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(U+20))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(U+22))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(U+24))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(U+26))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(U+28))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(U+30))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(U+32))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(U+34))));
}
B71f1cc:{NFSU2_TR(0x71f1cc);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f1d1:{NFSU2_TR(0x71f1d1);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f1d6:{NFSU2_TR(0x71f1d6);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(U+20))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(U+22))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(U+24))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(U+26))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(U+28))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(U+30))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(U+32))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(U+34))));
}
B71f1db:{NFSU2_TR(0x71f1db);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(U+34))));
}
B71f1e0:{NFSU2_TR(0x71f1e0);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f1e4:{NFSU2_TR(0x71f1e4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f1e9:{NFSU2_TR(0x71f1e9);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f1ee:{NFSU2_TR(0x71f1ee);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71f1f3:{NFSU2_TR(0x71f1f3);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(U+34))));
}
B71f1f8:{NFSU2_TR(0x71f1f8);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(U+20))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(U+22))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(U+24))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(U+26))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(U+28))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(U+30))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(U+32))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(U+34))));
}
B71f1fd:{NFSU2_TR(0x71f1fd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f202:{NFSU2_TR(0x71f202);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f207:{NFSU2_TR(0x71f207);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f20c:{NFSU2_TR(0x71f20c);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f211:{NFSU2_TR(0x71f211);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(U+20))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(U+22))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(U+24))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(U+26))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(U+28))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(U+30))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(U+32))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(U+34))));
}
B71f216:{NFSU2_TR(0x71f216);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+5056,u16(u32(r2(R+5056))*u32(r2(U+20))));
w2(R+5058,u16(u32(r2(R+5058))*u32(r2(U+22))));
w2(R+5060,u16(u32(r2(R+5060))*u32(r2(U+24))));
w2(R+5062,u16(u32(r2(R+5062))*u32(r2(U+26))));
w2(R+5064,u16(u32(r2(R+5064))*u32(r2(U+28))));
w2(R+5066,u16(u32(r2(R+5066))*u32(r2(U+30))));
w2(R+5068,u16(u32(r2(R+5068))*u32(r2(U+32))));
w2(R+5070,u16(u32(r2(R+5070))*u32(r2(U+34))));
}
B71f21b:{NFSU2_TR(0x71f21b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f220:{NFSU2_TR(0x71f220);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f225:{NFSU2_TR(0x71f225);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f22a:{NFSU2_TR(0x71f22a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f22f:{NFSU2_TR(0x71f22f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f234:{NFSU2_TR(0x71f234);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f239:{NFSU2_TR(0x71f239);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f23d:{NFSU2_TR(0x71f23d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f242:{NFSU2_TR(0x71f242);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B71f246:{NFSU2_TR(0x71f246);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f24b:{NFSU2_TR(0x71f24b);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+5056))));}
}
B71f24f:{NFSU2_TR(0x71f24f);
__builtin_memmove((R+4928),(R+4672),16);
}
B71f253:{NFSU2_TR(0x71f253);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f257:{NFSU2_TR(0x71f257);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f25c:{NFSU2_TR(0x71f25c);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((R+5056))));}
}
B71f260:{NFSU2_TR(0x71f260);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f264:{NFSU2_TR(0x71f264);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B71f268:{NFSU2_TR(0x71f268);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+5056))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+5058))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+5060))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+5062))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+5064))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+5066))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+5068))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+5070))));
}
B71f26c:{NFSU2_TR(0x71f26c);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f270:{NFSU2_TR(0x71f270);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f275:{NFSU2_TR(0x71f275);
w2(R+5056,u16(u32(r2(R+5056))+u32(r2(R+4928))));
w2(R+5058,u16(u32(r2(R+5058))+u32(r2(R+4930))));
w2(R+5060,u16(u32(r2(R+5060))+u32(r2(R+4932))));
w2(R+5062,u16(u32(r2(R+5062))+u32(r2(R+4934))));
w2(R+5064,u16(u32(r2(R+5064))+u32(r2(R+4936))));
w2(R+5066,u16(u32(r2(R+5066))+u32(r2(R+4938))));
w2(R+5068,u16(u32(r2(R+5068))+u32(r2(R+4940))));
w2(R+5070,u16(u32(r2(R+5070))+u32(r2(R+4942))));
}
B71f279:{NFSU2_TR(0x71f279);
__builtin_memmove((R+4928),(R+4608),16);
}
B71f27d:{NFSU2_TR(0x71f27d);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4800))));}
}
B71f281:{NFSU2_TR(0x71f281);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f285:{NFSU2_TR(0x71f285);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f289:{NFSU2_TR(0x71f289);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f28e:{NFSU2_TR(0x71f28e);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f292:{NFSU2_TR(0x71f292);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4800))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4802))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4804))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4806))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4808))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4810))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4812))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4814))));
}
B71f296:{NFSU2_TR(0x71f296);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+5056))));}
}
B71f29a:{NFSU2_TR(0x71f29a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f29f:{NFSU2_TR(0x71f29f);
{wv<16>((R+5056),uo::pmulhw<16>(rv<16>((R+5056)),rv<16>((R+4672))));}
}
B71f2a3:{NFSU2_TR(0x71f2a3);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4672))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4674))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4676))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4678))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4680))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4682))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4684))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4686))));
}
B71f2a7:{NFSU2_TR(0x71f2a7);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f2ab:{NFSU2_TR(0x71f2ab);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4736),uo::pmulhw<16>(rv<16>((R+4736)),rv<16>((U+4))));}
}
B71f2b0:{NFSU2_TR(0x71f2b0);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4928))));}
}
B71f2b4:{NFSU2_TR(0x71f2b4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71f2b9:{NFSU2_TR(0x71f2b9);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f2bd:{NFSU2_TR(0x71f2bd);
__builtin_memmove((R+5056),(R+4928),16);
}
B71f2c1:{NFSU2_TR(0x71f2c1);
{wv<16>((R+4608),uo::psubsw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f2c5:{NFSU2_TR(0x71f2c5);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((U+4))));}
}
B71f2ca:{NFSU2_TR(0x71f2ca);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f2ce:{NFSU2_TR(0x71f2ce);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B71f2d3:{NFSU2_TR(0x71f2d3);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4864))));}
}
B71f2d7:{NFSU2_TR(0x71f2d7);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4608))));}
}
B71f2db:{NFSU2_TR(0x71f2db);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4992))));}
}
B71f2df:{NFSU2_TR(0x71f2df);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5070))));
}
B71f2e3:{NFSU2_TR(0x71f2e3);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4992))));}
}
B71f2e7:{NFSU2_TR(0x71f2e7);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+5056),uo::pmulhw<16>(rv<16>((R+5056)),rv<16>((U+4))));}
}
B71f2ec:{NFSU2_TR(0x71f2ec);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f2f0:{NFSU2_TR(0x71f2f0);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f2f5:{NFSU2_TR(0x71f2f5);
{wv<16>((R+4672),uo::psubsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f2f9:{NFSU2_TR(0x71f2f9);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f2fe:{NFSU2_TR(0x71f2fe);
__builtin_memmove((R+4928),(R+4800),16);
}
B71f302:{NFSU2_TR(0x71f302);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f306:{NFSU2_TR(0x71f306);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4736))));}
}
B71f30a:{NFSU2_TR(0x71f30a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f30f:{NFSU2_TR(0x71f30f);
__builtin_memmove((R+4736),(R+4608),16);
}
B71f313:{NFSU2_TR(0x71f313);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f317:{NFSU2_TR(0x71f317);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f31b:{NFSU2_TR(0x71f31b);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4800))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4802))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4804))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4806))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4808))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4810))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4812))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4814))));
}
B71f31f:{NFSU2_TR(0x71f31f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f324:{NFSU2_TR(0x71f324);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f328:{NFSU2_TR(0x71f328);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4622))));
}
B71f32c:{NFSU2_TR(0x71f32c);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f330:{NFSU2_TR(0x71f330);
__builtin_memmove((R+4608),(R+4992),16);
}
B71f334:{NFSU2_TR(0x71f334);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+4864))));}
}
B71f338:{NFSU2_TR(0x71f338);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f33c:{NFSU2_TR(0x71f33c);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f340:{NFSU2_TR(0x71f340);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4608))));}
}
B71f344:{NFSU2_TR(0x71f344);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f348:{NFSU2_TR(0x71f348);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f34c:{NFSU2_TR(0x71f34c);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4608))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4610))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4612))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4614))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4616))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4618))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4620))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4622))));
}
B71f350:{NFSU2_TR(0x71f350);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f354:{NFSU2_TR(0x71f354);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4736))));}
}
B71f358:{NFSU2_TR(0x71f358);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f35d:{NFSU2_TR(0x71f35d);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4992))));}
}
B71f361:{NFSU2_TR(0x71f361);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71f365:{NFSU2_TR(0x71f365);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4672))));}
}
B71f369:{NFSU2_TR(0x71f369);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f36d:{NFSU2_TR(0x71f36d);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f371:{NFSU2_TR(0x71f371);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f375:{NFSU2_TR(0x71f375);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f37a:{NFSU2_TR(0x71f37a);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+5056))));}
}
B71f37e:{NFSU2_TR(0x71f37e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f383:{NFSU2_TR(0x71f383);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71f387:{NFSU2_TR(0x71f387);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f38c:{NFSU2_TR(0x71f38c);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f390:{NFSU2_TR(0x71f390);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f394:{NFSU2_TR(0x71f394);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f398:{NFSU2_TR(0x71f398);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4928))));}
}
B71f39c:{NFSU2_TR(0x71f39c);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4928))));}
}
B71f3a0:{NFSU2_TR(0x71f3a0);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4992))));}
}
B71f3a4:{NFSU2_TR(0x71f3a4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3a9:{NFSU2_TR(0x71f3a9);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3ae:{NFSU2_TR(0x71f3ae);
{wv<16>((R+5056),uo::psubsw<16>(rv<16>((R+5056)),rv<16>((R+4608))));}
}
B71f3b2:{NFSU2_TR(0x71f3b2);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B71f3b6:{NFSU2_TR(0x71f3b6);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f3ba:{NFSU2_TR(0x71f3ba);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3bf:{NFSU2_TR(0x71f3bf);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3c4:{NFSU2_TR(0x71f3c4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f3c9:{NFSU2_TR(0x71f3c9);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f3cd:{NFSU2_TR(0x71f3cd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f3d2:{NFSU2_TR(0x71f3d2);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f3d7:{NFSU2_TR(0x71f3d7);
__builtin_memmove((R+4928),(R+4864),16);
}
B71f3db:{NFSU2_TR(0x71f3db);
__builtin_memmove((R+4878),(R+4614),2);
__builtin_memmove((R+4876),(R+4870),2);
__builtin_memmove((R+4874),(R+4612),2);
__builtin_memmove((R+4872),(R+4868),2);
__builtin_memmove((R+4870),(R+4610),2);
__builtin_memmove((R+4868),(R+4866),2);
__builtin_memmove((R+4866),(R+4608),2);
}
B71f3df:{NFSU2_TR(0x71f3df);
__builtin_memmove((R+4928),(R+4936),2);
__builtin_memmove((R+4930),(R+4616),2);
__builtin_memmove((R+4932),(R+4938),2);
__builtin_memmove((R+4934),(R+4618),2);
__builtin_memmove((R+4936),(R+4940),2);
__builtin_memmove((R+4938),(R+4620),2);
__builtin_memmove((R+4940),(R+4942),2);
__builtin_memmove((R+4942),(R+4622),2);
}
B71f3e3:{NFSU2_TR(0x71f3e3);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f3e8:{NFSU2_TR(0x71f3e8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f3ed:{NFSU2_TR(0x71f3ed);
__builtin_memmove((R+5056),(R+4992),16);
}
B71f3f1:{NFSU2_TR(0x71f3f1);
__builtin_memmove((R+5006),(R+4614),2);
__builtin_memmove((R+5004),(R+4998),2);
__builtin_memmove((R+5002),(R+4612),2);
__builtin_memmove((R+5000),(R+4996),2);
__builtin_memmove((R+4998),(R+4610),2);
__builtin_memmove((R+4996),(R+4994),2);
__builtin_memmove((R+4994),(R+4608),2);
}
B71f3f5:{NFSU2_TR(0x71f3f5);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4616),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4618),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4620),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4622),2);
}
B71f3f9:{NFSU2_TR(0x71f3f9);
__builtin_memmove((R+4800),(R+4864),16);
}
B71f3fd:{NFSU2_TR(0x71f3fd);
__builtin_memmove((R+4876),(R+4996),4);
__builtin_memmove((R+4872),(R+4868),4);
__builtin_memmove((R+4868),(R+4992),4);
}
B71f401:{NFSU2_TR(0x71f401);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+5000),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B71f405:{NFSU2_TR(0x71f405);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f40a:{NFSU2_TR(0x71f40a);
__builtin_memmove((R+4992),(R+4928),16);
}
B71f40e:{NFSU2_TR(0x71f40e);
__builtin_memmove((R+4940),(R+5060),4);
__builtin_memmove((R+4936),(R+4932),4);
__builtin_memmove((R+4932),(R+5056),4);
}
B71f412:{NFSU2_TR(0x71f412);
__builtin_memmove((R+4992),(R+5000),4);
__builtin_memmove((R+4996),(R+5064),4);
__builtin_memmove((R+5000),(R+5004),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B71f416:{NFSU2_TR(0x71f416);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f41a:{NFSU2_TR(0x71f41a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f41f:{NFSU2_TR(0x71f41f);
__builtin_memmove((R+5056),(R+4608),16);
}
B71f423:{NFSU2_TR(0x71f423);
__builtin_memmove((R+4622),(R+4678),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+4676),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+4674),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+4672),2);
}
B71f427:{NFSU2_TR(0x71f427);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4680),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4682),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4684),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4686),2);
}
B71f42b:{NFSU2_TR(0x71f42b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f430:{NFSU2_TR(0x71f430);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f435:{NFSU2_TR(0x71f435);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f439:{NFSU2_TR(0x71f439);
__builtin_memmove((R+4750),(R+4806),2);
__builtin_memmove((R+4748),(R+4742),2);
__builtin_memmove((R+4746),(R+4804),2);
__builtin_memmove((R+4744),(R+4740),2);
__builtin_memmove((R+4742),(R+4802),2);
__builtin_memmove((R+4740),(R+4738),2);
__builtin_memmove((R+4738),(R+4800),2);
}
B71f43d:{NFSU2_TR(0x71f43d);
__builtin_memmove((R+4672),(R+4680),2);
__builtin_memmove((R+4674),(R+4808),2);
__builtin_memmove((R+4676),(R+4682),2);
__builtin_memmove((R+4678),(R+4810),2);
__builtin_memmove((R+4680),(R+4684),2);
__builtin_memmove((R+4682),(R+4812),2);
__builtin_memmove((R+4684),(R+4686),2);
__builtin_memmove((R+4686),(R+4814),2);
}
B71f441:{NFSU2_TR(0x71f441);
__builtin_memmove((R+4800),(R+4608),16);
}
B71f445:{NFSU2_TR(0x71f445);
__builtin_memmove((R+4620),(R+4740),4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(R+4736),4);
}
B71f449:{NFSU2_TR(0x71f449);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4744),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B71f44d:{NFSU2_TR(0x71f44d);
__builtin_memmove((R+4736),(R+5056),16);
}
B71f451:{NFSU2_TR(0x71f451);
__builtin_memmove((R+4748),(R+4676),4);
__builtin_memmove((R+4744),(R+4740),4);
__builtin_memmove((R+4740),(R+4672),4);
}
B71f455:{NFSU2_TR(0x71f455);
__builtin_memmove((R+5056),(R+5064),4);
__builtin_memmove((R+5060),(R+4680),4);
__builtin_memmove((R+5064),(R+5068),4);
__builtin_memmove((R+5068),(R+4684),4);
}
B71f459:{NFSU2_TR(0x71f459);
__builtin_memmove((R+4672),(R+4608),16);
}
B71f45d:{NFSU2_TR(0x71f45d);
__builtin_memmove((R+4616),(R+4864),8);
}
B71f461:{NFSU2_TR(0x71f461);
__builtin_memmove((R+4672),(R+4680),8);
__builtin_memmove((R+4680),(R+4872),8);
}
B71f465:{NFSU2_TR(0x71f465);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f469:{NFSU2_TR(0x71f469);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f46e:{NFSU2_TR(0x71f46e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f473:{NFSU2_TR(0x71f473);
__builtin_memmove((R+4672),(R+4800),16);
}
B71f477:{NFSU2_TR(0x71f477);
__builtin_memmove((R+4680),(R+4608),8);
}
B71f47b:{NFSU2_TR(0x71f47b);
__builtin_memmove((R+4800),(R+4808),8);
__builtin_memmove((R+4808),(R+4616),8);
}
B71f47f:{NFSU2_TR(0x71f47f);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f483:{NFSU2_TR(0x71f483);
__builtin_memmove((R+4872),(R+4928),8);
}
B71f487:{NFSU2_TR(0x71f487);
__builtin_memmove((R+4736),(R+4744),8);
__builtin_memmove((R+4744),(R+4936),8);
}
B71f48b:{NFSU2_TR(0x71f48b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f490:{NFSU2_TR(0x71f490);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f495:{NFSU2_TR(0x71f495);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f49a:{NFSU2_TR(0x71f49a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f49f:{NFSU2_TR(0x71f49f);
__builtin_memmove((R+4928),(R+5056),16);
}
B71f4a3:{NFSU2_TR(0x71f4a3);
__builtin_memmove((R+4936),(R+4992),8);
}
B71f4a7:{NFSU2_TR(0x71f4a7);
__builtin_memmove((R+5056),(R+5064),8);
__builtin_memmove((R+5064),(R+5000),8);
}
B71f4ab:{NFSU2_TR(0x71f4ab);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f4b0:{NFSU2_TR(0x71f4b0);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f4b5:{NFSU2_TR(0x71f4b5);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f4ba:{NFSU2_TR(0x71f4ba);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f4bf:{NFSU2_TR(0x71f4bf);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f4c3:{NFSU2_TR(0x71f4c3);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f4c8:{NFSU2_TR(0x71f4c8);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B71f4cc:{NFSU2_TR(0x71f4cc);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f4d1:{NFSU2_TR(0x71f4d1);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+5056))));}
}
B71f4d5:{NFSU2_TR(0x71f4d5);
__builtin_memmove((R+4928),(R+4672),16);
}
B71f4d9:{NFSU2_TR(0x71f4d9);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f4dd:{NFSU2_TR(0x71f4dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f4e2:{NFSU2_TR(0x71f4e2);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((R+5056))));}
}
B71f4e6:{NFSU2_TR(0x71f4e6);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f4ea:{NFSU2_TR(0x71f4ea);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B71f4ee:{NFSU2_TR(0x71f4ee);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+5056))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+5058))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+5060))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+5062))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+5064))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+5066))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+5068))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+5070))));
}
B71f4f2:{NFSU2_TR(0x71f4f2);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f4f6:{NFSU2_TR(0x71f4f6);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f4fb:{NFSU2_TR(0x71f4fb);
w2(R+5056,u16(u32(r2(R+5056))+u32(r2(R+4928))));
w2(R+5058,u16(u32(r2(R+5058))+u32(r2(R+4930))));
w2(R+5060,u16(u32(r2(R+5060))+u32(r2(R+4932))));
w2(R+5062,u16(u32(r2(R+5062))+u32(r2(R+4934))));
w2(R+5064,u16(u32(r2(R+5064))+u32(r2(R+4936))));
w2(R+5066,u16(u32(r2(R+5066))+u32(r2(R+4938))));
w2(R+5068,u16(u32(r2(R+5068))+u32(r2(R+4940))));
w2(R+5070,u16(u32(r2(R+5070))+u32(r2(R+4942))));
}
B71f4ff:{NFSU2_TR(0x71f4ff);
__builtin_memmove((R+4928),(R+4608),16);
}
B71f503:{NFSU2_TR(0x71f503);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4800))));}
}
B71f507:{NFSU2_TR(0x71f507);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f50b:{NFSU2_TR(0x71f50b);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f50f:{NFSU2_TR(0x71f50f);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f514:{NFSU2_TR(0x71f514);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f518:{NFSU2_TR(0x71f518);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4800))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4802))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4804))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4806))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4808))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4810))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4812))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4814))));
}
B71f51c:{NFSU2_TR(0x71f51c);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+5056))));}
}
B71f520:{NFSU2_TR(0x71f520);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f525:{NFSU2_TR(0x71f525);
{wv<16>((R+5056),uo::pmulhw<16>(rv<16>((R+5056)),rv<16>((R+4672))));}
}
B71f529:{NFSU2_TR(0x71f529);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4672))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4674))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4676))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4678))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4680))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4682))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4684))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4686))));
}
B71f52d:{NFSU2_TR(0x71f52d);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f531:{NFSU2_TR(0x71f531);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4736),uo::pmulhw<16>(rv<16>((R+4736)),rv<16>((U+4))));}
}
B71f536:{NFSU2_TR(0x71f536);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4928))));}
}
B71f53a:{NFSU2_TR(0x71f53a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71f53f:{NFSU2_TR(0x71f53f);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f543:{NFSU2_TR(0x71f543);
__builtin_memmove((R+5056),(R+4928),16);
}
B71f547:{NFSU2_TR(0x71f547);
{wv<16>((R+4608),uo::psubsw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f54b:{NFSU2_TR(0x71f54b);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4928),uo::pmulhw<16>(rv<16>((R+4928)),rv<16>((U+4))));}
}
B71f550:{NFSU2_TR(0x71f550);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f554:{NFSU2_TR(0x71f554);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B71f559:{NFSU2_TR(0x71f559);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4864))));}
}
B71f55d:{NFSU2_TR(0x71f55d);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4608))));}
}
B71f561:{NFSU2_TR(0x71f561);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4992))));}
}
B71f565:{NFSU2_TR(0x71f565);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5070))));
}
B71f569:{NFSU2_TR(0x71f569);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4992))));}
}
B71f56d:{NFSU2_TR(0x71f56d);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+5056),uo::pmulhw<16>(rv<16>((R+5056)),rv<16>((U+4))));}
}
B71f572:{NFSU2_TR(0x71f572);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f576:{NFSU2_TR(0x71f576);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f57b:{NFSU2_TR(0x71f57b);
{wv<16>((R+4672),uo::psubsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f57f:{NFSU2_TR(0x71f57f);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f584:{NFSU2_TR(0x71f584);
__builtin_memmove((R+4928),(R+4800),16);
}
B71f588:{NFSU2_TR(0x71f588);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f58c:{NFSU2_TR(0x71f58c);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4736))));}
}
B71f590:{NFSU2_TR(0x71f590);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f595:{NFSU2_TR(0x71f595);
__builtin_memmove((R+4736),(R+4608),16);
}
B71f599:{NFSU2_TR(0x71f599);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f59d:{NFSU2_TR(0x71f59d);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f5a1:{NFSU2_TR(0x71f5a1);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4800))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4802))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4804))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4806))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4808))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4810))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4812))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4814))));
}
B71f5a5:{NFSU2_TR(0x71f5a5);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f5aa:{NFSU2_TR(0x71f5aa);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f5ae:{NFSU2_TR(0x71f5ae);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4622))));
}
B71f5b2:{NFSU2_TR(0x71f5b2);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f5b6:{NFSU2_TR(0x71f5b6);
__builtin_memmove((R+4608),(R+4992),16);
}
B71f5ba:{NFSU2_TR(0x71f5ba);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+4864))));}
}
B71f5be:{NFSU2_TR(0x71f5be);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f5c2:{NFSU2_TR(0x71f5c2);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f5c6:{NFSU2_TR(0x71f5c6);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4608))));}
}
B71f5ca:{NFSU2_TR(0x71f5ca);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f5ce:{NFSU2_TR(0x71f5ce);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f5d2:{NFSU2_TR(0x71f5d2);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4608))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4610))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4612))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4614))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4616))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4618))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4620))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4622))));
}
B71f5d6:{NFSU2_TR(0x71f5d6);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f5da:{NFSU2_TR(0x71f5da);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4736))));}
}
B71f5de:{NFSU2_TR(0x71f5de);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f5e3:{NFSU2_TR(0x71f5e3);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4992))));}
}
B71f5e7:{NFSU2_TR(0x71f5e7);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71f5eb:{NFSU2_TR(0x71f5eb);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4672))));}
}
B71f5ef:{NFSU2_TR(0x71f5ef);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>(gp(0x817e20))));}
}
B71f5f7:{NFSU2_TR(0x71f5f7);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f5fb:{NFSU2_TR(0x71f5fb);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f5ff:{NFSU2_TR(0x71f5ff);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0x4ull)));}
}
B71f604:{NFSU2_TR(0x71f604);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f608:{NFSU2_TR(0x71f608);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0x4ull)));}
}
B71f60d:{NFSU2_TR(0x71f60d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f612:{NFSU2_TR(0x71f612);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+5056))));}
}
B71f616:{NFSU2_TR(0x71f616);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f61b:{NFSU2_TR(0x71f61b);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71f61f:{NFSU2_TR(0x71f61f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f624:{NFSU2_TR(0x71f624);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f628:{NFSU2_TR(0x71f628);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>(gp(0x817e20))));}
}
B71f630:{NFSU2_TR(0x71f630);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f634:{NFSU2_TR(0x71f634);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f638:{NFSU2_TR(0x71f638);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71f63d:{NFSU2_TR(0x71f63d);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4928))));}
}
B71f641:{NFSU2_TR(0x71f641);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x4ull)));}
}
B71f646:{NFSU2_TR(0x71f646);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>(gp(0x817e20))));}
}
B71f64e:{NFSU2_TR(0x71f64e);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4928))));}
}
B71f652:{NFSU2_TR(0x71f652);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4992))));}
}
B71f656:{NFSU2_TR(0x71f656);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x4ull)));}
}
B71f65b:{NFSU2_TR(0x71f65b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f660:{NFSU2_TR(0x71f660);
{wv<16>((R+4928),uo::psraw<16>(rv<16>((R+4928)),V(0x4ull)));}
}
B71f665:{NFSU2_TR(0x71f665);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f66a:{NFSU2_TR(0x71f66a);
{wv<16>((R+5056),uo::psubsw<16>(rv<16>((R+5056)),rv<16>((R+4608))));}
}
B71f66e:{NFSU2_TR(0x71f66e);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>(gp(0x817e20))));}
}
B71f676:{NFSU2_TR(0x71f676);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B71f67a:{NFSU2_TR(0x71f67a);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f67e:{NFSU2_TR(0x71f67e);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x4ull)));}
}
B71f683:{NFSU2_TR(0x71f683);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f688:{NFSU2_TR(0x71f688);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x4ull)));}
}
B71f68d:{NFSU2_TR(0x71f68d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f692:{NFSU2_TR(0x71f692);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f697:{NFSU2_TR(0x71f697);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f69b:{NFSU2_TR(0x71f69b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f69c:{NFSU2_TR(0x71f69c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71f69d:{NFSU2_TR(0x71f69d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71f69e:{NFSU2_TR(0x71f69e);
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
PN u32 blk_71f69f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71f69f:L71f69f:{bud-=240;NFSU2_TR(0x71f69f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f6a0:{NFSU2_TR(0x71f6a0);
__builtin_memmove((R+20),(G+16),4);
}
B71f6a2:{NFSU2_TR(0x71f6a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f6a3:{NFSU2_TR(0x71f6a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71f6a4:{NFSU2_TR(0x71f6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71f6a7:{NFSU2_TR(0x71f6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71f6aa:{NFSU2_TR(0x71f6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71f6ad:{NFSU2_TR(0x71f6ad);
w4(G+4,u32(0x817e40ull));
}
B71f6b3:{NFSU2_TR(0x71f6b3);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f6b7:{NFSU2_TR(0x71f6b7);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f6bc:{NFSU2_TR(0x71f6bc);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+12))),16);
__builtin_memmove((U+16),(U+0),16);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(U+16))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(U+18))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(U+20))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(U+22))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(U+24))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(U+26))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(U+28))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(U+30))));
}
B71f6c0:{NFSU2_TR(0x71f6c0);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(U+20))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(U+22))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(U+24))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(U+26))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(U+28))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(U+30))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(U+32))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(U+34))));
}
B71f6c5:{NFSU2_TR(0x71f6c5);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f6ca:{NFSU2_TR(0x71f6ca);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f6cf:{NFSU2_TR(0x71f6cf);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(U+20))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(U+22))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(U+24))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(U+26))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(U+28))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(U+30))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(U+32))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(U+34))));
}
B71f6d4:{NFSU2_TR(0x71f6d4);
u8 U[36];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))*u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))*u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))*u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))*u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))*u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))*u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))*u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))*u32(r2(U+34))));
}
B71f6d9:{NFSU2_TR(0x71f6d9);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f6dd:{NFSU2_TR(0x71f6dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f6e2:{NFSU2_TR(0x71f6e2);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f6e7:{NFSU2_TR(0x71f6e7);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f6ec:{NFSU2_TR(0x71f6ec);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f6f1:{NFSU2_TR(0x71f6f1);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f6f6:{NFSU2_TR(0x71f6f6);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f6fa:{NFSU2_TR(0x71f6fa);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B71f6fe:{NFSU2_TR(0x71f6fe);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f703:{NFSU2_TR(0x71f703);
__builtin_memmove((R+4928),(R+4672),16);
}
B71f707:{NFSU2_TR(0x71f707);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f70b:{NFSU2_TR(0x71f70b);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f710:{NFSU2_TR(0x71f710);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f714:{NFSU2_TR(0x71f714);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B71f718:{NFSU2_TR(0x71f718);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f71d:{NFSU2_TR(0x71f71d);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f721:{NFSU2_TR(0x71f721);
__builtin_memmove((R+4928),(R+4608),16);
}
B71f725:{NFSU2_TR(0x71f725);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4800))));}
}
B71f729:{NFSU2_TR(0x71f729);
wv<16>((R+4992),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4992)),rv<16>((R+4992))));
}
B71f72d:{NFSU2_TR(0x71f72d);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f731:{NFSU2_TR(0x71f731);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4800))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4802))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4804))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4806))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4808))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4810))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4812))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4814))));
}
B71f735:{NFSU2_TR(0x71f735);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+5056))));}
}
B71f739:{NFSU2_TR(0x71f739);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f73e:{NFSU2_TR(0x71f73e);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f742:{NFSU2_TR(0x71f742);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4736),uo::pmulhw<16>(rv<16>((R+4736)),rv<16>((U+4))));}
}
B71f747:{NFSU2_TR(0x71f747);
{wv<16>((R+4608),uo::psubsw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f74b:{NFSU2_TR(0x71f74b);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f74f:{NFSU2_TR(0x71f74f);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B71f754:{NFSU2_TR(0x71f754);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4864))));}
}
B71f758:{NFSU2_TR(0x71f758);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4608))));}
}
B71f75c:{NFSU2_TR(0x71f75c);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4992))));}
}
B71f760:{NFSU2_TR(0x71f760);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4992))));}
}
B71f764:{NFSU2_TR(0x71f764);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f768:{NFSU2_TR(0x71f768);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f76d:{NFSU2_TR(0x71f76d);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f772:{NFSU2_TR(0x71f772);
__builtin_memmove((R+4928),(R+4800),16);
}
B71f776:{NFSU2_TR(0x71f776);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f77a:{NFSU2_TR(0x71f77a);
__builtin_memmove((R+5056),(R+4736),16);
}
B71f77e:{NFSU2_TR(0x71f77e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f783:{NFSU2_TR(0x71f783);
__builtin_memmove((R+4736),(R+4608),16);
}
B71f787:{NFSU2_TR(0x71f787);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f78b:{NFSU2_TR(0x71f78b);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f78f:{NFSU2_TR(0x71f78f);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4800))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4802))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4804))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4806))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4808))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4810))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4812))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4814))));
}
B71f793:{NFSU2_TR(0x71f793);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f797:{NFSU2_TR(0x71f797);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4622))));
}
B71f79b:{NFSU2_TR(0x71f79b);
__builtin_memmove((R+4608),(R+4992),16);
}
B71f79f:{NFSU2_TR(0x71f79f);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+4864))));}
}
B71f7a3:{NFSU2_TR(0x71f7a3);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f7a7:{NFSU2_TR(0x71f7a7);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f7ab:{NFSU2_TR(0x71f7ab);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4608))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4610))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4612))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4614))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4616))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4618))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4620))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4622))));
}
B71f7af:{NFSU2_TR(0x71f7af);
__builtin_memmove((R+4864),(R+4992),16);
}
B71f7b3:{NFSU2_TR(0x71f7b3);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f7b7:{NFSU2_TR(0x71f7b7);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4736))));}
}
B71f7bb:{NFSU2_TR(0x71f7bb);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f7c0:{NFSU2_TR(0x71f7c0);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4992))));}
}
B71f7c4:{NFSU2_TR(0x71f7c4);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4672))));}
}
B71f7c8:{NFSU2_TR(0x71f7c8);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f7cc:{NFSU2_TR(0x71f7cc);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f7d0:{NFSU2_TR(0x71f7d0);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71f7d4:{NFSU2_TR(0x71f7d4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f7d9:{NFSU2_TR(0x71f7d9);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+5056))));}
}
B71f7dd:{NFSU2_TR(0x71f7dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f7e2:{NFSU2_TR(0x71f7e2);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71f7e6:{NFSU2_TR(0x71f7e6);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f7eb:{NFSU2_TR(0x71f7eb);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71f7ef:{NFSU2_TR(0x71f7ef);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71f7f3:{NFSU2_TR(0x71f7f3);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f7f7:{NFSU2_TR(0x71f7f7);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4928))));}
}
B71f7fb:{NFSU2_TR(0x71f7fb);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4928))));}
}
B71f7ff:{NFSU2_TR(0x71f7ff);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4992))));}
}
B71f803:{NFSU2_TR(0x71f803);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f808:{NFSU2_TR(0x71f808);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f80d:{NFSU2_TR(0x71f80d);
{wv<16>((R+5056),uo::psubsw<16>(rv<16>((R+5056)),rv<16>((R+4608))));}
}
B71f811:{NFSU2_TR(0x71f811);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B71f815:{NFSU2_TR(0x71f815);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71f819:{NFSU2_TR(0x71f819);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f81e:{NFSU2_TR(0x71f81e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f823:{NFSU2_TR(0x71f823);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f828:{NFSU2_TR(0x71f828);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f82c:{NFSU2_TR(0x71f82c);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f831:{NFSU2_TR(0x71f831);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f836:{NFSU2_TR(0x71f836);
__builtin_memmove((R+4928),(R+4864),16);
}
B71f83a:{NFSU2_TR(0x71f83a);
__builtin_memmove((R+4878),(R+4614),2);
__builtin_memmove((R+4876),(R+4870),2);
__builtin_memmove((R+4874),(R+4612),2);
__builtin_memmove((R+4872),(R+4868),2);
__builtin_memmove((R+4870),(R+4610),2);
__builtin_memmove((R+4868),(R+4866),2);
__builtin_memmove((R+4866),(R+4608),2);
}
B71f83e:{NFSU2_TR(0x71f83e);
__builtin_memmove((R+4928),(R+4936),2);
__builtin_memmove((R+4930),(R+4616),2);
__builtin_memmove((R+4932),(R+4938),2);
__builtin_memmove((R+4934),(R+4618),2);
__builtin_memmove((R+4936),(R+4940),2);
__builtin_memmove((R+4938),(R+4620),2);
__builtin_memmove((R+4940),(R+4942),2);
__builtin_memmove((R+4942),(R+4622),2);
}
B71f842:{NFSU2_TR(0x71f842);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f847:{NFSU2_TR(0x71f847);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f84c:{NFSU2_TR(0x71f84c);
__builtin_memmove((R+5056),(R+4992),16);
}
B71f850:{NFSU2_TR(0x71f850);
__builtin_memmove((R+5006),(R+4614),2);
__builtin_memmove((R+5004),(R+4998),2);
__builtin_memmove((R+5002),(R+4612),2);
__builtin_memmove((R+5000),(R+4996),2);
__builtin_memmove((R+4998),(R+4610),2);
__builtin_memmove((R+4996),(R+4994),2);
__builtin_memmove((R+4994),(R+4608),2);
}
B71f854:{NFSU2_TR(0x71f854);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4616),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4618),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4620),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4622),2);
}
B71f858:{NFSU2_TR(0x71f858);
__builtin_memmove((R+4800),(R+4864),16);
}
B71f85c:{NFSU2_TR(0x71f85c);
__builtin_memmove((R+4876),(R+4996),4);
__builtin_memmove((R+4872),(R+4868),4);
__builtin_memmove((R+4868),(R+4992),4);
}
B71f860:{NFSU2_TR(0x71f860);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+5000),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B71f864:{NFSU2_TR(0x71f864);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f869:{NFSU2_TR(0x71f869);
__builtin_memmove((R+4992),(R+4928),16);
}
B71f86d:{NFSU2_TR(0x71f86d);
__builtin_memmove((R+4940),(R+5060),4);
__builtin_memmove((R+4936),(R+4932),4);
__builtin_memmove((R+4932),(R+5056),4);
}
B71f871:{NFSU2_TR(0x71f871);
__builtin_memmove((R+4992),(R+5000),4);
__builtin_memmove((R+4996),(R+5064),4);
__builtin_memmove((R+5000),(R+5004),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B71f875:{NFSU2_TR(0x71f875);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f879:{NFSU2_TR(0x71f879);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f87e:{NFSU2_TR(0x71f87e);
__builtin_memmove((R+5056),(R+4608),16);
}
B71f882:{NFSU2_TR(0x71f882);
__builtin_memmove((R+4622),(R+4678),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+4676),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+4674),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+4672),2);
}
B71f886:{NFSU2_TR(0x71f886);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4680),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4682),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4684),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4686),2);
}
B71f88a:{NFSU2_TR(0x71f88a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f88f:{NFSU2_TR(0x71f88f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f894:{NFSU2_TR(0x71f894);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f898:{NFSU2_TR(0x71f898);
__builtin_memmove((R+4750),(R+4806),2);
__builtin_memmove((R+4748),(R+4742),2);
__builtin_memmove((R+4746),(R+4804),2);
__builtin_memmove((R+4744),(R+4740),2);
__builtin_memmove((R+4742),(R+4802),2);
__builtin_memmove((R+4740),(R+4738),2);
__builtin_memmove((R+4738),(R+4800),2);
}
B71f89c:{NFSU2_TR(0x71f89c);
__builtin_memmove((R+4672),(R+4680),2);
__builtin_memmove((R+4674),(R+4808),2);
__builtin_memmove((R+4676),(R+4682),2);
__builtin_memmove((R+4678),(R+4810),2);
__builtin_memmove((R+4680),(R+4684),2);
__builtin_memmove((R+4682),(R+4812),2);
__builtin_memmove((R+4684),(R+4686),2);
__builtin_memmove((R+4686),(R+4814),2);
}
B71f8a0:{NFSU2_TR(0x71f8a0);
__builtin_memmove((R+4800),(R+4608),16);
}
B71f8a4:{NFSU2_TR(0x71f8a4);
__builtin_memmove((R+4620),(R+4740),4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(R+4736),4);
}
B71f8a8:{NFSU2_TR(0x71f8a8);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4744),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B71f8ac:{NFSU2_TR(0x71f8ac);
__builtin_memmove((R+4736),(R+5056),16);
}
B71f8b0:{NFSU2_TR(0x71f8b0);
__builtin_memmove((R+4748),(R+4676),4);
__builtin_memmove((R+4744),(R+4740),4);
__builtin_memmove((R+4740),(R+4672),4);
}
B71f8b4:{NFSU2_TR(0x71f8b4);
__builtin_memmove((R+5056),(R+5064),4);
__builtin_memmove((R+5060),(R+4680),4);
__builtin_memmove((R+5064),(R+5068),4);
__builtin_memmove((R+5068),(R+4684),4);
}
B71f8b8:{NFSU2_TR(0x71f8b8);
__builtin_memmove((R+4672),(R+4608),16);
}
B71f8bc:{NFSU2_TR(0x71f8bc);
__builtin_memmove((R+4616),(R+4864),8);
}
B71f8c0:{NFSU2_TR(0x71f8c0);
__builtin_memmove((R+4672),(R+4680),8);
__builtin_memmove((R+4680),(R+4872),8);
}
B71f8c4:{NFSU2_TR(0x71f8c4);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71f8c8:{NFSU2_TR(0x71f8c8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8cd:{NFSU2_TR(0x71f8cd);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f8d2:{NFSU2_TR(0x71f8d2);
__builtin_memmove((R+4672),(R+4800),16);
}
B71f8d6:{NFSU2_TR(0x71f8d6);
__builtin_memmove((R+4680),(R+4608),8);
}
B71f8da:{NFSU2_TR(0x71f8da);
__builtin_memmove((R+4800),(R+4808),8);
__builtin_memmove((R+4808),(R+4616),8);
}
B71f8de:{NFSU2_TR(0x71f8de);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f8e2:{NFSU2_TR(0x71f8e2);
__builtin_memmove((R+4872),(R+4928),8);
}
B71f8e6:{NFSU2_TR(0x71f8e6);
__builtin_memmove((R+4736),(R+4744),8);
__builtin_memmove((R+4744),(R+4936),8);
}
B71f8ea:{NFSU2_TR(0x71f8ea);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8ef:{NFSU2_TR(0x71f8ef);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8f4:{NFSU2_TR(0x71f8f4);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8f9:{NFSU2_TR(0x71f8f9);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f8fe:{NFSU2_TR(0x71f8fe);
__builtin_memmove((R+4928),(R+5056),16);
}
B71f902:{NFSU2_TR(0x71f902);
__builtin_memmove((R+4936),(R+4992),8);
}
B71f906:{NFSU2_TR(0x71f906);
__builtin_memmove((R+5056),(R+5064),8);
__builtin_memmove((R+5064),(R+5000),8);
}
B71f90a:{NFSU2_TR(0x71f90a);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f90f:{NFSU2_TR(0x71f90f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f914:{NFSU2_TR(0x71f914);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f919:{NFSU2_TR(0x71f919);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71f91e:{NFSU2_TR(0x71f91e);
__builtin_memmove((R+4864),(R+4736),16);
}
B71f922:{NFSU2_TR(0x71f922);
{wv<16>((R+4864),uo::pmulhw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B71f926:{NFSU2_TR(0x71f926);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71f92b:{NFSU2_TR(0x71f92b);
__builtin_memmove((R+4928),(R+4672),16);
}
B71f92f:{NFSU2_TR(0x71f92f);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71f933:{NFSU2_TR(0x71f933);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71f938:{NFSU2_TR(0x71f938);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((R+4608),(U+0),16);
}
B71f93c:{NFSU2_TR(0x71f93c);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B71f940:{NFSU2_TR(0x71f940);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B71f945:{NFSU2_TR(0x71f945);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f949:{NFSU2_TR(0x71f949);
__builtin_memmove((R+4928),(R+4608),16);
}
B71f94d:{NFSU2_TR(0x71f94d);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4800))));}
}
B71f951:{NFSU2_TR(0x71f951);
wv<16>((R+4992),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4992)),rv<16>((R+4992))));
}
B71f955:{NFSU2_TR(0x71f955);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f959:{NFSU2_TR(0x71f959);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4800))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4802))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4804))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4806))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4808))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4810))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4812))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4814))));
}
B71f95d:{NFSU2_TR(0x71f95d);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+5056))));}
}
B71f961:{NFSU2_TR(0x71f961);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71f966:{NFSU2_TR(0x71f966);
__builtin_memmove((R+4672),(R+4736),16);
}
B71f96a:{NFSU2_TR(0x71f96a);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4736),uo::pmulhw<16>(rv<16>((R+4736)),rv<16>((U+4))));}
}
B71f96f:{NFSU2_TR(0x71f96f);
{wv<16>((R+4608),uo::psubsw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f973:{NFSU2_TR(0x71f973);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4686))));
}
B71f977:{NFSU2_TR(0x71f977);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::pmulhw<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B71f97c:{NFSU2_TR(0x71f97c);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4864))));}
}
B71f980:{NFSU2_TR(0x71f980);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>((R+4608))));}
}
B71f984:{NFSU2_TR(0x71f984);
{wv<16>((R+4800),uo::psubsw<16>(rv<16>((R+4800)),rv<16>((R+4992))));}
}
B71f988:{NFSU2_TR(0x71f988);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4992))));}
}
B71f98c:{NFSU2_TR(0x71f98c);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>((R+4800))));}
}
B71f990:{NFSU2_TR(0x71f990);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f995:{NFSU2_TR(0x71f995);
u8 U[20];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71f99a:{NFSU2_TR(0x71f99a);
__builtin_memmove((R+4928),(R+4800),16);
}
B71f99e:{NFSU2_TR(0x71f99e);
{wv<16>((R+4800),uo::pmulhw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71f9a2:{NFSU2_TR(0x71f9a2);
__builtin_memmove((R+5056),(R+4736),16);
}
B71f9a6:{NFSU2_TR(0x71f9a6);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71f9ab:{NFSU2_TR(0x71f9ab);
__builtin_memmove((R+4736),(R+4608),16);
}
B71f9af:{NFSU2_TR(0x71f9af);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+8))),16);
__builtin_memmove((R+4992),(U+0),16);
}
B71f9b3:{NFSU2_TR(0x71f9b3);
{wv<16>((R+4608),uo::pmulhw<16>(rv<16>((R+4608)),rv<16>((R+4864))));}
}
B71f9b7:{NFSU2_TR(0x71f9b7);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4800))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4802))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4804))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4806))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4808))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4810))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4812))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4814))));
}
B71f9bb:{NFSU2_TR(0x71f9bb);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B71f9bf:{NFSU2_TR(0x71f9bf);
w2(R+4736,u16(u32(r2(R+4736))+u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))+u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))+u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))+u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))+u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))+u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))+u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))+u32(r2(R+4622))));
}
B71f9c3:{NFSU2_TR(0x71f9c3);
__builtin_memmove((R+4608),(R+4992),16);
}
B71f9c7:{NFSU2_TR(0x71f9c7);
{wv<16>((R+4992),uo::pmulhw<16>(rv<16>((R+4992)),rv<16>((R+4864))));}
}
B71f9cb:{NFSU2_TR(0x71f9cb);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f9cf:{NFSU2_TR(0x71f9cf);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4928))));}
}
B71f9d3:{NFSU2_TR(0x71f9d3);
w2(R+4992,u16(u32(r2(R+4992))+u32(r2(R+4608))));
w2(R+4994,u16(u32(r2(R+4994))+u32(r2(R+4610))));
w2(R+4996,u16(u32(r2(R+4996))+u32(r2(R+4612))));
w2(R+4998,u16(u32(r2(R+4998))+u32(r2(R+4614))));
w2(R+5000,u16(u32(r2(R+5000))+u32(r2(R+4616))));
w2(R+5002,u16(u32(r2(R+5002))+u32(r2(R+4618))));
w2(R+5004,u16(u32(r2(R+5004))+u32(r2(R+4620))));
w2(R+5006,u16(u32(r2(R+5006))+u32(r2(R+4622))));
}
B71f9d7:{NFSU2_TR(0x71f9d7);
__builtin_memmove((R+4864),(R+4992),16);
}
B71f9db:{NFSU2_TR(0x71f9db);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4736))));}
}
B71f9df:{NFSU2_TR(0x71f9df);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4736))));}
}
B71f9e3:{NFSU2_TR(0x71f9e3);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B71f9e8:{NFSU2_TR(0x71f9e8);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>((R+4992))));}
}
B71f9ec:{NFSU2_TR(0x71f9ec);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4672))));}
}
B71f9f0:{NFSU2_TR(0x71f9f0);
{wv<16>((R+4736),uo::paddsw<16>(rv<16>((R+4736)),rv<16>(gp(0x817e20))));}
}
B71f9f8:{NFSU2_TR(0x71f9f8);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4672))));}
}
B71f9fc:{NFSU2_TR(0x71f9fc);
{wv<16>((R+4672),uo::paddsw<16>(rv<16>((R+4672)),rv<16>((R+4736))));}
}
B71fa00:{NFSU2_TR(0x71fa00);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0x4ull)));}
}
B71fa05:{NFSU2_TR(0x71fa05);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+5056))));}
}
B71fa09:{NFSU2_TR(0x71fa09);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0x4ull)));}
}
B71fa0e:{NFSU2_TR(0x71fa0e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71fa13:{NFSU2_TR(0x71fa13);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+5056))));}
}
B71fa17:{NFSU2_TR(0x71fa17);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa1c:{NFSU2_TR(0x71fa1c);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71fa20:{NFSU2_TR(0x71fa20);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa25:{NFSU2_TR(0x71fa25);
{wv<16>((R+4864),uo::psubsw<16>(rv<16>((R+4864)),rv<16>((R+4800))));}
}
B71fa29:{NFSU2_TR(0x71fa29);
{wv<16>((R+4864),uo::paddsw<16>(rv<16>((R+4864)),rv<16>(gp(0x817e20))));}
}
B71fa31:{NFSU2_TR(0x71fa31);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4800))));}
}
B71fa35:{NFSU2_TR(0x71fa35);
{wv<16>((R+4800),uo::paddsw<16>(rv<16>((R+4800)),rv<16>((R+4864))));}
}
B71fa39:{NFSU2_TR(0x71fa39);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71fa3e:{NFSU2_TR(0x71fa3e);
{wv<16>((R+4992),uo::psubsw<16>(rv<16>((R+4992)),rv<16>((R+4928))));}
}
B71fa42:{NFSU2_TR(0x71fa42);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x4ull)));}
}
B71fa47:{NFSU2_TR(0x71fa47);
{wv<16>((R+4992),uo::paddsw<16>(rv<16>((R+4992)),rv<16>(gp(0x817e20))));}
}
B71fa4f:{NFSU2_TR(0x71fa4f);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4928))));}
}
B71fa53:{NFSU2_TR(0x71fa53);
{wv<16>((R+4928),uo::paddsw<16>(rv<16>((R+4928)),rv<16>((R+4992))));}
}
B71fa57:{NFSU2_TR(0x71fa57);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x4ull)));}
}
B71fa5c:{NFSU2_TR(0x71fa5c);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa61:{NFSU2_TR(0x71fa61);
{wv<16>((R+4928),uo::psraw<16>(rv<16>((R+4928)),V(0x4ull)));}
}
B71fa66:{NFSU2_TR(0x71fa66);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa6b:{NFSU2_TR(0x71fa6b);
{wv<16>((R+5056),uo::psubsw<16>(rv<16>((R+5056)),rv<16>((R+4608))));}
}
B71fa6f:{NFSU2_TR(0x71fa6f);
{wv<16>((R+5056),uo::paddsw<16>(rv<16>((R+5056)),rv<16>(gp(0x817e20))));}
}
B71fa77:{NFSU2_TR(0x71fa77);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B71fa7b:{NFSU2_TR(0x71fa7b);
{wv<16>((R+4608),uo::paddsw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71fa7f:{NFSU2_TR(0x71fa7f);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x4ull)));}
}
B71fa84:{NFSU2_TR(0x71fa84);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa89:{NFSU2_TR(0x71fa89);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x4ull)));}
}
B71fa8e:{NFSU2_TR(0x71fa8e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa93:{NFSU2_TR(0x71fa93);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fa98:{NFSU2_TR(0x71fa98);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71fa9c:{NFSU2_TR(0x71fa9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fa9d:{NFSU2_TR(0x71fa9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fa9e:{NFSU2_TR(0x71fa9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71fa9f:{NFSU2_TR(0x71fa9f);
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
PN u32 blk_71faa0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71faa0:L71faa0:{bud-=26;NFSU2_TR(0x71faa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71faa1:{NFSU2_TR(0x71faa1);
__builtin_memmove((R+20),(G+16),4);
}
B71faa3:{NFSU2_TR(0x71faa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71faa6:{NFSU2_TR(0x71faa6);
w4(R+8,u32(0xfull));
}
B71faab:{NFSU2_TR(0x71faab);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B71faaf:{NFSU2_TR(0x71faaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fab2:{NFSU2_TR(0x71fab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fab5:{NFSU2_TR(0x71fab5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71fab9:{NFSU2_TR(0x71fab9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71fabd:{NFSU2_TR(0x71fabd);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(R+4672))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(R+4674))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(R+4676))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(R+4678))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(R+4680))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(R+4682))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(R+4684))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(R+4686))));
}
B71fac1:{NFSU2_TR(0x71fac1);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71fac5:{NFSU2_TR(0x71fac5);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x5ull)));}
}
B71faca:{NFSU2_TR(0x71faca);
__builtin_memmove((R+4622),(R+4614),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+4612),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+4610),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+4608),2);
}
B71face:{NFSU2_TR(0x71face);
__builtin_memmove((R+4620),(R+4612),4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(R+4608),4);
}
B71fad2:{NFSU2_TR(0x71fad2);
__builtin_memmove((R+4616),(R+4608),8);
}
B71fad6:{NFSU2_TR(0x71fad6);
__builtin_memmove((R+4672),(R+4608),16);
}
B71fada:{NFSU2_TR(0x71fada);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B71fade:{NFSU2_TR(0x71fade);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fae3:{NFSU2_TR(0x71fae3);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fae8:{NFSU2_TR(0x71fae8);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71faed:{NFSU2_TR(0x71faed);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71faf2:{NFSU2_TR(0x71faf2);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71faf7:{NFSU2_TR(0x71faf7);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fafc:{NFSU2_TR(0x71fafc);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71fb01:{NFSU2_TR(0x71fb01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71fb02:{NFSU2_TR(0x71fb02);
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
PN u32 blk_71fb03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fb03:L71fb03:{bud-=13;NFSU2_TR(0x71fb03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fb04:{NFSU2_TR(0x71fb04);
__builtin_memmove((R+20),(G+16),4);
}
B71fb06:{NFSU2_TR(0x71fb06);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xcull))));
}
B71fb09:{NFSU2_TR(0x71fb09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fb0c:{NFSU2_TR(0x71fb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb10:{NFSU2_TR(0x71fb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb14:{NFSU2_TR(0x71fb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fb17:{NFSU2_TR(0x71fb17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fb18:{NFSU2_TR(0x71fb18);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+0))));
}
B71fb1a:{NFSU2_TR(0x71fb1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fb1b:{NFSU2_TR(0x71fb1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fb1e:{NFSU2_TR(0x71fb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb25:{NFSU2_TR(0x71fb25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_71fb26(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fb26(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fb26:L71fb26:{bud-=25;NFSU2_TR(0x71fb26);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B71fb2a:{NFSU2_TR(0x71fb2a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(R+24,u32(r1(U+0)));
}
B71fb2d:{NFSU2_TR(0x71fb2d);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B71fb31:{NFSU2_TR(0x71fb31);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71fb35:{NFSU2_TR(0x71fb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71fb38:{NFSU2_TR(0x71fb38);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+0))));
}
B71fb3a:{NFSU2_TR(0x71fb3a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B71fb3c:{NFSU2_TR(0x71fb3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb3f:{NFSU2_TR(0x71fb3f);
__builtin_memmove((G+0),(R+8),4);
}
B71fb41:{NFSU2_TR(0x71fb41);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B71fb44:{NFSU2_TR(0x71fb44);
__builtin_memmove((R+12),(R+24),4);
}
B71fb46:{NFSU2_TR(0x71fb46);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B71fb49:{NFSU2_TR(0x71fb49);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+0))));
}
B71fb4b:{NFSU2_TR(0x71fb4b);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B71fb4f:{NFSU2_TR(0x71fb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B71fb52:{NFSU2_TR(0x71fb52);
__builtin_memmove((R+8),(G+0),4);
}
B71fb54:{NFSU2_TR(0x71fb54);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B71fb57:{NFSU2_TR(0x71fb57);
__builtin_memmove((G+0),(R+28),4);
}
B71fb59:{NFSU2_TR(0x71fb59);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B71fb5c:{NFSU2_TR(0x71fb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B71fb5f:{NFSU2_TR(0x71fb5f);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B71fb61:{NFSU2_TR(0x71fb61);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+12))));
}
B71fb63:{NFSU2_TR(0x71fb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71fb66:{NFSU2_TR(0x71fb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fb69:{NFSU2_TR(0x71fb69);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fb26u);}goto L71fb26;}}
}
B71fb6b:L71fb6b:{bud-=10;NFSU2_TR(0x71fb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fb6e:{NFSU2_TR(0x71fb6e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B71fb71:{NFSU2_TR(0x71fb71);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B71fb74:{NFSU2_TR(0x71fb74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fb75:{NFSU2_TR(0x71fb75);
u8 U[6];
w1(F+0,u8((r4(G+0))<(r4(G+4))));
w4(G+0,u32(u32(r4(G+0))-u32(r4(G+4))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71fb77:{NFSU2_TR(0x71fb77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fb78:{NFSU2_TR(0x71fb78);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
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
B71fb7b:{NFSU2_TR(0x71fb7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fb7c:{NFSU2_TR(0x71fb7c);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B71fb7d:{NFSU2_TR(0x71fb7d);
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
PN u32 blk_71fb7e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fb7e:L71fb7e:{bud-=10;NFSU2_TR(0x71fb7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fb7f:{NFSU2_TR(0x71fb7f);
__builtin_memmove((R+20),(G+16),4);
}
B71fb81:{NFSU2_TR(0x71fb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fb84:{NFSU2_TR(0x71fb84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fb85:{NFSU2_TR(0x71fb85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fb86:{NFSU2_TR(0x71fb86);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B71fb88:{NFSU2_TR(0x71fb88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fb89:{NFSU2_TR(0x71fb89);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4538ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B71fb93:{NFSU2_TR(0x71fb93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fb96:{NFSU2_TR(0x71fb96);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4938ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_71fb9c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fb9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fb9c:L71fb9c:{bud-=12;NFSU2_TR(0x71fb9c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fba2:{NFSU2_TR(0x71fba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B71fba5:{NFSU2_TR(0x71fba5);
w4(G+0,shl<u32>(r4(G+0),u64(u32(0x1ull))));
}
B71fba7:{NFSU2_TR(0x71fba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B71fbaa:{NFSU2_TR(0x71fbaa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71fbac:{NFSU2_TR(0x71fbac);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x71fbac);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(G+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x71fbac);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B71fbae:{NFSU2_TR(0x71fbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x5ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fbb2:{NFSU2_TR(0x71fbb2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B71fbb3:{NFSU2_TR(0x71fbb3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B71fbb5:{NFSU2_TR(0x71fbb5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B71fbb8:{NFSU2_TR(0x71fbb8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(R+12))<(r4(U+8))));
}
B71fbbe:{NFSU2_TR(0x71fbbe);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fb9cu);}goto L71fb9c;}}
}
B71fbc0:L71fbc0:{bud-=4;NFSU2_TR(0x71fbc0);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4538ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fbc6:{NFSU2_TR(0x71fbc6);
w4(G+0,u32(0xffull));
}
B71fbcb:{NFSU2_TR(0x71fbcb);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(R+8))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71fbcd:{NFSU2_TR(0x71fbcd);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fbe7(ARGS);}}
}
B71fbcf:L71fbcf:{bud-=4;NFSU2_TR(0x71fbcf);
w4(R+24,u32(0x124eull));
}
B71fbd4:{NFSU2_TR(0x71fbd4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71fbd6:{NFSU2_TR(0x71fbd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B71fbd9:{NFSU2_TR(0x71fbd9);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
{[[clang::musttail]] return blk_71fbdb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fbdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fbdb:L71fbdb:{bud-=4;NFSU2_TR(0x71fbdb);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(G+4)),r4(U+0));
}
B71fbe1:{NFSU2_TR(0x71fbe1);
w1(F+0,u8((r4(G+4))<(u32(0x4ull))));
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
}
B71fbe4:{NFSU2_TR(0x71fbe4);
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
B71fbe5:{NFSU2_TR(0x71fbe5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fbdbu);}goto L71fbdb;}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fbe7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fbe7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fbe7:L71fbe7:{bud-=5;NFSU2_TR(0x71fbe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fbe8:{NFSU2_TR(0x71fbe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fbe9:{NFSU2_TR(0x71fbe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fbea:{NFSU2_TR(0x71fbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71fbeb:{NFSU2_TR(0x71fbeb);
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
PN u32 blk_71fbec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fbec:L71fbec:{bud-=12;NFSU2_TR(0x71fbec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fbed:{NFSU2_TR(0x71fbed);
__builtin_memmove((R+20),(G+16),4);
}
B71fbef:{NFSU2_TR(0x71fbef);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x24ull))));
}
B71fbf2:{NFSU2_TR(0x71fbf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fbf5:{NFSU2_TR(0x71fbf5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fbf6:{NFSU2_TR(0x71fbf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fbf7:{NFSU2_TR(0x71fbf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fbf8:{NFSU2_TR(0x71fbf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71fbfb:{NFSU2_TR(0x71fbfb);
w1(R+8,u8(u32(r1(R+8))|u32(u8(0xffull))));
}
B71fbfe:{NFSU2_TR(0x71fbfe);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B71fc00:{NFSU2_TR(0x71fc00);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B71fc02:{NFSU2_TR(0x71fc02);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fc2d(ARGS);}}
}
B71fc04:L71fc04:{bud-=1;NFSU2_TR(0x71fc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_71fc07(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc07(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc07:L71fc07:{bud-=3;NFSU2_TR(0x71fc07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fc0a:{NFSU2_TR(0x71fc0a);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B71fc0c:{NFSU2_TR(0x71fc0c);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fc20(ARGS);}}
{[[clang::musttail]] return blk_71fc0e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc0e:L71fc0e:{bud-=3;NFSU2_TR(0x71fc0e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((G+0),(U+0),1);
}
B71fc10:{NFSU2_TR(0x71fc10);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(F+0,u8((r1(G+0))<(r1(U+0))));
}
B71fc12:{NFSU2_TR(0x71fc12);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fc16(ARGS);}}
}
B71fc14:L71fc14:{bud-=1;NFSU2_TR(0x71fc14);
__builtin_memmove((R+8),(G+0),1);
{[[clang::musttail]] return blk_71fc16(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc16:L71fc16:{bud-=2;NFSU2_TR(0x71fc16);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(F+0,u8((r1(G+0))<(r1(U+0))));
w1(U+1,u8(u32(r1(G+0))-u32(r1(U+0))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B71fc18:{NFSU2_TR(0x71fc18);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fc1c(ARGS);}}
}
B71fc1a:L71fc1a:{bud-=1;NFSU2_TR(0x71fc1a);
__builtin_memmove((R+12),(G+0),1);
{[[clang::musttail]] return blk_71fc1c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc1c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc1c:L71fc1c:{bud-=3;NFSU2_TR(0x71fc1c);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B71fc1d:{NFSU2_TR(0x71fc1d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
}
B71fc1e:{NFSU2_TR(0x71fc1e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fc0eu);}[[clang::musttail]] return blk_71fc0e(ARGS);}}
{[[clang::musttail]] return blk_71fc20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc20:L71fc20:{bud-=5;NFSU2_TR(0x71fc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fc23:{NFSU2_TR(0x71fc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B71fc26:{NFSU2_TR(0x71fc26);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B71fc28:{NFSU2_TR(0x71fc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71fc2b:{NFSU2_TR(0x71fc2b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fc07u);}[[clang::musttail]] return blk_71fc07(ARGS);}}
{[[clang::musttail]] return blk_71fc2d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc2d:L71fc2d:{bud-=10;NFSU2_TR(0x71fc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fc30:{NFSU2_TR(0x71fc30);
w4(R+8,u32(r1(R+8)));
}
B71fc33:{NFSU2_TR(0x71fc33);
w4(R+24,u32(0x124eull));
}
B71fc38:{NFSU2_TR(0x71fc38);
w4(G+0,u32(r1(R+12)));
}
B71fc3b:{NFSU2_TR(0x71fc3b);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71fc3d:{NFSU2_TR(0x71fc3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B71fc40:{NFSU2_TR(0x71fc40);
u8 U[16];
w4(U+0,u32(u32(u32(0x453cull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B71fc47:{NFSU2_TR(0x71fc47);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+0,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71fc49:{NFSU2_TR(0x71fc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc4c:{NFSU2_TR(0x71fc4c);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_71fc51(ARGS);}}
}
B71fc4e:L71fc4e:{bud-=1;NFSU2_TR(0x71fc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_71fc51(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc51:L71fc51:{bud-=7;NFSU2_TR(0x71fc51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fc54:{NFSU2_TR(0x71fc54);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B71fc56:{NFSU2_TR(0x71fc56);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B71fc59:{NFSU2_TR(0x71fc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fc5c:{NFSU2_TR(0x71fc5c);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B71fc5e:{NFSU2_TR(0x71fc5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc61:{NFSU2_TR(0x71fc61);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fd0c(ARGS);}}
}
B71fc67:L71fc67:{bud-=7;NFSU2_TR(0x71fc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fc6a:{NFSU2_TR(0x71fc6a);
w4(R+8,u32(0-u32(r4(R+8))));
}
B71fc6c:{NFSU2_TR(0x71fc6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((G+0),(U+0),4);
}
B71fc6f:{NFSU2_TR(0x71fc6f);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B71fc71:{NFSU2_TR(0x71fc71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc74:{NFSU2_TR(0x71fc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fc77:{NFSU2_TR(0x71fc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_71fc7a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc7a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc7a:L71fc7a:{bud-=3;NFSU2_TR(0x71fc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fc7d:{NFSU2_TR(0x71fc7d);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B71fc7f:{NFSU2_TR(0x71fc7f);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fcde(ARGS);}}
}
B71fc81:L71fc81:{bud-=1;NFSU2_TR(0x71fc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_71fc84(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fc84(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fc84:L71fc84:{bud-=18;NFSU2_TR(0x71fc84);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(G+0,u32(r1(U+0)));
}
B71fc87:{NFSU2_TR(0x71fc87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fc8a:{NFSU2_TR(0x71fc8a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(G+4,u32(r1(U+0)));
}
B71fc8d:{NFSU2_TR(0x71fc8d);
w4(G+0,u32(u32(r4(G+0))-u32(r4(G+4))));
}
B71fc8f:{NFSU2_TR(0x71fc8f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(G+4,u32(r1(U+0)));
}
B71fc92:{NFSU2_TR(0x71fc92);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B71fc93:{NFSU2_TR(0x71fc93);
__builtin_memmove((R+12),(G+0),4);
}
B71fc95:{NFSU2_TR(0x71fc95);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(G+0,u32(r1(U+0)));
}
B71fc98:{NFSU2_TR(0x71fc98);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+8))));
}
B71fc9a:{NFSU2_TR(0x71fc9a);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+8))));
}
B71fc9c:{NFSU2_TR(0x71fc9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B71fca0:{NFSU2_TR(0x71fca0);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B71fca2:{NFSU2_TR(0x71fca2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B71fca3:{NFSU2_TR(0x71fca3);
w4(G+0,u32(u32(r4(G+0))^u32(r4(R+8))));
}
B71fca5:{NFSU2_TR(0x71fca5);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B71fca7:{NFSU2_TR(0x71fca7);
w4(G+4,shl<u32>(r4(G+4),u64(u32(0x1ull))));
}
B71fca9:{NFSU2_TR(0x71fca9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B71fcac:{NFSU2_TR(0x71fcac);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_71fcb4(ARGS);}}
}
B71fcae:L71fcae:{bud-=2;NFSU2_TR(0x71fcae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B71fcb2:{NFSU2_TR(0x71fcb2);
{[[clang::musttail]] return blk_71fcb7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcb4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcb4:L71fcb4:{bud-=1;NFSU2_TR(0x71fcb4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(G+0,u32(r1(U+0)));
{[[clang::musttail]] return blk_71fcb7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcb7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcb7:L71fcb7:{bud-=3;NFSU2_TR(0x71fcb7);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B71fcb9:{NFSU2_TR(0x71fcb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B71fcbc:{NFSU2_TR(0x71fcbc);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_71fcc3(ARGS);}}
}
B71fcbe:L71fcbe:{bud-=2;NFSU2_TR(0x71fcbe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(G+0,u32(r1(U+0)));
}
B71fcc1:{NFSU2_TR(0x71fcc1);
{[[clang::musttail]] return blk_71fcc6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcc3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcc3:L71fcc3:{bud-=1;NFSU2_TR(0x71fcc3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(G+0,u32(r1(U+0)));
{[[clang::musttail]] return blk_71fcc6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcc6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcc6:L71fcc6:{bud-=8;NFSU2_TR(0x71fcc6);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B71fcc8:{NFSU2_TR(0x71fcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fccb:{NFSU2_TR(0x71fccb);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x2ull))));
}
B71fcce:{NFSU2_TR(0x71fcce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B71fcd1:{NFSU2_TR(0x71fcd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71fcd4:{NFSU2_TR(0x71fcd4);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(G+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B71fcd7:{NFSU2_TR(0x71fcd7);
__builtin_memmove((R+24),(R+28),4);
}
B71fcd9:{NFSU2_TR(0x71fcd9);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fc84u);}[[clang::musttail]] return blk_71fc84(ARGS);}}
}
B71fcdb:L71fcdb:{bud-=1;NFSU2_TR(0x71fcdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_71fcde(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcde(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcde:L71fcde:{bud-=5;NFSU2_TR(0x71fcde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fce1:{NFSU2_TR(0x71fce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71fce4:{NFSU2_TR(0x71fce4);
__builtin_memmove((R+12),(G+4),4);
}
B71fce6:{NFSU2_TR(0x71fce6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B71fce9:{NFSU2_TR(0x71fce9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+24),(U+0),4);
{[[clang::musttail]] return blk_71fcec(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcec:L71fcec:{bud-=1;NFSU2_TR(0x71fcec);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_71fcee(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x71fcecu);}goto L71fcec;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcee:L71fcee:{bud-=2;NFSU2_TR(0x71fcee);
__builtin_memmove((G+4),(R+12),4);
}
B71fcf0:{NFSU2_TR(0x71fcf0);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
{[[clang::musttail]] return blk_71fcf3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcf3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcf3:L71fcf3:{bud-=1;NFSU2_TR(0x71fcf3);
u8 U[35];
w1(U+34,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+34)){{[[clang::musttail]] return blk_71fcf5(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(F+10)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(bud<=0,0)){EXIT(0x71fcf3u);}goto L71fcf3;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fcf5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fcf5:L71fcf5:{bud-=7;NFSU2_TR(0x71fcf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fcf8:{NFSU2_TR(0x71fcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71fcfb:{NFSU2_TR(0x71fcfb);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B71fcfd:{NFSU2_TR(0x71fcfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71fd00:{NFSU2_TR(0x71fd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd03:{NFSU2_TR(0x71fd03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd06:{NFSU2_TR(0x71fd06);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fc7au);}[[clang::musttail]] return blk_71fc7a(ARGS);}}
{[[clang::musttail]] return blk_71fd0c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fd0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fd0c:L71fd0c:{bud-=3;NFSU2_TR(0x71fd0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd10:{NFSU2_TR(0x71fd10);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B71fd14:{NFSU2_TR(0x71fd14);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fdda(ARGS);}}
}
B71fd1a:L71fd1a:{bud-=5;NFSU2_TR(0x71fd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71fd1d:{NFSU2_TR(0x71fd1d);
__builtin_memmove((G+0),(R+12),4);
}
B71fd1f:{NFSU2_TR(0x71fd1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B71fd22:{NFSU2_TR(0x71fd22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd25:{NFSU2_TR(0x71fd25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_71fd28(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fd28(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fd28:L71fd28:{bud-=9;NFSU2_TR(0x71fd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fd2b:{NFSU2_TR(0x71fd2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fd2e:{NFSU2_TR(0x71fd2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd32:{NFSU2_TR(0x71fd32);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71fd35:{NFSU2_TR(0x71fd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fd38:{NFSU2_TR(0x71fd38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd3b:{NFSU2_TR(0x71fd3b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+0))));
}
B71fd3d:{NFSU2_TR(0x71fd3d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B71fd41:{NFSU2_TR(0x71fd41);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fdac(ARGS);}}
{[[clang::musttail]] return blk_71fd43(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fd43(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fd43:L71fd43:{bud-=19;NFSU2_TR(0x71fd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fd46:{NFSU2_TR(0x71fd46);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w4(G+4,u32(r1(U+0)));
}
B71fd49:{NFSU2_TR(0x71fd49);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+8,u32(r1(U+0)));
}
B71fd4c:{NFSU2_TR(0x71fd4c);
__builtin_memmove((G+0),(G+4),4);
}
B71fd4e:{NFSU2_TR(0x71fd4e);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B71fd50:{NFSU2_TR(0x71fd50);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B71fd51:{NFSU2_TR(0x71fd51);
__builtin_memmove((R+24),(G+0),4);
}
B71fd53:{NFSU2_TR(0x71fd53);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B71fd55:{NFSU2_TR(0x71fd55);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B71fd57:{NFSU2_TR(0x71fd57);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+8,u32(r1(U+0)));
}
B71fd5a:{NFSU2_TR(0x71fd5a);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B71fd5d:{NFSU2_TR(0x71fd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fd60:{NFSU2_TR(0x71fd60);
__builtin_memmove((G+0),(G+4),4);
}
B71fd62:{NFSU2_TR(0x71fd62);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B71fd64:{NFSU2_TR(0x71fd64);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B71fd65:{NFSU2_TR(0x71fd65);
w4(G+0,u32(u32(r4(G+0))^u32(r4(R+8))));
}
B71fd67:{NFSU2_TR(0x71fd67);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B71fd69:{NFSU2_TR(0x71fd69);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B71fd6c:{NFSU2_TR(0x71fd6c);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_71fd76(ARGS);}}
}
B71fd6e:L71fd6e:{bud-=3;NFSU2_TR(0x71fd6e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(G+0,u32(r1(U+0)));
}
B71fd71:{NFSU2_TR(0x71fd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd74:{NFSU2_TR(0x71fd74);
{[[clang::musttail]] return blk_71fd79(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fd76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fd76:L71fd76:{bud-=1;NFSU2_TR(0x71fd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_71fd79(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fd79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fd79:L71fd79:{bud-=2;NFSU2_TR(0x71fd79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B71fd7c:{NFSU2_TR(0x71fd7c);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_71fd86(ARGS);}}
}
B71fd7e:L71fd7e:{bud-=3;NFSU2_TR(0x71fd7e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(G+0,u32(r1(U+0)));
}
B71fd81:{NFSU2_TR(0x71fd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd84:{NFSU2_TR(0x71fd84);
{[[clang::musttail]] return blk_71fd89(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fd86(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fd86:L71fd86:{bud-=1;NFSU2_TR(0x71fd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_71fd89(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fd89(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fd89:L71fd89:{bud-=13;NFSU2_TR(0x71fd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fd8c:{NFSU2_TR(0x71fd8c);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71fd8f:{NFSU2_TR(0x71fd8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fd92:{NFSU2_TR(0x71fd92);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,sar<u32>(r4(G+4),u64(r4(U+0))));
}
B71fd95:{NFSU2_TR(0x71fd95);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B71fd99:{NFSU2_TR(0x71fd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fd9c:{NFSU2_TR(0x71fd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fd9f:{NFSU2_TR(0x71fd9f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+4))));
}
B71fda1:{NFSU2_TR(0x71fda1);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B71fda3:{NFSU2_TR(0x71fda3);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B71fda4:{NFSU2_TR(0x71fda4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+8))));
}
B71fda7:{NFSU2_TR(0x71fda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fdaa:{NFSU2_TR(0x71fdaa);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fd43u);}[[clang::musttail]] return blk_71fd43(ARGS);}}
{[[clang::musttail]] return blk_71fdac(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fdac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fdac:L71fdac:{bud-=5;NFSU2_TR(0x71fdac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71fdaf:{NFSU2_TR(0x71fdaf);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B71fdb1:{NFSU2_TR(0x71fdb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(r4(G+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+0))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B71fdb4:{NFSU2_TR(0x71fdb4);
__builtin_memmove((G+4),(R+12),4);
}
B71fdb6:{NFSU2_TR(0x71fdb6);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fdc7(ARGS);}}
{[[clang::musttail]] return blk_71fdb8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fdb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fdb8:L71fdb8:{bud-=6;NFSU2_TR(0x71fdb8);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B71fdbc:{NFSU2_TR(0x71fdbc);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(G+4)),r1(U+0));
}
B71fdbe:{NFSU2_TR(0x71fdbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B71fdc1:{NFSU2_TR(0x71fdc1);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B71fdc2:{NFSU2_TR(0x71fdc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+8))));
}
B71fdc5:{NFSU2_TR(0x71fdc5);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fdb8u);}goto L71fdb8;}}
{[[clang::musttail]] return blk_71fdc7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fdc7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fdc7:L71fdc7:{bud-=6;NFSU2_TR(0x71fdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fdca:{NFSU2_TR(0x71fdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fdcd:{NFSU2_TR(0x71fdcd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B71fdce:{NFSU2_TR(0x71fdce);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B71fdd1:{NFSU2_TR(0x71fdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fdd4:{NFSU2_TR(0x71fdd4);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71fd28u);}[[clang::musttail]] return blk_71fd28(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fdda(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fdda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fdda:L71fdda:{bud-=5;NFSU2_TR(0x71fdda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fddb:{NFSU2_TR(0x71fddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fddc:{NFSU2_TR(0x71fddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fddd:{NFSU2_TR(0x71fddd);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B71fdde:{NFSU2_TR(0x71fdde);
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
PN u32 blk_71fddf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fddf:L71fddf:{bud-=12;NFSU2_TR(0x71fddf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fde0:{NFSU2_TR(0x71fde0);
__builtin_memmove((R+20),(G+16),4);
}
B71fde2:{NFSU2_TR(0x71fde2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fde3:{NFSU2_TR(0x71fde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71fde6:{NFSU2_TR(0x71fde6);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B71fde8:{NFSU2_TR(0x71fde8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fde9:{NFSU2_TR(0x71fde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fdec:{NFSU2_TR(0x71fdec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71fdf2:{NFSU2_TR(0x71fdf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fdf5:{NFSU2_TR(0x71fdf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fdf6:{NFSU2_TR(0x71fdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71fdf9:{NFSU2_TR(0x71fdf9);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_71fdff(ARGS);}}
}
B71fdfb:L71fdfb:{bud-=2;NFSU2_TR(0x71fdfb);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B71fdfd:{NFSU2_TR(0x71fdfd);
{[[clang::musttail]] return blk_71fe05(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fdff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fdff:L71fdff:{bud-=3;NFSU2_TR(0x71fdff);
w4(R+12,u32(0-u32(r4(R+12))));
}
B71fe01:{NFSU2_TR(0x71fe01);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B71fe03:{NFSU2_TR(0x71fe03);
w4(R+12,u32(0-u32(r4(R+12))));
{[[clang::musttail]] return blk_71fe05(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe05(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe05:L71fe05:{bud-=3;NFSU2_TR(0x71fe05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71fe08:{NFSU2_TR(0x71fe08);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B71fe0a:{NFSU2_TR(0x71fe0a);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_71fe10(ARGS);}}
}
B71fe0c:L71fe0c:{bud-=2;NFSU2_TR(0x71fe0c);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B71fe0e:{NFSU2_TR(0x71fe0e);
{[[clang::musttail]] return blk_71fe16(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe10:L71fe10:{bud-=3;NFSU2_TR(0x71fe10);
w4(R+28,u32(0-u32(r4(R+28))));
}
B71fe12:{NFSU2_TR(0x71fe12);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B71fe14:{NFSU2_TR(0x71fe14);
w4(R+28,u32(0-u32(r4(R+28))));
{[[clang::musttail]] return blk_71fe16(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe16:L71fe16:{bud-=12;NFSU2_TR(0x71fe16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fe1c:{NFSU2_TR(0x71fe1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fe1f:{NFSU2_TR(0x71fe1f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B71fe22:{NFSU2_TR(0x71fe22);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fe24:{NFSU2_TR(0x71fe24);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fe25:{NFSU2_TR(0x71fe25);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B71fe29:{NFSU2_TR(0x71fe29);
w4(G+4,u32(u32(r4(G+4))-u32(r4(G+0))));
}
B71fe2b:{NFSU2_TR(0x71fe2b);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B71fe2d:{NFSU2_TR(0x71fe2d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(G+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+11,scarry<u32>(r4(G+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B71fe30:{NFSU2_TR(0x71fe30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fe31:{NFSU2_TR(0x71fe31);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fe32:{NFSU2_TR(0x71fe32);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c58),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71fe38ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe38(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe38:L71fe38:{bud-=7;NFSU2_TR(0x71fe38);
w4(R+12,u32(0-u32(r4(R+12))));
}
B71fe3a:{NFSU2_TR(0x71fe3a);
w4(R+28,u32(0-u32(r4(R+28))));
}
B71fe3c:{NFSU2_TR(0x71fe3c);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7ull))));
}
B71fe3f:{NFSU2_TR(0x71fe3f);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B71fe42:{NFSU2_TR(0x71fe42);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ull))));
}
B71fe45:{NFSU2_TR(0x71fe45);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71fe47:{NFSU2_TR(0x71fe47);
if(r1(F+6)){{[[clang::musttail]] return blk_71fe64(ARGS);}}
}
B71fe49:L71fe49:{bud-=7;NFSU2_TR(0x71fe49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fe4c:{NFSU2_TR(0x71fe4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B71fe50:{NFSU2_TR(0x71fe50);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fe52:{NFSU2_TR(0x71fe52);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fe53:{NFSU2_TR(0x71fe53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fe59:{NFSU2_TR(0x71fe59);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+4));
}
B71fe5b:{NFSU2_TR(0x71fe5b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ee4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71fe61ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe61(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe61:L71fe61:{bud-=1;NFSU2_TR(0x71fe61);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{[[clang::musttail]] return blk_71fe64(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe64(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe64:L71fe64:{bud-=2;NFSU2_TR(0x71fe64);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71fe66:{NFSU2_TR(0x71fe66);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fe85(ARGS);}}
}
B71fe68:L71fe68:{bud-=8;NFSU2_TR(0x71fe68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fe6e:{NFSU2_TR(0x71fe6e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B71fe71:{NFSU2_TR(0x71fe71);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B71fe74:{NFSU2_TR(0x71fe74);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+11,scarry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(F+7,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B71fe77:{NFSU2_TR(0x71fe77);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fe79:{NFSU2_TR(0x71fe79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fe7a:{NFSU2_TR(0x71fe7a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+4));
}
B71fe7c:{NFSU2_TR(0x71fe7c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71fe82ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe82(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe82:L71fe82:{bud-=1;NFSU2_TR(0x71fe82);
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
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fe85(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe85(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe85:L71fe85:{bud-=5;NFSU2_TR(0x71fe85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71fe86:{NFSU2_TR(0x71fe86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71fe87:{NFSU2_TR(0x71fe87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71fe88:{NFSU2_TR(0x71fe88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71fe89:{NFSU2_TR(0x71fe89);
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
PN u32 blk_71fe8a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe8a:L71fe8a:{bud-=7;NFSU2_TR(0x71fe8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71fe8c:{NFSU2_TR(0x71fe8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fe90:{NFSU2_TR(0x71fe90);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71fe94:{NFSU2_TR(0x71fe94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B71fe96:{NFSU2_TR(0x71fe96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71fe98:{NFSU2_TR(0x71fe98);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71fe9a:{NFSU2_TR(0x71fe9a);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fe9f(ARGS);}}
}
B71fe9c:L71fe9c:{bud-=1;NFSU2_TR(0x71fe9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fe9f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fe9f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fe9f:L71fe9f:{bud-=2;NFSU2_TR(0x71fe9f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B71fea1:{NFSU2_TR(0x71fea1);
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
PN u32 blk_71fea4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fea4:L71fea4:{bud-=4;NFSU2_TR(0x71fea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71fea6:{NFSU2_TR(0x71fea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71feaa:{NFSU2_TR(0x71feaa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71feac:{NFSU2_TR(0x71feac);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71feb2(ARGS);}}
}
B71feae:L71feae:{bud-=2;NFSU2_TR(0x71feae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71feb0:{NFSU2_TR(0x71feb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+4)),r4(U+0));
{[[clang::musttail]] return blk_71feb2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71feb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71feb2:L71feb2:{bud-=3;NFSU2_TR(0x71feb2);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71feb5:{NFSU2_TR(0x71feb5);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B71feb7:{NFSU2_TR(0x71feb7);
if(r1(F+6)){{[[clang::musttail]] return blk_71febd(ARGS);}}
}
B71feb9:L71feb9:{bud-=2;NFSU2_TR(0x71feb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B71febb:{NFSU2_TR(0x71febb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+4)),r4(U+0));
{[[clang::musttail]] return blk_71febd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71febd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71febd:L71febd:{bud-=3;NFSU2_TR(0x71febd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B71febf:{NFSU2_TR(0x71febf);
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
B71fec1:{NFSU2_TR(0x71fec1);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fec9(ARGS);}}
}
B71fec3:L71fec3:{bud-=2;NFSU2_TR(0x71fec3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fec6:{NFSU2_TR(0x71fec6);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fec9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fec9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fec9:L71fec9:{bud-=1;NFSU2_TR(0x71fec9);
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
PN u32 blk_71fecc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fecc:L71fecc:{bud-=8;NFSU2_TR(0x71fecc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fed0:{NFSU2_TR(0x71fed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fed1:{NFSU2_TR(0x71fed1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71fed5:{NFSU2_TR(0x71fed5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71fed6:{NFSU2_TR(0x71fed6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71feda:{NFSU2_TR(0x71feda);
__builtin_memmove((G+0),(G+4),4);
}
B71fedc:{NFSU2_TR(0x71fedc);
__builtin_memmove((R+8),(R+28),4);
}
B71fede:{NFSU2_TR(0x71fede);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
{[[clang::musttail]] return blk_71fee1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fee1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fee1:L71fee1:{bud-=1;NFSU2_TR(0x71fee1);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_71fee3(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x71fee1u);}goto L71fee1;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fee3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fee3:L71fee3:{bud-=2;NFSU2_TR(0x71fee3);
__builtin_memmove((G+4),(G+0),4);
}
B71fee5:{NFSU2_TR(0x71fee5);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71fee8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fee8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fee8:L71fee8:{bud-=1;NFSU2_TR(0x71fee8);
u8 U[35];
w1(U+34,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+34)){{[[clang::musttail]] return blk_71feea(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(F+10)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(bud<=0,0)){EXIT(0x71fee8u);}goto L71fee8;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71feea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71feea:L71feea:{bud-=4;NFSU2_TR(0x71feea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71feeb:{NFSU2_TR(0x71feeb);
__builtin_memmove((G+0),(R+8),4);
}
B71feed:{NFSU2_TR(0x71feed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71feee:{NFSU2_TR(0x71feee);
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
PN u32 blk_71feef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71feef:L71feef:{bud-=4;NFSU2_TR(0x71feef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71fef3:{NFSU2_TR(0x71fef3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71fef6:{NFSU2_TR(0x71fef6);
u8 U[14];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B71fefa:{NFSU2_TR(0x71fefa);
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
PN u32 blk_71fefb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fefb:L71fefb:{bud-=3;NFSU2_TR(0x71fefb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71feff:{NFSU2_TR(0x71feff);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ff02:{NFSU2_TR(0x71ff02);
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
PN u32 blk_71ff03(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff03:L71ff03:{bud-=3;NFSU2_TR(0x71ff03);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ff07:{NFSU2_TR(0x71ff07);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ff0a:{NFSU2_TR(0x71ff0a);
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
PN u32 blk_71ff0b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff0b:L71ff0b:{bud-=4;NFSU2_TR(0x71ff0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71ff0f:{NFSU2_TR(0x71ff0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ff11:{NFSU2_TR(0x71ff11);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(G+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+9))==(u8(0x0ull))));
}
B71ff14:{NFSU2_TR(0x71ff14);
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
PN u32 blk_71ff15(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff15:L71ff15:{bud-=6;NFSU2_TR(0x71ff15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff16:{NFSU2_TR(0x71ff16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff17:{NFSU2_TR(0x71ff17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ff1b:{NFSU2_TR(0x71ff1b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B71ff1d:{NFSU2_TR(0x71ff1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B71ff20:{NFSU2_TR(0x71ff20);
if(r1(F+6)){{[[clang::musttail]] return blk_720031(ARGS);}}
}
B71ff26:L71ff26:{bud-=6;NFSU2_TR(0x71ff26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+4),(U+0),4);
}
B71ff28:{NFSU2_TR(0x71ff28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff29:{NFSU2_TR(0x71ff29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff2a:{NFSU2_TR(0x71ff2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B71ff2d:{NFSU2_TR(0x71ff2d);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x38ull))));
}
B71ff30:{NFSU2_TR(0x71ff30);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71ff35ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x71fea4u);}[[clang::musttail]] return blk_71fea4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff35(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff35:L71ff35:{bud-=5;NFSU2_TR(0x71ff35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ff38:{NFSU2_TR(0x71ff38);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
}
B71ff3b:{NFSU2_TR(0x71ff3b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff3c:{NFSU2_TR(0x71ff3c);
w4(G+4,u32(0x8b446cull));
}
B71ff41:{NFSU2_TR(0x71ff41);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71ff46ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x71fea4u);}[[clang::musttail]] return blk_71fea4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff46(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff46:L71ff46:{bud-=5;NFSU2_TR(0x71ff46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ff49:{NFSU2_TR(0x71ff49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ff4b:{NFSU2_TR(0x71ff4b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B71ff4e:{NFSU2_TR(0x71ff4e);
u8 U[7];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B71ff51:{NFSU2_TR(0x71ff51);
if(r1(F+6)){{[[clang::musttail]] return blk_71ff5f(ARGS);}}
}
B71ff53:L71ff53:{bud-=3;NFSU2_TR(0x71ff53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71ff56:{NFSU2_TR(0x71ff56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff57:{NFSU2_TR(0x71ff57);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71ff5cull));
{[[clang::musttail]] return blk_7350e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff5c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff5c:L71ff5c:{bud-=1;NFSU2_TR(0x71ff5c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
{[[clang::musttail]] return blk_71ff5f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff5f:L71ff5f:{bud-=4;NFSU2_TR(0x71ff5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ff61:{NFSU2_TR(0x71ff61);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B71ff63:{NFSU2_TR(0x71ff63);
u8 U[10];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(F+0,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(F+6,u8((r2(U+8))==(u16(0x0ull))));
}
B71ff67:{NFSU2_TR(0x71ff67);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71ff83(ARGS);}}
{[[clang::musttail]] return blk_71ff69(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff69:L71ff69:{bud-=4;NFSU2_TR(0x71ff69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71ff6c:{NFSU2_TR(0x71ff6c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff6d:{NFSU2_TR(0x71ff6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff6e:{NFSU2_TR(0x71ff6e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71ff73ull));
{[[clang::musttail]] return blk_7357a0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff73(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff73:L71ff73:{bud-=8;NFSU2_TR(0x71ff73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ff75:{NFSU2_TR(0x71ff75);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B71ff79:{NFSU2_TR(0x71ff79);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B71ff7c:{NFSU2_TR(0x71ff7c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B71ff7d:{NFSU2_TR(0x71ff7d);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B71ff7f:{NFSU2_TR(0x71ff7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71ff80:{NFSU2_TR(0x71ff80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71ff81:{NFSU2_TR(0x71ff81);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71ff69u);}[[clang::musttail]] return blk_71ff69(ARGS);}}
{[[clang::musttail]] return blk_71ff83(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff83(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff83:L71ff83:{bud-=3;NFSU2_TR(0x71ff83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ff85:{NFSU2_TR(0x71ff85);
u8 U[7];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B71ff88:{NFSU2_TR(0x71ff88);
if(r1(F+6)){{[[clang::musttail]] return blk_71ff9b(ARGS);}}
}
B71ff8a:L71ff8a:{bud-=3;NFSU2_TR(0x71ff8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71ff8d:{NFSU2_TR(0x71ff8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ff8e:{NFSU2_TR(0x71ff8e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71ff93ull));
{[[clang::musttail]] return blk_735160(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff93(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff93:L71ff93:{bud-=2;NFSU2_TR(0x71ff93);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B71ff97:{NFSU2_TR(0x71ff97);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
{[[clang::musttail]] return blk_71ff9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ff9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ff9b:L71ff9b:{bud-=4;NFSU2_TR(0x71ff9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ff9d:{NFSU2_TR(0x71ff9d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B71ff9f:{NFSU2_TR(0x71ff9f);
u8 U[10];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(F+0,u8((r2(U+6))<(r2(R+12))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+12))));
w1(F+6,u8((r2(U+8))==(u16(0x0ull))));
}
B71ffa3:{NFSU2_TR(0x71ffa3);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71ffc4(ARGS);}}
{[[clang::musttail]] return blk_71ffa5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ffa5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ffa5:L71ffa5:{bud-=4;NFSU2_TR(0x71ffa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71ffa8:{NFSU2_TR(0x71ffa8);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ffa9:{NFSU2_TR(0x71ffa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ffaa:{NFSU2_TR(0x71ffaa);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71ffafull));
{[[clang::musttail]] return blk_735620(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ffaf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ffaf:L71ffaf:{bud-=9;NFSU2_TR(0x71ffaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B71ffb3:{NFSU2_TR(0x71ffb3);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B71ffb7:{NFSU2_TR(0x71ffb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ffb9:{NFSU2_TR(0x71ffb9);
u8 U[6];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B71ffbd:{NFSU2_TR(0x71ffbd);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B71ffbe:{NFSU2_TR(0x71ffbe);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B71ffc0:{NFSU2_TR(0x71ffc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71ffc1:{NFSU2_TR(0x71ffc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71ffc2:{NFSU2_TR(0x71ffc2);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71ffa5u);}[[clang::musttail]] return blk_71ffa5(ARGS);}}
{[[clang::musttail]] return blk_71ffc4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ffc4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ffc4:L71ffc4:{bud-=5;NFSU2_TR(0x71ffc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ffc6:{NFSU2_TR(0x71ffc6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B71ffc8:{NFSU2_TR(0x71ffc8);
u8 U[7];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(F+0,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B71ffcb:{NFSU2_TR(0x71ffcb);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ffce:{NFSU2_TR(0x71ffce);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_71fff6(ARGS);}}
{[[clang::musttail]] return blk_71ffd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ffd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ffd0:L71ffd0:{bud-=6;NFSU2_TR(0x71ffd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ffd2:{NFSU2_TR(0x71ffd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B71ffd5:{NFSU2_TR(0x71ffd5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B71ffd8:{NFSU2_TR(0x71ffd8);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B71ffdb:{NFSU2_TR(0x71ffdb);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(F+0,u8((r1(G+4))<(r1(U+3))));
w1(F+11,sborrow<u8>(r1(G+4),r1(U+3)));
w1(U+4,u8(u32(r1(G+4))-u32(r1(U+3))));
w1(F+7,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B71ffdd:{NFSU2_TR(0x71ffdd);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_71ffeb(ARGS);}}
}
B71ffdf:L71ffdf:{bud-=3;NFSU2_TR(0x71ffdf);
w4(G+4,u32(s32(s8(r1(G+4)))));
}
B71ffe2:{NFSU2_TR(0x71ffe2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ffe3:{NFSU2_TR(0x71ffe3);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817fa0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71ffeaull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ffea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ffea:L71ffea:{bud-=1;NFSU2_TR(0x71ffea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_71ffeb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ffeb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ffeb:L71ffeb:{bud-=5;NFSU2_TR(0x71ffeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71ffed:{NFSU2_TR(0x71ffed);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B71fff1:{NFSU2_TR(0x71fff1);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B71fff2:{NFSU2_TR(0x71fff2);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B71fff4:{NFSU2_TR(0x71fff4);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71ffd0u);}[[clang::musttail]] return blk_71ffd0(ARGS);}}
{[[clang::musttail]] return blk_71fff6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71fff6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71fff6:L71fff6:{bud-=4;NFSU2_TR(0x71fff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B71fff8:{NFSU2_TR(0x71fff8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B71fffa:{NFSU2_TR(0x71fffa);
u8 U[7];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(F+0,u8((r1(U+5))<(r1(R+12))));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B71fffd:{NFSU2_TR(0x71fffd);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_720020(ARGS);}}
{[[clang::musttail]] return blk_71ffff(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71ffff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ffff:L71ffff:{bud-=1;NFSU2_TR(0x71ffff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+0),(U+0),4);
{[[clang::musttail]] return blk_720001(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_71f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x71f001:[[clang::musttail]] return blk_71f001(c,a4,a0,a1,bud);
case 0x71f01c:[[clang::musttail]] return blk_71f01c(c,a4,a0,a1,bud);
case 0x71f021:[[clang::musttail]] return blk_71f021(c,a4,a0,a1,bud);
case 0x71f043:[[clang::musttail]] return blk_71f043(c,a4,a0,a1,bud);
case 0x71f045:[[clang::musttail]] return blk_71f045(c,a4,a0,a1,bud);
case 0x71f065:[[clang::musttail]] return blk_71f065(c,a4,a0,a1,bud);
case 0x71f082:[[clang::musttail]] return blk_71f082(c,a4,a0,a1,bud);
case 0x71f08d:[[clang::musttail]] return blk_71f08d(c,a4,a0,a1,bud);
case 0x71f090:[[clang::musttail]] return blk_71f090(c,a4,a0,a1,bud);
case 0x71f091:[[clang::musttail]] return blk_71f091(c,a4,a0,a1,bud);
case 0x71f093:[[clang::musttail]] return blk_71f093(c,a4,a0,a1,bud);
case 0x71f0ac:[[clang::musttail]] return blk_71f0ac(c,a4,a0,a1,bud);
case 0x71f0c4:[[clang::musttail]] return blk_71f0c4(c,a4,a0,a1,bud);
case 0x71f0e4:[[clang::musttail]] return blk_71f0e4(c,a4,a0,a1,bud);
case 0x71f102:[[clang::musttail]] return blk_71f102(c,a4,a0,a1,bud);
case 0x71f11e:[[clang::musttail]] return blk_71f11e(c,a4,a0,a1,bud);
case 0x71f147:[[clang::musttail]] return blk_71f147(c,a4,a0,a1,bud);
case 0x71f168:[[clang::musttail]] return blk_71f168(c,a4,a0,a1,bud);
case 0x71f1a6:[[clang::musttail]] return blk_71f1a6(c,a4,a0,a1,bud);
case 0x71f69f:[[clang::musttail]] return blk_71f69f(c,a4,a0,a1,bud);
case 0x71faa0:[[clang::musttail]] return blk_71faa0(c,a4,a0,a1,bud);
case 0x71fb03:[[clang::musttail]] return blk_71fb03(c,a4,a0,a1,bud);
case 0x71fb26:[[clang::musttail]] return blk_71fb26(c,a4,a0,a1,bud);
case 0x71fb7e:[[clang::musttail]] return blk_71fb7e(c,a4,a0,a1,bud);
case 0x71fb9c:[[clang::musttail]] return blk_71fb9c(c,a4,a0,a1,bud);
case 0x71fbdb:[[clang::musttail]] return blk_71fbdb(c,a4,a0,a1,bud);
case 0x71fbe7:[[clang::musttail]] return blk_71fbe7(c,a4,a0,a1,bud);
case 0x71fbec:[[clang::musttail]] return blk_71fbec(c,a4,a0,a1,bud);
case 0x71fc07:[[clang::musttail]] return blk_71fc07(c,a4,a0,a1,bud);
case 0x71fc0e:[[clang::musttail]] return blk_71fc0e(c,a4,a0,a1,bud);
case 0x71fc16:[[clang::musttail]] return blk_71fc16(c,a4,a0,a1,bud);
case 0x71fc1c:[[clang::musttail]] return blk_71fc1c(c,a4,a0,a1,bud);
case 0x71fc20:[[clang::musttail]] return blk_71fc20(c,a4,a0,a1,bud);
case 0x71fc2d:[[clang::musttail]] return blk_71fc2d(c,a4,a0,a1,bud);
case 0x71fc51:[[clang::musttail]] return blk_71fc51(c,a4,a0,a1,bud);
case 0x71fc7a:[[clang::musttail]] return blk_71fc7a(c,a4,a0,a1,bud);
case 0x71fc84:[[clang::musttail]] return blk_71fc84(c,a4,a0,a1,bud);
case 0x71fcb4:[[clang::musttail]] return blk_71fcb4(c,a4,a0,a1,bud);
case 0x71fcb7:[[clang::musttail]] return blk_71fcb7(c,a4,a0,a1,bud);
case 0x71fcc3:[[clang::musttail]] return blk_71fcc3(c,a4,a0,a1,bud);
case 0x71fcc6:[[clang::musttail]] return blk_71fcc6(c,a4,a0,a1,bud);
case 0x71fcde:[[clang::musttail]] return blk_71fcde(c,a4,a0,a1,bud);
case 0x71fcec:[[clang::musttail]] return blk_71fcec(c,a4,a0,a1,bud);
case 0x71fcee:[[clang::musttail]] return blk_71fcee(c,a4,a0,a1,bud);
case 0x71fcf3:[[clang::musttail]] return blk_71fcf3(c,a4,a0,a1,bud);
case 0x71fcf5:[[clang::musttail]] return blk_71fcf5(c,a4,a0,a1,bud);
case 0x71fd0c:[[clang::musttail]] return blk_71fd0c(c,a4,a0,a1,bud);
case 0x71fd28:[[clang::musttail]] return blk_71fd28(c,a4,a0,a1,bud);
case 0x71fd43:[[clang::musttail]] return blk_71fd43(c,a4,a0,a1,bud);
case 0x71fd76:[[clang::musttail]] return blk_71fd76(c,a4,a0,a1,bud);
case 0x71fd79:[[clang::musttail]] return blk_71fd79(c,a4,a0,a1,bud);
case 0x71fd86:[[clang::musttail]] return blk_71fd86(c,a4,a0,a1,bud);
case 0x71fd89:[[clang::musttail]] return blk_71fd89(c,a4,a0,a1,bud);
case 0x71fdac:[[clang::musttail]] return blk_71fdac(c,a4,a0,a1,bud);
case 0x71fdb8:[[clang::musttail]] return blk_71fdb8(c,a4,a0,a1,bud);
case 0x71fdc7:[[clang::musttail]] return blk_71fdc7(c,a4,a0,a1,bud);
case 0x71fdda:[[clang::musttail]] return blk_71fdda(c,a4,a0,a1,bud);
case 0x71fddf:[[clang::musttail]] return blk_71fddf(c,a4,a0,a1,bud);
case 0x71fdff:[[clang::musttail]] return blk_71fdff(c,a4,a0,a1,bud);
case 0x71fe05:[[clang::musttail]] return blk_71fe05(c,a4,a0,a1,bud);
case 0x71fe10:[[clang::musttail]] return blk_71fe10(c,a4,a0,a1,bud);
case 0x71fe16:[[clang::musttail]] return blk_71fe16(c,a4,a0,a1,bud);
case 0x71fe38:[[clang::musttail]] return blk_71fe38(c,a4,a0,a1,bud);
case 0x71fe61:[[clang::musttail]] return blk_71fe61(c,a4,a0,a1,bud);
case 0x71fe64:[[clang::musttail]] return blk_71fe64(c,a4,a0,a1,bud);
case 0x71fe82:[[clang::musttail]] return blk_71fe82(c,a4,a0,a1,bud);
case 0x71fe85:[[clang::musttail]] return blk_71fe85(c,a4,a0,a1,bud);
case 0x71fe8a:[[clang::musttail]] return blk_71fe8a(c,a4,a0,a1,bud);
case 0x71fe9f:[[clang::musttail]] return blk_71fe9f(c,a4,a0,a1,bud);
case 0x71fea4:[[clang::musttail]] return blk_71fea4(c,a4,a0,a1,bud);
case 0x71feb2:[[clang::musttail]] return blk_71feb2(c,a4,a0,a1,bud);
case 0x71febd:[[clang::musttail]] return blk_71febd(c,a4,a0,a1,bud);
case 0x71fec9:[[clang::musttail]] return blk_71fec9(c,a4,a0,a1,bud);
case 0x71fecc:[[clang::musttail]] return blk_71fecc(c,a4,a0,a1,bud);
case 0x71fee1:[[clang::musttail]] return blk_71fee1(c,a4,a0,a1,bud);
case 0x71fee3:[[clang::musttail]] return blk_71fee3(c,a4,a0,a1,bud);
case 0x71fee8:[[clang::musttail]] return blk_71fee8(c,a4,a0,a1,bud);
case 0x71feea:[[clang::musttail]] return blk_71feea(c,a4,a0,a1,bud);
case 0x71feef:[[clang::musttail]] return blk_71feef(c,a4,a0,a1,bud);
case 0x71fefb:[[clang::musttail]] return blk_71fefb(c,a4,a0,a1,bud);
case 0x71ff03:[[clang::musttail]] return blk_71ff03(c,a4,a0,a1,bud);
case 0x71ff0b:[[clang::musttail]] return blk_71ff0b(c,a4,a0,a1,bud);
case 0x71ff15:[[clang::musttail]] return blk_71ff15(c,a4,a0,a1,bud);
case 0x71ff35:[[clang::musttail]] return blk_71ff35(c,a4,a0,a1,bud);
case 0x71ff46:[[clang::musttail]] return blk_71ff46(c,a4,a0,a1,bud);
case 0x71ff5c:[[clang::musttail]] return blk_71ff5c(c,a4,a0,a1,bud);
case 0x71ff5f:[[clang::musttail]] return blk_71ff5f(c,a4,a0,a1,bud);
case 0x71ff69:[[clang::musttail]] return blk_71ff69(c,a4,a0,a1,bud);
case 0x71ff73:[[clang::musttail]] return blk_71ff73(c,a4,a0,a1,bud);
case 0x71ff83:[[clang::musttail]] return blk_71ff83(c,a4,a0,a1,bud);
case 0x71ff93:[[clang::musttail]] return blk_71ff93(c,a4,a0,a1,bud);
case 0x71ff9b:[[clang::musttail]] return blk_71ff9b(c,a4,a0,a1,bud);
case 0x71ffa5:[[clang::musttail]] return blk_71ffa5(c,a4,a0,a1,bud);
case 0x71ffaf:[[clang::musttail]] return blk_71ffaf(c,a4,a0,a1,bud);
case 0x71ffc4:[[clang::musttail]] return blk_71ffc4(c,a4,a0,a1,bud);
case 0x71ffd0:[[clang::musttail]] return blk_71ffd0(c,a4,a0,a1,bud);
case 0x71ffea:[[clang::musttail]] return blk_71ffea(c,a4,a0,a1,bud);
case 0x71ffeb:[[clang::musttail]] return blk_71ffeb(c,a4,a0,a1,bud);
case 0x71fff6:[[clang::musttail]] return blk_71fff6(c,a4,a0,a1,bud);
case 0x71ffff:[[clang::musttail]] return blk_71ffff(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_71f(Cpu& c){u8* R=c.regs.data();return ent_71f(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
