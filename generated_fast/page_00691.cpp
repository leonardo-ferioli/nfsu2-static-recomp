#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6910c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6913c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69159c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6915c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691aa2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691c74(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691c9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6925ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6929c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692a65(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693a80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d4460(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691059(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691097(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6915ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6915fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69160f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69161e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69176f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691ca3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691cd3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691cdc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691dbe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691001:L691001:{bud-=24;NFSU2_TR(0x691001);
__builtin_memmove((R+4368),gp(0x7b7158),8);
}
B691008:{NFSU2_TR(0x691008);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69100b:{NFSU2_TR(0x69100b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B69100f:{NFSU2_TR(0x69100f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691012:{NFSU2_TR(0x691012);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B691016:{NFSU2_TR(0x691016);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B691019:{NFSU2_TR(0x691019);
__builtin_memmove((R+4448),(R+4368),8);
}
B69101c:{NFSU2_TR(0x69101c);
__builtin_memmove((R+4436),(R+4368),4);
}
B69101f:{NFSU2_TR(0x69101f);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B691023:{NFSU2_TR(0x691023);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691027:{NFSU2_TR(0x691027);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B69102b:{NFSU2_TR(0x69102b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69102f:{NFSU2_TR(0x69102f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691033:{NFSU2_TR(0x691033);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691037:{NFSU2_TR(0x691037);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B69103b:{NFSU2_TR(0x69103b);
__builtin_memmove((R+4416),(R+4384),8);
}
B69103e:{NFSU2_TR(0x69103e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691042:{NFSU2_TR(0x691042);
__builtin_memmove((R+4388),(R+4352),4);
}
B691045:{NFSU2_TR(0x691045);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B691048:{NFSU2_TR(0x691048);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69104b:{NFSU2_TR(0x69104b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69104f:{NFSU2_TR(0x69104f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691053:{NFSU2_TR(0x691053);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691057:{NFSU2_TR(0x691057);
{[[clang::musttail]] return blk_6910c9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_691059(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691059:L691059:{bud-=17;NFSU2_TR(0x691059);
__builtin_memmove((R+4368),gp(0x7b7138),8);
}
B691060:{NFSU2_TR(0x691060);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691063:{NFSU2_TR(0x691063);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B691067:{NFSU2_TR(0x691067);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B69106a:{NFSU2_TR(0x69106a);
__builtin_memmove((R+4400),(R+4384),8);
}
B69106d:{NFSU2_TR(0x69106d);
__builtin_memmove((R+4388),(R+4432),4);
}
B691070:{NFSU2_TR(0x691070);
__builtin_memmove((R+4352),(R+4432),8);
}
B691073:{NFSU2_TR(0x691073);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B691076:{NFSU2_TR(0x691076);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B691079:{NFSU2_TR(0x691079);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69107d:{NFSU2_TR(0x69107d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691081:{NFSU2_TR(0x691081);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691085:{NFSU2_TR(0x691085);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691089:{NFSU2_TR(0x691089);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69108d:{NFSU2_TR(0x69108d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691091:{NFSU2_TR(0x691091);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691095:{NFSU2_TR(0x691095);
{[[clang::musttail]] return blk_6910c9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_691097(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691097:L691097:{bud-=13;NFSU2_TR(0x691097);
w8(R+4368,u64(m4(0x7b7148)));
}
B69109e:{NFSU2_TR(0x69109e);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6910a1:{NFSU2_TR(0x6910a1);
__builtin_memmove((R+4384),(R+4368),8);
}
B6910a4:{NFSU2_TR(0x6910a4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6910a7:{NFSU2_TR(0x6910a7);
__builtin_memmove((R+4388),(R+4368),4);
}
B6910aa:{NFSU2_TR(0x6910aa);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6910ad:{NFSU2_TR(0x6910ad);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910b1:{NFSU2_TR(0x6910b1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910b5:{NFSU2_TR(0x6910b5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910b9:{NFSU2_TR(0x6910b9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910bd:{NFSU2_TR(0x6910bd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910c1:{NFSU2_TR(0x6910c1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6910c5:{NFSU2_TR(0x6910c5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_6910c9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6910c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6910c9:L6910c9:{bud-=4;NFSU2_TR(0x6910c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6910cc:{NFSU2_TR(0x6910cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6910cf:{NFSU2_TR(0x6910cf);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6910d1:{NFSU2_TR(0x6910d1);
if(r1(F+6)){{[[clang::musttail]] return blk_69159c(ARGS);}}
}
B6910d7:L6910d7:{bud-=56;NFSU2_TR(0x6910d7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6910da:{NFSU2_TR(0x6910da);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6910de:{NFSU2_TR(0x6910de);
__builtin_memmove((R+4384),(R+4352),8);
}
B6910e1:{NFSU2_TR(0x6910e1);
__builtin_memmove((R+4400),(R+4352),8);
}
B6910e4:{NFSU2_TR(0x6910e4);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6910e8:{NFSU2_TR(0x6910e8);
__builtin_memmove((R+4416),(R+4368),8);
}
B6910eb:{NFSU2_TR(0x6910eb);
__builtin_memmove((R+4464),(R+4368),8);
}
B6910ee:{NFSU2_TR(0x6910ee);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6910f2:{NFSU2_TR(0x6910f2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6910f5:{NFSU2_TR(0x6910f5);
__builtin_memmove((R+4432),(R+4352),8);
}
B6910f8:{NFSU2_TR(0x6910f8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6910fb:{NFSU2_TR(0x6910fb);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6910ff:{NFSU2_TR(0x6910ff);
__builtin_memmove((R+4372),(R+4352),4);
}
B691102:{NFSU2_TR(0x691102);
__builtin_memmove((R+4468),(R+4464),4);
}
B691105:{NFSU2_TR(0x691105);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691109:{NFSU2_TR(0x691109);
__builtin_memmove((R+4448),(R+4368),8);
}
B69110c:{NFSU2_TR(0x69110c);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B691110:{NFSU2_TR(0x691110);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B691114:{NFSU2_TR(0x691114);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B691117:{NFSU2_TR(0x691117);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B69111b:{NFSU2_TR(0x69111b);
__builtin_memmove((R+4384),(R+4368),8);
}
B69111e:{NFSU2_TR(0x69111e);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B691121:{NFSU2_TR(0x691121);
__builtin_memmove((R+4468),(R+4464),4);
}
B691124:{NFSU2_TR(0x691124);
__builtin_memmove((R+4452),(R+4448),4);
}
B691127:{NFSU2_TR(0x691127);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69112c:{NFSU2_TR(0x69112c);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691130:{NFSU2_TR(0x691130);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B691134:{NFSU2_TR(0x691134);
__builtin_memmove((R+4416),(R+4368),8);
}
B691137:{NFSU2_TR(0x691137);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B69113a:{NFSU2_TR(0x69113a);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B691142:{NFSU2_TR(0x691142);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B69114a:{NFSU2_TR(0x69114a);
__builtin_memmove((R+4404),(R+4352),4);
}
B69114d:{NFSU2_TR(0x69114d);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B691151:{NFSU2_TR(0x691151);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691156:{NFSU2_TR(0x691156);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B69115a:{NFSU2_TR(0x69115a);
__builtin_memmove((R+4400),(R+4384),8);
}
B69115d:{NFSU2_TR(0x69115d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B691161:{NFSU2_TR(0x691161);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B691165:{NFSU2_TR(0x691165);
__builtin_memmove((R+4432),(R+4416),8);
}
B691168:{NFSU2_TR(0x691168);
__builtin_memmove((R+4388),(R+4352),4);
}
B69116b:{NFSU2_TR(0x69116b);
__builtin_memmove((R+4448),(R+4368),8);
}
B69116e:{NFSU2_TR(0x69116e);
__builtin_memmove((R+4420),(R+4464),4);
}
B691171:{NFSU2_TR(0x691171);
__builtin_memmove((R+4372),(R+4368),4);
}
B691174:{NFSU2_TR(0x691174);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691179:{NFSU2_TR(0x691179);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B69117c:{NFSU2_TR(0x69117c);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B691183:{NFSU2_TR(0x691183);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691188:{NFSU2_TR(0x691188);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B69118b:{NFSU2_TR(0x69118b);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691190:{NFSU2_TR(0x691190);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B691193:{NFSU2_TR(0x691193);
__builtin_memmove((R+4452),(R+4400),4);
}
B691196:{NFSU2_TR(0x691196);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69119b:{NFSU2_TR(0x69119b);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6911a0:{NFSU2_TR(0x6911a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6911a5:{NFSU2_TR(0x6911a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6911a7:{NFSU2_TR(0x6911a7);
if(r1(F+6)){{[[clang::musttail]] return blk_6913c6(ARGS);}}
}
B6911ad:L6911ad:{bud-=129;NFSU2_TR(0x6911ad);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6911b1:{NFSU2_TR(0x6911b1);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B6911b5:{NFSU2_TR(0x6911b5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6911b8:{NFSU2_TR(0x6911b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B6911bc:{NFSU2_TR(0x6911bc);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6911c0:{NFSU2_TR(0x6911c0);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6911c4:{NFSU2_TR(0x6911c4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6911c8:{NFSU2_TR(0x6911c8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6911cc:{NFSU2_TR(0x6911cc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6911cf:{NFSU2_TR(0x6911cf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6911d3:{NFSU2_TR(0x6911d3);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6911d8:{NFSU2_TR(0x6911d8);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6911db:{NFSU2_TR(0x6911db);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6911e0:{NFSU2_TR(0x6911e0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6911e3:{NFSU2_TR(0x6911e3);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6911e8:{NFSU2_TR(0x6911e8);
__builtin_memmove((R+4356),(R+4352),4);
}
B6911eb:{NFSU2_TR(0x6911eb);
__builtin_memmove((R+4372),(R+4368),4);
}
B6911ee:{NFSU2_TR(0x6911ee);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6911f2:{NFSU2_TR(0x6911f2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6911f5:{NFSU2_TR(0x6911f5);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6911fb:{NFSU2_TR(0x6911fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691200:{NFSU2_TR(0x691200);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691204:{NFSU2_TR(0x691204);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691207:{NFSU2_TR(0x691207);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69120d:{NFSU2_TR(0x69120d);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691211:{NFSU2_TR(0x691211);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691215:{NFSU2_TR(0x691215);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691219:{NFSU2_TR(0x691219);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69121f:{NFSU2_TR(0x69121f);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691223:{NFSU2_TR(0x691223);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691227:{NFSU2_TR(0x691227);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69122b:{NFSU2_TR(0x69122b);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691231:{NFSU2_TR(0x691231);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691235:{NFSU2_TR(0x691235);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691239:{NFSU2_TR(0x691239);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69123d:{NFSU2_TR(0x69123d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691241:{NFSU2_TR(0x691241);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B691244:{NFSU2_TR(0x691244);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691249:{NFSU2_TR(0x691249);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69124d:{NFSU2_TR(0x69124d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691250:{NFSU2_TR(0x691250);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691255:{NFSU2_TR(0x691255);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691258:{NFSU2_TR(0x691258);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69125d:{NFSU2_TR(0x69125d);
__builtin_memmove((R+4356),(R+4352),4);
}
B691260:{NFSU2_TR(0x691260);
__builtin_memmove((R+4372),(R+4368),4);
}
B691263:{NFSU2_TR(0x691263);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691267:{NFSU2_TR(0x691267);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69126a:{NFSU2_TR(0x69126a);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691270:{NFSU2_TR(0x691270);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691275:{NFSU2_TR(0x691275);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691279:{NFSU2_TR(0x691279);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69127c:{NFSU2_TR(0x69127c);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691282:{NFSU2_TR(0x691282);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691286:{NFSU2_TR(0x691286);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69128a:{NFSU2_TR(0x69128a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69128e:{NFSU2_TR(0x69128e);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691294:{NFSU2_TR(0x691294);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691298:{NFSU2_TR(0x691298);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69129c:{NFSU2_TR(0x69129c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6912a0:{NFSU2_TR(0x6912a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6912a6:{NFSU2_TR(0x6912a6);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6912aa:{NFSU2_TR(0x6912aa);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6912ae:{NFSU2_TR(0x6912ae);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6912b2:{NFSU2_TR(0x6912b2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6912b6:{NFSU2_TR(0x6912b6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6912ba:{NFSU2_TR(0x6912ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6912bf:{NFSU2_TR(0x6912bf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6912c3:{NFSU2_TR(0x6912c3);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6912c6:{NFSU2_TR(0x6912c6);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6912cb:{NFSU2_TR(0x6912cb);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6912ce:{NFSU2_TR(0x6912ce);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6912d3:{NFSU2_TR(0x6912d3);
__builtin_memmove((R+4356),(R+4352),4);
}
B6912d6:{NFSU2_TR(0x6912d6);
__builtin_memmove((R+4372),(R+4368),4);
}
B6912d9:{NFSU2_TR(0x6912d9);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6912dd:{NFSU2_TR(0x6912dd);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6912e0:{NFSU2_TR(0x6912e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6912e6:{NFSU2_TR(0x6912e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6912eb:{NFSU2_TR(0x6912eb);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6912ef:{NFSU2_TR(0x6912ef);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6912f2:{NFSU2_TR(0x6912f2);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6912f8:{NFSU2_TR(0x6912f8);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6912fc:{NFSU2_TR(0x6912fc);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691300:{NFSU2_TR(0x691300);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691304:{NFSU2_TR(0x691304);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69130a:{NFSU2_TR(0x69130a);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69130e:{NFSU2_TR(0x69130e);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691312:{NFSU2_TR(0x691312);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691316:{NFSU2_TR(0x691316);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69131c:{NFSU2_TR(0x69131c);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691320:{NFSU2_TR(0x691320);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691324:{NFSU2_TR(0x691324);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691328:{NFSU2_TR(0x691328);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69132c:{NFSU2_TR(0x69132c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691330:{NFSU2_TR(0x691330);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691335:{NFSU2_TR(0x691335);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691339:{NFSU2_TR(0x691339);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69133c:{NFSU2_TR(0x69133c);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691341:{NFSU2_TR(0x691341);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691344:{NFSU2_TR(0x691344);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691349:{NFSU2_TR(0x691349);
__builtin_memmove((R+4356),(R+4352),4);
}
B69134c:{NFSU2_TR(0x69134c);
__builtin_memmove((R+4372),(R+4368),4);
}
B69134f:{NFSU2_TR(0x69134f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691353:{NFSU2_TR(0x691353);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691356:{NFSU2_TR(0x691356);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69135c:{NFSU2_TR(0x69135c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691361:{NFSU2_TR(0x691361);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691365:{NFSU2_TR(0x691365);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691368:{NFSU2_TR(0x691368);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69136e:{NFSU2_TR(0x69136e);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691372:{NFSU2_TR(0x691372);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691376:{NFSU2_TR(0x691376);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69137a:{NFSU2_TR(0x69137a);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691380:{NFSU2_TR(0x691380);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691384:{NFSU2_TR(0x691384);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691388:{NFSU2_TR(0x691388);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69138c:{NFSU2_TR(0x69138c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691392:{NFSU2_TR(0x691392);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691396:{NFSU2_TR(0x691396);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69139a:{NFSU2_TR(0x69139a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69139e:{NFSU2_TR(0x69139e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6913a2:{NFSU2_TR(0x6913a2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6913a6:{NFSU2_TR(0x6913a6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B6913aa:{NFSU2_TR(0x6913aa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6913ad:{NFSU2_TR(0x6913ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B6913b1:{NFSU2_TR(0x6913b1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6913b5:{NFSU2_TR(0x6913b5);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6913b9:{NFSU2_TR(0x6913b9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6913bd:{NFSU2_TR(0x6913bd);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6913c1:{NFSU2_TR(0x6913c1);
{[[clang::musttail]] return blk_69159c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6913c6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6913c6:L6913c6:{bud-=112;NFSU2_TR(0x6913c6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6913c9:{NFSU2_TR(0x6913c9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6913cd:{NFSU2_TR(0x6913cd);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6913d2:{NFSU2_TR(0x6913d2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6913d5:{NFSU2_TR(0x6913d5);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6913da:{NFSU2_TR(0x6913da);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6913dd:{NFSU2_TR(0x6913dd);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6913e2:{NFSU2_TR(0x6913e2);
__builtin_memmove((R+4356),(R+4352),4);
}
B6913e5:{NFSU2_TR(0x6913e5);
__builtin_memmove((R+4372),(R+4368),4);
}
B6913e8:{NFSU2_TR(0x6913e8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6913ec:{NFSU2_TR(0x6913ec);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6913ef:{NFSU2_TR(0x6913ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6913f5:{NFSU2_TR(0x6913f5);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6913fa:{NFSU2_TR(0x6913fa);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6913fe:{NFSU2_TR(0x6913fe);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691401:{NFSU2_TR(0x691401);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691407:{NFSU2_TR(0x691407);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69140b:{NFSU2_TR(0x69140b);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69140f:{NFSU2_TR(0x69140f);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691413:{NFSU2_TR(0x691413);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691419:{NFSU2_TR(0x691419);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69141d:{NFSU2_TR(0x69141d);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691421:{NFSU2_TR(0x691421);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691425:{NFSU2_TR(0x691425);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69142b:{NFSU2_TR(0x69142b);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69142f:{NFSU2_TR(0x69142f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691433:{NFSU2_TR(0x691433);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691437:{NFSU2_TR(0x691437);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69143b:{NFSU2_TR(0x69143b);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69143e:{NFSU2_TR(0x69143e);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691443:{NFSU2_TR(0x691443);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691447:{NFSU2_TR(0x691447);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69144a:{NFSU2_TR(0x69144a);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69144f:{NFSU2_TR(0x69144f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691452:{NFSU2_TR(0x691452);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691457:{NFSU2_TR(0x691457);
__builtin_memmove((R+4356),(R+4352),4);
}
B69145a:{NFSU2_TR(0x69145a);
__builtin_memmove((R+4372),(R+4368),4);
}
B69145d:{NFSU2_TR(0x69145d);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691461:{NFSU2_TR(0x691461);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691464:{NFSU2_TR(0x691464);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69146a:{NFSU2_TR(0x69146a);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69146f:{NFSU2_TR(0x69146f);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691473:{NFSU2_TR(0x691473);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691476:{NFSU2_TR(0x691476);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69147c:{NFSU2_TR(0x69147c);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691480:{NFSU2_TR(0x691480);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691484:{NFSU2_TR(0x691484);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691488:{NFSU2_TR(0x691488);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69148e:{NFSU2_TR(0x69148e);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691492:{NFSU2_TR(0x691492);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691496:{NFSU2_TR(0x691496);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69149a:{NFSU2_TR(0x69149a);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6914a0:{NFSU2_TR(0x6914a0);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6914a4:{NFSU2_TR(0x6914a4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6914a8:{NFSU2_TR(0x6914a8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6914ac:{NFSU2_TR(0x6914ac);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6914b0:{NFSU2_TR(0x6914b0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6914b4:{NFSU2_TR(0x6914b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6914b9:{NFSU2_TR(0x6914b9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6914bd:{NFSU2_TR(0x6914bd);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6914c0:{NFSU2_TR(0x6914c0);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6914c5:{NFSU2_TR(0x6914c5);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6914c8:{NFSU2_TR(0x6914c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6914cd:{NFSU2_TR(0x6914cd);
__builtin_memmove((R+4356),(R+4352),4);
}
B6914d0:{NFSU2_TR(0x6914d0);
__builtin_memmove((R+4372),(R+4368),4);
}
B6914d3:{NFSU2_TR(0x6914d3);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6914d7:{NFSU2_TR(0x6914d7);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6914da:{NFSU2_TR(0x6914da);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6914e0:{NFSU2_TR(0x6914e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6914e5:{NFSU2_TR(0x6914e5);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6914e9:{NFSU2_TR(0x6914e9);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6914ec:{NFSU2_TR(0x6914ec);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6914f2:{NFSU2_TR(0x6914f2);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6914f6:{NFSU2_TR(0x6914f6);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6914fa:{NFSU2_TR(0x6914fa);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6914fe:{NFSU2_TR(0x6914fe);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691504:{NFSU2_TR(0x691504);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691508:{NFSU2_TR(0x691508);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69150c:{NFSU2_TR(0x69150c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691510:{NFSU2_TR(0x691510);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691516:{NFSU2_TR(0x691516);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69151a:{NFSU2_TR(0x69151a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69151e:{NFSU2_TR(0x69151e);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691522:{NFSU2_TR(0x691522);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691526:{NFSU2_TR(0x691526);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69152a:{NFSU2_TR(0x69152a);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69152f:{NFSU2_TR(0x69152f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691533:{NFSU2_TR(0x691533);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691536:{NFSU2_TR(0x691536);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69153b:{NFSU2_TR(0x69153b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69153e:{NFSU2_TR(0x69153e);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691543:{NFSU2_TR(0x691543);
__builtin_memmove((R+4356),(R+4352),4);
}
B691546:{NFSU2_TR(0x691546);
__builtin_memmove((R+4372),(R+4368),4);
}
B691549:{NFSU2_TR(0x691549);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69154d:{NFSU2_TR(0x69154d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691550:{NFSU2_TR(0x691550);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691556:{NFSU2_TR(0x691556);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69155b:{NFSU2_TR(0x69155b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69155f:{NFSU2_TR(0x69155f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691562:{NFSU2_TR(0x691562);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691568:{NFSU2_TR(0x691568);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69156c:{NFSU2_TR(0x69156c);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691570:{NFSU2_TR(0x691570);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691574:{NFSU2_TR(0x691574);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69157a:{NFSU2_TR(0x69157a);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69157e:{NFSU2_TR(0x69157e);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691582:{NFSU2_TR(0x691582);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691586:{NFSU2_TR(0x691586);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69158c:{NFSU2_TR(0x69158c);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691590:{NFSU2_TR(0x691590);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691594:{NFSU2_TR(0x691594);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691598:{NFSU2_TR(0x691598);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_69159c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69159c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69159c:L69159c:{bud-=3;NFSU2_TR(0x69159c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B69159f:{NFSU2_TR(0x69159f);
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
B6915a1:{NFSU2_TR(0x6915a1);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6915c2(ARGS);}}
}
B6915a3:L6915a3:{bud-=8;NFSU2_TR(0x6915a3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6915a7:{NFSU2_TR(0x6915a7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B6915ab:{NFSU2_TR(0x6915ab);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6915ae:{NFSU2_TR(0x6915ae);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B6915b2:{NFSU2_TR(0x6915b2);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6915b6:{NFSU2_TR(0x6915b6);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6915ba:{NFSU2_TR(0x6915ba);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6915be:{NFSU2_TR(0x6915be);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6915c2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6915c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6915c2:L6915c2:{bud-=4;NFSU2_TR(0x6915c2);
__builtin_memmove((G+16),(R+20),4);
}
B6915c4:{NFSU2_TR(0x6915c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6915c5:{NFSU2_TR(0x6915c5);
w2(R+4260,0xffffu);
}
B6915c7:{NFSU2_TR(0x6915c7);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x1cull))));
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
PN u32 blk_6915ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6915ca:L6915ca:{bud-=12;NFSU2_TR(0x6915ca);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x14ull))));
}
B6915cd:{NFSU2_TR(0x6915cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6915d1:{NFSU2_TR(0x6915d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((R+20),(U+0),4);
}
B6915d5:{NFSU2_TR(0x6915d5);
__builtin_memmove((R+4352),gp(0x7b71e8),8);
}
B6915dc:{NFSU2_TR(0x6915dc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x20ull))));
}
B6915df:{NFSU2_TR(0x6915df);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6915e3:{NFSU2_TR(0x6915e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(G+16)),r4(U+0));
}
B6915e6:{NFSU2_TR(0x6915e6);
__builtin_memmove((R+4368),(R+4352),8);
}
B6915e9:{NFSU2_TR(0x6915e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6915ee:{NFSU2_TR(0x6915ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6915f3:{NFSU2_TR(0x6915f3);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6915f8:{NFSU2_TR(0x6915f8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6915fdull));
{[[clang::musttail]] return blk_6d4460(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6915fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6915fd:L6915fd:{bud-=4;NFSU2_TR(0x6915fd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691602:{NFSU2_TR(0x691602);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691607:{NFSU2_TR(0x691607);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B69160a:{NFSU2_TR(0x69160a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69160full));
{[[clang::musttail]] return blk_6d4460(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69160f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69160f:L69160f:{bud-=3;NFSU2_TR(0x69160f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691614:{NFSU2_TR(0x691614);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691619:{NFSU2_TR(0x691619);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69161eull));
{[[clang::musttail]] return blk_6d4460(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69161e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69161e:L69161e:{bud-=93;NFSU2_TR(0x69161e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691623:{NFSU2_TR(0x691623);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B691628:{NFSU2_TR(0x691628);
__builtin_memmove((R+4464),gp(0x7b7178),8);
}
B69162f:{NFSU2_TR(0x69162f);
__builtin_memmove((R+4400),(R+4352),8);
}
B691632:{NFSU2_TR(0x691632);
__builtin_memmove((R+4416),(R+4352),8);
}
B691635:{NFSU2_TR(0x691635);
__builtin_memmove((R+4432),(R+4352),8);
}
B691638:{NFSU2_TR(0x691638);
__builtin_memmove((R+4356),(R+4352),4);
}
B69163b:{NFSU2_TR(0x69163b);
__builtin_memmove((R+4404),(R+4400),4);
}
B69163e:{NFSU2_TR(0x69163e);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B691641:{NFSU2_TR(0x691641);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B691644:{NFSU2_TR(0x691644);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4464))));
}
B691647:{NFSU2_TR(0x691647);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B69164b:{NFSU2_TR(0x69164b);
__builtin_memmove((R+4448),(R+4384),8);
}
B69164e:{NFSU2_TR(0x69164e);
__builtin_memmove((R+4388),(R+4384),4);
}
B691651:{NFSU2_TR(0x691651);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B691654:{NFSU2_TR(0x691654);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4464))));
}
B691657:{NFSU2_TR(0x691657);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B69165b:{NFSU2_TR(0x69165b);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69165f:{NFSU2_TR(0x69165f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B691663:{NFSU2_TR(0x691663);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B691667:{NFSU2_TR(0x691667);
__builtin_memmove((R+4464),(R+4368),8);
}
B69166a:{NFSU2_TR(0x69166a);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B69166d:{NFSU2_TR(0x69166d);
__builtin_memmove((R+4468),(R+4368),4);
}
B691670:{NFSU2_TR(0x691670);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B691674:{NFSU2_TR(0x691674);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B691678:{NFSU2_TR(0x691678);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B69167c:{NFSU2_TR(0x69167c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B691680:{NFSU2_TR(0x691680);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B691684:{NFSU2_TR(0x691684);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B691688:{NFSU2_TR(0x691688);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69168c:{NFSU2_TR(0x69168c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691690:{NFSU2_TR(0x691690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
__builtin_memmove((R+24),(U+0),4);
}
B691693:{NFSU2_TR(0x691693);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B691697:{NFSU2_TR(0x691697);
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
B69169a:{NFSU2_TR(0x69169a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69169d:{NFSU2_TR(0x69169d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6916a1:{NFSU2_TR(0x6916a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6916a6:{NFSU2_TR(0x6916a6);
__builtin_memmove((R+4384),(R+4352),8);
}
B6916a9:{NFSU2_TR(0x6916a9);
__builtin_memmove((R+4400),(R+4352),8);
}
B6916ac:{NFSU2_TR(0x6916ac);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6916b0:{NFSU2_TR(0x6916b0);
__builtin_memmove((R+4416),(R+4368),8);
}
B6916b3:{NFSU2_TR(0x6916b3);
__builtin_memmove((R+4464),(R+4368),8);
}
B6916b6:{NFSU2_TR(0x6916b6);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6916ba:{NFSU2_TR(0x6916ba);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6916bd:{NFSU2_TR(0x6916bd);
__builtin_memmove((R+4432),(R+4352),8);
}
B6916c0:{NFSU2_TR(0x6916c0);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6916c3:{NFSU2_TR(0x6916c3);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6916c7:{NFSU2_TR(0x6916c7);
__builtin_memmove((R+4372),(R+4352),4);
}
B6916ca:{NFSU2_TR(0x6916ca);
__builtin_memmove((R+4468),(R+4464),4);
}
B6916cd:{NFSU2_TR(0x6916cd);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6916d1:{NFSU2_TR(0x6916d1);
__builtin_memmove((R+4448),(R+4368),8);
}
B6916d4:{NFSU2_TR(0x6916d4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6916d8:{NFSU2_TR(0x6916d8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6916dc:{NFSU2_TR(0x6916dc);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6916df:{NFSU2_TR(0x6916df);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B6916e3:{NFSU2_TR(0x6916e3);
__builtin_memmove((R+4384),(R+4368),8);
}
B6916e6:{NFSU2_TR(0x6916e6);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B6916e9:{NFSU2_TR(0x6916e9);
__builtin_memmove((R+4468),(R+4464),4);
}
B6916ec:{NFSU2_TR(0x6916ec);
__builtin_memmove((R+4452),(R+4448),4);
}
B6916ef:{NFSU2_TR(0x6916ef);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6916f3:{NFSU2_TR(0x6916f3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6916f7:{NFSU2_TR(0x6916f7);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B6916fb:{NFSU2_TR(0x6916fb);
__builtin_memmove((R+4416),(R+4368),8);
}
B6916fe:{NFSU2_TR(0x6916fe);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B691701:{NFSU2_TR(0x691701);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B691709:{NFSU2_TR(0x691709);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B691711:{NFSU2_TR(0x691711);
__builtin_memmove((R+4404),(R+4352),4);
}
B691714:{NFSU2_TR(0x691714);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B691718:{NFSU2_TR(0x691718);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69171c:{NFSU2_TR(0x69171c);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B691720:{NFSU2_TR(0x691720);
__builtin_memmove((R+4400),(R+4384),8);
}
B691723:{NFSU2_TR(0x691723);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B691727:{NFSU2_TR(0x691727);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B69172b:{NFSU2_TR(0x69172b);
__builtin_memmove((R+4432),(R+4416),8);
}
B69172e:{NFSU2_TR(0x69172e);
__builtin_memmove((R+4388),(R+4352),4);
}
B691731:{NFSU2_TR(0x691731);
__builtin_memmove((R+4448),(R+4368),8);
}
B691734:{NFSU2_TR(0x691734);
__builtin_memmove((R+4420),(R+4464),4);
}
B691737:{NFSU2_TR(0x691737);
__builtin_memmove((R+4372),(R+4368),4);
}
B69173a:{NFSU2_TR(0x69173a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69173e:{NFSU2_TR(0x69173e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B691741:{NFSU2_TR(0x691741);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B691748:{NFSU2_TR(0x691748);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69174c:{NFSU2_TR(0x69174c);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B69174f:{NFSU2_TR(0x69174f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691753:{NFSU2_TR(0x691753);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B691756:{NFSU2_TR(0x691756);
__builtin_memmove((R+4452),(R+4400),4);
}
B691759:{NFSU2_TR(0x691759);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69175c:{NFSU2_TR(0x69175c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691760:{NFSU2_TR(0x691760);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691764:{NFSU2_TR(0x691764);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((G+16),(U+0),4);
}
B691767:{NFSU2_TR(0x691767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B69176a:{NFSU2_TR(0x69176a);
w2(R+4260,0xffffu);
}
B69176c:{NFSU2_TR(0x69176c);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
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
PN u32 blk_69176f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69176f:L69176f:{bud-=18;NFSU2_TR(0x69176f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B691773:{NFSU2_TR(0x691773);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B691778:{NFSU2_TR(0x691778);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B69177b:{NFSU2_TR(0x69177b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69177f:{NFSU2_TR(0x69177f);
__builtin_memmove((R+4432),gp(0x7b7138),8);
}
B691786:{NFSU2_TR(0x691786);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B69178a:{NFSU2_TR(0x69178a);
u8 U[8];
__builtin_memmove((U+0),(R+4448),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69178d:{NFSU2_TR(0x69178d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691791:{NFSU2_TR(0x691791);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
w4(U+4,u32(r8(R+4464)));
s4(u32(r4(U+0)),r4(U+4));
}
B691795:{NFSU2_TR(0x691795);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x40ull))));
}
B691798:{NFSU2_TR(0x691798);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
w4(U+4,u32(r8(R+4448)));
s4(u32(r4(U+0)),r4(U+4));
}
B69179c:{NFSU2_TR(0x69179c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917a0:{NFSU2_TR(0x6917a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6917a2:{NFSU2_TR(0x6917a2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917a6:{NFSU2_TR(0x6917a6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917aa:{NFSU2_TR(0x6917aa);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917ae:{NFSU2_TR(0x6917ae);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6917b2:{NFSU2_TR(0x6917b2);
if(r1(F+6)){{[[clang::musttail]] return blk_691c74(ARGS);}}
}
B6917b8:L6917b8:{bud-=56;NFSU2_TR(0x6917b8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6917bb:{NFSU2_TR(0x6917bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6917bf:{NFSU2_TR(0x6917bf);
__builtin_memmove((R+4384),(R+4352),8);
}
B6917c2:{NFSU2_TR(0x6917c2);
__builtin_memmove((R+4400),(R+4352),8);
}
B6917c5:{NFSU2_TR(0x6917c5);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6917c9:{NFSU2_TR(0x6917c9);
__builtin_memmove((R+4416),(R+4368),8);
}
B6917cc:{NFSU2_TR(0x6917cc);
__builtin_memmove((R+4464),(R+4368),8);
}
B6917cf:{NFSU2_TR(0x6917cf);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6917d3:{NFSU2_TR(0x6917d3);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6917d6:{NFSU2_TR(0x6917d6);
__builtin_memmove((R+4432),(R+4352),8);
}
B6917d9:{NFSU2_TR(0x6917d9);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6917dc:{NFSU2_TR(0x6917dc);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6917e0:{NFSU2_TR(0x6917e0);
__builtin_memmove((R+4372),(R+4352),4);
}
B6917e3:{NFSU2_TR(0x6917e3);
__builtin_memmove((R+4468),(R+4464),4);
}
B6917e6:{NFSU2_TR(0x6917e6);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6917ea:{NFSU2_TR(0x6917ea);
__builtin_memmove((R+4448),(R+4368),8);
}
B6917ed:{NFSU2_TR(0x6917ed);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6917f1:{NFSU2_TR(0x6917f1);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6917f5:{NFSU2_TR(0x6917f5);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6917f8:{NFSU2_TR(0x6917f8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B6917fc:{NFSU2_TR(0x6917fc);
__builtin_memmove((R+4384),(R+4368),8);
}
B6917ff:{NFSU2_TR(0x6917ff);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B691802:{NFSU2_TR(0x691802);
__builtin_memmove((R+4468),(R+4464),4);
}
B691805:{NFSU2_TR(0x691805);
__builtin_memmove((R+4452),(R+4448),4);
}
B691808:{NFSU2_TR(0x691808);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69180d:{NFSU2_TR(0x69180d);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691811:{NFSU2_TR(0x691811);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B691815:{NFSU2_TR(0x691815);
__builtin_memmove((R+4416),(R+4368),8);
}
B691818:{NFSU2_TR(0x691818);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B69181b:{NFSU2_TR(0x69181b);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B691823:{NFSU2_TR(0x691823);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B69182b:{NFSU2_TR(0x69182b);
__builtin_memmove((R+4404),(R+4352),4);
}
B69182e:{NFSU2_TR(0x69182e);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B691832:{NFSU2_TR(0x691832);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691837:{NFSU2_TR(0x691837);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B69183b:{NFSU2_TR(0x69183b);
__builtin_memmove((R+4400),(R+4384),8);
}
B69183e:{NFSU2_TR(0x69183e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B691842:{NFSU2_TR(0x691842);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B691846:{NFSU2_TR(0x691846);
__builtin_memmove((R+4432),(R+4416),8);
}
B691849:{NFSU2_TR(0x691849);
__builtin_memmove((R+4388),(R+4352),4);
}
B69184c:{NFSU2_TR(0x69184c);
__builtin_memmove((R+4448),(R+4368),8);
}
B69184f:{NFSU2_TR(0x69184f);
__builtin_memmove((R+4420),(R+4464),4);
}
B691852:{NFSU2_TR(0x691852);
__builtin_memmove((R+4372),(R+4368),4);
}
B691855:{NFSU2_TR(0x691855);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69185a:{NFSU2_TR(0x69185a);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B69185d:{NFSU2_TR(0x69185d);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B691864:{NFSU2_TR(0x691864);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691869:{NFSU2_TR(0x691869);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B69186c:{NFSU2_TR(0x69186c);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691871:{NFSU2_TR(0x691871);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B691874:{NFSU2_TR(0x691874);
__builtin_memmove((R+4452),(R+4400),4);
}
B691877:{NFSU2_TR(0x691877);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B69187b:{NFSU2_TR(0x69187b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691880:{NFSU2_TR(0x691880);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691885:{NFSU2_TR(0x691885);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B691887:{NFSU2_TR(0x691887);
if(r1(F+6)){{[[clang::musttail]] return blk_691aa2(ARGS);}}
}
B69188d:L69188d:{bud-=129;NFSU2_TR(0x69188d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691891:{NFSU2_TR(0x691891);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691895:{NFSU2_TR(0x691895);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691898:{NFSU2_TR(0x691898);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B69189c:{NFSU2_TR(0x69189c);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6918a0:{NFSU2_TR(0x6918a0);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6918a4:{NFSU2_TR(0x6918a4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6918a8:{NFSU2_TR(0x6918a8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6918ac:{NFSU2_TR(0x6918ac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6918af:{NFSU2_TR(0x6918af);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6918b3:{NFSU2_TR(0x6918b3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B6918b7:{NFSU2_TR(0x6918b7);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6918ba:{NFSU2_TR(0x6918ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6918bf:{NFSU2_TR(0x6918bf);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6918c2:{NFSU2_TR(0x6918c2);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6918c7:{NFSU2_TR(0x6918c7);
__builtin_memmove((R+4356),(R+4352),4);
}
B6918ca:{NFSU2_TR(0x6918ca);
__builtin_memmove((R+4372),(R+4368),4);
}
B6918cd:{NFSU2_TR(0x6918cd);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6918d1:{NFSU2_TR(0x6918d1);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6918d4:{NFSU2_TR(0x6918d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6918da:{NFSU2_TR(0x6918da);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6918df:{NFSU2_TR(0x6918df);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6918e3:{NFSU2_TR(0x6918e3);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6918e6:{NFSU2_TR(0x6918e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6918ec:{NFSU2_TR(0x6918ec);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6918f0:{NFSU2_TR(0x6918f0);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6918f4:{NFSU2_TR(0x6918f4);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6918f8:{NFSU2_TR(0x6918f8);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6918fe:{NFSU2_TR(0x6918fe);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691902:{NFSU2_TR(0x691902);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691906:{NFSU2_TR(0x691906);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69190a:{NFSU2_TR(0x69190a);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691910:{NFSU2_TR(0x691910);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691914:{NFSU2_TR(0x691914);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691918:{NFSU2_TR(0x691918);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69191c:{NFSU2_TR(0x69191c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691920:{NFSU2_TR(0x691920);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B691923:{NFSU2_TR(0x691923);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691927:{NFSU2_TR(0x691927);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69192b:{NFSU2_TR(0x69192b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69192e:{NFSU2_TR(0x69192e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691933:{NFSU2_TR(0x691933);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691936:{NFSU2_TR(0x691936);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69193b:{NFSU2_TR(0x69193b);
__builtin_memmove((R+4356),(R+4352),4);
}
B69193e:{NFSU2_TR(0x69193e);
__builtin_memmove((R+4372),(R+4368),4);
}
B691941:{NFSU2_TR(0x691941);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691945:{NFSU2_TR(0x691945);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691948:{NFSU2_TR(0x691948);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69194e:{NFSU2_TR(0x69194e);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691953:{NFSU2_TR(0x691953);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691957:{NFSU2_TR(0x691957);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69195a:{NFSU2_TR(0x69195a);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691960:{NFSU2_TR(0x691960);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691964:{NFSU2_TR(0x691964);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691968:{NFSU2_TR(0x691968);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69196c:{NFSU2_TR(0x69196c);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691972:{NFSU2_TR(0x691972);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691976:{NFSU2_TR(0x691976);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69197a:{NFSU2_TR(0x69197a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69197e:{NFSU2_TR(0x69197e);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691984:{NFSU2_TR(0x691984);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691988:{NFSU2_TR(0x691988);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69198c:{NFSU2_TR(0x69198c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691990:{NFSU2_TR(0x691990);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691994:{NFSU2_TR(0x691994);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691998:{NFSU2_TR(0x691998);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69199c:{NFSU2_TR(0x69199c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6919a0:{NFSU2_TR(0x6919a0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6919a3:{NFSU2_TR(0x6919a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6919a8:{NFSU2_TR(0x6919a8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6919ab:{NFSU2_TR(0x6919ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6919b0:{NFSU2_TR(0x6919b0);
__builtin_memmove((R+4356),(R+4352),4);
}
B6919b3:{NFSU2_TR(0x6919b3);
__builtin_memmove((R+4372),(R+4368),4);
}
B6919b6:{NFSU2_TR(0x6919b6);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6919ba:{NFSU2_TR(0x6919ba);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6919bd:{NFSU2_TR(0x6919bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6919c3:{NFSU2_TR(0x6919c3);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6919c8:{NFSU2_TR(0x6919c8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6919cc:{NFSU2_TR(0x6919cc);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6919cf:{NFSU2_TR(0x6919cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6919d5:{NFSU2_TR(0x6919d5);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6919d9:{NFSU2_TR(0x6919d9);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6919dd:{NFSU2_TR(0x6919dd);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6919e1:{NFSU2_TR(0x6919e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6919e7:{NFSU2_TR(0x6919e7);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6919eb:{NFSU2_TR(0x6919eb);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6919ef:{NFSU2_TR(0x6919ef);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6919f3:{NFSU2_TR(0x6919f3);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6919f9:{NFSU2_TR(0x6919f9);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6919fd:{NFSU2_TR(0x6919fd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691a01:{NFSU2_TR(0x691a01);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691a05:{NFSU2_TR(0x691a05);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691a09:{NFSU2_TR(0x691a09);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a0d:{NFSU2_TR(0x691a0d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691a11:{NFSU2_TR(0x691a11);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a15:{NFSU2_TR(0x691a15);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691a18:{NFSU2_TR(0x691a18);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691a1d:{NFSU2_TR(0x691a1d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691a20:{NFSU2_TR(0x691a20);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691a25:{NFSU2_TR(0x691a25);
__builtin_memmove((R+4356),(R+4352),4);
}
B691a28:{NFSU2_TR(0x691a28);
__builtin_memmove((R+4372),(R+4368),4);
}
B691a2b:{NFSU2_TR(0x691a2b);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691a2f:{NFSU2_TR(0x691a2f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691a32:{NFSU2_TR(0x691a32);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691a38:{NFSU2_TR(0x691a38);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691a3d:{NFSU2_TR(0x691a3d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691a41:{NFSU2_TR(0x691a41);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691a44:{NFSU2_TR(0x691a44);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691a4a:{NFSU2_TR(0x691a4a);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691a4e:{NFSU2_TR(0x691a4e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691a52:{NFSU2_TR(0x691a52);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691a56:{NFSU2_TR(0x691a56);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691a5c:{NFSU2_TR(0x691a5c);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691a60:{NFSU2_TR(0x691a60);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691a64:{NFSU2_TR(0x691a64);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691a68:{NFSU2_TR(0x691a68);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691a6e:{NFSU2_TR(0x691a6e);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691a72:{NFSU2_TR(0x691a72);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691a76:{NFSU2_TR(0x691a76);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a7a:{NFSU2_TR(0x691a7a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a7e:{NFSU2_TR(0x691a7e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691a82:{NFSU2_TR(0x691a82);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691a86:{NFSU2_TR(0x691a86);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691a89:{NFSU2_TR(0x691a89);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B691a8d:{NFSU2_TR(0x691a8d);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B691a91:{NFSU2_TR(0x691a91);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B691a95:{NFSU2_TR(0x691a95);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691a99:{NFSU2_TR(0x691a99);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B691a9d:{NFSU2_TR(0x691a9d);
{[[clang::musttail]] return blk_691c74(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_691aa2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691aa2:L691aa2:{bud-=112;NFSU2_TR(0x691aa2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691aa5:{NFSU2_TR(0x691aa5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691aa9:{NFSU2_TR(0x691aa9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691aad:{NFSU2_TR(0x691aad);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691ab0:{NFSU2_TR(0x691ab0);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691ab5:{NFSU2_TR(0x691ab5);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691ab8:{NFSU2_TR(0x691ab8);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691abd:{NFSU2_TR(0x691abd);
__builtin_memmove((R+4356),(R+4352),4);
}
B691ac0:{NFSU2_TR(0x691ac0);
__builtin_memmove((R+4372),(R+4368),4);
}
B691ac3:{NFSU2_TR(0x691ac3);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691ac7:{NFSU2_TR(0x691ac7);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691aca:{NFSU2_TR(0x691aca);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691ad0:{NFSU2_TR(0x691ad0);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691ad5:{NFSU2_TR(0x691ad5);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691ad9:{NFSU2_TR(0x691ad9);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691adc:{NFSU2_TR(0x691adc);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691ae2:{NFSU2_TR(0x691ae2);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691ae6:{NFSU2_TR(0x691ae6);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691aea:{NFSU2_TR(0x691aea);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691aee:{NFSU2_TR(0x691aee);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691af4:{NFSU2_TR(0x691af4);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691af8:{NFSU2_TR(0x691af8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691afc:{NFSU2_TR(0x691afc);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691b00:{NFSU2_TR(0x691b00);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691b06:{NFSU2_TR(0x691b06);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691b0a:{NFSU2_TR(0x691b0a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691b0e:{NFSU2_TR(0x691b0e);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691b12:{NFSU2_TR(0x691b12);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691b16:{NFSU2_TR(0x691b16);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B691b19:{NFSU2_TR(0x691b19);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691b1d:{NFSU2_TR(0x691b1d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691b21:{NFSU2_TR(0x691b21);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691b24:{NFSU2_TR(0x691b24);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691b29:{NFSU2_TR(0x691b29);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691b2c:{NFSU2_TR(0x691b2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691b31:{NFSU2_TR(0x691b31);
__builtin_memmove((R+4356),(R+4352),4);
}
B691b34:{NFSU2_TR(0x691b34);
__builtin_memmove((R+4372),(R+4368),4);
}
B691b37:{NFSU2_TR(0x691b37);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691b3b:{NFSU2_TR(0x691b3b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691b3e:{NFSU2_TR(0x691b3e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691b44:{NFSU2_TR(0x691b44);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691b49:{NFSU2_TR(0x691b49);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691b4d:{NFSU2_TR(0x691b4d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691b50:{NFSU2_TR(0x691b50);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691b56:{NFSU2_TR(0x691b56);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691b5a:{NFSU2_TR(0x691b5a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691b5e:{NFSU2_TR(0x691b5e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691b62:{NFSU2_TR(0x691b62);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691b68:{NFSU2_TR(0x691b68);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691b6c:{NFSU2_TR(0x691b6c);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691b70:{NFSU2_TR(0x691b70);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691b74:{NFSU2_TR(0x691b74);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691b7a:{NFSU2_TR(0x691b7a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691b7e:{NFSU2_TR(0x691b7e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691b82:{NFSU2_TR(0x691b82);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691b86:{NFSU2_TR(0x691b86);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691b8a:{NFSU2_TR(0x691b8a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691b8e:{NFSU2_TR(0x691b8e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691b92:{NFSU2_TR(0x691b92);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691b96:{NFSU2_TR(0x691b96);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691b99:{NFSU2_TR(0x691b99);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691b9e:{NFSU2_TR(0x691b9e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691ba1:{NFSU2_TR(0x691ba1);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691ba6:{NFSU2_TR(0x691ba6);
__builtin_memmove((R+4356),(R+4352),4);
}
B691ba9:{NFSU2_TR(0x691ba9);
__builtin_memmove((R+4372),(R+4368),4);
}
B691bac:{NFSU2_TR(0x691bac);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691bb0:{NFSU2_TR(0x691bb0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691bb3:{NFSU2_TR(0x691bb3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691bb9:{NFSU2_TR(0x691bb9);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691bbe:{NFSU2_TR(0x691bbe);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691bc2:{NFSU2_TR(0x691bc2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691bc5:{NFSU2_TR(0x691bc5);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691bcb:{NFSU2_TR(0x691bcb);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691bcf:{NFSU2_TR(0x691bcf);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691bd3:{NFSU2_TR(0x691bd3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691bd7:{NFSU2_TR(0x691bd7);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691bdd:{NFSU2_TR(0x691bdd);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691be1:{NFSU2_TR(0x691be1);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691be5:{NFSU2_TR(0x691be5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691be9:{NFSU2_TR(0x691be9);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691bef:{NFSU2_TR(0x691bef);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691bf3:{NFSU2_TR(0x691bf3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691bf7:{NFSU2_TR(0x691bf7);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691bfb:{NFSU2_TR(0x691bfb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691bff:{NFSU2_TR(0x691bff);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c03:{NFSU2_TR(0x691c03);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B691c07:{NFSU2_TR(0x691c07);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c0b:{NFSU2_TR(0x691c0b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691c0e:{NFSU2_TR(0x691c0e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691c13:{NFSU2_TR(0x691c13);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691c16:{NFSU2_TR(0x691c16);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691c1b:{NFSU2_TR(0x691c1b);
__builtin_memmove((R+4356),(R+4352),4);
}
B691c1e:{NFSU2_TR(0x691c1e);
__builtin_memmove((R+4372),(R+4368),4);
}
B691c21:{NFSU2_TR(0x691c21);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691c25:{NFSU2_TR(0x691c25);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691c28:{NFSU2_TR(0x691c28);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691c2e:{NFSU2_TR(0x691c2e);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691c33:{NFSU2_TR(0x691c33);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691c37:{NFSU2_TR(0x691c37);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691c3a:{NFSU2_TR(0x691c3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691c40:{NFSU2_TR(0x691c40);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B691c44:{NFSU2_TR(0x691c44);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691c48:{NFSU2_TR(0x691c48);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691c4c:{NFSU2_TR(0x691c4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B691c52:{NFSU2_TR(0x691c52);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691c56:{NFSU2_TR(0x691c56);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B691c5a:{NFSU2_TR(0x691c5a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691c5e:{NFSU2_TR(0x691c5e);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B691c64:{NFSU2_TR(0x691c64);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691c68:{NFSU2_TR(0x691c68);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B691c6c:{NFSU2_TR(0x691c6c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c70:{NFSU2_TR(0x691c70);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_691c74(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_691c74(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691c74:L691c74:{bud-=3;NFSU2_TR(0x691c74);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B691c78:{NFSU2_TR(0x691c78);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B691c7a:{NFSU2_TR(0x691c7a);
if(r1(F+6)){{[[clang::musttail]] return blk_691c9b(ARGS);}}
}
B691c7c:L691c7c:{bud-=8;NFSU2_TR(0x691c7c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691c7f:{NFSU2_TR(0x691c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691c83:{NFSU2_TR(0x691c83);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B691c87:{NFSU2_TR(0x691c87);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B691c8b:{NFSU2_TR(0x691c8b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B691c8f:{NFSU2_TR(0x691c8f);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B691c93:{NFSU2_TR(0x691c93);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691c97:{NFSU2_TR(0x691c97);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_691c9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_691c9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691c9b:L691c9b:{bud-=3;NFSU2_TR(0x691c9b);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x40ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x40ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x40ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B691c9e:{NFSU2_TR(0x691c9e);
w2(R+4260,0xffffu);
}
B691ca0:{NFSU2_TR(0x691ca0);
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
PN u32 blk_691ca3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691ca3:L691ca3:{bud-=16;NFSU2_TR(0x691ca3);
__builtin_memmove((R+28),(R+28),4);
}
B691ca5:{NFSU2_TR(0x691ca5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B691ca6:{NFSU2_TR(0x691ca6);
__builtin_memmove((R+20),(G+16),4);
}
B691ca8:{NFSU2_TR(0x691ca8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x18ull))));
}
B691cab:{NFSU2_TR(0x691cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B691cae:{NFSU2_TR(0x691cae);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff8ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B691cb1:{NFSU2_TR(0x691cb1);
__builtin_memmove((G+0),(G+16),4);
}
B691cb4:{NFSU2_TR(0x691cb4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691cb7:{NFSU2_TR(0x691cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691cbb:{NFSU2_TR(0x691cbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B691cbf:{NFSU2_TR(0x691cbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B691cc3:{NFSU2_TR(0x691cc3);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B691cc7:{NFSU2_TR(0x691cc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B691ccc:{NFSU2_TR(0x691ccc);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B691ccd:{NFSU2_TR(0x691ccd);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B691cce:{NFSU2_TR(0x691cce);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x691cd3ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_693a80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_691cd3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691cd3:L691cd3:{bud-=2;NFSU2_TR(0x691cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B691cd7:{NFSU2_TR(0x691cd7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x691cdcull));
{[[clang::musttail]] return blk_6d4460(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_691cdc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691cdc:L691cdc:{bud-=63;NFSU2_TR(0x691cdc);
__builtin_memmove((R+4464),(R+4352),8);
}
B691cdf:{NFSU2_TR(0x691cdf);
__builtin_memmove((R+4368),(R+4352),8);
}
B691ce2:{NFSU2_TR(0x691ce2);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7158))));}
}
B691cea:{NFSU2_TR(0x691cea);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B691ced:{NFSU2_TR(0x691ced);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691cf1:{NFSU2_TR(0x691cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B691cf6:{NFSU2_TR(0x691cf6);
__builtin_memmove((R+4416),(R+4384),8);
}
B691cf9:{NFSU2_TR(0x691cf9);
__builtin_memmove((R+4432),(R+4400),8);
}
B691cfc:{NFSU2_TR(0x691cfc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
w4(U+4,u32(r8(R+4464)));
s4(u32(r4(U+0)),r4(U+4));
}
B691d01:{NFSU2_TR(0x691d01);
__builtin_memmove((R+4464),(R+4400),8);
}
B691d04:{NFSU2_TR(0x691d04);
__builtin_memmove((R+4404),(R+4400),4);
}
B691d07:{NFSU2_TR(0x691d07);
__builtin_memmove((R+4448),(R+4384),8);
}
B691d0a:{NFSU2_TR(0x691d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B691d0e:{NFSU2_TR(0x691d0e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B691d11:{NFSU2_TR(0x691d11);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B691d15:{NFSU2_TR(0x691d15);
__builtin_memmove((R+4356),(R+4352),4);
}
B691d18:{NFSU2_TR(0x691d18);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B691d1c:{NFSU2_TR(0x691d1c);
__builtin_memmove((R+4372),(R+4368),4);
}
B691d1f:{NFSU2_TR(0x691d1f);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B691d23:{NFSU2_TR(0x691d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B691d26:{NFSU2_TR(0x691d26);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B691d2a:{NFSU2_TR(0x691d2a);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B691d2e:{NFSU2_TR(0x691d2e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4432))));}
}
B691d32:{NFSU2_TR(0x691d32);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691d36:{NFSU2_TR(0x691d36);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B691d3a:{NFSU2_TR(0x691d3a);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B691d3e:{NFSU2_TR(0x691d3e);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B691d42:{NFSU2_TR(0x691d42);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B691d46:{NFSU2_TR(0x691d46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B691d4b:{NFSU2_TR(0x691d4b);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B691d4e:{NFSU2_TR(0x691d4e);
__builtin_memmove((R+4372),(R+4368),4);
}
B691d51:{NFSU2_TR(0x691d51);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B691d55:{NFSU2_TR(0x691d55);
__builtin_memmove((R+4436),(R+4352),4);
}
B691d58:{NFSU2_TR(0x691d58);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B691d5c:{NFSU2_TR(0x691d5c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691d60:{NFSU2_TR(0x691d60);
__builtin_memmove((R+4468),(R+4448),4);
}
B691d63:{NFSU2_TR(0x691d63);
__builtin_memmove((R+4368),(R+4384),8);
}
B691d66:{NFSU2_TR(0x691d66);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B691d69:{NFSU2_TR(0x691d69);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691d6d:{NFSU2_TR(0x691d6d);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B691d71:{NFSU2_TR(0x691d71);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B691d75:{NFSU2_TR(0x691d75);
__builtin_memmove((R+4464),(R+4400),8);
}
B691d78:{NFSU2_TR(0x691d78);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B691d7c:{NFSU2_TR(0x691d7c);
__builtin_memmove((R+4432),(R+4416),8);
}
B691d7f:{NFSU2_TR(0x691d7f);
__builtin_memmove((R+4420),(R+4368),4);
}
B691d82:{NFSU2_TR(0x691d82);
__builtin_memmove((R+4404),(R+4352),4);
}
B691d85:{NFSU2_TR(0x691d85);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4356),4);
}
B691d88:{NFSU2_TR(0x691d88);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B691d8b:{NFSU2_TR(0x691d8b);
__builtin_memmove((R+4468),(R+4464),4);
}
B691d8e:{NFSU2_TR(0x691d8e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691d92:{NFSU2_TR(0x691d92);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),gp(0x7b715c),4);
}
B691d99:{NFSU2_TR(0x691d99);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B691d9d:{NFSU2_TR(0x691d9d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691da1:{NFSU2_TR(0x691da1);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B691da4:{NFSU2_TR(0x691da4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691da8:{NFSU2_TR(0x691da8);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4388),4);
}
B691dab:{NFSU2_TR(0x691dab);
__builtin_memmove((R+4388),(R+4432),4);
}
B691dae:{NFSU2_TR(0x691dae);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691db2:{NFSU2_TR(0x691db2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691db6:{NFSU2_TR(0x691db6);
__builtin_memmove((G+16),(R+20),4);
}
B691db8:{NFSU2_TR(0x691db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B691db9:{NFSU2_TR(0x691db9);
w2(R+4260,0xffffu);
}
B691dbb:{NFSU2_TR(0x691dbb);
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
PN u32 blk_691dbe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B691dbe:L691dbe:{bud-=10;NFSU2_TR(0x691dbe);
__builtin_memmove((R+28),(R+28),4);
}
B691dc0:{NFSU2_TR(0x691dc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B691dc1:{NFSU2_TR(0x691dc1);
__builtin_memmove((R+20),(G+16),4);
}
B691dc3:{NFSU2_TR(0x691dc3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xc0ull))));
}
B691dc9:{NFSU2_TR(0x691dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B691dcc:{NFSU2_TR(0x691dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B691dcf:{NFSU2_TR(0x691dcf);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff8ull))));
}
B691dd2:{NFSU2_TR(0x691dd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B691dd4:{NFSU2_TR(0x691dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B691dd7:{NFSU2_TR(0x691dd7);
if(r1(F+6)){{[[clang::musttail]] return blk_692a65(ARGS);}}
}
B691ddd:L691ddd:{bud-=2;NFSU2_TR(0x691ddd);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B691ddf:{NFSU2_TR(0x691ddf);
if(r1(F+6)){{[[clang::musttail]] return blk_6929c8(ARGS);}}
}
B691de5:L691de5:{bud-=64;NFSU2_TR(0x691de5);
__builtin_memmove((R+4368),gp(0x7b7138),8);
}
B691dec:{NFSU2_TR(0x691dec);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B691def:{NFSU2_TR(0x691def);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B691df3:{NFSU2_TR(0x691df3);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B691df6:{NFSU2_TR(0x691df6);
__builtin_memmove((R+4400),(R+4384),8);
}
B691df9:{NFSU2_TR(0x691df9);
__builtin_memmove((R+4388),(R+4432),4);
}
B691dfc:{NFSU2_TR(0x691dfc);
__builtin_memmove((R+4352),(R+4432),8);
}
B691dff:{NFSU2_TR(0x691dff);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B691e02:{NFSU2_TR(0x691e02);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B691e06:{NFSU2_TR(0x691e06);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e0b:{NFSU2_TR(0x691e0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e10:{NFSU2_TR(0x691e10);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e15:{NFSU2_TR(0x691e15);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e1a:{NFSU2_TR(0x691e1a);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e1f:{NFSU2_TR(0x691e1f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e24:{NFSU2_TR(0x691e24);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691e29:{NFSU2_TR(0x691e29);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B691e2d:{NFSU2_TR(0x691e2d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691e30:{NFSU2_TR(0x691e30);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691e34:{NFSU2_TR(0x691e34);
{wv<8>((R+4400),uo::pswapd<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B691e38:{NFSU2_TR(0x691e38);
__builtin_memmove((R+4448),(R+4352),8);
}
B691e3b:{NFSU2_TR(0x691e3b);
__builtin_memmove((R+4384),(R+4352),8);
}
B691e3e:{NFSU2_TR(0x691e3e);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B691e42:{NFSU2_TR(0x691e42);
__builtin_memmove((R+4416),(R+4368),8);
}
B691e45:{NFSU2_TR(0x691e45);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4372),4);
}
B691e48:{NFSU2_TR(0x691e48);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B691e4c:{NFSU2_TR(0x691e4c);
__builtin_memmove((R+4432),(R+4352),8);
}
B691e4f:{NFSU2_TR(0x691e4f);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B691e53:{NFSU2_TR(0x691e53);
__builtin_memmove((R+4436),(R+4368),4);
}
B691e56:{NFSU2_TR(0x691e56);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691e5a:{NFSU2_TR(0x691e5a);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B691e5e:{NFSU2_TR(0x691e5e);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B691e62:{NFSU2_TR(0x691e62);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B691e66:{NFSU2_TR(0x691e66);
__builtin_memmove((R+4416),(R+4352),8);
}
B691e69:{NFSU2_TR(0x691e69);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7158))));}
}
B691e71:{NFSU2_TR(0x691e71);
__builtin_memmove((R+4432),(R+4368),8);
}
B691e74:{NFSU2_TR(0x691e74);
__builtin_memmove((R+4372),(R+4368),4);
}
B691e77:{NFSU2_TR(0x691e77);
{wv<8>((R+4400),uo::pfpnacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B691e7b:{NFSU2_TR(0x691e7b);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B691e7f:{NFSU2_TR(0x691e7f);
{wv<8>((R+4448),uo::pfpnacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B691e83:{NFSU2_TR(0x691e83);
{wv<8>((R+4384),uo::pfpnacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B691e87:{NFSU2_TR(0x691e87);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B691e8b:{NFSU2_TR(0x691e8b);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691e8f:{NFSU2_TR(0x691e8f);
{wv<8>((R+4416),uo::pfsubr<8>(rv<8>((R+4416)),rv<8>(gp(0x7b7158))));}
}
B691e97:{NFSU2_TR(0x691e97);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B691e9a:{NFSU2_TR(0x691e9a);
__builtin_memmove((R+4368),(R+4352),8);
}
B691e9d:{NFSU2_TR(0x691e9d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ea1:{NFSU2_TR(0x691ea1);
__builtin_memmove((R+4436),(R+4400),4);
}
B691ea4:{NFSU2_TR(0x691ea4);
__builtin_memmove((R+4388),(R+4464),4);
}
B691ea7:{NFSU2_TR(0x691ea7);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4468),4);
}
B691eaa:{NFSU2_TR(0x691eaa);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4452),4);
}
B691ead:{NFSU2_TR(0x691ead);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691eb1:{NFSU2_TR(0x691eb1);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4468),4);
}
B691eb4:{NFSU2_TR(0x691eb4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691eb8:{NFSU2_TR(0x691eb8);
__builtin_memmove((R+4452),(R+4368),4);
}
B691ebb:{NFSU2_TR(0x691ebb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ebf:{NFSU2_TR(0x691ebf);
__builtin_memmove((R+4468),gp(0x7b7158),4);
}
B691ec6:{NFSU2_TR(0x691ec6);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B691ec9:{NFSU2_TR(0x691ec9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ecd:{NFSU2_TR(0x691ecd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ed1:{NFSU2_TR(0x691ed1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691ed5:{NFSU2_TR(0x691ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B691ed8:{NFSU2_TR(0x691ed8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B691eda:{NFSU2_TR(0x691eda);
if(r1(F+6)){{[[clang::musttail]] return blk_6925ad(ARGS);}}
}
B691ee0:L691ee0:{bud-=61;NFSU2_TR(0x691ee0);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691ee5:{NFSU2_TR(0x691ee5);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691eea:{NFSU2_TR(0x691eea);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B691eef:{NFSU2_TR(0x691eef);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691ef4:{NFSU2_TR(0x691ef4);
__builtin_memmove((R+4384),(R+4352),8);
}
B691ef7:{NFSU2_TR(0x691ef7);
__builtin_memmove((R+4356),(R+4368),4);
}
B691efa:{NFSU2_TR(0x691efa);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B691efd:{NFSU2_TR(0x691efd);
__builtin_memmove((R+4432),(R+4400),8);
}
B691f00:{NFSU2_TR(0x691f00);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f08:{NFSU2_TR(0x691f08);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f10:{NFSU2_TR(0x691f10);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691f15:{NFSU2_TR(0x691f15);
__builtin_memmove((R+4404),(R+4416),4);
}
B691f18:{NFSU2_TR(0x691f18);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691f1d:{NFSU2_TR(0x691f1d);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B691f22:{NFSU2_TR(0x691f22);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B691f25:{NFSU2_TR(0x691f25);
__builtin_memmove((R+4368),(R+4448),8);
}
B691f28:{NFSU2_TR(0x691f28);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f30:{NFSU2_TR(0x691f30);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f38:{NFSU2_TR(0x691f38);
__builtin_memmove((R+4452),(R+4464),4);
}
B691f3b:{NFSU2_TR(0x691f3b);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691f40:{NFSU2_TR(0x691f40);
__builtin_memmove((R+4384),(R+4352),8);
}
B691f43:{NFSU2_TR(0x691f43);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B691f46:{NFSU2_TR(0x691f46);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f4e:{NFSU2_TR(0x691f4e);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B691f51:{NFSU2_TR(0x691f51);
__builtin_memmove((R+4388),(R+4416),4);
}
B691f54:{NFSU2_TR(0x691f54);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f5c:{NFSU2_TR(0x691f5c);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f64:{NFSU2_TR(0x691f64);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f6c:{NFSU2_TR(0x691f6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B691f6f:{NFSU2_TR(0x691f6f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B691f72:{NFSU2_TR(0x691f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B691f76:{NFSU2_TR(0x691f76);
w8(R+4368,u64(m4(0x7b7148)));
}
B691f7d:{NFSU2_TR(0x691f7d);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B691f80:{NFSU2_TR(0x691f80);
{wv<8>((R+4384),uo::pswapd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B691f84:{NFSU2_TR(0x691f84);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B691f87:{NFSU2_TR(0x691f87);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f8b:{NFSU2_TR(0x691f8b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f8f:{NFSU2_TR(0x691f8f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f93:{NFSU2_TR(0x691f93);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f97:{NFSU2_TR(0x691f97);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691f9b:{NFSU2_TR(0x691f9b);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B691f9f:{NFSU2_TR(0x691f9f);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B691fa3:{NFSU2_TR(0x691fa3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691fa7:{NFSU2_TR(0x691fa7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B691fab:{NFSU2_TR(0x691fab);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B691fae:{NFSU2_TR(0x691fae);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B691fb2:{NFSU2_TR(0x691fb2);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B691fba:{NFSU2_TR(0x691fba);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B691fbd:{NFSU2_TR(0x691fbd);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B691fc5:{NFSU2_TR(0x691fc5);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B691fc8:{NFSU2_TR(0x691fc8);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B691fd0:{NFSU2_TR(0x691fd0);
__builtin_memmove((R+4356),(R+4352),4);
}
B691fd3:{NFSU2_TR(0x691fd3);
__builtin_memmove((R+4372),(R+4368),4);
}
B691fd6:{NFSU2_TR(0x691fd6);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B691fda:{NFSU2_TR(0x691fda);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B691fdd:{NFSU2_TR(0x691fdd);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B691fe6:{NFSU2_TR(0x691fe6);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B691fee:{NFSU2_TR(0x691fee);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B691ff2:{NFSU2_TR(0x691ff2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B691ff5:{NFSU2_TR(0x691ff5);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B691ffe:{NFSU2_TR(0x691ffe);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
{[[clang::musttail]] return blk_692002(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_691(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x691001:[[clang::musttail]] return blk_691001(c,a4,a0,a1,bud);
case 0x691059:[[clang::musttail]] return blk_691059(c,a4,a0,a1,bud);
case 0x691097:[[clang::musttail]] return blk_691097(c,a4,a0,a1,bud);
case 0x6910c9:[[clang::musttail]] return blk_6910c9(c,a4,a0,a1,bud);
case 0x6913c6:[[clang::musttail]] return blk_6913c6(c,a4,a0,a1,bud);
case 0x69159c:[[clang::musttail]] return blk_69159c(c,a4,a0,a1,bud);
case 0x6915c2:[[clang::musttail]] return blk_6915c2(c,a4,a0,a1,bud);
case 0x6915ca:[[clang::musttail]] return blk_6915ca(c,a4,a0,a1,bud);
case 0x6915fd:[[clang::musttail]] return blk_6915fd(c,a4,a0,a1,bud);
case 0x69160f:[[clang::musttail]] return blk_69160f(c,a4,a0,a1,bud);
case 0x69161e:[[clang::musttail]] return blk_69161e(c,a4,a0,a1,bud);
case 0x69176f:[[clang::musttail]] return blk_69176f(c,a4,a0,a1,bud);
case 0x691aa2:[[clang::musttail]] return blk_691aa2(c,a4,a0,a1,bud);
case 0x691c74:[[clang::musttail]] return blk_691c74(c,a4,a0,a1,bud);
case 0x691c9b:[[clang::musttail]] return blk_691c9b(c,a4,a0,a1,bud);
case 0x691ca3:[[clang::musttail]] return blk_691ca3(c,a4,a0,a1,bud);
case 0x691cd3:[[clang::musttail]] return blk_691cd3(c,a4,a0,a1,bud);
case 0x691cdc:[[clang::musttail]] return blk_691cdc(c,a4,a0,a1,bud);
case 0x691dbe:[[clang::musttail]] return blk_691dbe(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_691(Cpu& c){u8* R=c.regs.data();return ent_691(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
