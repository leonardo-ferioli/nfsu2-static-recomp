#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69004b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690065(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690069(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690074(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6900b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690bdf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690ffa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691059(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_691097(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6910c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d4460(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690071(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690081(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6900d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6900e6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690136(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690146(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690191(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6901d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690247(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690319(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6903ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_690002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690002:L690002:{bud-=18;NFSU2_TR(0x690002);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>(gp(0x7b7218))));}
}
B69000a:{NFSU2_TR(0x69000a);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69000d:{NFSU2_TR(0x69000d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690011:{NFSU2_TR(0x690011);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690015:{NFSU2_TR(0x690015);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690019:{NFSU2_TR(0x690019);
__builtin_memmove((R+4416),(R+4400),8);
}
B69001c:{NFSU2_TR(0x69001c);
__builtin_memmove((R+4448),(R+4400),8);
}
B69001f:{NFSU2_TR(0x69001f);
__builtin_memmove((R+4420),(R+4416),4);
}
B690022:{NFSU2_TR(0x690022);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B690025:{NFSU2_TR(0x690025);
__builtin_memmove((R+4432),(R+4416),8);
}
B690028:{NFSU2_TR(0x690028);
__builtin_memmove((R+4464),(R+4448),8);
}
B69002b:{NFSU2_TR(0x69002b);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B69002f:{NFSU2_TR(0x69002f);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B690033:{NFSU2_TR(0x690033);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690037:{NFSU2_TR(0x690037);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B69003b:{NFSU2_TR(0x69003b);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B69003f:{NFSU2_TR(0x69003f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B690043:{NFSU2_TR(0x690043);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>(gp(0x7b7220))));}
{[[clang::musttail]] return blk_69004b(ARGS);}
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
PN u32 blk_69004b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69004b:L69004b:{bud-=6;NFSU2_TR(0x69004b);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7218))));}
}
B690053:{NFSU2_TR(0x690053);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690057:{NFSU2_TR(0x690057);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69005b:{NFSU2_TR(0x69005b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69005f:{NFSU2_TR(0x69005f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690063:{NFSU2_TR(0x690063);
__builtin_memmove((G+16),(R+20),4);
{[[clang::musttail]] return blk_690065(ARGS);}
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
PN u32 blk_690065(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690065:L690065:{bud-=1;NFSU2_TR(0x690065);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
{[[clang::musttail]] return blk_690069(ARGS);}
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
PN u32 blk_690069(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690069:L690069:{bud-=3;NFSU2_TR(0x690069);
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
}
B69006c:{NFSU2_TR(0x69006c);
w2(R+4260,0xffffu);
}
B69006e:{NFSU2_TR(0x69006e);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
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
PN u32 blk_690071(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690071:L690071:{bud-=2;NFSU2_TR(0x690071);
__builtin_memmove((R+28),(R+28),4);
}
B690073:{NFSU2_TR(0x690073);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_690074(ARGS);}
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
PN u32 blk_690074(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690074:L690074:{bud-=4;NFSU2_TR(0x690074);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B690075:{NFSU2_TR(0x690075);
w2(R+4260,0xffffu);
}
B690077:{NFSU2_TR(0x690077);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B69007c:{NFSU2_TR(0x69007c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x690081ull));
{[[clang::musttail]] return blk_6d4460(ARGS);}
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
PN u32 blk_690081(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690081:L690081:{bud-=11;NFSU2_TR(0x690081);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B690085:{NFSU2_TR(0x690085);
__builtin_memmove((R+4416),(R+4352),8);
}
B690088:{NFSU2_TR(0x690088);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B69008b:{NFSU2_TR(0x69008b);
__builtin_memmove((R+4384),gp(0x7b7220),8);
}
B690092:{NFSU2_TR(0x690092);
__builtin_memmove((R+4400),gp(0x7b7218),8);
}
B690099:{NFSU2_TR(0x690099);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x20ull))));
}
B69009d:{NFSU2_TR(0x69009d);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6900a0:{NFSU2_TR(0x6900a0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6900a4:{NFSU2_TR(0x6900a4);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900a8:{NFSU2_TR(0x6900a8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900ac:{NFSU2_TR(0x6900ac);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
{[[clang::musttail]] return blk_6900b0(ARGS);}
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
PN u32 blk_6900b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6900b0:L6900b0:{bud-=11;NFSU2_TR(0x6900b0);
w8(R+4416,u64(u64(r8(R+4416))^u64(m8(0x7b71d0))));
}
B6900b7:{NFSU2_TR(0x6900b7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6900bb:{NFSU2_TR(0x6900bb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6900bf:{NFSU2_TR(0x6900bf);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900c3:{NFSU2_TR(0x6900c3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x24ull))));
w4(U+4,u32(r8(R+4416)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900c7:{NFSU2_TR(0x6900c7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900cb:{NFSU2_TR(0x6900cb);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2cull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6900cf:{NFSU2_TR(0x6900cf);
w2(R+4260,0xffffu);
}
B6900d1:{NFSU2_TR(0x6900d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6900d2:{NFSU2_TR(0x6900d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6900d3:{NFSU2_TR(0x6900d3);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
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
PN u32 blk_6900d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6900d6:L6900d6:{bud-=6;NFSU2_TR(0x6900d6);
__builtin_memmove((R+28),(R+28),4);
}
B6900d8:{NFSU2_TR(0x6900d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6900d9:{NFSU2_TR(0x6900d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6900da:{NFSU2_TR(0x6900da);
w2(R+4260,0xffffu);
}
B6900dc:{NFSU2_TR(0x6900dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B6900e1:{NFSU2_TR(0x6900e1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6900e6ull));
{[[clang::musttail]] return blk_6d4460(ARGS);}
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
PN u32 blk_6900e6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6900e6:L6900e6:{bud-=20;NFSU2_TR(0x6900e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6900ea:{NFSU2_TR(0x6900ea);
__builtin_memmove((R+4416),(R+4352),8);
}
B6900ed:{NFSU2_TR(0x6900ed);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x7b71a8))));
}
B6900f4:{NFSU2_TR(0x6900f4);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B6900f7:{NFSU2_TR(0x6900f7);
__builtin_memmove((R+4384),gp(0x7b7220),8);
}
B6900fe:{NFSU2_TR(0x6900fe);
__builtin_memmove((R+4400),gp(0x7b7218),8);
}
B690105:{NFSU2_TR(0x690105);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x20ull))));
}
B690109:{NFSU2_TR(0x690109);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69010d:{NFSU2_TR(0x69010d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690111:{NFSU2_TR(0x690111);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690115:{NFSU2_TR(0x690115);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690119:{NFSU2_TR(0x690119);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69011d:{NFSU2_TR(0x69011d);
w8(R+4416,u64(u64(r8(R+4416))^u64(m8(0x7b71d0))));
}
B690124:{NFSU2_TR(0x690124);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B690127:{NFSU2_TR(0x690127);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69012b:{NFSU2_TR(0x69012b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69012f:{NFSU2_TR(0x69012f);
w2(R+4260,0xffffu);
}
B690131:{NFSU2_TR(0x690131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B690132:{NFSU2_TR(0x690132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B690133:{NFSU2_TR(0x690133);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
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
PN u32 blk_690136(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690136:L690136:{bud-=6;NFSU2_TR(0x690136);
__builtin_memmove((R+28),(R+28),4);
}
B690138:{NFSU2_TR(0x690138);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B690139:{NFSU2_TR(0x690139);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69013a:{NFSU2_TR(0x69013a);
w2(R+4260,0xffffu);
}
B69013c:{NFSU2_TR(0x69013c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B690141:{NFSU2_TR(0x690141);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x690146ull));
{[[clang::musttail]] return blk_6d4460(ARGS);}
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
PN u32 blk_690146(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690146:L690146:{bud-=20;NFSU2_TR(0x690146);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69014a:{NFSU2_TR(0x69014a);
__builtin_memmove((R+4416),(R+4352),8);
}
B69014d:{NFSU2_TR(0x69014d);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B690150:{NFSU2_TR(0x690150);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B690153:{NFSU2_TR(0x690153);
__builtin_memmove((R+4384),gp(0x7b7220),8);
}
B69015a:{NFSU2_TR(0x69015a);
__builtin_memmove((R+4400),gp(0x7b7218),8);
}
B690161:{NFSU2_TR(0x690161);
__builtin_memmove((R+4420),(R+4352),4);
}
B690164:{NFSU2_TR(0x690164);
w8(R+4416,u64(u64(r8(R+4416))^u64(m8(0x7b71d0))));
}
B69016b:{NFSU2_TR(0x69016b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69016e:{NFSU2_TR(0x69016e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690172:{NFSU2_TR(0x690172);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690176:{NFSU2_TR(0x690176);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69017a:{NFSU2_TR(0x69017a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69017e:{NFSU2_TR(0x69017e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690182:{NFSU2_TR(0x690182);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690186:{NFSU2_TR(0x690186);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69018a:{NFSU2_TR(0x69018a);
w2(R+4260,0xffffu);
}
B69018c:{NFSU2_TR(0x69018c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69018d:{NFSU2_TR(0x69018d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69018e:{NFSU2_TR(0x69018e);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
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
PN u32 blk_690191(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690191:L690191:{bud-=18;NFSU2_TR(0x690191);
w2(R+4260,0xffffu);
}
B690193:{NFSU2_TR(0x690193);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B690197:{NFSU2_TR(0x690197);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B69019c:{NFSU2_TR(0x69019c);
__builtin_memmove((R+4368),gp(0x7b7218),8);
}
B6901a3:{NFSU2_TR(0x6901a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B6901a8:{NFSU2_TR(0x6901a8);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6901ab:{NFSU2_TR(0x6901ab);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x20ull))));
}
B6901af:{NFSU2_TR(0x6901af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B6901b4:{NFSU2_TR(0x6901b4);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6901b7:{NFSU2_TR(0x6901b7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901bb:{NFSU2_TR(0x6901bb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901bf:{NFSU2_TR(0x6901bf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901c3:{NFSU2_TR(0x6901c3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901c7:{NFSU2_TR(0x6901c7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901cb:{NFSU2_TR(0x6901cb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901cf:{NFSU2_TR(0x6901cf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6901d3:{NFSU2_TR(0x6901d3);
w2(R+4260,0xffffu);
}
B6901d5:{NFSU2_TR(0x6901d5);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
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
PN u32 blk_6901d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6901d8:L6901d8:{bud-=32;NFSU2_TR(0x6901d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6901dc:{NFSU2_TR(0x6901dc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6901df:{NFSU2_TR(0x6901df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6901e3:{NFSU2_TR(0x6901e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6901e7:{NFSU2_TR(0x6901e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6901eb:{NFSU2_TR(0x6901eb);
__builtin_memmove((R+4384),(R+4352),8);
}
B6901ee:{NFSU2_TR(0x6901ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6901f2:{NFSU2_TR(0x6901f2);
__builtin_memmove((R+4356),(R+4368),4);
}
B6901f5:{NFSU2_TR(0x6901f5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B6901f8:{NFSU2_TR(0x6901f8);
__builtin_memmove((R+4432),(R+4400),8);
}
B6901fb:{NFSU2_TR(0x6901fb);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6901fe:{NFSU2_TR(0x6901fe);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690202:{NFSU2_TR(0x690202);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690206:{NFSU2_TR(0x690206);
__builtin_memmove((R+4404),(R+4416),4);
}
B690209:{NFSU2_TR(0x690209);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69020d:{NFSU2_TR(0x69020d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690211:{NFSU2_TR(0x690211);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B690214:{NFSU2_TR(0x690214);
__builtin_memmove((R+4368),(R+4448),8);
}
B690217:{NFSU2_TR(0x690217);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69021b:{NFSU2_TR(0x69021b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69021f:{NFSU2_TR(0x69021f);
__builtin_memmove((R+4452),(R+4464),4);
}
B690222:{NFSU2_TR(0x690222);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690226:{NFSU2_TR(0x690226);
__builtin_memmove((R+4384),(R+4352),8);
}
B690229:{NFSU2_TR(0x690229);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B69022c:{NFSU2_TR(0x69022c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690230:{NFSU2_TR(0x690230);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B690233:{NFSU2_TR(0x690233);
__builtin_memmove((R+4388),(R+4416),4);
}
B690236:{NFSU2_TR(0x690236);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69023a:{NFSU2_TR(0x69023a);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69023e:{NFSU2_TR(0x69023e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690242:{NFSU2_TR(0x690242);
w2(R+4260,0xffffu);
}
B690244:{NFSU2_TR(0x690244);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
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
PN u32 blk_690247(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690247:L690247:{bud-=58;NFSU2_TR(0x690247);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69024b:{NFSU2_TR(0x69024b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B69024f:{NFSU2_TR(0x69024f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690252:{NFSU2_TR(0x690252);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690256:{NFSU2_TR(0x690256);
__builtin_memmove((R+4384),(R+4352),8);
}
B690259:{NFSU2_TR(0x690259);
__builtin_memmove((R+4400),(R+4352),8);
}
B69025c:{NFSU2_TR(0x69025c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B690260:{NFSU2_TR(0x690260);
__builtin_memmove((R+4416),(R+4368),8);
}
B690263:{NFSU2_TR(0x690263);
__builtin_memmove((R+4464),(R+4368),8);
}
B690266:{NFSU2_TR(0x690266);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B69026a:{NFSU2_TR(0x69026a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69026d:{NFSU2_TR(0x69026d);
__builtin_memmove((R+4432),(R+4352),8);
}
B690270:{NFSU2_TR(0x690270);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B690273:{NFSU2_TR(0x690273);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B690277:{NFSU2_TR(0x690277);
__builtin_memmove((R+4372),(R+4352),4);
}
B69027a:{NFSU2_TR(0x69027a);
__builtin_memmove((R+4468),(R+4464),4);
}
B69027d:{NFSU2_TR(0x69027d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690281:{NFSU2_TR(0x690281);
__builtin_memmove((R+4448),(R+4368),8);
}
B690284:{NFSU2_TR(0x690284);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B690288:{NFSU2_TR(0x690288);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B69028c:{NFSU2_TR(0x69028c);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B69028f:{NFSU2_TR(0x69028f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B690293:{NFSU2_TR(0x690293);
__builtin_memmove((R+4384),(R+4368),8);
}
B690296:{NFSU2_TR(0x690296);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B690299:{NFSU2_TR(0x690299);
__builtin_memmove((R+4468),(R+4464),4);
}
B69029c:{NFSU2_TR(0x69029c);
__builtin_memmove((R+4452),(R+4448),4);
}
B69029f:{NFSU2_TR(0x69029f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6902a3:{NFSU2_TR(0x6902a3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6902a7:{NFSU2_TR(0x6902a7);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B6902ab:{NFSU2_TR(0x6902ab);
__builtin_memmove((R+4416),(R+4368),8);
}
B6902ae:{NFSU2_TR(0x6902ae);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B6902b1:{NFSU2_TR(0x6902b1);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B6902b9:{NFSU2_TR(0x6902b9);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B6902c1:{NFSU2_TR(0x6902c1);
__builtin_memmove((R+4404),(R+4352),4);
}
B6902c4:{NFSU2_TR(0x6902c4);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B6902c8:{NFSU2_TR(0x6902c8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6902cc:{NFSU2_TR(0x6902cc);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6902d0:{NFSU2_TR(0x6902d0);
__builtin_memmove((R+4400),(R+4384),8);
}
B6902d3:{NFSU2_TR(0x6902d3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B6902d7:{NFSU2_TR(0x6902d7);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B6902db:{NFSU2_TR(0x6902db);
__builtin_memmove((R+4432),(R+4416),8);
}
B6902de:{NFSU2_TR(0x6902de);
__builtin_memmove((R+4388),(R+4352),4);
}
B6902e1:{NFSU2_TR(0x6902e1);
__builtin_memmove((R+4448),(R+4368),8);
}
B6902e4:{NFSU2_TR(0x6902e4);
__builtin_memmove((R+4420),(R+4464),4);
}
B6902e7:{NFSU2_TR(0x6902e7);
__builtin_memmove((R+4372),(R+4368),4);
}
B6902ea:{NFSU2_TR(0x6902ea);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6902ee:{NFSU2_TR(0x6902ee);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B6902f1:{NFSU2_TR(0x6902f1);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B6902f8:{NFSU2_TR(0x6902f8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6902fc:{NFSU2_TR(0x6902fc);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B6902ff:{NFSU2_TR(0x6902ff);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690303:{NFSU2_TR(0x690303);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B690306:{NFSU2_TR(0x690306);
__builtin_memmove((R+4452),(R+4400),4);
}
B690309:{NFSU2_TR(0x690309);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69030c:{NFSU2_TR(0x69030c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690310:{NFSU2_TR(0x690310);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690314:{NFSU2_TR(0x690314);
w2(R+4260,0xffffu);
}
B690316:{NFSU2_TR(0x690316);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
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
PN u32 blk_690319(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690319:L690319:{bud-=48;NFSU2_TR(0x690319);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69031d:{NFSU2_TR(0x69031d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B690321:{NFSU2_TR(0x690321);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690324:{NFSU2_TR(0x690324);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690328:{NFSU2_TR(0x690328);
{wv<8>((R+4400),uo::pswapd<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B69032c:{NFSU2_TR(0x69032c);
__builtin_memmove((R+4448),(R+4352),8);
}
B69032f:{NFSU2_TR(0x69032f);
__builtin_memmove((R+4384),(R+4352),8);
}
B690332:{NFSU2_TR(0x690332);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B690336:{NFSU2_TR(0x690336);
__builtin_memmove((R+4416),(R+4368),8);
}
B690339:{NFSU2_TR(0x690339);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4372),4);
}
B69033c:{NFSU2_TR(0x69033c);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B690340:{NFSU2_TR(0x690340);
__builtin_memmove((R+4432),(R+4352),8);
}
B690343:{NFSU2_TR(0x690343);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B690347:{NFSU2_TR(0x690347);
__builtin_memmove((R+4436),(R+4368),4);
}
B69034a:{NFSU2_TR(0x69034a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69034e:{NFSU2_TR(0x69034e);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B690352:{NFSU2_TR(0x690352);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B690356:{NFSU2_TR(0x690356);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69035a:{NFSU2_TR(0x69035a);
__builtin_memmove((R+4416),(R+4352),8);
}
B69035d:{NFSU2_TR(0x69035d);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7158))));}
}
B690365:{NFSU2_TR(0x690365);
__builtin_memmove((R+4432),(R+4368),8);
}
B690368:{NFSU2_TR(0x690368);
__builtin_memmove((R+4372),(R+4368),4);
}
B69036b:{NFSU2_TR(0x69036b);
{wv<8>((R+4400),uo::pfpnacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B69036f:{NFSU2_TR(0x69036f);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B690373:{NFSU2_TR(0x690373);
{wv<8>((R+4448),uo::pfpnacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B690377:{NFSU2_TR(0x690377);
{wv<8>((R+4384),uo::pfpnacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B69037b:{NFSU2_TR(0x69037b);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69037f:{NFSU2_TR(0x69037f);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690383:{NFSU2_TR(0x690383);
{wv<8>((R+4416),uo::pfsubr<8>(rv<8>((R+4416)),rv<8>(gp(0x7b7158))));}
}
B69038b:{NFSU2_TR(0x69038b);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B69038e:{NFSU2_TR(0x69038e);
__builtin_memmove((R+4368),(R+4352),8);
}
B690391:{NFSU2_TR(0x690391);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690395:{NFSU2_TR(0x690395);
__builtin_memmove((R+4436),(R+4400),4);
}
B690398:{NFSU2_TR(0x690398);
__builtin_memmove((R+4388),(R+4464),4);
}
B69039b:{NFSU2_TR(0x69039b);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4468),4);
}
B69039e:{NFSU2_TR(0x69039e);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4452),4);
}
B6903a1:{NFSU2_TR(0x6903a1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903a5:{NFSU2_TR(0x6903a5);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4468),4);
}
B6903a8:{NFSU2_TR(0x6903a8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903ac:{NFSU2_TR(0x6903ac);
__builtin_memmove((R+4452),(R+4368),4);
}
B6903af:{NFSU2_TR(0x6903af);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903b3:{NFSU2_TR(0x6903b3);
__builtin_memmove((R+4468),gp(0x7b7158),4);
}
B6903ba:{NFSU2_TR(0x6903ba);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6903bd:{NFSU2_TR(0x6903bd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903c1:{NFSU2_TR(0x6903c1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903c5:{NFSU2_TR(0x6903c5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6903c9:{NFSU2_TR(0x6903c9);
w2(R+4260,0xffffu);
}
B6903cb:{NFSU2_TR(0x6903cb);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
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
PN u32 blk_6903ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6903ce:L6903ce:{bud-=10;NFSU2_TR(0x6903ce);
__builtin_memmove((R+28),(R+28),4);
}
B6903d0:{NFSU2_TR(0x6903d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6903d1:{NFSU2_TR(0x6903d1);
__builtin_memmove((R+20),(G+16),4);
}
B6903d3:{NFSU2_TR(0x6903d3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xc0ull))));
}
B6903d9:{NFSU2_TR(0x6903d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6903dc:{NFSU2_TR(0x6903dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6903df:{NFSU2_TR(0x6903df);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff8ull))));
}
B6903e2:{NFSU2_TR(0x6903e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6903e4:{NFSU2_TR(0x6903e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6903e7:{NFSU2_TR(0x6903e7);
if(r1(F+6)){{[[clang::musttail]] return blk_691097(ARGS);}}
}
B6903ed:L6903ed:{bud-=2;NFSU2_TR(0x6903ed);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6903ef:{NFSU2_TR(0x6903ef);
if(r1(F+6)){{[[clang::musttail]] return blk_690ffa(ARGS);}}
}
B6903f5:L6903f5:{bud-=74;NFSU2_TR(0x6903f5);
__builtin_memmove((R+4368),gp(0x7b7138),8);
}
B6903fc:{NFSU2_TR(0x6903fc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6903ff:{NFSU2_TR(0x6903ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B690403:{NFSU2_TR(0x690403);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B690406:{NFSU2_TR(0x690406);
__builtin_memmove((R+4400),(R+4384),8);
}
B690409:{NFSU2_TR(0x690409);
__builtin_memmove((R+4388),(R+4432),4);
}
B69040c:{NFSU2_TR(0x69040c);
__builtin_memmove((R+4352),(R+4432),8);
}
B69040f:{NFSU2_TR(0x69040f);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B690412:{NFSU2_TR(0x690412);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B690416:{NFSU2_TR(0x690416);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69041b:{NFSU2_TR(0x69041b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690420:{NFSU2_TR(0x690420);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690425:{NFSU2_TR(0x690425);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69042a:{NFSU2_TR(0x69042a);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69042f:{NFSU2_TR(0x69042f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690434:{NFSU2_TR(0x690434);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690439:{NFSU2_TR(0x690439);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B69043d:{NFSU2_TR(0x69043d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690440:{NFSU2_TR(0x690440);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690444:{NFSU2_TR(0x690444);
__builtin_memmove((R+4384),(R+4352),8);
}
B690447:{NFSU2_TR(0x690447);
__builtin_memmove((R+4400),(R+4352),8);
}
B69044a:{NFSU2_TR(0x69044a);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B69044e:{NFSU2_TR(0x69044e);
__builtin_memmove((R+4416),(R+4368),8);
}
B690451:{NFSU2_TR(0x690451);
__builtin_memmove((R+4464),(R+4368),8);
}
B690454:{NFSU2_TR(0x690454);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B690458:{NFSU2_TR(0x690458);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69045b:{NFSU2_TR(0x69045b);
__builtin_memmove((R+4432),(R+4352),8);
}
B69045e:{NFSU2_TR(0x69045e);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B690461:{NFSU2_TR(0x690461);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B690465:{NFSU2_TR(0x690465);
__builtin_memmove((R+4372),(R+4352),4);
}
B690468:{NFSU2_TR(0x690468);
__builtin_memmove((R+4468),(R+4464),4);
}
B69046b:{NFSU2_TR(0x69046b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69046f:{NFSU2_TR(0x69046f);
__builtin_memmove((R+4448),(R+4368),8);
}
B690472:{NFSU2_TR(0x690472);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B690476:{NFSU2_TR(0x690476);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B69047a:{NFSU2_TR(0x69047a);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B69047d:{NFSU2_TR(0x69047d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B690481:{NFSU2_TR(0x690481);
__builtin_memmove((R+4384),(R+4368),8);
}
B690484:{NFSU2_TR(0x690484);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B690487:{NFSU2_TR(0x690487);
__builtin_memmove((R+4468),(R+4464),4);
}
B69048a:{NFSU2_TR(0x69048a);
__builtin_memmove((R+4452),(R+4448),4);
}
B69048d:{NFSU2_TR(0x69048d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690491:{NFSU2_TR(0x690491);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690495:{NFSU2_TR(0x690495);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B690499:{NFSU2_TR(0x690499);
__builtin_memmove((R+4416),(R+4368),8);
}
B69049c:{NFSU2_TR(0x69049c);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4436),4);
}
B69049f:{NFSU2_TR(0x69049f);
{wv<8>((R+4400),uo::pfsubr<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7158))));}
}
B6904a7:{NFSU2_TR(0x6904a7);
{wv<8>((R+4464),uo::pfsubr<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7158))));}
}
B6904af:{NFSU2_TR(0x6904af);
__builtin_memmove((R+4404),(R+4352),4);
}
B6904b2:{NFSU2_TR(0x6904b2);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B6904b6:{NFSU2_TR(0x6904b6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904ba:{NFSU2_TR(0x6904ba);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6904be:{NFSU2_TR(0x6904be);
__builtin_memmove((R+4400),(R+4384),8);
}
B6904c1:{NFSU2_TR(0x6904c1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B6904c5:{NFSU2_TR(0x6904c5);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B6904c9:{NFSU2_TR(0x6904c9);
__builtin_memmove((R+4432),(R+4416),8);
}
B6904cc:{NFSU2_TR(0x6904cc);
__builtin_memmove((R+4388),(R+4352),4);
}
B6904cf:{NFSU2_TR(0x6904cf);
__builtin_memmove((R+4448),(R+4368),8);
}
B6904d2:{NFSU2_TR(0x6904d2);
__builtin_memmove((R+4420),(R+4464),4);
}
B6904d5:{NFSU2_TR(0x6904d5);
__builtin_memmove((R+4372),(R+4368),4);
}
B6904d8:{NFSU2_TR(0x6904d8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904dc:{NFSU2_TR(0x6904dc);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B6904df:{NFSU2_TR(0x6904df);
__builtin_memmove((R+4356),gp(0x7b7158),4);
}
B6904e6:{NFSU2_TR(0x6904e6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904ea:{NFSU2_TR(0x6904ea);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B6904ed:{NFSU2_TR(0x6904ed);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904f1:{NFSU2_TR(0x6904f1);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B6904f4:{NFSU2_TR(0x6904f4);
__builtin_memmove((R+4452),(R+4400),4);
}
B6904f7:{NFSU2_TR(0x6904f7);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6904fa:{NFSU2_TR(0x6904fa);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6904fe:{NFSU2_TR(0x6904fe);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690502:{NFSU2_TR(0x690502);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B690505:{NFSU2_TR(0x690505);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B690507:{NFSU2_TR(0x690507);
if(r1(F+6)){{[[clang::musttail]] return blk_690bdf(ARGS);}}
}
B69050d:L69050d:{bud-=391;NFSU2_TR(0x69050d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690512:{NFSU2_TR(0x690512);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690517:{NFSU2_TR(0x690517);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B69051c:{NFSU2_TR(0x69051c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690521:{NFSU2_TR(0x690521);
__builtin_memmove((R+4384),(R+4352),8);
}
B690524:{NFSU2_TR(0x690524);
__builtin_memmove((R+4356),(R+4368),4);
}
B690527:{NFSU2_TR(0x690527);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B69052a:{NFSU2_TR(0x69052a);
__builtin_memmove((R+4432),(R+4400),8);
}
B69052d:{NFSU2_TR(0x69052d);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690535:{NFSU2_TR(0x690535);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69053d:{NFSU2_TR(0x69053d);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690542:{NFSU2_TR(0x690542);
__builtin_memmove((R+4404),(R+4416),4);
}
B690545:{NFSU2_TR(0x690545);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69054a:{NFSU2_TR(0x69054a);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69054f:{NFSU2_TR(0x69054f);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B690552:{NFSU2_TR(0x690552);
__builtin_memmove((R+4368),(R+4448),8);
}
B690555:{NFSU2_TR(0x690555);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69055d:{NFSU2_TR(0x69055d);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690565:{NFSU2_TR(0x690565);
__builtin_memmove((R+4452),(R+4464),4);
}
B690568:{NFSU2_TR(0x690568);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69056d:{NFSU2_TR(0x69056d);
__builtin_memmove((R+4384),(R+4352),8);
}
B690570:{NFSU2_TR(0x690570);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B690573:{NFSU2_TR(0x690573);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69057b:{NFSU2_TR(0x69057b);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B69057e:{NFSU2_TR(0x69057e);
__builtin_memmove((R+4388),(R+4416),4);
}
B690581:{NFSU2_TR(0x690581);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690589:{NFSU2_TR(0x690589);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690591:{NFSU2_TR(0x690591);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690599:{NFSU2_TR(0x690599);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69059c:{NFSU2_TR(0x69059c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B69059f:{NFSU2_TR(0x69059f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B6905a3:{NFSU2_TR(0x6905a3);
w8(R+4368,u64(m4(0x7b7148)));
}
B6905aa:{NFSU2_TR(0x6905aa);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6905ad:{NFSU2_TR(0x6905ad);
__builtin_memmove((R+4384),(R+4368),8);
}
B6905b0:{NFSU2_TR(0x6905b0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6905b3:{NFSU2_TR(0x6905b3);
__builtin_memmove((R+4388),(R+4368),4);
}
B6905b6:{NFSU2_TR(0x6905b6);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6905b9:{NFSU2_TR(0x6905b9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905bd:{NFSU2_TR(0x6905bd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905c1:{NFSU2_TR(0x6905c1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905c5:{NFSU2_TR(0x6905c5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905c9:{NFSU2_TR(0x6905c9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905cd:{NFSU2_TR(0x6905cd);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B6905d1:{NFSU2_TR(0x6905d1);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6905d5:{NFSU2_TR(0x6905d5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905d9:{NFSU2_TR(0x6905d9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6905dd:{NFSU2_TR(0x6905dd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6905e0:{NFSU2_TR(0x6905e0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6905e4:{NFSU2_TR(0x6905e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6905ec:{NFSU2_TR(0x6905ec);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6905ef:{NFSU2_TR(0x6905ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6905f7:{NFSU2_TR(0x6905f7);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6905fa:{NFSU2_TR(0x6905fa);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690602:{NFSU2_TR(0x690602);
__builtin_memmove((R+4356),(R+4352),4);
}
B690605:{NFSU2_TR(0x690605);
__builtin_memmove((R+4372),(R+4368),4);
}
B690608:{NFSU2_TR(0x690608);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69060c:{NFSU2_TR(0x69060c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69060f:{NFSU2_TR(0x69060f);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690618:{NFSU2_TR(0x690618);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690620:{NFSU2_TR(0x690620);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690624:{NFSU2_TR(0x690624);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690627:{NFSU2_TR(0x690627);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690630:{NFSU2_TR(0x690630);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690634:{NFSU2_TR(0x690634);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690638:{NFSU2_TR(0x690638);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69063c:{NFSU2_TR(0x69063c);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690645:{NFSU2_TR(0x690645);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690649:{NFSU2_TR(0x690649);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69064d:{NFSU2_TR(0x69064d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690651:{NFSU2_TR(0x690651);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69065a:{NFSU2_TR(0x69065a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69065e:{NFSU2_TR(0x69065e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690662:{NFSU2_TR(0x690662);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690666:{NFSU2_TR(0x690666);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69066a:{NFSU2_TR(0x69066a);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69066d:{NFSU2_TR(0x69066d);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690675:{NFSU2_TR(0x690675);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690679:{NFSU2_TR(0x690679);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69067c:{NFSU2_TR(0x69067c);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690684:{NFSU2_TR(0x690684);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690687:{NFSU2_TR(0x690687);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69068f:{NFSU2_TR(0x69068f);
__builtin_memmove((R+4356),(R+4352),4);
}
B690692:{NFSU2_TR(0x690692);
__builtin_memmove((R+4372),(R+4368),4);
}
B690695:{NFSU2_TR(0x690695);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690699:{NFSU2_TR(0x690699);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69069c:{NFSU2_TR(0x69069c);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6906a5:{NFSU2_TR(0x6906a5);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6906ad:{NFSU2_TR(0x6906ad);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6906b1:{NFSU2_TR(0x6906b1);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6906b4:{NFSU2_TR(0x6906b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6906bd:{NFSU2_TR(0x6906bd);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6906c1:{NFSU2_TR(0x6906c1);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6906c5:{NFSU2_TR(0x6906c5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6906c9:{NFSU2_TR(0x6906c9);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6906d2:{NFSU2_TR(0x6906d2);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6906d6:{NFSU2_TR(0x6906d6);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6906da:{NFSU2_TR(0x6906da);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6906de:{NFSU2_TR(0x6906de);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6906e7:{NFSU2_TR(0x6906e7);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6906eb:{NFSU2_TR(0x6906eb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6906ef:{NFSU2_TR(0x6906ef);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6906f3:{NFSU2_TR(0x6906f3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6906f7:{NFSU2_TR(0x6906f7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6906fb:{NFSU2_TR(0x6906fb);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690703:{NFSU2_TR(0x690703);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690707:{NFSU2_TR(0x690707);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69070a:{NFSU2_TR(0x69070a);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690712:{NFSU2_TR(0x690712);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690715:{NFSU2_TR(0x690715);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69071d:{NFSU2_TR(0x69071d);
__builtin_memmove((R+4356),(R+4352),4);
}
B690720:{NFSU2_TR(0x690720);
__builtin_memmove((R+4372),(R+4368),4);
}
B690723:{NFSU2_TR(0x690723);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690727:{NFSU2_TR(0x690727);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69072a:{NFSU2_TR(0x69072a);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690733:{NFSU2_TR(0x690733);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69073b:{NFSU2_TR(0x69073b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69073f:{NFSU2_TR(0x69073f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690742:{NFSU2_TR(0x690742);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69074b:{NFSU2_TR(0x69074b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69074f:{NFSU2_TR(0x69074f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690753:{NFSU2_TR(0x690753);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690757:{NFSU2_TR(0x690757);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690760:{NFSU2_TR(0x690760);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690764:{NFSU2_TR(0x690764);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690768:{NFSU2_TR(0x690768);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69076c:{NFSU2_TR(0x69076c);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690775:{NFSU2_TR(0x690775);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690779:{NFSU2_TR(0x690779);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69077d:{NFSU2_TR(0x69077d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690781:{NFSU2_TR(0x690781);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690785:{NFSU2_TR(0x690785);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690789:{NFSU2_TR(0x690789);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690791:{NFSU2_TR(0x690791);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690795:{NFSU2_TR(0x690795);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690798:{NFSU2_TR(0x690798);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6907a0:{NFSU2_TR(0x6907a0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6907a3:{NFSU2_TR(0x6907a3);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6907ab:{NFSU2_TR(0x6907ab);
__builtin_memmove((R+4356),(R+4352),4);
}
B6907ae:{NFSU2_TR(0x6907ae);
__builtin_memmove((R+4372),(R+4368),4);
}
B6907b1:{NFSU2_TR(0x6907b1);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6907b5:{NFSU2_TR(0x6907b5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6907b8:{NFSU2_TR(0x6907b8);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6907c1:{NFSU2_TR(0x6907c1);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6907c9:{NFSU2_TR(0x6907c9);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6907cd:{NFSU2_TR(0x6907cd);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6907d0:{NFSU2_TR(0x6907d0);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6907d9:{NFSU2_TR(0x6907d9);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6907dd:{NFSU2_TR(0x6907dd);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6907e1:{NFSU2_TR(0x6907e1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6907e5:{NFSU2_TR(0x6907e5);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6907ee:{NFSU2_TR(0x6907ee);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6907f2:{NFSU2_TR(0x6907f2);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6907f6:{NFSU2_TR(0x6907f6);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6907fa:{NFSU2_TR(0x6907fa);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690803:{NFSU2_TR(0x690803);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690807:{NFSU2_TR(0x690807);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69080b:{NFSU2_TR(0x69080b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69080f:{NFSU2_TR(0x69080f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690813:{NFSU2_TR(0x690813);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690816:{NFSU2_TR(0x690816);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69081a:{NFSU2_TR(0x69081a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69081e:{NFSU2_TR(0x69081e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690821:{NFSU2_TR(0x690821);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690826:{NFSU2_TR(0x690826);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690829:{NFSU2_TR(0x690829);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69082e:{NFSU2_TR(0x69082e);
__builtin_memmove((R+4356),(R+4352),4);
}
B690831:{NFSU2_TR(0x690831);
__builtin_memmove((R+4372),(R+4368),4);
}
B690834:{NFSU2_TR(0x690834);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690838:{NFSU2_TR(0x690838);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69083b:{NFSU2_TR(0x69083b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690841:{NFSU2_TR(0x690841);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690846:{NFSU2_TR(0x690846);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69084a:{NFSU2_TR(0x69084a);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69084d:{NFSU2_TR(0x69084d);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690853:{NFSU2_TR(0x690853);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690857:{NFSU2_TR(0x690857);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69085b:{NFSU2_TR(0x69085b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69085f:{NFSU2_TR(0x69085f);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690865:{NFSU2_TR(0x690865);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690869:{NFSU2_TR(0x690869);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69086d:{NFSU2_TR(0x69086d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690871:{NFSU2_TR(0x690871);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690877:{NFSU2_TR(0x690877);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69087b:{NFSU2_TR(0x69087b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69087f:{NFSU2_TR(0x69087f);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690883:{NFSU2_TR(0x690883);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690887:{NFSU2_TR(0x690887);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69088a:{NFSU2_TR(0x69088a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69088e:{NFSU2_TR(0x69088e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690892:{NFSU2_TR(0x690892);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690895:{NFSU2_TR(0x690895);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69089a:{NFSU2_TR(0x69089a);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69089d:{NFSU2_TR(0x69089d);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6908a2:{NFSU2_TR(0x6908a2);
__builtin_memmove((R+4356),(R+4352),4);
}
B6908a5:{NFSU2_TR(0x6908a5);
__builtin_memmove((R+4372),(R+4368),4);
}
B6908a8:{NFSU2_TR(0x6908a8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6908ac:{NFSU2_TR(0x6908ac);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6908af:{NFSU2_TR(0x6908af);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6908b5:{NFSU2_TR(0x6908b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6908ba:{NFSU2_TR(0x6908ba);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6908be:{NFSU2_TR(0x6908be);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6908c1:{NFSU2_TR(0x6908c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6908c7:{NFSU2_TR(0x6908c7);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6908cb:{NFSU2_TR(0x6908cb);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6908cf:{NFSU2_TR(0x6908cf);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6908d3:{NFSU2_TR(0x6908d3);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6908d9:{NFSU2_TR(0x6908d9);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6908dd:{NFSU2_TR(0x6908dd);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6908e1:{NFSU2_TR(0x6908e1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6908e5:{NFSU2_TR(0x6908e5);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6908eb:{NFSU2_TR(0x6908eb);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6908ef:{NFSU2_TR(0x6908ef);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6908f3:{NFSU2_TR(0x6908f3);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6908f7:{NFSU2_TR(0x6908f7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6908fb:{NFSU2_TR(0x6908fb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6908ff:{NFSU2_TR(0x6908ff);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690903:{NFSU2_TR(0x690903);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690907:{NFSU2_TR(0x690907);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69090a:{NFSU2_TR(0x69090a);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69090f:{NFSU2_TR(0x69090f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690912:{NFSU2_TR(0x690912);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690917:{NFSU2_TR(0x690917);
__builtin_memmove((R+4356),(R+4352),4);
}
B69091a:{NFSU2_TR(0x69091a);
__builtin_memmove((R+4372),(R+4368),4);
}
B69091d:{NFSU2_TR(0x69091d);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690921:{NFSU2_TR(0x690921);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690924:{NFSU2_TR(0x690924);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69092a:{NFSU2_TR(0x69092a);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69092f:{NFSU2_TR(0x69092f);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690933:{NFSU2_TR(0x690933);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690936:{NFSU2_TR(0x690936);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69093c:{NFSU2_TR(0x69093c);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690940:{NFSU2_TR(0x690940);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690944:{NFSU2_TR(0x690944);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690948:{NFSU2_TR(0x690948);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69094e:{NFSU2_TR(0x69094e);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690952:{NFSU2_TR(0x690952);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690956:{NFSU2_TR(0x690956);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69095a:{NFSU2_TR(0x69095a);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690960:{NFSU2_TR(0x690960);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690964:{NFSU2_TR(0x690964);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690968:{NFSU2_TR(0x690968);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69096c:{NFSU2_TR(0x69096c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690970:{NFSU2_TR(0x690970);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690974:{NFSU2_TR(0x690974);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690978:{NFSU2_TR(0x690978);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69097c:{NFSU2_TR(0x69097c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69097f:{NFSU2_TR(0x69097f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690984:{NFSU2_TR(0x690984);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690987:{NFSU2_TR(0x690987);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69098c:{NFSU2_TR(0x69098c);
__builtin_memmove((R+4356),(R+4352),4);
}
B69098f:{NFSU2_TR(0x69098f);
__builtin_memmove((R+4372),(R+4368),4);
}
B690992:{NFSU2_TR(0x690992);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690996:{NFSU2_TR(0x690996);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690999:{NFSU2_TR(0x690999);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69099f:{NFSU2_TR(0x69099f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6909a4:{NFSU2_TR(0x6909a4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6909a8:{NFSU2_TR(0x6909a8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6909ab:{NFSU2_TR(0x6909ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6909b1:{NFSU2_TR(0x6909b1);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6909b5:{NFSU2_TR(0x6909b5);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6909b9:{NFSU2_TR(0x6909b9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6909bd:{NFSU2_TR(0x6909bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6909c3:{NFSU2_TR(0x6909c3);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6909c7:{NFSU2_TR(0x6909c7);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6909cb:{NFSU2_TR(0x6909cb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6909cf:{NFSU2_TR(0x6909cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6909d5:{NFSU2_TR(0x6909d5);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6909d9:{NFSU2_TR(0x6909d9);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6909dd:{NFSU2_TR(0x6909dd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6909e1:{NFSU2_TR(0x6909e1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6909e5:{NFSU2_TR(0x6909e5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6909e8:{NFSU2_TR(0x6909e8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6909ec:{NFSU2_TR(0x6909ec);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6909f1:{NFSU2_TR(0x6909f1);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6909f4:{NFSU2_TR(0x6909f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6909f9:{NFSU2_TR(0x6909f9);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6909fc:{NFSU2_TR(0x6909fc);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690a01:{NFSU2_TR(0x690a01);
__builtin_memmove((R+4356),(R+4352),4);
}
B690a04:{NFSU2_TR(0x690a04);
__builtin_memmove((R+4372),(R+4368),4);
}
B690a07:{NFSU2_TR(0x690a07);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690a0b:{NFSU2_TR(0x690a0b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690a0e:{NFSU2_TR(0x690a0e);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690a14:{NFSU2_TR(0x690a14);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690a19:{NFSU2_TR(0x690a19);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690a1d:{NFSU2_TR(0x690a1d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690a20:{NFSU2_TR(0x690a20);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690a26:{NFSU2_TR(0x690a26);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690a2a:{NFSU2_TR(0x690a2a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690a2e:{NFSU2_TR(0x690a2e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690a32:{NFSU2_TR(0x690a32);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690a38:{NFSU2_TR(0x690a38);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690a3c:{NFSU2_TR(0x690a3c);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690a40:{NFSU2_TR(0x690a40);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690a44:{NFSU2_TR(0x690a44);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690a4a:{NFSU2_TR(0x690a4a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690a4e:{NFSU2_TR(0x690a4e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690a52:{NFSU2_TR(0x690a52);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690a56:{NFSU2_TR(0x690a56);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690a5a:{NFSU2_TR(0x690a5a);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B690a5d:{NFSU2_TR(0x690a5d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690a62:{NFSU2_TR(0x690a62);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690a66:{NFSU2_TR(0x690a66);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690a69:{NFSU2_TR(0x690a69);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690a6e:{NFSU2_TR(0x690a6e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690a71:{NFSU2_TR(0x690a71);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690a76:{NFSU2_TR(0x690a76);
__builtin_memmove((R+4356),(R+4352),4);
}
B690a79:{NFSU2_TR(0x690a79);
__builtin_memmove((R+4372),(R+4368),4);
}
B690a7c:{NFSU2_TR(0x690a7c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690a80:{NFSU2_TR(0x690a80);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690a83:{NFSU2_TR(0x690a83);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690a89:{NFSU2_TR(0x690a89);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690a8e:{NFSU2_TR(0x690a8e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690a92:{NFSU2_TR(0x690a92);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690a95:{NFSU2_TR(0x690a95);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690a9b:{NFSU2_TR(0x690a9b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690a9f:{NFSU2_TR(0x690a9f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690aa3:{NFSU2_TR(0x690aa3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690aa7:{NFSU2_TR(0x690aa7);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690aad:{NFSU2_TR(0x690aad);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690ab1:{NFSU2_TR(0x690ab1);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690ab5:{NFSU2_TR(0x690ab5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690ab9:{NFSU2_TR(0x690ab9);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690abf:{NFSU2_TR(0x690abf);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690ac3:{NFSU2_TR(0x690ac3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690ac7:{NFSU2_TR(0x690ac7);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690acb:{NFSU2_TR(0x690acb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690acf:{NFSU2_TR(0x690acf);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ad3:{NFSU2_TR(0x690ad3);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690ad8:{NFSU2_TR(0x690ad8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690adc:{NFSU2_TR(0x690adc);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690adf:{NFSU2_TR(0x690adf);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690ae4:{NFSU2_TR(0x690ae4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690ae7:{NFSU2_TR(0x690ae7);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690aec:{NFSU2_TR(0x690aec);
__builtin_memmove((R+4356),(R+4352),4);
}
B690aef:{NFSU2_TR(0x690aef);
__builtin_memmove((R+4372),(R+4368),4);
}
B690af2:{NFSU2_TR(0x690af2);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690af6:{NFSU2_TR(0x690af6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690af9:{NFSU2_TR(0x690af9);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690aff:{NFSU2_TR(0x690aff);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690b04:{NFSU2_TR(0x690b04);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690b08:{NFSU2_TR(0x690b08);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690b0b:{NFSU2_TR(0x690b0b);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690b11:{NFSU2_TR(0x690b11);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690b15:{NFSU2_TR(0x690b15);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690b19:{NFSU2_TR(0x690b19);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690b1d:{NFSU2_TR(0x690b1d);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690b23:{NFSU2_TR(0x690b23);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690b27:{NFSU2_TR(0x690b27);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690b2b:{NFSU2_TR(0x690b2b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690b2f:{NFSU2_TR(0x690b2f);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690b35:{NFSU2_TR(0x690b35);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690b39:{NFSU2_TR(0x690b39);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690b3d:{NFSU2_TR(0x690b3d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690b41:{NFSU2_TR(0x690b41);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690b45:{NFSU2_TR(0x690b45);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690b49:{NFSU2_TR(0x690b49);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690b4e:{NFSU2_TR(0x690b4e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690b52:{NFSU2_TR(0x690b52);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690b55:{NFSU2_TR(0x690b55);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690b5a:{NFSU2_TR(0x690b5a);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690b5d:{NFSU2_TR(0x690b5d);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690b62:{NFSU2_TR(0x690b62);
__builtin_memmove((R+4356),(R+4352),4);
}
B690b65:{NFSU2_TR(0x690b65);
__builtin_memmove((R+4372),(R+4368),4);
}
B690b68:{NFSU2_TR(0x690b68);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690b6c:{NFSU2_TR(0x690b6c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690b6f:{NFSU2_TR(0x690b6f);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690b75:{NFSU2_TR(0x690b75);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690b7a:{NFSU2_TR(0x690b7a);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690b7e:{NFSU2_TR(0x690b7e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690b81:{NFSU2_TR(0x690b81);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690b87:{NFSU2_TR(0x690b87);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690b8b:{NFSU2_TR(0x690b8b);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690b8f:{NFSU2_TR(0x690b8f);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690b93:{NFSU2_TR(0x690b93);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690b99:{NFSU2_TR(0x690b99);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690b9d:{NFSU2_TR(0x690b9d);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690ba1:{NFSU2_TR(0x690ba1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690ba5:{NFSU2_TR(0x690ba5);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690bab:{NFSU2_TR(0x690bab);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690baf:{NFSU2_TR(0x690baf);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690bb3:{NFSU2_TR(0x690bb3);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690bb7:{NFSU2_TR(0x690bb7);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690bbb:{NFSU2_TR(0x690bbb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690bbe:{NFSU2_TR(0x690bbe);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690bc2:{NFSU2_TR(0x690bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B690bc6:{NFSU2_TR(0x690bc6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B690bca:{NFSU2_TR(0x690bca);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B690bce:{NFSU2_TR(0x690bce);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B690bd2:{NFSU2_TR(0x690bd2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690bd6:{NFSU2_TR(0x690bd6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B690bda:{NFSU2_TR(0x690bda);
{[[clang::musttail]] return blk_6910c9(ARGS);}
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
PN u32 blk_690bdf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690bdf:L690bdf:{bud-=254;NFSU2_TR(0x690bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B690be2:{NFSU2_TR(0x690be2);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690be7:{NFSU2_TR(0x690be7);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690bec:{NFSU2_TR(0x690bec);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B690bf1:{NFSU2_TR(0x690bf1);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690bf6:{NFSU2_TR(0x690bf6);
__builtin_memmove((R+4384),(R+4352),8);
}
B690bf9:{NFSU2_TR(0x690bf9);
__builtin_memmove((R+4356),(R+4368),4);
}
B690bfc:{NFSU2_TR(0x690bfc);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B690bff:{NFSU2_TR(0x690bff);
__builtin_memmove((R+4432),(R+4400),8);
}
B690c02:{NFSU2_TR(0x690c02);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B690c05:{NFSU2_TR(0x690c05);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c09:{NFSU2_TR(0x690c09);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690c0e:{NFSU2_TR(0x690c0e);
__builtin_memmove((R+4404),(R+4416),4);
}
B690c11:{NFSU2_TR(0x690c11);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690c16:{NFSU2_TR(0x690c16);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690c1b:{NFSU2_TR(0x690c1b);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B690c1e:{NFSU2_TR(0x690c1e);
__builtin_memmove((R+4368),(R+4448),8);
}
B690c21:{NFSU2_TR(0x690c21);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c25:{NFSU2_TR(0x690c25);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c29:{NFSU2_TR(0x690c29);
__builtin_memmove((R+4452),(R+4464),4);
}
B690c2c:{NFSU2_TR(0x690c2c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690c31:{NFSU2_TR(0x690c31);
__builtin_memmove((R+4384),(R+4352),8);
}
B690c34:{NFSU2_TR(0x690c34);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B690c37:{NFSU2_TR(0x690c37);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c3b:{NFSU2_TR(0x690c3b);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B690c3e:{NFSU2_TR(0x690c3e);
__builtin_memmove((R+4388),(R+4416),4);
}
B690c41:{NFSU2_TR(0x690c41);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c45:{NFSU2_TR(0x690c45);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c49:{NFSU2_TR(0x690c49);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690c4d:{NFSU2_TR(0x690c4d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690c50:{NFSU2_TR(0x690c50);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690c54:{NFSU2_TR(0x690c54);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690c58:{NFSU2_TR(0x690c58);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690c5b:{NFSU2_TR(0x690c5b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690c60:{NFSU2_TR(0x690c60);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690c63:{NFSU2_TR(0x690c63);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690c68:{NFSU2_TR(0x690c68);
__builtin_memmove((R+4356),(R+4352),4);
}
B690c6b:{NFSU2_TR(0x690c6b);
__builtin_memmove((R+4372),(R+4368),4);
}
B690c6e:{NFSU2_TR(0x690c6e);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690c72:{NFSU2_TR(0x690c72);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690c75:{NFSU2_TR(0x690c75);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690c7b:{NFSU2_TR(0x690c7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690c80:{NFSU2_TR(0x690c80);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690c84:{NFSU2_TR(0x690c84);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690c87:{NFSU2_TR(0x690c87);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690c8d:{NFSU2_TR(0x690c8d);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690c91:{NFSU2_TR(0x690c91);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690c95:{NFSU2_TR(0x690c95);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690c99:{NFSU2_TR(0x690c99);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690c9f:{NFSU2_TR(0x690c9f);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690ca3:{NFSU2_TR(0x690ca3);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690ca7:{NFSU2_TR(0x690ca7);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690cab:{NFSU2_TR(0x690cab);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690cb1:{NFSU2_TR(0x690cb1);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690cb5:{NFSU2_TR(0x690cb5);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690cb9:{NFSU2_TR(0x690cb9);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690cbd:{NFSU2_TR(0x690cbd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690cc1:{NFSU2_TR(0x690cc1);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B690cc4:{NFSU2_TR(0x690cc4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690cc8:{NFSU2_TR(0x690cc8);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ccc:{NFSU2_TR(0x690ccc);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690ccf:{NFSU2_TR(0x690ccf);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690cd4:{NFSU2_TR(0x690cd4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690cd7:{NFSU2_TR(0x690cd7);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690cdc:{NFSU2_TR(0x690cdc);
__builtin_memmove((R+4356),(R+4352),4);
}
B690cdf:{NFSU2_TR(0x690cdf);
__builtin_memmove((R+4372),(R+4368),4);
}
B690ce2:{NFSU2_TR(0x690ce2);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690ce6:{NFSU2_TR(0x690ce6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690ce9:{NFSU2_TR(0x690ce9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690cef:{NFSU2_TR(0x690cef);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690cf4:{NFSU2_TR(0x690cf4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690cf8:{NFSU2_TR(0x690cf8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690cfb:{NFSU2_TR(0x690cfb);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690d01:{NFSU2_TR(0x690d01);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690d05:{NFSU2_TR(0x690d05);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690d09:{NFSU2_TR(0x690d09);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690d0d:{NFSU2_TR(0x690d0d);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690d13:{NFSU2_TR(0x690d13);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690d17:{NFSU2_TR(0x690d17);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690d1b:{NFSU2_TR(0x690d1b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690d1f:{NFSU2_TR(0x690d1f);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690d25:{NFSU2_TR(0x690d25);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690d29:{NFSU2_TR(0x690d29);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690d2d:{NFSU2_TR(0x690d2d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690d31:{NFSU2_TR(0x690d31);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690d35:{NFSU2_TR(0x690d35);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690d39:{NFSU2_TR(0x690d39);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690d3d:{NFSU2_TR(0x690d3d);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690d41:{NFSU2_TR(0x690d41);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690d44:{NFSU2_TR(0x690d44);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690d49:{NFSU2_TR(0x690d49);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690d4c:{NFSU2_TR(0x690d4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690d51:{NFSU2_TR(0x690d51);
__builtin_memmove((R+4356),(R+4352),4);
}
B690d54:{NFSU2_TR(0x690d54);
__builtin_memmove((R+4372),(R+4368),4);
}
B690d57:{NFSU2_TR(0x690d57);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690d5b:{NFSU2_TR(0x690d5b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690d5e:{NFSU2_TR(0x690d5e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690d64:{NFSU2_TR(0x690d64);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690d69:{NFSU2_TR(0x690d69);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690d6d:{NFSU2_TR(0x690d6d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690d70:{NFSU2_TR(0x690d70);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690d76:{NFSU2_TR(0x690d76);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690d7a:{NFSU2_TR(0x690d7a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690d7e:{NFSU2_TR(0x690d7e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690d82:{NFSU2_TR(0x690d82);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690d88:{NFSU2_TR(0x690d88);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690d8c:{NFSU2_TR(0x690d8c);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690d90:{NFSU2_TR(0x690d90);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690d94:{NFSU2_TR(0x690d94);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690d9a:{NFSU2_TR(0x690d9a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690d9e:{NFSU2_TR(0x690d9e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690da2:{NFSU2_TR(0x690da2);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690da6:{NFSU2_TR(0x690da6);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690daa:{NFSU2_TR(0x690daa);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690dae:{NFSU2_TR(0x690dae);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B690db2:{NFSU2_TR(0x690db2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690db6:{NFSU2_TR(0x690db6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690db9:{NFSU2_TR(0x690db9);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690dbe:{NFSU2_TR(0x690dbe);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690dc1:{NFSU2_TR(0x690dc1);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690dc6:{NFSU2_TR(0x690dc6);
__builtin_memmove((R+4356),(R+4352),4);
}
B690dc9:{NFSU2_TR(0x690dc9);
__builtin_memmove((R+4372),(R+4368),4);
}
B690dcc:{NFSU2_TR(0x690dcc);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690dd0:{NFSU2_TR(0x690dd0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690dd3:{NFSU2_TR(0x690dd3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690dd9:{NFSU2_TR(0x690dd9);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690dde:{NFSU2_TR(0x690dde);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690de2:{NFSU2_TR(0x690de2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690de5:{NFSU2_TR(0x690de5);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690deb:{NFSU2_TR(0x690deb);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690def:{NFSU2_TR(0x690def);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690df3:{NFSU2_TR(0x690df3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690df7:{NFSU2_TR(0x690df7);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690dfd:{NFSU2_TR(0x690dfd);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690e01:{NFSU2_TR(0x690e01);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690e05:{NFSU2_TR(0x690e05);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690e09:{NFSU2_TR(0x690e09);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690e0f:{NFSU2_TR(0x690e0f);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690e13:{NFSU2_TR(0x690e13);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690e17:{NFSU2_TR(0x690e17);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690e1b:{NFSU2_TR(0x690e1b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690e1f:{NFSU2_TR(0x690e1f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B690e22:{NFSU2_TR(0x690e22);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690e26:{NFSU2_TR(0x690e26);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690e2b:{NFSU2_TR(0x690e2b);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690e2e:{NFSU2_TR(0x690e2e);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690e33:{NFSU2_TR(0x690e33);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690e36:{NFSU2_TR(0x690e36);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690e3b:{NFSU2_TR(0x690e3b);
__builtin_memmove((R+4356),(R+4352),4);
}
B690e3e:{NFSU2_TR(0x690e3e);
__builtin_memmove((R+4372),(R+4368),4);
}
B690e41:{NFSU2_TR(0x690e41);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690e45:{NFSU2_TR(0x690e45);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690e48:{NFSU2_TR(0x690e48);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690e4e:{NFSU2_TR(0x690e4e);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690e53:{NFSU2_TR(0x690e53);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690e57:{NFSU2_TR(0x690e57);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690e5a:{NFSU2_TR(0x690e5a);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690e60:{NFSU2_TR(0x690e60);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690e64:{NFSU2_TR(0x690e64);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690e68:{NFSU2_TR(0x690e68);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690e6c:{NFSU2_TR(0x690e6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690e72:{NFSU2_TR(0x690e72);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690e76:{NFSU2_TR(0x690e76);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690e7a:{NFSU2_TR(0x690e7a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690e7e:{NFSU2_TR(0x690e7e);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690e84:{NFSU2_TR(0x690e84);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690e88:{NFSU2_TR(0x690e88);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690e8c:{NFSU2_TR(0x690e8c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690e90:{NFSU2_TR(0x690e90);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690e94:{NFSU2_TR(0x690e94);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B690e97:{NFSU2_TR(0x690e97);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690e9c:{NFSU2_TR(0x690e9c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ea0:{NFSU2_TR(0x690ea0);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690ea3:{NFSU2_TR(0x690ea3);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690ea8:{NFSU2_TR(0x690ea8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690eab:{NFSU2_TR(0x690eab);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690eb0:{NFSU2_TR(0x690eb0);
__builtin_memmove((R+4356),(R+4352),4);
}
B690eb3:{NFSU2_TR(0x690eb3);
__builtin_memmove((R+4372),(R+4368),4);
}
B690eb6:{NFSU2_TR(0x690eb6);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690eba:{NFSU2_TR(0x690eba);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690ebd:{NFSU2_TR(0x690ebd);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690ec3:{NFSU2_TR(0x690ec3);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690ec8:{NFSU2_TR(0x690ec8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690ecc:{NFSU2_TR(0x690ecc);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690ecf:{NFSU2_TR(0x690ecf);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690ed5:{NFSU2_TR(0x690ed5);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690ed9:{NFSU2_TR(0x690ed9);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690edd:{NFSU2_TR(0x690edd);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690ee1:{NFSU2_TR(0x690ee1);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690ee7:{NFSU2_TR(0x690ee7);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690eeb:{NFSU2_TR(0x690eeb);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690eef:{NFSU2_TR(0x690eef);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690ef3:{NFSU2_TR(0x690ef3);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690ef9:{NFSU2_TR(0x690ef9);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690efd:{NFSU2_TR(0x690efd);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690f01:{NFSU2_TR(0x690f01);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690f05:{NFSU2_TR(0x690f05);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690f09:{NFSU2_TR(0x690f09);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690f0d:{NFSU2_TR(0x690f0d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690f12:{NFSU2_TR(0x690f12);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690f16:{NFSU2_TR(0x690f16);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690f19:{NFSU2_TR(0x690f19);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690f1e:{NFSU2_TR(0x690f1e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690f21:{NFSU2_TR(0x690f21);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690f26:{NFSU2_TR(0x690f26);
__builtin_memmove((R+4356),(R+4352),4);
}
B690f29:{NFSU2_TR(0x690f29);
__builtin_memmove((R+4372),(R+4368),4);
}
B690f2c:{NFSU2_TR(0x690f2c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690f30:{NFSU2_TR(0x690f30);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690f33:{NFSU2_TR(0x690f33);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690f39:{NFSU2_TR(0x690f39);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690f3e:{NFSU2_TR(0x690f3e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690f42:{NFSU2_TR(0x690f42);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690f45:{NFSU2_TR(0x690f45);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690f4b:{NFSU2_TR(0x690f4b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690f4f:{NFSU2_TR(0x690f4f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690f53:{NFSU2_TR(0x690f53);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690f57:{NFSU2_TR(0x690f57);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690f5d:{NFSU2_TR(0x690f5d);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690f61:{NFSU2_TR(0x690f61);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690f65:{NFSU2_TR(0x690f65);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690f69:{NFSU2_TR(0x690f69);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690f6f:{NFSU2_TR(0x690f6f);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690f73:{NFSU2_TR(0x690f73);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B690f77:{NFSU2_TR(0x690f77);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690f7b:{NFSU2_TR(0x690f7b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B690f7f:{NFSU2_TR(0x690f7f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690f83:{NFSU2_TR(0x690f83);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B690f88:{NFSU2_TR(0x690f88);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690f8c:{NFSU2_TR(0x690f8c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B690f8f:{NFSU2_TR(0x690f8f);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B690f94:{NFSU2_TR(0x690f94);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B690f97:{NFSU2_TR(0x690f97);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B690f9c:{NFSU2_TR(0x690f9c);
__builtin_memmove((R+4356),(R+4352),4);
}
B690f9f:{NFSU2_TR(0x690f9f);
__builtin_memmove((R+4372),(R+4368),4);
}
B690fa2:{NFSU2_TR(0x690fa2);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B690fa6:{NFSU2_TR(0x690fa6);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B690fa9:{NFSU2_TR(0x690fa9);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B690faf:{NFSU2_TR(0x690faf);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B690fb4:{NFSU2_TR(0x690fb4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B690fb8:{NFSU2_TR(0x690fb8);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B690fbb:{NFSU2_TR(0x690fbb);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B690fc1:{NFSU2_TR(0x690fc1);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B690fc5:{NFSU2_TR(0x690fc5);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B690fc9:{NFSU2_TR(0x690fc9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B690fcd:{NFSU2_TR(0x690fcd);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B690fd3:{NFSU2_TR(0x690fd3);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B690fd7:{NFSU2_TR(0x690fd7);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B690fdb:{NFSU2_TR(0x690fdb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B690fdf:{NFSU2_TR(0x690fdf);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B690fe5:{NFSU2_TR(0x690fe5);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B690fe9:{NFSU2_TR(0x690fe9);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B690fed:{NFSU2_TR(0x690fed);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ff1:{NFSU2_TR(0x690ff1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B690ff5:{NFSU2_TR(0x690ff5);
{[[clang::musttail]] return blk_6910c9(ARGS);}
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
PN u32 blk_690ffa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B690ffa:L690ffa:{bud-=3;NFSU2_TR(0x690ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B690ffd:{NFSU2_TR(0x690ffd);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B690fff:{NFSU2_TR(0x690fff);
if(r1(F+6)){{[[clang::musttail]] return blk_691059(ARGS);}}
{[[clang::musttail]] return blk_691001(ARGS);}
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
PN u32 ent_690(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x690002:[[clang::musttail]] return blk_690002(c,a4,a0,a1,bud);
case 0x69004b:[[clang::musttail]] return blk_69004b(c,a4,a0,a1,bud);
case 0x690065:[[clang::musttail]] return blk_690065(c,a4,a0,a1,bud);
case 0x690069:[[clang::musttail]] return blk_690069(c,a4,a0,a1,bud);
case 0x690071:[[clang::musttail]] return blk_690071(c,a4,a0,a1,bud);
case 0x690074:[[clang::musttail]] return blk_690074(c,a4,a0,a1,bud);
case 0x690081:[[clang::musttail]] return blk_690081(c,a4,a0,a1,bud);
case 0x6900b0:[[clang::musttail]] return blk_6900b0(c,a4,a0,a1,bud);
case 0x6900d6:[[clang::musttail]] return blk_6900d6(c,a4,a0,a1,bud);
case 0x6900e6:[[clang::musttail]] return blk_6900e6(c,a4,a0,a1,bud);
case 0x690136:[[clang::musttail]] return blk_690136(c,a4,a0,a1,bud);
case 0x690146:[[clang::musttail]] return blk_690146(c,a4,a0,a1,bud);
case 0x690191:[[clang::musttail]] return blk_690191(c,a4,a0,a1,bud);
case 0x6901d8:[[clang::musttail]] return blk_6901d8(c,a4,a0,a1,bud);
case 0x690247:[[clang::musttail]] return blk_690247(c,a4,a0,a1,bud);
case 0x690319:[[clang::musttail]] return blk_690319(c,a4,a0,a1,bud);
case 0x6903ce:[[clang::musttail]] return blk_6903ce(c,a4,a0,a1,bud);
case 0x690bdf:[[clang::musttail]] return blk_690bdf(c,a4,a0,a1,bud);
case 0x690ffa:[[clang::musttail]] return blk_690ffa(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_690(Cpu& c){u8* R=c.regs.data();return ent_690(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
