#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c350(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43cf10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43d1e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_458520(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a601b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a60c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a60d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a60e6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a60ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a60f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a61af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a61c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a61da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6210(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6218(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a624f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6276(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a628a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a62a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a62aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a62c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a62dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a633a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6346(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6350(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a637f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a63ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a63e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6410(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6435(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a643d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6452(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6456(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6467(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a64a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a64c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a64d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a64e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a64e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a64ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a651f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a653f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6546(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6552(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a656f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a658a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a65b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a65bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a65de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a65e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a65f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a65fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6610(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6614(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6619(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6626(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a669f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a68f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6903(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6910(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6923(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6ed0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6fe3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50ca00(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_537b80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5a6580(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5b5350(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bae60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6102f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75bed4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6005(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6018(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6030(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a60b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6168(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6237(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6533(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6670(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a66a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6800(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a682b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a69ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a69d3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6a15(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6d5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6d74(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6d91(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6e6d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6e9f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6fc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6fdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4a6000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6000:L4a6000:{bud-=1;NFSU2_TR(0x4a6000);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6005ull));
{[[clang::musttail]] return blk_50ca00(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6005(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6005:L4a6005:{bud-=5;NFSU2_TR(0x4a6005);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6008:{NFSU2_TR(0x4a6008);
u8 U[4];
w4(U+0,u32(0x790660ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a600d:{NFSU2_TR(0x4a600d);
u8 U[4];
w4(U+0,u32(0xd719922full));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6012:{NFSU2_TR(0x4a6012);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6013:{NFSU2_TR(0x4a6013);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6018ull));
{[[clang::musttail]] return blk_537b80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6018(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6018:L4a6018:{bud-=1;NFSU2_TR(0x4a6018);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x24ull))));
{[[clang::musttail]] return blk_4a601b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a601b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a601b:L4a601b:{bud-=3;NFSU2_TR(0x4a601b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a601c:{NFSU2_TR(0x4a601c);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x20ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x20ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x20ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B4a601f:{NFSU2_TR(0x4a601f);
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
PN u32 blk_4a6030(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6030:L4a6030:{bud-=28;NFSU2_TR(0x4a6030);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x50ull))));
}
B4a6033:{NFSU2_TR(0x4a6033);
__builtin_memmove((G+0),gp(0x78e014),4);
}
B4a6038:{NFSU2_TR(0x4a6038);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6039:{NFSU2_TR(0x4a6039);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a603a:{NFSU2_TR(0x4a603a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a603b:{NFSU2_TR(0x4a603b);
__builtin_memmove((R+24),(G+4),4);
}
B4a603d:{NFSU2_TR(0x4a603d);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B4a603f:{NFSU2_TR(0x4a603f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a6041:{NFSU2_TR(0x4a6041);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6045:{NFSU2_TR(0x4a6045);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6046:{NFSU2_TR(0x4a6046);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a604a:{NFSU2_TR(0x4a604a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
w4(U+4,u32(0x41200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6054:{NFSU2_TR(0x4a6054);
__builtin_memmove((G+0),gp(0x8363f8),4);
}
B4a6059:{NFSU2_TR(0x4a6059);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a605d:{NFSU2_TR(0x4a605d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a605f:{NFSU2_TR(0x4a605f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4a6061:{NFSU2_TR(0x4a6061);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a6063:{NFSU2_TR(0x4a6063);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6067:{NFSU2_TR(0x4a6067);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a606b:{NFSU2_TR(0x4a606b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a606f:{NFSU2_TR(0x4a606f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6077:{NFSU2_TR(0x4a6077);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a607b:{NFSU2_TR(0x4a607b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a607f:{NFSU2_TR(0x4a607f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6083:{NFSU2_TR(0x4a6083);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6087:{NFSU2_TR(0x4a6087);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a608b:{NFSU2_TR(0x4a608b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a608f:{NFSU2_TR(0x4a608f);
if(r1(F+6)){{[[clang::musttail]] return blk_4a60c1(ARGS);}}
}
B4a6091:L4a6091:{bud-=3;NFSU2_TR(0x4a6091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6097:{NFSU2_TR(0x4a6097);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B4a609d:{NFSU2_TR(0x4a609d);
if(r1(F+6)){{[[clang::musttail]] return blk_4a60c1(ARGS);}}
}
B4a609f:L4a609f:{bud-=3;NFSU2_TR(0x4a609f);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((G+4),(U+0),4);
}
B4a60a2:{NFSU2_TR(0x4a60a2);
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
B4a60a4:{NFSU2_TR(0x4a60a4);
if(r1(F+6)){{[[clang::musttail]] return blk_4a60c1(ARGS);}}
}
B4a60a6:L4a60a6:{bud-=2;NFSU2_TR(0x4a60a6);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a60ab:{NFSU2_TR(0x4a60ab);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a60b0ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6102f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a60b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a60b0:L4a60b0:{bud-=2;NFSU2_TR(0x4a60b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60b2:{NFSU2_TR(0x4a60b2);
if(r1(F+6)){{[[clang::musttail]] return blk_4a60c1(ARGS);}}
}
B4a60b4:L4a60b4:{bud-=4;NFSU2_TR(0x4a60b4);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4a60b7:{NFSU2_TR(0x4a60b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B4a60ba:{NFSU2_TR(0x4a60ba);
w4(R+20,u32(s32(s8(r1(R+8)))));
}
B4a60bd:{NFSU2_TR(0x4a60bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_4a60c1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a60c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a60c1:L4a60c1:{bud-=4;NFSU2_TR(0x4a60c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a60c7:{NFSU2_TR(0x4a60c7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60c9:{NFSU2_TR(0x4a60c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a60cd:{NFSU2_TR(0x4a60cd);
if(r1(F+6)){{[[clang::musttail]] return blk_4a60ee(ARGS);}}
}
B4a60cf:L4a60cf:{bud-=2;NFSU2_TR(0x4a60cf);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60d2:{NFSU2_TR(0x4a60d2);
if(r1(F+6)){{[[clang::musttail]] return blk_4a60d9(ARGS);}}
}
B4a60d4:L4a60d4:{bud-=2;NFSU2_TR(0x4a60d4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60d7:{NFSU2_TR(0x4a60d7);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a60e6(ARGS);}}
{[[clang::musttail]] return blk_4a60d9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a60d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a60d9:L4a60d9:{bud-=2;NFSU2_TR(0x4a60d9);
w4(R+12,u32(0x3ull));
}
B4a60de:{NFSU2_TR(0x4a60de);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_4a60e6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a60e6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a60e6:L4a60e6:{bud-=2;NFSU2_TR(0x4a60e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a60ec:{NFSU2_TR(0x4a60ec);
{[[clang::musttail]] return blk_4a60f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a60ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a60ee:L4a60ee:{bud-=1;NFSU2_TR(0x4a60ee);
__builtin_memmove((R+12),(R+20),4);
{[[clang::musttail]] return blk_4a60f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a60f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a60f0:L4a60f0:{bud-=2;NFSU2_TR(0x4a60f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60f2:{NFSU2_TR(0x4a60f2);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_4a61af(ARGS);}}
}
B4a60f8:L4a60f8:{bud-=2;NFSU2_TR(0x4a60f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a60fb:{NFSU2_TR(0x4a60fb);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_4a61af(ARGS);}}
}
B4a6101:L4a6101:{bud-=4;NFSU2_TR(0x4a6101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6107:{NFSU2_TR(0x4a6107);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2cccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a610d:{NFSU2_TR(0x4a610d);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a610f:{NFSU2_TR(0x4a610f);
if(r1(F+6)){{[[clang::musttail]] return blk_4a61af(ARGS);}}
}
B4a6115:L4a6115:{bud-=3;NFSU2_TR(0x4a6115);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B4a6118:{NFSU2_TR(0x4a6118);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a611a:{NFSU2_TR(0x4a611a);
if(r1(F+6)){{[[clang::musttail]] return blk_4a61af(ARGS);}}
}
B4a6120:L4a6120:{bud-=5;NFSU2_TR(0x4a6120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4a6122:{NFSU2_TR(0x4a6122);
__builtin_memmove((G+4),gp(0x8a1ccc),4);
}
B4a6128:{NFSU2_TR(0x4a6128);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4a612e:{NFSU2_TR(0x4a612e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+4))));
w1(F+6,u8((r4(R+28))==(u32(0x0ull))));
}
B4a6130:{NFSU2_TR(0x4a6130);
if(r1(F+6)){{[[clang::musttail]] return blk_4a61af(ARGS);}}
}
B4a6132:L4a6132:{bud-=13;NFSU2_TR(0x4a6132);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x114ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B4a6138:{NFSU2_TR(0x4a6138);
{u32 ea_=u32(r4(R+12)+u32(8349812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a613e:{NFSU2_TR(0x4a613e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6142:{NFSU2_TR(0x4a6142);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6146:{NFSU2_TR(0x4a6146);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a614a:{NFSU2_TR(0x4a614a);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a614e:{NFSU2_TR(0x4a614e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7f6864ull))));
__builtin_memmove((G+4),(U+0),4);
}
B4a6154:{NFSU2_TR(0x4a6154);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B4a6158:{NFSU2_TR(0x4a6158);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6159:{NFSU2_TR(0x4a6159);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a615b:{NFSU2_TR(0x4a615b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a615d:{NFSU2_TR(0x4a615d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2f0ull))));
__builtin_memmove((G+4),(U+0),4);
}
B4a6163:{NFSU2_TR(0x4a6163);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6168ull));
{[[clang::musttail]] return blk_5a6580(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6168(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6168:L4a6168:{bud-=4;NFSU2_TR(0x4a6168);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a616e:{NFSU2_TR(0x4a616e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a6170:{NFSU2_TR(0x4a6170);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6173:{NFSU2_TR(0x4a6173);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a61af(ARGS);}}
}
B4a6175:L4a6175:{bud-=15;NFSU2_TR(0x4a6175);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6179:{NFSU2_TR(0x4a6179);
{u32 ea_=u32(r4(R+28)+u32(1812u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a617f:{NFSU2_TR(0x4a617f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6183:{NFSU2_TR(0x4a6183);
{u32 ea_=u32(r4(R+28)+u32(1816u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6189:{NFSU2_TR(0x4a6189);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4a618b:{NFSU2_TR(0x4a618b);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a618f:{NFSU2_TR(0x4a618f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6193:{NFSU2_TR(0x4a6193);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6195:{NFSU2_TR(0x4a6195);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6199:{NFSU2_TR(0x4a6199);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a619d:{NFSU2_TR(0x4a619d);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a61a1:{NFSU2_TR(0x4a61a1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4a61a3:{NFSU2_TR(0x4a61a3);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a61a7:{NFSU2_TR(0x4a61a7);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a61ab:{NFSU2_TR(0x4a61ab);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a61af(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a61af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a61af:L4a61af:{bud-=3;NFSU2_TR(0x4a61af);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a61b3:{NFSU2_TR(0x4a61b3);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a61b5:{NFSU2_TR(0x4a61b5);
if(r1(F+6)){{[[clang::musttail]] return blk_4a61da(ARGS);}}
}
B4a61b7:L4a61b7:{bud-=3;NFSU2_TR(0x4a61b7);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B4a61b9:{NFSU2_TR(0x4a61b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4a61bf:{NFSU2_TR(0x4a61bf);
{[[clang::musttail]] return blk_4a61c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a61c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a61c0:L4a61c0:{bud-=5;NFSU2_TR(0x4a61c0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a61c2:{NFSU2_TR(0x4a61c2);
{u32 ea_=u32((r4(G+4)*4u)+r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a61c6:{NFSU2_TR(0x4a61c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a61c8:{NFSU2_TR(0x4a61c8);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a61cb:{NFSU2_TR(0x4a61cb);
if(r1(F+2)){{[[clang::musttail]] return blk_4a6276(ARGS);}}
}
B4a61d1:L4a61d1:{bud-=4;NFSU2_TR(0x4a61d1);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B4a61d2:{NFSU2_TR(0x4a61d2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4a61d5:{NFSU2_TR(0x4a61d5);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a61d8:{NFSU2_TR(0x4a61d8);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x4a61c0u);}goto L4a61c0;}}
{[[clang::musttail]] return blk_4a61da(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a61da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a61da:L4a61da:{bud-=2;NFSU2_TR(0x4a61da);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a61dc:{NFSU2_TR(0x4a61dc);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_4a6346(ARGS);}}
}
B4a61e2:L4a61e2:{bud-=2;NFSU2_TR(0x4a61e2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a61e5:{NFSU2_TR(0x4a61e5);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_4a6346(ARGS);}}
}
B4a61eb:L4a61eb:{bud-=8;NFSU2_TR(0x4a61eb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x114ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B4a61f1:{NFSU2_TR(0x4a61f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7f6864ull))));
__builtin_memmove((G+0),(U+0),4);
}
B4a61f7:{NFSU2_TR(0x4a61f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a61fb:{NFSU2_TR(0x4a61fb);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4a61fd:{NFSU2_TR(0x4a61fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a6201:{NFSU2_TR(0x4a6201);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a6204:{NFSU2_TR(0x4a6204);
__builtin_memmove((G+4),(G+0),4);
}
B4a6206:{NFSU2_TR(0x4a6206);
{[[clang::musttail]] return blk_4a6210(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6210(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6210:L4a6210:{bud-=2;NFSU2_TR(0x4a6210);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4a6216:{NFSU2_TR(0x4a6216);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
{[[clang::musttail]] return blk_4a6218(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6218(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6218:L4a6218:{bud-=3;NFSU2_TR(0x4a6218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a621b:{NFSU2_TR(0x4a621b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a621d:{NFSU2_TR(0x4a621d);
if(r1(F+6)){{[[clang::musttail]] return blk_4a624f(ARGS);}}
}
B4a621f:L4a621f:{bud-=7;NFSU2_TR(0x4a621f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6223:{NFSU2_TR(0x4a6223);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6229:{NFSU2_TR(0x4a6229);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a622a:{NFSU2_TR(0x4a622a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a622c:{NFSU2_TR(0x4a622c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a622f:{NFSU2_TR(0x4a622f);
{u32 ea_=u32(r4(G+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6232:{NFSU2_TR(0x4a6232);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6237ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c350u);}[[clang::musttail]] return blk_43c350(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6237(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6237:L4a6237:{bud-=8;NFSU2_TR(0x4a6237);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a623b:{NFSU2_TR(0x4a623b);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B4a623f:{NFSU2_TR(0x4a623f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B4a6242:{NFSU2_TR(0x4a6242);
{u32 ea_=u32((r4(G+0)*4u)+r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6245:{NFSU2_TR(0x4a6245);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B4a6248:{NFSU2_TR(0x4a6248);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a624b:{NFSU2_TR(0x4a624b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a624d:{NFSU2_TR(0x4a624d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a624f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a624f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a624f:L4a624f:{bud-=4;NFSU2_TR(0x4a624f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4a6250:{NFSU2_TR(0x4a6250);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B4a6253:{NFSU2_TR(0x4a6253);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a6256:{NFSU2_TR(0x4a6256);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x4a6218u);}[[clang::musttail]] return blk_4a6218(ARGS);}}
}
B4a6258:L4a6258:{bud-=3;NFSU2_TR(0x4a6258);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a625b:{NFSU2_TR(0x4a625b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a625d:{NFSU2_TR(0x4a625d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a62aa(ARGS);}}
}
B4a625f:L4a625f:{bud-=5;NFSU2_TR(0x4a625f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6261:{NFSU2_TR(0x4a6261);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6267:{NFSU2_TR(0x4a6267);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a6269:{NFSU2_TR(0x4a6269);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a626c:{NFSU2_TR(0x4a626c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a62a4(ARGS);}}
}
B4a626e:L4a626e:{bud-=2;NFSU2_TR(0x4a626e);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4a6274:{NFSU2_TR(0x4a6274);
{[[clang::musttail]] return blk_4a62aa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6276(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6276:L4a6276:{bud-=2;NFSU2_TR(0x4a6276);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a6279:{NFSU2_TR(0x4a6279);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a628a(ARGS);}}
}
B4a627b:L4a627b:{bud-=3;NFSU2_TR(0x4a627b);
__builtin_memmove((R+8),gp(0x78e018),4);
}
B4a6281:{NFSU2_TR(0x4a6281);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6285:{NFSU2_TR(0x4a6285);
{[[clang::musttail]] return blk_4a6350(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a628a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a628a:L4a628a:{bud-=5;NFSU2_TR(0x4a628a);
__builtin_memmove((G+0),gp(0x78e024),4);
}
B4a628f:{NFSU2_TR(0x4a628f);
__builtin_memmove((G+4),gp(0x78e01c),4);
}
B4a6295:{NFSU2_TR(0x4a6295);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a629b:{NFSU2_TR(0x4a629b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a629f:{NFSU2_TR(0x4a629f);
{[[clang::musttail]] return blk_4a6350(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a62a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a62a4:L4a62a4:{bud-=1;NFSU2_TR(0x4a62a4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
{[[clang::musttail]] return blk_4a62aa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a62aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a62aa:L4a62aa:{bud-=9;NFSU2_TR(0x4a62aa);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a62ad:{NFSU2_TR(0x4a62ad);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a62b0:{NFSU2_TR(0x4a62b0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a62b2:{NFSU2_TR(0x4a62b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a62b6:{NFSU2_TR(0x4a62b6);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a62ba:{NFSU2_TR(0x4a62ba);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4a62bc:{NFSU2_TR(0x4a62bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a62be:{NFSU2_TR(0x4a62be);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a62c1:{NFSU2_TR(0x4a62c1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a62c9(ARGS);}}
}
B4a62c3:L4a62c3:{bud-=2;NFSU2_TR(0x4a62c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a62c5:{NFSU2_TR(0x4a62c5);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a62c9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a62c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a62c9:L4a62c9:{bud-=5;NFSU2_TR(0x4a62c9);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a62cd:{NFSU2_TR(0x4a62cd);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4a62cf:{NFSU2_TR(0x4a62cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a62d1:{NFSU2_TR(0x4a62d1);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a62d4:{NFSU2_TR(0x4a62d4);
if(r1(F+2)){{[[clang::musttail]] return blk_4a62dc(ARGS);}}
}
B4a62d6:L4a62d6:{bud-=2;NFSU2_TR(0x4a62d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a62d8:{NFSU2_TR(0x4a62d8);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a62dc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a62dc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a62dc:L4a62dc:{bud-=5;NFSU2_TR(0x4a62dc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a62de:{NFSU2_TR(0x4a62de);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x3ull))));
}
B4a62e1:{NFSU2_TR(0x4a62e1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4a62e4:{NFSU2_TR(0x4a62e4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a62e7:{NFSU2_TR(0x4a62e7);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x4a6210u);}[[clang::musttail]] return blk_4a6210(ARGS);}}
}
B4a62ed:L4a62ed:{bud-=17;NFSU2_TR(0x4a62ed);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a62f0:{NFSU2_TR(0x4a62f0);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a62f3:{NFSU2_TR(0x4a62f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a62f7:{NFSU2_TR(0x4a62f7);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a62fa:{NFSU2_TR(0x4a62fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a62fe:{NFSU2_TR(0x4a62fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6302:{NFSU2_TR(0x4a6302);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6308:{NFSU2_TR(0x4a6308);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a630e:{NFSU2_TR(0x4a630e);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6310:{NFSU2_TR(0x4a6310);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6313:{NFSU2_TR(0x4a6313);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6317:{NFSU2_TR(0x4a6317);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a631d:{NFSU2_TR(0x4a631d);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6323:{NFSU2_TR(0x4a6323);
{u32 ea_=u32(u32(7921696u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6329:{NFSU2_TR(0x4a6329);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a632b:{NFSU2_TR(0x4a632b);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a632e:{NFSU2_TR(0x4a632e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a633a(ARGS);}}
}
B4a6330:L4a6330:{bud-=1;NFSU2_TR(0x4a6330);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_4a633a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a633a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a633a:L4a633a:{bud-=3;NFSU2_TR(0x4a633a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a633e:{NFSU2_TR(0x4a633e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6344:{NFSU2_TR(0x4a6344);
{[[clang::musttail]] return blk_4a6350(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6346(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6346:L4a6346:{bud-=1;NFSU2_TR(0x4a6346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_4a6350(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6350(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6350:L4a6350:{bud-=11;NFSU2_TR(0x4a6350);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6354:{NFSU2_TR(0x4a6354);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6358:{NFSU2_TR(0x4a6358);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a635c:{NFSU2_TR(0x4a635c);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6360:{NFSU2_TR(0x4a6360);
{u32 ea_=u32(u32(7921680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6366:{NFSU2_TR(0x4a6366);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4a6368:{NFSU2_TR(0x4a6368);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B4a636a:{NFSU2_TR(0x4a636a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a6370:{NFSU2_TR(0x4a6370);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a6372:{NFSU2_TR(0x4a6372);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6375:{NFSU2_TR(0x4a6375);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a637f(ARGS);}}
}
B4a6377:L4a6377:{bud-=2;NFSU2_TR(0x4a6377);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6379:{NFSU2_TR(0x4a6379);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a637f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a637f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a637f:L4a637f:{bud-=14;NFSU2_TR(0x4a637f);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6383:{NFSU2_TR(0x4a6383);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6387:{NFSU2_TR(0x4a6387);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a638b:{NFSU2_TR(0x4a638b);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a638f:{NFSU2_TR(0x4a638f);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6393:{NFSU2_TR(0x4a6393);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6397:{NFSU2_TR(0x4a6397);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a639b:{NFSU2_TR(0x4a639b);
{u32 ea_=u32(u32(7921680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a63a1:{NFSU2_TR(0x4a63a1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4a63a3:{NFSU2_TR(0x4a63a3);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B4a63a5:{NFSU2_TR(0x4a63a5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a63ab:{NFSU2_TR(0x4a63ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a63ad:{NFSU2_TR(0x4a63ad);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a63b0:{NFSU2_TR(0x4a63b0);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a63ba(ARGS);}}
}
B4a63b2:L4a63b2:{bud-=2;NFSU2_TR(0x4a63b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a63b4:{NFSU2_TR(0x4a63b4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a63ba(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a63ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a63ba:L4a63ba:{bud-=10;NFSU2_TR(0x4a63ba);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a63be:{NFSU2_TR(0x4a63be);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a63c2:{NFSU2_TR(0x4a63c2);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a63c6:{NFSU2_TR(0x4a63c6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a63c8:{NFSU2_TR(0x4a63c8);
{u32 ea_=u32(u32(7921680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a63ce:{NFSU2_TR(0x4a63ce);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4a63d0:{NFSU2_TR(0x4a63d0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a63d6:{NFSU2_TR(0x4a63d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a63d8:{NFSU2_TR(0x4a63d8);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a63db:{NFSU2_TR(0x4a63db);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a63e5(ARGS);}}
}
B4a63dd:L4a63dd:{bud-=2;NFSU2_TR(0x4a63dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a63df:{NFSU2_TR(0x4a63df);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a63e5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a63e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a63e5:L4a63e5:{bud-=10;NFSU2_TR(0x4a63e5);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a63e9:{NFSU2_TR(0x4a63e9);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a63ed:{NFSU2_TR(0x4a63ed);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a63f1:{NFSU2_TR(0x4a63f1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a63f3:{NFSU2_TR(0x4a63f3);
{u32 ea_=u32(u32(7921680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a63f9:{NFSU2_TR(0x4a63f9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4a63fb:{NFSU2_TR(0x4a63fb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a6401:{NFSU2_TR(0x4a6401);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a6403:{NFSU2_TR(0x4a6403);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6406:{NFSU2_TR(0x4a6406);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6410(ARGS);}}
}
B4a6408:L4a6408:{bud-=2;NFSU2_TR(0x4a6408);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a640a:{NFSU2_TR(0x4a640a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a6410(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6410(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6410:L4a6410:{bud-=8;NFSU2_TR(0x4a6410);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6414:{NFSU2_TR(0x4a6414);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6418:{NFSU2_TR(0x4a6418);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a641c:{NFSU2_TR(0x4a641c);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6420:{NFSU2_TR(0x4a6420);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6424:{NFSU2_TR(0x4a6424);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a6426:{NFSU2_TR(0x4a6426);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a6429:{NFSU2_TR(0x4a6429);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6435(ARGS);}}
}
B4a642b:L4a642b:{bud-=3;NFSU2_TR(0x4a642b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a642f:{NFSU2_TR(0x4a642f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6433:{NFSU2_TR(0x4a6433);
{[[clang::musttail]] return blk_4a643d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6435(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6435:L4a6435:{bud-=2;NFSU2_TR(0x4a6435);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6439:{NFSU2_TR(0x4a6439);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_4a643d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a643d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a643d:L4a643d:{bud-=5;NFSU2_TR(0x4a643d);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6441:{NFSU2_TR(0x4a6441);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6445:{NFSU2_TR(0x4a6445);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a6447:{NFSU2_TR(0x4a6447);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a644a:{NFSU2_TR(0x4a644a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6452(ARGS);}}
}
B4a644c:L4a644c:{bud-=2;NFSU2_TR(0x4a644c);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6450:{NFSU2_TR(0x4a6450);
{[[clang::musttail]] return blk_4a6456(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6452(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6452:L4a6452:{bud-=1;NFSU2_TR(0x4a6452);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a6456(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6456(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6456:L4a6456:{bud-=4;NFSU2_TR(0x4a6456);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a645a:{NFSU2_TR(0x4a645a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a645c:{NFSU2_TR(0x4a645c);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a645f:{NFSU2_TR(0x4a645f);
if(r1(F+6)){{[[clang::musttail]] return blk_4a6467(ARGS);}}
}
B4a6461:L4a6461:{bud-=2;NFSU2_TR(0x4a6461);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6463:{NFSU2_TR(0x4a6463);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a6467(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6467(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6467:L4a6467:{bud-=12;NFSU2_TR(0x4a6467);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a646b:{NFSU2_TR(0x4a646b);
{u32 ea_=u32(r4(R+8)+u32(376u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6471:{NFSU2_TR(0x4a6471);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x184ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a6477:{NFSU2_TR(0x4a6477);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4a6479:{NFSU2_TR(0x4a6479);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a647d:{NFSU2_TR(0x4a647d);
{u32 ea_=u32(r4(R+8)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6483:{NFSU2_TR(0x4a6483);
__builtin_memmove((G+4),gp(0x82b884),4);
}
B4a6489:{NFSU2_TR(0x4a6489);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a648f:{NFSU2_TR(0x4a648f);
w4(R+20,u32(0x2ull));
}
B4a6494:{NFSU2_TR(0x4a6494);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6498:{NFSU2_TR(0x4a6498);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a649c:{NFSU2_TR(0x4a649c);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a64a0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a64a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a64a0:L4a64a0:{bud-=9;NFSU2_TR(0x4a64a0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64a2:{NFSU2_TR(0x4a64a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B4a64a4:{NFSU2_TR(0x4a64a4);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a64a8:{NFSU2_TR(0x4a64a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a64ac:{NFSU2_TR(0x4a64ac);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4a64ae:{NFSU2_TR(0x4a64ae);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a64b2:{NFSU2_TR(0x4a64b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a64b4:{NFSU2_TR(0x4a64b4);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a64b7:{NFSU2_TR(0x4a64b7);
if(r1(F+2)){{[[clang::musttail]] return blk_4a64c1(ARGS);}}
}
B4a64b9:L4a64b9:{bud-=3;NFSU2_TR(0x4a64b9);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B4a64bd:{NFSU2_TR(0x4a64bd);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4a64bf:{NFSU2_TR(0x4a64bf);
{[[clang::musttail]] return blk_4a64e9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a64c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a64c1:L4a64c1:{bud-=6;NFSU2_TR(0x4a64c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64c3:{NFSU2_TR(0x4a64c3);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a64c7:{NFSU2_TR(0x4a64c7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64c9:{NFSU2_TR(0x4a64c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a64cb:{NFSU2_TR(0x4a64cb);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a64ce:{NFSU2_TR(0x4a64ce);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a64d6(ARGS);}}
}
B4a64d0:L4a64d0:{bud-=2;NFSU2_TR(0x4a64d0);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a64d4:{NFSU2_TR(0x4a64d4);
{[[clang::musttail]] return blk_4a64e7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a64d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a64d6:L4a64d6:{bud-=4;NFSU2_TR(0x4a64d6);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a64da:{NFSU2_TR(0x4a64da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a64dc:{NFSU2_TR(0x4a64dc);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a64df:{NFSU2_TR(0x4a64df);
if(r1(F+2)){{[[clang::musttail]] return blk_4a64ef(ARGS);}}
}
B4a64e1:L4a64e1:{bud-=2;NFSU2_TR(0x4a64e1);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64e5:{NFSU2_TR(0x4a64e5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a64e7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a64e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a64e7:L4a64e7:{bud-=1;NFSU2_TR(0x4a64e7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_4a64e9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a64e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a64e9:L4a64e9:{bud-=1;NFSU2_TR(0x4a64e9);
__builtin_memmove((G+4),gp(0x82b884),4);
{[[clang::musttail]] return blk_4a64ef(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a64ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a64ef:L4a64ef:{bud-=3;NFSU2_TR(0x4a64ef);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a64f2:{NFSU2_TR(0x4a64f2);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a64f4:{NFSU2_TR(0x4a64f4);
if(r1(F+6)){{[[clang::musttail]] return blk_4a6626(ARGS);}}
}
B4a64fa:L4a64fa:{bud-=5;NFSU2_TR(0x4a64fa);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a64fc:{NFSU2_TR(0x4a64fc);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6500:{NFSU2_TR(0x4a6500);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a6502:{NFSU2_TR(0x4a6502);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6505:{NFSU2_TR(0x4a6505);
if(r1(F+2)){{[[clang::musttail]] return blk_4a6552(ARGS);}}
}
B4a6507:L4a6507:{bud-=4;NFSU2_TR(0x4a6507);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a650a:{NFSU2_TR(0x4a650a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a650c:{NFSU2_TR(0x4a650c);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a650e:{NFSU2_TR(0x4a650e);
if(r1(F+6)){{[[clang::musttail]] return blk_4a6546(ARGS);}}
}
B4a6510:L4a6510:{bud-=3;NFSU2_TR(0x4a6510);
__builtin_memmove((R+8),(R+12),4);
}
B4a6512:{NFSU2_TR(0x4a6512);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B4a6518:{NFSU2_TR(0x4a6518);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a651f(ARGS);}}
}
B4a651a:L4a651a:{bud-=3;NFSU2_TR(0x4a651a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4a651b:{NFSU2_TR(0x4a651b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B4a651e:{NFSU2_TR(0x4a651e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a651f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a651f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a651f:L4a651f:{bud-=1;NFSU2_TR(0x4a651f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6546(ARGS);}}
}
B4a6521:L4a6521:{bud-=6;NFSU2_TR(0x4a6521);
__builtin_memmove((G+0),(R+12),4);
}
B4a6523:{NFSU2_TR(0x4a6523);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4a6524:{NFSU2_TR(0x4a6524);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+8))));
}
B4a6526:{NFSU2_TR(0x4a6526);
w4(G+0,sar<u32>(r4(G+0),u64(u32(0x1ull))));
}
B4a6528:{NFSU2_TR(0x4a6528);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B4a652a:{NFSU2_TR(0x4a652a);
if(r1(F+6)){{[[clang::musttail]] return blk_4a653f(ARGS);}}
}
B4a652c:L4a652c:{bud-=2;NFSU2_TR(0x4a652c);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a652e:{NFSU2_TR(0x4a652e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6533ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x458520u);}[[clang::musttail]] return blk_458520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6533(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6533:L4a6533:{bud-=2;NFSU2_TR(0x4a6533);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a653a:{NFSU2_TR(0x4a653a);
{[[clang::musttail]] return blk_4a6619(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a653f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a653f:L4a653f:{bud-=2;NFSU2_TR(0x4a653f);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6541:{NFSU2_TR(0x4a6541);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6546ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x458520u);}[[clang::musttail]] return blk_458520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6546(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6546:L4a6546:{bud-=2;NFSU2_TR(0x4a6546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a654d:{NFSU2_TR(0x4a654d);
{[[clang::musttail]] return blk_4a6619(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6552(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6552:L4a6552:{bud-=5;NFSU2_TR(0x4a6552);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6554:{NFSU2_TR(0x4a6554);
{u32 ea_=u32(r4(R+8)+u32(376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a655a:{NFSU2_TR(0x4a655a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a655c:{NFSU2_TR(0x4a655c);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a655f:{NFSU2_TR(0x4a655f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a656f(ARGS);}}
}
B4a6561:L4a6561:{bud-=3;NFSU2_TR(0x4a6561);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a6563:{NFSU2_TR(0x4a6563);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a656a:{NFSU2_TR(0x4a656a);
{[[clang::musttail]] return blk_4a6619(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a656f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a656f:L4a656f:{bud-=6;NFSU2_TR(0x4a656f);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6573:{NFSU2_TR(0x4a6573);
{u32 ea_=u32((r4(R+12)*4u)+r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6577:{NFSU2_TR(0x4a6577);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6579:{NFSU2_TR(0x4a6579);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a657b:{NFSU2_TR(0x4a657b);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a657e:{NFSU2_TR(0x4a657e);
if(r1(F+2)){{[[clang::musttail]] return blk_4a658a(ARGS);}}
}
B4a6580:L4a6580:{bud-=2;NFSU2_TR(0x4a6580);
w4(R+28,u32(0x1ull));
}
B4a6585:{NFSU2_TR(0x4a6585);
{[[clang::musttail]] return blk_4a6619(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a658a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a658a:L4a658a:{bud-=5;NFSU2_TR(0x4a658a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a658c:{NFSU2_TR(0x4a658c);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4a6590:{NFSU2_TR(0x4a6590);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a6592:{NFSU2_TR(0x4a6592);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a6595:{NFSU2_TR(0x4a6595);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a65bb(ARGS);}}
}
B4a6597:L4a6597:{bud-=3;NFSU2_TR(0x4a6597);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B4a659a:{NFSU2_TR(0x4a659a);
__builtin_memmove((R+28),(R+20),4);
}
B4a659c:{NFSU2_TR(0x4a659c);
if(r1(F+6)){{[[clang::musttail]] return blk_4a6619(ARGS);}}
}
B4a659e:L4a659e:{bud-=3;NFSU2_TR(0x4a659e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a65a2:{NFSU2_TR(0x4a65a2);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65a5:{NFSU2_TR(0x4a65a5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a65e4(ARGS);}}
}
B4a65a7:L4a65a7:{bud-=3;NFSU2_TR(0x4a65a7);
__builtin_memmove((G+0),(R+12),4);
}
B4a65a9:{NFSU2_TR(0x4a65a9);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x80000001ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B4a65ae:{NFSU2_TR(0x4a65ae);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a65b5(ARGS);}}
}
B4a65b0:L4a65b0:{bud-=3;NFSU2_TR(0x4a65b0);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B4a65b1:{NFSU2_TR(0x4a65b1);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xfffffffeull))));
}
B4a65b4:{NFSU2_TR(0x4a65b4);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a65b5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a65b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a65b5:L4a65b5:{bud-=1;NFSU2_TR(0x4a65b5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6619(ARGS);}}
}
B4a65b7:L4a65b7:{bud-=2;NFSU2_TR(0x4a65b7);
u8 U[4];
w4(U+0,u32(0x59ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a65b9:{NFSU2_TR(0x4a65b9);
{[[clang::musttail]] return blk_4a6614(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a65bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a65bb:L4a65bb:{bud-=4;NFSU2_TR(0x4a65bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a65be:{NFSU2_TR(0x4a65be);
w4(R+28,u32(0x3ull));
}
B4a65c3:{NFSU2_TR(0x4a65c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65c5:{NFSU2_TR(0x4a65c5);
if(r1(F+6)){{[[clang::musttail]] return blk_4a6619(ARGS);}}
}
B4a65c7:L4a65c7:{bud-=3;NFSU2_TR(0x4a65c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a65cb:{NFSU2_TR(0x4a65cb);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65ce:{NFSU2_TR(0x4a65ce);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a65fd(ARGS);}}
}
B4a65d0:L4a65d0:{bud-=3;NFSU2_TR(0x4a65d0);
__builtin_memmove((G+0),(R+12),4);
}
B4a65d2:{NFSU2_TR(0x4a65d2);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x80000001ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B4a65d7:{NFSU2_TR(0x4a65d7);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a65de(ARGS);}}
}
B4a65d9:L4a65d9:{bud-=3;NFSU2_TR(0x4a65d9);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B4a65da:{NFSU2_TR(0x4a65da);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xfffffffeull))));
}
B4a65dd:{NFSU2_TR(0x4a65dd);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a65de(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a65de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a65de:L4a65de:{bud-=1;NFSU2_TR(0x4a65de);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6619(ARGS);}}
}
B4a65e0:L4a65e0:{bud-=2;NFSU2_TR(0x4a65e0);
u8 U[4];
w4(U+0,u32(0x5aull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a65e2:{NFSU2_TR(0x4a65e2);
{[[clang::musttail]] return blk_4a6614(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a65e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a65e4:L4a65e4:{bud-=2;NFSU2_TR(0x4a65e4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65e6:{NFSU2_TR(0x4a65e6);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6619(ARGS);}}
}
B4a65e8:L4a65e8:{bud-=3;NFSU2_TR(0x4a65e8);
__builtin_memmove((R+8),(R+12),4);
}
B4a65ea:{NFSU2_TR(0x4a65ea);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B4a65f0:{NFSU2_TR(0x4a65f0);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a65f7(ARGS);}}
}
B4a65f2:L4a65f2:{bud-=3;NFSU2_TR(0x4a65f2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4a65f3:{NFSU2_TR(0x4a65f3);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B4a65f6:{NFSU2_TR(0x4a65f6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a65f7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a65f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a65f7:L4a65f7:{bud-=1;NFSU2_TR(0x4a65f7);
if(r1(F+6)){{[[clang::musttail]] return blk_4a6619(ARGS);}}
}
B4a65f9:L4a65f9:{bud-=2;NFSU2_TR(0x4a65f9);
u8 U[4];
w4(U+0,u32(0x5bull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a65fb:{NFSU2_TR(0x4a65fb);
{[[clang::musttail]] return blk_4a6614(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a65fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a65fd:L4a65fd:{bud-=2;NFSU2_TR(0x4a65fd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a65ff:{NFSU2_TR(0x4a65ff);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6619(ARGS);}}
}
B4a6601:L4a6601:{bud-=3;NFSU2_TR(0x4a6601);
__builtin_memmove((R+8),(R+12),4);
}
B4a6603:{NFSU2_TR(0x4a6603);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B4a6609:{NFSU2_TR(0x4a6609);
u8 U[1];
w1(U+0,u8(!(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a6610(ARGS);}}
}
B4a660b:L4a660b:{bud-=3;NFSU2_TR(0x4a660b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4a660c:{NFSU2_TR(0x4a660c);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B4a660f:{NFSU2_TR(0x4a660f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_4a6610(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6610(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6610:L4a6610:{bud-=1;NFSU2_TR(0x4a6610);
if(r1(F+6)){{[[clang::musttail]] return blk_4a6619(ARGS);}}
}
B4a6612:L4a6612:{bud-=1;NFSU2_TR(0x4a6612);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_4a6614(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6614(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6614:L4a6614:{bud-=1;NFSU2_TR(0x4a6614);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6619ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x458520u);}[[clang::musttail]] return blk_458520(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6619(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6619:L4a6619:{bud-=3;NFSU2_TR(0x4a6619);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a661d:{NFSU2_TR(0x4a661d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6620:{NFSU2_TR(0x4a6620);
__builtin_memmove((G+4),gp(0x82b884),4);
{[[clang::musttail]] return blk_4a6626(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6626(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6626:L4a6626:{bud-=4;NFSU2_TR(0x4a6626);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4a6627:{NFSU2_TR(0x4a6627);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4a662a:{NFSU2_TR(0x4a662a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4a662d:{NFSU2_TR(0x4a662d);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x4a64a0u);}[[clang::musttail]] return blk_4a64a0(ARGS);}}
}
B4a6633:L4a6633:{bud-=16;NFSU2_TR(0x4a6633);
{u32 ea_=u32(r4(R+8)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6639:{NFSU2_TR(0x4a6639);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a663d:{NFSU2_TR(0x4a663d);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a663f:{NFSU2_TR(0x4a663f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a6640:{NFSU2_TR(0x4a6640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a6641:{NFSU2_TR(0x4a6641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a6642:{NFSU2_TR(0x4a6642);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6648:{NFSU2_TR(0x4a6648);
{u32 ea_=u32(r4(R+8)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a664e:{NFSU2_TR(0x4a664e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a664f:{NFSU2_TR(0x4a664f);
{u32 ea_=u32(r4(R+8)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6655:{NFSU2_TR(0x4a6655);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a665b:{NFSU2_TR(0x4a665b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4a665d:{NFSU2_TR(0x4a665d);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6661:{NFSU2_TR(0x4a6661);
{u32 ea_=u32(r4(R+8)+u32(380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6667:{NFSU2_TR(0x4a6667);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x50ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x50ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x50ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B4a666a:{NFSU2_TR(0x4a666a);
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
PN u32 blk_4a6670(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6670:L4a6670:{bud-=11;NFSU2_TR(0x4a6670);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6671:{NFSU2_TR(0x4a6671);
__builtin_memmove((R+20),(G+16),4);
}
B4a6673:{NFSU2_TR(0x4a6673);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B4a6676:{NFSU2_TR(0x4a6676);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x3b4ull))));
}
B4a667c:{NFSU2_TR(0x4a667c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a667d:{NFSU2_TR(0x4a667d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a6680:{NFSU2_TR(0x4a6680);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0xffffffffull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B4a6684:{NFSU2_TR(0x4a6684);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6685:{NFSU2_TR(0x4a6685);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6686:{NFSU2_TR(0x4a6686);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a668a:{NFSU2_TR(0x4a668a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a669f(ARGS);}}
}
B4a668c:L4a668c:{bud-=7;NFSU2_TR(0x4a668c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6696:{NFSU2_TR(0x4a6696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a6697:{NFSU2_TR(0x4a6697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a6698:{NFSU2_TR(0x4a6698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a6699:{NFSU2_TR(0x4a6699);
__builtin_memmove((G+16),(R+20),4);
}
B4a669b:{NFSU2_TR(0x4a669b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a669c:{NFSU2_TR(0x4a669c);
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
PN u32 blk_4a669f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a669f:L4a669f:{bud-=3;NFSU2_TR(0x4a669f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a66a1:{NFSU2_TR(0x4a66a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((G+4),(U+0),4);
}
B4a66a4:{NFSU2_TR(0x4a66a4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a66a9ull));
{[[clang::musttail]] return blk_5b5350(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a66a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a66a9:L4a66a9:{bud-=52;NFSU2_TR(0x4a66a9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a66ab:{NFSU2_TR(0x4a66ab);
__builtin_memmove((R+24),(G+0),4);
}
B4a66ad:{NFSU2_TR(0x4a66ad);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a66b0:{NFSU2_TR(0x4a66b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((G+0),(U+0),4);
}
B4a66b3:{NFSU2_TR(0x4a66b3);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a66b5:{NFSU2_TR(0x4a66b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a66bc:{NFSU2_TR(0x4a66bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a66bf:{NFSU2_TR(0x4a66bf);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B4a66c2:{NFSU2_TR(0x4a66c2);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a66c8:{NFSU2_TR(0x4a66c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B4a66cb:{NFSU2_TR(0x4a66cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a66d1:{NFSU2_TR(0x4a66d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a66d7:{NFSU2_TR(0x4a66d7);
{u32 ea_=u32(r4(G+0)+u32(8340912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a66dd:{NFSU2_TR(0x4a66dd);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x7f45acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a66e3:{NFSU2_TR(0x4a66e3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a66e7:{NFSU2_TR(0x4a66e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a66f2:{NFSU2_TR(0x4a66f2);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a66f6:{NFSU2_TR(0x4a66f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a66fd:{NFSU2_TR(0x4a66fd);
{u32 ea_=u32(u32(8610800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6703:{NFSU2_TR(0x4a6703);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a670a:{NFSU2_TR(0x4a670a);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6710:{NFSU2_TR(0x4a6710);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6717:{NFSU2_TR(0x4a6717);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a671e:{NFSU2_TR(0x4a671e);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6729:{NFSU2_TR(0x4a6729);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6730:{NFSU2_TR(0x4a6730);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6737:{NFSU2_TR(0x4a6737);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a673e:{NFSU2_TR(0x4a673e);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6745:{NFSU2_TR(0x4a6745);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6750:{NFSU2_TR(0x4a6750);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6757:{NFSU2_TR(0x4a6757);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a675e:{NFSU2_TR(0x4a675e);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6765:{NFSU2_TR(0x4a6765);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a676c:{NFSU2_TR(0x4a676c);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6777:{NFSU2_TR(0x4a6777);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a677b:{NFSU2_TR(0x4a677b);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6786:{NFSU2_TR(0x4a6786);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a678d:{NFSU2_TR(0x4a678d);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6794:{NFSU2_TR(0x4a6794);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a679b:{NFSU2_TR(0x4a679b);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67a2:{NFSU2_TR(0x4a67a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a67ad:{NFSU2_TR(0x4a67ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67b4:{NFSU2_TR(0x4a67b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67bb:{NFSU2_TR(0x4a67bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67c2:{NFSU2_TR(0x4a67c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67c9:{NFSU2_TR(0x4a67c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a67d4:{NFSU2_TR(0x4a67d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67db:{NFSU2_TR(0x4a67db);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67e2:{NFSU2_TR(0x4a67e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67e9:{NFSU2_TR(0x4a67e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a67f0:{NFSU2_TR(0x4a67f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a67fb:{NFSU2_TR(0x4a67fb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6800ull));
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
PN u32 blk_4a6800(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6800:L4a6800:{bud-=14;NFSU2_TR(0x4a6800);
__builtin_memmove((G+4),(G+0),4);
}
B4a6802:{NFSU2_TR(0x4a6802);
w4(G+0,u32(0xb60b60b7ull));
}
B4a6807:{NFSU2_TR(0x4a6807);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B4a6809:{NFSU2_TR(0x4a6809);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B4a680b:{NFSU2_TR(0x4a680b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a680e:{NFSU2_TR(0x4a680e);
__builtin_memmove((G+0),(R+8),4);
}
B4a6810:{NFSU2_TR(0x4a6810);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B4a6813:{NFSU2_TR(0x4a6813);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B4a6815:{NFSU2_TR(0x4a6815);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6816:{NFSU2_TR(0x4a6816);
u8 U[4];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B4a681d:{NFSU2_TR(0x4a681d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a681e:{NFSU2_TR(0x4a681e);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a6825:{NFSU2_TR(0x4a6825);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6826:{NFSU2_TR(0x4a6826);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a682bull));
{[[clang::musttail]] return blk_5bae60(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a682b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a682b:L4a682b:{bud-=40;NFSU2_TR(0x4a682b);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B4a682e:{NFSU2_TR(0x4a682e);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6835:{NFSU2_TR(0x4a6835);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6839:{NFSU2_TR(0x4a6839);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a683d:{NFSU2_TR(0x4a683d);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6844:{NFSU2_TR(0x4a6844);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6846:{NFSU2_TR(0x4a6846);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a684d:{NFSU2_TR(0x4a684d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6851:{NFSU2_TR(0x4a6851);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6853:{NFSU2_TR(0x4a6853);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a685a:{NFSU2_TR(0x4a685a);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6861:{NFSU2_TR(0x4a6861);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6865:{NFSU2_TR(0x4a6865);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a6869:{NFSU2_TR(0x4a6869);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6870:{NFSU2_TR(0x4a6870);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6874:{NFSU2_TR(0x4a6874);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6876:{NFSU2_TR(0x4a6876);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a687d:{NFSU2_TR(0x4a687d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6881:{NFSU2_TR(0x4a6881);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6883:{NFSU2_TR(0x4a6883);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a688a:{NFSU2_TR(0x4a688a);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6891:{NFSU2_TR(0x4a6891);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6895:{NFSU2_TR(0x4a6895);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a689c:{NFSU2_TR(0x4a689c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a68a0:{NFSU2_TR(0x4a68a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a68a2:{NFSU2_TR(0x4a68a2);
{u32 ea_=u32(r4(G+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a68a9:{NFSU2_TR(0x4a68a9);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a68ad:{NFSU2_TR(0x4a68ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a68af:{NFSU2_TR(0x4a68af);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a68b6:{NFSU2_TR(0x4a68b6);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a68bd:{NFSU2_TR(0x4a68bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a68c4:{NFSU2_TR(0x4a68c4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a68c6:{NFSU2_TR(0x4a68c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a68ca:{NFSU2_TR(0x4a68ca);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a68ce:{NFSU2_TR(0x4a68ce);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a68d2:{NFSU2_TR(0x4a68d2);
{u32 ea_=u32(r4(G+4)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a68d8:{NFSU2_TR(0x4a68d8);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a68de:{NFSU2_TR(0x4a68de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a68e0:{NFSU2_TR(0x4a68e0);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a68e3:{NFSU2_TR(0x4a68e3);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_4a6903(ARGS);}}
}
B4a68e5:L4a68e5:{bud-=1;NFSU2_TR(0x4a68e5);
{[[clang::musttail]] return blk_4a68f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a68f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a68f0:L4a68f0:{bud-=5;NFSU2_TR(0x4a68f0);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a68f6:{NFSU2_TR(0x4a68f6);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a68fc:{NFSU2_TR(0x4a68fc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a68fe:{NFSU2_TR(0x4a68fe);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B4a6901:{NFSU2_TR(0x4a6901);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x4a68f0u);}goto L4a68f0;}}
{[[clang::musttail]] return blk_4a6903(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6903(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6903:L4a6903:{bud-=4;NFSU2_TR(0x4a6903);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a6909:{NFSU2_TR(0x4a6909);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a690b:{NFSU2_TR(0x4a690b);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a690e:{NFSU2_TR(0x4a690e);
if(r1(F+2)){{[[clang::musttail]] return blk_4a6923(ARGS);}}
{[[clang::musttail]] return blk_4a6910(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6910(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6910:L4a6910:{bud-=5;NFSU2_TR(0x4a6910);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6916:{NFSU2_TR(0x4a6916);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4a691c:{NFSU2_TR(0x4a691c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B4a691e:{NFSU2_TR(0x4a691e);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B4a6921:{NFSU2_TR(0x4a6921);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x4a6910u);}goto L4a6910;}}
{[[clang::musttail]] return blk_4a6923(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6923(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6923:L4a6923:{bud-=18;NFSU2_TR(0x4a6923);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6929:{NFSU2_TR(0x4a6929);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6931:{NFSU2_TR(0x4a6931);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6939:{NFSU2_TR(0x4a6939);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6941:{NFSU2_TR(0x4a6941);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6949:{NFSU2_TR(0x4a6949);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6951:{NFSU2_TR(0x4a6951);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6959:{NFSU2_TR(0x4a6959);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6961:{NFSU2_TR(0x4a6961);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6969:{NFSU2_TR(0x4a6969);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6971:{NFSU2_TR(0x4a6971);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6979:{NFSU2_TR(0x4a6979);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6981:{NFSU2_TR(0x4a6981);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6989:{NFSU2_TR(0x4a6989);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6991:{NFSU2_TR(0x4a6991);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6999:{NFSU2_TR(0x4a6999);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a69a1:{NFSU2_TR(0x4a69a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a69a9:{NFSU2_TR(0x4a69a9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a69aeull));
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
PN u32 blk_4a69ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a69ae:L4a69ae:{bud-=14;NFSU2_TR(0x4a69ae);
__builtin_memmove((G+4),(G+0),4);
}
B4a69b0:{NFSU2_TR(0x4a69b0);
w4(G+0,u32(0xb60b60b7ull));
}
B4a69b5:{NFSU2_TR(0x4a69b5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B4a69b7:{NFSU2_TR(0x4a69b7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B4a69b9:{NFSU2_TR(0x4a69b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a69bc:{NFSU2_TR(0x4a69bc);
__builtin_memmove((G+0),(R+8),4);
}
B4a69be:{NFSU2_TR(0x4a69be);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B4a69c1:{NFSU2_TR(0x4a69c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B4a69c3:{NFSU2_TR(0x4a69c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a69c4:{NFSU2_TR(0x4a69c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B4a69c8:{NFSU2_TR(0x4a69c8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a69c9:{NFSU2_TR(0x4a69c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a69cd:{NFSU2_TR(0x4a69cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a69ce:{NFSU2_TR(0x4a69ce);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a69d3ull));
{[[clang::musttail]] return blk_5bae60(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a69d3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a69d3:L4a69d3:{bud-=14;NFSU2_TR(0x4a69d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a69d7:{NFSU2_TR(0x4a69d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a69db:{NFSU2_TR(0x4a69db);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a69df:{NFSU2_TR(0x4a69df);
w1(F+0,carry<u32>(r4(G+16),u32(0xcull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B4a69e2:{NFSU2_TR(0x4a69e2);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a69e7:{NFSU2_TR(0x4a69e7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a69e9:{NFSU2_TR(0x4a69e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a69ed:{NFSU2_TR(0x4a69ed);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a69ef:{NFSU2_TR(0x4a69ef);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B4a69f6:{NFSU2_TR(0x4a69f6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a69f7:{NFSU2_TR(0x4a69f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a69fe:{NFSU2_TR(0x4a69fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6a05:{NFSU2_TR(0x4a6a05);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6a10:{NFSU2_TR(0x4a6a10);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6a15ull));
{__builtin_memcpy(R+512,F+0,1);if(__builtin_expect(bud<=0,0)){EXIT(0x401650u);}[[clang::musttail]] return blk_401650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6a15(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6a15:L4a6a15:{bud-=178;NFSU2_TR(0x4a6a15);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a19:{NFSU2_TR(0x4a6a19);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a6a20:{NFSU2_TR(0x4a6a20);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a23:{NFSU2_TR(0x4a6a23);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6a27:{NFSU2_TR(0x4a6a27);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a2b:{NFSU2_TR(0x4a6a2b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a2e:{NFSU2_TR(0x4a6a2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a30:{NFSU2_TR(0x4a6a30);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a34:{NFSU2_TR(0x4a6a34);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a37:{NFSU2_TR(0x4a6a37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a39:{NFSU2_TR(0x4a6a39);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6a3d:{NFSU2_TR(0x4a6a3d);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a41:{NFSU2_TR(0x4a6a41);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a44:{NFSU2_TR(0x4a6a44);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a48:{NFSU2_TR(0x4a6a48);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a4b:{NFSU2_TR(0x4a6a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a4d:{NFSU2_TR(0x4a6a4d);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a51:{NFSU2_TR(0x4a6a51);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a54:{NFSU2_TR(0x4a6a54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a56:{NFSU2_TR(0x4a6a56);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6a5a:{NFSU2_TR(0x4a6a5a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6a5c:{NFSU2_TR(0x4a6a5c);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6a63:{NFSU2_TR(0x4a6a63);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6a6a:{NFSU2_TR(0x4a6a6a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a6d:{NFSU2_TR(0x4a6a6d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6a6f:{NFSU2_TR(0x4a6a6f);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a75:{NFSU2_TR(0x4a6a75);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x184ull))));
__builtin_memmove((G+4),(U+0),4);
}
B4a6a7b:{NFSU2_TR(0x4a6a7b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6a7d:{NFSU2_TR(0x4a6a7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6a81:{NFSU2_TR(0x4a6a81);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6a88:{NFSU2_TR(0x4a6a88);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a8c:{NFSU2_TR(0x4a6a8c);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a8f:{NFSU2_TR(0x4a6a8f);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a93:{NFSU2_TR(0x4a6a93);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a96:{NFSU2_TR(0x4a6a96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6a98:{NFSU2_TR(0x4a6a98);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6a9c:{NFSU2_TR(0x4a6a9c);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6a9f:{NFSU2_TR(0x4a6a9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6aa1:{NFSU2_TR(0x4a6aa1);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6aa5:{NFSU2_TR(0x4a6aa5);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6aa9:{NFSU2_TR(0x4a6aa9);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6aac:{NFSU2_TR(0x4a6aac);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ab0:{NFSU2_TR(0x4a6ab0);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6ab3:{NFSU2_TR(0x4a6ab3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6ab5:{NFSU2_TR(0x4a6ab5);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ab9:{NFSU2_TR(0x4a6ab9);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6abc:{NFSU2_TR(0x4a6abc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6abe:{NFSU2_TR(0x4a6abe);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6ac2:{NFSU2_TR(0x4a6ac2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6ac4:{NFSU2_TR(0x4a6ac4);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6acb:{NFSU2_TR(0x4a6acb);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ad2:{NFSU2_TR(0x4a6ad2);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ad5:{NFSU2_TR(0x4a6ad5);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6ad8:{NFSU2_TR(0x4a6ad8);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4a6ada:{NFSU2_TR(0x4a6ada);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ade:{NFSU2_TR(0x4a6ade);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ae4:{NFSU2_TR(0x4a6ae4);
{u32 ea_=u32(r4(G+0)+u32(392u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6aea:{NFSU2_TR(0x4a6aea);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6af1:{NFSU2_TR(0x4a6af1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4a6af3:{NFSU2_TR(0x4a6af3);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B4a6af5:{NFSU2_TR(0x4a6af5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6af7:{NFSU2_TR(0x4a6af7);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6afb:{NFSU2_TR(0x4a6afb);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6afe:{NFSU2_TR(0x4a6afe);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b02:{NFSU2_TR(0x4a6b02);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b05:{NFSU2_TR(0x4a6b05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b07:{NFSU2_TR(0x4a6b07);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b0b:{NFSU2_TR(0x4a6b0b);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b0e:{NFSU2_TR(0x4a6b0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b10:{NFSU2_TR(0x4a6b10);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b14:{NFSU2_TR(0x4a6b14);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b18:{NFSU2_TR(0x4a6b18);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b1b:{NFSU2_TR(0x4a6b1b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b1f:{NFSU2_TR(0x4a6b1f);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b22:{NFSU2_TR(0x4a6b22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b24:{NFSU2_TR(0x4a6b24);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b28:{NFSU2_TR(0x4a6b28);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b2b:{NFSU2_TR(0x4a6b2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b2d:{NFSU2_TR(0x4a6b2d);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b31:{NFSU2_TR(0x4a6b31);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6b33:{NFSU2_TR(0x4a6b33);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6b3a:{NFSU2_TR(0x4a6b3a);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6b41:{NFSU2_TR(0x4a6b41);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b47:{NFSU2_TR(0x4a6b47);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6b4a:{NFSU2_TR(0x4a6b4a);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b4e:{NFSU2_TR(0x4a6b4e);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6b52:{NFSU2_TR(0x4a6b52);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b58:{NFSU2_TR(0x4a6b58);
{u32 ea_=u32(r4(G+0)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b5e:{NFSU2_TR(0x4a6b5e);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6b65:{NFSU2_TR(0x4a6b65);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b67:{NFSU2_TR(0x4a6b67);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b6b:{NFSU2_TR(0x4a6b6b);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b71:{NFSU2_TR(0x4a6b71);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b75:{NFSU2_TR(0x4a6b75);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b7b:{NFSU2_TR(0x4a6b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b7d:{NFSU2_TR(0x4a6b7d);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b81:{NFSU2_TR(0x4a6b81);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b87:{NFSU2_TR(0x4a6b87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6b89:{NFSU2_TR(0x4a6b89);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6b8d:{NFSU2_TR(0x4a6b8d);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b91:{NFSU2_TR(0x4a6b91);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6b97:{NFSU2_TR(0x4a6b97);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6b9b:{NFSU2_TR(0x4a6b9b);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6ba1:{NFSU2_TR(0x4a6ba1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6ba3:{NFSU2_TR(0x4a6ba3);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ba7:{NFSU2_TR(0x4a6ba7);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6bad:{NFSU2_TR(0x4a6bad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6baf:{NFSU2_TR(0x4a6baf);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6bb3:{NFSU2_TR(0x4a6bb3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6bb5:{NFSU2_TR(0x4a6bb5);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6bbc:{NFSU2_TR(0x4a6bbc);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6bc3:{NFSU2_TR(0x4a6bc3);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6bc9:{NFSU2_TR(0x4a6bc9);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6bcf:{NFSU2_TR(0x4a6bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a6bd6:{NFSU2_TR(0x4a6bd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6bd7:{NFSU2_TR(0x4a6bd7);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6bdb:{NFSU2_TR(0x4a6bdb);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6bdf:{NFSU2_TR(0x4a6bdf);
{u32 ea_=u32(u32(8340904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6be5:{NFSU2_TR(0x4a6be5);
{u32 ea_=u32(r4(G+0)+u32(400u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6beb:{NFSU2_TR(0x4a6beb);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4a6bf2:{NFSU2_TR(0x4a6bf2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4a6bf4:{NFSU2_TR(0x4a6bf4);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6bf8:{NFSU2_TR(0x4a6bf8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6bfa:{NFSU2_TR(0x4a6bfa);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c01:{NFSU2_TR(0x4a6c01);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c08:{NFSU2_TR(0x4a6c08);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c0f:{NFSU2_TR(0x4a6c0f);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c16:{NFSU2_TR(0x4a6c16);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c1d:{NFSU2_TR(0x4a6c1d);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c24:{NFSU2_TR(0x4a6c24);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c2b:{NFSU2_TR(0x4a6c2b);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c32:{NFSU2_TR(0x4a6c32);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c39:{NFSU2_TR(0x4a6c39);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c40:{NFSU2_TR(0x4a6c40);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c47:{NFSU2_TR(0x4a6c47);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c4e:{NFSU2_TR(0x4a6c4e);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c55:{NFSU2_TR(0x4a6c55);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c5c:{NFSU2_TR(0x4a6c5c);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c63:{NFSU2_TR(0x4a6c63);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c6a:{NFSU2_TR(0x4a6c6a);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c71:{NFSU2_TR(0x4a6c71);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c78:{NFSU2_TR(0x4a6c78);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c7f:{NFSU2_TR(0x4a6c7f);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c86:{NFSU2_TR(0x4a6c86);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6c8d:{NFSU2_TR(0x4a6c8d);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6c94:{NFSU2_TR(0x4a6c94);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6c9b:{NFSU2_TR(0x4a6c9b);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ca2:{NFSU2_TR(0x4a6ca2);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6ca9:{NFSU2_TR(0x4a6ca9);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6cb0:{NFSU2_TR(0x4a6cb0);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6cb7:{NFSU2_TR(0x4a6cb7);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6cbe:{NFSU2_TR(0x4a6cbe);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6cc5:{NFSU2_TR(0x4a6cc5);
{u32 ea_=u32(r4(G+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ccc:{NFSU2_TR(0x4a6ccc);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6cd3:{NFSU2_TR(0x4a6cd3);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4a6cda:{NFSU2_TR(0x4a6cda);
{u32 ea_=u32(r4(G+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6ce1:{NFSU2_TR(0x4a6ce1);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4a6ce3:{NFSU2_TR(0x4a6ce3);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6cea:{NFSU2_TR(0x4a6cea);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6cf1:{NFSU2_TR(0x4a6cf1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4a6cf3:{NFSU2_TR(0x4a6cf3);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6cfa:{NFSU2_TR(0x4a6cfa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6cfc:{NFSU2_TR(0x4a6cfc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4a6cfe:{NFSU2_TR(0x4a6cfe);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d05:{NFSU2_TR(0x4a6d05);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6d0c:{NFSU2_TR(0x4a6d0c);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6d13:{NFSU2_TR(0x4a6d13);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d1a:{NFSU2_TR(0x4a6d1a);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6d21:{NFSU2_TR(0x4a6d21);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6d28:{NFSU2_TR(0x4a6d28);
{u32 ea_=u32(r4(G+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d2f:{NFSU2_TR(0x4a6d2f);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6d36:{NFSU2_TR(0x4a6d36);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6d3d:{NFSU2_TR(0x4a6d3d);
{u32 ea_=u32(r4(G+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d44:{NFSU2_TR(0x4a6d44);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4a6d4b:{NFSU2_TR(0x4a6d4b);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6d52:{NFSU2_TR(0x4a6d52);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B4a6d59:{NFSU2_TR(0x4a6d59);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6d5a:{NFSU2_TR(0x4a6d5a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6d5full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43cf10u);}[[clang::musttail]] return blk_43cf10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6d5f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6d5f:L4a6d5f:{bud-=5;NFSU2_TR(0x4a6d5f);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B4a6d66:{NFSU2_TR(0x4a6d66);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6d67:{NFSU2_TR(0x4a6d67);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a6d6e:{NFSU2_TR(0x4a6d6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6d6f:{NFSU2_TR(0x4a6d6f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6d74ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43cf10u);}[[clang::musttail]] return blk_43cf10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6d74(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6d74:L4a6d74:{bud-=7;NFSU2_TR(0x4a6d74);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B4a6d7b:{NFSU2_TR(0x4a6d7b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6d7c:{NFSU2_TR(0x4a6d7c);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B4a6d83:{NFSU2_TR(0x4a6d83);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6d84:{NFSU2_TR(0x4a6d84);
u8 U[4];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a6d8b:{NFSU2_TR(0x4a6d8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6d8c:{NFSU2_TR(0x4a6d8c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6d91ull));
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
PN u32 blk_4a6d91(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6d91:L4a6d91:{bud-=37;NFSU2_TR(0x4a6d91);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6d95:{NFSU2_TR(0x4a6d95);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6d9b:{NFSU2_TR(0x4a6d9b);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6da2:{NFSU2_TR(0x4a6da2);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6da9:{NFSU2_TR(0x4a6da9);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a6db0:{NFSU2_TR(0x4a6db0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4a6db2:{NFSU2_TR(0x4a6db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6db9:{NFSU2_TR(0x4a6db9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6dbb:{NFSU2_TR(0x4a6dbb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6dbd:{NFSU2_TR(0x4a6dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6dc4:{NFSU2_TR(0x4a6dc4);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4a6dc6:{NFSU2_TR(0x4a6dc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6dcd:{NFSU2_TR(0x4a6dcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6dd4:{NFSU2_TR(0x4a6dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a6ddb:{NFSU2_TR(0x4a6ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6de2:{NFSU2_TR(0x4a6de2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6de9:{NFSU2_TR(0x4a6de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6df0:{NFSU2_TR(0x4a6df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a6df7:{NFSU2_TR(0x4a6df7);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6dfe:{NFSU2_TR(0x4a6dfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6e05:{NFSU2_TR(0x4a6e05);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e0c:{NFSU2_TR(0x4a6e0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B4a6e13:{NFSU2_TR(0x4a6e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e1a:{NFSU2_TR(0x4a6e1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e21:{NFSU2_TR(0x4a6e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6e28:{NFSU2_TR(0x4a6e28);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6e29:{NFSU2_TR(0x4a6e29);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x920ull))));
__builtin_memmove((G+4),(U+0),4);
}
B4a6e2f:{NFSU2_TR(0x4a6e2f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6e30:{NFSU2_TR(0x4a6e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e3b:{NFSU2_TR(0x4a6e3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e46:{NFSU2_TR(0x4a6e46);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e4d:{NFSU2_TR(0x4a6e4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e58:{NFSU2_TR(0x4a6e58);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6e5c:{NFSU2_TR(0x4a6e5c);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6e62:{NFSU2_TR(0x4a6e62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4a6e64:{NFSU2_TR(0x4a6e64);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6e68:{NFSU2_TR(0x4a6e68);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6e6dull));
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
PN u32 blk_4a6e6d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6e6d:L4a6e6d:{bud-=10;NFSU2_TR(0x4a6e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6e71:{NFSU2_TR(0x4a6e71);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6e75:{NFSU2_TR(0x4a6e75);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a6e79:{NFSU2_TR(0x4a6e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x910ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e7f:{NFSU2_TR(0x4a6e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x914ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e85:{NFSU2_TR(0x4a6e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x918ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6e8b:{NFSU2_TR(0x4a6e8b);
{u32 ea_=u32(u32(8340900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6e91:{NFSU2_TR(0x4a6e91);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4a6e97:{NFSU2_TR(0x4a6e97);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x24ull))));
}
B4a6e9a:{NFSU2_TR(0x4a6e9a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6e9full));
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
PN u32 blk_4a6e9f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6e9f:L4a6e9f:{bud-=14;NFSU2_TR(0x4a6e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a6ea6:{NFSU2_TR(0x4a6ea6);
__builtin_memmove((G+4),(G+0),4);
}
B4a6ea8:{NFSU2_TR(0x4a6ea8);
w4(G+0,u32(0xb60b60b7ull));
}
B4a6ead:{NFSU2_TR(0x4a6ead);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B4a6eaf:{NFSU2_TR(0x4a6eaf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B4a6eb1:{NFSU2_TR(0x4a6eb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B4a6eb5:{NFSU2_TR(0x4a6eb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4a6eb8:{NFSU2_TR(0x4a6eb8);
__builtin_memmove((G+0),(R+8),4);
}
B4a6eba:{NFSU2_TR(0x4a6eba);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B4a6ebd:{NFSU2_TR(0x4a6ebd);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B4a6ebf:{NFSU2_TR(0x4a6ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6ec3:{NFSU2_TR(0x4a6ec3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a6ec7:{NFSU2_TR(0x4a6ec7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4a6ec9:{NFSU2_TR(0x4a6ec9);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_4a6ed0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6ed0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6ed0:L4a6ed0:{bud-=36;NFSU2_TR(0x4a6ed0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B4a6ed3:{NFSU2_TR(0x4a6ed3);
w4(G+4,u32(0x3f800000ull));
}
B4a6ed8:{NFSU2_TR(0x4a6ed8);
u8 U[12];
w4(U+0,u32(u32(u32(0x2c0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B4a6edf:{NFSU2_TR(0x4a6edf);
u8 U[16];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6ee6:{NFSU2_TR(0x4a6ee6);
u8 U[16];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6eed:{NFSU2_TR(0x4a6eed);
u8 U[16];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6ef4:{NFSU2_TR(0x4a6ef4);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6efb:{NFSU2_TR(0x4a6efb);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f02:{NFSU2_TR(0x4a6f02);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d4ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f09:{NFSU2_TR(0x4a6f09);
u8 U[16];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f10:{NFSU2_TR(0x4a6f10);
u8 U[16];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f17:{NFSU2_TR(0x4a6f17);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f1e:{NFSU2_TR(0x4a6f1e);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f25:{NFSU2_TR(0x4a6f25);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f2c:{NFSU2_TR(0x4a6f2c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f33:{NFSU2_TR(0x4a6f33);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f3a:{NFSU2_TR(0x4a6f3a);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f41:{NFSU2_TR(0x4a6f41);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f48:{NFSU2_TR(0x4a6f48);
u8 U[16];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f4f:{NFSU2_TR(0x4a6f4f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
}
B4a6f51:{NFSU2_TR(0x4a6f51);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c4ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f58:{NFSU2_TR(0x4a6f58);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c8ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f5f:{NFSU2_TR(0x4a6f5f);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ccull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f66:{NFSU2_TR(0x4a6f66);
u8 U[16];
w4(U+0,u32(u32(u32(0x2d0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f6d:{NFSU2_TR(0x4a6f6d);
u8 U[16];
w4(U+0,u32(u32(u32(0x2d4ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f74:{NFSU2_TR(0x4a6f74);
u8 U[16];
w4(U+0,u32(u32(u32(0x2d8ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f7b:{NFSU2_TR(0x4a6f7b);
u8 U[16];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f82:{NFSU2_TR(0x4a6f82);
u8 U[16];
w4(U+0,u32(u32(u32(0x2e0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f89:{NFSU2_TR(0x4a6f89);
u8 U[16];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f90:{NFSU2_TR(0x4a6f90);
u8 U[16];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f97:{NFSU2_TR(0x4a6f97);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ecull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6f9e:{NFSU2_TR(0x4a6f9e);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6fa5:{NFSU2_TR(0x4a6fa5);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f4ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6fac:{NFSU2_TR(0x4a6fac);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f8ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6fb3:{NFSU2_TR(0x4a6fb3);
u8 U[16];
w4(U+0,u32(u32(u32(0x2fcull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6fba:{NFSU2_TR(0x4a6fba);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_4a6fe3(ARGS);}}
}
B4a6fbc:L4a6fbc:{bud-=5;NFSU2_TR(0x4a6fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6fc0:{NFSU2_TR(0x4a6fc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6fc1:{NFSU2_TR(0x4a6fc1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6fc2:{NFSU2_TR(0x4a6fc2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6fc3:{NFSU2_TR(0x4a6fc3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6fc8ull));
{[[clang::musttail]] return blk_5bae60(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6fc8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6fc8:L4a6fc8:{bud-=6;NFSU2_TR(0x4a6fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B4a6fcc:{NFSU2_TR(0x4a6fcc);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6fcd:{NFSU2_TR(0x4a6fcd);
u8 U[12];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B4a6fd4:{NFSU2_TR(0x4a6fd4);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6fd5:{NFSU2_TR(0x4a6fd5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B4a6fd6:{NFSU2_TR(0x4a6fd6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x4a6fdbull));
{[[clang::musttail]] return blk_5bae60(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6fdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6fdb:L4a6fdb:{bud-=2;NFSU2_TR(0x4a6fdb);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B4a6fde:{NFSU2_TR(0x4a6fde);
w4(G+4,u32(0x3f800000ull));
{[[clang::musttail]] return blk_4a6fe3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_4a6fe3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B4a6fe3:L4a6fe3:{bud-=8;NFSU2_TR(0x4a6fe3);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6fe6:{NFSU2_TR(0x4a6fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6fe9:{NFSU2_TR(0x4a6fe9);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4a6feb:{NFSU2_TR(0x4a6feb);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4a6ff2:{NFSU2_TR(0x4a6ff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a6ff6:{NFSU2_TR(0x4a6ff6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4a6ff8:{NFSU2_TR(0x4a6ff8);
{u32 ea_=u32(r4(R+24)+r4(G+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4a6fff:{NFSU2_TR(0x4a6fff);
u8 U[16];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),4);
s4(u32(r4(U+8)),r4(U+12));
{EXIT(0x4a7006u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_4a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x4a6005:[[clang::musttail]] return blk_4a6005(c,a4,a0,a1,bud);
case 0x4a6018:[[clang::musttail]] return blk_4a6018(c,a4,a0,a1,bud);
case 0x4a601b:[[clang::musttail]] return blk_4a601b(c,a4,a0,a1,bud);
case 0x4a6030:[[clang::musttail]] return blk_4a6030(c,a4,a0,a1,bud);
case 0x4a60b0:[[clang::musttail]] return blk_4a60b0(c,a4,a0,a1,bud);
case 0x4a60c1:[[clang::musttail]] return blk_4a60c1(c,a4,a0,a1,bud);
case 0x4a60d9:[[clang::musttail]] return blk_4a60d9(c,a4,a0,a1,bud);
case 0x4a60e6:[[clang::musttail]] return blk_4a60e6(c,a4,a0,a1,bud);
case 0x4a60ee:[[clang::musttail]] return blk_4a60ee(c,a4,a0,a1,bud);
case 0x4a60f0:[[clang::musttail]] return blk_4a60f0(c,a4,a0,a1,bud);
case 0x4a6168:[[clang::musttail]] return blk_4a6168(c,a4,a0,a1,bud);
case 0x4a61af:[[clang::musttail]] return blk_4a61af(c,a4,a0,a1,bud);
case 0x4a61c0:[[clang::musttail]] return blk_4a61c0(c,a4,a0,a1,bud);
case 0x4a61da:[[clang::musttail]] return blk_4a61da(c,a4,a0,a1,bud);
case 0x4a6210:[[clang::musttail]] return blk_4a6210(c,a4,a0,a1,bud);
case 0x4a6218:[[clang::musttail]] return blk_4a6218(c,a4,a0,a1,bud);
case 0x4a6237:[[clang::musttail]] return blk_4a6237(c,a4,a0,a1,bud);
case 0x4a624f:[[clang::musttail]] return blk_4a624f(c,a4,a0,a1,bud);
case 0x4a6276:[[clang::musttail]] return blk_4a6276(c,a4,a0,a1,bud);
case 0x4a628a:[[clang::musttail]] return blk_4a628a(c,a4,a0,a1,bud);
case 0x4a62a4:[[clang::musttail]] return blk_4a62a4(c,a4,a0,a1,bud);
case 0x4a62aa:[[clang::musttail]] return blk_4a62aa(c,a4,a0,a1,bud);
case 0x4a62c9:[[clang::musttail]] return blk_4a62c9(c,a4,a0,a1,bud);
case 0x4a62dc:[[clang::musttail]] return blk_4a62dc(c,a4,a0,a1,bud);
case 0x4a633a:[[clang::musttail]] return blk_4a633a(c,a4,a0,a1,bud);
case 0x4a6346:[[clang::musttail]] return blk_4a6346(c,a4,a0,a1,bud);
case 0x4a6350:[[clang::musttail]] return blk_4a6350(c,a4,a0,a1,bud);
case 0x4a637f:[[clang::musttail]] return blk_4a637f(c,a4,a0,a1,bud);
case 0x4a63ba:[[clang::musttail]] return blk_4a63ba(c,a4,a0,a1,bud);
case 0x4a63e5:[[clang::musttail]] return blk_4a63e5(c,a4,a0,a1,bud);
case 0x4a6410:[[clang::musttail]] return blk_4a6410(c,a4,a0,a1,bud);
case 0x4a6435:[[clang::musttail]] return blk_4a6435(c,a4,a0,a1,bud);
case 0x4a643d:[[clang::musttail]] return blk_4a643d(c,a4,a0,a1,bud);
case 0x4a6452:[[clang::musttail]] return blk_4a6452(c,a4,a0,a1,bud);
case 0x4a6456:[[clang::musttail]] return blk_4a6456(c,a4,a0,a1,bud);
case 0x4a6467:[[clang::musttail]] return blk_4a6467(c,a4,a0,a1,bud);
case 0x4a64a0:[[clang::musttail]] return blk_4a64a0(c,a4,a0,a1,bud);
case 0x4a64c1:[[clang::musttail]] return blk_4a64c1(c,a4,a0,a1,bud);
case 0x4a64d6:[[clang::musttail]] return blk_4a64d6(c,a4,a0,a1,bud);
case 0x4a64e7:[[clang::musttail]] return blk_4a64e7(c,a4,a0,a1,bud);
case 0x4a64e9:[[clang::musttail]] return blk_4a64e9(c,a4,a0,a1,bud);
case 0x4a64ef:[[clang::musttail]] return blk_4a64ef(c,a4,a0,a1,bud);
case 0x4a651f:[[clang::musttail]] return blk_4a651f(c,a4,a0,a1,bud);
case 0x4a6533:[[clang::musttail]] return blk_4a6533(c,a4,a0,a1,bud);
case 0x4a653f:[[clang::musttail]] return blk_4a653f(c,a4,a0,a1,bud);
case 0x4a6546:[[clang::musttail]] return blk_4a6546(c,a4,a0,a1,bud);
case 0x4a6552:[[clang::musttail]] return blk_4a6552(c,a4,a0,a1,bud);
case 0x4a656f:[[clang::musttail]] return blk_4a656f(c,a4,a0,a1,bud);
case 0x4a658a:[[clang::musttail]] return blk_4a658a(c,a4,a0,a1,bud);
case 0x4a65b5:[[clang::musttail]] return blk_4a65b5(c,a4,a0,a1,bud);
case 0x4a65bb:[[clang::musttail]] return blk_4a65bb(c,a4,a0,a1,bud);
case 0x4a65de:[[clang::musttail]] return blk_4a65de(c,a4,a0,a1,bud);
case 0x4a65e4:[[clang::musttail]] return blk_4a65e4(c,a4,a0,a1,bud);
case 0x4a65f7:[[clang::musttail]] return blk_4a65f7(c,a4,a0,a1,bud);
case 0x4a65fd:[[clang::musttail]] return blk_4a65fd(c,a4,a0,a1,bud);
case 0x4a6610:[[clang::musttail]] return blk_4a6610(c,a4,a0,a1,bud);
case 0x4a6614:[[clang::musttail]] return blk_4a6614(c,a4,a0,a1,bud);
case 0x4a6619:[[clang::musttail]] return blk_4a6619(c,a4,a0,a1,bud);
case 0x4a6626:[[clang::musttail]] return blk_4a6626(c,a4,a0,a1,bud);
case 0x4a6670:[[clang::musttail]] return blk_4a6670(c,a4,a0,a1,bud);
case 0x4a669f:[[clang::musttail]] return blk_4a669f(c,a4,a0,a1,bud);
case 0x4a66a9:[[clang::musttail]] return blk_4a66a9(c,a4,a0,a1,bud);
case 0x4a6800:[[clang::musttail]] return blk_4a6800(c,a4,a0,a1,bud);
case 0x4a682b:[[clang::musttail]] return blk_4a682b(c,a4,a0,a1,bud);
case 0x4a68f0:[[clang::musttail]] return blk_4a68f0(c,a4,a0,a1,bud);
case 0x4a6903:[[clang::musttail]] return blk_4a6903(c,a4,a0,a1,bud);
case 0x4a6910:[[clang::musttail]] return blk_4a6910(c,a4,a0,a1,bud);
case 0x4a6923:[[clang::musttail]] return blk_4a6923(c,a4,a0,a1,bud);
case 0x4a69ae:[[clang::musttail]] return blk_4a69ae(c,a4,a0,a1,bud);
case 0x4a69d3:[[clang::musttail]] return blk_4a69d3(c,a4,a0,a1,bud);
case 0x4a6a15:[[clang::musttail]] return blk_4a6a15(c,a4,a0,a1,bud);
case 0x4a6d5f:[[clang::musttail]] return blk_4a6d5f(c,a4,a0,a1,bud);
case 0x4a6d74:[[clang::musttail]] return blk_4a6d74(c,a4,a0,a1,bud);
case 0x4a6d91:[[clang::musttail]] return blk_4a6d91(c,a4,a0,a1,bud);
case 0x4a6e6d:[[clang::musttail]] return blk_4a6e6d(c,a4,a0,a1,bud);
case 0x4a6e9f:[[clang::musttail]] return blk_4a6e9f(c,a4,a0,a1,bud);
case 0x4a6ed0:[[clang::musttail]] return blk_4a6ed0(c,a4,a0,a1,bud);
case 0x4a6fc8:[[clang::musttail]] return blk_4a6fc8(c,a4,a0,a1,bud);
case 0x4a6fdb:[[clang::musttail]] return blk_4a6fdb(c,a4,a0,a1,bud);
case 0x4a6fe3:[[clang::musttail]] return blk_4a6fe3(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_4a6(Cpu& c){u8* R=c.regs.data();return ent_4a6(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
