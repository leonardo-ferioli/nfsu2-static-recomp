#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_63c10e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_63c13a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_63c166(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68b0d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68b19f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68baac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c00a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c016(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c046(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c056(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c05e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c064(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c067(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c06a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c073(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c0e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c220(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c223(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c22d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c242(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c2b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c39f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c3a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c3c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c436(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c4fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c4ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c509(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c51e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c592(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c60d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c610(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c61a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c62f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c6a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c80b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c80d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c810(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c81a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c824(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c82f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c8a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c9c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c9c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c9ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c9e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68ca57(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cbc5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cbc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cbd2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cbe7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cbf5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cc98(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cd11(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cd20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cd49(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cd55(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cd85(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cd95(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cd9d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cda3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cda6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cda9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cdb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cdbc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68ce14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68ce64(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cffe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68d002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68d03f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68d465(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68d531(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c07d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c0c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c237(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c250(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c2a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c3b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c3d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c41a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c513(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c52c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c576(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c624(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c63d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c687(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c83d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c887(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c9d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c9f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68ca3b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cbdc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cce8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68ce7c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68cfb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_68c001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c001:L68c001:{bud-=3;NFSU2_TR(0x68c001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c004:{NFSU2_TR(0x68c004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B68c007:{NFSU2_TR(0x68c007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_68c00a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c00a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c00a:L68c00a:{bud-=3;NFSU2_TR(0x68c00a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B68c00c:{NFSU2_TR(0x68c00c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(r4(R+12))));
w1(F+11,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B68c00f:{NFSU2_TR(0x68c00f);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c073(ARGS);}}
}
B68c011:L68c011:{bud-=1;NFSU2_TR(0x68c011);
w4(R+28,u32(0x400ull));
{[[clang::musttail]] return blk_68c016(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c016(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c016:L68c016:{bud-=15;NFSU2_TR(0x68c016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c019:{NFSU2_TR(0x68c019);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(G+4,u32(r2(U+8)));
}
B68c01d:{NFSU2_TR(0x68c01d);
__builtin_memmove((R+8),(G+4),4);
}
B68c01f:{NFSU2_TR(0x68c01f);
__builtin_memmove((R+24),(G+4),4);
}
B68c021:{NFSU2_TR(0x68c021);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7c00ull))));
}
B68c027:{NFSU2_TR(0x68c027);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffff8000ull))));
}
B68c02d:{NFSU2_TR(0x68c02d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B68c030:{NFSU2_TR(0x68c030);
__builtin_memmove((G+0),(R+8),4);
}
B68c032:{NFSU2_TR(0x68c032);
w1(F+0,u8((r4(G+0))!=(u32(0x0ull))));
w4(G+0,u32(0-u32(r4(G+0))));
}
B68c034:{NFSU2_TR(0x68c034);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(G+0))));
w4(G+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c036:{NFSU2_TR(0x68c036);
w4(G+0,u32(u32(r4(G+0))&u32(r4(R+28))));
}
B68c038:{NFSU2_TR(0x68c038);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ffull))));
}
B68c03e:{NFSU2_TR(0x68c03e);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B68c040:{NFSU2_TR(0x68c040);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+0,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68c042:{NFSU2_TR(0x68c042);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_68c046(ARGS);}}
}
B68c044:L68c044:{bud-=1;NFSU2_TR(0x68c044);
__builtin_memmove((R+8),(R+28),4);
{[[clang::musttail]] return blk_68c046(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c046(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c046:L68c046:{bud-=5;NFSU2_TR(0x68c046);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x19800ull))));
}
B68c04c:{NFSU2_TR(0x68c04c);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c04f:{NFSU2_TR(0x68c04f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B68c051:{NFSU2_TR(0x68c051);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68c053:{NFSU2_TR(0x68c053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c056(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c056(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c056:L68c056:{bud-=3;NFSU2_TR(0x68c056);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_),"m"(m_));}
}
B68c059:{NFSU2_TR(0x68c059);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c05c:{NFSU2_TR(0x68c05c);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_68c064(ARGS);}}
{[[clang::musttail]] return blk_68c05e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c05e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c05e:L68c05e:{bud-=1;NFSU2_TR(0x68c05e);
{u32 ea_=u32(u32(7882060u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68c064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c064(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c064:L68c064:{bud-=1;NFSU2_TR(0x68c064);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_68c067(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c067(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c067:L68c067:{bud-=1;NFSU2_TR(0x68c067);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68c06a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c06a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c06a:L68c06a:{bud-=4;NFSU2_TR(0x68c06a);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+0));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B68c06d:{NFSU2_TR(0x68c06d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B68c06e:{NFSU2_TR(0x68c06e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(R+12))<(r4(U+14))));
w1(F+11,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B68c071:{NFSU2_TR(0x68c071);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c016u);}[[clang::musttail]] return blk_68c016(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c073(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c073(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c073:L68c073:{bud-=6;NFSU2_TR(0x68c073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c076:{NFSU2_TR(0x68c076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c077:{NFSU2_TR(0x68c077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c078:{NFSU2_TR(0x68c078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c079:{NFSU2_TR(0x68c079);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68c07a:{NFSU2_TR(0x68c07a);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c07d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c07d:L68c07d:{bud-=25;NFSU2_TR(0x68c07d);
__builtin_memmove((R+28),(R+28),4);
}
B68c07f:{NFSU2_TR(0x68c07f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c080:{NFSU2_TR(0x68c080);
__builtin_memmove((R+12),(G+16),4);
}
B68c082:{NFSU2_TR(0x68c082);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c083:{NFSU2_TR(0x68c083);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B68c086:{NFSU2_TR(0x68c086);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68c089:{NFSU2_TR(0x68c089);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c08a:{NFSU2_TR(0x68c08a);
__builtin_memmove((R+20),(G+16),4);
}
B68c08c:{NFSU2_TR(0x68c08c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x128ull))));
}
B68c092:{NFSU2_TR(0x68c092);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c095:{NFSU2_TR(0x68c095);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c096:{NFSU2_TR(0x68c096);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c097:{NFSU2_TR(0x68c097);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c09a:{NFSU2_TR(0x68c09a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c09c:{NFSU2_TR(0x68c09c);
__builtin_memmove((R+8),(G+0),4);
}
B68c09e:{NFSU2_TR(0x68c09e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c0a1:{NFSU2_TR(0x68c0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c0a2:{NFSU2_TR(0x68c0a2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B68c0a4:{NFSU2_TR(0x68c0a4);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c0a6:{NFSU2_TR(0x68c0a6);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c0a8:{NFSU2_TR(0x68c0a8);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B68c0aa:{NFSU2_TR(0x68c0aa);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(F+6))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(F+6,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c0ad:{NFSU2_TR(0x68c0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c0b0:{NFSU2_TR(0x68c0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c0b3:{NFSU2_TR(0x68c0b3);
if(r1(F+6)){{[[clang::musttail]] return blk_68c220(ARGS);}}
}
B68c0b9:L68c0b9:{bud-=3;NFSU2_TR(0x68c0b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c0bc:{NFSU2_TR(0x68c0bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c0c2:{NFSU2_TR(0x68c0c2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c0c7ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68b19fu);}[[clang::musttail]] return blk_68b19f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c0c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c0c7:L68c0c7:{bud-=4;NFSU2_TR(0x68c0c7);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68c0c9:{NFSU2_TR(0x68c0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c0cc:{NFSU2_TR(0x68c0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68c0cf:{NFSU2_TR(0x68c0cf);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68c220(ARGS);}}
}
B68c0d5:L68c0d5:{bud-=4;NFSU2_TR(0x68c0d5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c0d9:{NFSU2_TR(0x68c0d9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c0dd:{NFSU2_TR(0x68c0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c0e0:{NFSU2_TR(0x68c0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c0e3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c0e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c0e3:L68c0e3:{bud-=81;NFSU2_TR(0x68c0e3);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68c0e7:{NFSU2_TR(0x68c0e7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c0ea:{NFSU2_TR(0x68c0ea);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c0ed:{NFSU2_TR(0x68c0ed);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68c0f1:{NFSU2_TR(0x68c0f1);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c0f4:{NFSU2_TR(0x68c0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68c0f9:{NFSU2_TR(0x68c0f9);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c0fc:{NFSU2_TR(0x68c0fc);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c0ff:{NFSU2_TR(0x68c0ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68c103:{NFSU2_TR(0x68c103);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c107:{NFSU2_TR(0x68c107);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c10b:{NFSU2_TR(0x68c10b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68c111:{NFSU2_TR(0x68c111);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B68c114:{NFSU2_TR(0x68c114);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68c11a:{NFSU2_TR(0x68c11a);
__builtin_memmove((R+4744),(R+4672),8);
}
B68c11d:{NFSU2_TR(0x68c11d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68c123:{NFSU2_TR(0x68c123);
__builtin_memmove((R+4808),(R+4672),8);
}
B68c126:{NFSU2_TR(0x68c126);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68c129:{NFSU2_TR(0x68c129);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c12d:{NFSU2_TR(0x68c12d);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68c130:{NFSU2_TR(0x68c130);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c137:{NFSU2_TR(0x68c137);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c13a:{NFSU2_TR(0x68c13a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c141:{NFSU2_TR(0x68c141);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68c144:{NFSU2_TR(0x68c144);
__builtin_memmove((R+4800),(R+4928),4);
__builtin_memmove((R+4804),(R+4932),4);
__builtin_memmove((R+4808),(R+4936),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68c147:{NFSU2_TR(0x68c147);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c14a:{NFSU2_TR(0x68c14a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c151:{NFSU2_TR(0x68c151);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68c154:{NFSU2_TR(0x68c154);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c157:{NFSU2_TR(0x68c157);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68c15b:{NFSU2_TR(0x68c15b);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68c15e:{NFSU2_TR(0x68c15e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c165:{NFSU2_TR(0x68c165);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68c168:{NFSU2_TR(0x68c168);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c16f:{NFSU2_TR(0x68c16f);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4940))));
}
B68c172:{NFSU2_TR(0x68c172);
__builtin_memmove((R+4928),(R+4992),4);
__builtin_memmove((R+4932),(R+4996),4);
__builtin_memmove((R+4936),(R+5000),4);
__builtin_memmove((R+4940),(R+5004),4);
}
B68c175:{NFSU2_TR(0x68c175);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c178:{NFSU2_TR(0x68c178);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c17f:{NFSU2_TR(0x68c17f);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68c182:{NFSU2_TR(0x68c182);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68c186:{NFSU2_TR(0x68c186);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B68c189:{NFSU2_TR(0x68c189);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c190:{NFSU2_TR(0x68c190);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c197:{NFSU2_TR(0x68c197);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68c19a:{NFSU2_TR(0x68c19a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68c1a1:{NFSU2_TR(0x68c1a1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c1a8:{NFSU2_TR(0x68c1a8);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c1ab:{NFSU2_TR(0x68c1ab);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c1af:{NFSU2_TR(0x68c1af);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c1b3:{NFSU2_TR(0x68c1b3);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4876))));
}
B68c1b6:{NFSU2_TR(0x68c1b6);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68c1b9:{NFSU2_TR(0x68c1b9);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68c1bc:{NFSU2_TR(0x68c1bc);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B68c1bf:{NFSU2_TR(0x68c1bf);
__builtin_memmove((R+4864),(R+4608),4);
__builtin_memmove((R+4868),(R+4612),4);
__builtin_memmove((R+4872),(R+4616),4);
__builtin_memmove((R+4876),(R+4620),4);
}
B68c1c2:{NFSU2_TR(0x68c1c2);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4672))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4676))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4680))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4684))));
}
B68c1c5:{NFSU2_TR(0x68c1c5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(U+32))));
}
B68c1c9:{NFSU2_TR(0x68c1c9);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B68c1cc:{NFSU2_TR(0x68c1cc);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+32))));
}
B68c1d0:{NFSU2_TR(0x68c1d0);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c1d3:{NFSU2_TR(0x68c1d3);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4932),4);
__builtin_memmove((R+4612),(R+4928),4);
}
B68c1d6:{NFSU2_TR(0x68c1d6);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c1d9:{NFSU2_TR(0x68c1d9);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68c1dc:{NFSU2_TR(0x68c1dc);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4868),4);
__builtin_memmove((R+4676),(R+4864),4);
}
B68c1df:{NFSU2_TR(0x68c1df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68c1e3:{NFSU2_TR(0x68c1e3);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c1e7:{NFSU2_TR(0x68c1e7);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c1ec:{NFSU2_TR(0x68c1ec);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4936),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68c1ef:{NFSU2_TR(0x68c1ef);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c1f3:{NFSU2_TR(0x68c1f3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c1f6:{NFSU2_TR(0x68c1f6);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4872),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68c1f9:{NFSU2_TR(0x68c1f9);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c1fe:{NFSU2_TR(0x68c1fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c202:{NFSU2_TR(0x68c202);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4808),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c207:{NFSU2_TR(0x68c207);
__builtin_memmove((R+8),(G+0),4);
}
B68c209:{NFSU2_TR(0x68c209);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c20c:{NFSU2_TR(0x68c20c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c20e:{NFSU2_TR(0x68c20e);
__builtin_memmove((R+8),(G+4),4);
}
B68c210:{NFSU2_TR(0x68c210);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c213:{NFSU2_TR(0x68c213);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c215:{NFSU2_TR(0x68c215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68c218:{NFSU2_TR(0x68c218);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c0e3u);}goto L68c0e3;}}
}
B68c21e:L68c21e:{bud-=1;NFSU2_TR(0x68c21e);
{[[clang::musttail]] return blk_68c223(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c220(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c220:L68c220:{bud-=1;NFSU2_TR(0x68c220);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c223(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c223(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c223:L68c223:{bud-=3;NFSU2_TR(0x68c223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c226:{NFSU2_TR(0x68c226);
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
B68c228:{NFSU2_TR(0x68c228);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c242(ARGS);}}
}
B68c22a:L68c22a:{bud-=1;NFSU2_TR(0x68c22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_68c22d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c22d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c22d:L68c22d:{bud-=4;NFSU2_TR(0x68c22d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c230:{NFSU2_TR(0x68c230);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c231:{NFSU2_TR(0x68c231);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c232:{NFSU2_TR(0x68c232);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c237ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68b0d8u);}[[clang::musttail]] return blk_68b0d8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c237(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c237:L68c237:{bud-=4;NFSU2_TR(0x68c237);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c23a:{NFSU2_TR(0x68c23a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c23d:{NFSU2_TR(0x68c23d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c240:{NFSU2_TR(0x68c240);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c22du);}[[clang::musttail]] return blk_68c22d(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c242(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c242(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c242:L68c242:{bud-=8;NFSU2_TR(0x68c242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c245:{NFSU2_TR(0x68c245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c246:{NFSU2_TR(0x68c246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c247:{NFSU2_TR(0x68c247);
__builtin_memmove((G+16),(R+20),4);
}
B68c249:{NFSU2_TR(0x68c249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c24a:{NFSU2_TR(0x68c24a);
__builtin_memmove((G+16),(R+12),4);
}
B68c24c:{NFSU2_TR(0x68c24c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c24d:{NFSU2_TR(0x68c24d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c250(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c250:L68c250:{bud-=27;NFSU2_TR(0x68c250);
__builtin_memmove((R+28),(R+28),4);
}
B68c252:{NFSU2_TR(0x68c252);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c253:{NFSU2_TR(0x68c253);
__builtin_memmove((R+12),(G+16),4);
}
B68c255:{NFSU2_TR(0x68c255);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c256:{NFSU2_TR(0x68c256);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B68c259:{NFSU2_TR(0x68c259);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68c25c:{NFSU2_TR(0x68c25c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c25d:{NFSU2_TR(0x68c25d);
__builtin_memmove((R+20),(G+16),4);
}
B68c25f:{NFSU2_TR(0x68c25f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x128ull))));
}
B68c265:{NFSU2_TR(0x68c265);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c268:{NFSU2_TR(0x68c268);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c269:{NFSU2_TR(0x68c269);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68c26c:{NFSU2_TR(0x68c26c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c26d:{NFSU2_TR(0x68c26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c270:{NFSU2_TR(0x68c270);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c272:{NFSU2_TR(0x68c272);
__builtin_memmove((R+8),(G+0),4);
}
B68c274:{NFSU2_TR(0x68c274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c275:{NFSU2_TR(0x68c275);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c278:{NFSU2_TR(0x68c278);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B68c27a:{NFSU2_TR(0x68c27a);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(G+4))));
w4(G+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c27c:{NFSU2_TR(0x68c27c);
w4(G+4,u32(u32(r4(G+4))&u32(r4(R+8))));
}
B68c27e:{NFSU2_TR(0x68c27e);
w4(G+0,u32(u32(r4(G+0))-u32(r4(G+4))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B68c280:{NFSU2_TR(0x68c280);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(G+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(F+6))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(F+6,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c283:{NFSU2_TR(0x68c283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c286:{NFSU2_TR(0x68c286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c289:{NFSU2_TR(0x68c289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c28c:{NFSU2_TR(0x68c28c);
if(r1(F+6)){{[[clang::musttail]] return blk_68c39f(ARGS);}}
}
B68c292:L68c292:{bud-=3;NFSU2_TR(0x68c292);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c295:{NFSU2_TR(0x68c295);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c29b:{NFSU2_TR(0x68c29b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c2a0ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68b19fu);}[[clang::musttail]] return blk_68b19f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c2a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c2a0:L68c2a0:{bud-=4;NFSU2_TR(0x68c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c2a3:{NFSU2_TR(0x68c2a3);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68c2a5:{NFSU2_TR(0x68c2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68c2a8:{NFSU2_TR(0x68c2a8);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68c39f(ARGS);}}
}
B68c2ae:L68c2ae:{bud-=3;NFSU2_TR(0x68c2ae);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c2b2:{NFSU2_TR(0x68c2b2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c2b6:{NFSU2_TR(0x68c2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_68c2b9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c2b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c2b9:L68c2b9:{bud-=60;NFSU2_TR(0x68c2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c2bc:{NFSU2_TR(0x68c2bc);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68c2c0:{NFSU2_TR(0x68c2c0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c2c3:{NFSU2_TR(0x68c2c3);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c2c6:{NFSU2_TR(0x68c2c6);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68c2ca:{NFSU2_TR(0x68c2ca);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c2cd:{NFSU2_TR(0x68c2cd);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c2d0:{NFSU2_TR(0x68c2d0);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c2d3:{NFSU2_TR(0x68c2d3);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68c2d7:{NFSU2_TR(0x68c2d7);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c2db:{NFSU2_TR(0x68c2db);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c2df:{NFSU2_TR(0x68c2df);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68c2e2:{NFSU2_TR(0x68c2e2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c2e9:{NFSU2_TR(0x68c2e9);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c2ec:{NFSU2_TR(0x68c2ec);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c2f3:{NFSU2_TR(0x68c2f3);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68c2f6:{NFSU2_TR(0x68c2f6);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c2f9:{NFSU2_TR(0x68c2f9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68c2fd:{NFSU2_TR(0x68c2fd);
__builtin_memmove((R+4864),(R+4608),4);
__builtin_memmove((R+4868),(R+4612),4);
__builtin_memmove((R+4872),(R+4616),4);
__builtin_memmove((R+4876),(R+4620),4);
}
B68c300:{NFSU2_TR(0x68c300);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c307:{NFSU2_TR(0x68c307);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c30a:{NFSU2_TR(0x68c30a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c311:{NFSU2_TR(0x68c311);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4800))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4804))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4808))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4812))));
}
B68c314:{NFSU2_TR(0x68c314);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(U+32))));
}
B68c318:{NFSU2_TR(0x68c318);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c31b:{NFSU2_TR(0x68c31b);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c322:{NFSU2_TR(0x68c322);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c329:{NFSU2_TR(0x68c329);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c32c:{NFSU2_TR(0x68c32c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c333:{NFSU2_TR(0x68c333);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c33a:{NFSU2_TR(0x68c33a);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68c33d:{NFSU2_TR(0x68c33d);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68c340:{NFSU2_TR(0x68c340);
__builtin_memmove((R+4800),(R+4928),4);
__builtin_memmove((R+4804),(R+4932),4);
__builtin_memmove((R+4808),(R+4936),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68c343:{NFSU2_TR(0x68c343);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+32))));
}
B68c347:{NFSU2_TR(0x68c347);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c34a:{NFSU2_TR(0x68c34a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68c34e:{NFSU2_TR(0x68c34e);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c351:{NFSU2_TR(0x68c351);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4868),4);
__builtin_memmove((R+4612),(R+4864),4);
}
B68c354:{NFSU2_TR(0x68c354);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B68c357:{NFSU2_TR(0x68c357);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68c35a:{NFSU2_TR(0x68c35a);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4932),4);
__builtin_memmove((R+4676),(R+4928),4);
}
B68c35d:{NFSU2_TR(0x68c35d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68c361:{NFSU2_TR(0x68c361);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c365:{NFSU2_TR(0x68c365);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c36a:{NFSU2_TR(0x68c36a);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4872),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68c36d:{NFSU2_TR(0x68c36d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c371:{NFSU2_TR(0x68c371);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c374:{NFSU2_TR(0x68c374);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4936),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68c377:{NFSU2_TR(0x68c377);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c37c:{NFSU2_TR(0x68c37c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c380:{NFSU2_TR(0x68c380);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4808),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c385:{NFSU2_TR(0x68c385);
__builtin_memmove((R+8),(G+4),4);
}
B68c387:{NFSU2_TR(0x68c387);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c38a:{NFSU2_TR(0x68c38a);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B68c38c:{NFSU2_TR(0x68c38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c38f:{NFSU2_TR(0x68c38f);
__builtin_memmove((G+0),(R+28),4);
}
B68c391:{NFSU2_TR(0x68c391);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B68c394:{NFSU2_TR(0x68c394);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B68c396:{NFSU2_TR(0x68c396);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68c399:{NFSU2_TR(0x68c399);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c2b9u);}goto L68c2b9;}}
{[[clang::musttail]] return blk_68c39f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c39f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c39f:L68c39f:{bud-=3;NFSU2_TR(0x68c39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c3a2:{NFSU2_TR(0x68c3a2);
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
B68c3a4:{NFSU2_TR(0x68c3a4);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c3c2(ARGS);}}
}
B68c3a6:L68c3a6:{bud-=1;NFSU2_TR(0x68c3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c3a9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c3a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c3a9:L68c3a9:{bud-=4;NFSU2_TR(0x68c3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c3ac:{NFSU2_TR(0x68c3ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c3af:{NFSU2_TR(0x68c3af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c3b0:{NFSU2_TR(0x68c3b0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c3b5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x63c10eu);}[[clang::musttail]] return blk_63c10e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c3b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c3b5:L68c3b5:{bud-=5;NFSU2_TR(0x68c3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c3b8:{NFSU2_TR(0x68c3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B68c3bb:{NFSU2_TR(0x68c3bb);
w1(F+0,carry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B68c3bd:{NFSU2_TR(0x68c3bd);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c3c0:{NFSU2_TR(0x68c3c0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x68c3a9u);}[[clang::musttail]] return blk_68c3a9(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c3c2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c3c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c3c2:L68c3c2:{bud-=8;NFSU2_TR(0x68c3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c3c5:{NFSU2_TR(0x68c3c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c3c6:{NFSU2_TR(0x68c3c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c3c7:{NFSU2_TR(0x68c3c7);
__builtin_memmove((G+16),(R+20),4);
}
B68c3c9:{NFSU2_TR(0x68c3c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c3ca:{NFSU2_TR(0x68c3ca);
__builtin_memmove((G+16),(R+12),4);
}
B68c3cc:{NFSU2_TR(0x68c3cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c3cd:{NFSU2_TR(0x68c3cd);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c3d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c3d0:L68c3d0:{bud-=25;NFSU2_TR(0x68c3d0);
__builtin_memmove((R+28),(R+28),4);
}
B68c3d2:{NFSU2_TR(0x68c3d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c3d3:{NFSU2_TR(0x68c3d3);
__builtin_memmove((R+12),(G+16),4);
}
B68c3d5:{NFSU2_TR(0x68c3d5);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c3d6:{NFSU2_TR(0x68c3d6);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B68c3d9:{NFSU2_TR(0x68c3d9);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68c3dc:{NFSU2_TR(0x68c3dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c3dd:{NFSU2_TR(0x68c3dd);
__builtin_memmove((R+20),(G+16),4);
}
B68c3df:{NFSU2_TR(0x68c3df);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x128ull))));
}
B68c3e5:{NFSU2_TR(0x68c3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c3e8:{NFSU2_TR(0x68c3e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c3e9:{NFSU2_TR(0x68c3e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c3ea:{NFSU2_TR(0x68c3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c3ed:{NFSU2_TR(0x68c3ed);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c3ef:{NFSU2_TR(0x68c3ef);
__builtin_memmove((R+8),(G+0),4);
}
B68c3f1:{NFSU2_TR(0x68c3f1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c3f4:{NFSU2_TR(0x68c3f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c3f5:{NFSU2_TR(0x68c3f5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B68c3f7:{NFSU2_TR(0x68c3f7);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c3f9:{NFSU2_TR(0x68c3f9);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c3fb:{NFSU2_TR(0x68c3fb);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B68c3fd:{NFSU2_TR(0x68c3fd);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(F+6))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(F+6,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c400:{NFSU2_TR(0x68c400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c403:{NFSU2_TR(0x68c403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c406:{NFSU2_TR(0x68c406);
if(r1(F+6)){{[[clang::musttail]] return blk_68c4fc(ARGS);}}
}
B68c40c:L68c40c:{bud-=3;NFSU2_TR(0x68c40c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c40f:{NFSU2_TR(0x68c40f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c415:{NFSU2_TR(0x68c415);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c41aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68b19fu);}[[clang::musttail]] return blk_68b19f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c41a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c41a:L68c41a:{bud-=4;NFSU2_TR(0x68c41a);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68c41c:{NFSU2_TR(0x68c41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c41f:{NFSU2_TR(0x68c41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68c422:{NFSU2_TR(0x68c422);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68c4fc(ARGS);}}
}
B68c428:L68c428:{bud-=4;NFSU2_TR(0x68c428);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c42c:{NFSU2_TR(0x68c42c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68c430:{NFSU2_TR(0x68c430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c433:{NFSU2_TR(0x68c433);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c436(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c436(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c436:L68c436:{bud-=54;NFSU2_TR(0x68c436);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c439:{NFSU2_TR(0x68c439);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4864),(U+8),8);
}
B68c43d:{NFSU2_TR(0x68c43d);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c440:{NFSU2_TR(0x68c440);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68c444:{NFSU2_TR(0x68c444);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c447:{NFSU2_TR(0x68c447);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c44a:{NFSU2_TR(0x68c44a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4872),(U+8),8);
}
B68c44e:{NFSU2_TR(0x68c44e);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c452:{NFSU2_TR(0x68c452);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c456:{NFSU2_TR(0x68c456);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c459:{NFSU2_TR(0x68c459);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c460:{NFSU2_TR(0x68c460);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68c463:{NFSU2_TR(0x68c463);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c46a:{NFSU2_TR(0x68c46a);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68c46d:{NFSU2_TR(0x68c46d);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c470:{NFSU2_TR(0x68c470);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68c474:{NFSU2_TR(0x68c474);
{wv<16>((R+4800),uo::rcpps<16>(rv<16>((R+4800)),rv<16>((R+4736))));}
}
B68c477:{NFSU2_TR(0x68c477);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68c47a:{NFSU2_TR(0x68c47a);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B68c47d:{NFSU2_TR(0x68c47d);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B68c480:{NFSU2_TR(0x68c480);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c483:{NFSU2_TR(0x68c483);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B68c486:{NFSU2_TR(0x68c486);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68c489:{NFSU2_TR(0x68c489);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+4940))));
}
B68c48c:{NFSU2_TR(0x68c48c);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c48f:{NFSU2_TR(0x68c48f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c496:{NFSU2_TR(0x68c496);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c49d:{NFSU2_TR(0x68c49d);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c4a0:{NFSU2_TR(0x68c4a0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c4a7:{NFSU2_TR(0x68c4a7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c4ae:{NFSU2_TR(0x68c4ae);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4748))));
}
B68c4b1:{NFSU2_TR(0x68c4b1);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68c4b4:{NFSU2_TR(0x68c4b4);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68c4b7:{NFSU2_TR(0x68c4b7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(U+32))));
}
B68c4bb:{NFSU2_TR(0x68c4bb);
__builtin_memmove((R+4736),(R+4928),4);
__builtin_memmove((R+4740),(R+4932),4);
__builtin_memmove((R+4744),(R+4936),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68c4be:{NFSU2_TR(0x68c4be);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68c4c2:{NFSU2_TR(0x68c4c2);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B68c4c5:{NFSU2_TR(0x68c4c5);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4800))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4804))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4808))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4812))));
}
B68c4c8:{NFSU2_TR(0x68c4c8);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c4cb:{NFSU2_TR(0x68c4cb);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68c4ce:{NFSU2_TR(0x68c4ce);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c4d1:{NFSU2_TR(0x68c4d1);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c4d5:{NFSU2_TR(0x68c4d5);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4680),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c4d8:{NFSU2_TR(0x68c4d8);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c4db:{NFSU2_TR(0x68c4db);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c4df:{NFSU2_TR(0x68c4df);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c4e3:{NFSU2_TR(0x68c4e3);
__builtin_memmove((R+8),(G+0),4);
}
B68c4e5:{NFSU2_TR(0x68c4e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c4e8:{NFSU2_TR(0x68c4e8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c4ea:{NFSU2_TR(0x68c4ea);
__builtin_memmove((R+8),(G+4),4);
}
B68c4ec:{NFSU2_TR(0x68c4ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c4ef:{NFSU2_TR(0x68c4ef);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c4f1:{NFSU2_TR(0x68c4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68c4f4:{NFSU2_TR(0x68c4f4);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c436u);}goto L68c436;}}
}
B68c4fa:L68c4fa:{bud-=1;NFSU2_TR(0x68c4fa);
{[[clang::musttail]] return blk_68c4ff(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c4fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c4fc:L68c4fc:{bud-=1;NFSU2_TR(0x68c4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c4ff(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c4ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c4ff:L68c4ff:{bud-=3;NFSU2_TR(0x68c4ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c502:{NFSU2_TR(0x68c502);
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
B68c504:{NFSU2_TR(0x68c504);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c51e(ARGS);}}
}
B68c506:L68c506:{bud-=1;NFSU2_TR(0x68c506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c509(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c509(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c509:L68c509:{bud-=4;NFSU2_TR(0x68c509);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c50c:{NFSU2_TR(0x68c50c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c50d:{NFSU2_TR(0x68c50d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c50e:{NFSU2_TR(0x68c50e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c513ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x63c13au);}[[clang::musttail]] return blk_63c13a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c513(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c513:L68c513:{bud-=4;NFSU2_TR(0x68c513);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c516:{NFSU2_TR(0x68c516);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c519:{NFSU2_TR(0x68c519);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c51c:{NFSU2_TR(0x68c51c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x68c509u);}[[clang::musttail]] return blk_68c509(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c51e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c51e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c51e:L68c51e:{bud-=8;NFSU2_TR(0x68c51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c521:{NFSU2_TR(0x68c521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c522:{NFSU2_TR(0x68c522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c523:{NFSU2_TR(0x68c523);
__builtin_memmove((G+16),(R+20),4);
}
B68c525:{NFSU2_TR(0x68c525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c526:{NFSU2_TR(0x68c526);
__builtin_memmove((G+16),(R+12),4);
}
B68c528:{NFSU2_TR(0x68c528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c529:{NFSU2_TR(0x68c529);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c52c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c52c:L68c52c:{bud-=25;NFSU2_TR(0x68c52c);
__builtin_memmove((R+28),(R+28),4);
}
B68c52e:{NFSU2_TR(0x68c52e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c52f:{NFSU2_TR(0x68c52f);
__builtin_memmove((R+12),(G+16),4);
}
B68c531:{NFSU2_TR(0x68c531);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c532:{NFSU2_TR(0x68c532);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B68c535:{NFSU2_TR(0x68c535);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68c538:{NFSU2_TR(0x68c538);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c539:{NFSU2_TR(0x68c539);
__builtin_memmove((R+20),(G+16),4);
}
B68c53b:{NFSU2_TR(0x68c53b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x128ull))));
}
B68c541:{NFSU2_TR(0x68c541);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c544:{NFSU2_TR(0x68c544);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c545:{NFSU2_TR(0x68c545);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c546:{NFSU2_TR(0x68c546);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c549:{NFSU2_TR(0x68c549);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c54b:{NFSU2_TR(0x68c54b);
__builtin_memmove((R+8),(G+0),4);
}
B68c54d:{NFSU2_TR(0x68c54d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c550:{NFSU2_TR(0x68c550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c551:{NFSU2_TR(0x68c551);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B68c553:{NFSU2_TR(0x68c553);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c555:{NFSU2_TR(0x68c555);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c557:{NFSU2_TR(0x68c557);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B68c559:{NFSU2_TR(0x68c559);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(F+6))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(F+6,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c55c:{NFSU2_TR(0x68c55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c55f:{NFSU2_TR(0x68c55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c562:{NFSU2_TR(0x68c562);
if(r1(F+6)){{[[clang::musttail]] return blk_68c60d(ARGS);}}
}
B68c568:L68c568:{bud-=3;NFSU2_TR(0x68c568);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c56b:{NFSU2_TR(0x68c56b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c571:{NFSU2_TR(0x68c571);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c576ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68b19fu);}[[clang::musttail]] return blk_68b19f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c576(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c576:L68c576:{bud-=4;NFSU2_TR(0x68c576);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68c578:{NFSU2_TR(0x68c578);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c57b:{NFSU2_TR(0x68c57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68c57e:{NFSU2_TR(0x68c57e);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68c60d(ARGS);}}
}
B68c584:L68c584:{bud-=4;NFSU2_TR(0x68c584);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c588:{NFSU2_TR(0x68c588);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c58c:{NFSU2_TR(0x68c58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c58f:{NFSU2_TR(0x68c58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c592(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c592(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c592:L68c592:{bud-=34;NFSU2_TR(0x68c592);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c595:{NFSU2_TR(0x68c595);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68c599:{NFSU2_TR(0x68c599);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c59c:{NFSU2_TR(0x68c59c);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4616),(U+8),8);
}
B68c5a0:{NFSU2_TR(0x68c5a0);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68c5a3:{NFSU2_TR(0x68c5a3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c5a6:{NFSU2_TR(0x68c5a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4808),(U+8),8);
}
B68c5aa:{NFSU2_TR(0x68c5aa);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c5ae:{NFSU2_TR(0x68c5ae);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68c5b1:{NFSU2_TR(0x68c5b1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c5b8:{NFSU2_TR(0x68c5b8);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c5bf:{NFSU2_TR(0x68c5bf);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c5c2:{NFSU2_TR(0x68c5c2);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c5c6:{NFSU2_TR(0x68c5c6);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c5c9:{NFSU2_TR(0x68c5c9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c5d0:{NFSU2_TR(0x68c5d0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c5d7:{NFSU2_TR(0x68c5d7);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4620))));
}
B68c5da:{NFSU2_TR(0x68c5da);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68c5dd:{NFSU2_TR(0x68c5dd);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c5e0:{NFSU2_TR(0x68c5e0);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68c5e3:{NFSU2_TR(0x68c5e3);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c5e6:{NFSU2_TR(0x68c5e6);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c5ea:{NFSU2_TR(0x68c5ea);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4680),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c5ed:{NFSU2_TR(0x68c5ed);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c5f0:{NFSU2_TR(0x68c5f0);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c5f4:{NFSU2_TR(0x68c5f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c5f8:{NFSU2_TR(0x68c5f8);
__builtin_memmove((R+8),(G+0),4);
}
B68c5fa:{NFSU2_TR(0x68c5fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c5fd:{NFSU2_TR(0x68c5fd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c5ff:{NFSU2_TR(0x68c5ff);
__builtin_memmove((R+8),(G+4),4);
}
B68c601:{NFSU2_TR(0x68c601);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c604:{NFSU2_TR(0x68c604);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c606:{NFSU2_TR(0x68c606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68c609:{NFSU2_TR(0x68c609);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c592u);}goto L68c592;}}
}
B68c60b:L68c60b:{bud-=1;NFSU2_TR(0x68c60b);
{[[clang::musttail]] return blk_68c610(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c60d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c60d:L68c60d:{bud-=1;NFSU2_TR(0x68c60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c610(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c610(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c610:L68c610:{bud-=3;NFSU2_TR(0x68c610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c613:{NFSU2_TR(0x68c613);
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
B68c615:{NFSU2_TR(0x68c615);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c62f(ARGS);}}
}
B68c617:L68c617:{bud-=1;NFSU2_TR(0x68c617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c61a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c61a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c61a:L68c61a:{bud-=4;NFSU2_TR(0x68c61a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c61d:{NFSU2_TR(0x68c61d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c61e:{NFSU2_TR(0x68c61e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c61f:{NFSU2_TR(0x68c61f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c624ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x63c166u);}[[clang::musttail]] return blk_63c166(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c624(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c624:L68c624:{bud-=4;NFSU2_TR(0x68c624);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c627:{NFSU2_TR(0x68c627);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c62a:{NFSU2_TR(0x68c62a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c62d:{NFSU2_TR(0x68c62d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x68c61au);}[[clang::musttail]] return blk_68c61a(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c62f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c62f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c62f:L68c62f:{bud-=8;NFSU2_TR(0x68c62f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c632:{NFSU2_TR(0x68c632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c633:{NFSU2_TR(0x68c633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c634:{NFSU2_TR(0x68c634);
__builtin_memmove((G+16),(R+20),4);
}
B68c636:{NFSU2_TR(0x68c636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c637:{NFSU2_TR(0x68c637);
__builtin_memmove((G+16),(R+12),4);
}
B68c639:{NFSU2_TR(0x68c639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c63a:{NFSU2_TR(0x68c63a);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c63d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c63d:L68c63d:{bud-=25;NFSU2_TR(0x68c63d);
__builtin_memmove((R+28),(R+28),4);
}
B68c63f:{NFSU2_TR(0x68c63f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c640:{NFSU2_TR(0x68c640);
__builtin_memmove((R+12),(G+16),4);
}
B68c642:{NFSU2_TR(0x68c642);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c643:{NFSU2_TR(0x68c643);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B68c646:{NFSU2_TR(0x68c646);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68c649:{NFSU2_TR(0x68c649);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c64a:{NFSU2_TR(0x68c64a);
__builtin_memmove((R+20),(G+16),4);
}
B68c64c:{NFSU2_TR(0x68c64c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x138ull))));
}
B68c652:{NFSU2_TR(0x68c652);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c655:{NFSU2_TR(0x68c655);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c656:{NFSU2_TR(0x68c656);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c657:{NFSU2_TR(0x68c657);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c65a:{NFSU2_TR(0x68c65a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c65c:{NFSU2_TR(0x68c65c);
__builtin_memmove((R+8),(G+0),4);
}
B68c65e:{NFSU2_TR(0x68c65e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c661:{NFSU2_TR(0x68c661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c662:{NFSU2_TR(0x68c662);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B68c664:{NFSU2_TR(0x68c664);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c666:{NFSU2_TR(0x68c666);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c668:{NFSU2_TR(0x68c668);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B68c66a:{NFSU2_TR(0x68c66a);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(F+6))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(F+6,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c66d:{NFSU2_TR(0x68c66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c670:{NFSU2_TR(0x68c670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c673:{NFSU2_TR(0x68c673);
if(r1(F+6)){{[[clang::musttail]] return blk_68c80d(ARGS);}}
}
B68c679:L68c679:{bud-=3;NFSU2_TR(0x68c679);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c67c:{NFSU2_TR(0x68c67c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c682:{NFSU2_TR(0x68c682);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c687ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68b19fu);}[[clang::musttail]] return blk_68b19f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c687(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c687:L68c687:{bud-=4;NFSU2_TR(0x68c687);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68c689:{NFSU2_TR(0x68c689);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c68c:{NFSU2_TR(0x68c68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68c68f:{NFSU2_TR(0x68c68f);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68c80d(ARGS);}}
}
B68c695:L68c695:{bud-=4;NFSU2_TR(0x68c695);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c699:{NFSU2_TR(0x68c699);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68c69d:{NFSU2_TR(0x68c69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c6a0:{NFSU2_TR(0x68c6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c6a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c6a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c6a3:L68c6a3:{bud-=94;NFSU2_TR(0x68c6a3);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4864),(U+8),8);
}
B68c6a7:{NFSU2_TR(0x68c6a7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4800),(U+0),8);
}
B68c6aa:{NFSU2_TR(0x68c6aa);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c6ad:{NFSU2_TR(0x68c6ad);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68c6b1:{NFSU2_TR(0x68c6b1);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68c6b4:{NFSU2_TR(0x68c6b4);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68c6b7:{NFSU2_TR(0x68c6b7);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c6ba:{NFSU2_TR(0x68c6ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68c6be:{NFSU2_TR(0x68c6be);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c6c1:{NFSU2_TR(0x68c6c1);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4872),(U+12),8);
}
B68c6c6:{NFSU2_TR(0x68c6c6);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68c6c9:{NFSU2_TR(0x68c6c9);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c6cc:{NFSU2_TR(0x68c6cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4808),(U+8),8);
}
B68c6d0:{NFSU2_TR(0x68c6d0);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c6d4:{NFSU2_TR(0x68c6d4);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c6d8:{NFSU2_TR(0x68c6d8);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4800),(U+12),8);
}
B68c6dd:{NFSU2_TR(0x68c6dd);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4808),(U+12),8);
}
B68c6e2:{NFSU2_TR(0x68c6e2);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c6e6:{NFSU2_TR(0x68c6e6);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c6ea:{NFSU2_TR(0x68c6ea);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68c6ed:{NFSU2_TR(0x68c6ed);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c6f1:{NFSU2_TR(0x68c6f1);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68c6f5:{NFSU2_TR(0x68c6f5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c6f9:{NFSU2_TR(0x68c6f9);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68c6fc:{NFSU2_TR(0x68c6fc);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68c703:{NFSU2_TR(0x68c703);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68c706:{NFSU2_TR(0x68c706);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68c709:{NFSU2_TR(0x68c709);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c710:{NFSU2_TR(0x68c710);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68c713:{NFSU2_TR(0x68c713);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68c716:{NFSU2_TR(0x68c716);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68c719:{NFSU2_TR(0x68c719);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c720:{NFSU2_TR(0x68c720);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B68c723:{NFSU2_TR(0x68c723);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B68c726:{NFSU2_TR(0x68c726);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4940))));
}
B68c729:{NFSU2_TR(0x68c729);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68c72c:{NFSU2_TR(0x68c72c);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68c72f:{NFSU2_TR(0x68c72f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68c736:{NFSU2_TR(0x68c736);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68c739:{NFSU2_TR(0x68c739);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c740:{NFSU2_TR(0x68c740);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68c743:{NFSU2_TR(0x68c743);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c746:{NFSU2_TR(0x68c746);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c74d:{NFSU2_TR(0x68c74d);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68c750:{NFSU2_TR(0x68c750);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68c753:{NFSU2_TR(0x68c753);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68c756:{NFSU2_TR(0x68c756);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68c759:{NFSU2_TR(0x68c759);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68c75d:{NFSU2_TR(0x68c75d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68c761:{NFSU2_TR(0x68c761);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c765:{NFSU2_TR(0x68c765);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68c768:{NFSU2_TR(0x68c768);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68c76f:{NFSU2_TR(0x68c76f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c776:{NFSU2_TR(0x68c776);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68c779:{NFSU2_TR(0x68c779);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68c77c:{NFSU2_TR(0x68c77c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c783:{NFSU2_TR(0x68c783);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c78a:{NFSU2_TR(0x68c78a);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c78d:{NFSU2_TR(0x68c78d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c794:{NFSU2_TR(0x68c794);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c798:{NFSU2_TR(0x68c798);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68c79b:{NFSU2_TR(0x68c79b);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68c79e:{NFSU2_TR(0x68c79e);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68c7a1:{NFSU2_TR(0x68c7a1);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68c7a4:{NFSU2_TR(0x68c7a4);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68c7a7:{NFSU2_TR(0x68c7a7);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68c7aa:{NFSU2_TR(0x68c7aa);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68c7ad:{NFSU2_TR(0x68c7ad);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B68c7b1:{NFSU2_TR(0x68c7b1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c7b5:{NFSU2_TR(0x68c7b5);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68c7b8:{NFSU2_TR(0x68c7b8);
__builtin_memmove((R+4608),(R+4800),4);
__builtin_memmove((R+4612),(R+4804),4);
__builtin_memmove((R+4616),(R+4808),4);
__builtin_memmove((R+4620),(R+4812),4);
}
B68c7bb:{NFSU2_TR(0x68c7bb);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4620),(U+24),4);
}
B68c7bf:{NFSU2_TR(0x68c7bf);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4804),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68c7c3:{NFSU2_TR(0x68c7c3);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4940))));
}
B68c7c6:{NFSU2_TR(0x68c7c6);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68c7c9:{NFSU2_TR(0x68c7c9);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c7cc:{NFSU2_TR(0x68c7cc);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4740),4);
__builtin_memmove((R+4676),(R+4736),4);
}
B68c7cf:{NFSU2_TR(0x68c7cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68c7d3:{NFSU2_TR(0x68c7d3);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c7d7:{NFSU2_TR(0x68c7d7);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c7dc:{NFSU2_TR(0x68c7dc);
__builtin_memmove((R+4864),(R+4872),4);
__builtin_memmove((R+4868),(R+4744),4);
__builtin_memmove((R+4872),(R+4876),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c7df:{NFSU2_TR(0x68c7df);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4800),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c7e3:{NFSU2_TR(0x68c7e3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c7e6:{NFSU2_TR(0x68c7e6);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4864),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c7eb:{NFSU2_TR(0x68c7eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c7ef:{NFSU2_TR(0x68c7ef);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4872),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68c7f4:{NFSU2_TR(0x68c7f4);
__builtin_memmove((R+8),(G+0),4);
}
B68c7f6:{NFSU2_TR(0x68c7f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c7f9:{NFSU2_TR(0x68c7f9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c7fb:{NFSU2_TR(0x68c7fb);
__builtin_memmove((R+8),(G+4),4);
}
B68c7fd:{NFSU2_TR(0x68c7fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c800:{NFSU2_TR(0x68c800);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c802:{NFSU2_TR(0x68c802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68c805:{NFSU2_TR(0x68c805);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c6a3u);}goto L68c6a3;}}
{[[clang::musttail]] return blk_68c80b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c80b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c80b:L68c80b:{bud-=1;NFSU2_TR(0x68c80b);
{[[clang::musttail]] return blk_68c810(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c80d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c80d:L68c80d:{bud-=1;NFSU2_TR(0x68c80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c810(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c810(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c810:L68c810:{bud-=3;NFSU2_TR(0x68c810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c813:{NFSU2_TR(0x68c813);
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
B68c815:{NFSU2_TR(0x68c815);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c82f(ARGS);}}
}
B68c817:L68c817:{bud-=1;NFSU2_TR(0x68c817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_68c81a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c81a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c81a:L68c81a:{bud-=4;NFSU2_TR(0x68c81a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c81d:{NFSU2_TR(0x68c81d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c81e:{NFSU2_TR(0x68c81e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c81f:{NFSU2_TR(0x68c81f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c824ull));
{[[clang::musttail]] return blk_68cdbc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c824(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c824:L68c824:{bud-=4;NFSU2_TR(0x68c824);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c827:{NFSU2_TR(0x68c827);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c82a:{NFSU2_TR(0x68c82a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c82d:{NFSU2_TR(0x68c82d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c81au);}[[clang::musttail]] return blk_68c81a(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c82f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c82f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c82f:L68c82f:{bud-=8;NFSU2_TR(0x68c82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c832:{NFSU2_TR(0x68c832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c833:{NFSU2_TR(0x68c833);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c834:{NFSU2_TR(0x68c834);
__builtin_memmove((G+16),(R+20),4);
}
B68c836:{NFSU2_TR(0x68c836);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c837:{NFSU2_TR(0x68c837);
__builtin_memmove((G+16),(R+12),4);
}
B68c839:{NFSU2_TR(0x68c839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c83a:{NFSU2_TR(0x68c83a);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c83d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c83d:L68c83d:{bud-=25;NFSU2_TR(0x68c83d);
__builtin_memmove((R+28),(R+28),4);
}
B68c83f:{NFSU2_TR(0x68c83f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c840:{NFSU2_TR(0x68c840);
__builtin_memmove((R+12),(G+16),4);
}
B68c842:{NFSU2_TR(0x68c842);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c843:{NFSU2_TR(0x68c843);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B68c846:{NFSU2_TR(0x68c846);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68c849:{NFSU2_TR(0x68c849);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c84a:{NFSU2_TR(0x68c84a);
__builtin_memmove((R+20),(G+16),4);
}
B68c84c:{NFSU2_TR(0x68c84c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x128ull))));
}
B68c852:{NFSU2_TR(0x68c852);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c855:{NFSU2_TR(0x68c855);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c856:{NFSU2_TR(0x68c856);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c857:{NFSU2_TR(0x68c857);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68c85a:{NFSU2_TR(0x68c85a);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c85c:{NFSU2_TR(0x68c85c);
__builtin_memmove((R+8),(G+0),4);
}
B68c85e:{NFSU2_TR(0x68c85e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68c861:{NFSU2_TR(0x68c861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c862:{NFSU2_TR(0x68c862);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B68c864:{NFSU2_TR(0x68c864);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68c866:{NFSU2_TR(0x68c866);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68c868:{NFSU2_TR(0x68c868);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B68c86a:{NFSU2_TR(0x68c86a);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(F+6))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(F+6,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68c86d:{NFSU2_TR(0x68c86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c870:{NFSU2_TR(0x68c870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c873:{NFSU2_TR(0x68c873);
if(r1(F+6)){{[[clang::musttail]] return blk_68c9c1(ARGS);}}
}
B68c879:L68c879:{bud-=3;NFSU2_TR(0x68c879);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c87c:{NFSU2_TR(0x68c87c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68c882:{NFSU2_TR(0x68c882);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c887ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68b19fu);}[[clang::musttail]] return blk_68b19f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c887(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c887:L68c887:{bud-=4;NFSU2_TR(0x68c887);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68c889:{NFSU2_TR(0x68c889);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c88c:{NFSU2_TR(0x68c88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68c88f:{NFSU2_TR(0x68c88f);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68c9c1(ARGS);}}
}
B68c895:L68c895:{bud-=4;NFSU2_TR(0x68c895);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68c899:{NFSU2_TR(0x68c899);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68c89d:{NFSU2_TR(0x68c89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c8a0:{NFSU2_TR(0x68c8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c8a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c8a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c8a3:L68c8a3:{bud-=73;NFSU2_TR(0x68c8a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68c8a6:{NFSU2_TR(0x68c8a6);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4608),(U+8),8);
}
B68c8aa:{NFSU2_TR(0x68c8aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68c8af:{NFSU2_TR(0x68c8af);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68c8b2:{NFSU2_TR(0x68c8b2);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68c8b6:{NFSU2_TR(0x68c8b6);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68c8b9:{NFSU2_TR(0x68c8b9);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c8bc:{NFSU2_TR(0x68c8bc);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c8bf:{NFSU2_TR(0x68c8bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68c8c3:{NFSU2_TR(0x68c8c3);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c8c7:{NFSU2_TR(0x68c8c7);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c8cb:{NFSU2_TR(0x68c8cb);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68c8d1:{NFSU2_TR(0x68c8d1);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c8d4:{NFSU2_TR(0x68c8d4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68c8da:{NFSU2_TR(0x68c8da);
__builtin_memmove((R+4744),(R+4672),8);
}
B68c8dd:{NFSU2_TR(0x68c8dd);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68c8e3:{NFSU2_TR(0x68c8e3);
__builtin_memmove((R+4872),(R+4672),8);
}
B68c8e6:{NFSU2_TR(0x68c8e6);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68c8e9:{NFSU2_TR(0x68c8e9);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68c8ed:{NFSU2_TR(0x68c8ed);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68c8f0:{NFSU2_TR(0x68c8f0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c8f7:{NFSU2_TR(0x68c8f7);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68c8fa:{NFSU2_TR(0x68c8fa);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68c8fd:{NFSU2_TR(0x68c8fd);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68c904:{NFSU2_TR(0x68c904);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68c907:{NFSU2_TR(0x68c907);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68c90e:{NFSU2_TR(0x68c90e);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4748))));
}
B68c911:{NFSU2_TR(0x68c911);
__builtin_memmove((R+4736),(R+4928),4);
__builtin_memmove((R+4740),(R+4932),4);
__builtin_memmove((R+4744),(R+4936),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68c914:{NFSU2_TR(0x68c914);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68c917:{NFSU2_TR(0x68c917);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B68c91a:{NFSU2_TR(0x68c91a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c921:{NFSU2_TR(0x68c921);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68c925:{NFSU2_TR(0x68c925);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68c928:{NFSU2_TR(0x68c928);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68c92f:{NFSU2_TR(0x68c92f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68c936:{NFSU2_TR(0x68c936);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68c939:{NFSU2_TR(0x68c939);
__builtin_memmove((R+4864),(R+4800),4);
__builtin_memmove((R+4868),(R+4804),4);
__builtin_memmove((R+4872),(R+4808),4);
__builtin_memmove((R+4876),(R+4812),4);
}
B68c93c:{NFSU2_TR(0x68c93c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68c943:{NFSU2_TR(0x68c943);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68c94a:{NFSU2_TR(0x68c94a);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68c94d:{NFSU2_TR(0x68c94d);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68c950:{NFSU2_TR(0x68c950);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68c953:{NFSU2_TR(0x68c953);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68c956:{NFSU2_TR(0x68c956);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68c959:{NFSU2_TR(0x68c959);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68c95c:{NFSU2_TR(0x68c95c);
__builtin_memmove((R+4808),(R+4804),4);
__builtin_memmove((R+4812),(R+4868),4);
__builtin_memmove((R+4804),(R+4864),4);
}
B68c95f:{NFSU2_TR(0x68c95f);
u8 U[8];
__builtin_memmove((U+0),(R+4800),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68c962:{NFSU2_TR(0x68c962);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c966:{NFSU2_TR(0x68c966);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68c969:{NFSU2_TR(0x68c969);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4676),(U+20),4);
__builtin_memmove((R+4684),(U+24),4);
}
B68c96d:{NFSU2_TR(0x68c96d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(R+4616),4);
__builtin_memmove((R+4616),(R+4620),4);
__builtin_memmove((R+4612),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68c971:{NFSU2_TR(0x68c971);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68c976:{NFSU2_TR(0x68c976);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68c979:{NFSU2_TR(0x68c979);
__builtin_memmove((R+4800),(R+4680),8);
}
B68c97c:{NFSU2_TR(0x68c97c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68c982:{NFSU2_TR(0x68c982);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4872),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68c985:{NFSU2_TR(0x68c985);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c989:{NFSU2_TR(0x68c989);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c98c:{NFSU2_TR(0x68c98c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68c990:{NFSU2_TR(0x68c990);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68c996:{NFSU2_TR(0x68c996);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68c999:{NFSU2_TR(0x68c999);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68c99c:{NFSU2_TR(0x68c99c);
__builtin_memmove((R+4672),(R+4616),8);
}
B68c99f:{NFSU2_TR(0x68c99f);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68c9a2:{NFSU2_TR(0x68c9a2);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68c9a8:{NFSU2_TR(0x68c9a8);
__builtin_memmove((R+8),(G+0),4);
}
B68c9aa:{NFSU2_TR(0x68c9aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c9ad:{NFSU2_TR(0x68c9ad);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68c9af:{NFSU2_TR(0x68c9af);
__builtin_memmove((R+8),(G+4),4);
}
B68c9b1:{NFSU2_TR(0x68c9b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68c9b4:{NFSU2_TR(0x68c9b4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68c9b6:{NFSU2_TR(0x68c9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68c9b9:{NFSU2_TR(0x68c9b9);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c8a3u);}goto L68c8a3;}}
}
B68c9bf:L68c9bf:{bud-=1;NFSU2_TR(0x68c9bf);
{[[clang::musttail]] return blk_68c9c4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c9c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c9c1:L68c9c1:{bud-=1;NFSU2_TR(0x68c9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68c9c4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c9c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c9c4:L68c9c4:{bud-=3;NFSU2_TR(0x68c9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c9c7:{NFSU2_TR(0x68c9c7);
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
B68c9c9:{NFSU2_TR(0x68c9c9);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c9e3(ARGS);}}
}
B68c9cb:L68c9cb:{bud-=1;NFSU2_TR(0x68c9cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_68c9ce(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c9ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c9ce:L68c9ce:{bud-=4;NFSU2_TR(0x68c9ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68c9d1:{NFSU2_TR(0x68c9d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c9d2:{NFSU2_TR(0x68c9d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c9d3:{NFSU2_TR(0x68c9d3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68c9d8ull));
{[[clang::musttail]] return blk_68d465(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c9d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c9d8:L68c9d8:{bud-=4;NFSU2_TR(0x68c9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68c9db:{NFSU2_TR(0x68c9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68c9de:{NFSU2_TR(0x68c9de);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68c9e1:{NFSU2_TR(0x68c9e1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68c9ceu);}[[clang::musttail]] return blk_68c9ce(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68c9e3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c9e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c9e3:L68c9e3:{bud-=8;NFSU2_TR(0x68c9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68c9e6:{NFSU2_TR(0x68c9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68c9e7:{NFSU2_TR(0x68c9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68c9e8:{NFSU2_TR(0x68c9e8);
__builtin_memmove((G+16),(R+20),4);
}
B68c9ea:{NFSU2_TR(0x68c9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68c9eb:{NFSU2_TR(0x68c9eb);
__builtin_memmove((G+16),(R+12),4);
}
B68c9ed:{NFSU2_TR(0x68c9ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68c9ee:{NFSU2_TR(0x68c9ee);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68c9f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68c9f1:L68c9f1:{bud-=25;NFSU2_TR(0x68c9f1);
__builtin_memmove((R+28),(R+28),4);
}
B68c9f3:{NFSU2_TR(0x68c9f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c9f4:{NFSU2_TR(0x68c9f4);
__builtin_memmove((R+12),(G+16),4);
}
B68c9f6:{NFSU2_TR(0x68c9f6);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c9f7:{NFSU2_TR(0x68c9f7);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B68c9fa:{NFSU2_TR(0x68c9fa);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68c9fd:{NFSU2_TR(0x68c9fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68c9fe:{NFSU2_TR(0x68c9fe);
__builtin_memmove((R+20),(G+16),4);
}
B68ca00:{NFSU2_TR(0x68ca00);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x128ull))));
}
B68ca06:{NFSU2_TR(0x68ca06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68ca09:{NFSU2_TR(0x68ca09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68ca0a:{NFSU2_TR(0x68ca0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68ca0b:{NFSU2_TR(0x68ca0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68ca0e:{NFSU2_TR(0x68ca0e);
u8 U[4];
w4(U+0,u32(0xaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68ca10:{NFSU2_TR(0x68ca10);
__builtin_memmove((R+8),(G+0),4);
}
B68ca12:{NFSU2_TR(0x68ca12);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68ca15:{NFSU2_TR(0x68ca15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68ca16:{NFSU2_TR(0x68ca16);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
}
B68ca18:{NFSU2_TR(0x68ca18);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68ca1a:{NFSU2_TR(0x68ca1a);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68ca1c:{NFSU2_TR(0x68ca1c);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B68ca1e:{NFSU2_TR(0x68ca1e);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(F+6))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(F+6,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68ca21:{NFSU2_TR(0x68ca21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ca24:{NFSU2_TR(0x68ca24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ca27:{NFSU2_TR(0x68ca27);
if(r1(F+6)){{[[clang::musttail]] return blk_68cbc5(ARGS);}}
}
B68ca2d:L68ca2d:{bud-=3;NFSU2_TR(0x68ca2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68ca30:{NFSU2_TR(0x68ca30);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68ca36:{NFSU2_TR(0x68ca36);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68ca3bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68b19fu);}[[clang::musttail]] return blk_68b19f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68ca3b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68ca3b:L68ca3b:{bud-=4;NFSU2_TR(0x68ca3b);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B68ca3d:{NFSU2_TR(0x68ca3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68ca40:{NFSU2_TR(0x68ca40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68ca43:{NFSU2_TR(0x68ca43);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_68cbc5(ARGS);}}
}
B68ca49:L68ca49:{bud-=4;NFSU2_TR(0x68ca49);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68ca4d:{NFSU2_TR(0x68ca4d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68ca51:{NFSU2_TR(0x68ca51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ca54:{NFSU2_TR(0x68ca54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68ca57(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68ca57(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68ca57:L68ca57:{bud-=96;NFSU2_TR(0x68ca57);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68ca5a:{NFSU2_TR(0x68ca5a);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4608),(U+8),8);
}
B68ca5e:{NFSU2_TR(0x68ca5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68ca63:{NFSU2_TR(0x68ca63);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68ca66:{NFSU2_TR(0x68ca66);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68ca6a:{NFSU2_TR(0x68ca6a);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68ca6d:{NFSU2_TR(0x68ca6d);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68ca70:{NFSU2_TR(0x68ca70);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68ca73:{NFSU2_TR(0x68ca73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68ca77:{NFSU2_TR(0x68ca77);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ca7b:{NFSU2_TR(0x68ca7b);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ca7f:{NFSU2_TR(0x68ca7f);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68ca85:{NFSU2_TR(0x68ca85);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68ca88:{NFSU2_TR(0x68ca88);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68ca8e:{NFSU2_TR(0x68ca8e);
__builtin_memmove((R+4744),(R+4672),8);
}
B68ca91:{NFSU2_TR(0x68ca91);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68ca97:{NFSU2_TR(0x68ca97);
__builtin_memmove((R+4872),(R+4672),8);
}
B68ca9a:{NFSU2_TR(0x68ca9a);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68ca9d:{NFSU2_TR(0x68ca9d);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68caa1:{NFSU2_TR(0x68caa1);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68caa4:{NFSU2_TR(0x68caa4);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68caab:{NFSU2_TR(0x68caab);
__builtin_memmove((R+4864),(R+4800),4);
__builtin_memmove((R+4868),(R+4804),4);
__builtin_memmove((R+4872),(R+4808),4);
__builtin_memmove((R+4876),(R+4812),4);
}
B68caae:{NFSU2_TR(0x68caae);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68cab5:{NFSU2_TR(0x68cab5);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4876))));
}
B68cab8:{NFSU2_TR(0x68cab8);
__builtin_memmove((R+4864),(R+4928),4);
__builtin_memmove((R+4868),(R+4932),4);
__builtin_memmove((R+4872),(R+4936),4);
__builtin_memmove((R+4876),(R+4940),4);
}
B68cabb:{NFSU2_TR(0x68cabb);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68cabe:{NFSU2_TR(0x68cabe);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68cac2:{NFSU2_TR(0x68cac2);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4736))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4740))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4744))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4748))));
}
B68cac5:{NFSU2_TR(0x68cac5);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68cac8:{NFSU2_TR(0x68cac8);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68cacc:{NFSU2_TR(0x68cacc);
{wv<16>((R+4864),uo::rcpps<16>(rv<16>((R+4864)),rv<16>((R+4736))));}
}
B68cacf:{NFSU2_TR(0x68cacf);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68cad2:{NFSU2_TR(0x68cad2);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B68cad5:{NFSU2_TR(0x68cad5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B68cad8:{NFSU2_TR(0x68cad8);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68cadb:{NFSU2_TR(0x68cadb);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68cade:{NFSU2_TR(0x68cade);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68cae1:{NFSU2_TR(0x68cae1);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+4940))));
}
B68cae4:{NFSU2_TR(0x68cae4);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68cae7:{NFSU2_TR(0x68cae7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68caee:{NFSU2_TR(0x68caee);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68caf1:{NFSU2_TR(0x68caf1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68caf8:{NFSU2_TR(0x68caf8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4940))));
}
B68cafb:{NFSU2_TR(0x68cafb);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68cafe:{NFSU2_TR(0x68cafe);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68cb05:{NFSU2_TR(0x68cb05);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4748))));
}
B68cb08:{NFSU2_TR(0x68cb08);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68cb0b:{NFSU2_TR(0x68cb0b);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68cb12:{NFSU2_TR(0x68cb12);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68cb19:{NFSU2_TR(0x68cb19);
__builtin_memmove((R+4736),(R+4992),4);
__builtin_memmove((R+4740),(R+4996),4);
__builtin_memmove((R+4744),(R+5000),4);
__builtin_memmove((R+4748),(R+5004),4);
}
B68cb1c:{NFSU2_TR(0x68cb1c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68cb20:{NFSU2_TR(0x68cb20);
__builtin_memmove((R+4992),(R+4800),4);
__builtin_memmove((R+4996),(R+4804),4);
__builtin_memmove((R+5000),(R+4808),4);
__builtin_memmove((R+5004),(R+4812),4);
}
B68cb23:{NFSU2_TR(0x68cb23);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68cb2a:{NFSU2_TR(0x68cb2a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68cb31:{NFSU2_TR(0x68cb31);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68cb34:{NFSU2_TR(0x68cb34);
__builtin_memmove((R+4928),(R+4672),4);
__builtin_memmove((R+4932),(R+4676),4);
__builtin_memmove((R+4936),(R+4680),4);
__builtin_memmove((R+4940),(R+4684),4);
}
B68cb37:{NFSU2_TR(0x68cb37);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68cb3e:{NFSU2_TR(0x68cb3e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68cb42:{NFSU2_TR(0x68cb42);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68cb45:{NFSU2_TR(0x68cb45);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(U+32))));
}
B68cb49:{NFSU2_TR(0x68cb49);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68cb4c:{NFSU2_TR(0x68cb4c);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+4940))));
}
B68cb4f:{NFSU2_TR(0x68cb4f);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4876))));
}
B68cb52:{NFSU2_TR(0x68cb52);
__builtin_memmove((R+4928),(R+5056),4);
__builtin_memmove((R+4932),(R+5060),4);
__builtin_memmove((R+4936),(R+5064),4);
__builtin_memmove((R+4940),(R+5068),4);
}
B68cb55:{NFSU2_TR(0x68cb55);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68cb59:{NFSU2_TR(0x68cb59);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B68cb5c:{NFSU2_TR(0x68cb5c);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68cb5f:{NFSU2_TR(0x68cb5f);
__builtin_memmove((R+4808),(R+4804),4);
__builtin_memmove((R+4812),(R+4932),4);
__builtin_memmove((R+4804),(R+4928),4);
}
B68cb62:{NFSU2_TR(0x68cb62);
u8 U[8];
__builtin_memmove((U+0),(R+4800),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68cb65:{NFSU2_TR(0x68cb65);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68cb69:{NFSU2_TR(0x68cb69);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4876))));
}
B68cb6c:{NFSU2_TR(0x68cb6c);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68cb6f:{NFSU2_TR(0x68cb6f);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4868),4);
__builtin_memmove((R+4676),(R+4864),4);
}
B68cb72:{NFSU2_TR(0x68cb72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cb77:{NFSU2_TR(0x68cb77);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68cb7a:{NFSU2_TR(0x68cb7a);
__builtin_memmove((R+4800),(R+4680),8);
}
B68cb7d:{NFSU2_TR(0x68cb7d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68cb83:{NFSU2_TR(0x68cb83);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4936),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68cb86:{NFSU2_TR(0x68cb86);
__builtin_memmove((R+4608),(R+4616),4);
__builtin_memmove((R+4612),(R+4872),4);
__builtin_memmove((R+4616),(R+4620),4);
__builtin_memmove((R+4620),(R+4876),4);
}
B68cb89:{NFSU2_TR(0x68cb89);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68cb8d:{NFSU2_TR(0x68cb8d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68cb90:{NFSU2_TR(0x68cb90);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68cb94:{NFSU2_TR(0x68cb94);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68cb9a:{NFSU2_TR(0x68cb9a);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68cb9d:{NFSU2_TR(0x68cb9d);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68cba0:{NFSU2_TR(0x68cba0);
__builtin_memmove((R+4672),(R+4616),8);
}
B68cba3:{NFSU2_TR(0x68cba3);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68cba6:{NFSU2_TR(0x68cba6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68cbac:{NFSU2_TR(0x68cbac);
__builtin_memmove((R+8),(G+0),4);
}
B68cbae:{NFSU2_TR(0x68cbae);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68cbb1:{NFSU2_TR(0x68cbb1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68cbb3:{NFSU2_TR(0x68cbb3);
__builtin_memmove((R+8),(G+4),4);
}
B68cbb5:{NFSU2_TR(0x68cbb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68cbb8:{NFSU2_TR(0x68cbb8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68cbba:{NFSU2_TR(0x68cbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68cbbd:{NFSU2_TR(0x68cbbd);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68ca57u);}goto L68ca57;}}
}
B68cbc3:L68cbc3:{bud-=1;NFSU2_TR(0x68cbc3);
{[[clang::musttail]] return blk_68cbc8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cbc5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cbc5:L68cbc5:{bud-=1;NFSU2_TR(0x68cbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_68cbc8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cbc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cbc8:L68cbc8:{bud-=3;NFSU2_TR(0x68cbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cbcb:{NFSU2_TR(0x68cbcb);
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
B68cbcd:{NFSU2_TR(0x68cbcd);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68cbe7(ARGS);}}
}
B68cbcf:L68cbcf:{bud-=1;NFSU2_TR(0x68cbcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_68cbd2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cbd2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cbd2:L68cbd2:{bud-=4;NFSU2_TR(0x68cbd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B68cbd5:{NFSU2_TR(0x68cbd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68cbd6:{NFSU2_TR(0x68cbd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68cbd7:{NFSU2_TR(0x68cbd7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68cbdcull));
{[[clang::musttail]] return blk_68d531(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cbdc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cbdc:L68cbdc:{bud-=4;NFSU2_TR(0x68cbdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68cbdf:{NFSU2_TR(0x68cbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68cbe2:{NFSU2_TR(0x68cbe2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B68cbe5:{NFSU2_TR(0x68cbe5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68cbd2u);}[[clang::musttail]] return blk_68cbd2(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68cbe7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cbe7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cbe7:L68cbe7:{bud-=8;NFSU2_TR(0x68cbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cbea:{NFSU2_TR(0x68cbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68cbeb:{NFSU2_TR(0x68cbeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68cbec:{NFSU2_TR(0x68cbec);
__builtin_memmove((G+16),(R+20),4);
}
B68cbee:{NFSU2_TR(0x68cbee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68cbef:{NFSU2_TR(0x68cbef);
__builtin_memmove((G+16),(R+12),4);
}
B68cbf1:{NFSU2_TR(0x68cbf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68cbf2:{NFSU2_TR(0x68cbf2);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cbf5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cbf5:L68cbf5:{bud-=13;NFSU2_TR(0x68cbf5);
__builtin_memmove((R+28),(R+28),4);
}
B68cbf7:{NFSU2_TR(0x68cbf7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68cbf8:{NFSU2_TR(0x68cbf8);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B68cbfc:{NFSU2_TR(0x68cbfc);
__builtin_memmove((R+4672),gp(0x80ad40),16);
}
B68cc04:{NFSU2_TR(0x68cc04);
__builtin_memmove((R+4736),gp(0x80ad50),16);
}
B68cc0c:{NFSU2_TR(0x68cc0c);
wv<16>((R+4672),eval<Op::INT_AND,16,16,16>(rv<16>((R+4672)),rv<16>((R+4608))));
}
B68cc10:{NFSU2_TR(0x68cc10);
__builtin_memmove((R+4800),(R+4672),16);
}
B68cc14:{NFSU2_TR(0x68cc14);
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((R+4736)),rv<16>((R+4608))));
}
B68cc18:{NFSU2_TR(0x68cc18);
wv<16>((R+4608),eval<Op::INT_AND,16,16,16>(rv<16>((R+4608)),rv<16>(gp(0x80ad30))));
}
B68cc20:{NFSU2_TR(0x68cc20);
u8 U[24];
w1(U+0,u8((r2(R+4800))==(r2(R+5056))));
w2(U+1,u16(r1(U+0)));
w2(R+4800,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4802))==(r2(R+5058))));
w2(U+4,u16(r1(U+3)));
w2(R+4802,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4804))==(r2(R+5060))));
w2(U+7,u16(r1(U+6)));
w2(R+4804,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4806))==(r2(R+5062))));
w2(U+10,u16(r1(U+9)));
w2(R+4806,u16(u32(r2(U+10))*u32(u16(0xffffull))));
w1(U+12,u8((r2(R+4808))==(r2(R+5064))));
w2(U+13,u16(r1(U+12)));
w2(R+4808,u16(u32(r2(U+13))*u32(u16(0xffffull))));
w1(U+15,u8((r2(R+4810))==(r2(R+5066))));
w2(U+16,u16(r1(U+15)));
w2(R+4810,u16(u32(r2(U+16))*u32(u16(0xffffull))));
w1(U+18,u8((r2(R+4812))==(r2(R+5068))));
w2(U+19,u16(r1(U+18)));
w2(R+4812,u16(u32(r2(U+19))*u32(u16(0xffffull))));
w1(U+21,u8((r2(R+4814))==(r2(R+5070))));
w2(U+22,u16(r1(U+21)));
w2(R+4814,u16(u32(r2(U+22))*u32(u16(0xffffull))));
}
B68cc24:{NFSU2_TR(0x68cc24);
u8 U[384];
w2(U+0,u16(0x0ull));
w2(U+20,u16(u32(r2(U+0))&u32(u16(0xfffeull))));
wv<16>((U+2),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x7ull)));
wv<1>((U+18),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+2)),V(0x0ull)));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w2(U+22,u16(r1(U+19)));
w2(U+0,u16(u32(r2(U+20))|u32(r2(U+22))));
w2(U+42,u16(u32(r2(U+0))&u32(u16(0xfffdull))));
wv<16>((U+24),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0xfull)));
wv<1>((U+40),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+24)),V(0x0ull)));
w1(U+41,u8(u32(r1(U+40))&u32(u8(0x1ull))));
w2(U+44,u16(r1(U+41)));
w2(U+46,shl<u16>(r2(U+44),u64(u32(0x1ull))));
w2(U+0,u16(u32(r2(U+42))|u32(r2(U+46))));
w2(U+66,u16(u32(r2(U+0))&u32(u16(0xfffbull))));
wv<16>((U+48),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x17ull)));
wv<1>((U+64),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+48)),V(0x0ull)));
w1(U+65,u8(u32(r1(U+64))&u32(u8(0x1ull))));
w2(U+68,u16(r1(U+65)));
w2(U+70,shl<u16>(r2(U+68),u64(u32(0x2ull))));
w2(U+0,u16(u32(r2(U+66))|u32(r2(U+70))));
w2(U+90,u16(u32(r2(U+0))&u32(u16(0xfff7ull))));
wv<16>((U+72),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x1full)));
wv<1>((U+88),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+72)),V(0x0ull)));
w1(U+89,u8(u32(r1(U+88))&u32(u8(0x1ull))));
w2(U+92,u16(r1(U+89)));
w2(U+94,shl<u16>(r2(U+92),u64(u32(0x3ull))));
w2(U+0,u16(u32(r2(U+90))|u32(r2(U+94))));
w2(U+114,u16(u32(r2(U+0))&u32(u16(0xffefull))));
wv<16>((U+96),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x27ull)));
wv<1>((U+112),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+96)),V(0x0ull)));
w1(U+113,u8(u32(r1(U+112))&u32(u8(0x1ull))));
w2(U+116,u16(r1(U+113)));
w2(U+118,shl<u16>(r2(U+116),u64(u32(0x4ull))));
w2(U+0,u16(u32(r2(U+114))|u32(r2(U+118))));
w2(U+138,u16(u32(r2(U+0))&u32(u16(0xffdfull))));
wv<16>((U+120),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x2full)));
wv<1>((U+136),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+120)),V(0x0ull)));
w1(U+137,u8(u32(r1(U+136))&u32(u8(0x1ull))));
w2(U+140,u16(r1(U+137)));
w2(U+142,shl<u16>(r2(U+140),u64(u32(0x5ull))));
w2(U+0,u16(u32(r2(U+138))|u32(r2(U+142))));
w2(U+162,u16(u32(r2(U+0))&u32(u16(0xffbfull))));
wv<16>((U+144),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x37ull)));
wv<1>((U+160),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+144)),V(0x0ull)));
w1(U+161,u8(u32(r1(U+160))&u32(u8(0x1ull))));
w2(U+164,u16(r1(U+161)));
w2(U+166,shl<u16>(r2(U+164),u64(u32(0x6ull))));
w2(U+0,u16(u32(r2(U+162))|u32(r2(U+166))));
w2(U+186,u16(u32(r2(U+0))&u32(u16(0xff7full))));
wv<16>((U+168),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x3full)));
wv<1>((U+184),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+168)),V(0x0ull)));
w1(U+185,u8(u32(r1(U+184))&u32(u8(0x1ull))));
w2(U+188,u16(r1(U+185)));
w2(U+190,shl<u16>(r2(U+188),u64(u32(0x7ull))));
w2(U+0,u16(u32(r2(U+186))|u32(r2(U+190))));
w2(U+210,u16(u32(r2(U+0))&u32(u16(0xfeffull))));
wv<16>((U+192),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x47ull)));
wv<1>((U+208),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+192)),V(0x0ull)));
w1(U+209,u8(u32(r1(U+208))&u32(u8(0x1ull))));
w2(U+212,u16(r1(U+209)));
w2(U+214,shl<u16>(r2(U+212),u64(u32(0x8ull))));
w2(U+0,u16(u32(r2(U+210))|u32(r2(U+214))));
w2(U+234,u16(u32(r2(U+0))&u32(u16(0xfdffull))));
wv<16>((U+216),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x4full)));
wv<1>((U+232),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+216)),V(0x0ull)));
w1(U+233,u8(u32(r1(U+232))&u32(u8(0x1ull))));
w2(U+236,u16(r1(U+233)));
w2(U+238,shl<u16>(r2(U+236),u64(u32(0x9ull))));
w2(U+0,u16(u32(r2(U+234))|u32(r2(U+238))));
w2(U+258,u16(u32(r2(U+0))&u32(u16(0xfbffull))));
wv<16>((U+240),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x57ull)));
wv<1>((U+256),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+240)),V(0x0ull)));
w1(U+257,u8(u32(r1(U+256))&u32(u8(0x1ull))));
w2(U+260,u16(r1(U+257)));
w2(U+262,shl<u16>(r2(U+260),u64(u32(0xaull))));
w2(U+0,u16(u32(r2(U+258))|u32(r2(U+262))));
w2(U+282,u16(u32(r2(U+0))&u32(u16(0xf7ffull))));
wv<16>((U+264),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x5full)));
wv<1>((U+280),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+264)),V(0x0ull)));
w1(U+281,u8(u32(r1(U+280))&u32(u8(0x1ull))));
w2(U+284,u16(r1(U+281)));
w2(U+286,shl<u16>(r2(U+284),u64(u32(0xbull))));
w2(U+0,u16(u32(r2(U+282))|u32(r2(U+286))));
w2(U+306,u16(u32(r2(U+0))&u32(u16(0xefffull))));
wv<16>((U+288),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x67ull)));
wv<1>((U+304),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+288)),V(0x0ull)));
w1(U+305,u8(u32(r1(U+304))&u32(u8(0x1ull))));
w2(U+308,u16(r1(U+305)));
w2(U+310,shl<u16>(r2(U+308),u64(u32(0xcull))));
w2(U+0,u16(u32(r2(U+306))|u32(r2(U+310))));
w2(U+330,u16(u32(r2(U+0))&u32(u16(0xdfffull))));
wv<16>((U+312),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x6full)));
wv<1>((U+328),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+312)),V(0x0ull)));
w1(U+329,u8(u32(r1(U+328))&u32(u8(0x1ull))));
w2(U+332,u16(r1(U+329)));
w2(U+334,shl<u16>(r2(U+332),u64(u32(0xdull))));
w2(U+0,u16(u32(r2(U+330))|u32(r2(U+334))));
w2(U+354,u16(u32(r2(U+0))&u32(u16(0xbfffull))));
wv<16>((U+336),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x77ull)));
wv<1>((U+352),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+336)),V(0x0ull)));
w1(U+353,u8(u32(r1(U+352))&u32(u8(0x1ull))));
w2(U+356,u16(r1(U+353)));
w2(U+358,shl<u16>(r2(U+356),u64(u32(0xeull))));
w2(U+0,u16(u32(r2(U+354))|u32(r2(U+358))));
w2(U+378,u16(u32(r2(U+0))&u32(u16(0x7fffull))));
wv<16>((U+360),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),V(0x7full)));
wv<1>((U+376),eval<Op::SUBPIECE,1,16,4>(rv<16>((U+360)),V(0x0ull)));
w1(U+377,u8(u32(r1(U+376))&u32(u8(0x1ull))));
w2(U+380,u16(r1(U+377)));
w2(U+382,shl<u16>(r2(U+380),u64(u32(0xfull))));
w2(U+0,u16(u32(r2(U+378))|u32(r2(U+382))));
w4(G+4,u32(r2(U+0)));
}
B68cc28:{NFSU2_TR(0x68cc28);
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
B68cc2a:{NFSU2_TR(0x68cc2a);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68cc98(ARGS);}}
}
B68cc2c:L68cc2c:{bud-=26;NFSU2_TR(0x68cc2c);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4800))));
wv<16>((R+4800),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>(gp(0x80ad20))));
}
B68cc34:{NFSU2_TR(0x68cc34);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4800))));
}
B68cc38:{NFSU2_TR(0x68cc38);
u8 U[33];
__builtin_memmove((U+9),gp(0x80ad60),16);
w1(U+25,u8(s16(r2(R+4672))<s16(r2(U+9))));
w2(U+0,u16(r1(U+25)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+9))));
w1(U+4,u8(!(r1(U+25))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4672))));
w2(R+4672,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+26,u8(s16(r2(R+4674))<s16(r2(U+11))));
w2(U+0,u16(r1(U+26)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+11))));
w1(U+4,u8(!(r1(U+26))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4674))));
w2(R+4674,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+27,u8(s16(r2(R+4676))<s16(r2(U+13))));
w2(U+0,u16(r1(U+27)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+13))));
w1(U+4,u8(!(r1(U+27))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4676))));
w2(R+4676,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+28,u8(s16(r2(R+4678))<s16(r2(U+15))));
w2(U+0,u16(r1(U+28)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+15))));
w1(U+4,u8(!(r1(U+28))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4678))));
w2(R+4678,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+29,u8(s16(r2(R+4680))<s16(r2(U+17))));
w2(U+0,u16(r1(U+29)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+17))));
w1(U+4,u8(!(r1(U+29))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4680))));
w2(R+4680,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+30,u8(s16(r2(R+4682))<s16(r2(U+19))));
w2(U+0,u16(r1(U+30)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+19))));
w1(U+4,u8(!(r1(U+30))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4682))));
w2(R+4682,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+31,u8(s16(r2(R+4684))<s16(r2(U+21))));
w2(U+0,u16(r1(U+31)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+21))));
w1(U+4,u8(!(r1(U+31))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4684))));
w2(R+4684,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+32,u8(s16(r2(R+4686))<s16(r2(U+23))));
w2(U+0,u16(r1(U+32)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+23))));
w1(U+4,u8(!(r1(U+32))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4686))));
w2(R+4686,u16(u32(r2(U+2))|u32(r2(U+7))));
}
B68cc40:{NFSU2_TR(0x68cc40);
__builtin_memmove((R+4864),gp(0x80ad70),16);
}
B68cc48:{NFSU2_TR(0x68cc48);
__builtin_memmove((R+4800),(R+4672),16);
}
B68cc4c:{NFSU2_TR(0x68cc4c);
__builtin_memmove((R+4686),(R+5062),2);
__builtin_memmove((R+4684),(R+4678),2);
__builtin_memmove((R+4682),(R+5060),2);
__builtin_memmove((R+4680),(R+4676),2);
__builtin_memmove((R+4678),(R+5058),2);
__builtin_memmove((R+4676),(R+4674),2);
__builtin_memmove((R+4674),(R+5056),2);
}
B68cc50:{NFSU2_TR(0x68cc50);
__builtin_memmove((R+4800),(R+4808),2);
__builtin_memmove((R+4802),(R+5064),2);
__builtin_memmove((R+4804),(R+4810),2);
__builtin_memmove((R+4806),(R+5066),2);
__builtin_memmove((R+4808),(R+4812),2);
__builtin_memmove((R+4810),(R+5068),2);
__builtin_memmove((R+4812),(R+4814),2);
__builtin_memmove((R+4814),(R+5070),2);
}
B68cc54:{NFSU2_TR(0x68cc54);
__builtin_memmove((R+4928),(R+5056),16);
}
B68cc58:{NFSU2_TR(0x68cc58);
__builtin_memmove((R+4942),(R+4614),2);
__builtin_memmove((R+4940),(R+4934),2);
__builtin_memmove((R+4938),(R+4612),2);
__builtin_memmove((R+4936),(R+4932),2);
__builtin_memmove((R+4934),(R+4610),2);
__builtin_memmove((R+4932),(R+4930),2);
__builtin_memmove((R+4930),(R+4608),2);
}
B68cc5c:{NFSU2_TR(0x68cc5c);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4616),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4618),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4620),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4622),2);
}
B68cc60:{NFSU2_TR(0x68cc60);
w4(R+4672,u32(u32(r4(R+4672))+u32(r4(R+4864))));
w4(R+4676,u32(u32(r4(R+4676))+u32(r4(R+4868))));
w4(R+4680,u32(u32(r4(R+4680))+u32(r4(R+4872))));
w4(R+4684,u32(u32(r4(R+4684))+u32(r4(R+4876))));
}
B68cc64:{NFSU2_TR(0x68cc64);
w4(R+4800,u32(u32(r4(R+4800))+u32(r4(R+4864))));
w4(R+4804,u32(u32(r4(R+4804))+u32(r4(R+4868))));
w4(R+4808,u32(u32(r4(R+4808))+u32(r4(R+4872))));
w4(R+4812,u32(u32(r4(R+4812))+u32(r4(R+4876))));
}
B68cc68:{NFSU2_TR(0x68cc68);
w4(R+4672,shl<u32>(r4(R+4672),u64(u32(0xdull))));
w4(R+4676,shl<u32>(r4(R+4676),u64(u32(0xdull))));
w4(R+4680,shl<u32>(r4(R+4680),u64(u32(0xdull))));
w4(R+4684,shl<u32>(r4(R+4684),u64(u32(0xdull))));
}
B68cc6d:{NFSU2_TR(0x68cc6d);
w4(R+4800,shl<u32>(r4(R+4800),u64(u32(0xdull))));
w4(R+4804,shl<u32>(r4(R+4804),u64(u32(0xdull))));
w4(R+4808,shl<u32>(r4(R+4808),u64(u32(0xdull))));
w4(R+4812,shl<u32>(r4(R+4812),u64(u32(0xdull))));
}
B68cc72:{NFSU2_TR(0x68cc72);
wv<16>((R+4672),eval<Op::INT_OR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4928))));
}
B68cc76:{NFSU2_TR(0x68cc76);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>((R+5056))));
}
B68cc7a:{NFSU2_TR(0x68cc7a);
wv<16>((R+4928),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4928)),rv<16>((R+4928))));
}
B68cc7e:{NFSU2_TR(0x68cc7e);
__builtin_memmove((R+5056),(R+4736),16);
}
B68cc82:{NFSU2_TR(0x68cc82);
__builtin_memmove((R+4750),(R+4934),2);
__builtin_memmove((R+4748),(R+4742),2);
__builtin_memmove((R+4746),(R+4932),2);
__builtin_memmove((R+4744),(R+4740),2);
__builtin_memmove((R+4742),(R+4930),2);
__builtin_memmove((R+4740),(R+4738),2);
__builtin_memmove((R+4738),(R+4928),2);
}
B68cc86:{NFSU2_TR(0x68cc86);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4936),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4938),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4940),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4942),2);
}
B68cc8a:{NFSU2_TR(0x68cc8a);
w4(R+4608,b32(float(s64(s32(r4(R+4736))))));
w4(R+4612,b32(float(s64(s32(r4(R+4740))))));
w4(R+4616,b32(float(s64(s32(r4(R+4744))))));
w4(R+4620,b32(float(s64(s32(r4(R+4748))))));
}
B68cc8d:{NFSU2_TR(0x68cc8d);
w4(R+4736,b32(float(s64(s32(r4(R+5056))))));
w4(R+4740,b32(float(s64(s32(r4(R+5060))))));
w4(R+4744,b32(float(s64(s32(r4(R+5064))))));
w4(R+4748,b32(float(s64(s32(r4(R+5068))))));
}
B68cc90:{NFSU2_TR(0x68cc90);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4684))));
}
B68cc93:{NFSU2_TR(0x68cc93);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4748))));
}
B68cc96:{NFSU2_TR(0x68cc96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68cc97:{NFSU2_TR(0x68cc97);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x68cd20u)[[clang::musttail]] return blk_68cd20(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cc98(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cc98:L68cc98:{bud-=20;NFSU2_TR(0x68cc98);
__builtin_memmove((R+4992),gp(0x80ad80),16);
}
B68cca0:{NFSU2_TR(0x68cca0);
__builtin_memmove((R+4928),(R+5056),16);
}
B68cca4:{NFSU2_TR(0x68cca4);
__builtin_memmove((R+4942),(R+4614),2);
__builtin_memmove((R+4940),(R+4934),2);
__builtin_memmove((R+4938),(R+4612),2);
__builtin_memmove((R+4936),(R+4932),2);
__builtin_memmove((R+4934),(R+4610),2);
__builtin_memmove((R+4932),(R+4930),2);
__builtin_memmove((R+4930),(R+4608),2);
}
B68cca8:{NFSU2_TR(0x68cca8);
__builtin_memmove((R+5056),(R+5064),2);
__builtin_memmove((R+5058),(R+4616),2);
__builtin_memmove((R+5060),(R+5066),2);
__builtin_memmove((R+5062),(R+4618),2);
__builtin_memmove((R+5064),(R+5068),2);
__builtin_memmove((R+5066),(R+4620),2);
__builtin_memmove((R+5068),(R+5070),2);
__builtin_memmove((R+5070),(R+4622),2);
}
B68ccac:{NFSU2_TR(0x68ccac);
__builtin_memmove((R+4800),(R+4672),16);
}
B68ccb0:{NFSU2_TR(0x68ccb0);
__builtin_memmove((R+4686),(R+5062),2);
__builtin_memmove((R+4684),(R+4678),2);
__builtin_memmove((R+4682),(R+5060),2);
__builtin_memmove((R+4680),(R+4676),2);
__builtin_memmove((R+4678),(R+5058),2);
__builtin_memmove((R+4676),(R+4674),2);
__builtin_memmove((R+4674),(R+5056),2);
}
B68ccb4:{NFSU2_TR(0x68ccb4);
__builtin_memmove((R+4800),(R+4808),2);
__builtin_memmove((R+4802),(R+5064),2);
__builtin_memmove((R+4804),(R+4810),2);
__builtin_memmove((R+4806),(R+5066),2);
__builtin_memmove((R+4808),(R+4812),2);
__builtin_memmove((R+4810),(R+5068),2);
__builtin_memmove((R+4812),(R+4814),2);
__builtin_memmove((R+4814),(R+5070),2);
}
B68ccb8:{NFSU2_TR(0x68ccb8);
w4(R+4672,u32(u32(r4(R+4672))+u32(r4(R+4992))));
w4(R+4676,u32(u32(r4(R+4676))+u32(r4(R+4996))));
w4(R+4680,u32(u32(r4(R+4680))+u32(r4(R+5000))));
w4(R+4684,u32(u32(r4(R+4684))+u32(r4(R+5004))));
}
B68ccbc:{NFSU2_TR(0x68ccbc);
w4(R+4800,u32(u32(r4(R+4800))+u32(r4(R+4992))));
w4(R+4804,u32(u32(r4(R+4804))+u32(r4(R+4996))));
w4(R+4808,u32(u32(r4(R+4808))+u32(r4(R+5000))));
w4(R+4812,u32(u32(r4(R+4812))+u32(r4(R+5004))));
}
B68ccc0:{NFSU2_TR(0x68ccc0);
__builtin_memmove((R+4608),(R+4736),16);
}
B68ccc4:{NFSU2_TR(0x68ccc4);
__builtin_memmove((R+4622),(R+5062),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+5060),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+5058),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+5056),2);
}
B68ccc8:{NFSU2_TR(0x68ccc8);
__builtin_memmove((R+4736),(R+4744),2);
__builtin_memmove((R+4738),(R+5064),2);
__builtin_memmove((R+4740),(R+4746),2);
__builtin_memmove((R+4742),(R+5066),2);
__builtin_memmove((R+4744),(R+4748),2);
__builtin_memmove((R+4746),(R+5068),2);
__builtin_memmove((R+4748),(R+4750),2);
__builtin_memmove((R+4750),(R+5070),2);
}
B68cccc:{NFSU2_TR(0x68cccc);
wv<16>((R+4608),eval<Op::INT_OR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4672))));
}
B68ccd0:{NFSU2_TR(0x68ccd0);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>((R+4736))));
}
B68ccd4:{NFSU2_TR(0x68ccd4);
w4(R+4608,shl<u32>(r4(R+4608),u64(u32(0xdull))));
w4(R+4612,shl<u32>(r4(R+4612),u64(u32(0xdull))));
w4(R+4616,shl<u32>(r4(R+4616),u64(u32(0xdull))));
w4(R+4620,shl<u32>(r4(R+4620),u64(u32(0xdull))));
}
B68ccd9:{NFSU2_TR(0x68ccd9);
w4(R+4800,shl<u32>(r4(R+4800),u64(u32(0xdull))));
w4(R+4804,shl<u32>(r4(R+4804),u64(u32(0xdull))));
w4(R+4808,shl<u32>(r4(R+4808),u64(u32(0xdull))));
w4(R+4812,shl<u32>(r4(R+4812),u64(u32(0xdull))));
}
B68ccde:{NFSU2_TR(0x68ccde);
wv<16>((R+4608),eval<Op::INT_OR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4928))));
}
B68cce2:{NFSU2_TR(0x68cce2);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>((R+5056))));
}
B68cce6:{NFSU2_TR(0x68cce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B68cce7:{NFSU2_TR(0x68cce7);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x68cd20u)[[clang::musttail]] return blk_68cd20(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cce8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cce8:L68cce8:{bud-=11;NFSU2_TR(0x68cce8);
__builtin_memmove((R+28),(R+28),4);
}
B68ccea:{NFSU2_TR(0x68ccea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68cceb:{NFSU2_TR(0x68cceb);
__builtin_memmove((R+20),(G+16),4);
}
B68cced:{NFSU2_TR(0x68cced);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xcull))));
}
B68ccf0:{NFSU2_TR(0x68ccf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(U+8))<(u32(0x8ull))));
}
B68ccf4:{NFSU2_TR(0x68ccf4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68ccf5:{NFSU2_TR(0x68ccf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68ccf6:{NFSU2_TR(0x68ccf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68ccf7:{NFSU2_TR(0x68ccf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68ccfa:{NFSU2_TR(0x68ccfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68ccfd:{NFSU2_TR(0x68ccfd);
if(r1(F+0)){{[[clang::musttail]] return blk_68cd49(ARGS);}}
}
B68ccff:L68ccff:{bud-=6;NFSU2_TR(0x68ccff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68cd02:{NFSU2_TR(0x68cd02);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff8ull))));
}
B68cd05:{NFSU2_TR(0x68cd05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cd08:{NFSU2_TR(0x68cd08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68cd0b:{NFSU2_TR(0x68cd0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cd0e:{NFSU2_TR(0x68cd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_68cd11(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cd11(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cd11:L68cd11:{bud-=4;NFSU2_TR(0x68cd11);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68cd14:{NFSU2_TR(0x68cd14);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B68cd18:{NFSU2_TR(0x68cd18);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B68cd1b:{NFSU2_TR(0x68cd1b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x68cd20ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x68cbf5u);}[[clang::musttail]] return blk_68cbf5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cd20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cd20:L68cd20:{bud-=7;NFSU2_TR(0x68cd20);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(G+4)),r8(U+0));
}
B68cd23:{NFSU2_TR(0x68cd23);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4616),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cd27:{NFSU2_TR(0x68cd27);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4800),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cd2b:{NFSU2_TR(0x68cd2b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4808),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cd2f:{NFSU2_TR(0x68cd2f);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x20ull))));
}
B68cd32:{NFSU2_TR(0x68cd32);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B68cd35:{NFSU2_TR(0x68cd35);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68cd11u);}[[clang::musttail]] return blk_68cd11(ARGS);}}
}
B68cd37:L68cd37:{bud-=6;NFSU2_TR(0x68cd37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cd3a:{NFSU2_TR(0x68cd3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B68cd3d:{NFSU2_TR(0x68cd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B68cd40:{NFSU2_TR(0x68cd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cd43:{NFSU2_TR(0x68cd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B68cd46:{NFSU2_TR(0x68cd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_68cd49(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cd49(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cd49:L68cd49:{bud-=3;NFSU2_TR(0x68cd49);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B68cd4b:{NFSU2_TR(0x68cd4b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(r4(R+12))));
w1(F+11,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B68cd4e:{NFSU2_TR(0x68cd4e);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68cdb2(ARGS);}}
}
B68cd50:L68cd50:{bud-=1;NFSU2_TR(0x68cd50);
w4(R+28,u32(0x400ull));
{[[clang::musttail]] return blk_68cd55(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cd55(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cd55:L68cd55:{bud-=15;NFSU2_TR(0x68cd55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cd58:{NFSU2_TR(0x68cd58);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(G+4,u32(r2(U+8)));
}
B68cd5c:{NFSU2_TR(0x68cd5c);
__builtin_memmove((R+8),(G+4),4);
}
B68cd5e:{NFSU2_TR(0x68cd5e);
__builtin_memmove((R+24),(G+4),4);
}
B68cd60:{NFSU2_TR(0x68cd60);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7c00ull))));
}
B68cd66:{NFSU2_TR(0x68cd66);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffff8000ull))));
}
B68cd6c:{NFSU2_TR(0x68cd6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B68cd6f:{NFSU2_TR(0x68cd6f);
__builtin_memmove((G+0),(R+8),4);
}
B68cd71:{NFSU2_TR(0x68cd71);
w1(F+0,u8((r4(G+0))!=(u32(0x0ull))));
w4(G+0,u32(0-u32(r4(G+0))));
}
B68cd73:{NFSU2_TR(0x68cd73);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(G+0))));
w4(G+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68cd75:{NFSU2_TR(0x68cd75);
w4(G+0,u32(u32(r4(G+0))&u32(r4(R+28))));
}
B68cd77:{NFSU2_TR(0x68cd77);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ffull))));
}
B68cd7d:{NFSU2_TR(0x68cd7d);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B68cd7f:{NFSU2_TR(0x68cd7f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+0,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B68cd81:{NFSU2_TR(0x68cd81);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_68cd85(ARGS);}}
}
B68cd83:L68cd83:{bud-=1;NFSU2_TR(0x68cd83);
__builtin_memmove((R+8),(R+28),4);
{[[clang::musttail]] return blk_68cd85(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cd85(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cd85:L68cd85:{bud-=5;NFSU2_TR(0x68cd85);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x19800ull))));
}
B68cd8b:{NFSU2_TR(0x68cd8b);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68cd8e:{NFSU2_TR(0x68cd8e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B68cd90:{NFSU2_TR(0x68cd90);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68cd92:{NFSU2_TR(0x68cd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68cd95(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cd95(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cd95:L68cd95:{bud-=3;NFSU2_TR(0x68cd95);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_),"m"(m_));}
}
B68cd98:{NFSU2_TR(0x68cd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cd9b:{NFSU2_TR(0x68cd9b);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_68cda3(ARGS);}}
{[[clang::musttail]] return blk_68cd9d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cd9d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cd9d:L68cd9d:{bud-=1;NFSU2_TR(0x68cd9d);
{u32 ea_=u32(u32(7882060u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68cda3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cda3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cda3:L68cda3:{bud-=1;NFSU2_TR(0x68cda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_68cda6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cda6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cda6:L68cda6:{bud-=1;NFSU2_TR(0x68cda6);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));const XM<4>& m_=*static_cast<const XM<4>*>(gp(ea_));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_),"m"(m_));}
{[[clang::musttail]] return blk_68cda9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cda9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cda9:L68cda9:{bud-=4;NFSU2_TR(0x68cda9);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+0));u32& m_=*static_cast<u32*>(gp(ea_));__asm__ volatile(".byte 0xd9,0x18":"=m"(m_):"a"(ea_));}
}
B68cdac:{NFSU2_TR(0x68cdac);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B68cdad:{NFSU2_TR(0x68cdad);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(R+12))<(r4(U+14))));
w1(F+11,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B68cdb0:{NFSU2_TR(0x68cdb0);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x68cd55u);}[[clang::musttail]] return blk_68cd55(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68cdb2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cdb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cdb2:L68cdb2:{bud-=6;NFSU2_TR(0x68cdb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cdb5:{NFSU2_TR(0x68cdb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68cdb6:{NFSU2_TR(0x68cdb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68cdb7:{NFSU2_TR(0x68cdb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68cdb8:{NFSU2_TR(0x68cdb8);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68cdb9:{NFSU2_TR(0x68cdb9);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cdbc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cdbc:L68cdbc:{bud-=16;NFSU2_TR(0x68cdbc);
__builtin_memmove((R+28),(R+28),4);
}
B68cdbe:{NFSU2_TR(0x68cdbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68cdbf:{NFSU2_TR(0x68cdbf);
__builtin_memmove((R+12),(G+16),4);
}
B68cdc1:{NFSU2_TR(0x68cdc1);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68cdc2:{NFSU2_TR(0x68cdc2);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B68cdc5:{NFSU2_TR(0x68cdc5);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B68cdc8:{NFSU2_TR(0x68cdc8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68cdc9:{NFSU2_TR(0x68cdc9);
__builtin_memmove((R+20),(G+16),4);
}
B68cdcb:{NFSU2_TR(0x68cdcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68cdce:{NFSU2_TR(0x68cdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cdd1:{NFSU2_TR(0x68cdd1);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+4))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B68cdd4:{NFSU2_TR(0x68cdd4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x10ull))));
}
B68cdd7:{NFSU2_TR(0x68cdd7);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+0))&u32(u8(0xfull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B68cdd9:{NFSU2_TR(0x68cdd9);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68cddc:{NFSU2_TR(0x68cddc);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cde0:{NFSU2_TR(0x68cde0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68ce14(ARGS);}}
}
B68cde2:L68cde2:{bud-=15;NFSU2_TR(0x68cde2);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68cde6:{NFSU2_TR(0x68cde6);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68cdea:{NFSU2_TR(0x68cdea);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68cded:{NFSU2_TR(0x68cded);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68cdf0:{NFSU2_TR(0x68cdf0);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cdf4:{NFSU2_TR(0x68cdf4);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B68cdf7:{NFSU2_TR(0x68cdf7);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68cdfa:{NFSU2_TR(0x68cdfa);
u8 U[36];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68cdfe:{NFSU2_TR(0x68cdfe);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce01:{NFSU2_TR(0x68ce01);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce05:{NFSU2_TR(0x68ce05);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68ce08:{NFSU2_TR(0x68ce08);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce0b:{NFSU2_TR(0x68ce0b);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce0f:{NFSU2_TR(0x68ce0f);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B68ce12:{NFSU2_TR(0x68ce12);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68ce64(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68ce14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68ce14:L68ce14:{bud-=22;NFSU2_TR(0x68ce14);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68ce18:{NFSU2_TR(0x68ce18);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68ce1c:{NFSU2_TR(0x68ce1c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B68ce20:{NFSU2_TR(0x68ce20);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68ce24:{NFSU2_TR(0x68ce24);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B68ce28:{NFSU2_TR(0x68ce28);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B68ce2c:{NFSU2_TR(0x68ce2c);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68ce2f:{NFSU2_TR(0x68ce2f);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce32:{NFSU2_TR(0x68ce32);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce36:{NFSU2_TR(0x68ce36);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B68ce39:{NFSU2_TR(0x68ce39);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68ce3c:{NFSU2_TR(0x68ce3c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68ce40:{NFSU2_TR(0x68ce40);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68ce44:{NFSU2_TR(0x68ce44);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B68ce48:{NFSU2_TR(0x68ce48);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce4b:{NFSU2_TR(0x68ce4b);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce4f:{NFSU2_TR(0x68ce4f);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68ce52:{NFSU2_TR(0x68ce52);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68ce55:{NFSU2_TR(0x68ce55);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68ce59:{NFSU2_TR(0x68ce59);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68ce5d:{NFSU2_TR(0x68ce5d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68ce60:{NFSU2_TR(0x68ce60);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
{[[clang::musttail]] return blk_68ce64(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68ce64(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68ce64:L68ce64:{bud-=10;NFSU2_TR(0x68ce64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68ce67:{NFSU2_TR(0x68ce67);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4684))));
}
B68ce6a:{NFSU2_TR(0x68ce6a);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68ce6d:{NFSU2_TR(0x68ce6d);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68ce70:{NFSU2_TR(0x68ce70);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(G+0))),(U+0),16);
}
B68ce73:{NFSU2_TR(0x68ce73);
__builtin_memmove((G+16),(R+20),4);
}
B68ce75:{NFSU2_TR(0x68ce75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68ce76:{NFSU2_TR(0x68ce76);
__builtin_memmove((G+16),(R+12),4);
}
B68ce78:{NFSU2_TR(0x68ce78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68ce79:{NFSU2_TR(0x68ce79);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x68baacu)[[clang::musttail]] return blk_68baac(ARGS);if(t__==0x68c824u)[[clang::musttail]] return blk_68c824(ARGS););}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68ce7c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68ce7c:L68ce7c:{bud-=85;NFSU2_TR(0x68ce7c);
__builtin_memmove((R+28),(R+28),4);
}
B68ce7e:{NFSU2_TR(0x68ce7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68ce7f:{NFSU2_TR(0x68ce7f);
__builtin_memmove((R+20),(G+16),4);
}
B68ce81:{NFSU2_TR(0x68ce81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68ce84:{NFSU2_TR(0x68ce84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68ce87:{NFSU2_TR(0x68ce87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68ce8a:{NFSU2_TR(0x68ce8a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68ce8d:{NFSU2_TR(0x68ce8d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B68ce91:{NFSU2_TR(0x68ce91);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B68ce95:{NFSU2_TR(0x68ce95);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B68ce99:{NFSU2_TR(0x68ce99);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68ce9d:{NFSU2_TR(0x68ce9d);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B68cea1:{NFSU2_TR(0x68cea1);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B68cea5:{NFSU2_TR(0x68cea5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B68cea9:{NFSU2_TR(0x68cea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4864),(U+0),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68cead:{NFSU2_TR(0x68cead);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68ceb2:{NFSU2_TR(0x68ceb2);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68ceb7:{NFSU2_TR(0x68ceb7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cebc:{NFSU2_TR(0x68cebc);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cec0:{NFSU2_TR(0x68cec0);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cec4:{NFSU2_TR(0x68cec4);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cec8:{NFSU2_TR(0x68cec8);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cecc:{NFSU2_TR(0x68cecc);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4608))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4612))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4616))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4620))));
}
B68cecf:{NFSU2_TR(0x68cecf);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4672))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4676))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4680))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4684))));
}
B68ced2:{NFSU2_TR(0x68ced2);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4748))));
}
B68ced5:{NFSU2_TR(0x68ced5);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4800))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4804))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4808))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4812))));
}
B68ced8:{NFSU2_TR(0x68ced8);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68cedb:{NFSU2_TR(0x68cedb);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+5068))));
}
B68cede:{NFSU2_TR(0x68cede);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4992))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4996))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+5000))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+5004))));
}
B68cee1:{NFSU2_TR(0x68cee1);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68cee6:{NFSU2_TR(0x68cee6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68ceeb:{NFSU2_TR(0x68ceeb);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cef0:{NFSU2_TR(0x68cef0);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cef4:{NFSU2_TR(0x68cef4);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cef8:{NFSU2_TR(0x68cef8);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cefc:{NFSU2_TR(0x68cefc);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4620))));
}
B68ceff:{NFSU2_TR(0x68ceff);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4672))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4676))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4680))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4684))));
}
B68cf02:{NFSU2_TR(0x68cf02);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4736))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4740))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4744))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4748))));
}
B68cf05:{NFSU2_TR(0x68cf05);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4992))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4996))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+5000))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+5004))));
}
B68cf08:{NFSU2_TR(0x68cf08);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+5068))));
}
B68cf0b:{NFSU2_TR(0x68cf0b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68cf10:{NFSU2_TR(0x68cf10);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf14:{NFSU2_TR(0x68cf14);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4812))));
}
B68cf17:{NFSU2_TR(0x68cf17);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4992))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4996))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+5000))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+5004))));
}
B68cf1a:{NFSU2_TR(0x68cf1a);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
}
B68cf1f:{NFSU2_TR(0x68cf1f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf24:{NFSU2_TR(0x68cf24);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf28:{NFSU2_TR(0x68cf28);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf2c:{NFSU2_TR(0x68cf2c);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4608))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4612))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4616))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4620))));
}
B68cf2f:{NFSU2_TR(0x68cf2f);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4672))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4676))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4680))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4684))));
}
B68cf32:{NFSU2_TR(0x68cf32);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+5068))));
}
B68cf35:{NFSU2_TR(0x68cf35);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf3a:{NFSU2_TR(0x68cf3a);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf3e:{NFSU2_TR(0x68cf3e);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4736))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4740))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4744))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4748))));
}
B68cf41:{NFSU2_TR(0x68cf41);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+5068))));
}
B68cf44:{NFSU2_TR(0x68cf44);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf49:{NFSU2_TR(0x68cf49);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf4d:{NFSU2_TR(0x68cf4d);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4800))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4804))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4808))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4812))));
}
B68cf50:{NFSU2_TR(0x68cf50);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+5068))));
}
B68cf53:{NFSU2_TR(0x68cf53);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf58:{NFSU2_TR(0x68cf58);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf5c:{NFSU2_TR(0x68cf5c);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+5056))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+5060))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+5064))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+5068))));
}
B68cf5f:{NFSU2_TR(0x68cf5f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf64:{NFSU2_TR(0x68cf64);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf68:{NFSU2_TR(0x68cf68);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+5056))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+5060))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+5064))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+5068))));
}
B68cf6b:{NFSU2_TR(0x68cf6b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf70:{NFSU2_TR(0x68cf70);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf74:{NFSU2_TR(0x68cf74);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+5068))));
}
B68cf77:{NFSU2_TR(0x68cf77);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+5056),(U+4),4);
w4(R+5060,u32(0x0ull));
w4(R+5064,u32(0x0ull));
w4(R+5068,u32(0x0ull));
}
B68cf7c:{NFSU2_TR(0x68cf7c);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68cf80:{NFSU2_TR(0x68cf80);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+5068))));
}
B68cf83:{NFSU2_TR(0x68cf83);
u8 U[8];
__builtin_memmove((U+0),(R+4864),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B68cf86:{NFSU2_TR(0x68cf86);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4872),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cf8a:{NFSU2_TR(0x68cf8a);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68cf8d:{NFSU2_TR(0x68cf8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4928),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cf91:{NFSU2_TR(0x68cf91);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4936),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cf95:{NFSU2_TR(0x68cf95);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B68cf98:{NFSU2_TR(0x68cf98);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cf9c:{NFSU2_TR(0x68cf9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+5000),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cfa0:{NFSU2_TR(0x68cfa0);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68cfa3:{NFSU2_TR(0x68cfa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cfa7:{NFSU2_TR(0x68cfa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4616),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68cfab:{NFSU2_TR(0x68cfab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cfae:{NFSU2_TR(0x68cfae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68cfaf:{NFSU2_TR(0x68cfaf);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cfb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cfb2:L68cfb2:{bud-=18;NFSU2_TR(0x68cfb2);
__builtin_memmove((R+28),(R+28),4);
}
B68cfb4:{NFSU2_TR(0x68cfb4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B68cfb5:{NFSU2_TR(0x68cfb5);
__builtin_memmove((R+20),(G+16),4);
}
B68cfb7:{NFSU2_TR(0x68cfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B68cfba:{NFSU2_TR(0x68cfba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68cfbe:{NFSU2_TR(0x68cfbe);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68cfc3:{NFSU2_TR(0x68cfc3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68cfc8:{NFSU2_TR(0x68cfc8);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68cfcb:{NFSU2_TR(0x68cfcb);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B68cfce:{NFSU2_TR(0x68cfce);
__builtin_memmove((R+4928),(R+4736),4);
__builtin_memmove((R+4932),(R+4740),4);
__builtin_memmove((R+4936),(R+4744),4);
__builtin_memmove((R+4940),(R+4748),4);
}
B68cfd1:{NFSU2_TR(0x68cfd1);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4608))));
}
B68cfd5:{NFSU2_TR(0x68cfd5);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4672))));
}
B68cfd9:{NFSU2_TR(0x68cfd9);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4736))));
}
B68cfdd:{NFSU2_TR(0x68cfdd);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
}
B68cfe1:{NFSU2_TR(0x68cfe1);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B68cfe5:{NFSU2_TR(0x68cfe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B68cfe8:{NFSU2_TR(0x68cfe8);
u8 U[4];
w1(U+0,u8(std::isnan(f32(r4(R+4608)))));
w1(U+1,u8(std::isnan(f32(m4(0x7bab10)))));
w1(F+2,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f32(r4(R+4608))==f32(m4(0x7bab10))));
w1(F+6,u8(u32(r1(F+2))|u32(r1(U+2))));
w1(U+3,u8(f32(r4(R+4608))<f32(m4(0x7bab10))));
w1(F+0,u8(u32(r1(F+2))|u32(r1(U+3))));
w1(F+11,u8(0x0ull));
w1(F+4,u8(0x0ull));
w1(F+7,u8(0x0ull));
}
B68cfef:{NFSU2_TR(0x68cfef);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68cffe(ARGS);}}
}
B68cff1:L68cff1:{bud-=5;NFSU2_TR(0x68cff1);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B68cff3:{NFSU2_TR(0x68cff3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B68cff5:{NFSU2_TR(0x68cff5);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cff8:{NFSU2_TR(0x68cff8);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68cffb:{NFSU2_TR(0x68cffb);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+516,F+4,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_68d03f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 blk_68cffe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B68cffe:L68cffe:{bud-=1;NFSU2_TR(0x68cffe);
{wv<16>((R+4992),uo::rsqrtss<16>(rv<16>((R+4992)),rv<16>((R+4608))));}
{[[clang::musttail]] return blk_68d002(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef TAIL_PRED
#undef NFSU2_FAULT
}
PN u32 ent_68c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x68c001:[[clang::musttail]] return blk_68c001(c,a4,a0,a1,bud);
case 0x68c00a:[[clang::musttail]] return blk_68c00a(c,a4,a0,a1,bud);
case 0x68c016:[[clang::musttail]] return blk_68c016(c,a4,a0,a1,bud);
case 0x68c046:[[clang::musttail]] return blk_68c046(c,a4,a0,a1,bud);
case 0x68c056:[[clang::musttail]] return blk_68c056(c,a4,a0,a1,bud);
case 0x68c05e:[[clang::musttail]] return blk_68c05e(c,a4,a0,a1,bud);
case 0x68c064:[[clang::musttail]] return blk_68c064(c,a4,a0,a1,bud);
case 0x68c067:[[clang::musttail]] return blk_68c067(c,a4,a0,a1,bud);
case 0x68c06a:[[clang::musttail]] return blk_68c06a(c,a4,a0,a1,bud);
case 0x68c073:[[clang::musttail]] return blk_68c073(c,a4,a0,a1,bud);
case 0x68c07d:[[clang::musttail]] return blk_68c07d(c,a4,a0,a1,bud);
case 0x68c0c7:[[clang::musttail]] return blk_68c0c7(c,a4,a0,a1,bud);
case 0x68c0e3:[[clang::musttail]] return blk_68c0e3(c,a4,a0,a1,bud);
case 0x68c220:[[clang::musttail]] return blk_68c220(c,a4,a0,a1,bud);
case 0x68c223:[[clang::musttail]] return blk_68c223(c,a4,a0,a1,bud);
case 0x68c22d:[[clang::musttail]] return blk_68c22d(c,a4,a0,a1,bud);
case 0x68c237:[[clang::musttail]] return blk_68c237(c,a4,a0,a1,bud);
case 0x68c242:[[clang::musttail]] return blk_68c242(c,a4,a0,a1,bud);
case 0x68c250:[[clang::musttail]] return blk_68c250(c,a4,a0,a1,bud);
case 0x68c2a0:[[clang::musttail]] return blk_68c2a0(c,a4,a0,a1,bud);
case 0x68c2b9:[[clang::musttail]] return blk_68c2b9(c,a4,a0,a1,bud);
case 0x68c39f:[[clang::musttail]] return blk_68c39f(c,a4,a0,a1,bud);
case 0x68c3a9:[[clang::musttail]] return blk_68c3a9(c,a4,a0,a1,bud);
case 0x68c3b5:[[clang::musttail]] return blk_68c3b5(c,a4,a0,a1,bud);
case 0x68c3c2:[[clang::musttail]] return blk_68c3c2(c,a4,a0,a1,bud);
case 0x68c3d0:[[clang::musttail]] return blk_68c3d0(c,a4,a0,a1,bud);
case 0x68c41a:[[clang::musttail]] return blk_68c41a(c,a4,a0,a1,bud);
case 0x68c436:[[clang::musttail]] return blk_68c436(c,a4,a0,a1,bud);
case 0x68c4fc:[[clang::musttail]] return blk_68c4fc(c,a4,a0,a1,bud);
case 0x68c4ff:[[clang::musttail]] return blk_68c4ff(c,a4,a0,a1,bud);
case 0x68c509:[[clang::musttail]] return blk_68c509(c,a4,a0,a1,bud);
case 0x68c513:[[clang::musttail]] return blk_68c513(c,a4,a0,a1,bud);
case 0x68c51e:[[clang::musttail]] return blk_68c51e(c,a4,a0,a1,bud);
case 0x68c52c:[[clang::musttail]] return blk_68c52c(c,a4,a0,a1,bud);
case 0x68c576:[[clang::musttail]] return blk_68c576(c,a4,a0,a1,bud);
case 0x68c592:[[clang::musttail]] return blk_68c592(c,a4,a0,a1,bud);
case 0x68c60d:[[clang::musttail]] return blk_68c60d(c,a4,a0,a1,bud);
case 0x68c610:[[clang::musttail]] return blk_68c610(c,a4,a0,a1,bud);
case 0x68c61a:[[clang::musttail]] return blk_68c61a(c,a4,a0,a1,bud);
case 0x68c624:[[clang::musttail]] return blk_68c624(c,a4,a0,a1,bud);
case 0x68c62f:[[clang::musttail]] return blk_68c62f(c,a4,a0,a1,bud);
case 0x68c63d:[[clang::musttail]] return blk_68c63d(c,a4,a0,a1,bud);
case 0x68c687:[[clang::musttail]] return blk_68c687(c,a4,a0,a1,bud);
case 0x68c6a3:[[clang::musttail]] return blk_68c6a3(c,a4,a0,a1,bud);
case 0x68c80b:[[clang::musttail]] return blk_68c80b(c,a4,a0,a1,bud);
case 0x68c80d:[[clang::musttail]] return blk_68c80d(c,a4,a0,a1,bud);
case 0x68c810:[[clang::musttail]] return blk_68c810(c,a4,a0,a1,bud);
case 0x68c81a:[[clang::musttail]] return blk_68c81a(c,a4,a0,a1,bud);
case 0x68c824:[[clang::musttail]] return blk_68c824(c,a4,a0,a1,bud);
case 0x68c82f:[[clang::musttail]] return blk_68c82f(c,a4,a0,a1,bud);
case 0x68c83d:[[clang::musttail]] return blk_68c83d(c,a4,a0,a1,bud);
case 0x68c887:[[clang::musttail]] return blk_68c887(c,a4,a0,a1,bud);
case 0x68c8a3:[[clang::musttail]] return blk_68c8a3(c,a4,a0,a1,bud);
case 0x68c9c1:[[clang::musttail]] return blk_68c9c1(c,a4,a0,a1,bud);
case 0x68c9c4:[[clang::musttail]] return blk_68c9c4(c,a4,a0,a1,bud);
case 0x68c9ce:[[clang::musttail]] return blk_68c9ce(c,a4,a0,a1,bud);
case 0x68c9d8:[[clang::musttail]] return blk_68c9d8(c,a4,a0,a1,bud);
case 0x68c9e3:[[clang::musttail]] return blk_68c9e3(c,a4,a0,a1,bud);
case 0x68c9f1:[[clang::musttail]] return blk_68c9f1(c,a4,a0,a1,bud);
case 0x68ca3b:[[clang::musttail]] return blk_68ca3b(c,a4,a0,a1,bud);
case 0x68ca57:[[clang::musttail]] return blk_68ca57(c,a4,a0,a1,bud);
case 0x68cbc5:[[clang::musttail]] return blk_68cbc5(c,a4,a0,a1,bud);
case 0x68cbc8:[[clang::musttail]] return blk_68cbc8(c,a4,a0,a1,bud);
case 0x68cbd2:[[clang::musttail]] return blk_68cbd2(c,a4,a0,a1,bud);
case 0x68cbdc:[[clang::musttail]] return blk_68cbdc(c,a4,a0,a1,bud);
case 0x68cbe7:[[clang::musttail]] return blk_68cbe7(c,a4,a0,a1,bud);
case 0x68cbf5:[[clang::musttail]] return blk_68cbf5(c,a4,a0,a1,bud);
case 0x68cc98:[[clang::musttail]] return blk_68cc98(c,a4,a0,a1,bud);
case 0x68cce8:[[clang::musttail]] return blk_68cce8(c,a4,a0,a1,bud);
case 0x68cd11:[[clang::musttail]] return blk_68cd11(c,a4,a0,a1,bud);
case 0x68cd20:[[clang::musttail]] return blk_68cd20(c,a4,a0,a1,bud);
case 0x68cd49:[[clang::musttail]] return blk_68cd49(c,a4,a0,a1,bud);
case 0x68cd55:[[clang::musttail]] return blk_68cd55(c,a4,a0,a1,bud);
case 0x68cd85:[[clang::musttail]] return blk_68cd85(c,a4,a0,a1,bud);
case 0x68cd95:[[clang::musttail]] return blk_68cd95(c,a4,a0,a1,bud);
case 0x68cd9d:[[clang::musttail]] return blk_68cd9d(c,a4,a0,a1,bud);
case 0x68cda3:[[clang::musttail]] return blk_68cda3(c,a4,a0,a1,bud);
case 0x68cda6:[[clang::musttail]] return blk_68cda6(c,a4,a0,a1,bud);
case 0x68cda9:[[clang::musttail]] return blk_68cda9(c,a4,a0,a1,bud);
case 0x68cdb2:[[clang::musttail]] return blk_68cdb2(c,a4,a0,a1,bud);
case 0x68cdbc:[[clang::musttail]] return blk_68cdbc(c,a4,a0,a1,bud);
case 0x68ce14:[[clang::musttail]] return blk_68ce14(c,a4,a0,a1,bud);
case 0x68ce64:[[clang::musttail]] return blk_68ce64(c,a4,a0,a1,bud);
case 0x68ce7c:[[clang::musttail]] return blk_68ce7c(c,a4,a0,a1,bud);
case 0x68cfb2:[[clang::musttail]] return blk_68cfb2(c,a4,a0,a1,bud);
case 0x68cffe:[[clang::musttail]] return blk_68cffe(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_68c(Cpu& c){u8* R=c.regs.data();return ent_68c(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
