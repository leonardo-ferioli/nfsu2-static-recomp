#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719f14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a034(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a1a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a2c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a314(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a33e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a8ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71aa60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71abeb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ad69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71b002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a01e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a18c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a2b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a307(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a326(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a3e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a689(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a831(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ab2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ae37(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71ae6e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a001:L71a001:{bud-=7;NFSU2_TR(0x71a001);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B71a005:{NFSU2_TR(0x71a005);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B71a008:{NFSU2_TR(0x71a008);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a00b:{NFSU2_TR(0x71a00b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71a00e:{NFSU2_TR(0x71a00e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a011:{NFSU2_TR(0x71a011);
u8 U[6];
w1(F+0,u8((r4(R+8))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71a014:{NFSU2_TR(0x71a014);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x719f14u);}[[clang::musttail]] return blk_719f14(ARGS);}}
}
B71a01a:L71a01a:{bud-=4;NFSU2_TR(0x71a01a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a01b:{NFSU2_TR(0x71a01b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a01c:{NFSU2_TR(0x71a01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a01d:{NFSU2_TR(0x71a01d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71a01e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a01e:L71a01e:{bud-=10;NFSU2_TR(0x71a01e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a01f:{NFSU2_TR(0x71a01f);
__builtin_memmove((R+20),(G+16),4);
}
B71a021:{NFSU2_TR(0x71a021);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a022:{NFSU2_TR(0x71a022);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a023:{NFSU2_TR(0x71a023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a026:{NFSU2_TR(0x71a026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71a029:{NFSU2_TR(0x71a029);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71a02c:{NFSU2_TR(0x71a02c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+4))));
}
B71a02e:{NFSU2_TR(0x71a02e);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a031:{NFSU2_TR(0x71a031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_71a034(ARGS);}
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
PN u32 blk_71a034(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a034:L71a034:{bud-=81;NFSU2_TR(0x71a034);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a037:{NFSU2_TR(0x71a037);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71a03b:{NFSU2_TR(0x71a03b);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a03e:{NFSU2_TR(0x71a03e);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a041:{NFSU2_TR(0x71a041);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B71a048:{NFSU2_TR(0x71a048);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a04b:{NFSU2_TR(0x71a04b);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B71a04e:{NFSU2_TR(0x71a04e);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a051:{NFSU2_TR(0x71a051);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a054:{NFSU2_TR(0x71a054);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B71a057:{NFSU2_TR(0x71a057);
__builtin_memmove((R+4448),gp(0x7c66e0),8);
}
B71a05e:{NFSU2_TR(0x71a05e);
__builtin_memmove((R+4416),(R+4368),8);
}
B71a061:{NFSU2_TR(0x71a061);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B71a064:{NFSU2_TR(0x71a064);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a067:{NFSU2_TR(0x71a067);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a06a:{NFSU2_TR(0x71a06a);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B71a06d:{NFSU2_TR(0x71a06d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B71a070:{NFSU2_TR(0x71a070);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4438))));
}
B71a073:{NFSU2_TR(0x71a073);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B71a07a:{NFSU2_TR(0x71a07a);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a081:{NFSU2_TR(0x71a081);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B71a085:{NFSU2_TR(0x71a085);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B71a089:{NFSU2_TR(0x71a089);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B71a08c:{NFSU2_TR(0x71a08c);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a090:{NFSU2_TR(0x71a090);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71a094:{NFSU2_TR(0x71a094);
__builtin_memmove((R+4416),(R+4368),8);
}
B71a097:{NFSU2_TR(0x71a097);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+6))));
}
B71a09e:{NFSU2_TR(0x71a09e);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a0a1:{NFSU2_TR(0x71a0a1);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+6))));
}
B71a0a8:{NFSU2_TR(0x71a0a8);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a0ab:{NFSU2_TR(0x71a0ab);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+6))));
}
B71a0b2:{NFSU2_TR(0x71a0b2);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a0b5:{NFSU2_TR(0x71a0b5);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+0))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+2))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+4))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+6))));
}
B71a0bc:{NFSU2_TR(0x71a0bc);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a0bf:{NFSU2_TR(0x71a0bf);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a0c2:{NFSU2_TR(0x71a0c2);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+0))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+2))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+4))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+6))));
}
B71a0c9:{NFSU2_TR(0x71a0c9);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a0cc:{NFSU2_TR(0x71a0cc);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+0))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+2))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+4))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+6))));
}
B71a0d3:{NFSU2_TR(0x71a0d3);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B71a0d6:{NFSU2_TR(0x71a0d6);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4470))));
}
B71a0d9:{NFSU2_TR(0x71a0d9);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a0dc:{NFSU2_TR(0x71a0dc);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+0))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+2))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+4))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+6))));
}
B71a0e3:{NFSU2_TR(0x71a0e3);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a0e6:{NFSU2_TR(0x71a0e6);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+0))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+2))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+4))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+6))));
}
B71a0ed:{NFSU2_TR(0x71a0ed);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71a0f0:{NFSU2_TR(0x71a0f0);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71a0f3:{NFSU2_TR(0x71a0f3);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B71a0fa:{NFSU2_TR(0x71a0fa);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71a101:{NFSU2_TR(0x71a101);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B71a105:{NFSU2_TR(0x71a105);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B71a109:{NFSU2_TR(0x71a109);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B71a10c:{NFSU2_TR(0x71a10c);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a110:{NFSU2_TR(0x71a110);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71a117:{NFSU2_TR(0x71a117);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+0))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+2))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+4))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+6))));
}
B71a11e:{NFSU2_TR(0x71a11e);
w2(R+4416,shr<u16>(r2(R+4416),u64(u32(0x8ull))));
w2(R+4418,shr<u16>(r2(R+4418),u64(u32(0x8ull))));
w2(R+4420,shr<u16>(r2(R+4420),u64(u32(0x8ull))));
w2(R+4422,shr<u16>(r2(R+4422),u64(u32(0x8ull))));
}
B71a122:{NFSU2_TR(0x71a122);
w2(R+4432,shr<u16>(r2(R+4432),u64(u32(0x8ull))));
w2(R+4434,shr<u16>(r2(R+4434),u64(u32(0x8ull))));
w2(R+4436,shr<u16>(r2(R+4436),u64(u32(0x8ull))));
w2(R+4438,shr<u16>(r2(R+4438),u64(u32(0x8ull))));
}
B71a126:{NFSU2_TR(0x71a126);
u8 U[30];
__builtin_memmove((U+5),(R+4416),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4416),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4417),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4418),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4419),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4420),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4421),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4422),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4423),(U+21),1);
}
B71a129:{NFSU2_TR(0x71a129);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a12c:{NFSU2_TR(0x71a12c);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a12f:{NFSU2_TR(0x71a12f);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71a133:{NFSU2_TR(0x71a133);
__builtin_memmove((R+4432),gp(0x7c66e0),8);
}
B71a13a:{NFSU2_TR(0x71a13a);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B71a13d:{NFSU2_TR(0x71a13d);
__builtin_memmove((R+4448),gp(0x7c66d0),8);
}
B71a144:{NFSU2_TR(0x71a144);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a147:{NFSU2_TR(0x71a147);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B71a14a:{NFSU2_TR(0x71a14a);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a14d:{NFSU2_TR(0x71a14d);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B71a150:{NFSU2_TR(0x71a150);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a153:{NFSU2_TR(0x71a153);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71a156:{NFSU2_TR(0x71a156);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B71a159:{NFSU2_TR(0x71a159);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a15c:{NFSU2_TR(0x71a15c);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B71a163:{NFSU2_TR(0x71a163);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a16a:{NFSU2_TR(0x71a16a);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B71a16e:{NFSU2_TR(0x71a16e);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B71a172:{NFSU2_TR(0x71a172);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B71a175:{NFSU2_TR(0x71a175);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a179:{NFSU2_TR(0x71a179);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71a17c:{NFSU2_TR(0x71a17c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a17f:{NFSU2_TR(0x71a17f);
u8 U[6];
w1(F+0,u8((r4(R+8))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71a182:{NFSU2_TR(0x71a182);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71a034u);}goto L71a034;}}
}
B71a188:L71a188:{bud-=4;NFSU2_TR(0x71a188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a189:{NFSU2_TR(0x71a189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a18a:{NFSU2_TR(0x71a18a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a18b:{NFSU2_TR(0x71a18b);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71a18c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a18c:L71a18c:{bud-=10;NFSU2_TR(0x71a18c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a18d:{NFSU2_TR(0x71a18d);
__builtin_memmove((R+20),(G+16),4);
}
B71a18f:{NFSU2_TR(0x71a18f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a190:{NFSU2_TR(0x71a190);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a191:{NFSU2_TR(0x71a191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a194:{NFSU2_TR(0x71a194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71a197:{NFSU2_TR(0x71a197);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B71a19a:{NFSU2_TR(0x71a19a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+4))));
}
B71a19c:{NFSU2_TR(0x71a19c);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a19f:{NFSU2_TR(0x71a19f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_71a1a2(ARGS);}
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
PN u32 blk_71a1a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a1a2:L71a1a2:{bud-=63;NFSU2_TR(0x71a1a2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a1a5:{NFSU2_TR(0x71a1a5);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71a1a9:{NFSU2_TR(0x71a1a9);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a1ac:{NFSU2_TR(0x71a1ac);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a1af:{NFSU2_TR(0x71a1af);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B71a1b6:{NFSU2_TR(0x71a1b6);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a1b9:{NFSU2_TR(0x71a1b9);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B71a1bc:{NFSU2_TR(0x71a1bc);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a1bf:{NFSU2_TR(0x71a1bf);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a1c2:{NFSU2_TR(0x71a1c2);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B71a1c5:{NFSU2_TR(0x71a1c5);
__builtin_memmove((R+4448),gp(0x7c66e0),8);
}
B71a1cc:{NFSU2_TR(0x71a1cc);
__builtin_memmove((R+4416),(R+4368),8);
}
B71a1cf:{NFSU2_TR(0x71a1cf);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B71a1d2:{NFSU2_TR(0x71a1d2);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a1d5:{NFSU2_TR(0x71a1d5);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a1d8:{NFSU2_TR(0x71a1d8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B71a1db:{NFSU2_TR(0x71a1db);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B71a1de:{NFSU2_TR(0x71a1de);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4438))));
}
B71a1e1:{NFSU2_TR(0x71a1e1);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B71a1e8:{NFSU2_TR(0x71a1e8);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a1ef:{NFSU2_TR(0x71a1ef);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B71a1f3:{NFSU2_TR(0x71a1f3);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B71a1f7:{NFSU2_TR(0x71a1f7);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B71a1fa:{NFSU2_TR(0x71a1fa);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a1fe:{NFSU2_TR(0x71a1fe);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71a202:{NFSU2_TR(0x71a202);
__builtin_memmove((R+4416),(R+4368),8);
}
B71a205:{NFSU2_TR(0x71a205);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(U+6))));
}
B71a20c:{NFSU2_TR(0x71a20c);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a210:{NFSU2_TR(0x71a210);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a213:{NFSU2_TR(0x71a213);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(U+6))));
}
B71a21a:{NFSU2_TR(0x71a21a);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a21d:{NFSU2_TR(0x71a21d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(U+6))));
}
B71a224:{NFSU2_TR(0x71a224);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a227:{NFSU2_TR(0x71a227);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(U+0))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(U+2))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(U+4))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(U+6))));
}
B71a22e:{NFSU2_TR(0x71a22e);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a231:{NFSU2_TR(0x71a231);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a234:{NFSU2_TR(0x71a234);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+0))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+2))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+4))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+6))));
}
B71a23b:{NFSU2_TR(0x71a23b);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a23e:{NFSU2_TR(0x71a23e);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66c0),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+0))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+2))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+4))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+6))));
}
B71a245:{NFSU2_TR(0x71a245);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4454))));
}
B71a248:{NFSU2_TR(0x71a248);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4470))));
}
B71a24b:{NFSU2_TR(0x71a24b);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a24e:{NFSU2_TR(0x71a24e);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(U+0))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(U+2))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(U+4))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(U+6))));
}
B71a255:{NFSU2_TR(0x71a255);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a258:{NFSU2_TR(0x71a258);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c66f0),8);
w2(R+4464,u16(u32(r2(R+4464))*u32(r2(U+0))));
w2(R+4466,u16(u32(r2(R+4466))*u32(r2(U+2))));
w2(R+4468,u16(u32(r2(R+4468))*u32(r2(U+4))));
w2(R+4470,u16(u32(r2(R+4470))*u32(r2(U+6))));
}
B71a25f:{NFSU2_TR(0x71a25f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4454))));
}
B71a262:{NFSU2_TR(0x71a262);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71a265:{NFSU2_TR(0x71a265);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B71a26c:{NFSU2_TR(0x71a26c);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71a273:{NFSU2_TR(0x71a273);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B71a277:{NFSU2_TR(0x71a277);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B71a27b:{NFSU2_TR(0x71a27b);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B71a27e:{NFSU2_TR(0x71a27e);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a282:{NFSU2_TR(0x71a282);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71a289:{NFSU2_TR(0x71a289);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+0))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+2))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+4))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+6))));
}
B71a290:{NFSU2_TR(0x71a290);
w2(R+4416,shr<u16>(r2(R+4416),u64(u32(0x8ull))));
w2(R+4418,shr<u16>(r2(R+4418),u64(u32(0x8ull))));
w2(R+4420,shr<u16>(r2(R+4420),u64(u32(0x8ull))));
w2(R+4422,shr<u16>(r2(R+4422),u64(u32(0x8ull))));
}
B71a294:{NFSU2_TR(0x71a294);
w2(R+4432,shr<u16>(r2(R+4432),u64(u32(0x8ull))));
w2(R+4434,shr<u16>(r2(R+4434),u64(u32(0x8ull))));
w2(R+4436,shr<u16>(r2(R+4436),u64(u32(0x8ull))));
w2(R+4438,shr<u16>(r2(R+4438),u64(u32(0x8ull))));
}
B71a298:{NFSU2_TR(0x71a298);
u8 U[30];
__builtin_memmove((U+5),(R+4416),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4416),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4417),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4418),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4419),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4420),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4421),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4422),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4423),(U+21),1);
}
B71a29b:{NFSU2_TR(0x71a29b);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a29e:{NFSU2_TR(0x71a29e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B71a2a1:{NFSU2_TR(0x71a2a1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a2a4:{NFSU2_TR(0x71a2a4);
u8 U[6];
w1(F+0,u8((r4(R+8))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71a2a7:{NFSU2_TR(0x71a2a7);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71a1a2u);}goto L71a1a2;}}
}
B71a2ad:L71a2ad:{bud-=4;NFSU2_TR(0x71a2ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a2ae:{NFSU2_TR(0x71a2ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a2af:{NFSU2_TR(0x71a2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a2b0:{NFSU2_TR(0x71a2b0);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71a2b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a2b1:L71a2b1:{bud-=7;NFSU2_TR(0x71a2b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a2b2:{NFSU2_TR(0x71a2b2);
__builtin_memmove((R+20),(G+16),4);
}
B71a2b4:{NFSU2_TR(0x71a2b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a2b5:{NFSU2_TR(0x71a2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a2b8:{NFSU2_TR(0x71a2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71a2bb:{NFSU2_TR(0x71a2bb);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a2be:{NFSU2_TR(0x71a2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_71a2c1(ARGS);}
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
PN u32 blk_71a2c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a2c1:L71a2c1:{bud-=20;NFSU2_TR(0x71a2c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a2c4:{NFSU2_TR(0x71a2c4);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71a2c8:{NFSU2_TR(0x71a2c8);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a2cb:{NFSU2_TR(0x71a2cb);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a2ce:{NFSU2_TR(0x71a2ce);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a2d1:{NFSU2_TR(0x71a2d1);
__builtin_memmove((R+4448),gp(0x7c6710),8);
}
B71a2d8:{NFSU2_TR(0x71a2d8);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a2db:{NFSU2_TR(0x71a2db);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71a2de:{NFSU2_TR(0x71a2de);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a2e1:{NFSU2_TR(0x71a2e1);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B71a2e4:{NFSU2_TR(0x71a2e4);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a2e7:{NFSU2_TR(0x71a2e7);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a2ea:{NFSU2_TR(0x71a2ea);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71a2ee:{NFSU2_TR(0x71a2ee);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B71a2f1:{NFSU2_TR(0x71a2f1);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71a2f5:{NFSU2_TR(0x71a2f5);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B71a2f8:{NFSU2_TR(0x71a2f8);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a2fc:{NFSU2_TR(0x71a2fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a2ff:{NFSU2_TR(0x71a2ff);
u8 U[6];
w1(F+0,u8((r4(R+8))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71a302:{NFSU2_TR(0x71a302);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71a2c1u);}goto L71a2c1;}}
}
B71a304:L71a304:{bud-=3;NFSU2_TR(0x71a304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a305:{NFSU2_TR(0x71a305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a306:{NFSU2_TR(0x71a306);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71a307(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a307:L71a307:{bud-=6;NFSU2_TR(0x71a307);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a308:{NFSU2_TR(0x71a308);
__builtin_memmove((R+20),(G+16),4);
}
B71a30a:{NFSU2_TR(0x71a30a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a30b:{NFSU2_TR(0x71a30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a30e:{NFSU2_TR(0x71a30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71a311:{NFSU2_TR(0x71a311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_71a314(ARGS);}
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
PN u32 blk_71a314(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a314:L71a314:{bud-=5;NFSU2_TR(0x71a314);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a317:{NFSU2_TR(0x71a317);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a31b:{NFSU2_TR(0x71a31b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a31e:{NFSU2_TR(0x71a31e);
u8 U[6];
w1(F+0,u8((r4(R+8))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(R+8),u32(0x8ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71a321:{NFSU2_TR(0x71a321);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71a314u);}goto L71a314;}}
}
B71a323:L71a323:{bud-=3;NFSU2_TR(0x71a323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a324:{NFSU2_TR(0x71a324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a325:{NFSU2_TR(0x71a325);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71a326(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a326:L71a326:{bud-=9;NFSU2_TR(0x71a326);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a327:{NFSU2_TR(0x71a327);
__builtin_memmove((R+20),(G+16),4);
}
B71a329:{NFSU2_TR(0x71a329);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a32a:{NFSU2_TR(0x71a32a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a32b:{NFSU2_TR(0x71a32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a32e:{NFSU2_TR(0x71a32e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71a331:{NFSU2_TR(0x71a331);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a334:{NFSU2_TR(0x71a334);
__builtin_memmove((R+4448),gp(0x7c6710),8);
}
B71a33b:{NFSU2_TR(0x71a33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_71a33e(ARGS);}
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
PN u32 blk_71a33e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a33e:L71a33e:{bud-=26;NFSU2_TR(0x71a33e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a341:{NFSU2_TR(0x71a341);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71a345:{NFSU2_TR(0x71a345);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a348:{NFSU2_TR(0x71a348);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a34b:{NFSU2_TR(0x71a34b);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a34e:{NFSU2_TR(0x71a34e);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a351:{NFSU2_TR(0x71a351);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a354:{NFSU2_TR(0x71a354);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71a357:{NFSU2_TR(0x71a357);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B71a35a:{NFSU2_TR(0x71a35a);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a35d:{NFSU2_TR(0x71a35d);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a360:{NFSU2_TR(0x71a360);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a363:{NFSU2_TR(0x71a363);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B71a366:{NFSU2_TR(0x71a366);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71a36a:{NFSU2_TR(0x71a36a);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71a36e:{NFSU2_TR(0x71a36e);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B71a371:{NFSU2_TR(0x71a371);
__builtin_memmove((R+4384),(R+4416),8);
}
B71a374:{NFSU2_TR(0x71a374);
__builtin_memmove((R+4391),(R+4355),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4354),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4353),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4352),1);
}
B71a377:{NFSU2_TR(0x71a377);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a37a:{NFSU2_TR(0x71a37a);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4356),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4357),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4358),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4359),1);
}
B71a37d:{NFSU2_TR(0x71a37d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a381:{NFSU2_TR(0x71a381);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71a384:{NFSU2_TR(0x71a384);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71a387:{NFSU2_TR(0x71a387);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x8ull))));
}
B71a38a:{NFSU2_TR(0x71a38a);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(U+6))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71a38d:{NFSU2_TR(0x71a38d);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71a33eu);}goto L71a33e;}}
}
B71a38f:L71a38f:{bud-=30;NFSU2_TR(0x71a38f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71a392:{NFSU2_TR(0x71a392);
__builtin_memmove((R+4368),(R+4352),8);
}
B71a395:{NFSU2_TR(0x71a395);
__builtin_memmove((R+4384),(R+4352),8);
}
B71a398:{NFSU2_TR(0x71a398);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a39b:{NFSU2_TR(0x71a39b);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x8ull))));
}
B71a39f:{NFSU2_TR(0x71a39f);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x38ull))));
}
B71a3a3:{NFSU2_TR(0x71a3a3);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x38ull))));
}
B71a3a7:{NFSU2_TR(0x71a3a7);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4400))));
}
B71a3aa:{NFSU2_TR(0x71a3aa);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a3ad:{NFSU2_TR(0x71a3ad);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a3b0:{NFSU2_TR(0x71a3b0);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71a3b3:{NFSU2_TR(0x71a3b3);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B71a3b6:{NFSU2_TR(0x71a3b6);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71a3b9:{NFSU2_TR(0x71a3b9);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4454))));
}
B71a3bc:{NFSU2_TR(0x71a3bc);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B71a3bf:{NFSU2_TR(0x71a3bf);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71a3c2:{NFSU2_TR(0x71a3c2);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a3c5:{NFSU2_TR(0x71a3c5);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B71a3c8:{NFSU2_TR(0x71a3c8);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x1ull)));}
}
B71a3cc:{NFSU2_TR(0x71a3cc);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71a3d0:{NFSU2_TR(0x71a3d0);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B71a3d3:{NFSU2_TR(0x71a3d3);
__builtin_memmove((R+4384),(R+4416),8);
}
B71a3d6:{NFSU2_TR(0x71a3d6);
__builtin_memmove((R+4391),(R+4355),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4354),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4353),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4352),1);
}
B71a3d9:{NFSU2_TR(0x71a3d9);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a3dc:{NFSU2_TR(0x71a3dc);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4356),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4357),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4358),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4359),1);
}
B71a3df:{NFSU2_TR(0x71a3df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a3e3:{NFSU2_TR(0x71a3e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a3e4:{NFSU2_TR(0x71a3e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a3e5:{NFSU2_TR(0x71a3e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a3e6:{NFSU2_TR(0x71a3e6);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71a3e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a3e7:L71a3e7:{bud-=203;NFSU2_TR(0x71a3e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a3e8:{NFSU2_TR(0x71a3e8);
__builtin_memmove((R+12),(G+16),4);
}
B71a3ea:{NFSU2_TR(0x71a3ea);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a3eb:{NFSU2_TR(0x71a3eb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a3ec:{NFSU2_TR(0x71a3ec);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B71a3ef:{NFSU2_TR(0x71a3ef);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B71a3f2:{NFSU2_TR(0x71a3f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a3f3:{NFSU2_TR(0x71a3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B71a3f6:{NFSU2_TR(0x71a3f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a3fa:{NFSU2_TR(0x71a3fa);
__builtin_memmove((R+20),(G+16),4);
}
B71a3fc:{NFSU2_TR(0x71a3fc);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x38ull))));
}
B71a3ff:{NFSU2_TR(0x71a3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a402:{NFSU2_TR(0x71a402);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a405:{NFSU2_TR(0x71a405);
__builtin_memmove((G+4),gp(0x8b9c4c),4);
}
B71a40b:{NFSU2_TR(0x71a40b);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B71a40e:{NFSU2_TR(0x71a40e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a40f:{NFSU2_TR(0x71a40f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a410:{NFSU2_TR(0x71a410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a413:{NFSU2_TR(0x71a413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a416:{NFSU2_TR(0x71a416);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B71a418:{NFSU2_TR(0x71a418);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71a41b:{NFSU2_TR(0x71a41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a41e:{NFSU2_TR(0x71a41e);
u8 U[6];
w1(F+0,u8((r4(G+4))<(r4(R+8))));
w1(F+11,sborrow<u32>(r4(G+4),r4(R+8)));
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+8))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71a420:{NFSU2_TR(0x71a420);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71a423:{NFSU2_TR(0x71a423);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4352,u64(r4(U+12)));
}
B71a428:{NFSU2_TR(0x71a428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B71a42c:{NFSU2_TR(0x71a42c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71a431:{NFSU2_TR(0x71a431);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B71a434:{NFSU2_TR(0x71a434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B71a438:{NFSU2_TR(0x71a438);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B71a43b:{NFSU2_TR(0x71a43b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71a440:{NFSU2_TR(0x71a440);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71a445:{NFSU2_TR(0x71a445);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4448,u64(r4(U+12)));
}
B71a44a:{NFSU2_TR(0x71a44a);
__builtin_memmove((R+4375),(R+4435),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4434),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4433),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4432),1);
}
B71a44d:{NFSU2_TR(0x71a44d);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4464,u64(r4(U+12)));
}
B71a452:{NFSU2_TR(0x71a452);
__builtin_memmove((R+4352),(R+4356),2);
__builtin_memmove((R+4354),(R+4372),2);
__builtin_memmove((R+4356),(R+4358),2);
__builtin_memmove((R+4358),(R+4374),2);
}
B71a455:{NFSU2_TR(0x71a455);
__builtin_memmove((R+4455),(R+4467),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4466),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4465),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4464),1);
}
B71a458:{NFSU2_TR(0x71a458);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a45b:{NFSU2_TR(0x71a45b);
__builtin_memmove((R+4390),(R+4450),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4448),2);
}
B71a45e:{NFSU2_TR(0x71a45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71a461:{NFSU2_TR(0x71a461);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71a466:{NFSU2_TR(0x71a466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B71a46a:{NFSU2_TR(0x71a46a);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B71a46f:{NFSU2_TR(0x71a46f);
__builtin_memmove((R+4423),(R+4371),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4370),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4369),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4368),1);
}
B71a472:{NFSU2_TR(0x71a472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B71a476:{NFSU2_TR(0x71a476);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71a47b:{NFSU2_TR(0x71a47b);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B71a47e:{NFSU2_TR(0x71a47e);
u8 U[20];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4432),(U+12),8);
}
B71a483:{NFSU2_TR(0x71a483);
u8 U[20];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4448),(U+12),8);
}
B71a488:{NFSU2_TR(0x71a488);
__builtin_memmove((R+4375),(R+4435),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4434),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4433),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4432),1);
}
B71a48b:{NFSU2_TR(0x71a48b);
u8 U[20];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4464),(U+12),8);
}
B71a490:{NFSU2_TR(0x71a490);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4372),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4374),2);
}
B71a493:{NFSU2_TR(0x71a493);
__builtin_memmove((R+4455),(R+4467),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4466),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4465),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4464),1);
}
B71a496:{NFSU2_TR(0x71a496);
__builtin_memmove((R+4368),(R+4352),8);
}
B71a499:{NFSU2_TR(0x71a499);
__builtin_memmove((R+4406),(R+4450),2);
__builtin_memmove((R+4404),(R+4402),2);
__builtin_memmove((R+4402),(R+4448),2);
}
B71a49c:{NFSU2_TR(0x71a49c);
__builtin_memmove((R+4464),(R+4384),8);
}
B71a49f:{NFSU2_TR(0x71a49f);
__builtin_memmove((R+4356),(R+4416),4);
}
B71a4a2:{NFSU2_TR(0x71a4a2);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71a4a5:{NFSU2_TR(0x71a4a5);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4420),4);
}
B71a4a8:{NFSU2_TR(0x71a4a8);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a4ab:{NFSU2_TR(0x71a4ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a4af:{NFSU2_TR(0x71a4af);
__builtin_memmove((R+4388),(R+4400),4);
}
B71a4b2:{NFSU2_TR(0x71a4b2);
__builtin_memmove((R+4432),(R+4368),8);
}
B71a4b5:{NFSU2_TR(0x71a4b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a4b9:{NFSU2_TR(0x71a4b9);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4404),4);
}
B71a4bc:{NFSU2_TR(0x71a4bc);
__builtin_memmove((R+4448),(R+4384),8);
}
B71a4bf:{NFSU2_TR(0x71a4bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71a4c3:{NFSU2_TR(0x71a4c3);
__builtin_memmove((R+4368),gp(0x7c6770),8);
}
B71a4ca:{NFSU2_TR(0x71a4ca);
w1(R+4352,u8(u32(r1(R+4352))-u32(r1(R+4432))));
w1(R+4353,u8(u32(r1(R+4353))-u32(r1(R+4433))));
w1(R+4354,u8(u32(r1(R+4354))-u32(r1(R+4434))));
w1(R+4355,u8(u32(r1(R+4355))-u32(r1(R+4435))));
w1(R+4356,u8(u32(r1(R+4356))-u32(r1(R+4436))));
w1(R+4357,u8(u32(r1(R+4357))-u32(r1(R+4437))));
w1(R+4358,u8(u32(r1(R+4358))-u32(r1(R+4438))));
w1(R+4359,u8(u32(r1(R+4359))-u32(r1(R+4439))));
}
B71a4cd:{NFSU2_TR(0x71a4cd);
__builtin_memmove((R+4464),gp(0x7c67b0),8);
}
B71a4d4:{NFSU2_TR(0x71a4d4);
u8 U[8];
w1(U+0,u8(s8(r1(R+4352))<s8(r1(R+4368))));
w1(R+4368,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4353))<s8(r1(R+4369))));
w1(R+4369,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4354))<s8(r1(R+4370))));
w1(R+4370,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4355))<s8(r1(R+4371))));
w1(R+4371,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4356))<s8(r1(R+4372))));
w1(R+4372,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4357))<s8(r1(R+4373))));
w1(R+4373,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4358))<s8(r1(R+4374))));
w1(R+4374,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4359))<s8(r1(R+4375))));
w1(R+4375,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a4d7:{NFSU2_TR(0x71a4d7);
u8 U[8];
w1(U+0,u8(s8(r1(R+4464))<s8(r1(R+4352))));
w1(R+4352,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4465))<s8(r1(R+4353))));
w1(R+4353,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4466))<s8(r1(R+4354))));
w1(R+4354,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4467))<s8(r1(R+4355))));
w1(R+4355,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4468))<s8(r1(R+4356))));
w1(R+4356,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4469))<s8(r1(R+4357))));
w1(R+4357,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4470))<s8(r1(R+4358))));
w1(R+4358,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4471))<s8(r1(R+4359))));
w1(R+4359,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a4da:{NFSU2_TR(0x71a4da);
__builtin_memmove((R+4400),gp(0x7c6770),8);
}
B71a4e1:{NFSU2_TR(0x71a4e1);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B71a4e4:{NFSU2_TR(0x71a4e4);
__builtin_memmove((R+4368),(R+4464),8);
}
B71a4e7:{NFSU2_TR(0x71a4e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71a4eb:{NFSU2_TR(0x71a4eb);
w1(R+4384,u8(u32(r1(R+4384))-u32(r1(R+4464))));
w1(R+4385,u8(u32(r1(R+4385))-u32(r1(R+4465))));
w1(R+4386,u8(u32(r1(R+4386))-u32(r1(R+4466))));
w1(R+4387,u8(u32(r1(R+4387))-u32(r1(R+4467))));
w1(R+4388,u8(u32(r1(R+4388))-u32(r1(R+4468))));
w1(R+4389,u8(u32(r1(R+4389))-u32(r1(R+4469))));
w1(R+4390,u8(u32(r1(R+4390))-u32(r1(R+4470))));
w1(R+4391,u8(u32(r1(R+4391))-u32(r1(R+4471))));
}
B71a4ee:{NFSU2_TR(0x71a4ee);
u8 U[8];
w1(U+0,u8(s8(r1(R+4384))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4385))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4386))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4387))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4388))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4389))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4390))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4391))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a4f1:{NFSU2_TR(0x71a4f1);
u8 U[8];
w1(U+0,u8(s8(r1(R+4368))<s8(r1(R+4384))));
w1(R+4384,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4369))<s8(r1(R+4385))));
w1(R+4385,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4370))<s8(r1(R+4386))));
w1(R+4386,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4371))<s8(r1(R+4387))));
w1(R+4387,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4372))<s8(r1(R+4388))));
w1(R+4388,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4373))<s8(r1(R+4389))));
w1(R+4389,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4374))<s8(r1(R+4390))));
w1(R+4390,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4375))<s8(r1(R+4391))));
w1(R+4391,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a4f4:{NFSU2_TR(0x71a4f4);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4400))));
}
B71a4f7:{NFSU2_TR(0x71a4f7);
__builtin_memmove((R+4400),gp(0x7c67c0),8);
}
B71a4fe:{NFSU2_TR(0x71a4fe);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4384))));
}
B71a501:{NFSU2_TR(0x71a501);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B71a504:{NFSU2_TR(0x71a504);
__builtin_memmove((R+4384),(R+4432),8);
}
B71a507:{NFSU2_TR(0x71a507);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a50a:{NFSU2_TR(0x71a50a);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71a50d:{NFSU2_TR(0x71a50d);
__builtin_memmove((R+4407),(R+4371),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4370),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4369),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4368),1);
}
B71a510:{NFSU2_TR(0x71a510);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B71a513:{NFSU2_TR(0x71a513);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4372),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4373),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4374),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4375),1);
}
B71a516:{NFSU2_TR(0x71a516);
__builtin_memmove((R+4384),(R+4400),8);
}
B71a519:{NFSU2_TR(0x71a519);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4372),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4373),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4374),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4375),1);
}
B71a51c:{NFSU2_TR(0x71a51c);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B71a51f:{NFSU2_TR(0x71a51f);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B71a522:{NFSU2_TR(0x71a522);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a525:{NFSU2_TR(0x71a525);
__builtin_memmove((R+4432),(R+4448),8);
}
B71a528:{NFSU2_TR(0x71a528);
__builtin_memmove((R+4400),(R+4416),8);
}
B71a52b:{NFSU2_TR(0x71a52b);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4454))));
}
B71a52e:{NFSU2_TR(0x71a52e);
__builtin_memmove((R+4407),(R+4371),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4370),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4369),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4368),1);
}
B71a531:{NFSU2_TR(0x71a531);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71a534:{NFSU2_TR(0x71a534);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B71a537:{NFSU2_TR(0x71a537);
__builtin_memmove((R+4448),(R+4464),8);
}
B71a53a:{NFSU2_TR(0x71a53a);
__builtin_memmove((R+4471),(R+4371),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4370),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4369),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4368),1);
}
B71a53d:{NFSU2_TR(0x71a53d);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4372),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4373),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4374),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4375),1);
}
B71a540:{NFSU2_TR(0x71a540);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4470))));
}
B71a543:{NFSU2_TR(0x71a543);
__builtin_memmove((R+4375),(R+4355),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4354),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4353),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4352),1);
}
B71a546:{NFSU2_TR(0x71a546);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a549:{NFSU2_TR(0x71a549);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x8ull)));}
}
B71a54d:{NFSU2_TR(0x71a54d);
__builtin_memmove((R+4464),(R+4468),1);
__builtin_memmove((R+4465),(R+4356),1);
__builtin_memmove((R+4466),(R+4469),1);
__builtin_memmove((R+4467),(R+4357),1);
__builtin_memmove((R+4468),(R+4470),1);
__builtin_memmove((R+4469),(R+4358),1);
__builtin_memmove((R+4470),(R+4471),1);
__builtin_memmove((R+4471),(R+4359),1);
}
B71a550:{NFSU2_TR(0x71a550);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4454))));
}
B71a553:{NFSU2_TR(0x71a553);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B71a557:{NFSU2_TR(0x71a557);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B71a55a:{NFSU2_TR(0x71a55a);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B71a55d:{NFSU2_TR(0x71a55d);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a560:{NFSU2_TR(0x71a560);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71a563:{NFSU2_TR(0x71a563);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6780),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a56a:{NFSU2_TR(0x71a56a);
w8(R+4368,u64(r4(G+0)));
}
B71a56d:{NFSU2_TR(0x71a56d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6780),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71a574:{NFSU2_TR(0x71a574);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x3ull)));}
}
B71a578:{NFSU2_TR(0x71a578);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B71a57c:{NFSU2_TR(0x71a57c);
__builtin_memmove((R+4400),(R+4384),8);
}
B71a57f:{NFSU2_TR(0x71a57f);
__builtin_memmove((R+4374),(R+4370),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4368),2);
}
B71a582:{NFSU2_TR(0x71a582);
__builtin_memmove((R+4432),(R+4416),8);
}
B71a585:{NFSU2_TR(0x71a585);
__builtin_memmove((R+4372),(R+4368),4);
}
B71a588:{NFSU2_TR(0x71a588);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B71a58c:{NFSU2_TR(0x71a58c);
__builtin_memmove((R+4448),(R+4368),8);
}
B71a58f:{NFSU2_TR(0x71a58f);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B71a593:{NFSU2_TR(0x71a593);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4384))));
}
B71a596:{NFSU2_TR(0x71a596);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B71a599:{NFSU2_TR(0x71a599);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4416))));
}
B71a59c:{NFSU2_TR(0x71a59c);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B71a59f:{NFSU2_TR(0x71a59f);
w8(R+4384,u64(u64(r8(R+4384))|u64(m8(0x7c6790))));
}
B71a5a6:{NFSU2_TR(0x71a5a6);
w8(R+4416,u64(u64(r8(R+4416))|u64(m8(0x7c6790))));
}
B71a5ad:{NFSU2_TR(0x71a5ad);
__builtin_memmove((R+4448),(R+4368),8);
}
B71a5b0:{NFSU2_TR(0x71a5b0);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71a5b3:{NFSU2_TR(0x71a5b3);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71a5b6:{NFSU2_TR(0x71a5b6);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4368))));
}
B71a5b9:{NFSU2_TR(0x71a5b9);
__builtin_memmove((R+4368),(R+4448),8);
}
B71a5bc:{NFSU2_TR(0x71a5bc);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71a5bf:{NFSU2_TR(0x71a5bf);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a5c2:{NFSU2_TR(0x71a5c2);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4390))));
}
B71a5c5:{NFSU2_TR(0x71a5c5);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71a5c8:{NFSU2_TR(0x71a5c8);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71a5cb:{NFSU2_TR(0x71a5cb);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4400))));
}
B71a5ce:{NFSU2_TR(0x71a5ce);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a5d1:{NFSU2_TR(0x71a5d1);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71a5d4:{NFSU2_TR(0x71a5d4);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B71a5d7:{NFSU2_TR(0x71a5d7);
__builtin_memmove((R+4384),(R+4416),8);
}
B71a5da:{NFSU2_TR(0x71a5da);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71a5de:{NFSU2_TR(0x71a5de);
__builtin_memmove((R+4400),(R+4368),8);
}
B71a5e1:{NFSU2_TR(0x71a5e1);
__builtin_memmove((R+4416),gp(0x7c67c0),8);
}
B71a5e8:{NFSU2_TR(0x71a5e8);
{wv<8>((R+4368),uo::packsswb<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71a5eb:{NFSU2_TR(0x71a5eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B71a5ef:{NFSU2_TR(0x71a5ef);
w1(R+4432,u8(u32(r1(R+4432))-u32(r1(R+4416))));
w1(R+4433,u8(u32(r1(R+4433))-u32(r1(R+4417))));
w1(R+4434,u8(u32(r1(R+4434))-u32(r1(R+4418))));
w1(R+4435,u8(u32(r1(R+4435))-u32(r1(R+4419))));
w1(R+4436,u8(u32(r1(R+4436))-u32(r1(R+4420))));
w1(R+4437,u8(u32(r1(R+4437))-u32(r1(R+4421))));
w1(R+4438,u8(u32(r1(R+4438))-u32(r1(R+4422))));
w1(R+4439,u8(u32(r1(R+4439))-u32(r1(R+4423))));
}
B71a5f2:{NFSU2_TR(0x71a5f2);
w1(R+4448,u8(u32(r1(R+4448))-u32(r1(R+4416))));
w1(R+4449,u8(u32(r1(R+4449))-u32(r1(R+4417))));
w1(R+4450,u8(u32(r1(R+4450))-u32(r1(R+4418))));
w1(R+4451,u8(u32(r1(R+4451))-u32(r1(R+4419))));
w1(R+4452,u8(u32(r1(R+4452))-u32(r1(R+4420))));
w1(R+4453,u8(u32(r1(R+4453))-u32(r1(R+4421))));
w1(R+4454,u8(u32(r1(R+4454))-u32(r1(R+4422))));
w1(R+4455,u8(u32(r1(R+4455))-u32(r1(R+4423))));
}
B71a5f5:{NFSU2_TR(0x71a5f5);
{wv<8>((R+4432),uo::paddsb<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B71a5f8:{NFSU2_TR(0x71a5f8);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a5fb:{NFSU2_TR(0x71a5fb);
w1(R+4432,u8(u32(r1(R+4432))+u32(r1(R+4416))));
w1(R+4433,u8(u32(r1(R+4433))+u32(r1(R+4417))));
w1(R+4434,u8(u32(r1(R+4434))+u32(r1(R+4418))));
w1(R+4435,u8(u32(r1(R+4435))+u32(r1(R+4419))));
w1(R+4436,u8(u32(r1(R+4436))+u32(r1(R+4420))));
w1(R+4437,u8(u32(r1(R+4437))+u32(r1(R+4421))));
w1(R+4438,u8(u32(r1(R+4438))+u32(r1(R+4422))));
w1(R+4439,u8(u32(r1(R+4439))+u32(r1(R+4423))));
}
B71a5fe:{NFSU2_TR(0x71a5fe);
w1(R+4448,u8(u32(r1(R+4448))+u32(r1(R+4416))));
w1(R+4449,u8(u32(r1(R+4449))+u32(r1(R+4417))));
w1(R+4450,u8(u32(r1(R+4450))+u32(r1(R+4418))));
w1(R+4451,u8(u32(r1(R+4451))+u32(r1(R+4419))));
w1(R+4452,u8(u32(r1(R+4452))+u32(r1(R+4420))));
w1(R+4453,u8(u32(r1(R+4453))+u32(r1(R+4421))));
w1(R+4454,u8(u32(r1(R+4454))+u32(r1(R+4422))));
w1(R+4455,u8(u32(r1(R+4455))+u32(r1(R+4423))));
}
B71a601:{NFSU2_TR(0x71a601);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B71a604:{NFSU2_TR(0x71a604);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x1ull)));}
}
B71a608:{NFSU2_TR(0x71a608);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x1ull)));}
}
B71a60c:{NFSU2_TR(0x71a60c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B71a610:{NFSU2_TR(0x71a610);
{wv<8>((R+4400),uo::packsswb<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B71a613:{NFSU2_TR(0x71a613);
w1(R+4368,u8(u32(r1(R+4368))-u32(r1(R+4416))));
w1(R+4369,u8(u32(r1(R+4369))-u32(r1(R+4417))));
w1(R+4370,u8(u32(r1(R+4370))-u32(r1(R+4418))));
w1(R+4371,u8(u32(r1(R+4371))-u32(r1(R+4419))));
w1(R+4372,u8(u32(r1(R+4372))-u32(r1(R+4420))));
w1(R+4373,u8(u32(r1(R+4373))-u32(r1(R+4421))));
w1(R+4374,u8(u32(r1(R+4374))-u32(r1(R+4422))));
w1(R+4375,u8(u32(r1(R+4375))-u32(r1(R+4423))));
}
B71a616:{NFSU2_TR(0x71a616);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4352))));
w8(R+4352,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B71a619:{NFSU2_TR(0x71a619);
w1(R+4464,u8(u32(r1(R+4464))-u32(r1(R+4416))));
w1(R+4465,u8(u32(r1(R+4465))-u32(r1(R+4417))));
w1(R+4466,u8(u32(r1(R+4466))-u32(r1(R+4418))));
w1(R+4467,u8(u32(r1(R+4467))-u32(r1(R+4419))));
w1(R+4468,u8(u32(r1(R+4468))-u32(r1(R+4420))));
w1(R+4469,u8(u32(r1(R+4469))-u32(r1(R+4421))));
w1(R+4470,u8(u32(r1(R+4470))-u32(r1(R+4422))));
w1(R+4471,u8(u32(r1(R+4471))-u32(r1(R+4423))));
}
B71a61c:{NFSU2_TR(0x71a61c);
{wv<8>((R+4464),uo::psubsb<8>(rv<8>((R+4464)),rv<8>((R+4352))));}
}
B71a61f:{NFSU2_TR(0x71a61f);
{wv<8>((R+4352),uo::paddsb<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B71a622:{NFSU2_TR(0x71a622);
w1(R+4464,u8(u32(r1(R+4464))+u32(r1(R+4416))));
w1(R+4465,u8(u32(r1(R+4465))+u32(r1(R+4417))));
w1(R+4466,u8(u32(r1(R+4466))+u32(r1(R+4418))));
w1(R+4467,u8(u32(r1(R+4467))+u32(r1(R+4419))));
w1(R+4468,u8(u32(r1(R+4468))+u32(r1(R+4420))));
w1(R+4469,u8(u32(r1(R+4469))+u32(r1(R+4421))));
w1(R+4470,u8(u32(r1(R+4470))+u32(r1(R+4422))));
w1(R+4471,u8(u32(r1(R+4471))+u32(r1(R+4423))));
}
B71a625:{NFSU2_TR(0x71a625);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(R+4416))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(R+4417))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(R+4418))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(R+4419))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(R+4420))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(R+4421))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(R+4422))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(R+4423))));
}
B71a628:{NFSU2_TR(0x71a628);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71a62b:{NFSU2_TR(0x71a62b);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a62e:{NFSU2_TR(0x71a62e);
__builtin_memmove((R+4359),(R+4435),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4434),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4433),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4432),1);
}
B71a631:{NFSU2_TR(0x71a631);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4436),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4437),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4438),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4439),1);
}
B71a634:{NFSU2_TR(0x71a634);
__builtin_memmove((R+4384),(R+4448),8);
}
B71a637:{NFSU2_TR(0x71a637);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71a63a:{NFSU2_TR(0x71a63a);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4468),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4469),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4470),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4471),1);
}
B71a63d:{NFSU2_TR(0x71a63d);
__builtin_memmove((R+4368),(R+4352),8);
}
B71a640:{NFSU2_TR(0x71a640);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B71a643:{NFSU2_TR(0x71a643);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4352)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a647:{NFSU2_TR(0x71a647);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B71a64a:{NFSU2_TR(0x71a64a);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B71a64e:{NFSU2_TR(0x71a64e);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+24)),r4(U+0));
}
B71a651:{NFSU2_TR(0x71a651);
__builtin_memmove((R+4432),(R+4416),8);
}
B71a654:{NFSU2_TR(0x71a654);
__builtin_memmove((R+4422),(R+4450),2);
__builtin_memmove((R+4420),(R+4418),2);
__builtin_memmove((R+4418),(R+4448),2);
}
B71a657:{NFSU2_TR(0x71a657);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4368)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a65b:{NFSU2_TR(0x71a65b);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x20ull))));
}
B71a65f:{NFSU2_TR(0x71a65f);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4452),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4454),2);
}
B71a662:{NFSU2_TR(0x71a662);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4368)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a666:{NFSU2_TR(0x71a666);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71a669:{NFSU2_TR(0x71a669);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4416)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a66d:{NFSU2_TR(0x71a66d);
w8(R+4416,shr<u64>(r8(R+4416),u64(u32(0x20ull))));
}
B71a671:{NFSU2_TR(0x71a671);
u8 U[4];
w4(U+0,u32(r8(R+4416)));
s4(u32(r4(R+24)),r4(U+0));
}
B71a674:{NFSU2_TR(0x71a674);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4432)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a678:{NFSU2_TR(0x71a678);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B71a67c:{NFSU2_TR(0x71a67c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4432)));
s4(u32(r4(U+4)),r4(U+8));
}
B71a680:{NFSU2_TR(0x71a680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71a681:{NFSU2_TR(0x71a681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a682:{NFSU2_TR(0x71a682);
__builtin_memmove((G+16),(R+20),4);
}
B71a684:{NFSU2_TR(0x71a684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a685:{NFSU2_TR(0x71a685);
__builtin_memmove((G+16),(R+12),4);
}
B71a687:{NFSU2_TR(0x71a687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71a688:{NFSU2_TR(0x71a688);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71a689(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a689:L71a689:{bud-=127;NFSU2_TR(0x71a689);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a68a:{NFSU2_TR(0x71a68a);
__builtin_memmove((R+20),(G+16),4);
}
B71a68c:{NFSU2_TR(0x71a68c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a68f:{NFSU2_TR(0x71a68f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a692:{NFSU2_TR(0x71a692);
__builtin_memmove((G+4),gp(0x8b9c4c),4);
}
B71a698:{NFSU2_TR(0x71a698);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B71a69b:{NFSU2_TR(0x71a69b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a69c:{NFSU2_TR(0x71a69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a69f:{NFSU2_TR(0x71a69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a6a2:{NFSU2_TR(0x71a6a2);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B71a6a4:{NFSU2_TR(0x71a6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71a6a7:{NFSU2_TR(0x71a6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a6aa:{NFSU2_TR(0x71a6aa);
u8 U[6];
w1(F+0,u8((r4(G+4))<(r4(R+8))));
w1(F+11,sborrow<u32>(r4(G+4),r4(R+8)));
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+8))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71a6ac:{NFSU2_TR(0x71a6ac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71a6af:{NFSU2_TR(0x71a6af);
__builtin_memmove((R+4464),gp(0x7c67b0),8);
}
B71a6b6:{NFSU2_TR(0x71a6b6);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71a6ba:{NFSU2_TR(0x71a6ba);
__builtin_memmove((R+4448),(R+4384),8);
}
B71a6bd:{NFSU2_TR(0x71a6bd);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4432),(U+8),8);
}
B71a6c1:{NFSU2_TR(0x71a6c1);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a6c4:{NFSU2_TR(0x71a6c4);
__builtin_memmove((R+4368),gp(0x7c6770),8);
}
B71a6cb:{NFSU2_TR(0x71a6cb);
w1(R+4352,u8(u32(r1(R+4352))-u32(r1(R+4432))));
w1(R+4353,u8(u32(r1(R+4353))-u32(r1(R+4433))));
w1(R+4354,u8(u32(r1(R+4354))-u32(r1(R+4434))));
w1(R+4355,u8(u32(r1(R+4355))-u32(r1(R+4435))));
w1(R+4356,u8(u32(r1(R+4356))-u32(r1(R+4436))));
w1(R+4357,u8(u32(r1(R+4357))-u32(r1(R+4437))));
w1(R+4358,u8(u32(r1(R+4358))-u32(r1(R+4438))));
w1(R+4359,u8(u32(r1(R+4359))-u32(r1(R+4439))));
}
B71a6ce:{NFSU2_TR(0x71a6ce);
u8 U[8];
w1(U+0,u8(s8(r1(R+4352))<s8(r1(R+4368))));
w1(R+4368,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4353))<s8(r1(R+4369))));
w1(R+4369,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4354))<s8(r1(R+4370))));
w1(R+4370,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4355))<s8(r1(R+4371))));
w1(R+4371,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4356))<s8(r1(R+4372))));
w1(R+4372,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4357))<s8(r1(R+4373))));
w1(R+4373,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4358))<s8(r1(R+4374))));
w1(R+4374,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4359))<s8(r1(R+4375))));
w1(R+4375,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a6d1:{NFSU2_TR(0x71a6d1);
u8 U[8];
w1(U+0,u8(s8(r1(R+4464))<s8(r1(R+4352))));
w1(R+4352,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4465))<s8(r1(R+4353))));
w1(R+4353,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4466))<s8(r1(R+4354))));
w1(R+4354,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4467))<s8(r1(R+4355))));
w1(R+4355,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4468))<s8(r1(R+4356))));
w1(R+4356,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4469))<s8(r1(R+4357))));
w1(R+4357,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4470))<s8(r1(R+4358))));
w1(R+4358,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4471))<s8(r1(R+4359))));
w1(R+4359,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a6d4:{NFSU2_TR(0x71a6d4);
__builtin_memmove((R+4400),gp(0x7c6770),8);
}
B71a6db:{NFSU2_TR(0x71a6db);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B71a6de:{NFSU2_TR(0x71a6de);
__builtin_memmove((R+4368),(R+4464),8);
}
B71a6e1:{NFSU2_TR(0x71a6e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4464),(U+8),8);
}
B71a6e5:{NFSU2_TR(0x71a6e5);
w1(R+4384,u8(u32(r1(R+4384))-u32(r1(R+4464))));
w1(R+4385,u8(u32(r1(R+4385))-u32(r1(R+4465))));
w1(R+4386,u8(u32(r1(R+4386))-u32(r1(R+4466))));
w1(R+4387,u8(u32(r1(R+4387))-u32(r1(R+4467))));
w1(R+4388,u8(u32(r1(R+4388))-u32(r1(R+4468))));
w1(R+4389,u8(u32(r1(R+4389))-u32(r1(R+4469))));
w1(R+4390,u8(u32(r1(R+4390))-u32(r1(R+4470))));
w1(R+4391,u8(u32(r1(R+4391))-u32(r1(R+4471))));
}
B71a6e8:{NFSU2_TR(0x71a6e8);
u8 U[8];
w1(U+0,u8(s8(r1(R+4384))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4385))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4386))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4387))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4388))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4389))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4390))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4391))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a6eb:{NFSU2_TR(0x71a6eb);
u8 U[8];
w1(U+0,u8(s8(r1(R+4368))<s8(r1(R+4384))));
w1(R+4384,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4369))<s8(r1(R+4385))));
w1(R+4385,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4370))<s8(r1(R+4386))));
w1(R+4386,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4371))<s8(r1(R+4387))));
w1(R+4387,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4372))<s8(r1(R+4388))));
w1(R+4388,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4373))<s8(r1(R+4389))));
w1(R+4389,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4374))<s8(r1(R+4390))));
w1(R+4390,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4375))<s8(r1(R+4391))));
w1(R+4391,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a6ee:{NFSU2_TR(0x71a6ee);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4400))));
}
B71a6f1:{NFSU2_TR(0x71a6f1);
__builtin_memmove((R+4400),gp(0x7c67c0),8);
}
B71a6f8:{NFSU2_TR(0x71a6f8);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4384))));
}
B71a6fb:{NFSU2_TR(0x71a6fb);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4368))));
}
B71a6fe:{NFSU2_TR(0x71a6fe);
__builtin_memmove((R+4384),(R+4432),8);
}
B71a701:{NFSU2_TR(0x71a701);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a704:{NFSU2_TR(0x71a704);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71a707:{NFSU2_TR(0x71a707);
__builtin_memmove((R+4407),(R+4371),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4370),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4369),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4368),1);
}
B71a70a:{NFSU2_TR(0x71a70a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B71a70d:{NFSU2_TR(0x71a70d);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4372),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4373),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4374),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4375),1);
}
B71a710:{NFSU2_TR(0x71a710);
__builtin_memmove((R+4384),(R+4400),8);
}
B71a713:{NFSU2_TR(0x71a713);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4372),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4373),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4374),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4375),1);
}
B71a716:{NFSU2_TR(0x71a716);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B71a719:{NFSU2_TR(0x71a719);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4438))));
}
B71a71c:{NFSU2_TR(0x71a71c);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a71f:{NFSU2_TR(0x71a71f);
__builtin_memmove((R+4432),(R+4448),8);
}
B71a722:{NFSU2_TR(0x71a722);
__builtin_memmove((R+4400),(R+4416),8);
}
B71a725:{NFSU2_TR(0x71a725);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4448))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4450))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4452))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4454))));
}
B71a728:{NFSU2_TR(0x71a728);
__builtin_memmove((R+4407),(R+4371),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4370),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4369),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4368),1);
}
B71a72b:{NFSU2_TR(0x71a72b);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4454))));
}
B71a72e:{NFSU2_TR(0x71a72e);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B71a731:{NFSU2_TR(0x71a731);
__builtin_memmove((R+4448),(R+4464),8);
}
B71a734:{NFSU2_TR(0x71a734);
__builtin_memmove((R+4471),(R+4371),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4370),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4369),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4368),1);
}
B71a737:{NFSU2_TR(0x71a737);
__builtin_memmove((R+4448),(R+4452),1);
__builtin_memmove((R+4449),(R+4372),1);
__builtin_memmove((R+4450),(R+4453),1);
__builtin_memmove((R+4451),(R+4373),1);
__builtin_memmove((R+4452),(R+4454),1);
__builtin_memmove((R+4453),(R+4374),1);
__builtin_memmove((R+4454),(R+4455),1);
__builtin_memmove((R+4455),(R+4375),1);
}
B71a73a:{NFSU2_TR(0x71a73a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4464))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4466))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4468))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4470))));
}
B71a73d:{NFSU2_TR(0x71a73d);
__builtin_memmove((R+4375),(R+4355),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4354),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4353),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4352),1);
}
B71a740:{NFSU2_TR(0x71a740);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a743:{NFSU2_TR(0x71a743);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x8ull)));}
}
B71a747:{NFSU2_TR(0x71a747);
__builtin_memmove((R+4464),(R+4468),1);
__builtin_memmove((R+4465),(R+4356),1);
__builtin_memmove((R+4466),(R+4469),1);
__builtin_memmove((R+4467),(R+4357),1);
__builtin_memmove((R+4468),(R+4470),1);
__builtin_memmove((R+4469),(R+4358),1);
__builtin_memmove((R+4470),(R+4471),1);
__builtin_memmove((R+4471),(R+4359),1);
}
B71a74a:{NFSU2_TR(0x71a74a);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4454))));
}
B71a74d:{NFSU2_TR(0x71a74d);
{wv<8>((R+4464),uo::psraw<8>(rv<8>((R+4464)),V(0x8ull)));}
}
B71a751:{NFSU2_TR(0x71a751);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B71a754:{NFSU2_TR(0x71a754);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B71a757:{NFSU2_TR(0x71a757);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B71a75a:{NFSU2_TR(0x71a75a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71a75d:{NFSU2_TR(0x71a75d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6780),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B71a764:{NFSU2_TR(0x71a764);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6780),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B71a76b:{NFSU2_TR(0x71a76b);
w8(R+4368,u64(r4(G+0)));
}
B71a76e:{NFSU2_TR(0x71a76e);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0x3ull)));}
}
B71a772:{NFSU2_TR(0x71a772);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B71a776:{NFSU2_TR(0x71a776);
__builtin_memmove((R+4400),(R+4384),8);
}
B71a779:{NFSU2_TR(0x71a779);
__builtin_memmove((R+4374),(R+4370),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4368),2);
}
B71a77c:{NFSU2_TR(0x71a77c);
__builtin_memmove((R+4432),(R+4416),8);
}
B71a77f:{NFSU2_TR(0x71a77f);
__builtin_memmove((R+4372),(R+4368),4);
}
B71a782:{NFSU2_TR(0x71a782);
{wv<8>((R+4384),uo::psraw<8>(rv<8>((R+4384)),V(0xfull)));}
}
B71a786:{NFSU2_TR(0x71a786);
__builtin_memmove((R+4448),(R+4368),8);
}
B71a789:{NFSU2_TR(0x71a789);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0xfull)));}
}
B71a78d:{NFSU2_TR(0x71a78d);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4384))));
}
B71a790:{NFSU2_TR(0x71a790);
{wv<8>((R+4400),uo::psubsw<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B71a793:{NFSU2_TR(0x71a793);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4416))));
}
B71a796:{NFSU2_TR(0x71a796);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B71a799:{NFSU2_TR(0x71a799);
w8(R+4384,u64(u64(r8(R+4384))|u64(m8(0x7c6790))));
}
B71a7a0:{NFSU2_TR(0x71a7a0);
w8(R+4416,u64(u64(r8(R+4416))|u64(m8(0x7c6790))));
}
B71a7a7:{NFSU2_TR(0x71a7a7);
__builtin_memmove((R+4448),(R+4368),8);
}
B71a7aa:{NFSU2_TR(0x71a7aa);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71a7ad:{NFSU2_TR(0x71a7ad);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B71a7b0:{NFSU2_TR(0x71a7b0);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4368))));
}
B71a7b3:{NFSU2_TR(0x71a7b3);
__builtin_memmove((R+4368),(R+4448),8);
}
B71a7b6:{NFSU2_TR(0x71a7b6);
{wv<8>((R+4368),uo::psubusw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71a7b9:{NFSU2_TR(0x71a7b9);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a7bc:{NFSU2_TR(0x71a7bc);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4368))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4370))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4372))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4374))));
}
B71a7bf:{NFSU2_TR(0x71a7bf);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71a7c2:{NFSU2_TR(0x71a7c2);
{wv<8>((R+4432),uo::psubusw<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B71a7c5:{NFSU2_TR(0x71a7c5);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4400))));
}
B71a7c8:{NFSU2_TR(0x71a7c8);
__builtin_memmove((R+4400),(R+4448),8);
}
B71a7cb:{NFSU2_TR(0x71a7cb);
{wv<8>((R+4400),uo::psubusw<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B71a7ce:{NFSU2_TR(0x71a7ce);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B71a7d1:{NFSU2_TR(0x71a7d1);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4432),(U+8),8);
}
B71a7d5:{NFSU2_TR(0x71a7d5);
__builtin_memmove((R+4368),(R+4384),8);
}
B71a7d8:{NFSU2_TR(0x71a7d8);
__builtin_memmove((R+4464),gp(0x7c67c0),8);
}
B71a7df:{NFSU2_TR(0x71a7df);
{wv<8>((R+4384),uo::packsswb<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B71a7e2:{NFSU2_TR(0x71a7e2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B71a7e5:{NFSU2_TR(0x71a7e5);
w1(R+4432,u8(u32(r1(R+4432))-u32(r1(R+4464))));
w1(R+4433,u8(u32(r1(R+4433))-u32(r1(R+4465))));
w1(R+4434,u8(u32(r1(R+4434))-u32(r1(R+4466))));
w1(R+4435,u8(u32(r1(R+4435))-u32(r1(R+4467))));
w1(R+4436,u8(u32(r1(R+4436))-u32(r1(R+4468))));
w1(R+4437,u8(u32(r1(R+4437))-u32(r1(R+4469))));
w1(R+4438,u8(u32(r1(R+4438))-u32(r1(R+4470))));
w1(R+4439,u8(u32(r1(R+4439))-u32(r1(R+4471))));
}
B71a7e8:{NFSU2_TR(0x71a7e8);
w1(R+4448,u8(u32(r1(R+4448))-u32(r1(R+4464))));
w1(R+4449,u8(u32(r1(R+4449))-u32(r1(R+4465))));
w1(R+4450,u8(u32(r1(R+4450))-u32(r1(R+4466))));
w1(R+4451,u8(u32(r1(R+4451))-u32(r1(R+4467))));
w1(R+4452,u8(u32(r1(R+4452))-u32(r1(R+4468))));
w1(R+4453,u8(u32(r1(R+4453))-u32(r1(R+4469))));
w1(R+4454,u8(u32(r1(R+4454))-u32(r1(R+4470))));
w1(R+4455,u8(u32(r1(R+4455))-u32(r1(R+4471))));
}
B71a7eb:{NFSU2_TR(0x71a7eb);
{wv<8>((R+4432),uo::paddsb<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B71a7ee:{NFSU2_TR(0x71a7ee);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B71a7f1:{NFSU2_TR(0x71a7f1);
w1(R+4432,u8(u32(r1(R+4432))+u32(r1(R+4464))));
w1(R+4433,u8(u32(r1(R+4433))+u32(r1(R+4465))));
w1(R+4434,u8(u32(r1(R+4434))+u32(r1(R+4466))));
w1(R+4435,u8(u32(r1(R+4435))+u32(r1(R+4467))));
w1(R+4436,u8(u32(r1(R+4436))+u32(r1(R+4468))));
w1(R+4437,u8(u32(r1(R+4437))+u32(r1(R+4469))));
w1(R+4438,u8(u32(r1(R+4438))+u32(r1(R+4470))));
w1(R+4439,u8(u32(r1(R+4439))+u32(r1(R+4471))));
}
B71a7f4:{NFSU2_TR(0x71a7f4);
w1(R+4448,u8(u32(r1(R+4448))+u32(r1(R+4464))));
w1(R+4449,u8(u32(r1(R+4449))+u32(r1(R+4465))));
w1(R+4450,u8(u32(r1(R+4450))+u32(r1(R+4466))));
w1(R+4451,u8(u32(r1(R+4451))+u32(r1(R+4467))));
w1(R+4452,u8(u32(r1(R+4452))+u32(r1(R+4468))));
w1(R+4453,u8(u32(r1(R+4453))+u32(r1(R+4469))));
w1(R+4454,u8(u32(r1(R+4454))+u32(r1(R+4470))));
w1(R+4455,u8(u32(r1(R+4455))+u32(r1(R+4471))));
}
B71a7f7:{NFSU2_TR(0x71a7f7);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4432),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a7fb:{NFSU2_TR(0x71a7fb);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x1ull)));}
}
B71a7ff:{NFSU2_TR(0x71a7ff);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B71a803:{NFSU2_TR(0x71a803);
u8 U[8];
__builtin_memmove((U+0),(R+4448),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B71a806:{NFSU2_TR(0x71a806);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71a80a:{NFSU2_TR(0x71a80a);
{wv<8>((R+4368),uo::packsswb<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B71a80d:{NFSU2_TR(0x71a80d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B71a811:{NFSU2_TR(0x71a811);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4352))));
w8(R+4352,u64(u64(r8(U+0))&u64(r8(R+4368))));
}
B71a814:{NFSU2_TR(0x71a814);
w1(R+4384,u8(u32(r1(R+4384))-u32(r1(R+4464))));
w1(R+4385,u8(u32(r1(R+4385))-u32(r1(R+4465))));
w1(R+4386,u8(u32(r1(R+4386))-u32(r1(R+4466))));
w1(R+4387,u8(u32(r1(R+4387))-u32(r1(R+4467))));
w1(R+4388,u8(u32(r1(R+4388))-u32(r1(R+4468))));
w1(R+4389,u8(u32(r1(R+4389))-u32(r1(R+4469))));
w1(R+4390,u8(u32(r1(R+4390))-u32(r1(R+4470))));
w1(R+4391,u8(u32(r1(R+4391))-u32(r1(R+4471))));
}
B71a817:{NFSU2_TR(0x71a817);
w1(R+4400,u8(u32(r1(R+4400))-u32(r1(R+4464))));
w1(R+4401,u8(u32(r1(R+4401))-u32(r1(R+4465))));
w1(R+4402,u8(u32(r1(R+4402))-u32(r1(R+4466))));
w1(R+4403,u8(u32(r1(R+4403))-u32(r1(R+4467))));
w1(R+4404,u8(u32(r1(R+4404))-u32(r1(R+4468))));
w1(R+4405,u8(u32(r1(R+4405))-u32(r1(R+4469))));
w1(R+4406,u8(u32(r1(R+4406))-u32(r1(R+4470))));
w1(R+4407,u8(u32(r1(R+4407))-u32(r1(R+4471))));
}
B71a81a:{NFSU2_TR(0x71a81a);
{wv<8>((R+4384),uo::paddsb<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B71a81d:{NFSU2_TR(0x71a81d);
w1(R+4384,u8(u32(r1(R+4384))+u32(r1(R+4464))));
w1(R+4385,u8(u32(r1(R+4385))+u32(r1(R+4465))));
w1(R+4386,u8(u32(r1(R+4386))+u32(r1(R+4466))));
w1(R+4387,u8(u32(r1(R+4387))+u32(r1(R+4467))));
w1(R+4388,u8(u32(r1(R+4388))+u32(r1(R+4468))));
w1(R+4389,u8(u32(r1(R+4389))+u32(r1(R+4469))));
w1(R+4390,u8(u32(r1(R+4390))+u32(r1(R+4470))));
w1(R+4391,u8(u32(r1(R+4391))+u32(r1(R+4471))));
}
B71a820:{NFSU2_TR(0x71a820);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a824:{NFSU2_TR(0x71a824);
{wv<8>((R+4400),uo::psubsb<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B71a827:{NFSU2_TR(0x71a827);
w1(R+4400,u8(u32(r1(R+4400))+u32(r1(R+4464))));
w1(R+4401,u8(u32(r1(R+4401))+u32(r1(R+4465))));
w1(R+4402,u8(u32(r1(R+4402))+u32(r1(R+4466))));
w1(R+4403,u8(u32(r1(R+4403))+u32(r1(R+4467))));
w1(R+4404,u8(u32(r1(R+4404))+u32(r1(R+4468))));
w1(R+4405,u8(u32(r1(R+4405))+u32(r1(R+4469))));
w1(R+4406,u8(u32(r1(R+4406))+u32(r1(R+4470))));
w1(R+4407,u8(u32(r1(R+4407))+u32(r1(R+4471))));
}
B71a82a:{NFSU2_TR(0x71a82a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71a82e:{NFSU2_TR(0x71a82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71a82f:{NFSU2_TR(0x71a82f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71a830:{NFSU2_TR(0x71a830);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71a831(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a831:L71a831:{bud-=64;NFSU2_TR(0x71a831);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a832:{NFSU2_TR(0x71a832);
__builtin_memmove((R+12),(G+16),4);
}
B71a834:{NFSU2_TR(0x71a834);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a835:{NFSU2_TR(0x71a835);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a836:{NFSU2_TR(0x71a836);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B71a839:{NFSU2_TR(0x71a839);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B71a83c:{NFSU2_TR(0x71a83c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a83d:{NFSU2_TR(0x71a83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B71a840:{NFSU2_TR(0x71a840);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a844:{NFSU2_TR(0x71a844);
__builtin_memmove((R+20),(G+16),4);
}
B71a846:{NFSU2_TR(0x71a846);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x1b4ull))));
}
B71a84c:{NFSU2_TR(0x71a84c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a84d:{NFSU2_TR(0x71a84d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a84e:{NFSU2_TR(0x71a84e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a84f:{NFSU2_TR(0x71a84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a852:{NFSU2_TR(0x71a852);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71a855:{NFSU2_TR(0x71a855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a858:{NFSU2_TR(0x71a858);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a85b:{NFSU2_TR(0x71a85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a85e:{NFSU2_TR(0x71a85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a861:{NFSU2_TR(0x71a861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a864:{NFSU2_TR(0x71a864);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71a86a:{NFSU2_TR(0x71a86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a86d:{NFSU2_TR(0x71a86d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71a873:{NFSU2_TR(0x71a873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a876:{NFSU2_TR(0x71a876);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a879:{NFSU2_TR(0x71a879);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B71a87c:{NFSU2_TR(0x71a87c);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B71a87f:{NFSU2_TR(0x71a87f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a885:{NFSU2_TR(0x71a885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a888:{NFSU2_TR(0x71a888);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71a88b:{NFSU2_TR(0x71a88b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a88c:{NFSU2_TR(0x71a88c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a88d:{NFSU2_TR(0x71a88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71a890:{NFSU2_TR(0x71a890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71a893:{NFSU2_TR(0x71a893);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a894:{NFSU2_TR(0x71a894);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a895:{NFSU2_TR(0x71a895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71a898:{NFSU2_TR(0x71a898);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71a89a:{NFSU2_TR(0x71a89a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a89b:{NFSU2_TR(0x71a89b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a89c:{NFSU2_TR(0x71a89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a89f:{NFSU2_TR(0x71a89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71a8a2:{NFSU2_TR(0x71a8a2);
w8(R+4352,u64(r4(G+0)));
}
B71a8a5:{NFSU2_TR(0x71a8a5);
w8(R+4384,u64(r4(R+12)));
}
B71a8a8:{NFSU2_TR(0x71a8a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71a8a9:{NFSU2_TR(0x71a8a9);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71a8ac:{NFSU2_TR(0x71a8ac);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
}
B71a8ae:{NFSU2_TR(0x71a8ae);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71a8b1:{NFSU2_TR(0x71a8b1);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71a8b4:{NFSU2_TR(0x71a8b4);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71a8b7:{NFSU2_TR(0x71a8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71a8ba:{NFSU2_TR(0x71a8ba);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71a8bd:{NFSU2_TR(0x71a8bd);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71a8c0:{NFSU2_TR(0x71a8c0);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71a8c3:{NFSU2_TR(0x71a8c3);
__builtin_memmove((R+4368),(R+4352),8);
}
B71a8c6:{NFSU2_TR(0x71a8c6);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71a8c9:{NFSU2_TR(0x71a8c9);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B71a8cc:{NFSU2_TR(0x71a8cc);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B71a8cf:{NFSU2_TR(0x71a8cf);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>(gp(0x817790))));}
}
B71a8d6:{NFSU2_TR(0x71a8d6);
u8 U[8];
__builtin_memmove((U+0),gp(0x817760),8);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(U+0))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(U+1))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(U+2))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(U+3))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(U+4))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(U+5))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(U+6))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(U+7))));
}
B71a8dd:{NFSU2_TR(0x71a8dd);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>(gp(0x817790))));}
}
B71a8e4:{NFSU2_TR(0x71a8e4);
__builtin_memmove((R+4400),gp(0x817770),8);
}
B71a8eb:{NFSU2_TR(0x71a8eb);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
{[[clang::musttail]] return blk_71a8ee(ARGS);}
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
PN u32 blk_71a8ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71a8ee:L71a8ee:{bud-=74;NFSU2_TR(0x71a8ee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71a8f1:{NFSU2_TR(0x71a8f1);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71a8f5:{NFSU2_TR(0x71a8f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71a8f9:{NFSU2_TR(0x71a8f9);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a8fc:{NFSU2_TR(0x71a8fc);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71a8ff:{NFSU2_TR(0x71a8ff);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71a902:{NFSU2_TR(0x71a902);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71a905:{NFSU2_TR(0x71a905);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a908:{NFSU2_TR(0x71a908);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a90b:{NFSU2_TR(0x71a90b);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71a90e:{NFSU2_TR(0x71a90e);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71a915:{NFSU2_TR(0x71a915);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71a91c:{NFSU2_TR(0x71a91c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71a91f:{NFSU2_TR(0x71a91f);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71a922:{NFSU2_TR(0x71a922);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a925:{NFSU2_TR(0x71a925);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71a928:{NFSU2_TR(0x71a928);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a92b:{NFSU2_TR(0x71a92b);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a92e:{NFSU2_TR(0x71a92e);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71a931:{NFSU2_TR(0x71a931);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71a934:{NFSU2_TR(0x71a934);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71a938:{NFSU2_TR(0x71a938);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71a93c:{NFSU2_TR(0x71a93c);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71a940:{NFSU2_TR(0x71a940);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a943:{NFSU2_TR(0x71a943);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71a948:{NFSU2_TR(0x71a948);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71a94b:{NFSU2_TR(0x71a94b);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71a94f:{NFSU2_TR(0x71a94f);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71a952:{NFSU2_TR(0x71a952);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71a955:{NFSU2_TR(0x71a955);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a958:{NFSU2_TR(0x71a958);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a95b:{NFSU2_TR(0x71a95b);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71a95e:{NFSU2_TR(0x71a95e);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71a965:{NFSU2_TR(0x71a965);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71a96c:{NFSU2_TR(0x71a96c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71a96f:{NFSU2_TR(0x71a96f);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71a972:{NFSU2_TR(0x71a972);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a975:{NFSU2_TR(0x71a975);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71a978:{NFSU2_TR(0x71a978);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a97b:{NFSU2_TR(0x71a97b);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a97e:{NFSU2_TR(0x71a97e);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71a981:{NFSU2_TR(0x71a981);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71a984:{NFSU2_TR(0x71a984);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71a988:{NFSU2_TR(0x71a988);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71a98c:{NFSU2_TR(0x71a98c);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71a990:{NFSU2_TR(0x71a990);
__builtin_memmove((R+4432),(R+4400),8);
}
B71a993:{NFSU2_TR(0x71a993);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71a997:{NFSU2_TR(0x71a997);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71a99a:{NFSU2_TR(0x71a99a);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71a99f:{NFSU2_TR(0x71a99f);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71a9a2:{NFSU2_TR(0x71a9a2);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(G+0))),(U+0),16);
}
B71a9a6:{NFSU2_TR(0x71a9a6);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71a9a9:{NFSU2_TR(0x71a9a9);
__builtin_memmove((R+4448),(R+4352),8);
}
B71a9ac:{NFSU2_TR(0x71a9ac);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71a9b0:{NFSU2_TR(0x71a9b0);
__builtin_memmove((R+4416),(R+4352),8);
}
B71a9b3:{NFSU2_TR(0x71a9b3);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71a9b6:{NFSU2_TR(0x71a9b6);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71a9bd:{NFSU2_TR(0x71a9bd);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71a9c4:{NFSU2_TR(0x71a9c4);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71a9c7:{NFSU2_TR(0x71a9c7);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71a9ca:{NFSU2_TR(0x71a9ca);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71a9cd:{NFSU2_TR(0x71a9cd);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71a9d0:{NFSU2_TR(0x71a9d0);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a9d3:{NFSU2_TR(0x71a9d3);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71a9d6:{NFSU2_TR(0x71a9d6);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71a9d9:{NFSU2_TR(0x71a9d9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+4))));
}
B71a9db:{NFSU2_TR(0x71a9db);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71a9df:{NFSU2_TR(0x71a9df);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71a9e2:{NFSU2_TR(0x71a9e2);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71a9e6:{NFSU2_TR(0x71a9e6);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B71a9e9:{NFSU2_TR(0x71a9e9);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71a9ee:{NFSU2_TR(0x71a9ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71a9f0:{NFSU2_TR(0x71a9f0);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71a9f5:{NFSU2_TR(0x71a9f5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71a8eeu);}goto L71a8ee;}}
}
B71a9fb:L71a9fb:{bud-=28;NFSU2_TR(0x71a9fb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71a9fe:{NFSU2_TR(0x71a9fe);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71aa02:{NFSU2_TR(0x71aa02);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71aa06:{NFSU2_TR(0x71aa06);
__builtin_memmove((R+4432),(R+4400),8);
}
B71aa09:{NFSU2_TR(0x71aa09);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71aa0c:{NFSU2_TR(0x71aa0c);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71aa0f:{NFSU2_TR(0x71aa0f);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71aa12:{NFSU2_TR(0x71aa12);
__builtin_memmove((R+4448),(R+4352),8);
}
B71aa15:{NFSU2_TR(0x71aa15);
__builtin_memmove((R+4416),(R+4352),8);
}
B71aa18:{NFSU2_TR(0x71aa18);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71aa1b:{NFSU2_TR(0x71aa1b);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71aa22:{NFSU2_TR(0x71aa22);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71aa29:{NFSU2_TR(0x71aa29);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71aa2c:{NFSU2_TR(0x71aa2c);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71aa2f:{NFSU2_TR(0x71aa2f);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71aa32:{NFSU2_TR(0x71aa32);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71aa35:{NFSU2_TR(0x71aa35);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71aa38:{NFSU2_TR(0x71aa38);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71aa3b:{NFSU2_TR(0x71aa3b);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71aa3e:{NFSU2_TR(0x71aa3e);
wv<16>((R+4992),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71aa42:{NFSU2_TR(0x71aa42);
__builtin_memmove((R+5071),(R+4999),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4998),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4997),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4996),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4995),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4994),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4993),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4992),1);
}
B71aa46:{NFSU2_TR(0x71aa46);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71aa4b:{NFSU2_TR(0x71aa4b);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71aa4f:{NFSU2_TR(0x71aa4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71aa52:{NFSU2_TR(0x71aa52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71aa55:{NFSU2_TR(0x71aa55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71aa58:{NFSU2_TR(0x71aa58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71aa5b:{NFSU2_TR(0x71aa5b);
w4(R+20,u32(0x8ull));
{[[clang::musttail]] return blk_71aa60(ARGS);}
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
PN u32 blk_71aa60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71aa60:L71aa60:{bud-=44;NFSU2_TR(0x71aa60);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71aa65:{NFSU2_TR(0x71aa65);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71aa69:{NFSU2_TR(0x71aa69);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((R+4864),(U+0),16);
}
B71aa6d:{NFSU2_TR(0x71aa6d);
__builtin_memmove((R+4623),(R+5063),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+5062),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+5061),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+5060),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+5059),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+5058),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+5057),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+5056),1);
}
B71aa71:{NFSU2_TR(0x71aa71);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71aa76:{NFSU2_TR(0x71aa76);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(R+4864))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(R+4866))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(R+4868))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(R+4870))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(R+4872))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(R+4874))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(R+4876))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(R+4878))));
}
B71aa7a:{NFSU2_TR(0x71aa7a);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71aa7f:{NFSU2_TR(0x71aa7f);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71aa83:{NFSU2_TR(0x71aa83);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B71aa88:{NFSU2_TR(0x71aa88);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4992))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4994))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4996))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4998))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+5000))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+5002))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+5004))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+5006))));
}
B71aa8c:{NFSU2_TR(0x71aa8c);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+12))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71aa90:{NFSU2_TR(0x71aa90);
__builtin_memmove((R+4687),(R+5063),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+5062),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+5061),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+5060),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+5059),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+5058),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+5057),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+5056),1);
}
B71aa94:{NFSU2_TR(0x71aa94);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4928),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B71aa99:{NFSU2_TR(0x71aa99);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4800))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4802))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4804))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4806))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4808))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4810))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4812))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4814))));
}
B71aa9d:{NFSU2_TR(0x71aa9d);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B71aaa1:{NFSU2_TR(0x71aaa1);
__builtin_memmove((R+4943),(R+5063),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+5062),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+5061),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+5060),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+5059),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+5058),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+5057),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+5056),1);
}
B71aaa5:{NFSU2_TR(0x71aaa5);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71aaad:{NFSU2_TR(0x71aaad);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+5006))));
}
B71aab1:{NFSU2_TR(0x71aab1);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71aab5:{NFSU2_TR(0x71aab5);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71aab9:{NFSU2_TR(0x71aab9);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4672))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4674))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4676))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4678))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4680))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4682))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4684))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4686))));
}
B71aabd:{NFSU2_TR(0x71aabd);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B71aac1:{NFSU2_TR(0x71aac1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71aac5:{NFSU2_TR(0x71aac5);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4928))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4930))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4932))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4934))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4936))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4938))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4940))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4942))));
}
B71aac9:{NFSU2_TR(0x71aac9);
__builtin_memmove((R+4672),gp(0x817730),16);
}
B71aad1:{NFSU2_TR(0x71aad1);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71aad5:{NFSU2_TR(0x71aad5);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4864))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4866))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4868))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4870))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4872))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4874))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4876))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4878))));
}
B71aad9:{NFSU2_TR(0x71aad9);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4686))));
}
B71aadd:{NFSU2_TR(0x71aadd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+4))));
}
B71aadf:{NFSU2_TR(0x71aadf);
__builtin_memmove((R+4992),gp(0x817740),16);
}
B71aae7:{NFSU2_TR(0x71aae7);
__builtin_memmove((R+5056),(R+4992),16);
}
B71aaeb:{NFSU2_TR(0x71aaeb);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B71aaee:{NFSU2_TR(0x71aaee);
{wv<16>((R+5056),uo::psllw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71aaf3:{NFSU2_TR(0x71aaf3);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71aaf7:{NFSU2_TR(0x71aaf7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+4))));
}
B71aaf9:{NFSU2_TR(0x71aaf9);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4992))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4994))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4996))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4998))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5000))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5002))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5004))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5006))));
}
B71aafd:{NFSU2_TR(0x71aafd);
w1(F+0,carry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B71ab00:{NFSU2_TR(0x71ab00);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+5056))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+5058))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+5060))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+5062))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5064))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5066))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5068))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5070))));
}
B71ab04:{NFSU2_TR(0x71ab04);
{wv<16>((R+4608),uo::psubusw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71ab08:{NFSU2_TR(0x71ab08);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71ab09:{NFSU2_TR(0x71ab09);
w2(R+4608,shr<u16>(r2(R+4608),u64(u32(0x7ull))));
w2(R+4610,shr<u16>(r2(R+4610),u64(u32(0x7ull))));
w2(R+4612,shr<u16>(r2(R+4612),u64(u32(0x7ull))));
w2(R+4614,shr<u16>(r2(R+4614),u64(u32(0x7ull))));
w2(R+4616,shr<u16>(r2(R+4616),u64(u32(0x7ull))));
w2(R+4618,shr<u16>(r2(R+4618),u64(u32(0x7ull))));
w2(R+4620,shr<u16>(r2(R+4620),u64(u32(0x7ull))));
w2(R+4622,shr<u16>(r2(R+4622),u64(u32(0x7ull))));
}
B71ab0e:{NFSU2_TR(0x71ab0e);
u8 U[54];
__builtin_memmove((U+5),(R+4608),16);
__builtin_memmove((U+21),(R+5056),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4608),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4609),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4610),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4611),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4612),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4613),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4614),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4615),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4616),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4617),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4618),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4619),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4620),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4621),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4622),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4623),(U+37),1);
}
B71ab12:{NFSU2_TR(0x71ab12);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71ab17:{NFSU2_TR(0x71ab17);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71aa60u);}goto L71aa60;}}
}
B71ab1d:L71ab1d:{bud-=15;NFSU2_TR(0x71ab1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ab1e:{NFSU2_TR(0x71ab1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ab1f:{NFSU2_TR(0x71ab1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71ab20:{NFSU2_TR(0x71ab20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71ab21:{NFSU2_TR(0x71ab21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71ab22:{NFSU2_TR(0x71ab22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ab23:{NFSU2_TR(0x71ab23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ab24:{NFSU2_TR(0x71ab24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ab25:{NFSU2_TR(0x71ab25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ab26:{NFSU2_TR(0x71ab26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ab27:{NFSU2_TR(0x71ab27);
__builtin_memmove((G+16),(R+20),4);
}
B71ab29:{NFSU2_TR(0x71ab29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ab2a:{NFSU2_TR(0x71ab2a);
__builtin_memmove((G+16),(R+12),4);
}
B71ab2c:{NFSU2_TR(0x71ab2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ab2d:{NFSU2_TR(0x71ab2d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71ab2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ab2e:L71ab2e:{bud-=64;NFSU2_TR(0x71ab2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab2f:{NFSU2_TR(0x71ab2f);
__builtin_memmove((R+12),(G+16),4);
}
B71ab31:{NFSU2_TR(0x71ab31);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab32:{NFSU2_TR(0x71ab32);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab33:{NFSU2_TR(0x71ab33);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B71ab36:{NFSU2_TR(0x71ab36);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B71ab39:{NFSU2_TR(0x71ab39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab3a:{NFSU2_TR(0x71ab3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B71ab3d:{NFSU2_TR(0x71ab3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab41:{NFSU2_TR(0x71ab41);
__builtin_memmove((R+20),(G+16),4);
}
B71ab43:{NFSU2_TR(0x71ab43);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x1b4ull))));
}
B71ab49:{NFSU2_TR(0x71ab49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab4a:{NFSU2_TR(0x71ab4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab4b:{NFSU2_TR(0x71ab4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab4c:{NFSU2_TR(0x71ab4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ab4f:{NFSU2_TR(0x71ab4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71ab52:{NFSU2_TR(0x71ab52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab55:{NFSU2_TR(0x71ab55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ab58:{NFSU2_TR(0x71ab58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab5b:{NFSU2_TR(0x71ab5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ab5e:{NFSU2_TR(0x71ab5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab61:{NFSU2_TR(0x71ab61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71ab67:{NFSU2_TR(0x71ab67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab6a:{NFSU2_TR(0x71ab6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71ab70:{NFSU2_TR(0x71ab70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab73:{NFSU2_TR(0x71ab73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ab76:{NFSU2_TR(0x71ab76);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B71ab79:{NFSU2_TR(0x71ab79);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B71ab7c:{NFSU2_TR(0x71ab7c);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x817048ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ab82:{NFSU2_TR(0x71ab82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab85:{NFSU2_TR(0x71ab85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ab88:{NFSU2_TR(0x71ab88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab89:{NFSU2_TR(0x71ab89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab8a:{NFSU2_TR(0x71ab8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ab8d:{NFSU2_TR(0x71ab8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ab90:{NFSU2_TR(0x71ab90);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab91:{NFSU2_TR(0x71ab91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab92:{NFSU2_TR(0x71ab92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71ab95:{NFSU2_TR(0x71ab95);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B71ab97:{NFSU2_TR(0x71ab97);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab98:{NFSU2_TR(0x71ab98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ab99:{NFSU2_TR(0x71ab99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ab9c:{NFSU2_TR(0x71ab9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71ab9f:{NFSU2_TR(0x71ab9f);
w8(R+4352,u64(r4(G+0)));
}
B71aba2:{NFSU2_TR(0x71aba2);
w8(R+4384,u64(r4(R+12)));
}
B71aba5:{NFSU2_TR(0x71aba5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71aba6:{NFSU2_TR(0x71aba6);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71aba9:{NFSU2_TR(0x71aba9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
}
B71abab:{NFSU2_TR(0x71abab);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71abae:{NFSU2_TR(0x71abae);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B71abb1:{NFSU2_TR(0x71abb1);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71abb4:{NFSU2_TR(0x71abb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71abb7:{NFSU2_TR(0x71abb7);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71abba:{NFSU2_TR(0x71abba);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71abbd:{NFSU2_TR(0x71abbd);
__builtin_memmove((R+4359),(R+4355),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4354),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4353),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4352),1);
}
B71abc0:{NFSU2_TR(0x71abc0);
__builtin_memmove((R+4368),(R+4352),8);
}
B71abc3:{NFSU2_TR(0x71abc3);
__builtin_memmove((R+4391),(R+4387),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4386),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4385),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4384),1);
}
B71abc6:{NFSU2_TR(0x71abc6);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B71abc9:{NFSU2_TR(0x71abc9);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4352))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4353))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4354))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4355))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4356))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4357))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4358))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4359))));
}
B71abcc:{NFSU2_TR(0x71abcc);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>(gp(0x8177a0))));}
}
B71abd3:{NFSU2_TR(0x71abd3);
u8 U[8];
__builtin_memmove((U+0),gp(0x817760),8);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(U+0))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(U+1))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(U+2))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(U+3))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(U+4))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(U+5))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(U+6))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(U+7))));
}
B71abda:{NFSU2_TR(0x71abda);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>(gp(0x8177a0))));}
}
B71abe1:{NFSU2_TR(0x71abe1);
__builtin_memmove((R+4400),gp(0x817770),8);
}
B71abe8:{NFSU2_TR(0x71abe8);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4368))));
w8(R+4368,u64(u64(r8(U+0))&u64(r8(R+4400))));
{[[clang::musttail]] return blk_71abeb(ARGS);}
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
PN u32 blk_71abeb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71abeb:L71abeb:{bud-=77;NFSU2_TR(0x71abeb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71abee:{NFSU2_TR(0x71abee);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71abf2:{NFSU2_TR(0x71abf2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71abf6:{NFSU2_TR(0x71abf6);
__builtin_memmove((R+4432),(R+4400),8);
}
B71abf9:{NFSU2_TR(0x71abf9);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71abfc:{NFSU2_TR(0x71abfc);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71abff:{NFSU2_TR(0x71abff);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71ac02:{NFSU2_TR(0x71ac02);
__builtin_memmove((R+4448),(R+4352),8);
}
B71ac05:{NFSU2_TR(0x71ac05);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ac08:{NFSU2_TR(0x71ac08);
__builtin_memmove((R+4416),(R+4352),8);
}
B71ac0b:{NFSU2_TR(0x71ac0b);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ac0e:{NFSU2_TR(0x71ac0e);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71ac15:{NFSU2_TR(0x71ac15);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71ac1c:{NFSU2_TR(0x71ac1c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71ac1f:{NFSU2_TR(0x71ac1f);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71ac22:{NFSU2_TR(0x71ac22);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71ac25:{NFSU2_TR(0x71ac25);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71ac28:{NFSU2_TR(0x71ac28);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ac2b:{NFSU2_TR(0x71ac2b);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ac2e:{NFSU2_TR(0x71ac2e);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71ac31:{NFSU2_TR(0x71ac31);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71ac34:{NFSU2_TR(0x71ac34);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71ac38:{NFSU2_TR(0x71ac38);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71ac3c:{NFSU2_TR(0x71ac3c);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71ac40:{NFSU2_TR(0x71ac40);
__builtin_memmove((R+4432),(R+4400),8);
}
B71ac43:{NFSU2_TR(0x71ac43);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71ac48:{NFSU2_TR(0x71ac48);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ac4b:{NFSU2_TR(0x71ac4b);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71ac4f:{NFSU2_TR(0x71ac4f);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71ac52:{NFSU2_TR(0x71ac52);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71ac55:{NFSU2_TR(0x71ac55);
__builtin_memmove((R+4448),(R+4352),8);
}
B71ac58:{NFSU2_TR(0x71ac58);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ac5b:{NFSU2_TR(0x71ac5b);
__builtin_memmove((R+4416),(R+4352),8);
}
B71ac5e:{NFSU2_TR(0x71ac5e);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ac61:{NFSU2_TR(0x71ac61);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71ac68:{NFSU2_TR(0x71ac68);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71ac6f:{NFSU2_TR(0x71ac6f);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71ac72:{NFSU2_TR(0x71ac72);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71ac75:{NFSU2_TR(0x71ac75);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71ac78:{NFSU2_TR(0x71ac78);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71ac7b:{NFSU2_TR(0x71ac7b);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ac7e:{NFSU2_TR(0x71ac7e);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ac81:{NFSU2_TR(0x71ac81);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71ac84:{NFSU2_TR(0x71ac84);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71ac87:{NFSU2_TR(0x71ac87);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71ac8b:{NFSU2_TR(0x71ac8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71ac8f:{NFSU2_TR(0x71ac8f);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71ac93:{NFSU2_TR(0x71ac93);
__builtin_memmove((R+4432),(R+4400),8);
}
B71ac96:{NFSU2_TR(0x71ac96);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71ac9a:{NFSU2_TR(0x71ac9a);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ac9d:{NFSU2_TR(0x71ac9d);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71aca2:{NFSU2_TR(0x71aca2);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71aca5:{NFSU2_TR(0x71aca5);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(G+0))),(U+0),16);
}
B71aca9:{NFSU2_TR(0x71aca9);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71acac:{NFSU2_TR(0x71acac);
__builtin_memmove((R+4448),(R+4352),8);
}
B71acaf:{NFSU2_TR(0x71acaf);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71acb2:{NFSU2_TR(0x71acb2);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71acb6:{NFSU2_TR(0x71acb6);
__builtin_memmove((R+4416),(R+4352),8);
}
B71acb9:{NFSU2_TR(0x71acb9);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71acbc:{NFSU2_TR(0x71acbc);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71acc3:{NFSU2_TR(0x71acc3);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71acca:{NFSU2_TR(0x71acca);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71accd:{NFSU2_TR(0x71accd);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71acd0:{NFSU2_TR(0x71acd0);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71acd3:{NFSU2_TR(0x71acd3);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71acd6:{NFSU2_TR(0x71acd6);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71acd9:{NFSU2_TR(0x71acd9);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71acdc:{NFSU2_TR(0x71acdc);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71acdf:{NFSU2_TR(0x71acdf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+4))));
}
B71ace1:{NFSU2_TR(0x71ace1);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71ace5:{NFSU2_TR(0x71ace5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B71ace8:{NFSU2_TR(0x71ace8);
__builtin_memmove((R+5071),(R+4615),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4614),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4613),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4612),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4611),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4610),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4609),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4608),1);
}
B71acec:{NFSU2_TR(0x71acec);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B71acef:{NFSU2_TR(0x71acef);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71acf4:{NFSU2_TR(0x71acf4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B71acf6:{NFSU2_TR(0x71acf6);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71acfb:{NFSU2_TR(0x71acfb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71abebu);}goto L71abeb;}}
}
B71ad01:L71ad01:{bud-=29;NFSU2_TR(0x71ad01);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B71ad04:{NFSU2_TR(0x71ad04);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71ad08:{NFSU2_TR(0x71ad08);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B71ad0c:{NFSU2_TR(0x71ad0c);
__builtin_memmove((R+4432),(R+4400),8);
}
B71ad0f:{NFSU2_TR(0x71ad0f);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B71ad12:{NFSU2_TR(0x71ad12);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71ad15:{NFSU2_TR(0x71ad15);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4416))));
}
B71ad18:{NFSU2_TR(0x71ad18);
__builtin_memmove((R+4448),(R+4352),8);
}
B71ad1b:{NFSU2_TR(0x71ad1b);
{wv<8>((R+4400),uo::paddusb<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B71ad1e:{NFSU2_TR(0x71ad1e);
__builtin_memmove((R+4416),(R+4352),8);
}
B71ad21:{NFSU2_TR(0x71ad21);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71ad24:{NFSU2_TR(0x71ad24);
__builtin_memmove((R+4432),gp(0x817780),8);
}
B71ad2b:{NFSU2_TR(0x71ad2b);
u8 U[8];
__builtin_memmove((U+0),gp(0x817750),8);
w1(R+4416,u8(u32(r1(R+4416))+u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))+u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))+u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))+u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))+u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))+u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))+u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))+u32(r1(U+7))));
}
B71ad32:{NFSU2_TR(0x71ad32);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B71ad35:{NFSU2_TR(0x71ad35);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4432))));
}
B71ad38:{NFSU2_TR(0x71ad38);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B71ad3b:{NFSU2_TR(0x71ad3b);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4384))));
}
B71ad3e:{NFSU2_TR(0x71ad3e);
{wv<8>((R+4448),uo::paddsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ad41:{NFSU2_TR(0x71ad41);
{wv<8>((R+4448),uo::psubsb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71ad44:{NFSU2_TR(0x71ad44);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4400))));
}
B71ad47:{NFSU2_TR(0x71ad47);
wv<16>((R+4992),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71ad4b:{NFSU2_TR(0x71ad4b);
__builtin_memmove((R+5071),(R+4999),1);
__builtin_memmove((R+5070),(R+5063),1);
__builtin_memmove((R+5069),(R+4998),1);
__builtin_memmove((R+5068),(R+5062),1);
__builtin_memmove((R+5067),(R+4997),1);
__builtin_memmove((R+5066),(R+5061),1);
__builtin_memmove((R+5065),(R+4996),1);
__builtin_memmove((R+5064),(R+5060),1);
__builtin_memmove((R+5063),(R+4995),1);
__builtin_memmove((R+5062),(R+5059),1);
__builtin_memmove((R+5061),(R+4994),1);
__builtin_memmove((R+5060),(R+5058),1);
__builtin_memmove((R+5059),(R+4993),1);
__builtin_memmove((R+5058),(R+5057),1);
__builtin_memmove((R+5057),(R+4992),1);
}
B71ad4f:{NFSU2_TR(0x71ad4f);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71ad54:{NFSU2_TR(0x71ad54);
u8 U[16];
__builtin_memmove((U+0),(R+5056),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B71ad58:{NFSU2_TR(0x71ad58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71ad5b:{NFSU2_TR(0x71ad5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B71ad5e:{NFSU2_TR(0x71ad5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ad61:{NFSU2_TR(0x71ad61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71ad64:{NFSU2_TR(0x71ad64);
w4(R+20,u32(0x8ull));
{[[clang::musttail]] return blk_71ad69(ARGS);}
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
PN u32 blk_71ad69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ad69:L71ad69:{bud-=44;NFSU2_TR(0x71ad69);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71ad6e:{NFSU2_TR(0x71ad6e);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B71ad72:{NFSU2_TR(0x71ad72);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(G+0))),16);
__builtin_memmove((R+4864),(U+0),16);
}
B71ad76:{NFSU2_TR(0x71ad76);
__builtin_memmove((R+4623),(R+5063),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+5062),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+5061),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+5060),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+5059),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+5058),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+5057),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+5056),1);
}
B71ad7a:{NFSU2_TR(0x71ad7a);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71ad7f:{NFSU2_TR(0x71ad7f);
w2(R+4608,u16(u32(r2(R+4608))*u32(r2(R+4864))));
w2(R+4610,u16(u32(r2(R+4610))*u32(r2(R+4866))));
w2(R+4612,u16(u32(r2(R+4612))*u32(r2(R+4868))));
w2(R+4614,u16(u32(r2(R+4614))*u32(r2(R+4870))));
w2(R+4616,u16(u32(r2(R+4616))*u32(r2(R+4872))));
w2(R+4618,u16(u32(r2(R+4618))*u32(r2(R+4874))));
w2(R+4620,u16(u32(r2(R+4620))*u32(r2(R+4876))));
w2(R+4622,u16(u32(r2(R+4622))*u32(r2(R+4878))));
}
B71ad83:{NFSU2_TR(0x71ad83);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71ad88:{NFSU2_TR(0x71ad88);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71ad8c:{NFSU2_TR(0x71ad8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B71ad91:{NFSU2_TR(0x71ad91);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4992))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4994))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4996))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4998))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+5000))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+5002))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+5004))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+5006))));
}
B71ad95:{NFSU2_TR(0x71ad95);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+12))),16);
__builtin_memmove((R+4800),(U+0),16);
}
B71ad99:{NFSU2_TR(0x71ad99);
__builtin_memmove((R+4687),(R+5063),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+5062),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+5061),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+5060),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+5059),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+5058),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+5057),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+5056),1);
}
B71ad9d:{NFSU2_TR(0x71ad9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
wv<16>((R+4928),eval<Op::INT_ZEXT,16,8>(rv<8>((U+4))));
}
B71ada2:{NFSU2_TR(0x71ada2);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4800))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4802))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4804))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4806))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4808))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4810))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4812))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4814))));
}
B71ada6:{NFSU2_TR(0x71ada6);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B71adaa:{NFSU2_TR(0x71adaa);
__builtin_memmove((R+4943),(R+5063),1);
__builtin_memmove((R+4942),(R+4935),1);
__builtin_memmove((R+4941),(R+5062),1);
__builtin_memmove((R+4940),(R+4934),1);
__builtin_memmove((R+4939),(R+5061),1);
__builtin_memmove((R+4938),(R+4933),1);
__builtin_memmove((R+4937),(R+5060),1);
__builtin_memmove((R+4936),(R+4932),1);
__builtin_memmove((R+4935),(R+5059),1);
__builtin_memmove((R+4934),(R+4931),1);
__builtin_memmove((R+4933),(R+5058),1);
__builtin_memmove((R+4932),(R+4930),1);
__builtin_memmove((R+4931),(R+5057),1);
__builtin_memmove((R+4930),(R+4929),1);
__builtin_memmove((R+4929),(R+5056),1);
}
B71adae:{NFSU2_TR(0x71adae);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71adb6:{NFSU2_TR(0x71adb6);
w2(R+4928,u16(u32(r2(R+4928))*u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))*u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))*u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))*u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))*u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))*u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))*u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))*u32(r2(R+5006))));
}
B71adba:{NFSU2_TR(0x71adba);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71adbe:{NFSU2_TR(0x71adbe);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71adc2:{NFSU2_TR(0x71adc2);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4672))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4674))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4676))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4678))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4680))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4682))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4684))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4686))));
}
B71adc6:{NFSU2_TR(0x71adc6);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B71adca:{NFSU2_TR(0x71adca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71adce:{NFSU2_TR(0x71adce);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4928))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4930))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4932))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4934))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4936))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4938))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4940))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4942))));
}
B71add2:{NFSU2_TR(0x71add2);
__builtin_memmove((R+4672),gp(0x817730),16);
}
B71adda:{NFSU2_TR(0x71adda);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B71adde:{NFSU2_TR(0x71adde);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4864))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4866))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4868))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4870))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4872))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4874))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4876))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4878))));
}
B71ade2:{NFSU2_TR(0x71ade2);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4672))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4674))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4676))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4678))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4680))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4682))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4684))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4686))));
}
B71ade6:{NFSU2_TR(0x71ade6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+4))));
}
B71ade8:{NFSU2_TR(0x71ade8);
__builtin_memmove((R+4992),gp(0x817740),16);
}
B71adf0:{NFSU2_TR(0x71adf0);
__builtin_memmove((R+5056),(R+4992),16);
}
B71adf4:{NFSU2_TR(0x71adf4);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B71adf7:{NFSU2_TR(0x71adf7);
{wv<16>((R+5056),uo::psllw<16>(rv<16>((R+5056)),V(0x8ull)));}
}
B71adfc:{NFSU2_TR(0x71adfc);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71ae00:{NFSU2_TR(0x71ae00);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+4))));
}
B71ae02:{NFSU2_TR(0x71ae02);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4992))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4994))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4996))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4998))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5000))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5002))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5004))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5006))));
}
B71ae06:{NFSU2_TR(0x71ae06);
w1(F+0,carry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B71ae09:{NFSU2_TR(0x71ae09);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+5056))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+5058))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+5060))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+5062))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5064))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5066))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5068))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5070))));
}
B71ae0d:{NFSU2_TR(0x71ae0d);
{wv<16>((R+4608),uo::psubusw<16>(rv<16>((R+4608)),rv<16>((R+5056))));}
}
B71ae11:{NFSU2_TR(0x71ae11);
u8 U[6];
w1(F+11,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71ae12:{NFSU2_TR(0x71ae12);
w2(R+4608,shr<u16>(r2(R+4608),u64(u32(0x7ull))));
w2(R+4610,shr<u16>(r2(R+4610),u64(u32(0x7ull))));
w2(R+4612,shr<u16>(r2(R+4612),u64(u32(0x7ull))));
w2(R+4614,shr<u16>(r2(R+4614),u64(u32(0x7ull))));
w2(R+4616,shr<u16>(r2(R+4616),u64(u32(0x7ull))));
w2(R+4618,shr<u16>(r2(R+4618),u64(u32(0x7ull))));
w2(R+4620,shr<u16>(r2(R+4620),u64(u32(0x7ull))));
w2(R+4622,shr<u16>(r2(R+4622),u64(u32(0x7ull))));
}
B71ae17:{NFSU2_TR(0x71ae17);
u8 U[54];
__builtin_memmove((U+5),(R+4608),16);
__builtin_memmove((U+21),(R+5056),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4608),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4609),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4610),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4611),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4612),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4613),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4614),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4615),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4616),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4617),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4618),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4619),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4620),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4621),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4622),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4623),(U+37),1);
}
B71ae1b:{NFSU2_TR(0x71ae1b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71ae20:{NFSU2_TR(0x71ae20);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71ad69u);}goto L71ad69;}}
}
B71ae26:L71ae26:{bud-=15;NFSU2_TR(0x71ae26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ae27:{NFSU2_TR(0x71ae27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ae28:{NFSU2_TR(0x71ae28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B71ae29:{NFSU2_TR(0x71ae29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71ae2a:{NFSU2_TR(0x71ae2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+4),(U+0),4);
}
B71ae2b:{NFSU2_TR(0x71ae2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ae2c:{NFSU2_TR(0x71ae2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ae2d:{NFSU2_TR(0x71ae2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71ae2e:{NFSU2_TR(0x71ae2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71ae2f:{NFSU2_TR(0x71ae2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ae30:{NFSU2_TR(0x71ae30);
__builtin_memmove((G+16),(R+20),4);
}
B71ae32:{NFSU2_TR(0x71ae32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ae33:{NFSU2_TR(0x71ae33);
__builtin_memmove((G+16),(R+12),4);
}
B71ae35:{NFSU2_TR(0x71ae35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B71ae36:{NFSU2_TR(0x71ae36);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71ae37(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ae37:L71ae37:{bud-=18;NFSU2_TR(0x71ae37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ae38:{NFSU2_TR(0x71ae38);
__builtin_memmove((R+20),(G+16),4);
}
B71ae3a:{NFSU2_TR(0x71ae3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ae3d:{NFSU2_TR(0x71ae3d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ae40:{NFSU2_TR(0x71ae40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71ae43:{NFSU2_TR(0x71ae43);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x400ull))));
}
B71ae48:{NFSU2_TR(0x71ae48);
u8 U[6];
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffffffe0ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B71ae4b:{NFSU2_TR(0x71ae4b);
u8 U[32];
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(s64(s32(u32(0x10001ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(G+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(G+4)))));
w1(F+0,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((F+11),(F+0),1);
}
B71ae51:{NFSU2_TR(0x71ae51);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae54:{NFSU2_TR(0x71ae54);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
}
B71ae56:{NFSU2_TR(0x71ae56);
w4(G+4,u32(0x10001ull));
}
B71ae5b:{NFSU2_TR(0x71ae5b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae5e:{NFSU2_TR(0x71ae5e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae61:{NFSU2_TR(0x71ae61);
w4(G+4,u32(0x40004ull));
}
B71ae66:{NFSU2_TR(0x71ae66);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae69:{NFSU2_TR(0x71ae69);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71ae6c:{NFSU2_TR(0x71ae6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71ae6d:{NFSU2_TR(0x71ae6d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
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
PN u32 blk_71ae6e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71ae6e:L71ae6e:{bud-=119;NFSU2_TR(0x71ae6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ae6f:{NFSU2_TR(0x71ae6f);
__builtin_memmove((R+20),(G+16),4);
}
B71ae71:{NFSU2_TR(0x71ae71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71ae72:{NFSU2_TR(0x71ae72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71ae75:{NFSU2_TR(0x71ae75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71ae78:{NFSU2_TR(0x71ae78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71ae7b:{NFSU2_TR(0x71ae7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71ae7e:{NFSU2_TR(0x71ae7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B71ae82:{NFSU2_TR(0x71ae82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B71ae86:{NFSU2_TR(0x71ae86);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B71ae8a:{NFSU2_TR(0x71ae8a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71ae8f:{NFSU2_TR(0x71ae8f);
__builtin_memmove((R+4358),(R+4418),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4416),2);
}
B71ae92:{NFSU2_TR(0x71ae92);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71ae97:{NFSU2_TR(0x71ae97);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71ae9b:{NFSU2_TR(0x71ae9b);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B71ae9e:{NFSU2_TR(0x71ae9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71aea1:{NFSU2_TR(0x71aea1);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71aea6:{NFSU2_TR(0x71aea6);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B71aea9:{NFSU2_TR(0x71aea9);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71aeae:{NFSU2_TR(0x71aeae);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B71aeb2:{NFSU2_TR(0x71aeb2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71aeb7:{NFSU2_TR(0x71aeb7);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B71aeba:{NFSU2_TR(0x71aeba);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71aebf:{NFSU2_TR(0x71aebf);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71aec3:{NFSU2_TR(0x71aec3);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B71aec6:{NFSU2_TR(0x71aec6);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71aec9:{NFSU2_TR(0x71aec9);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71aecc:{NFSU2_TR(0x71aecc);
__builtin_memmove((R+4368),(R+4352),8);
}
B71aecf:{NFSU2_TR(0x71aecf);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B71aed2:{NFSU2_TR(0x71aed2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B71aed5:{NFSU2_TR(0x71aed5);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B71aed8:{NFSU2_TR(0x71aed8);
__builtin_memmove((R+4448),(R+4352),8);
}
B71aedb:{NFSU2_TR(0x71aedb);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71aedf:{NFSU2_TR(0x71aedf);
__builtin_memmove((R+4384),(R+4368),8);
}
B71aee2:{NFSU2_TR(0x71aee2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71aee6:{NFSU2_TR(0x71aee6);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B71aeea:{NFSU2_TR(0x71aeea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B71aeee:{NFSU2_TR(0x71aeee);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B71aef1:{NFSU2_TR(0x71aef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B71aef5:{NFSU2_TR(0x71aef5);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x10ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x10ull))));
}
B71aef9:{NFSU2_TR(0x71aef9);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71aefe:{NFSU2_TR(0x71aefe);
__builtin_memmove((R+4470),(R+4418),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4416),2);
}
B71af01:{NFSU2_TR(0x71af01);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71af06:{NFSU2_TR(0x71af06);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B71af0a:{NFSU2_TR(0x71af0a);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B71af0d:{NFSU2_TR(0x71af0d);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71af10:{NFSU2_TR(0x71af10);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B71af13:{NFSU2_TR(0x71af13);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B71af17:{NFSU2_TR(0x71af17);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B71af1a:{NFSU2_TR(0x71af1a);
__builtin_memmove((R+4471),(R+4435),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4434),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4433),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4432),1);
}
B71af1d:{NFSU2_TR(0x71af1d);
__builtin_memmove((R+4400),(R+4368),8);
}
B71af20:{NFSU2_TR(0x71af20);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B71af23:{NFSU2_TR(0x71af23);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B71af26:{NFSU2_TR(0x71af26);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B71af29:{NFSU2_TR(0x71af29);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71af2c:{NFSU2_TR(0x71af2c);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B71af30:{NFSU2_TR(0x71af30);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B71af33:{NFSU2_TR(0x71af33);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71af38:{NFSU2_TR(0x71af38);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B71af3b:{NFSU2_TR(0x71af3b);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71af40:{NFSU2_TR(0x71af40);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B71af44:{NFSU2_TR(0x71af44);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71af49:{NFSU2_TR(0x71af49);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B71af4c:{NFSU2_TR(0x71af4c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4416,u64(r4(U+12)));
}
B71af51:{NFSU2_TR(0x71af51);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B71af55:{NFSU2_TR(0x71af55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B71af58:{NFSU2_TR(0x71af58);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B71af5b:{NFSU2_TR(0x71af5b);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B71af5f:{NFSU2_TR(0x71af5f);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71af62:{NFSU2_TR(0x71af62);
__builtin_memmove((R+4391),(R+4435),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4434),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4433),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4432),1);
}
B71af65:{NFSU2_TR(0x71af65);
__builtin_memmove((R+4432),(R+4464),8);
}
B71af68:{NFSU2_TR(0x71af68);
__builtin_memmove((R+4368),(R+4448),8);
}
B71af6b:{NFSU2_TR(0x71af6b);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4388),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4390),2);
}
B71af6e:{NFSU2_TR(0x71af6e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71af72:{NFSU2_TR(0x71af72);
__builtin_memmove((R+4470),(R+4386),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4384),2);
}
B71af75:{NFSU2_TR(0x71af75);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71af79:{NFSU2_TR(0x71af79);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B71af7d:{NFSU2_TR(0x71af7d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71af80:{NFSU2_TR(0x71af80);
__builtin_memmove((R+4352),(R+4464),8);
}
B71af83:{NFSU2_TR(0x71af83);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B71af87:{NFSU2_TR(0x71af87);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B71af8a:{NFSU2_TR(0x71af8a);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B71af8d:{NFSU2_TR(0x71af8d);
__builtin_memmove((R+4439),(R+4419),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4418),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4417),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4416),1);
}
B71af90:{NFSU2_TR(0x71af90);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B71af94:{NFSU2_TR(0x71af94);
__builtin_memmove((R+4400),(R+4384),8);
}
B71af97:{NFSU2_TR(0x71af97);
__builtin_memmove((R+4471),(R+4419),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4418),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4417),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4416),1);
}
B71af9a:{NFSU2_TR(0x71af9a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71af9d:{NFSU2_TR(0x71af9d);
__builtin_memmove((R+4416),(R+4400),8);
}
B71afa0:{NFSU2_TR(0x71afa0);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B71afa4:{NFSU2_TR(0x71afa4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71afa5:{NFSU2_TR(0x71afa5);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B71afa8:{NFSU2_TR(0x71afa8);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B71afab:{NFSU2_TR(0x71afab);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71afae:{NFSU2_TR(0x71afae);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B71afb1:{NFSU2_TR(0x71afb1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71afb5:{NFSU2_TR(0x71afb5);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B71afb8:{NFSU2_TR(0x71afb8);
__builtin_memmove((R+4359),(R+4403),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4402),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4401),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4400),1);
}
B71afbb:{NFSU2_TR(0x71afbb);
__builtin_memmove((R+4464),(R+4432),8);
}
B71afbe:{NFSU2_TR(0x71afbe);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71afc1:{NFSU2_TR(0x71afc1);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71afc4:{NFSU2_TR(0x71afc4);
__builtin_memmove((R+4375),(R+4403),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4402),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4401),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4400),1);
}
B71afc7:{NFSU2_TR(0x71afc7);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B71afca:{NFSU2_TR(0x71afca);
u8 U[20];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+18))));
}
B71afce:{NFSU2_TR(0x71afce);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B71afd1:{NFSU2_TR(0x71afd1);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4438))));
}
B71afd4:{NFSU2_TR(0x71afd4);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71afd7:{NFSU2_TR(0x71afd7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B71afdb:{NFSU2_TR(0x71afdb);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x3ull)));}
}
B71afdf:{NFSU2_TR(0x71afdf);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B71afe3:{NFSU2_TR(0x71afe3);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B71afe6:{NFSU2_TR(0x71afe6);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B71afe9:{NFSU2_TR(0x71afe9);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B71afec:{NFSU2_TR(0x71afec);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71afef:{NFSU2_TR(0x71afef);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4464),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4465),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4466),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4467),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4468),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4469),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4470),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4471),(U+21),1);
}
B71aff2:{NFSU2_TR(0x71aff2);
u8 U[30];
__builtin_memmove((U+5),(R+4400),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4400),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4401),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4402),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4403),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4404),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4405),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4406),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4407),(U+21),1);
}
B71aff5:{NFSU2_TR(0x71aff5);
__builtin_memmove((R+4368),(R+4352),8);
}
B71aff8:{NFSU2_TR(0x71aff8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71affb:{NFSU2_TR(0x71affb);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B71afff:{NFSU2_TR(0x71afff);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
{[[clang::musttail]] return blk_71b002(ARGS);}
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
PN u32 ent_71a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x71a001:[[clang::musttail]] return blk_71a001(c,a4,a0,a1,bud);
case 0x71a01e:[[clang::musttail]] return blk_71a01e(c,a4,a0,a1,bud);
case 0x71a034:[[clang::musttail]] return blk_71a034(c,a4,a0,a1,bud);
case 0x71a18c:[[clang::musttail]] return blk_71a18c(c,a4,a0,a1,bud);
case 0x71a1a2:[[clang::musttail]] return blk_71a1a2(c,a4,a0,a1,bud);
case 0x71a2b1:[[clang::musttail]] return blk_71a2b1(c,a4,a0,a1,bud);
case 0x71a2c1:[[clang::musttail]] return blk_71a2c1(c,a4,a0,a1,bud);
case 0x71a307:[[clang::musttail]] return blk_71a307(c,a4,a0,a1,bud);
case 0x71a314:[[clang::musttail]] return blk_71a314(c,a4,a0,a1,bud);
case 0x71a326:[[clang::musttail]] return blk_71a326(c,a4,a0,a1,bud);
case 0x71a33e:[[clang::musttail]] return blk_71a33e(c,a4,a0,a1,bud);
case 0x71a3e7:[[clang::musttail]] return blk_71a3e7(c,a4,a0,a1,bud);
case 0x71a689:[[clang::musttail]] return blk_71a689(c,a4,a0,a1,bud);
case 0x71a831:[[clang::musttail]] return blk_71a831(c,a4,a0,a1,bud);
case 0x71a8ee:[[clang::musttail]] return blk_71a8ee(c,a4,a0,a1,bud);
case 0x71aa60:[[clang::musttail]] return blk_71aa60(c,a4,a0,a1,bud);
case 0x71ab2e:[[clang::musttail]] return blk_71ab2e(c,a4,a0,a1,bud);
case 0x71abeb:[[clang::musttail]] return blk_71abeb(c,a4,a0,a1,bud);
case 0x71ad69:[[clang::musttail]] return blk_71ad69(c,a4,a0,a1,bud);
case 0x71ae37:[[clang::musttail]] return blk_71ae37(c,a4,a0,a1,bud);
case 0x71ae6e:[[clang::musttail]] return blk_71ae6e(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_71a(Cpu& c){u8* R=c.regs.data();return ent_71a(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
