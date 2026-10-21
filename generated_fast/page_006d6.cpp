#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6154(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6164(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6174(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6184(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6194(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d61a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d61b4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d61c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d61d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d61e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d61f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6204(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6214(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6224(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6234(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6143(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6d6143(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6143:L6d6143:{bud-=6;NFSU2_TR(0x6d6143);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc000000ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(r1(R+9))));
s1(u32(r4(U+0)),r1(U+4));
}
B6d6149:{NFSU2_TR(0x6d6149);
w1(R+12,u8(0x0ull));
}
B6d614b:{NFSU2_TR(0x6d614b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x0ull))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d614e:{NFSU2_TR(0x6d614e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6150:{NFSU2_TR(0x6d6150);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6152:{NFSU2_TR(0x6d6152);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d6154(ARGS);}}
{[[clang::musttail]] return blk_6d6154(ARGS);}
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
PN u32 blk_6d6154(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6154:L6d6154:{bud-=6;NFSU2_TR(0x6d6154);
w1(G+1,u8(0x0ull));
}
B6d6156:{NFSU2_TR(0x6d6156);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6158:{NFSU2_TR(0x6d6158);
w1(G+0,u8(u32(r1(G+0))|u32(u8(0xb4ull))));
}
B6d615a:{NFSU2_TR(0x6d615a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6160:{NFSU2_TR(0x6d6160);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6162:{NFSU2_TR(0x6d6162);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d6164(ARGS);}}
{[[clang::musttail]] return blk_6d6164(ARGS);}
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
PN u32 blk_6d6164(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6164:L6d6164:{bud-=6;NFSU2_TR(0x6d6164);
w1(G+5,u8(0x0ull));
}
B6d6166:{NFSU2_TR(0x6d6166);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6168:{NFSU2_TR(0x6d6168);
w1(G+0,u8(u32(r1(G+0))|u32(u8(0xb5ull))));
}
B6d616a:{NFSU2_TR(0x6d616a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6170:{NFSU2_TR(0x6d6170);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6172:{NFSU2_TR(0x6d6172);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d6174(ARGS);}}
{[[clang::musttail]] return blk_6d6174(ARGS);}
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
PN u32 blk_6d6174(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6174:L6d6174:{bud-=6;NFSU2_TR(0x6d6174);
w1(R+9,u8(0x0ull));
}
B6d6176:{NFSU2_TR(0x6d6176);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6178:{NFSU2_TR(0x6d6178);
w1(G+0,u8(u32(r1(G+0))|u32(u8(0xb6ull))));
}
B6d617a:{NFSU2_TR(0x6d617a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6180:{NFSU2_TR(0x6d6180);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6182:{NFSU2_TR(0x6d6182);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d6184(ARGS);}}
{[[clang::musttail]] return blk_6d6184(ARGS);}
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
PN u32 blk_6d6184(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6184:L6d6184:{bud-=6;NFSU2_TR(0x6d6184);
w1(R+13,u8(0x0ull));
}
B6d6186:{NFSU2_TR(0x6d6186);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6188:{NFSU2_TR(0x6d6188);
w1(G+0,u8(u32(r1(G+0))|u32(u8(0xb7ull))));
}
B6d618a:{NFSU2_TR(0x6d618a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6190:{NFSU2_TR(0x6d6190);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6192:{NFSU2_TR(0x6d6192);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d6194(ARGS);}}
{[[clang::musttail]] return blk_6d6194(ARGS);}
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
PN u32 blk_6d6194(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6194:L6d6194:{bud-=5;NFSU2_TR(0x6d6194);
w4(G+0,u32(0xc000000ull));
}
B6d6199:{NFSU2_TR(0x6d6199);
w4(G+0,u32(0x8000ull));
}
B6d619e:{NFSU2_TR(0x6d619e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d61a0:{NFSU2_TR(0x6d61a0);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61a2:{NFSU2_TR(0x6d61a2);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d61a4(ARGS);}}
{[[clang::musttail]] return blk_6d61a4(ARGS);}
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
PN u32 blk_6d61a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d61a4:L6d61a4:{bud-=5;NFSU2_TR(0x6d61a4);
w4(G+4,u32(0xc000000ull));
}
B6d61a9:{NFSU2_TR(0x6d61a9);
w4(G+4,u32(0x8000ull));
}
B6d61ae:{NFSU2_TR(0x6d61ae);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d61b0:{NFSU2_TR(0x6d61b0);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61b2:{NFSU2_TR(0x6d61b2);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d61b4(ARGS);}}
{[[clang::musttail]] return blk_6d61b4(ARGS);}
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
PN u32 blk_6d61b4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d61b4:L6d61b4:{bud-=5;NFSU2_TR(0x6d61b4);
w4(R+8,u32(0xc000000ull));
}
B6d61b9:{NFSU2_TR(0x6d61b9);
w4(R+8,u32(0x8000ull));
}
B6d61be:{NFSU2_TR(0x6d61be);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d61c0:{NFSU2_TR(0x6d61c0);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61c2:{NFSU2_TR(0x6d61c2);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d61c4(ARGS);}}
{[[clang::musttail]] return blk_6d61c4(ARGS);}
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
PN u32 blk_6d61c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d61c4:L6d61c4:{bud-=5;NFSU2_TR(0x6d61c4);
w4(R+12,u32(0xc000000ull));
}
B6d61c9:{NFSU2_TR(0x6d61c9);
w4(R+12,u32(0x8000ull));
}
B6d61ce:{NFSU2_TR(0x6d61ce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d61d0:{NFSU2_TR(0x6d61d0);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61d2:{NFSU2_TR(0x6d61d2);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d61d4(ARGS);}}
{[[clang::musttail]] return blk_6d61d4(ARGS);}
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
PN u32 blk_6d61d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d61d4:L6d61d4:{bud-=5;NFSU2_TR(0x6d61d4);
w4(G+16,u32(0xc000000ull));
}
B6d61d9:{NFSU2_TR(0x6d61d9);
w4(G+16,u32(0x8000ull));
}
B6d61de:{NFSU2_TR(0x6d61de);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d61e0:{NFSU2_TR(0x6d61e0);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61e2:{NFSU2_TR(0x6d61e2);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d61e4(ARGS);}}
{[[clang::musttail]] return blk_6d61e4(ARGS);}
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
PN u32 blk_6d61e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d61e4:L6d61e4:{bud-=5;NFSU2_TR(0x6d61e4);
w4(R+20,u32(0xc000000ull));
}
B6d61e9:{NFSU2_TR(0x6d61e9);
w4(R+20,u32(0x8000ull));
}
B6d61ee:{NFSU2_TR(0x6d61ee);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d61f0:{NFSU2_TR(0x6d61f0);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d61f2:{NFSU2_TR(0x6d61f2);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d61f4(ARGS);}}
{[[clang::musttail]] return blk_6d61f4(ARGS);}
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
PN u32 blk_6d61f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d61f4:L6d61f4:{bud-=5;NFSU2_TR(0x6d61f4);
w4(R+24,u32(0xc000000ull));
}
B6d61f9:{NFSU2_TR(0x6d61f9);
w4(R+24,u32(0x8000ull));
}
B6d61fe:{NFSU2_TR(0x6d61fe);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6200:{NFSU2_TR(0x6d6200);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6202:{NFSU2_TR(0x6d6202);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d6204(ARGS);}}
{[[clang::musttail]] return blk_6d6204(ARGS);}
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
PN u32 blk_6d6204(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6204:L6d6204:{bud-=5;NFSU2_TR(0x6d6204);
w4(R+28,u32(0xc000000ull));
}
B6d6209:{NFSU2_TR(0x6d6209);
w4(R+28,u32(0x8000ull));
}
B6d620e:{NFSU2_TR(0x6d620e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6210:{NFSU2_TR(0x6d6210);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6212:{NFSU2_TR(0x6d6212);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d6214(ARGS);}}
{[[clang::musttail]] return blk_6d6214(ARGS);}
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
PN u32 blk_6d6214(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6214:L6d6214:{bud-=5;NFSU2_TR(0x6d6214);
u8 U[11];
w4(U+1,u32(u32(u32(0x0ull))&u32(u32(0x7ull))));
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+5,shl<u8>(r1(U+0),u64(r4(U+1))));
w4(U+6,u32(u32(u32(0x8ull))-u32(r4(U+1))));
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+10,shr<u8>(r1(U+0),u64(r4(U+6))));
w1(U+0,u8(u32(r1(U+5))|u32(r1(U+10))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6217:{NFSU2_TR(0x6d6217);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+8,u8(u32(r1(U+8))+u32(r1(G+4))));
s1(u32(r4(U+4)),r1(U+8));
}
B6d621a:{NFSU2_TR(0x6d621a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6220:{NFSU2_TR(0x6d6220);
u8 U[3];
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6222:{NFSU2_TR(0x6d6222);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6d6224(ARGS);}}
{[[clang::musttail]] return blk_6d6224(ARGS);}
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
PN u32 blk_6d6224(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6224:L6d6224:{bud-=5;NFSU2_TR(0x6d6224);
u8 U[20];
w4(U+4,u32(u32(u32(0x0ull))&u32(u32(0x1full))));
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
w4(U+8,shl<u32>(r4(U+0),u64(r4(U+4))));
w4(U+12,u32(u32(u32(0x20ull))-u32(r4(U+4))));
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
w4(U+16,shr<u32>(r4(U+0),u64(r4(U+12))));
w4(U+0,u32(u32(r4(U+8))|u32(r4(U+16))));
s4(u32(r4(G+0)),r4(U+0));
}
B6d6227:{NFSU2_TR(0x6d6227);
u8 U[9];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+8,u8(u32(r1(U+8))+u32(r1(G+4))));
s1(u32(r4(U+4)),r1(U+8));
}
B6d622a:{NFSU2_TR(0x6d622a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(G+0))));
s1(u32(r4(G+0)),r1(U+0));
}
B6d6230:{NFSU2_TR(0x6d6230);
u8 U[3];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(G+5,u8(u32(r1(G+5))&u32(r1(R+13))));
w1(F+7,u8(s8(r1(G+5))<s8(u8(0x0ull))));
w1(F+6,u8((r1(G+5))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(G+5))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6d6232:{NFSU2_TR(0x6d6232);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6d6234(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6d6234(ARGS);}
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
PN u32 blk_6d6234(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6d6234:L6d6234:{bud-=1;NFSU2_TR(0x6d6234);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x0ull))));
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
PN u32 ent_6d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x6d6143:[[clang::musttail]] return blk_6d6143(c,a4,a0,a1,bud);
case 0x6d6154:[[clang::musttail]] return blk_6d6154(c,a4,a0,a1,bud);
case 0x6d6164:[[clang::musttail]] return blk_6d6164(c,a4,a0,a1,bud);
case 0x6d6174:[[clang::musttail]] return blk_6d6174(c,a4,a0,a1,bud);
case 0x6d6184:[[clang::musttail]] return blk_6d6184(c,a4,a0,a1,bud);
case 0x6d6194:[[clang::musttail]] return blk_6d6194(c,a4,a0,a1,bud);
case 0x6d61a4:[[clang::musttail]] return blk_6d61a4(c,a4,a0,a1,bud);
case 0x6d61b4:[[clang::musttail]] return blk_6d61b4(c,a4,a0,a1,bud);
case 0x6d61c4:[[clang::musttail]] return blk_6d61c4(c,a4,a0,a1,bud);
case 0x6d61d4:[[clang::musttail]] return blk_6d61d4(c,a4,a0,a1,bud);
case 0x6d61e4:[[clang::musttail]] return blk_6d61e4(c,a4,a0,a1,bud);
case 0x6d61f4:[[clang::musttail]] return blk_6d61f4(c,a4,a0,a1,bud);
case 0x6d6204:[[clang::musttail]] return blk_6d6204(c,a4,a0,a1,bud);
case 0x6d6214:[[clang::musttail]] return blk_6d6214(c,a4,a0,a1,bud);
case 0x6d6224:[[clang::musttail]] return blk_6d6224(c,a4,a0,a1,bud);
case 0x6d6234:[[clang::musttail]] return blk_6d6234(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_6d6(Cpu& c){u8* R=c.regs.data();return ent_6d6(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
