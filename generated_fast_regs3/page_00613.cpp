#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401020(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c1c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c1f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c2b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c370(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c780(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43cf10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43d1e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43db50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4901d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5b96d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5ba8b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bae60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bb3b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bb3f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c7e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5f0b40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5f0c50(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5fa660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6130d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613360(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613465(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613470(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6134f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613500(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61376b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613906(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613973(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613999(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6139c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6139d3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613a4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613ba0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613bb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613beb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613c10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613c33(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613d08(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613dba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613dda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613f8b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_614017(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_614028(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_614053(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_614066(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61407f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75bed4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613020(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613050(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613079(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61308e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613097(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613370(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61337f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6133af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6133e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61347c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613499(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6134b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6134e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613521(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613527(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613540(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613559(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61356d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613588(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61359b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6135d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613670(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613693(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61369b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6136b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6136f6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613715(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61371d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613728(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613733(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613750(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61375c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613868(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61388e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6138aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6139b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6139ea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613a30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613a53(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613a70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613b54(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613b72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613b83(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613bb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613be3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613c1c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613cc6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613d63(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613d77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613f86(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_613001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613001:L613001:{bud-=1;NFSU2_TR(0x613001);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613006ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5b96d0u);}[[clang::musttail]] return blk_5b96d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613006:L613006:{bud-=6;NFSU2_TR(0x613006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B613007:{NFSU2_TR(0x613007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B613008:{NFSU2_TR(0x613008);
w4(G+0,u32(0x1ull));
}
B61300d:{NFSU2_TR(0x61300d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61300e:{NFSU2_TR(0x61300e);
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
B613011:{NFSU2_TR(0x613011);
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
PN u32 blk_613020(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613020:L613020:{bud-=7;NFSU2_TR(0x613020);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613024:{NFSU2_TR(0x613024);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613028:{NFSU2_TR(0x613028);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4edcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61302e:{NFSU2_TR(0x61302e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613032:{NFSU2_TR(0x613032);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ee0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613038:{NFSU2_TR(0x613038);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ee4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61303e:{NFSU2_TR(0x61303e);
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
PN u32 blk_613050(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613050:L613050:{bud-=14;NFSU2_TR(0x613050);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613051:{NFSU2_TR(0x613051);
__builtin_memmove((R+20),(G+16),4);
}
B613053:{NFSU2_TR(0x613053);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B613056:{NFSU2_TR(0x613056);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613057:{NFSU2_TR(0x613057);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613058:{NFSU2_TR(0x613058);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613059:{NFSU2_TR(0x613059);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61305a:{NFSU2_TR(0x61305a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61305c:{NFSU2_TR(0x61305c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61305d:{NFSU2_TR(0x61305d);
__builtin_memmove((R+24),(G+4),4);
}
B61305f:{NFSU2_TR(0x61305f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613060:{NFSU2_TR(0x613060);
u8 U[4];
w4(U+0,u32(0x7a8508ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613065:{NFSU2_TR(0x613065);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ed8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61306b:{NFSU2_TR(0x61306b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613070ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43db50u);}[[clang::musttail]] return blk_43db50(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613070:L613070:{bud-=3;NFSU2_TR(0x613070);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B613073:{NFSU2_TR(0x613073);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613074:{NFSU2_TR(0x613074);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613079ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x4901d0u);}[[clang::musttail]] return blk_4901d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613079(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613079:L613079:{bud-=6;NFSU2_TR(0x613079);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B61307c:{NFSU2_TR(0x61307c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61307d:{NFSU2_TR(0x61307d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61307e:{NFSU2_TR(0x61307e);
u8 U[4];
w4(U+0,u32(0x7a84fcull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613083:{NFSU2_TR(0x613083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d7cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613089:{NFSU2_TR(0x613089);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61308eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43db50u);}[[clang::musttail]] return blk_43db50(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61308e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61308e:L61308e:{bud-=3;NFSU2_TR(0x61308e);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B613091:{NFSU2_TR(0x613091);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613092:{NFSU2_TR(0x613092);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613097ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x4901d0u);}[[clang::musttail]] return blk_4901d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613097(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613097:L613097:{bud-=10;NFSU2_TR(0x613097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d80ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61309d:{NFSU2_TR(0x61309d);
__builtin_memmove((G+0),gp(0x82db08),4);
}
B6130a2:{NFSU2_TR(0x6130a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d84ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6130a8:{NFSU2_TR(0x6130a8);
__builtin_memmove((G+4),gp(0x82db08),4);
}
B6130ae:{NFSU2_TR(0x6130ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d88ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6130b4:{NFSU2_TR(0x6130b4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B6130b7:{NFSU2_TR(0x6130b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6130bd:{NFSU2_TR(0x6130bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d00ull))));
w4(U+4,u32(0x190ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6130c7:{NFSU2_TR(0x6130c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d1cull))));
__builtin_memmove((G+0),(U+0),4);
}
B6130cd:{NFSU2_TR(0x6130cd);
w4(G+4,u32(0x6ull));
{[[clang::musttail]] return blk_6130d2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6130d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6130d2:L6130d2:{bud-=5;NFSU2_TR(0x6130d2);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6130d5:{NFSU2_TR(0x6130d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(G+0)),r4(U+0));
}
B6130d7:{NFSU2_TR(0x6130d7);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
}
B6130da:{NFSU2_TR(0x6130da);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
}
B6130db:{NFSU2_TR(0x6130db);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6130d2u);}goto L6130d2;}}
}
B6130dd:L6130dd:{bud-=112;NFSU2_TR(0x6130dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6130e3:{NFSU2_TR(0x6130e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6130e9:{NFSU2_TR(0x6130e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6130ec:{NFSU2_TR(0x6130ec);
w4(G+0,u32(0x1ull));
}
B6130f1:{NFSU2_TR(0x6130f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6130f7:{NFSU2_TR(0x6130f7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d04ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6130fe:{NFSU2_TR(0x6130fe);
__builtin_memmove((R+8),gp(0x8039cc),4);
}
B613104:{NFSU2_TR(0x613104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61310a:{NFSU2_TR(0x61310a);
__builtin_memmove((G+4),gp(0x8039d0),4);
}
B613110:{NFSU2_TR(0x613110);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d54ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613116:{NFSU2_TR(0x613116);
__builtin_memmove((R+8),gp(0x8039d4),4);
}
B61311c:{NFSU2_TR(0x61311c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613122:{NFSU2_TR(0x613122);
__builtin_memmove((G+4),gp(0x8039d8),4);
}
B613128:{NFSU2_TR(0x613128);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d64ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61312e:{NFSU2_TR(0x61312e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613134:{NFSU2_TR(0x613134);
w4(G+4,u32(0x3f800000ull));
}
B613139:{NFSU2_TR(0x613139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d74ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61313f:{NFSU2_TR(0x61313f);
{u32 ea_=u32(u32(8403404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613145:{NFSU2_TR(0x613145);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61314b:{NFSU2_TR(0x61314b);
{u32 ea_=u32(r4(R+24)+u32(19792u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613151:{NFSU2_TR(0x613151);
{u32 ea_=u32(u32(8403408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613157:{NFSU2_TR(0x613157);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61315d:{NFSU2_TR(0x61315d);
{u32 ea_=u32(r4(R+24)+u32(19800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613163:{NFSU2_TR(0x613163);
{u32 ea_=u32(u32(8403412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613169:{NFSU2_TR(0x613169);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61316f:{NFSU2_TR(0x61316f);
{u32 ea_=u32(r4(R+24)+u32(19808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613175:{NFSU2_TR(0x613175);
{u32 ea_=u32(u32(8403416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61317b:{NFSU2_TR(0x61317b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613181:{NFSU2_TR(0x613181);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613187:{NFSU2_TR(0x613187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d78ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61318d:{NFSU2_TR(0x61318d);
{u32 ea_=u32(r4(R+24)+u32(19816u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613193:{NFSU2_TR(0x613193);
__builtin_memmove((R+8),gp(0x8039dc),4);
}
B613199:{NFSU2_TR(0x613199);
{u32 ea_=u32(u32(8403424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61319f:{NFSU2_TR(0x61319f);
{u32 ea_=u32(u32(8403428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6131a5:{NFSU2_TR(0x6131a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4db0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6131ab:{NFSU2_TR(0x6131ab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6131ad:{NFSU2_TR(0x6131ad);
{u32 ea_=u32(r4(R+24)+u32(19892u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6131b3:{NFSU2_TR(0x6131b3);
{u32 ea_=u32(r4(R+24)+u32(19896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6131b9:{NFSU2_TR(0x6131b9);
__builtin_memmove((G+4),gp(0x8039e8),4);
}
B6131bf:{NFSU2_TR(0x6131bf);
{u32 ea_=u32(u32(8403436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6131c5:{NFSU2_TR(0x6131c5);
{u32 ea_=u32(u32(8403440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6131cb:{NFSU2_TR(0x6131cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dc0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6131d1:{NFSU2_TR(0x6131d1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6131d3:{NFSU2_TR(0x6131d3);
{u32 ea_=u32(r4(R+24)+u32(19908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6131d9:{NFSU2_TR(0x6131d9);
{u32 ea_=u32(r4(R+24)+u32(19912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6131df:{NFSU2_TR(0x6131df);
__builtin_memmove((R+8),gp(0x8039f4),4);
}
B6131e5:{NFSU2_TR(0x6131e5);
{u32 ea_=u32(u32(8403448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6131eb:{NFSU2_TR(0x6131eb);
{u32 ea_=u32(u32(8403452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6131f1:{NFSU2_TR(0x6131f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6131f7:{NFSU2_TR(0x6131f7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6131f9:{NFSU2_TR(0x6131f9);
{u32 ea_=u32(r4(R+24)+u32(19924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6131ff:{NFSU2_TR(0x6131ff);
{u32 ea_=u32(r4(R+24)+u32(19928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613205:{NFSU2_TR(0x613205);
__builtin_memmove((G+4),gp(0x803a00),4);
}
B61320b:{NFSU2_TR(0x61320b);
{u32 ea_=u32(u32(8403460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613211:{NFSU2_TR(0x613211);
{u32 ea_=u32(u32(8403464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613217:{NFSU2_TR(0x613217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4de0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61321d:{NFSU2_TR(0x61321d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61321f:{NFSU2_TR(0x61321f);
{u32 ea_=u32(r4(R+24)+u32(19940u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613225:{NFSU2_TR(0x613225);
{u32 ea_=u32(r4(R+24)+u32(19944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61322b:{NFSU2_TR(0x61322b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4df0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613231:{NFSU2_TR(0x613231);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4df4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613237:{NFSU2_TR(0x613237);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4df8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61323d:{NFSU2_TR(0x61323d);
{u32 ea_=u32(u32(8403312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613243:{NFSU2_TR(0x613243);
{u32 ea_=u32(u32(8403316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613249:{NFSU2_TR(0x613249);
__builtin_memmove((R+8),gp(0x80396c),4);
}
B61324f:{NFSU2_TR(0x61324f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613255:{NFSU2_TR(0x613255);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613257:{NFSU2_TR(0x613257);
{u32 ea_=u32(r4(R+24)+u32(19988u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61325d:{NFSU2_TR(0x61325d);
{u32 ea_=u32(r4(R+24)+u32(19992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613263:{NFSU2_TR(0x613263);
__builtin_memmove((G+4),gp(0x80397c),4);
}
B613269:{NFSU2_TR(0x613269);
{u32 ea_=u32(u32(8403328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61326f:{NFSU2_TR(0x61326f);
{u32 ea_=u32(u32(8403332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613275:{NFSU2_TR(0x613275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e20ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61327b:{NFSU2_TR(0x61327b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61327d:{NFSU2_TR(0x61327d);
{u32 ea_=u32(r4(R+24)+u32(20004u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613283:{NFSU2_TR(0x613283);
{u32 ea_=u32(r4(R+24)+u32(20008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613289:{NFSU2_TR(0x613289);
__builtin_memmove((R+8),gp(0x80398c),4);
}
B61328f:{NFSU2_TR(0x61328f);
{u32 ea_=u32(u32(8403344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613295:{NFSU2_TR(0x613295);
{u32 ea_=u32(u32(8403348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61329b:{NFSU2_TR(0x61329b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6132a1:{NFSU2_TR(0x6132a1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6132a3:{NFSU2_TR(0x6132a3);
{u32 ea_=u32(r4(R+24)+u32(20020u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6132a9:{NFSU2_TR(0x6132a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6132ad:{NFSU2_TR(0x6132ad);
{u32 ea_=u32(r4(R+24)+u32(20024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6132b3:{NFSU2_TR(0x6132b3);
__builtin_memmove((G+4),gp(0x80399c),4);
}
B6132b9:{NFSU2_TR(0x6132b9);
{u32 ea_=u32(u32(8403360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6132bf:{NFSU2_TR(0x6132bf);
{u32 ea_=u32(u32(8403364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6132c5:{NFSU2_TR(0x6132c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e40ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6132cb:{NFSU2_TR(0x6132cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6132cd:{NFSU2_TR(0x6132cd);
{u32 ea_=u32(r4(R+24)+u32(20036u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6132d3:{NFSU2_TR(0x6132d3);
{u32 ea_=u32(r4(R+24)+u32(20040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6132d9:{NFSU2_TR(0x6132d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6132df:{NFSU2_TR(0x6132df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6132e5:{NFSU2_TR(0x6132e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6132eb:{NFSU2_TR(0x6132eb);
__builtin_memmove((R+8),gp(0x803978),4);
}
B6132f1:{NFSU2_TR(0x6132f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6132f7:{NFSU2_TR(0x6132f7);
__builtin_memmove((G+4),gp(0x803988),4);
}
B6132fd:{NFSU2_TR(0x6132fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e74ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613303:{NFSU2_TR(0x613303);
__builtin_memmove((R+8),gp(0x803998),4);
}
B613309:{NFSU2_TR(0x613309);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e88ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61330f:{NFSU2_TR(0x61330f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e90ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613315:{NFSU2_TR(0x613315);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61331b:{NFSU2_TR(0x61331b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613321:{NFSU2_TR(0x613321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613327:{NFSU2_TR(0x613327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e94ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61332d:{NFSU2_TR(0x61332d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613333:{NFSU2_TR(0x613333);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ed4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613339:{NFSU2_TR(0x613339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61333f:{NFSU2_TR(0x61333f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613345:{NFSU2_TR(0x613345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61334b:{NFSU2_TR(0x61334b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B613351:{NFSU2_TR(0x613351);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_613465(ARGS);}}
}
B613357:L613357:{bud-=2;NFSU2_TR(0x613357);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61335d:{NFSU2_TR(0x61335d);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_613360(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613360(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613360:L613360:{bud-=5;NFSU2_TR(0x613360);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B613363:{NFSU2_TR(0x613363);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613365:{NFSU2_TR(0x613365);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B613369:{NFSU2_TR(0x613369);
u8 U[1];
__builtin_memmove((U+0),(G+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B61336b:{NFSU2_TR(0x61336b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613370ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1c0u);}[[clang::musttail]] return blk_43c1c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613370(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613370:L613370:{bud-=4;NFSU2_TR(0x613370);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B613373:{NFSU2_TR(0x613373);
__builtin_memmove((G+4),gp(0x8039ac),4);
}
B613379:{NFSU2_TR(0x613379);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61337a:{NFSU2_TR(0x61337a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61337full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61337f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61337f:L61337f:{bud-=11;NFSU2_TR(0x61337f);
{u32 ea_=u32(u32(8403372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613385:{NFSU2_TR(0x613385);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61338b:{NFSU2_TR(0x61338b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613391:{NFSU2_TR(0x613391);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B613395:{NFSU2_TR(0x613395);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613398:{NFSU2_TR(0x613398);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B61339a:{NFSU2_TR(0x61339a);
{u32 ea_=u32(u32(8403384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6133a0:{NFSU2_TR(0x6133a0);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6133a3:{NFSU2_TR(0x6133a3);
__builtin_memmove((G+4),gp(0x8039b0),4);
}
B6133a9:{NFSU2_TR(0x6133a9);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6133aa:{NFSU2_TR(0x6133aa);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6133afull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6133af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6133af:L6133af:{bud-=11;NFSU2_TR(0x6133af);
{u32 ea_=u32(u32(8403376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6133b5:{NFSU2_TR(0x6133b5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6133bb:{NFSU2_TR(0x6133bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6133c1:{NFSU2_TR(0x6133c1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6133c3:{NFSU2_TR(0x6133c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6133c6:{NFSU2_TR(0x6133c6);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6133c8:{NFSU2_TR(0x6133c8);
{u32 ea_=u32(u32(9051452u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6133ce:{NFSU2_TR(0x6133ce);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6133d5:{NFSU2_TR(0x6133d5);
__builtin_memmove((G+0),gp(0x8039b4),4);
}
B6133da:{NFSU2_TR(0x6133da);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6133db:{NFSU2_TR(0x6133db);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6133e0ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6133e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6133e0:L6133e0:{bud-=37;NFSU2_TR(0x6133e0);
{u32 ea_=u32(u32(9051456u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6133e6:{NFSU2_TR(0x6133e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6133ec:{NFSU2_TR(0x6133ec);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B6133ee:{NFSU2_TR(0x6133ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B6133f1:{NFSU2_TR(0x6133f1);
{u32 ea_=u32(r4(R+24)+r4(G+4)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6133f8:{NFSU2_TR(0x6133f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6133fe:{NFSU2_TR(0x6133fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613404:{NFSU2_TR(0x613404);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B613408:{NFSU2_TR(0x613408);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B61340b:{NFSU2_TR(0x61340b);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61340f:{NFSU2_TR(0x61340f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B613412:{NFSU2_TR(0x613412);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613416:{NFSU2_TR(0x613416);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B613418:{NFSU2_TR(0x613418);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61341c:{NFSU2_TR(0x61341c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61341e:{NFSU2_TR(0x61341e);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B613422:{NFSU2_TR(0x613422);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B613425:{NFSU2_TR(0x613425);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B613427:{NFSU2_TR(0x613427);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+4)),r4(U+0));
}
B613429:{NFSU2_TR(0x613429);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61342c:{NFSU2_TR(0x61342c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B61342d:{NFSU2_TR(0x61342d);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613430:{NFSU2_TR(0x613430);
w4(G+4,u32(0xaull));
}
B613435:{NFSU2_TR(0x613435);
u8 U[56];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x613435);w8(U+40,u64(x_/y_));}
w4(G+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x613435);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B613437:{NFSU2_TR(0x613437);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61343b:{NFSU2_TR(0x61343b);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B61343e:{NFSU2_TR(0x61343e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B613441:{NFSU2_TR(0x613441);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B613444:{NFSU2_TR(0x613444);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x512ull))));
}
B61344a:{NFSU2_TR(0x61344a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B61344d:{NFSU2_TR(0x61344d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B61344f:{NFSU2_TR(0x61344f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffcbull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613452:{NFSU2_TR(0x613452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613458:{NFSU2_TR(0x613458);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B613459:{NFSU2_TR(0x613459);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61345b:{NFSU2_TR(0x61345b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61345f:{NFSU2_TR(0x61345f);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x613360u);}[[clang::musttail]] return blk_613360(ARGS);}}
{[[clang::musttail]] return blk_613465(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613465(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613465:L613465:{bud-=2;NFSU2_TR(0x613465);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5124ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61346b:{NFSU2_TR(0x61346b);
w4(R+12,u32(0xaull));
{[[clang::musttail]] return blk_613470(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613470(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613470:L613470:{bud-=3;NFSU2_TR(0x613470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613476:{NFSU2_TR(0x613476);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613477:{NFSU2_TR(0x613477);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61347cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61347c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61347c:L61347c:{bud-=7;NFSU2_TR(0x61347c);
{u32 ea_=u32(r4(R+24)+u32(19984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613482:{NFSU2_TR(0x613482);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613488:{NFSU2_TR(0x613488);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B61348a:{NFSU2_TR(0x61348a);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61348d:{NFSU2_TR(0x61348d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613493:{NFSU2_TR(0x613493);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613494:{NFSU2_TR(0x613494);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613499ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613499(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613499:L613499:{bud-=7;NFSU2_TR(0x613499);
{u32 ea_=u32(r4(R+24)+u32(19988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61349f:{NFSU2_TR(0x61349f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6134a5:{NFSU2_TR(0x6134a5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6134a7:{NFSU2_TR(0x6134a7);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6134a9:{NFSU2_TR(0x6134a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6134af:{NFSU2_TR(0x6134af);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6134b0:{NFSU2_TR(0x6134b0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6134b5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6134b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6134b5:L6134b5:{bud-=8;NFSU2_TR(0x6134b5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6134b7:{NFSU2_TR(0x6134b7);
{u32 ea_=u32(r4(R+24)+u32(20080u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6134bd:{NFSU2_TR(0x6134bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0xc7c34ff3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6134c4:{NFSU2_TR(0x6134c4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B6134c7:{NFSU2_TR(0x6134c7);
w1(F+0,carry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6134ca:{NFSU2_TR(0x6134ca);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6134cb:{NFSU2_TR(0x6134cb);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6134ce:{NFSU2_TR(0x6134ce);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x613470u);}[[clang::musttail]] return blk_613470(ARGS);}}
}
B6134d0:L6134d0:{bud-=6;NFSU2_TR(0x6134d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6134d1:{NFSU2_TR(0x6134d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6134d2:{NFSU2_TR(0x6134d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6134d3:{NFSU2_TR(0x6134d3);
__builtin_memmove((G+16),(R+20),4);
}
B6134d5:{NFSU2_TR(0x6134d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6134d6:{NFSU2_TR(0x6134d6);
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
PN u32 blk_6134e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6134e0:L6134e0:{bud-=3;NFSU2_TR(0x6134e0);
__builtin_memmove((G+0),gp(0x8a1d48),4);
}
B6134e5:{NFSU2_TR(0x6134e5);
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
B6134e7:{NFSU2_TR(0x6134e7);
if(r1(F+6)){{[[clang::musttail]] return blk_6134f0(ARGS);}}
}
B6134e9:L6134e9:{bud-=2;NFSU2_TR(0x6134e9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6134ef:{NFSU2_TR(0x6134ef);
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
PN u32 blk_6134f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6134f0:L6134f0:{bud-=3;NFSU2_TR(0x6134f0);
__builtin_memmove((G+0),gp(0x89e7e6),1);
}
B6134f5:{NFSU2_TR(0x6134f5);
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
B6134f7:{NFSU2_TR(0x6134f7);
if(r1(F+6)){{[[clang::musttail]] return blk_613500(ARGS);}}
}
B6134f9:L6134f9:{bud-=2;NFSU2_TR(0x6134f9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6134ff:{NFSU2_TR(0x6134ff);
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
PN u32 blk_613500(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613500:L613500:{bud-=8;NFSU2_TR(0x613500);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613506:{NFSU2_TR(0x613506);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613507:{NFSU2_TR(0x613507);
{u32 ea_=u32(u32(8021944u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B61350d:{NFSU2_TR(0x61350d);
{u32 ea_=u32(r4(G+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613511:{NFSU2_TR(0x613511);
{u32 ea_=u32(u32(8021948u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B613517:{NFSU2_TR(0x613517);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613519:{NFSU2_TR(0x613519);
{u32 ea_=u32(r4(G+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61351c:{NFSU2_TR(0x61351c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613521ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x401020u);}[[clang::musttail]] return blk_401020(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613521(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613521:L613521:{bud-=2;NFSU2_TR(0x613521);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613522:{NFSU2_TR(0x613522);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613527ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c370u);}[[clang::musttail]] return blk_43c370(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613527(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613527:L613527:{bud-=6;NFSU2_TR(0x613527);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61352d:{NFSU2_TR(0x61352d);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x8ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B613530:{NFSU2_TR(0x613530);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613536:{NFSU2_TR(0x613536);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B613538:{NFSU2_TR(0x613538);
{u32 ea_=u32(u32(9039944u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61353e:{NFSU2_TR(0x61353e);
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
PN u32 blk_613540(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613540:L613540:{bud-=11;NFSU2_TR(0x613540);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613541:{NFSU2_TR(0x613541);
__builtin_memmove((R+20),(G+16),4);
}
B613543:{NFSU2_TR(0x613543);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B613546:{NFSU2_TR(0x613546);
u8 U[6];
w1(F+0,u8((r4(G+16))<(u32(0x58ull))));
w1(F+11,sborrow<u32>(r4(G+16),u32(0x58ull)));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x58ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B613549:{NFSU2_TR(0x613549);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61354c:{NFSU2_TR(0x61354c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61354d:{NFSU2_TR(0x61354d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61354e:{NFSU2_TR(0x61354e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61354f:{NFSU2_TR(0x61354f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B613553:{NFSU2_TR(0x613553);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613554:{NFSU2_TR(0x613554);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613559ull));
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
PN u32 blk_613559(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613559:L613559:{bud-=4;NFSU2_TR(0x613559);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61355c:{NFSU2_TR(0x61355c);
{u32 ea_=u32(u32(9051472u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613562:{NFSU2_TR(0x613562);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613568:{NFSU2_TR(0x613568);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61356dull));
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
PN u32 blk_61356d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61356d:L61356d:{bud-=10;NFSU2_TR(0x61356d);
__builtin_memmove((G+4),(G+0),4);
}
B61356f:{NFSU2_TR(0x61356f);
w4(G+0,u32(0xb60b60b7ull));
}
B613574:{NFSU2_TR(0x613574);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B613576:{NFSU2_TR(0x613576);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B613578:{NFSU2_TR(0x613578);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B61357b:{NFSU2_TR(0x61357b);
__builtin_memmove((G+0),(R+8),4);
}
B61357d:{NFSU2_TR(0x61357d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B613580:{NFSU2_TR(0x613580);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B613582:{NFSU2_TR(0x613582);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613583:{NFSU2_TR(0x613583);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613588ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c2b0u);}[[clang::musttail]] return blk_43c2b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613588(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613588:L613588:{bud-=5;NFSU2_TR(0x613588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61358b:{NFSU2_TR(0x61358b);
{u32 ea_=u32(u32(8403576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613591:{NFSU2_TR(0x613591);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613592:{NFSU2_TR(0x613592);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613596:{NFSU2_TR(0x613596);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61359bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c780u);}[[clang::musttail]] return blk_43c780(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61359b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61359b:L61359b:{bud-=9;NFSU2_TR(0x61359b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61359e:{NFSU2_TR(0x61359e);
s4(0x8a4270,u32(0x3f800000ull));
}
B6135a8:{NFSU2_TR(0x6135a8);
s4(0x8a4274,u32(0x0ull));
}
B6135b2:{NFSU2_TR(0x6135b2);
s4(0x8a4278,u32(0x0ull));
}
B6135bc:{NFSU2_TR(0x6135bc);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6135bf:{NFSU2_TR(0x6135bf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x5100ull))));
}
B6135c5:{NFSU2_TR(0x6135c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6135c6:{NFSU2_TR(0x6135c6);
u8 U[4];
w4(U+0,u32(0x8a4270ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6135cb:{NFSU2_TR(0x6135cb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6135d0ull));
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
PN u32 blk_6135d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6135d0:L6135d0:{bud-=39;NFSU2_TR(0x6135d0);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6135d4:{NFSU2_TR(0x6135d4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6135d6:{NFSU2_TR(0x6135d6);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6135da:{NFSU2_TR(0x6135da);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6135dc:{NFSU2_TR(0x6135dc);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6135e0:{NFSU2_TR(0x6135e0);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6135e4:{NFSU2_TR(0x6135e4);
{u32 ea_=u32(u32(9060984u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6135ea:{NFSU2_TR(0x6135ea);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6135ee:{NFSU2_TR(0x6135ee);
{u32 ea_=u32(u32(9060976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6135f4:{NFSU2_TR(0x6135f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6135f6:{NFSU2_TR(0x6135f6);
{u32 ea_=u32(u32(9060980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6135fc:{NFSU2_TR(0x6135fc);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B6135fe:{NFSU2_TR(0x6135fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613600:{NFSU2_TR(0x613600);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B613602:{NFSU2_TR(0x613602);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613606:{NFSU2_TR(0x613606);
{u32 ea_=u32(u32(9060984u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61360c:{NFSU2_TR(0x61360c);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613610:{NFSU2_TR(0x613610);
{u32 ea_=u32(u32(9060980u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613616:{NFSU2_TR(0x613616);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613618:{NFSU2_TR(0x613618);
{u32 ea_=u32(u32(9060976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61361e:{NFSU2_TR(0x61361e);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613622:{NFSU2_TR(0x613622);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613624:{NFSU2_TR(0x613624);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613628:{NFSU2_TR(0x613628);
{u32 ea_=u32(u32(9060984u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61362e:{NFSU2_TR(0x61362e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613632:{NFSU2_TR(0x613632);
{u32 ea_=u32(u32(9060980u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613638:{NFSU2_TR(0x613638);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61363a:{NFSU2_TR(0x61363a);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61363e:{NFSU2_TR(0x61363e);
{u32 ea_=u32(u32(9060976u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613644:{NFSU2_TR(0x613644);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613646:{NFSU2_TR(0x613646);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61364a:{NFSU2_TR(0x61364a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61364e:{NFSU2_TR(0x61364e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613650:{NFSU2_TR(0x613650);
__builtin_memmove(gp(0x8a4278),(G+0),4);
}
B613655:{NFSU2_TR(0x613655);
{u32 ea_=u32(u32(9060976u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61365b:{NFSU2_TR(0x61365b);
{u32 ea_=u32(u32(9060980u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613661:{NFSU2_TR(0x613661);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613665:{NFSU2_TR(0x613665);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61366b:{NFSU2_TR(0x61366b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613670ull));
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
PN u32 blk_613670(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613670:L613670:{bud-=13;NFSU2_TR(0x613670);
__builtin_memmove((G+4),(G+0),4);
}
B613672:{NFSU2_TR(0x613672);
w4(G+0,u32(0xb60b60b7ull));
}
B613677:{NFSU2_TR(0x613677);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B613679:{NFSU2_TR(0x613679);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B61367b:{NFSU2_TR(0x61367b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B61367e:{NFSU2_TR(0x61367e);
__builtin_memmove((G+4),(R+8),4);
}
B613680:{NFSU2_TR(0x613680);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B613683:{NFSU2_TR(0x613683);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B613685:{NFSU2_TR(0x613685);
__builtin_memmove((R+28),(R+8),4);
}
B613687:{NFSU2_TR(0x613687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613688:{NFSU2_TR(0x613688);
u8 U[4];
w4(U+0,u32(0x8a4270ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61368d:{NFSU2_TR(0x61368d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61368e:{NFSU2_TR(0x61368e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613693ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5ba8b0u);}[[clang::musttail]] return blk_5ba8b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613693(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613693:L613693:{bud-=4;NFSU2_TR(0x613693);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613694:{NFSU2_TR(0x613694);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613695:{NFSU2_TR(0x613695);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613696:{NFSU2_TR(0x613696);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61369bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bae60u);}[[clang::musttail]] return blk_5bae60(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61369b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61369b:L61369b:{bud-=6;NFSU2_TR(0x61369b);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x30ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x30ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61369e:{NFSU2_TR(0x61369e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61369f:{NFSU2_TR(0x61369f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6136a0:{NFSU2_TR(0x6136a0);
__builtin_memmove((G+16),(R+20),4);
}
B6136a2:{NFSU2_TR(0x6136a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6136a3:{NFSU2_TR(0x6136a3);
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
PN u32 blk_6136b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6136b0:L6136b0:{bud-=17;NFSU2_TR(0x6136b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6136b1:{NFSU2_TR(0x6136b1);
__builtin_memmove((R+20),(G+16),4);
}
B6136b3:{NFSU2_TR(0x6136b3);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B6136b6:{NFSU2_TR(0x6136b6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x24ull))));
}
B6136b9:{NFSU2_TR(0x6136b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6136ba:{NFSU2_TR(0x6136ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6136bb:{NFSU2_TR(0x6136bb);
__builtin_memmove((R+24),(G+4),4);
}
B6136bd:{NFSU2_TR(0x6136bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6136c3:{NFSU2_TR(0x6136c3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6136c6:{NFSU2_TR(0x6136c6);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B6136c7:{NFSU2_TR(0x6136c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6136c8:{NFSU2_TR(0x6136c8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6136cb:{NFSU2_TR(0x6136cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6136ce:{NFSU2_TR(0x6136ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8a318cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6136d4:{NFSU2_TR(0x6136d4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6136d6:{NFSU2_TR(0x6136d6);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6136d8:{NFSU2_TR(0x6136d8);
if(r1(F+6)){{[[clang::musttail]] return blk_61376b(ARGS);}}
}
B6136de:L6136de:{bud-=8;NFSU2_TR(0x6136de);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6136e2:{NFSU2_TR(0x6136e2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6136e3:{NFSU2_TR(0x6136e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6136e7:{NFSU2_TR(0x6136e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6136e8:{NFSU2_TR(0x6136e8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6136e9:{NFSU2_TR(0x6136e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6136ed:{NFSU2_TR(0x6136ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6136f1:{NFSU2_TR(0x6136f1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6136f6ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x5f0c50u);}[[clang::musttail]] return blk_5f0c50(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6136f6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6136f6:L6136f6:{bud-=9;NFSU2_TR(0x6136f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6136fa:{NFSU2_TR(0x6136fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6136fe:{NFSU2_TR(0x6136fe);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B613701:{NFSU2_TR(0x613701);
u8 U[4];
w4(U+0,u32(0x42480000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613706:{NFSU2_TR(0x613706);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613707:{NFSU2_TR(0x613707);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8a3180ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61370d:{NFSU2_TR(0x61370d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61370e:{NFSU2_TR(0x61370e);
__builtin_memmove((G+4),(R+28),4);
}
B613710:{NFSU2_TR(0x613710);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613715ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5fa660u);}[[clang::musttail]] return blk_5fa660(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613715(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613715:L613715:{bud-=3;NFSU2_TR(0x613715);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613716:{NFSU2_TR(0x613716);
__builtin_memmove((G+4),(R+28),4);
}
B613718:{NFSU2_TR(0x613718);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61371dull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5f0b40u);}[[clang::musttail]] return blk_5f0b40(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61371d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61371d:L61371d:{bud-=4;NFSU2_TR(0x61371d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61371f:{NFSU2_TR(0x61371f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613721:{NFSU2_TR(0x613721);
__builtin_memmove((G+4),(R+28),4);
}
B613723:{NFSU2_TR(0x613723);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613728ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5f0b40u);}[[clang::musttail]] return blk_5f0b40(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613728(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613728:L613728:{bud-=2;NFSU2_TR(0x613728);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61372e:{NFSU2_TR(0x61372e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613733ull));
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
PN u32 blk_613733(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613733:L613733:{bud-=11;NFSU2_TR(0x613733);
__builtin_memmove((G+4),(G+0),4);
}
B613735:{NFSU2_TR(0x613735);
w4(G+0,u32(0xb60b60b7ull));
}
B61373a:{NFSU2_TR(0x61373a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B61373c:{NFSU2_TR(0x61373c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B61373e:{NFSU2_TR(0x61373e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B613741:{NFSU2_TR(0x613741);
__builtin_memmove((G+0),(R+8),4);
}
B613743:{NFSU2_TR(0x613743);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B613746:{NFSU2_TR(0x613746);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B613748:{NFSU2_TR(0x613748);
__builtin_memmove((R+28),(R+8),4);
}
B61374a:{NFSU2_TR(0x61374a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61374b:{NFSU2_TR(0x61374b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613750ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c2b0u);}[[clang::musttail]] return blk_43c2b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613750(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613750:L613750:{bud-=3;NFSU2_TR(0x613750);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613751:{NFSU2_TR(0x613751);
{u32 ea_=u32(r4(R+24)+u32(20736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613757:{NFSU2_TR(0x613757);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61375cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c370u);}[[clang::musttail]] return blk_43c370(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61375c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61375c:L61375c:{bud-=3;NFSU2_TR(0x61375c);
{u32 ea_=u32(r4(R+24)+u32(20740u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613762:{NFSU2_TR(0x613762);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B613765:{NFSU2_TR(0x613765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_61376b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61376b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61376b:L61376b:{bud-=45;NFSU2_TR(0x61376b);
{u32 ea_=u32(u32(8403588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613771:{NFSU2_TR(0x613771);
__builtin_memmove((G+0),gp(0x803e60),4);
}
B613776:{NFSU2_TR(0x613776);
w1(F+0,u8((r4(G+0))<(r4(R+12))));
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+12))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B613778:{NFSU2_TR(0x613778);
{u32 ea_=u32(u32(8403588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61377e:{NFSU2_TR(0x61377e);
{u32 ea_=u32(r4(R+24)+u32(20736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613784:{NFSU2_TR(0x613784);
{u32 ea_=u32(r4(R+24)+u32(20736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61378a:{NFSU2_TR(0x61378a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B61378c:{NFSU2_TR(0x61378c);
{u32 ea_=u32(r4(R+24)+u32(20740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613792:{NFSU2_TR(0x613792);
{u32 ea_=u32(r4(R+24)+u32(20740u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613798:{NFSU2_TR(0x613798);
{u32 ea_=u32(r4(R+24)+u32(20744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61379e:{NFSU2_TR(0x61379e);
{u32 ea_=u32(r4(R+24)+u32(20744u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6137a4:{NFSU2_TR(0x6137a4);
{u32 ea_=u32(r4(R+24)+u32(20592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6137aa:{NFSU2_TR(0x6137aa);
{u32 ea_=u32(r4(R+24)+u32(20744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6137b0:{NFSU2_TR(0x6137b0);
{u32 ea_=u32(r4(R+24)+u32(20576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6137b6:{NFSU2_TR(0x6137b6);
{u32 ea_=u32(r4(R+24)+u32(20740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6137bc:{NFSU2_TR(0x6137bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6137be:{NFSU2_TR(0x6137be);
{u32 ea_=u32(r4(R+24)+u32(20736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6137c4:{NFSU2_TR(0x6137c4);
{u32 ea_=u32(r4(R+24)+u32(20560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6137ca:{NFSU2_TR(0x6137ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6137cc:{NFSU2_TR(0x6137cc);
{u32 ea_=u32(r4(R+24)+u32(20608u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6137d2:{NFSU2_TR(0x6137d2);
{u32 ea_=u32(r4(R+24)+u32(20564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6137d8:{NFSU2_TR(0x6137d8);
{u32 ea_=u32(r4(R+24)+u32(20736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6137de:{NFSU2_TR(0x6137de);
{u32 ea_=u32(r4(R+24)+u32(20596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6137e4:{NFSU2_TR(0x6137e4);
{u32 ea_=u32(r4(R+24)+u32(20744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6137ea:{NFSU2_TR(0x6137ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6137ec:{NFSU2_TR(0x6137ec);
{u32 ea_=u32(r4(R+24)+u32(20580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6137f2:{NFSU2_TR(0x6137f2);
{u32 ea_=u32(r4(R+24)+u32(20740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6137f8:{NFSU2_TR(0x6137f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6137fa:{NFSU2_TR(0x6137fa);
{u32 ea_=u32(r4(R+24)+u32(20612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613800:{NFSU2_TR(0x613800);
{u32 ea_=u32(r4(R+24)+u32(20568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613806:{NFSU2_TR(0x613806);
{u32 ea_=u32(r4(R+24)+u32(20736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61380c:{NFSU2_TR(0x61380c);
{u32 ea_=u32(r4(R+24)+u32(20600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613812:{NFSU2_TR(0x613812);
{u32 ea_=u32(r4(R+24)+u32(20744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613818:{NFSU2_TR(0x613818);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61381a:{NFSU2_TR(0x61381a);
{u32 ea_=u32(r4(R+24)+u32(20584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613820:{NFSU2_TR(0x613820);
{u32 ea_=u32(r4(R+24)+u32(20740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613826:{NFSU2_TR(0x613826);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613828:{NFSU2_TR(0x613828);
{u32 ea_=u32(r4(R+24)+u32(20616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61382e:{NFSU2_TR(0x61382e);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613832:{NFSU2_TR(0x613832);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613836:{NFSU2_TR(0x613836);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613838:{NFSU2_TR(0x613838);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5108ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61383e:{NFSU2_TR(0x61383e);
{u32 ea_=u32(r4(R+24)+u32(20736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613844:{NFSU2_TR(0x613844);
{u32 ea_=u32(r4(R+24)+u32(20740u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61384a:{NFSU2_TR(0x61384a);
if(r1(F+6)){{[[clang::musttail]] return blk_613973(ARGS);}}
}
B613850:L613850:{bud-=2;NFSU2_TR(0x613850);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B613851:{NFSU2_TR(0x613851);
if(r1(F+6)){{[[clang::musttail]] return blk_613906(ARGS);}}
}
B613857:L613857:{bud-=2;NFSU2_TR(0x613857);
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
B613858:{NFSU2_TR(0x613858);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_613999(ARGS);}}
}
B61385e:L61385e:{bud-=2;NFSU2_TR(0x61385e);
u8 U[4];
w4(U+0,u32(0x40a00000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613863:{NFSU2_TR(0x613863);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613868ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613868(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613868:L613868:{bud-=6;NFSU2_TR(0x613868);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61386e:{NFSU2_TR(0x61386e);
u8 U[4];
w4(U+0,u32(0x3d4ccccdull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613873:{NFSU2_TR(0x613873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ed4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613879:{NFSU2_TR(0x613879);
{u32 ea_=u32(r4(R+24)+u32(20176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61387f:{NFSU2_TR(0x61387f);
s4(0x803e60,u32(0x1ull));
}
B613889:{NFSU2_TR(0x613889);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61388eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61388e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61388e:L61388e:{bud-=5;NFSU2_TR(0x61388e);
{u32 ea_=u32(u32(8029460u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613894:{NFSU2_TR(0x613894);
u8 U[4];
w4(U+0,u32(0x3d4ccccdull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613899:{NFSU2_TR(0x613899);
{u32 ea_=u32(u32(8403584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61389f:{NFSU2_TR(0x61389f);
{u32 ea_=u32(r4(R+24)+u32(20160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6138a5:{NFSU2_TR(0x6138a5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6138aaull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c1f0u);}[[clang::musttail]] return blk_43c1f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6138aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6138aa:L6138aa:{bud-=21;NFSU2_TR(0x6138aa);
{u32 ea_=u32(u32(8029460u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6138b0:{NFSU2_TR(0x6138b0);
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
B6138b3:{NFSU2_TR(0x6138b3);
{u32 ea_=u32(u32(8403584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6138b9:{NFSU2_TR(0x6138b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ec8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6138bf:{NFSU2_TR(0x6138bf);
{u32 ea_=u32(r4(R+24)+u32(20164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6138c5:{NFSU2_TR(0x6138c5);
{u32 ea_=u32(r4(R+24)+u32(20740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6138cb:{NFSU2_TR(0x6138cb);
{u32 ea_=u32(r4(R+24)+u32(20744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6138d1:{NFSU2_TR(0x6138d1);
{u32 ea_=u32(r4(R+24)+u32(20736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6138d7:{NFSU2_TR(0x6138d7);
{u32 ea_=u32(r4(R+24)+u32(20160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6138dd:{NFSU2_TR(0x6138dd);
{u32 ea_=u32(r4(R+24)+u32(20160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6138e3:{NFSU2_TR(0x6138e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6138e5:{NFSU2_TR(0x6138e5);
{u32 ea_=u32(r4(R+24)+u32(20164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6138eb:{NFSU2_TR(0x6138eb);
{u32 ea_=u32(r4(R+24)+u32(20164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6138f1:{NFSU2_TR(0x6138f1);
{u32 ea_=u32(r4(R+24)+u32(20168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6138f7:{NFSU2_TR(0x6138f7);
{u32 ea_=u32(r4(R+24)+u32(20168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6138fd:{NFSU2_TR(0x6138fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6138fe:{NFSU2_TR(0x6138fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6138ff:{NFSU2_TR(0x6138ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B613900:{NFSU2_TR(0x613900);
__builtin_memmove((G+16),(R+20),4);
}
B613902:{NFSU2_TR(0x613902);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B613903:{NFSU2_TR(0x613903);
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
PN u32 blk_613906(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613906:L613906:{bud-=18;NFSU2_TR(0x613906);
{u32 ea_=u32(r4(R+24)+u32(20160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61390c:{NFSU2_TR(0x61390c);
{u32 ea_=u32(r4(R+24)+u32(20144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613912:{NFSU2_TR(0x613912);
{u32 ea_=u32(r4(R+24)+u32(20164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613918:{NFSU2_TR(0x613918);
{u32 ea_=u32(r4(R+24)+u32(20148u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61391e:{NFSU2_TR(0x61391e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613920:{NFSU2_TR(0x613920);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613923:{NFSU2_TR(0x613923);
{u32 ea_=u32(r4(R+24)+u32(20144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613929:{NFSU2_TR(0x613929);
{u32 ea_=u32(r4(R+24)+u32(20144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61392f:{NFSU2_TR(0x61392f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613932:{NFSU2_TR(0x613932);
{u32 ea_=u32(r4(R+24)+u32(20148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613938:{NFSU2_TR(0x613938);
{u32 ea_=u32(r4(R+24)+u32(20148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61393e:{NFSU2_TR(0x61393e);
{u32 ea_=u32(u32(9061604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613944:{NFSU2_TR(0x613944);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613947:{NFSU2_TR(0x613947);
{u32 ea_=u32(u32(9061604u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61394d:{NFSU2_TR(0x61394d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B613953:{NFSU2_TR(0x613953);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B613955:{NFSU2_TR(0x613955);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B613958:{NFSU2_TR(0x613958);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_613999(ARGS);}}
}
B61395a:L61395a:{bud-=8;NFSU2_TR(0x61395a);
s4(0x8a44e4,u32(0x0ull));
}
B613964:{NFSU2_TR(0x613964);
__builtin_memmove(gp(0x803e60),(R+12),4);
}
B61396a:{NFSU2_TR(0x61396a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61396b:{NFSU2_TR(0x61396b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61396c:{NFSU2_TR(0x61396c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61396d:{NFSU2_TR(0x61396d);
__builtin_memmove((G+16),(R+20),4);
}
B61396f:{NFSU2_TR(0x61396f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B613970:{NFSU2_TR(0x613970);
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
PN u32 blk_613973(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613973:L613973:{bud-=7;NFSU2_TR(0x613973);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613976:{NFSU2_TR(0x613976);
{u32 ea_=u32(r4(R+24)+u32(20180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61397c:{NFSU2_TR(0x61397c);
{u32 ea_=u32(r4(R+24)+u32(20180u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B613982:{NFSU2_TR(0x613982);
{u32 ea_=u32(r4(R+24)+u32(20176u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B613988:{NFSU2_TR(0x613988);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B61398a:{NFSU2_TR(0x61398a);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B61398d:{NFSU2_TR(0x61398d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_613999(ARGS);}}
}
B61398f:L61398f:{bud-=1;NFSU2_TR(0x61398f);
s4(0x803e60,u32(0x2ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_613999(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613999(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613999:L613999:{bud-=6;NFSU2_TR(0x613999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61399a:{NFSU2_TR(0x61399a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61399b:{NFSU2_TR(0x61399b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61399c:{NFSU2_TR(0x61399c);
__builtin_memmove((G+16),(R+20),4);
}
B61399e:{NFSU2_TR(0x61399e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61399f:{NFSU2_TR(0x61399f);
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
PN u32 blk_6139b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6139b0:L6139b0:{bud-=5;NFSU2_TR(0x6139b0);
__builtin_memmove((G+0),gp(0x8a1d38),4);
}
B6139b5:{NFSU2_TR(0x6139b5);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6139b7:{NFSU2_TR(0x6139b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6139b8:{NFSU2_TR(0x6139b8);
__builtin_memmove((R+24),(G+4),4);
}
B6139ba:{NFSU2_TR(0x6139ba);
if(r1(F+6)){{[[clang::musttail]] return blk_6139c9(ARGS);}}
}
B6139bc:L6139bc:{bud-=3;NFSU2_TR(0x6139bc);
__builtin_memmove((G+0),gp(0x803968),4);
}
B6139c1:{NFSU2_TR(0x6139c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6139c7:{NFSU2_TR(0x6139c7);
{[[clang::musttail]] return blk_6139d3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6139c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6139c9:L6139c9:{bud-=2;NFSU2_TR(0x6139c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6139cd:{NFSU2_TR(0x6139cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6139d3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6139d3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6139d3:L6139d3:{bud-=4;NFSU2_TR(0x6139d3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6139d9:{NFSU2_TR(0x6139d9);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6139df:{NFSU2_TR(0x6139df);
{u32 ea_=u32(u32(7906636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6139e5:{NFSU2_TR(0x6139e5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6139eaull));
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
PN u32 blk_6139ea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6139ea:L6139ea:{bud-=15;NFSU2_TR(0x6139ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d30ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6139f0:{NFSU2_TR(0x6139f0);
w4(R+8,u32(0x190ull));
}
B6139f5:{NFSU2_TR(0x6139f5);
u8 U[6];
w1(F+0,u8((r4(R+8))<(r4(G+0))));
w1(F+11,sborrow<u32>(r4(R+8),r4(G+0)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+0))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6139f7:{NFSU2_TR(0x6139f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6139fd:{NFSU2_TR(0x6139fd);
{u32 ea_=u32(r4(R+24)+u32(19764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613a03:{NFSU2_TR(0x613a03);
{u32 ea_=u32(r4(R+24)+u32(19768u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613a09:{NFSU2_TR(0x613a09);
{u32 ea_=u32(r4(R+24)+u32(19772u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613a0f:{NFSU2_TR(0x613a0f);
{u32 ea_=u32(r4(R+24)+u32(19776u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613a15:{NFSU2_TR(0x613a15);
{u32 ea_=u32(r4(R+24)+u32(19780u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613a1b:{NFSU2_TR(0x613a1b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613a21:{NFSU2_TR(0x613a21);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B613a23:{NFSU2_TR(0x613a23);
{u32 ea_=u32(r4(R+24)+u32(19784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613a29:{NFSU2_TR(0x613a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B613a2a:{NFSU2_TR(0x613a2a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B613a2c:{NFSU2_TR(0x613a2c);
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
PN u32 blk_613a30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613a30:L613a30:{bud-=7;NFSU2_TR(0x613a30);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613a31:{NFSU2_TR(0x613a31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613a32:{NFSU2_TR(0x613a32);
__builtin_memmove((R+24),(G+4),4);
}
B613a34:{NFSU2_TR(0x613a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613a3a:{NFSU2_TR(0x613a3a);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B613a40:{NFSU2_TR(0x613a40);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B613a42:{NFSU2_TR(0x613a42);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_613a4a(ARGS);}}
}
B613a44:L613a44:{bud-=1;NFSU2_TR(0x613a44);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_613a4a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613a4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613a4a:L613a4a:{bud-=2;NFSU2_TR(0x613a4a);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613a4e:{NFSU2_TR(0x613a4e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613a53ull));
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
PN u32 blk_613a53(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613a53:L613a53:{bud-=7;NFSU2_TR(0x613a53);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613a57:{NFSU2_TR(0x613a57);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613a5b:{NFSU2_TR(0x613a5b);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+24)+u32(19764u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613a62:{NFSU2_TR(0x613a62);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B613a69:{NFSU2_TR(0x613a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B613a6a:{NFSU2_TR(0x613a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B613a6b:{NFSU2_TR(0x613a6b);
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
PN u32 blk_613a70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613a70:L613a70:{bud-=11;NFSU2_TR(0x613a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613a71:{NFSU2_TR(0x613a71);
__builtin_memmove((R+20),(G+16),4);
}
B613a73:{NFSU2_TR(0x613a73);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B613a76:{NFSU2_TR(0x613a76);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x144ull))));
}
B613a7c:{NFSU2_TR(0x613a7c);
__builtin_memmove((G+0),gp(0x7faa50),4);
}
B613a81:{NFSU2_TR(0x613a81);
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
B613a83:{NFSU2_TR(0x613a83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613a84:{NFSU2_TR(0x613a84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613a85:{NFSU2_TR(0x613a85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613a86:{NFSU2_TR(0x613a86);
__builtin_memmove((R+24),(G+4),4);
}
B613a88:{NFSU2_TR(0x613a88);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61407f(ARGS);}}
}
B613a8e:L613a8e:{bud-=3;NFSU2_TR(0x613a8e);
__builtin_memmove((G+0),gp(0x803a60),4);
}
B613a93:{NFSU2_TR(0x613a93);
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
B613a95:{NFSU2_TR(0x613a95);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61407f(ARGS);}}
}
B613a9b:L613a9b:{bud-=2;NFSU2_TR(0x613a9b);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(F+0,u8((r4(U+6))<(u32(0x6ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B613aa2:{NFSU2_TR(0x613aa2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61407f(ARGS);}}
}
B613aa8:L613aa8:{bud-=43;NFSU2_TR(0x613aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613aae:{NFSU2_TR(0x613aae);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613ab1:{NFSU2_TR(0x613ab1);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613ab4:{NFSU2_TR(0x613ab4);
{u32 ea_=u32(r4(G+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613ab7:{NFSU2_TR(0x613ab7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613aba:{NFSU2_TR(0x613aba);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x50ull))));
}
B613abd:{NFSU2_TR(0x613abd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613ac1:{NFSU2_TR(0x613ac1);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613ac5:{NFSU2_TR(0x613ac5);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613ac9:{NFSU2_TR(0x613ac9);
{u32 ea_=u32(r4(R+24)+u32(20592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613acf:{NFSU2_TR(0x613acf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613ad1:{NFSU2_TR(0x613ad1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B613ad3:{NFSU2_TR(0x613ad3);
{u32 ea_=u32(r4(R+24)+u32(20576u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613ad9:{NFSU2_TR(0x613ad9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613adb:{NFSU2_TR(0x613adb);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613adf:{NFSU2_TR(0x613adf);
{u32 ea_=u32(r4(R+24)+u32(20560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613ae5:{NFSU2_TR(0x613ae5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613ae7:{NFSU2_TR(0x613ae7);
{u32 ea_=u32(r4(R+24)+u32(20608u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613aed:{NFSU2_TR(0x613aed);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613af1:{NFSU2_TR(0x613af1);
{u32 ea_=u32(r4(R+24)+u32(20564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613af7:{NFSU2_TR(0x613af7);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613afb:{NFSU2_TR(0x613afb);
{u32 ea_=u32(r4(R+24)+u32(20596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613b01:{NFSU2_TR(0x613b01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613b03:{NFSU2_TR(0x613b03);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B613b05:{NFSU2_TR(0x613b05);
{u32 ea_=u32(r4(R+24)+u32(20580u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613b0b:{NFSU2_TR(0x613b0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613b0d:{NFSU2_TR(0x613b0d);
{u32 ea_=u32(r4(R+24)+u32(20612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613b13:{NFSU2_TR(0x613b13);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613b17:{NFSU2_TR(0x613b17);
{u32 ea_=u32(r4(R+24)+u32(20568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613b1d:{NFSU2_TR(0x613b1d);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613b21:{NFSU2_TR(0x613b21);
{u32 ea_=u32(r4(R+24)+u32(20600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613b27:{NFSU2_TR(0x613b27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B613b29:{NFSU2_TR(0x613b29);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B613b2b:{NFSU2_TR(0x613b2b);
{u32 ea_=u32(r4(R+24)+u32(20584u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613b31:{NFSU2_TR(0x613b31);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B613b33:{NFSU2_TR(0x613b33);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B613b35:{NFSU2_TR(0x613b35);
{u32 ea_=u32(r4(R+24)+u32(20616u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613b3b:{NFSU2_TR(0x613b3b);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613b3f:{NFSU2_TR(0x613b3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613b43:{NFSU2_TR(0x613b43);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613b47:{NFSU2_TR(0x613b47);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613b4b:{NFSU2_TR(0x613b4b);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613b4f:{NFSU2_TR(0x613b4f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613b54ull));
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
PN u32 blk_613b54(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613b54:L613b54:{bud-=5;NFSU2_TR(0x613b54);
__builtin_memmove((R+12),(G+0),4);
}
B613b56:{NFSU2_TR(0x613b56);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B613b59:{NFSU2_TR(0x613b59);
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
B613b5b:{NFSU2_TR(0x613b5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613b5f:{NFSU2_TR(0x613b5f);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61407f(ARGS);}}
}
B613b65:L613b65:{bud-=4;NFSU2_TR(0x613b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5010ull))));
__builtin_memmove((G+4),(U+0),4);
}
B613b6b:{NFSU2_TR(0x613b6b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613b6c:{NFSU2_TR(0x613b6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613b6d:{NFSU2_TR(0x613b6d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613b72ull));
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
PN u32 blk_613b72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613b72:L613b72:{bud-=4;NFSU2_TR(0x613b72);
{u32 ea_=u32(r4(R+24)+u32(19712u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B613b78:{NFSU2_TR(0x613b78);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B613b7b:{NFSU2_TR(0x613b7b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613b7e:{NFSU2_TR(0x613b7e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613b83ull));
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
PN u32 blk_613b83(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613b83:L613b83:{bud-=5;NFSU2_TR(0x613b83);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d7cull))));
__builtin_memmove((R+28),(U+0),4);
}
B613b89:{NFSU2_TR(0x613b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613b8d:{NFSU2_TR(0x613b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613b95:{NFSU2_TR(0x613b95);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613b99:{NFSU2_TR(0x613b99);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_613ba0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613ba0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613ba0:L613ba0:{bud-=4;NFSU2_TR(0x613ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613ba3:{NFSU2_TR(0x613ba3);
{u32 ea_=u32(r4(R+28)+u32(4294967176u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B613ba6:{NFSU2_TR(0x613ba6);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B613ba8:{NFSU2_TR(0x613ba8);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_613bb0(ARGS);}}
}
B613baa:L613baa:{bud-=1;NFSU2_TR(0x613baa);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_613bb0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613bb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613bb0:L613bb0:{bud-=2;NFSU2_TR(0x613bb0);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B613bb3:{NFSU2_TR(0x613bb3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613bb8ull));
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
PN u32 blk_613bb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613bb8:L613bb8:{bud-=3;NFSU2_TR(0x613bb8);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B613bba:{NFSU2_TR(0x613bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613bbe:{NFSU2_TR(0x613bbe);
if(r1(F+6)){{[[clang::musttail]] return blk_614066(ARGS);}}
}
B613bc4:L613bc4:{bud-=2;NFSU2_TR(0x613bc4);
u8 U[8];
__builtin_memmove((U+0),gp(0x803abc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B613bcb:{NFSU2_TR(0x613bcb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_613beb(ARGS);}}
}
B613bcd:L613bcd:{bud-=8;NFSU2_TR(0x613bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613bd3:{NFSU2_TR(0x613bd3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613bd4:{NFSU2_TR(0x613bd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+0),(U+0),4);
}
B613bd6:{NFSU2_TR(0x613bd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613bd7:{NFSU2_TR(0x613bd7);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613bd8:{NFSU2_TR(0x613bd8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613bd9:{NFSU2_TR(0x613bd9);
w4(G+4,u32(0x872b98ull));
}
B613bde:{NFSU2_TR(0x613bde);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613be3ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bb3f0u);}[[clang::musttail]] return blk_5bb3f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613be3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613be3:L613be3:{bud-=2;NFSU2_TR(0x613be3);
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
B613be5:{NFSU2_TR(0x613be5);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61407f(ARGS);}}
{[[clang::musttail]] return blk_613beb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613beb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613beb:L613beb:{bud-=6;NFSU2_TR(0x613beb);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613bef:{NFSU2_TR(0x613bef);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B613bf1:{NFSU2_TR(0x613bf1);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(G+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B613bf3:{NFSU2_TR(0x613bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613bf7:{NFSU2_TR(0x613bf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613bfb:{NFSU2_TR(0x613bfb);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_614053(ARGS);}}
}
B613c01:L613c01:{bud-=4;NFSU2_TR(0x613c01);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x225ull))));
__builtin_memmove((R+8),(U+0),4);
}
B613c07:{NFSU2_TR(0x613c07);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B613c09:{NFSU2_TR(0x613c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613c0d:{NFSU2_TR(0x613c0d);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_613c10(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613c10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613c10:L613c10:{bud-=2;NFSU2_TR(0x613c10);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B613c17:{NFSU2_TR(0x613c17);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613c1cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bb3b0u);}[[clang::musttail]] return blk_5bb3b0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613c1c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613c1c:L613c1c:{bud-=5;NFSU2_TR(0x613c1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613c20:{NFSU2_TR(0x613c20);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B613c23:{NFSU2_TR(0x613c23);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(r1(G+4))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B613c25:{NFSU2_TR(0x613c25);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B613c2b:{NFSU2_TR(0x613c2b);
if(r1(F+6)){{[[clang::musttail]] return blk_613c33(ARGS);}}
}
B613c2d:L613c2d:{bud-=1;NFSU2_TR(0x613c2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f10ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_613c33(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613c33(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613c33:L613c33:{bud-=8;NFSU2_TR(0x613c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613c36:{NFSU2_TR(0x613c36);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613c3a:{NFSU2_TR(0x613c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613c41:{NFSU2_TR(0x613c41);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613c45:{NFSU2_TR(0x613c45);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(G+0,u32(r1(U+0)));
}
B613c48:{NFSU2_TR(0x613c48);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B613c4a:{NFSU2_TR(0x613c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613c4e:{NFSU2_TR(0x613c4e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_614028(ARGS);}}
}
B613c54:L613c54:{bud-=9;NFSU2_TR(0x613c54);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B613c57:{NFSU2_TR(0x613c57);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B613c59:{NFSU2_TR(0x613c59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613c61:{NFSU2_TR(0x613c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613c69:{NFSU2_TR(0x613c69);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613c71:{NFSU2_TR(0x613c71);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613c79:{NFSU2_TR(0x613c79);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613c81:{NFSU2_TR(0x613c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613c89:{NFSU2_TR(0x613c89);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_613dda(ARGS);}}
}
B613c8f:L613c8f:{bud-=3;NFSU2_TR(0x613c8f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4e88ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B613c96:{NFSU2_TR(0x613c96);
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
B613c98:{NFSU2_TR(0x613c98);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_613d08(ARGS);}}
}
B613c9a:L613c9a:{bud-=10;NFSU2_TR(0x613c9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B613c9e:{NFSU2_TR(0x613c9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613c9f:{NFSU2_TR(0x613c9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B613ca3:{NFSU2_TR(0x613ca3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613ca4:{NFSU2_TR(0x613ca4);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B613ca8:{NFSU2_TR(0x613ca8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613ca9:{NFSU2_TR(0x613ca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613cb1:{NFSU2_TR(0x613cb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613cb9:{NFSU2_TR(0x613cb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B613cc1:{NFSU2_TR(0x613cc1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613cc6ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x43d1e0u);}[[clang::musttail]] return blk_43d1e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613cc6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613cc6:L613cc6:{bud-=18;NFSU2_TR(0x613cc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613cca:{NFSU2_TR(0x613cca);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4dbull))));
__builtin_memmove((R+8),(U+0),4);
}
B613cd0:{NFSU2_TR(0x613cd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B613cd3:{NFSU2_TR(0x613cd3);
{u32 ea_=u32(r4(R+24)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613cd6:{NFSU2_TR(0x613cd6);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B613cd9:{NFSU2_TR(0x613cd9);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613cdd:{NFSU2_TR(0x613cdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613ce0:{NFSU2_TR(0x613ce0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613ce2:{NFSU2_TR(0x613ce2);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613ce6:{NFSU2_TR(0x613ce6);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613cea:{NFSU2_TR(0x613cea);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613cec:{NFSU2_TR(0x613cec);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613cf0:{NFSU2_TR(0x613cf0);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613cf4:{NFSU2_TR(0x613cf4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613cf6:{NFSU2_TR(0x613cf6);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613cfa:{NFSU2_TR(0x613cfa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B613cfc:{NFSU2_TR(0x613cfc);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(19892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613d03:{NFSU2_TR(0x613d03);
{[[clang::musttail]] return blk_613dba(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613d08(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613d08:L613d08:{bud-=25;NFSU2_TR(0x613d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613d0e:{NFSU2_TR(0x613d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613d14:{NFSU2_TR(0x613d14);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B613d18:{NFSU2_TR(0x613d18);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B613d1c:{NFSU2_TR(0x613d1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613d1f:{NFSU2_TR(0x613d1f);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613d22:{NFSU2_TR(0x613d22);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B613d24:{NFSU2_TR(0x613d24);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B613d27:{NFSU2_TR(0x613d27);
{u32 ea_=u32(r4(R+24)+r4(G+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613d2a:{NFSU2_TR(0x613d2a);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B613d2c:{NFSU2_TR(0x613d2c);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613d2f:{NFSU2_TR(0x613d2f);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613d32:{NFSU2_TR(0x613d32);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613d35:{NFSU2_TR(0x613d35);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B613d39:{NFSU2_TR(0x613d39);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613d3c:{NFSU2_TR(0x613d3c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613d3d:{NFSU2_TR(0x613d3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B613d41:{NFSU2_TR(0x613d41);
{u32 ea_=u32(r4(G+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613d48:{NFSU2_TR(0x613d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613d4f:{NFSU2_TR(0x613d4f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613d51:{NFSU2_TR(0x613d51);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613d55:{NFSU2_TR(0x613d55);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613d56:{NFSU2_TR(0x613d56);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613d5a:{NFSU2_TR(0x613d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613d5e:{NFSU2_TR(0x613d5e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613d63ull));
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
PN u32 blk_613d63(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613d63:L613d63:{bud-=7;NFSU2_TR(0x613d63);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B613d67:{NFSU2_TR(0x613d67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613d68:{NFSU2_TR(0x613d68);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B613d6c:{NFSU2_TR(0x613d6c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613d6d:{NFSU2_TR(0x613d6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B613d71:{NFSU2_TR(0x613d71);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613d72:{NFSU2_TR(0x613d72);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613d77ull));
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
PN u32 blk_613d77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613d77:L613d77:{bud-=18;NFSU2_TR(0x613d77);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613d7b:{NFSU2_TR(0x613d7b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4dbull))));
__builtin_memmove((R+8),(U+0),4);
}
B613d81:{NFSU2_TR(0x613d81);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B613d84:{NFSU2_TR(0x613d84);
{u32 ea_=u32(r4(R+24)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613d87:{NFSU2_TR(0x613d87);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
}
B613d8a:{NFSU2_TR(0x613d8a);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613d8e:{NFSU2_TR(0x613d8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613d91:{NFSU2_TR(0x613d91);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613d93:{NFSU2_TR(0x613d93);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613d97:{NFSU2_TR(0x613d97);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613d9b:{NFSU2_TR(0x613d9b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613d9d:{NFSU2_TR(0x613d9d);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613da1:{NFSU2_TR(0x613da1);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613da5:{NFSU2_TR(0x613da5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613da7:{NFSU2_TR(0x613da7);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613dab:{NFSU2_TR(0x613dab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B613dad:{NFSU2_TR(0x613dad);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(19892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613db4:{NFSU2_TR(0x613db4);
{u32 ea_=u32(r4(R+24)+u32(20624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_613dba(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613dba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613dba:L613dba:{bud-=10;NFSU2_TR(0x613dba);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613dbe:{NFSU2_TR(0x613dbe);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613dc0:{NFSU2_TR(0x613dc0);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613dc4:{NFSU2_TR(0x613dc4);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613dc8:{NFSU2_TR(0x613dc8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613dca:{NFSU2_TR(0x613dca);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613dce:{NFSU2_TR(0x613dce);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613dd2:{NFSU2_TR(0x613dd2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B613dd4:{NFSU2_TR(0x613dd4);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613dd8:{NFSU2_TR(0x613dd8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_613dda(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613dda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613dda:L613dda:{bud-=3;NFSU2_TR(0x613dda);
__builtin_memmove((G+0),gp(0x803abc),4);
}
B613ddf:{NFSU2_TR(0x613ddf);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B613de1:{NFSU2_TR(0x613de1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_613f8b(ARGS);}}
}
B613de7:L613de7:{bud-=103;NFSU2_TR(0x613de7);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613deb:{NFSU2_TR(0x613deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613df1:{NFSU2_TR(0x613df1);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613df5:{NFSU2_TR(0x613df5);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B613df9:{NFSU2_TR(0x613df9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613dfc:{NFSU2_TR(0x613dfc);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B613dfe:{NFSU2_TR(0x613dfe);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B613e05:{NFSU2_TR(0x613e05);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e09:{NFSU2_TR(0x613e09);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613e0d:{NFSU2_TR(0x613e0d);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B613e14:{NFSU2_TR(0x613e14);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e18:{NFSU2_TR(0x613e18);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613e1c:{NFSU2_TR(0x613e1c);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B613e20:{NFSU2_TR(0x613e20);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e22:{NFSU2_TR(0x613e22);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613e29:{NFSU2_TR(0x613e29);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e2c:{NFSU2_TR(0x613e2c);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613e33:{NFSU2_TR(0x613e33);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e36:{NFSU2_TR(0x613e36);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B613e38:{NFSU2_TR(0x613e38);
{u32 ea_=u32(r4(G+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613e3f:{NFSU2_TR(0x613e3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613e46:{NFSU2_TR(0x613e46);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613e48:{NFSU2_TR(0x613e48);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613e4a:{NFSU2_TR(0x613e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613e4d:{NFSU2_TR(0x613e4d);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613e50:{NFSU2_TR(0x613e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613e56:{NFSU2_TR(0x613e56);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B613e5a:{NFSU2_TR(0x613e5a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B613e5c:{NFSU2_TR(0x613e5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613e5f:{NFSU2_TR(0x613e5f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e63:{NFSU2_TR(0x613e63);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B613e65:{NFSU2_TR(0x613e65);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613e69:{NFSU2_TR(0x613e69);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e6d:{NFSU2_TR(0x613e6d);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613e71:{NFSU2_TR(0x613e71);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613e78:{NFSU2_TR(0x613e78);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e7c:{NFSU2_TR(0x613e7c);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613e80:{NFSU2_TR(0x613e80);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613e87:{NFSU2_TR(0x613e87);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613e89:{NFSU2_TR(0x613e89);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e8c:{NFSU2_TR(0x613e8c);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613e93:{NFSU2_TR(0x613e93);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613e96:{NFSU2_TR(0x613e96);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613e9d:{NFSU2_TR(0x613e9d);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613ea4:{NFSU2_TR(0x613ea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613eab:{NFSU2_TR(0x613eab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613ead:{NFSU2_TR(0x613ead);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613eb0:{NFSU2_TR(0x613eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613eb3:{NFSU2_TR(0x613eb3);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613eb6:{NFSU2_TR(0x613eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613ebc:{NFSU2_TR(0x613ebc);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613ec0:{NFSU2_TR(0x613ec0);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B613ec4:{NFSU2_TR(0x613ec4);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613ec8:{NFSU2_TR(0x613ec8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613ecb:{NFSU2_TR(0x613ecb);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613ecf:{NFSU2_TR(0x613ecf);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B613ed1:{NFSU2_TR(0x613ed1);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613ed5:{NFSU2_TR(0x613ed5);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613edc:{NFSU2_TR(0x613edc);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613ee0:{NFSU2_TR(0x613ee0);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B613ee4:{NFSU2_TR(0x613ee4);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613eeb:{NFSU2_TR(0x613eeb);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613eed:{NFSU2_TR(0x613eed);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613ef0:{NFSU2_TR(0x613ef0);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613ef7:{NFSU2_TR(0x613ef7);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613efc:{NFSU2_TR(0x613efc);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613eff:{NFSU2_TR(0x613eff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613f01:{NFSU2_TR(0x613f01);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613f08:{NFSU2_TR(0x613f08);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613f0f:{NFSU2_TR(0x613f0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613f16:{NFSU2_TR(0x613f16);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613f18:{NFSU2_TR(0x613f18);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613f1b:{NFSU2_TR(0x613f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613f1e:{NFSU2_TR(0x613f1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613f22:{NFSU2_TR(0x613f22);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613f25:{NFSU2_TR(0x613f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613f2b:{NFSU2_TR(0x613f2b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613f2d:{NFSU2_TR(0x613f2d);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B613f31:{NFSU2_TR(0x613f31);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613f35:{NFSU2_TR(0x613f35);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613f38:{NFSU2_TR(0x613f38);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B613f3a:{NFSU2_TR(0x613f3a);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613f3e:{NFSU2_TR(0x613f3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613f3f:{NFSU2_TR(0x613f3f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613f43:{NFSU2_TR(0x613f43);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613f47:{NFSU2_TR(0x613f47);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613f49:{NFSU2_TR(0x613f49);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613f4c:{NFSU2_TR(0x613f4c);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B613f53:{NFSU2_TR(0x613f53);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613f56:{NFSU2_TR(0x613f56);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613f5a:{NFSU2_TR(0x613f5a);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B613f5c:{NFSU2_TR(0x613f5c);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613f63:{NFSU2_TR(0x613f63);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613f6a:{NFSU2_TR(0x613f6a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613f6c:{NFSU2_TR(0x613f6c);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613f6f:{NFSU2_TR(0x613f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613f72:{NFSU2_TR(0x613f72);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613f75:{NFSU2_TR(0x613f75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B613f77:{NFSU2_TR(0x613f77);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613f78:{NFSU2_TR(0x613f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613f7e:{NFSU2_TR(0x613f7e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B613f80:{NFSU2_TR(0x613f80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613f81:{NFSU2_TR(0x613f81);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x613f86ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c7e80u);}[[clang::musttail]] return blk_5c7e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613f86(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613f86:L613f86:{bud-=1;NFSU2_TR(0x613f86);
{[[clang::musttail]] return blk_614017(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_613f8b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B613f8b:L613f8b:{bud-=2;NFSU2_TR(0x613f8b);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B613f8e:{NFSU2_TR(0x613f8e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_614017(ARGS);}}
}
B613f94:L613f94:{bud-=24;NFSU2_TR(0x613f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613f9a:{NFSU2_TR(0x613f9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613f9e:{NFSU2_TR(0x613f9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B613fa2:{NFSU2_TR(0x613fa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613fa6:{NFSU2_TR(0x613fa6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B613fa9:{NFSU2_TR(0x613fa9);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613fad:{NFSU2_TR(0x613fad);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B613faf:{NFSU2_TR(0x613faf);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B613fb2:{NFSU2_TR(0x613fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+0),(U+0),4);
}
B613fb4:{NFSU2_TR(0x613fb4);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613fbb:{NFSU2_TR(0x613fbb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B613fbd:{NFSU2_TR(0x613fbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B613fc1:{NFSU2_TR(0x613fc1);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613fc8:{NFSU2_TR(0x613fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613fcf:{NFSU2_TR(0x613fcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613fd3:{NFSU2_TR(0x613fd3);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B613fda:{NFSU2_TR(0x613fda);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613fe1:{NFSU2_TR(0x613fe1);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B613fe8:{NFSU2_TR(0x613fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613fef:{NFSU2_TR(0x613fef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B613ff3:{NFSU2_TR(0x613ff3);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B613ffa:{NFSU2_TR(0x613ffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B613ffe:{NFSU2_TR(0x613ffe);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B613fff:{NFSU2_TR(0x613fff);
w4(G+4,u32(0x872b98ull));
{EXIT(0x614004u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_613(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x613006:[[clang::musttail]] return blk_613006(c,a4,a0,a1,bud);
case 0x613020:[[clang::musttail]] return blk_613020(c,a4,a0,a1,bud);
case 0x613050:[[clang::musttail]] return blk_613050(c,a4,a0,a1,bud);
case 0x613070:[[clang::musttail]] return blk_613070(c,a4,a0,a1,bud);
case 0x613079:[[clang::musttail]] return blk_613079(c,a4,a0,a1,bud);
case 0x61308e:[[clang::musttail]] return blk_61308e(c,a4,a0,a1,bud);
case 0x613097:[[clang::musttail]] return blk_613097(c,a4,a0,a1,bud);
case 0x6130d2:[[clang::musttail]] return blk_6130d2(c,a4,a0,a1,bud);
case 0x613360:[[clang::musttail]] return blk_613360(c,a4,a0,a1,bud);
case 0x613370:[[clang::musttail]] return blk_613370(c,a4,a0,a1,bud);
case 0x61337f:[[clang::musttail]] return blk_61337f(c,a4,a0,a1,bud);
case 0x6133af:[[clang::musttail]] return blk_6133af(c,a4,a0,a1,bud);
case 0x6133e0:[[clang::musttail]] return blk_6133e0(c,a4,a0,a1,bud);
case 0x613465:[[clang::musttail]] return blk_613465(c,a4,a0,a1,bud);
case 0x613470:[[clang::musttail]] return blk_613470(c,a4,a0,a1,bud);
case 0x61347c:[[clang::musttail]] return blk_61347c(c,a4,a0,a1,bud);
case 0x613499:[[clang::musttail]] return blk_613499(c,a4,a0,a1,bud);
case 0x6134b5:[[clang::musttail]] return blk_6134b5(c,a4,a0,a1,bud);
case 0x6134e0:[[clang::musttail]] return blk_6134e0(c,a4,a0,a1,bud);
case 0x6134f0:[[clang::musttail]] return blk_6134f0(c,a4,a0,a1,bud);
case 0x613500:[[clang::musttail]] return blk_613500(c,a4,a0,a1,bud);
case 0x613521:[[clang::musttail]] return blk_613521(c,a4,a0,a1,bud);
case 0x613527:[[clang::musttail]] return blk_613527(c,a4,a0,a1,bud);
case 0x613540:[[clang::musttail]] return blk_613540(c,a4,a0,a1,bud);
case 0x613559:[[clang::musttail]] return blk_613559(c,a4,a0,a1,bud);
case 0x61356d:[[clang::musttail]] return blk_61356d(c,a4,a0,a1,bud);
case 0x613588:[[clang::musttail]] return blk_613588(c,a4,a0,a1,bud);
case 0x61359b:[[clang::musttail]] return blk_61359b(c,a4,a0,a1,bud);
case 0x6135d0:[[clang::musttail]] return blk_6135d0(c,a4,a0,a1,bud);
case 0x613670:[[clang::musttail]] return blk_613670(c,a4,a0,a1,bud);
case 0x613693:[[clang::musttail]] return blk_613693(c,a4,a0,a1,bud);
case 0x61369b:[[clang::musttail]] return blk_61369b(c,a4,a0,a1,bud);
case 0x6136b0:[[clang::musttail]] return blk_6136b0(c,a4,a0,a1,bud);
case 0x6136f6:[[clang::musttail]] return blk_6136f6(c,a4,a0,a1,bud);
case 0x613715:[[clang::musttail]] return blk_613715(c,a4,a0,a1,bud);
case 0x61371d:[[clang::musttail]] return blk_61371d(c,a4,a0,a1,bud);
case 0x613728:[[clang::musttail]] return blk_613728(c,a4,a0,a1,bud);
case 0x613733:[[clang::musttail]] return blk_613733(c,a4,a0,a1,bud);
case 0x613750:[[clang::musttail]] return blk_613750(c,a4,a0,a1,bud);
case 0x61375c:[[clang::musttail]] return blk_61375c(c,a4,a0,a1,bud);
case 0x61376b:[[clang::musttail]] return blk_61376b(c,a4,a0,a1,bud);
case 0x613868:[[clang::musttail]] return blk_613868(c,a4,a0,a1,bud);
case 0x61388e:[[clang::musttail]] return blk_61388e(c,a4,a0,a1,bud);
case 0x6138aa:[[clang::musttail]] return blk_6138aa(c,a4,a0,a1,bud);
case 0x613906:[[clang::musttail]] return blk_613906(c,a4,a0,a1,bud);
case 0x613973:[[clang::musttail]] return blk_613973(c,a4,a0,a1,bud);
case 0x613999:[[clang::musttail]] return blk_613999(c,a4,a0,a1,bud);
case 0x6139b0:[[clang::musttail]] return blk_6139b0(c,a4,a0,a1,bud);
case 0x6139c9:[[clang::musttail]] return blk_6139c9(c,a4,a0,a1,bud);
case 0x6139d3:[[clang::musttail]] return blk_6139d3(c,a4,a0,a1,bud);
case 0x6139ea:[[clang::musttail]] return blk_6139ea(c,a4,a0,a1,bud);
case 0x613a30:[[clang::musttail]] return blk_613a30(c,a4,a0,a1,bud);
case 0x613a4a:[[clang::musttail]] return blk_613a4a(c,a4,a0,a1,bud);
case 0x613a53:[[clang::musttail]] return blk_613a53(c,a4,a0,a1,bud);
case 0x613a70:[[clang::musttail]] return blk_613a70(c,a4,a0,a1,bud);
case 0x613b54:[[clang::musttail]] return blk_613b54(c,a4,a0,a1,bud);
case 0x613b72:[[clang::musttail]] return blk_613b72(c,a4,a0,a1,bud);
case 0x613b83:[[clang::musttail]] return blk_613b83(c,a4,a0,a1,bud);
case 0x613ba0:[[clang::musttail]] return blk_613ba0(c,a4,a0,a1,bud);
case 0x613bb0:[[clang::musttail]] return blk_613bb0(c,a4,a0,a1,bud);
case 0x613bb8:[[clang::musttail]] return blk_613bb8(c,a4,a0,a1,bud);
case 0x613be3:[[clang::musttail]] return blk_613be3(c,a4,a0,a1,bud);
case 0x613beb:[[clang::musttail]] return blk_613beb(c,a4,a0,a1,bud);
case 0x613c10:[[clang::musttail]] return blk_613c10(c,a4,a0,a1,bud);
case 0x613c1c:[[clang::musttail]] return blk_613c1c(c,a4,a0,a1,bud);
case 0x613c33:[[clang::musttail]] return blk_613c33(c,a4,a0,a1,bud);
case 0x613cc6:[[clang::musttail]] return blk_613cc6(c,a4,a0,a1,bud);
case 0x613d08:[[clang::musttail]] return blk_613d08(c,a4,a0,a1,bud);
case 0x613d63:[[clang::musttail]] return blk_613d63(c,a4,a0,a1,bud);
case 0x613d77:[[clang::musttail]] return blk_613d77(c,a4,a0,a1,bud);
case 0x613dba:[[clang::musttail]] return blk_613dba(c,a4,a0,a1,bud);
case 0x613dda:[[clang::musttail]] return blk_613dda(c,a4,a0,a1,bud);
case 0x613f86:[[clang::musttail]] return blk_613f86(c,a4,a0,a1,bud);
case 0x613f8b:[[clang::musttail]] return blk_613f8b(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_613(Cpu& c){u8* R=c.regs.data();return ent_613(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
