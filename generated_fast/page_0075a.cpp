#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 ent_native(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_74a5c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_74a6d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_74a760(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75447e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_754664(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75468a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7546b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7546c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75477d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7547d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75482a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7548f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_754964(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_754972(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7549a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_754a2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_754ae1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_754ae9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_754d0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_754d39(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_755609(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_755653(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_755673(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7556d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_758290(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75829c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7583e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7584e1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7584f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_758514(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_758525(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_758561(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7585e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75863e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75867f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_758697(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_758735(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_759cf5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_759d7e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_759f40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a00d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a01a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a03d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a059(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a0b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a0c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a0e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a0f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a0fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a0ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a101(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a134(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a15a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a172(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a174(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a1c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a1cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a1e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a1e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a1f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a1f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a242(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a256(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a27d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a287(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a2cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a310(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a312(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a32b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a35d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a361(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a380(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a3c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a3f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a427(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a430(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a441(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a451(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a4a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a4b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a584(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a590(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a5b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a5f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a600(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a613(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75aeb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75aee0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75aef8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af01(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af11(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af32(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75af79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75afb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75afc7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75afd7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75afdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75affa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75b000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75b001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_76115e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a034(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a056(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a0aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a155(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a180(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a1a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a1d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a210(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a253(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a260(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a290(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a2c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a2d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a2ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a2fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a327(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a336(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a340(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a370(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a390(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a3bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a3ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a3de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a3ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a3fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a410(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75a002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a002:L75a002:{bud-=4;NFSU2_TR(0x75a002);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a004:{NFSU2_TR(0x75a004);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B75a005:{NFSU2_TR(0x75a005);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B75a007:{NFSU2_TR(0x75a007);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75a002u);}goto L75a002;}}
}
B75a009:L75a009:{bud-=2;NFSU2_TR(0x75a009);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+24))));
}
B75a00b:{NFSU2_TR(0x75a00b);
__builtin_memmove((R+24),(G+4),4);
{[[clang::musttail]] return blk_75a00d(ARGS);}
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
PN u32 blk_75a00d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a00d:L75a00d:{bud-=2;NFSU2_TR(0x75a00d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3e80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e80ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75a013:{NFSU2_TR(0x75a013);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_75a01a(ARGS);}}
}
B75a015:L75a015:{bud-=1;NFSU2_TR(0x75a015);
w4(R+24,u32(0x3e80ull));
{[[clang::musttail]] return blk_75a01a(ARGS);}
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
PN u32 blk_75a01a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a01a:L75a01a:{bud-=2;NFSU2_TR(0x75a01a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B75a021:{NFSU2_TR(0x75a021);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a03d(ARGS);}}
}
B75a023:L75a023:{bud-=4;NFSU2_TR(0x75a023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a026:{NFSU2_TR(0x75a026);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B75a028:{NFSU2_TR(0x75a028);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B75a02a:{NFSU2_TR(0x75a02a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a03d(ARGS);}}
}
B75a02c:L75a02c:{bud-=4;NFSU2_TR(0x75a02c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a02d:{NFSU2_TR(0x75a02d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a02e:{NFSU2_TR(0x75a02e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a02f:{NFSU2_TR(0x75a02f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a034ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7583e0u);}[[clang::musttail]] return blk_7583e0(ARGS);}
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
PN u32 blk_75a034(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a034:L75a034:{bud-=3;NFSU2_TR(0x75a034);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B75a037:{NFSU2_TR(0x75a037);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75a039:{NFSU2_TR(0x75a039);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a03d(ARGS);}}
}
B75a03b:L75a03b:{bud-=1;NFSU2_TR(0x75a03b);
__builtin_memmove((G+0),(R+24),4);
{[[clang::musttail]] return blk_75a03d(ARGS);}
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
PN u32 blk_75a03d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a03d:L75a03d:{bud-=2;NFSU2_TR(0x75a03d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0x14ull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0x14ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x14ull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B75a044:{NFSU2_TR(0x75a044);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a059(ARGS);}}
}
B75a046:L75a046:{bud-=8;NFSU2_TR(0x75a046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+0),(U+0),4);
}
B75a048:{NFSU2_TR(0x75a048);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a04a:{NFSU2_TR(0x75a04a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a04c:{NFSU2_TR(0x75a04c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a04e:{NFSU2_TR(0x75a04e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a04f:{NFSU2_TR(0x75a04f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a050:{NFSU2_TR(0x75a050);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a051:{NFSU2_TR(0x75a051);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a056ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x74a5c0u);}[[clang::musttail]] return blk_74a5c0(ARGS);}
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
PN u32 blk_75a056(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a056:L75a056:{bud-=1;NFSU2_TR(0x75a056);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x18ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x18ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a059(ARGS);}
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
PN u32 blk_75a059(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a059:L75a059:{bud-=5;NFSU2_TR(0x75a059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a05a:{NFSU2_TR(0x75a05a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a05b:{NFSU2_TR(0x75a05b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a05c:{NFSU2_TR(0x75a05c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a05d:{NFSU2_TR(0x75a05d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x75477du)[[clang::musttail]] return blk_75477d(ARGS);if(t__==0x755653u)[[clang::musttail]] return blk_755653(ARGS););}
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
PN u32 blk_75a060(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a060:L75a060:{bud-=9;NFSU2_TR(0x75a060);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a061:{NFSU2_TR(0x75a061);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a062:{NFSU2_TR(0x75a062);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a063:{NFSU2_TR(0x75a063);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a067:{NFSU2_TR(0x75a067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a06d:{NFSU2_TR(0x75a06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a073:{NFSU2_TR(0x75a073);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B75a076:{NFSU2_TR(0x75a076);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75a079:{NFSU2_TR(0x75a079);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a134(ARGS);}}
}
B75a07f:L75a07f:{bud-=4;NFSU2_TR(0x75a07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x801cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a085:{NFSU2_TR(0x75a085);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75a087:{NFSU2_TR(0x75a087);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B75a089:{NFSU2_TR(0x75a089);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a0c2(ARGS);}}
}
B75a08b:L75a08b:{bud-=3;NFSU2_TR(0x75a08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a091:{NFSU2_TR(0x75a091);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+0))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B75a097:{NFSU2_TR(0x75a097);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a0c2(ARGS);}}
}
B75a099:L75a099:{bud-=2;NFSU2_TR(0x75a099);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75a09c:{NFSU2_TR(0x75a09c);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_75a0b5(ARGS);}}
}
B75a09e:L75a09e:{bud-=3;NFSU2_TR(0x75a09e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a09f:{NFSU2_TR(0x75a09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a0a5:{NFSU2_TR(0x75a0a5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a0aaull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7585e0u);}[[clang::musttail]] return blk_7585e0(ARGS);}
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
PN u32 blk_75a0aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a0aa:L75a0aa:{bud-=3;NFSU2_TR(0x75a0aa);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B75a0ad:{NFSU2_TR(0x75a0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x801cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a0b3:{NFSU2_TR(0x75a0b3);
{[[clang::musttail]] return blk_75a0c2(ARGS);}
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
PN u32 blk_75a0b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a0b5:L75a0b5:{bud-=3;NFSU2_TR(0x75a0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a0bb:{NFSU2_TR(0x75a0bb);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B75a0bd:{NFSU2_TR(0x75a0bd);
if(r1(F+6)){{[[clang::musttail]] return blk_75a0c2(ARGS);}}
}
B75a0bf:L75a0bf:{bud-=1;NFSU2_TR(0x75a0bf);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
{[[clang::musttail]] return blk_75a0c2(ARGS);}
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
PN u32 blk_75a0c2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a0c2:L75a0c2:{bud-=3;NFSU2_TR(0x75a0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x801cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a0c8:{NFSU2_TR(0x75a0c8);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B75a0ca:{NFSU2_TR(0x75a0ca);
if(r1(F+6)){{[[clang::musttail]] return blk_75a134(ARGS);}}
}
B75a0cc:L75a0cc:{bud-=6;NFSU2_TR(0x75a0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75a0d2:{NFSU2_TR(0x75a0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a0d8:{NFSU2_TR(0x75a0d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a0dc:{NFSU2_TR(0x75a0dc);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B75a0de:{NFSU2_TR(0x75a0de);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75a0e0:{NFSU2_TR(0x75a0e0);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a0e4(ARGS);}}
}
B75a0e2:L75a0e2:{bud-=1;NFSU2_TR(0x75a0e2);
__builtin_memmove((R+12),(G+4),4);
{[[clang::musttail]] return blk_75a0e4(ARGS);}
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
PN u32 blk_75a0e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a0e4:L75a0e4:{bud-=7;NFSU2_TR(0x75a0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a0ea:{NFSU2_TR(0x75a0ea);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B75a0ec:{NFSU2_TR(0x75a0ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a0ed:{NFSU2_TR(0x75a0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a0f1:{NFSU2_TR(0x75a0f1);
__builtin_memmove((G+4),(R+12),4);
}
B75a0f3:{NFSU2_TR(0x75a0f3);
__builtin_memmove((G+0),(G+4),4);
}
B75a0f5:{NFSU2_TR(0x75a0f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
{[[clang::musttail]] return blk_75a0f8(ARGS);}
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
PN u32 blk_75a0f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a0f8:L75a0f8:{bud-=1;NFSU2_TR(0x75a0f8);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_75a0fa(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x75a0f8u);}goto L75a0f8;}
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
PN u32 blk_75a0fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a0fa:L75a0fa:{bud-=2;NFSU2_TR(0x75a0fa);
__builtin_memmove((G+4),(G+0),4);
}
B75a0fc:{NFSU2_TR(0x75a0fc);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
{[[clang::musttail]] return blk_75a0ff(ARGS);}
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
PN u32 blk_75a0ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a0ff:L75a0ff:{bud-=1;NFSU2_TR(0x75a0ff);
u8 U[35];
w1(U+34,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+34)){{[[clang::musttail]] return blk_75a101(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x75a0ffu);}goto L75a0ff;}
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
PN u32 blk_75a101(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a101:L75a101:{bud-=9;NFSU2_TR(0x75a101);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a107:{NFSU2_TR(0x75a107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a10d:{NFSU2_TR(0x75a10d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a111:{NFSU2_TR(0x75a111);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B75a113:{NFSU2_TR(0x75a113);
__builtin_memmove((G+0),(R+8),4);
}
B75a115:{NFSU2_TR(0x75a115);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75a117:{NFSU2_TR(0x75a117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a11d:{NFSU2_TR(0x75a11d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a11e:{NFSU2_TR(0x75a11e);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a134(ARGS);}}
}
B75a120:L75a120:{bud-=4;NFSU2_TR(0x75a120);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B75a122:{NFSU2_TR(0x75a122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a128:{NFSU2_TR(0x75a128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a12e:{NFSU2_TR(0x75a12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x801cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_75a134(ARGS);}
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
PN u32 blk_75a134(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a134:L75a134:{bud-=2;NFSU2_TR(0x75a134);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x14ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B75a13b:{NFSU2_TR(0x75a13b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a15a(ARGS);}}
}
B75a13d:L75a13d:{bud-=10;NFSU2_TR(0x75a13d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a141:{NFSU2_TR(0x75a141);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a145:{NFSU2_TR(0x75a145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B75a147:{NFSU2_TR(0x75a147);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a149:{NFSU2_TR(0x75a149);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a14b:{NFSU2_TR(0x75a14b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a14d:{NFSU2_TR(0x75a14d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a14e:{NFSU2_TR(0x75a14e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a14f:{NFSU2_TR(0x75a14f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a150:{NFSU2_TR(0x75a150);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a155ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x74a6d0u);}[[clang::musttail]] return blk_74a6d0(ARGS);}
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
PN u32 blk_75a155(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a155:L75a155:{bud-=2;NFSU2_TR(0x75a155);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B75a158:{NFSU2_TR(0x75a158);
__builtin_memmove((R+12),(G+0),4);
{[[clang::musttail]] return blk_75a15a(ARGS);}
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
PN u32 blk_75a15a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a15a:L75a15a:{bud-=2;NFSU2_TR(0x75a15a);
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
B75a15c:{NFSU2_TR(0x75a15c);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a172(ARGS);}}
}
B75a15e:L75a15e:{bud-=3;NFSU2_TR(0x75a15e);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
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
B75a162:{NFSU2_TR(0x75a162);
__builtin_memmove((G+0),(R+12),4);
}
B75a164:{NFSU2_TR(0x75a164);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a174(ARGS);}}
}
B75a166:L75a166:{bud-=6;NFSU2_TR(0x75a166);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a16a:{NFSU2_TR(0x75a16a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a16b:{NFSU2_TR(0x75a16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a16c:{NFSU2_TR(0x75a16c);
u8 U[9];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B75a170:{NFSU2_TR(0x75a170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a171:{NFSU2_TR(0x75a171);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x7547d9u)[[clang::musttail]] return blk_7547d9(ARGS);if(t__==0x7548f1u)[[clang::musttail]] return blk_7548f1(ARGS);if(t__==0x755673u)[[clang::musttail]] return blk_755673(ARGS);if(t__==0x7556d9u)[[clang::musttail]] return blk_7556d9(ARGS););}
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
PN u32 blk_75a172(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a172:L75a172:{bud-=1;NFSU2_TR(0x75a172);
__builtin_memmove((G+0),(R+12),4);
{[[clang::musttail]] return blk_75a174(ARGS);}
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
PN u32 blk_75a174(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a174:L75a174:{bud-=4;NFSU2_TR(0x75a174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a175:{NFSU2_TR(0x75a175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a176:{NFSU2_TR(0x75a176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a177:{NFSU2_TR(0x75a177);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x7547d9u)[[clang::musttail]] return blk_7547d9(ARGS);if(t__==0x7548f1u)[[clang::musttail]] return blk_7548f1(ARGS);if(t__==0x755673u)[[clang::musttail]] return blk_755673(ARGS);if(t__==0x7556d9u)[[clang::musttail]] return blk_7556d9(ARGS););}
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
PN u32 blk_75a180(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a180:L75a180:{bud-=6;NFSU2_TR(0x75a180);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a181:{NFSU2_TR(0x75a181);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a185:{NFSU2_TR(0x75a185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((G+4),(U+0),4);
}
B75a187:{NFSU2_TR(0x75a187);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
}
B75a18a:{NFSU2_TR(0x75a18a);
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
B75a18c:{NFSU2_TR(0x75a18c);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a1cb(ARGS);}}
}
B75a18e:L75a18e:{bud-=9;NFSU2_TR(0x75a18e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a192:{NFSU2_TR(0x75a192);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a196:{NFSU2_TR(0x75a196);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a197:{NFSU2_TR(0x75a197);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a19b:{NFSU2_TR(0x75a19b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a19c:{NFSU2_TR(0x75a19c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a19d:{NFSU2_TR(0x75a19d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a19e:{NFSU2_TR(0x75a19e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a19f:{NFSU2_TR(0x75a19f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a1a4ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x74a760u);}[[clang::musttail]] return blk_74a760(ARGS);}
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
PN u32 blk_75a1a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a1a4:L75a1a4:{bud-=4;NFSU2_TR(0x75a1a4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B75a1a7:{NFSU2_TR(0x75a1a7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(F+0,u8((r4(U+6))<(u32(0x73746174ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x73746174ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x73746174ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a1ad:{NFSU2_TR(0x75a1ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a1ae:{NFSU2_TR(0x75a1ae);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a1cb(ARGS);}}
}
B75a1b0:L75a1b0:{bud-=3;NFSU2_TR(0x75a1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a1b6:{NFSU2_TR(0x75a1b6);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75a1b9:{NFSU2_TR(0x75a1b9);
if(r1(F+6)){{[[clang::musttail]] return blk_75a1c9(ARGS);}}
}
B75a1bb:L75a1bb:{bud-=2;NFSU2_TR(0x75a1bb);
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
B75a1bd:{NFSU2_TR(0x75a1bd);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a1cb(ARGS);}}
}
B75a1bf:L75a1bf:{bud-=2;NFSU2_TR(0x75a1bf);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(U+6))<(u32(0x14ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a1c2:{NFSU2_TR(0x75a1c2);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a1cb(ARGS);}}
}
B75a1c4:L75a1c4:{bud-=2;NFSU2_TR(0x75a1c4);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(U+6))<(u32(0x10ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a1c7:{NFSU2_TR(0x75a1c7);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a1cb(ARGS);}}
{[[clang::musttail]] return blk_75a1c9(ARGS);}
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
PN u32 blk_75a1c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a1c9:L75a1c9:{bud-=1;NFSU2_TR(0x75a1c9);
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
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a1cb(ARGS);}
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
PN u32 blk_75a1cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a1cb:L75a1cb:{bud-=2;NFSU2_TR(0x75a1cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a1cc:{NFSU2_TR(0x75a1cc);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x75468au)[[clang::musttail]] return blk_75468a(ARGS);if(t__==0x7546b0u)[[clang::musttail]] return blk_7546b0(ARGS);if(t__==0x7546c8u)[[clang::musttail]] return blk_7546c8(ARGS);if(t__==0x755609u)[[clang::musttail]] return blk_755609(ARGS););}
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
PN u32 blk_75a1d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a1d0:L75a1d0:{bud-=6;NFSU2_TR(0x75a1d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a1d4:{NFSU2_TR(0x75a1d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a1d5:{NFSU2_TR(0x75a1d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a1d6:{NFSU2_TR(0x75a1d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a1da:{NFSU2_TR(0x75a1da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B75a1dc:{NFSU2_TR(0x75a1dc);
if(r1(F+6)){{[[clang::musttail]] return blk_75a1e7(ARGS);}}
}
B75a1de:L75a1de:{bud-=2;NFSU2_TR(0x75a1de);
w4(G+4,u32(0x8ull));
}
B75a1e3:{NFSU2_TR(0x75a1e3);
__builtin_memmove((R+24),(G+0),4);
{[[clang::musttail]] return blk_75a1e5(ARGS);}
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
PN u32 blk_75a1e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a1e5:L75a1e5:{bud-=1;NFSU2_TR(0x75a1e5);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_75a1e7(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x75a1e5u);}goto L75a1e5;}
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
PN u32 blk_75a1e7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a1e7:L75a1e7:{bud-=3;NFSU2_TR(0x75a1e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a1eb:{NFSU2_TR(0x75a1eb);
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
B75a1ed:{NFSU2_TR(0x75a1ed);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a1f9(ARGS);}}
}
B75a1ef:L75a1ef:{bud-=2;NFSU2_TR(0x75a1ef);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a1f2:{NFSU2_TR(0x75a1f2);
w4(G+4,u32(0xdull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a1f7(ARGS);}
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
PN u32 blk_75a1f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a1f7:L75a1f7:{bud-=1;NFSU2_TR(0x75a1f7);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_75a1f9(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x75a1f7u);}goto L75a1f7;}
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
PN u32 blk_75a1f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a1f9:L75a1f9:{bud-=4;NFSU2_TR(0x75a1f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a1fa:{NFSU2_TR(0x75a1fa);
w4(G+0,u32(0x1ull));
}
B75a1ff:{NFSU2_TR(0x75a1ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a200:{NFSU2_TR(0x75a200);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x754d0eu)[[clang::musttail]] return blk_754d0e(ARGS););}
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
PN u32 blk_75a210(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a210:L75a210:{bud-=7;NFSU2_TR(0x75a210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a211:{NFSU2_TR(0x75a211);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a215:{NFSU2_TR(0x75a215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a216:{NFSU2_TR(0x75a216);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a21a:{NFSU2_TR(0x75a21a);
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
B75a21c:{NFSU2_TR(0x75a21c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75a222:{NFSU2_TR(0x75a222);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a256(ARGS);}}
}
B75a224:L75a224:{bud-=8;NFSU2_TR(0x75a224);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a226:{NFSU2_TR(0x75a226);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a228:{NFSU2_TR(0x75a228);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10aull))));
__builtin_memmove((G+0),(U+0),4);
}
B75a22e:{NFSU2_TR(0x75a22e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a22f:{NFSU2_TR(0x75a22f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a230:{NFSU2_TR(0x75a230);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75a236:{NFSU2_TR(0x75a236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75a23d:{NFSU2_TR(0x75a23d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a242ull));
{[[clang::musttail]] return blk_75a430(ARGS);}
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
PN u32 blk_75a242(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a242:L75a242:{bud-=7;NFSU2_TR(0x75a242);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a244:{NFSU2_TR(0x75a244);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a246:{NFSU2_TR(0x75a246);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B75a249:{NFSU2_TR(0x75a249);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((G+4),(U+0),4);
}
B75a24c:{NFSU2_TR(0x75a24c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a24d:{NFSU2_TR(0x75a24d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a24e:{NFSU2_TR(0x75a24e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a253ull));
{[[clang::musttail]] return blk_75a430(ARGS);}
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
PN u32 blk_75a253(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a253:L75a253:{bud-=1;NFSU2_TR(0x75a253);
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
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a256(ARGS);}
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
PN u32 blk_75a256(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a256:L75a256:{bud-=4;NFSU2_TR(0x75a256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B75a258:{NFSU2_TR(0x75a258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a259:{NFSU2_TR(0x75a259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a25a:{NFSU2_TR(0x75a25a);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x75447eu)[[clang::musttail]] return blk_75447e(ARGS);if(t__==0x754664u)[[clang::musttail]] return blk_754664(ARGS);if(t__==0x754d39u)[[clang::musttail]] return blk_754d39(ARGS););}
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
PN u32 blk_75a260(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a260:L75a260:{bud-=4;NFSU2_TR(0x75a260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a261:{NFSU2_TR(0x75a261);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a265:{NFSU2_TR(0x75a265);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(F+0,u8((r4(U+10))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+9))==(u8(0x0ull))));
}
B75a268:{NFSU2_TR(0x75a268);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a287(ARGS);}}
}
B75a26a:L75a26a:{bud-=7;NFSU2_TR(0x75a26a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a26e:{NFSU2_TR(0x75a26e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a272:{NFSU2_TR(0x75a272);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a273:{NFSU2_TR(0x75a273);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a274:{NFSU2_TR(0x75a274);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B75a277:{NFSU2_TR(0x75a277);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a278:{NFSU2_TR(0x75a278);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a27dull));
{[[clang::musttail]] return blk_75a590(ARGS);}
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
PN u32 blk_75a27d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a27d:L75a27d:{bud-=2;NFSU2_TR(0x75a27d);
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
B75a280:{NFSU2_TR(0x75a280);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a287(ARGS);}
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
PN u32 blk_75a287(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a287:L75a287:{bud-=2;NFSU2_TR(0x75a287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a288:{NFSU2_TR(0x75a288);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x75482au)[[clang::musttail]] return blk_75482a(ARGS);if(t__==0x754964u)[[clang::musttail]] return blk_754964(ARGS););}
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
PN u32 blk_75a290(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a290:L75a290:{bud-=6;NFSU2_TR(0x75a290);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x68ull))));
}
B75a293:{NFSU2_TR(0x75a293);
__builtin_memmove((G+0),gp(0x81a1d0),4);
}
B75a298:{NFSU2_TR(0x75a298);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a29c:{NFSU2_TR(0x75a29c);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a2a0:{NFSU2_TR(0x75a2a0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+8))==(u32(0x0ull))));
}
B75a2a3:{NFSU2_TR(0x75a2a3);
if(r1(F+6)){{[[clang::musttail]] return blk_75a32b(ARGS);}}
}
B75a2a9:L75a2a9:{bud-=3;NFSU2_TR(0x75a2a9);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a2ac:{NFSU2_TR(0x75a2ac);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B75a2ae:{NFSU2_TR(0x75a2ae);
if(r1(F+6)){{[[clang::musttail]] return blk_75a32b(ARGS);}}
}
B75a2b0:L75a2b0:{bud-=4;NFSU2_TR(0x75a2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2b1:{NFSU2_TR(0x75a2b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a2b5:{NFSU2_TR(0x75a2b5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B75a2b8:{NFSU2_TR(0x75a2b8);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a2cb(ARGS);}}
}
B75a2ba:L75a2ba:{bud-=4;NFSU2_TR(0x75a2ba);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
}
B75a2bd:{NFSU2_TR(0x75a2bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a2be:{NFSU2_TR(0x75a2be);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a2c2:{NFSU2_TR(0x75a2c2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a2c7ull));
{[[clang::musttail]] return blk_76115e(ARGS);}
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
PN u32 blk_75a2c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a2c7:L75a2c7:{bud-=2;NFSU2_TR(0x75a2c7);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x68ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x68ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x68ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a2ca:{NFSU2_TR(0x75a2ca);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x754972u)[[clang::musttail]] return blk_754972(ARGS););}
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
PN u32 blk_75a2cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a2cb:L75a2cb:{bud-=5;NFSU2_TR(0x75a2cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2cc:{NFSU2_TR(0x75a2cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B75a2d0:{NFSU2_TR(0x75a2d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2d1:{NFSU2_TR(0x75a2d1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2d2:{NFSU2_TR(0x75a2d2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a2d7ull));
{[[clang::musttail]] return blk_75aeb0(ARGS);}
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
PN u32 blk_75a2d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a2d7:L75a2d7:{bud-=7;NFSU2_TR(0x75a2d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75a2de:{NFSU2_TR(0x75a2de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((G+4),(U+0),4);
}
B75a2e1:{NFSU2_TR(0x75a2e1);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2e2:{NFSU2_TR(0x75a2e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75a2e6:{NFSU2_TR(0x75a2e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2e7:{NFSU2_TR(0x75a2e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2e8:{NFSU2_TR(0x75a2e8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a2edull));
{[[clang::musttail]] return blk_75aee0(ARGS);}
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
PN u32 blk_75a2ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a2ed:L75a2ed:{bud-=6;NFSU2_TR(0x75a2ed);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2ef:{NFSU2_TR(0x75a2ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B75a2f3:{NFSU2_TR(0x75a2f3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2f4:{NFSU2_TR(0x75a2f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B75a2f8:{NFSU2_TR(0x75a2f8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a2f9:{NFSU2_TR(0x75a2f9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a2feull));
{[[clang::musttail]] return blk_75af40(ARGS);}
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
PN u32 blk_75a2fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a2fe:L75a2fe:{bud-=5;NFSU2_TR(0x75a2fe);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x1cull))));
}
B75a301:{NFSU2_TR(0x75a301);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B75a303:{NFSU2_TR(0x75a303);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a307:{NFSU2_TR(0x75a307);
w4(G+4,u32(0x2ull));
}
B75a30c:{NFSU2_TR(0x75a30c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((R+28),(U+0),4);
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_75a310(ARGS);}
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
PN u32 blk_75a310(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a310:L75a310:{bud-=1;NFSU2_TR(0x75a310);
u8 U[59];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_75a312(ARGS);}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(F+0,u8((r4(U+51))<(r4(U+47))));
w1(F+11,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(F+7,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+46))==(u8(0x0ull))));
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){__builtin_memcpy(R+518,F+6,1);EXIT(0x75a310u);}goto L75a310;}}
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_75a312(ARGS);}
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
PN u32 blk_75a312(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a312:L75a312:{bud-=9;NFSU2_TR(0x75a312);
__builtin_memmove((G+0),(R+8),4);
}
B75a314:{NFSU2_TR(0x75a314);
__builtin_memmove((G+0),(F+6),1);
}
B75a317:{NFSU2_TR(0x75a317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a318:{NFSU2_TR(0x75a318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a319:{NFSU2_TR(0x75a319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a31a:{NFSU2_TR(0x75a31a);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B75a31b:{NFSU2_TR(0x75a31b);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xfffffffeull))));
}
B75a31e:{NFSU2_TR(0x75a31e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a322:{NFSU2_TR(0x75a322);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a327ull));
{[[clang::musttail]] return blk_76115e(ARGS);}
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
PN u32 blk_75a327(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a327:L75a327:{bud-=2;NFSU2_TR(0x75a327);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x68ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x68ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x68ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a32a:{NFSU2_TR(0x75a32a);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x754972u)[[clang::musttail]] return blk_754972(ARGS););}
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
PN u32 blk_75a32b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a32b:L75a32b:{bud-=3;NFSU2_TR(0x75a32b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a32f:{NFSU2_TR(0x75a32f);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B75a331:{NFSU2_TR(0x75a331);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a336ull));
{[[clang::musttail]] return blk_76115e(ARGS);}
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
PN u32 blk_75a336(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a336:L75a336:{bud-=2;NFSU2_TR(0x75a336);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x68ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x68ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x68ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a339:{NFSU2_TR(0x75a339);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x754972u)[[clang::musttail]] return blk_754972(ARGS););}
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
PN u32 blk_75a340(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a340:L75a340:{bud-=3;NFSU2_TR(0x75a340);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a344:{NFSU2_TR(0x75a344);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(F+0,u8((r4(U+10))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+9))==(u8(0x0ull))));
}
B75a347:{NFSU2_TR(0x75a347);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a35d(ARGS);}}
}
B75a349:L75a349:{bud-=4;NFSU2_TR(0x75a349);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a34c:{NFSU2_TR(0x75a34c);
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
B75a34e:{NFSU2_TR(0x75a34e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a352:{NFSU2_TR(0x75a352);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a361(ARGS);}}
}
B75a354:L75a354:{bud-=2;NFSU2_TR(0x75a354);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
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
B75a357:{NFSU2_TR(0x75a357);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a361(ARGS);}}
}
B75a359:L75a359:{bud-=2;NFSU2_TR(0x75a359);
u8 U[6];
w1(F+0,u8((r4(G+0))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(G+0),u32(0x8ull)));
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a35c:{NFSU2_TR(0x75a35c);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x7549a7u)[[clang::musttail]] return blk_7549a7(ARGS););}
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
PN u32 blk_75a35d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a35d:L75a35d:{bud-=1;NFSU2_TR(0x75a35d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_75a361(ARGS);}
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
PN u32 blk_75a361(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a361:L75a361:{bud-=1;NFSU2_TR(0x75a361);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x7549a7u)[[clang::musttail]] return blk_7549a7(ARGS););}
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
PN u32 blk_75a370(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a370:L75a370:{bud-=4;NFSU2_TR(0x75a370);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a374:{NFSU2_TR(0x75a374);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(F+0,u8((r4(U+10))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+9))==(u8(0x0ull))));
}
B75a377:{NFSU2_TR(0x75a377);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a37b:{NFSU2_TR(0x75a37b);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a380(ARGS);}}
}
B75a37d:L75a37d:{bud-=1;NFSU2_TR(0x75a37d);
u8 U[6];
w1(F+0,carry<u32>(r4(G+0),u32(0x8ull)));
w1(F+11,scarry<u32>(r4(G+0),u32(0x8ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a380(ARGS);}
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
PN u32 blk_75a380(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a380:L75a380:{bud-=1;NFSU2_TR(0x75a380);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x754a2cu)[[clang::musttail]] return blk_754a2c(ARGS););}
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
PN u32 blk_75a390(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a390:L75a390:{bud-=10;NFSU2_TR(0x75a390);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x58ull))));
}
B75a393:{NFSU2_TR(0x75a393);
__builtin_memmove((G+0),gp(0x81a1d0),4);
}
B75a398:{NFSU2_TR(0x75a398);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a39c:{NFSU2_TR(0x75a39c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a3a0:{NFSU2_TR(0x75a3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B75a3a2:{NFSU2_TR(0x75a3a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3a3:{NFSU2_TR(0x75a3a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a3a7:{NFSU2_TR(0x75a3a7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
}
B75a3aa:{NFSU2_TR(0x75a3aa);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B75a3ac:{NFSU2_TR(0x75a3ac);
if(r1(F+6)){{[[clang::musttail]] return blk_75a3f1(ARGS);}}
}
B75a3ae:L75a3ae:{bud-=2;NFSU2_TR(0x75a3ae);
u8 U[10];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+7,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a3b0:{NFSU2_TR(0x75a3b0);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a3c3(ARGS);}}
}
B75a3b2:L75a3b2:{bud-=4;NFSU2_TR(0x75a3b2);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
}
B75a3b5:{NFSU2_TR(0x75a3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a3b6:{NFSU2_TR(0x75a3b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a3ba:{NFSU2_TR(0x75a3ba);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a3bfull));
{[[clang::musttail]] return blk_76115e(ARGS);}
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
PN u32 blk_75a3bf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a3bf:L75a3bf:{bud-=2;NFSU2_TR(0x75a3bf);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x58ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x58ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x58ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a3c2:{NFSU2_TR(0x75a3c2);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x754ae1u)[[clang::musttail]] return blk_754ae1(ARGS););}
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
PN u32 blk_75a3c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a3c3:L75a3c3:{bud-=4;NFSU2_TR(0x75a3c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B75a3c7:{NFSU2_TR(0x75a3c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3c8:{NFSU2_TR(0x75a3c8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3c9:{NFSU2_TR(0x75a3c9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a3ceull));
{[[clang::musttail]] return blk_75aeb0(ARGS);}
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
PN u32 blk_75a3ce(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a3ce:L75a3ce:{bud-=6;NFSU2_TR(0x75a3ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a3d2:{NFSU2_TR(0x75a3d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3d3:{NFSU2_TR(0x75a3d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75a3d7:{NFSU2_TR(0x75a3d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3d8:{NFSU2_TR(0x75a3d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3d9:{NFSU2_TR(0x75a3d9);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a3deull));
{[[clang::musttail]] return blk_75aee0(ARGS);}
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
PN u32 blk_75a3de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a3de:L75a3de:{bud-=6;NFSU2_TR(0x75a3de);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3e0:{NFSU2_TR(0x75a3e0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B75a3e2:{NFSU2_TR(0x75a3e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B75a3e6:{NFSU2_TR(0x75a3e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3e7:{NFSU2_TR(0x75a3e7);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a3e8:{NFSU2_TR(0x75a3e8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a3edull));
{[[clang::musttail]] return blk_75af40(ARGS);}
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
PN u32 blk_75a3ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a3ed:L75a3ed:{bud-=2;NFSU2_TR(0x75a3ed);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x1cull))));
}
B75a3f0:{NFSU2_TR(0x75a3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_75a3f1(ARGS);}
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
PN u32 blk_75a3f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a3f1:L75a3f1:{bud-=4;NFSU2_TR(0x75a3f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a3f5:{NFSU2_TR(0x75a3f5);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B75a3f7:{NFSU2_TR(0x75a3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a3f8:{NFSU2_TR(0x75a3f8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75a3fdull));
{[[clang::musttail]] return blk_76115e(ARGS);}
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
PN u32 blk_75a3fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a3fd:L75a3fd:{bud-=2;NFSU2_TR(0x75a3fd);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x58ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x58ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x58ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75a400:{NFSU2_TR(0x75a400);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x754ae1u)[[clang::musttail]] return blk_754ae1(ARGS););}
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
PN u32 blk_75a410(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a410:L75a410:{bud-=3;NFSU2_TR(0x75a410);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a414:{NFSU2_TR(0x75a414);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(F+0,u8((r4(U+10))<(u32(0x0ull))));
w1(F+11,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(F+7,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+9))==(u8(0x0ull))));
}
B75a417:{NFSU2_TR(0x75a417);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a427(ARGS);}}
}
B75a419:L75a419:{bud-=3;NFSU2_TR(0x75a419);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10aull))));
}
B75a41e:{NFSU2_TR(0x75a41e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a422:{NFSU2_TR(0x75a422);
{[[clang::musttail]] return blk_75a590(ARGS);}
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
PN u32 blk_75a427(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a427:L75a427:{bud-=1;NFSU2_TR(0x75a427);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x754ae9u)[[clang::musttail]] return blk_754ae9(ARGS););}
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
PN u32 blk_75a430(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a430:L75a430:{bud-=4;NFSU2_TR(0x75a430);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a434:{NFSU2_TR(0x75a434);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xcull))));
}
B75a437:{NFSU2_TR(0x75a437);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75a43a:{NFSU2_TR(0x75a43a);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_75a441(ARGS);}}
}
B75a43c:L75a43c:{bud-=1;NFSU2_TR(0x75a43c);
w4(G+4,u32(0x1ull));
{[[clang::musttail]] return blk_75a441(ARGS);}
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
PN u32 blk_75a441(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a441:L75a441:{bud-=8;NFSU2_TR(0x75a441);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a442:{NFSU2_TR(0x75a442);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a443:{NFSU2_TR(0x75a443);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75a445:{NFSU2_TR(0x75a445);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a446:{NFSU2_TR(0x75a446);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a44a:{NFSU2_TR(0x75a44a);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B75a44c:{NFSU2_TR(0x75a44c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a44f:{NFSU2_TR(0x75a44f);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_75a451(ARGS);}
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
PN u32 blk_75a451(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a451:L75a451:{bud-=4;NFSU2_TR(0x75a451);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75a455:{NFSU2_TR(0x75a455);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B75a456:{NFSU2_TR(0x75a456);
w1(F+0,u8((r4(G+0))<(u32(0x100ull))));
}
B75a45b:{NFSU2_TR(0x75a45b);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75a451u);}goto L75a451;}}
}
B75a45d:L75a45d:{bud-=3;NFSU2_TR(0x75a45d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a461:{NFSU2_TR(0x75a461);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75a463:{NFSU2_TR(0x75a463);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_75a584(ARGS);}}
}
B75a469:L75a469:{bud-=2;NFSU2_TR(0x75a469);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75a46b:{NFSU2_TR(0x75a46b);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_75a584(ARGS);}}
}
B75a471:L75a471:{bud-=13;NFSU2_TR(0x75a471);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
}
B75a474:{NFSU2_TR(0x75a474);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B75a476:{NFSU2_TR(0x75a476);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a47a:{NFSU2_TR(0x75a47a);
w4(G+0,u32(0x1ull));
}
B75a47f:{NFSU2_TR(0x75a47f);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B75a481:{NFSU2_TR(0x75a481);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a485:{NFSU2_TR(0x75a485);
w4(G+0,u32(0xfffffffeull));
}
B75a48a:{NFSU2_TR(0x75a48a);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+24))));
}
B75a48c:{NFSU2_TR(0x75a48c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a48d:{NFSU2_TR(0x75a48d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a491:{NFSU2_TR(0x75a491);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a495:{NFSU2_TR(0x75a495);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a499:{NFSU2_TR(0x75a499);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_75a4a0(ARGS);}
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
PN u32 blk_75a4a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a4a0:L75a4a0:{bud-=3;NFSU2_TR(0x75a4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75a4a8:{NFSU2_TR(0x75a4a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((G+4),(U+0),4);
}
B75a4ab:{NFSU2_TR(0x75a4ab);
{[[clang::musttail]] return blk_75a4b0(ARGS);}
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
PN u32 blk_75a4b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a4b0:L75a4b0:{bud-=65;NFSU2_TR(0x75a4b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a4b2:{NFSU2_TR(0x75a4b2);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a4b6:{NFSU2_TR(0x75a4b6);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75a4b8:{NFSU2_TR(0x75a4b8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75a4ba:{NFSU2_TR(0x75a4ba);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a4ba);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(G+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a4ba);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75a4bc:{NFSU2_TR(0x75a4bc);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((G+0),(U+8),1);
}
B75a4bf:{NFSU2_TR(0x75a4bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(G+0,u8(u32(r1(G+0))+u32(r1(U+4))));
}
B75a4c3:{NFSU2_TR(0x75a4c3);
w1(R+12,u8(u32(r1(R+12))+u32(r1(G+0))));
}
B75a4c5:{NFSU2_TR(0x75a4c5);
w4(R+8,u32(r1(R+12)));
}
B75a4c8:{NFSU2_TR(0x75a4c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B75a4cc:{NFSU2_TR(0x75a4cc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a4ce:{NFSU2_TR(0x75a4ce);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(G+4)),r1(U+0));
}
B75a4d0:{NFSU2_TR(0x75a4d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75a4d4:{NFSU2_TR(0x75a4d4);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(G+0)),r1(U+0));
}
B75a4d6:{NFSU2_TR(0x75a4d6);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B75a4d9:{NFSU2_TR(0x75a4d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a4dd:{NFSU2_TR(0x75a4dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a4e1:{NFSU2_TR(0x75a4e1);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B75a4e4:{NFSU2_TR(0x75a4e4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75a4e6:{NFSU2_TR(0x75a4e6);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a4e6);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(G+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a4e6);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75a4e8:{NFSU2_TR(0x75a4e8);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((G+0),(U+8),1);
}
B75a4eb:{NFSU2_TR(0x75a4eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(G+0,u8(u32(r1(G+0))+u32(r1(U+4))));
}
B75a4ef:{NFSU2_TR(0x75a4ef);
w1(R+12,u8(u32(r1(R+12))+u32(r1(G+0))));
}
B75a4f1:{NFSU2_TR(0x75a4f1);
w4(R+8,u32(r1(R+12)));
}
B75a4f4:{NFSU2_TR(0x75a4f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B75a4f8:{NFSU2_TR(0x75a4f8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a4fa:{NFSU2_TR(0x75a4fa);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a4fd:{NFSU2_TR(0x75a4fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75a501:{NFSU2_TR(0x75a501);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(G+0)),r1(U+0));
}
B75a503:{NFSU2_TR(0x75a503);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B75a506:{NFSU2_TR(0x75a506);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a50a:{NFSU2_TR(0x75a50a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a50e:{NFSU2_TR(0x75a50e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75a510:{NFSU2_TR(0x75a510);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a510);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(G+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a510);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75a512:{NFSU2_TR(0x75a512);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B75a516:{NFSU2_TR(0x75a516);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B75a519:{NFSU2_TR(0x75a519);
w1(R+8,u8(u32(r1(R+8))+u32(r1(G+0))));
}
B75a51b:{NFSU2_TR(0x75a51b);
w1(R+12,u8(u32(r1(R+12))+u32(r1(R+8))));
}
B75a51d:{NFSU2_TR(0x75a51d);
w4(G+0,u32(r1(R+12)));
}
B75a520:{NFSU2_TR(0x75a520);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B75a524:{NFSU2_TR(0x75a524);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B75a528:{NFSU2_TR(0x75a528);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a52b:{NFSU2_TR(0x75a52b);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75a52f:{NFSU2_TR(0x75a52f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(G+0)),r1(U+0));
}
B75a531:{NFSU2_TR(0x75a531);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B75a534:{NFSU2_TR(0x75a534);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a538:{NFSU2_TR(0x75a538);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a53c:{NFSU2_TR(0x75a53c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B75a53f:{NFSU2_TR(0x75a53f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75a541:{NFSU2_TR(0x75a541);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(G+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a541);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(G+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a541);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75a543:{NFSU2_TR(0x75a543);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x4ull))));
}
B75a546:{NFSU2_TR(0x75a546);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((G+0),(U+8),1);
}
B75a549:{NFSU2_TR(0x75a549);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(G+0,u8(u32(r1(G+0))+u32(r1(U+4))));
}
B75a54d:{NFSU2_TR(0x75a54d);
w1(R+12,u8(u32(r1(R+12))+u32(r1(G+0))));
}
B75a54f:{NFSU2_TR(0x75a54f);
w4(R+8,u32(r1(R+12)));
}
B75a552:{NFSU2_TR(0x75a552);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B75a556:{NFSU2_TR(0x75a556);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a558:{NFSU2_TR(0x75a558);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a55b:{NFSU2_TR(0x75a55b);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75a55f:{NFSU2_TR(0x75a55f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(G+0)),r1(U+0));
}
B75a561:{NFSU2_TR(0x75a561);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75a566:{NFSU2_TR(0x75a566);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a56a:{NFSU2_TR(0x75a56a);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B75a56d:{NFSU2_TR(0x75a56d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(F+0,u8((r4(U+0))<(u32(0x100ull))));
}
B75a573:{NFSU2_TR(0x75a573);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75a4b0u);}goto L75a4b0;}}
}
B75a579:L75a579:{bud-=2;NFSU2_TR(0x75a579);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75a57d:{NFSU2_TR(0x75a57d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75a4a0u);}[[clang::musttail]] return blk_75a4a0(ARGS);}}
}
B75a583:L75a583:{bud-=1;NFSU2_TR(0x75a583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
{[[clang::musttail]] return blk_75a584(ARGS);}
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
PN u32 blk_75a584(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a584:L75a584:{bud-=5;NFSU2_TR(0x75a584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a585:{NFSU2_TR(0x75a585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a586:{NFSU2_TR(0x75a586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a587:{NFSU2_TR(0x75a587);
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
B75a58a:{NFSU2_TR(0x75a58a);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x758290u)[[clang::musttail]] return blk_758290(ARGS);if(t__==0x759d7eu)[[clang::musttail]] return blk_759d7e(ARGS);if(t__==0x759f40u)[[clang::musttail]] return blk_759f40(ARGS);if(t__==0x75a242u)[[clang::musttail]] return blk_75a242(ARGS););}
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
PN u32 blk_75a590(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a590:L75a590:{bud-=7;NFSU2_TR(0x75a590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a594:{NFSU2_TR(0x75a594);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75a598:{NFSU2_TR(0x75a598);
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
B75a59a:{NFSU2_TR(0x75a59a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B75a59d:{NFSU2_TR(0x75a59d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a59e:{NFSU2_TR(0x75a59e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B75a5a0:{NFSU2_TR(0x75a5a0);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a5f1(ARGS);}}
}
B75a5a2:L75a5a2:{bud-=6;NFSU2_TR(0x75a5a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a5a3:{NFSU2_TR(0x75a5a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a5a7:{NFSU2_TR(0x75a5a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a5a8:{NFSU2_TR(0x75a5a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a5a9:{NFSU2_TR(0x75a5a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a5ad:{NFSU2_TR(0x75a5ad);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_75a5b0(ARGS);}
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
PN u32 blk_75a5b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a5b0:L75a5b0:{bud-=22;NFSU2_TR(0x75a5b0);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B75a5b2:{NFSU2_TR(0x75a5b2);
w4(G+4,u32(r1(R+12)));
}
B75a5b5:{NFSU2_TR(0x75a5b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a5b9:{NFSU2_TR(0x75a5b9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((G+4),(U+0),1);
}
B75a5bb:{NFSU2_TR(0x75a5bb);
w1(G+0,u8(u32(r1(G+0))+u32(r1(G+4))));
}
B75a5bd:{NFSU2_TR(0x75a5bd);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a5c1:{NFSU2_TR(0x75a5c1);
w4(G+0,u32(r1(G+0)));
}
B75a5c4:{NFSU2_TR(0x75a5c4);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a5c8:{NFSU2_TR(0x75a5c8);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B75a5ca:{NFSU2_TR(0x75a5ca);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((G+0),(U+0),1);
}
B75a5cc:{NFSU2_TR(0x75a5cc);
u8 U[1];
__builtin_memmove((U+0),(G+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B75a5ce:{NFSU2_TR(0x75a5ce);
u8 U[1];
__builtin_memmove((U+0),(G+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75a5d0:{NFSU2_TR(0x75a5d0);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75a5d2:{NFSU2_TR(0x75a5d2);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B75a5d7:{NFSU2_TR(0x75a5d7);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((G+4),(U+12),1);
}
B75a5db:{NFSU2_TR(0x75a5db);
u8 U[1];
w1(F+0,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w1(U+0,u8(u32(r1(U+0))^u32(r1(G+4))));
s1(u32(r4(R+20)),r1(U+0));
}
B75a5de:{NFSU2_TR(0x75a5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a5e2:{NFSU2_TR(0x75a5e2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B75a5e3:{NFSU2_TR(0x75a5e3);
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
B75a5e4:{NFSU2_TR(0x75a5e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a5e8:{NFSU2_TR(0x75a5e8);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B75a5ec:{NFSU2_TR(0x75a5ec);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75a5b0u);}goto L75a5b0;}}
}
B75a5ee:L75a5ee:{bud-=3;NFSU2_TR(0x75a5ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a5ef:{NFSU2_TR(0x75a5ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a5f0:{NFSU2_TR(0x75a5f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75a5f1(ARGS);}
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
PN u32 blk_75a5f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a5f1:L75a5f1:{bud-=4;NFSU2_TR(0x75a5f1);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B75a5f3:{NFSU2_TR(0x75a5f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a5f6:{NFSU2_TR(0x75a5f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a5f7:{NFSU2_TR(0x75a5f7);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x75829cu)[[clang::musttail]] return blk_75829c(ARGS);if(t__==0x758561u)[[clang::musttail]] return blk_758561(ARGS);if(t__==0x75863eu)[[clang::musttail]] return blk_75863e(ARGS);if(t__==0x75a27du)[[clang::musttail]] return blk_75a27d(ARGS););}
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
PN u32 blk_75a600(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a600:L75a600:{bud-=8;NFSU2_TR(0x75a600);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a604:{NFSU2_TR(0x75a604);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x44ull))));
}
B75a607:{NFSU2_TR(0x75a607);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a608:{NFSU2_TR(0x75a608);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a609:{NFSU2_TR(0x75a609);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a60a:{NFSU2_TR(0x75a60a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75a60b:{NFSU2_TR(0x75a60b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x54ull))));
__builtin_memmove((G+4),(U+0),4);
}
B75a60e:{NFSU2_TR(0x75a60e);
w4(R+24,u32(0x10ull));
{[[clang::musttail]] return blk_75a613(ARGS);}
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
PN u32 blk_75a613(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75a613:L75a613:{bud-=18;NFSU2_TR(0x75a613);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75a617:{NFSU2_TR(0x75a617);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B75a618:{NFSU2_TR(0x75a618);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B75a61c:{NFSU2_TR(0x75a61c);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B75a61d:{NFSU2_TR(0x75a61d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a620:{NFSU2_TR(0x75a620);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B75a622:{NFSU2_TR(0x75a622);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B75a626:{NFSU2_TR(0x75a626);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B75a627:{NFSU2_TR(0x75a627);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a62a:{NFSU2_TR(0x75a62a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B75a62c:{NFSU2_TR(0x75a62c);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B75a630:{NFSU2_TR(0x75a630);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B75a631:{NFSU2_TR(0x75a631);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a634:{NFSU2_TR(0x75a634);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B75a635:{NFSU2_TR(0x75a635);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B75a637:{NFSU2_TR(0x75a637);
u8 U[4];
w1(F+0,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B75a639:{NFSU2_TR(0x75a639);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75a63d:{NFSU2_TR(0x75a63d);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75a613u);}goto L75a613;}}
}
B75a63f:L75a63f:{bud-=773;NFSU2_TR(0x75a63f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a642:{NFSU2_TR(0x75a642);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a645:{NFSU2_TR(0x75a645);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75a648:{NFSU2_TR(0x75a648);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a64b:{NFSU2_TR(0x75a64b);
__builtin_memmove((G+4),(R+24),4);
}
B75a64d:{NFSU2_TR(0x75a64d);
w4(G+4,u32(u32(r4(G+4))^u32(r4(R+8))));
}
B75a64f:{NFSU2_TR(0x75a64f);
w4(G+4,u32(u32(r4(G+4))&u32(r4(R+12))));
}
B75a651:{NFSU2_TR(0x75a651);
w4(G+4,u32(u32(r4(G+4))^u32(r4(R+24))));
}
B75a653:{NFSU2_TR(0x75a653);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B75a655:{NFSU2_TR(0x75a655);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75a659:{NFSU2_TR(0x75a659);
u8 U[12];
w4(U+0,u32(u32(u32(0xd76aa478ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B75a660:{NFSU2_TR(0x75a660);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a664:{NFSU2_TR(0x75a664);
__builtin_memmove((G+0),(G+4),4);
}
B75a666:{NFSU2_TR(0x75a666);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75a669:{NFSU2_TR(0x75a669);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75a66c:{NFSU2_TR(0x75a66c);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B75a66e:{NFSU2_TR(0x75a66e);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+12))));
}
B75a670:{NFSU2_TR(0x75a670);
__builtin_memmove((G+4),(R+8),4);
}
B75a672:{NFSU2_TR(0x75a672);
w4(G+4,u32(u32(r4(G+4))^u32(r4(R+12))));
}
B75a674:{NFSU2_TR(0x75a674);
w4(G+4,u32(u32(r4(G+4))&u32(r4(G+0))));
}
B75a676:{NFSU2_TR(0x75a676);
w4(G+4,u32(u32(r4(G+4))^u32(r4(R+8))));
}
B75a678:{NFSU2_TR(0x75a678);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
}
B75a67a:{NFSU2_TR(0x75a67a);
u8 U[12];
w4(U+0,u32(u32(u32(0xe8c7b756ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a681:{NFSU2_TR(0x75a681);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a685:{NFSU2_TR(0x75a685);
__builtin_memmove((G+4),(R+24),4);
}
B75a687:{NFSU2_TR(0x75a687);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a68a:{NFSU2_TR(0x75a68a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a68e:{NFSU2_TR(0x75a68e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75a691:{NFSU2_TR(0x75a691);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+24))));
}
B75a693:{NFSU2_TR(0x75a693);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B75a695:{NFSU2_TR(0x75a695);
__builtin_memmove((R+24),(R+12),4);
}
B75a697:{NFSU2_TR(0x75a697);
w4(R+24,u32(u32(r4(R+24))^u32(r4(G+0))));
}
B75a699:{NFSU2_TR(0x75a699);
w4(R+24,u32(u32(r4(R+24))&u32(r4(G+4))));
}
B75a69b:{NFSU2_TR(0x75a69b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+12))));
}
B75a69d:{NFSU2_TR(0x75a69d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75a69f:{NFSU2_TR(0x75a69f);
u8 U[12];
w4(U+0,u32(u32(u32(0x242070dbull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a6a6:{NFSU2_TR(0x75a6a6);
__builtin_memmove((R+8),(R+24),4);
}
B75a6a8:{NFSU2_TR(0x75a6a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a6ab:{NFSU2_TR(0x75a6ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a6af:{NFSU2_TR(0x75a6af);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75a6b2:{NFSU2_TR(0x75a6b2);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B75a6b4:{NFSU2_TR(0x75a6b4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B75a6b6:{NFSU2_TR(0x75a6b6);
__builtin_memmove((R+24),(G+4),4);
}
B75a6b8:{NFSU2_TR(0x75a6b8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(G+0))));
}
B75a6ba:{NFSU2_TR(0x75a6ba);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B75a6bc:{NFSU2_TR(0x75a6bc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(G+0))));
}
B75a6be:{NFSU2_TR(0x75a6be);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B75a6c0:{NFSU2_TR(0x75a6c0);
u8 U[12];
w4(U+0,u32(u32(u32(0xc1bdceeeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a6c7:{NFSU2_TR(0x75a6c7);
__builtin_memmove((R+24),(R+28),4);
}
B75a6c9:{NFSU2_TR(0x75a6c9);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a6cc:{NFSU2_TR(0x75a6cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a6cf:{NFSU2_TR(0x75a6cf);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a6d1:{NFSU2_TR(0x75a6d1);
__builtin_memmove((R+28),(G+4),4);
}
B75a6d3:{NFSU2_TR(0x75a6d3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a6d5:{NFSU2_TR(0x75a6d5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75a6d7:{NFSU2_TR(0x75a6d7);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a6d9:{NFSU2_TR(0x75a6d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a6db:{NFSU2_TR(0x75a6db);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a6dd:{NFSU2_TR(0x75a6dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a6e1:{NFSU2_TR(0x75a6e1);
u8 U[12];
w4(U+0,u32(u32(u32(0xf57c0fafull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a6e8:{NFSU2_TR(0x75a6e8);
__builtin_memmove((G+0),(R+28),4);
}
B75a6ea:{NFSU2_TR(0x75a6ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a6ed:{NFSU2_TR(0x75a6ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75a6f0:{NFSU2_TR(0x75a6f0);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75a6f2:{NFSU2_TR(0x75a6f2);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B75a6f4:{NFSU2_TR(0x75a6f4);
__builtin_memmove((R+28),(R+8),4);
}
B75a6f6:{NFSU2_TR(0x75a6f6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a6f8:{NFSU2_TR(0x75a6f8);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+0))));
}
B75a6fa:{NFSU2_TR(0x75a6fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a6fc:{NFSU2_TR(0x75a6fc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a6fe:{NFSU2_TR(0x75a6fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a702:{NFSU2_TR(0x75a702);
u8 U[12];
w4(U+0,u32(u32(u32(0x4787c62aull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a709:{NFSU2_TR(0x75a709);
__builtin_memmove((G+4),(R+28),4);
}
B75a70b:{NFSU2_TR(0x75a70b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a70e:{NFSU2_TR(0x75a70e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75a711:{NFSU2_TR(0x75a711);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75a713:{NFSU2_TR(0x75a713);
__builtin_memmove((R+28),(R+24),4);
}
B75a715:{NFSU2_TR(0x75a715);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B75a717:{NFSU2_TR(0x75a717);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a719:{NFSU2_TR(0x75a719);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+4))));
}
B75a71b:{NFSU2_TR(0x75a71b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a71d:{NFSU2_TR(0x75a71d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a71f:{NFSU2_TR(0x75a71f);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8304613ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a726:{NFSU2_TR(0x75a726);
__builtin_memmove((R+8),(R+28),4);
}
B75a728:{NFSU2_TR(0x75a728);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a72b:{NFSU2_TR(0x75a72b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a72f:{NFSU2_TR(0x75a72f);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75a732:{NFSU2_TR(0x75a732);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a734:{NFSU2_TR(0x75a734);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B75a736:{NFSU2_TR(0x75a736);
__builtin_memmove((R+28),(G+4),4);
}
B75a738:{NFSU2_TR(0x75a738);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a73a:{NFSU2_TR(0x75a73a);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a73c:{NFSU2_TR(0x75a73c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a73e:{NFSU2_TR(0x75a73e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a740:{NFSU2_TR(0x75a740);
u8 U[12];
w4(U+0,u32(u32(u32(0xfd469501ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a747:{NFSU2_TR(0x75a747);
__builtin_memmove((R+24),(R+28),4);
}
B75a749:{NFSU2_TR(0x75a749);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a74c:{NFSU2_TR(0x75a74c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a750:{NFSU2_TR(0x75a750);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a753:{NFSU2_TR(0x75a753);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a755:{NFSU2_TR(0x75a755);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75a757:{NFSU2_TR(0x75a757);
__builtin_memmove((R+28),(G+4),4);
}
B75a759:{NFSU2_TR(0x75a759);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a75b:{NFSU2_TR(0x75a75b);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a75d:{NFSU2_TR(0x75a75d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a75f:{NFSU2_TR(0x75a75f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a761:{NFSU2_TR(0x75a761);
u8 U[12];
w4(U+0,u32(u32(u32(0x698098d8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a768:{NFSU2_TR(0x75a768);
__builtin_memmove((G+0),(R+28),4);
}
B75a76a:{NFSU2_TR(0x75a76a);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a76d:{NFSU2_TR(0x75a76d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a771:{NFSU2_TR(0x75a771);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75a774:{NFSU2_TR(0x75a774);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75a776:{NFSU2_TR(0x75a776);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B75a778:{NFSU2_TR(0x75a778);
__builtin_memmove((R+28),(R+8),4);
}
B75a77a:{NFSU2_TR(0x75a77a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a77c:{NFSU2_TR(0x75a77c);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+0))));
}
B75a77e:{NFSU2_TR(0x75a77e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a780:{NFSU2_TR(0x75a780);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a782:{NFSU2_TR(0x75a782);
u8 U[12];
w4(U+0,u32(u32(u32(0x8b44f7afull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a789:{NFSU2_TR(0x75a789);
__builtin_memmove((G+4),(R+28),4);
}
B75a78b:{NFSU2_TR(0x75a78b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a78f:{NFSU2_TR(0x75a78f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a792:{NFSU2_TR(0x75a792);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75a795:{NFSU2_TR(0x75a795);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75a797:{NFSU2_TR(0x75a797);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B75a799:{NFSU2_TR(0x75a799);
__builtin_memmove((R+28),(R+24),4);
}
B75a79b:{NFSU2_TR(0x75a79b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a79d:{NFSU2_TR(0x75a79d);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+4))));
}
B75a79f:{NFSU2_TR(0x75a79f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a7a1:{NFSU2_TR(0x75a7a1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a7a3:{NFSU2_TR(0x75a7a3);
u8 U[12];
w4(U+0,u32(u32(u32(0xffff5bb1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a7aa:{NFSU2_TR(0x75a7aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a7ae:{NFSU2_TR(0x75a7ae);
__builtin_memmove((R+8),(R+28),4);
}
B75a7b0:{NFSU2_TR(0x75a7b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a7b3:{NFSU2_TR(0x75a7b3);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75a7b6:{NFSU2_TR(0x75a7b6);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a7b8:{NFSU2_TR(0x75a7b8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B75a7ba:{NFSU2_TR(0x75a7ba);
__builtin_memmove((R+28),(G+4),4);
}
B75a7bc:{NFSU2_TR(0x75a7bc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a7be:{NFSU2_TR(0x75a7be);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a7c0:{NFSU2_TR(0x75a7c0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a7c2:{NFSU2_TR(0x75a7c2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a7c4:{NFSU2_TR(0x75a7c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a7c8:{NFSU2_TR(0x75a7c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x895cd7beull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a7cf:{NFSU2_TR(0x75a7cf);
__builtin_memmove((R+24),(R+28),4);
}
B75a7d1:{NFSU2_TR(0x75a7d1);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a7d4:{NFSU2_TR(0x75a7d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a7d7:{NFSU2_TR(0x75a7d7);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a7d9:{NFSU2_TR(0x75a7d9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75a7db:{NFSU2_TR(0x75a7db);
__builtin_memmove((R+28),(G+4),4);
}
B75a7dd:{NFSU2_TR(0x75a7dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a7df:{NFSU2_TR(0x75a7df);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a7e1:{NFSU2_TR(0x75a7e1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a7e3:{NFSU2_TR(0x75a7e3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a7e5:{NFSU2_TR(0x75a7e5);
u8 U[12];
w4(U+0,u32(u32(u32(0x6b901122ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a7ec:{NFSU2_TR(0x75a7ec);
__builtin_memmove((G+0),(R+28),4);
}
B75a7ee:{NFSU2_TR(0x75a7ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75a7f1:{NFSU2_TR(0x75a7f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a7f4:{NFSU2_TR(0x75a7f4);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75a7f6:{NFSU2_TR(0x75a7f6);
__builtin_memmove((R+28),(R+8),4);
}
B75a7f8:{NFSU2_TR(0x75a7f8);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B75a7fa:{NFSU2_TR(0x75a7fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a7fc:{NFSU2_TR(0x75a7fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a800:{NFSU2_TR(0x75a800);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+0))));
}
B75a802:{NFSU2_TR(0x75a802);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a804:{NFSU2_TR(0x75a804);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a806:{NFSU2_TR(0x75a806);
u8 U[12];
w4(U+0,u32(u32(u32(0xfd987193ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B75a80d:{NFSU2_TR(0x75a80d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a811:{NFSU2_TR(0x75a811);
__builtin_memmove((R+28),(G+4),4);
}
B75a813:{NFSU2_TR(0x75a813);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a816:{NFSU2_TR(0x75a816);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75a819:{NFSU2_TR(0x75a819);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+4))));
}
B75a81b:{NFSU2_TR(0x75a81b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
}
B75a81d:{NFSU2_TR(0x75a81d);
__builtin_memmove((G+4),(R+24),4);
}
B75a81f:{NFSU2_TR(0x75a81f);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+0))));
}
B75a821:{NFSU2_TR(0x75a821);
w4(G+4,u32(u32(r4(G+4))&u32(r4(R+28))));
}
B75a823:{NFSU2_TR(0x75a823);
w4(G+4,u32(u32(r4(G+4))^u32(r4(R+24))));
}
B75a825:{NFSU2_TR(0x75a825);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
}
B75a827:{NFSU2_TR(0x75a827);
u8 U[12];
w4(U+0,u32(u32(u32(0xa679438eull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B75a82e:{NFSU2_TR(0x75a82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a832:{NFSU2_TR(0x75a832);
__builtin_memmove((G+4),(R+8),4);
}
B75a834:{NFSU2_TR(0x75a834);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a837:{NFSU2_TR(0x75a837);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75a83a:{NFSU2_TR(0x75a83a);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B75a83c:{NFSU2_TR(0x75a83c);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B75a83e:{NFSU2_TR(0x75a83e);
__builtin_memmove((R+8),(R+28),4);
}
B75a840:{NFSU2_TR(0x75a840);
w4(R+8,u32(u32(r4(R+8))^u32(r4(G+0))));
}
B75a842:{NFSU2_TR(0x75a842);
w4(R+8,u32(u32(r4(R+8))&u32(r4(G+4))));
}
B75a844:{NFSU2_TR(0x75a844);
w4(R+8,u32(u32(r4(R+8))^u32(r4(G+0))));
}
B75a846:{NFSU2_TR(0x75a846);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B75a848:{NFSU2_TR(0x75a848);
u8 U[12];
w4(U+0,u32(u32(u32(0x49b40821ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a84f:{NFSU2_TR(0x75a84f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a853:{NFSU2_TR(0x75a853);
__builtin_memmove((R+8),(R+24),4);
}
B75a855:{NFSU2_TR(0x75a855);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75a858:{NFSU2_TR(0x75a858);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a85b:{NFSU2_TR(0x75a85b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B75a85d:{NFSU2_TR(0x75a85d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B75a85f:{NFSU2_TR(0x75a85f);
__builtin_memmove((R+24),(G+4),4);
}
B75a861:{NFSU2_TR(0x75a861);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B75a863:{NFSU2_TR(0x75a863);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+28))));
}
B75a865:{NFSU2_TR(0x75a865);
w4(R+24,u32(u32(r4(R+24))^u32(r4(G+4))));
}
B75a867:{NFSU2_TR(0x75a867);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75a869:{NFSU2_TR(0x75a869);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a86d:{NFSU2_TR(0x75a86d);
u8 U[12];
w4(U+0,u32(u32(u32(0xf61e2562ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a874:{NFSU2_TR(0x75a874);
__builtin_memmove((G+0),(R+24),4);
}
B75a876:{NFSU2_TR(0x75a876);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a879:{NFSU2_TR(0x75a879);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75a87c:{NFSU2_TR(0x75a87c);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+24))));
}
B75a87e:{NFSU2_TR(0x75a87e);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B75a880:{NFSU2_TR(0x75a880);
__builtin_memmove((R+24),(R+8),4);
}
B75a882:{NFSU2_TR(0x75a882);
w4(R+24,u32(u32(r4(R+24))^u32(r4(G+0))));
}
B75a884:{NFSU2_TR(0x75a884);
w4(R+24,u32(u32(r4(R+24))&u32(r4(G+4))));
}
B75a886:{NFSU2_TR(0x75a886);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B75a888:{NFSU2_TR(0x75a888);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75a88a:{NFSU2_TR(0x75a88a);
u8 U[12];
w4(U+0,u32(u32(u32(0xc040b340ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a891:{NFSU2_TR(0x75a891);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a895:{NFSU2_TR(0x75a895);
__builtin_memmove((R+24),(R+28),4);
}
B75a897:{NFSU2_TR(0x75a897);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a89a:{NFSU2_TR(0x75a89a);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75a89d:{NFSU2_TR(0x75a89d);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a89f:{NFSU2_TR(0x75a89f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B75a8a1:{NFSU2_TR(0x75a8a1);
__builtin_memmove((R+28),(R+24),4);
}
B75a8a3:{NFSU2_TR(0x75a8a3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a8a5:{NFSU2_TR(0x75a8a5);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a8a7:{NFSU2_TR(0x75a8a7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a8a9:{NFSU2_TR(0x75a8a9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a8ab:{NFSU2_TR(0x75a8ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a8af:{NFSU2_TR(0x75a8af);
u8 U[12];
w4(U+0,u32(u32(u32(0x265e5a51ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a8b6:{NFSU2_TR(0x75a8b6);
__builtin_memmove((G+4),(R+28),4);
}
B75a8b8:{NFSU2_TR(0x75a8b8);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a8bb:{NFSU2_TR(0x75a8bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75a8be:{NFSU2_TR(0x75a8be);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75a8c0:{NFSU2_TR(0x75a8c0);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75a8c2:{NFSU2_TR(0x75a8c2);
__builtin_memmove((R+28),(R+24),4);
}
B75a8c4:{NFSU2_TR(0x75a8c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a8c6:{NFSU2_TR(0x75a8c6);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+0))));
}
B75a8c8:{NFSU2_TR(0x75a8c8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a8ca:{NFSU2_TR(0x75a8ca);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a8cc:{NFSU2_TR(0x75a8cc);
u8 U[12];
w4(U+0,u32(u32(u32(0xe9b6c7aaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a8d3:{NFSU2_TR(0x75a8d3);
__builtin_memmove((R+8),(R+28),4);
}
B75a8d5:{NFSU2_TR(0x75a8d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a8d8:{NFSU2_TR(0x75a8d8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a8db:{NFSU2_TR(0x75a8db);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a8dd:{NFSU2_TR(0x75a8dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a8e1:{NFSU2_TR(0x75a8e1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B75a8e3:{NFSU2_TR(0x75a8e3);
__builtin_memmove((R+28),(G+4),4);
}
B75a8e5:{NFSU2_TR(0x75a8e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a8e7:{NFSU2_TR(0x75a8e7);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a8e9:{NFSU2_TR(0x75a8e9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a8eb:{NFSU2_TR(0x75a8eb);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a8ed:{NFSU2_TR(0x75a8ed);
u8 U[12];
w4(U+0,u32(u32(u32(0xd62f105dull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a8f4:{NFSU2_TR(0x75a8f4);
__builtin_memmove((G+0),(R+28),4);
}
B75a8f6:{NFSU2_TR(0x75a8f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a8f9:{NFSU2_TR(0x75a8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a8fd:{NFSU2_TR(0x75a8fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75a900:{NFSU2_TR(0x75a900);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75a902:{NFSU2_TR(0x75a902);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B75a904:{NFSU2_TR(0x75a904);
__builtin_memmove((R+28),(R+8),4);
}
B75a906:{NFSU2_TR(0x75a906);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a908:{NFSU2_TR(0x75a908);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+4))));
}
B75a90a:{NFSU2_TR(0x75a90a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a90c:{NFSU2_TR(0x75a90c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a90e:{NFSU2_TR(0x75a90e);
u8 U[12];
w4(U+0,u32(u32(u32(0x2441453ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a915:{NFSU2_TR(0x75a915);
__builtin_memmove((R+24),(R+28),4);
}
B75a917:{NFSU2_TR(0x75a917);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a91a:{NFSU2_TR(0x75a91a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a91e:{NFSU2_TR(0x75a91e);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75a921:{NFSU2_TR(0x75a921);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a923:{NFSU2_TR(0x75a923);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B75a925:{NFSU2_TR(0x75a925);
__builtin_memmove((R+28),(R+24),4);
}
B75a927:{NFSU2_TR(0x75a927);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a929:{NFSU2_TR(0x75a929);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a92b:{NFSU2_TR(0x75a92b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a92d:{NFSU2_TR(0x75a92d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a92f:{NFSU2_TR(0x75a92f);
u8 U[12];
w4(U+0,u32(u32(u32(0xd8a1e681ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a936:{NFSU2_TR(0x75a936);
__builtin_memmove((G+4),(R+28),4);
}
B75a938:{NFSU2_TR(0x75a938);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a93b:{NFSU2_TR(0x75a93b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a93f:{NFSU2_TR(0x75a93f);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75a942:{NFSU2_TR(0x75a942);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75a944:{NFSU2_TR(0x75a944);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75a946:{NFSU2_TR(0x75a946);
__builtin_memmove((R+28),(R+24),4);
}
B75a948:{NFSU2_TR(0x75a948);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a94a:{NFSU2_TR(0x75a94a);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+0))));
}
B75a94c:{NFSU2_TR(0x75a94c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a94e:{NFSU2_TR(0x75a94e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a950:{NFSU2_TR(0x75a950);
u8 U[12];
w4(U+0,u32(u32(u32(0xe7d3fbc8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a957:{NFSU2_TR(0x75a957);
__builtin_memmove((R+8),(R+28),4);
}
B75a959:{NFSU2_TR(0x75a959);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a95d:{NFSU2_TR(0x75a95d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a960:{NFSU2_TR(0x75a960);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a963:{NFSU2_TR(0x75a963);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a965:{NFSU2_TR(0x75a965);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B75a967:{NFSU2_TR(0x75a967);
__builtin_memmove((R+28),(G+4),4);
}
B75a969:{NFSU2_TR(0x75a969);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a96b:{NFSU2_TR(0x75a96b);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a96d:{NFSU2_TR(0x75a96d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a96f:{NFSU2_TR(0x75a96f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a971:{NFSU2_TR(0x75a971);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a975:{NFSU2_TR(0x75a975);
u8 U[12];
w4(U+0,u32(u32(u32(0x21e1cde6ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a97c:{NFSU2_TR(0x75a97c);
__builtin_memmove((G+0),(R+28),4);
}
B75a97e:{NFSU2_TR(0x75a97e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a981:{NFSU2_TR(0x75a981);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75a984:{NFSU2_TR(0x75a984);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75a986:{NFSU2_TR(0x75a986);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B75a988:{NFSU2_TR(0x75a988);
__builtin_memmove((R+28),(R+8),4);
}
B75a98a:{NFSU2_TR(0x75a98a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a98c:{NFSU2_TR(0x75a98c);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+4))));
}
B75a98e:{NFSU2_TR(0x75a98e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a990:{NFSU2_TR(0x75a990);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a992:{NFSU2_TR(0x75a992);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a996:{NFSU2_TR(0x75a996);
u8 U[12];
w4(U+0,u32(u32(u32(0xc33707d6ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a99d:{NFSU2_TR(0x75a99d);
__builtin_memmove((R+24),(R+28),4);
}
B75a99f:{NFSU2_TR(0x75a99f);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a9a2:{NFSU2_TR(0x75a9a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75a9a5:{NFSU2_TR(0x75a9a5);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a9a7:{NFSU2_TR(0x75a9a7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B75a9a9:{NFSU2_TR(0x75a9a9);
__builtin_memmove((R+28),(R+24),4);
}
B75a9ab:{NFSU2_TR(0x75a9ab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a9ad:{NFSU2_TR(0x75a9ad);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a9af:{NFSU2_TR(0x75a9af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75a9b1:{NFSU2_TR(0x75a9b1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a9b3:{NFSU2_TR(0x75a9b3);
u8 U[12];
w4(U+0,u32(u32(u32(0xf4d50d87ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a9ba:{NFSU2_TR(0x75a9ba);
__builtin_memmove((G+4),(R+28),4);
}
B75a9bc:{NFSU2_TR(0x75a9bc);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a9bf:{NFSU2_TR(0x75a9bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a9c3:{NFSU2_TR(0x75a9c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75a9c6:{NFSU2_TR(0x75a9c6);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75a9c8:{NFSU2_TR(0x75a9c8);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75a9ca:{NFSU2_TR(0x75a9ca);
__builtin_memmove((R+28),(R+24),4);
}
B75a9cc:{NFSU2_TR(0x75a9cc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a9ce:{NFSU2_TR(0x75a9ce);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+0))));
}
B75a9d0:{NFSU2_TR(0x75a9d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a9d2:{NFSU2_TR(0x75a9d2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a9d4:{NFSU2_TR(0x75a9d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x455a14edull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a9db:{NFSU2_TR(0x75a9db);
__builtin_memmove((R+8),(R+28),4);
}
B75a9dd:{NFSU2_TR(0x75a9dd);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a9e0:{NFSU2_TR(0x75a9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a9e4:{NFSU2_TR(0x75a9e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a9e7:{NFSU2_TR(0x75a9e7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a9e9:{NFSU2_TR(0x75a9e9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B75a9eb:{NFSU2_TR(0x75a9eb);
__builtin_memmove((R+28),(G+4),4);
}
B75a9ed:{NFSU2_TR(0x75a9ed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a9ef:{NFSU2_TR(0x75a9ef);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a9f1:{NFSU2_TR(0x75a9f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75a9f3:{NFSU2_TR(0x75a9f3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a9f5:{NFSU2_TR(0x75a9f5);
u8 U[12];
w4(U+0,u32(u32(u32(0xa9e3e905ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a9fc:{NFSU2_TR(0x75a9fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa00:{NFSU2_TR(0x75aa00);
__builtin_memmove((G+0),(R+28),4);
}
B75aa02:{NFSU2_TR(0x75aa02);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aa05:{NFSU2_TR(0x75aa05);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75aa08:{NFSU2_TR(0x75aa08);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75aa0a:{NFSU2_TR(0x75aa0a);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B75aa0c:{NFSU2_TR(0x75aa0c);
__builtin_memmove((R+28),(R+8),4);
}
B75aa0e:{NFSU2_TR(0x75aa0e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75aa10:{NFSU2_TR(0x75aa10);
w4(R+28,u32(u32(r4(R+28))&u32(r4(G+4))));
}
B75aa12:{NFSU2_TR(0x75aa12);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75aa14:{NFSU2_TR(0x75aa14);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75aa16:{NFSU2_TR(0x75aa16);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa1a:{NFSU2_TR(0x75aa1a);
u8 U[12];
w4(U+0,u32(u32(u32(0xfcefa3f8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aa21:{NFSU2_TR(0x75aa21);
__builtin_memmove((R+24),(R+28),4);
}
B75aa23:{NFSU2_TR(0x75aa23);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aa26:{NFSU2_TR(0x75aa26);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75aa29:{NFSU2_TR(0x75aa29);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75aa2b:{NFSU2_TR(0x75aa2b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(G+0))));
}
B75aa2d:{NFSU2_TR(0x75aa2d);
__builtin_memmove((R+28),(R+24),4);
}
B75aa2f:{NFSU2_TR(0x75aa2f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75aa31:{NFSU2_TR(0x75aa31);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75aa33:{NFSU2_TR(0x75aa33);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75aa35:{NFSU2_TR(0x75aa35);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75aa37:{NFSU2_TR(0x75aa37);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa3b:{NFSU2_TR(0x75aa3b);
u8 U[12];
w4(U+0,u32(u32(u32(0x676f02d9ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B75aa42:{NFSU2_TR(0x75aa42);
__builtin_memmove((R+28),(G+4),4);
}
B75aa44:{NFSU2_TR(0x75aa44);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75aa47:{NFSU2_TR(0x75aa47);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75aa4a:{NFSU2_TR(0x75aa4a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+4))));
}
B75aa4c:{NFSU2_TR(0x75aa4c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B75aa4e:{NFSU2_TR(0x75aa4e);
__builtin_memmove((G+4),(R+24),4);
}
B75aa50:{NFSU2_TR(0x75aa50);
w4(G+4,u32(u32(r4(G+4))^u32(r4(R+28))));
}
B75aa52:{NFSU2_TR(0x75aa52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75aa56:{NFSU2_TR(0x75aa56);
w4(G+4,u32(u32(r4(G+4))&u32(r4(G+0))));
}
B75aa58:{NFSU2_TR(0x75aa58);
w4(G+4,u32(u32(r4(G+4))^u32(r4(R+24))));
}
B75aa5a:{NFSU2_TR(0x75aa5a);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
}
B75aa5c:{NFSU2_TR(0x75aa5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa60:{NFSU2_TR(0x75aa60);
u8 U[12];
w4(U+0,u32(u32(u32(0x8d2a4c8aull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B75aa67:{NFSU2_TR(0x75aa67);
__builtin_memmove((G+4),(R+8),4);
}
B75aa69:{NFSU2_TR(0x75aa69);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75aa6c:{NFSU2_TR(0x75aa6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75aa6f:{NFSU2_TR(0x75aa6f);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B75aa71:{NFSU2_TR(0x75aa71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75aa75:{NFSU2_TR(0x75aa75);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B75aa77:{NFSU2_TR(0x75aa77);
w4(R+8,u32(u32(r4(R+8))^u32(r4(G+4))));
}
B75aa79:{NFSU2_TR(0x75aa79);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B75aa7b:{NFSU2_TR(0x75aa7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa7f:{NFSU2_TR(0x75aa7f);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffa3942ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B75aa86:{NFSU2_TR(0x75aa86);
__builtin_memmove((G+0),(R+8),4);
}
B75aa88:{NFSU2_TR(0x75aa88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75aa8b:{NFSU2_TR(0x75aa8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75aa8e:{NFSU2_TR(0x75aa8e);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B75aa90:{NFSU2_TR(0x75aa90);
__builtin_memmove((R+8),(R+28),4);
}
B75aa92:{NFSU2_TR(0x75aa92);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75aa94:{NFSU2_TR(0x75aa94);
w4(R+8,u32(u32(r4(R+8))^u32(r4(G+4))));
}
B75aa96:{NFSU2_TR(0x75aa96);
w4(R+8,u32(u32(r4(R+8))^u32(r4(G+0))));
}
B75aa98:{NFSU2_TR(0x75aa98);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B75aa9a:{NFSU2_TR(0x75aa9a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8771f681ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75aaa1:{NFSU2_TR(0x75aaa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aaa5:{NFSU2_TR(0x75aaa5);
__builtin_memmove((R+8),(R+24),4);
}
B75aaa7:{NFSU2_TR(0x75aaa7);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75aaaa:{NFSU2_TR(0x75aaaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75aaad:{NFSU2_TR(0x75aaad);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B75aaaf:{NFSU2_TR(0x75aaaf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B75aab1:{NFSU2_TR(0x75aab1);
__builtin_memmove((R+24),(R+8),4);
}
B75aab3:{NFSU2_TR(0x75aab3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(G+4))));
}
B75aab5:{NFSU2_TR(0x75aab5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(G+0))));
}
B75aab7:{NFSU2_TR(0x75aab7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75aab9:{NFSU2_TR(0x75aab9);
u8 U[12];
w4(U+0,u32(u32(u32(0x6d9d6122ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aac0:{NFSU2_TR(0x75aac0);
__builtin_memmove((R+24),(R+28),4);
}
B75aac2:{NFSU2_TR(0x75aac2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aac5:{NFSU2_TR(0x75aac5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aac9:{NFSU2_TR(0x75aac9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75aacc:{NFSU2_TR(0x75aacc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75aace:{NFSU2_TR(0x75aace);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75aad0:{NFSU2_TR(0x75aad0);
__builtin_memmove((R+28),(R+8),4);
}
B75aad2:{NFSU2_TR(0x75aad2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75aad4:{NFSU2_TR(0x75aad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75aad8:{NFSU2_TR(0x75aad8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75aada:{NFSU2_TR(0x75aada);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75aadc:{NFSU2_TR(0x75aadc);
u8 U[12];
w4(U+0,u32(u32(u32(0xfde5380cull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aae3:{NFSU2_TR(0x75aae3);
__builtin_memmove((G+4),(R+28),4);
}
B75aae5:{NFSU2_TR(0x75aae5);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75aae8:{NFSU2_TR(0x75aae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aaec:{NFSU2_TR(0x75aaec);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75aaef:{NFSU2_TR(0x75aaef);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75aaf1:{NFSU2_TR(0x75aaf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75aaf5:{NFSU2_TR(0x75aaf5);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75aaf7:{NFSU2_TR(0x75aaf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75aaf9:{NFSU2_TR(0x75aaf9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75aafb:{NFSU2_TR(0x75aafb);
u8 U[12];
w4(U+0,u32(u32(u32(0xa4beea44ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab02:{NFSU2_TR(0x75ab02);
__builtin_memmove((G+0),(R+28),4);
}
B75ab04:{NFSU2_TR(0x75ab04);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab08:{NFSU2_TR(0x75ab08);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab0b:{NFSU2_TR(0x75ab0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75ab0e:{NFSU2_TR(0x75ab0e);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75ab10:{NFSU2_TR(0x75ab10);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75ab12:{NFSU2_TR(0x75ab12);
__builtin_memmove((R+28),(R+24),4);
}
B75ab14:{NFSU2_TR(0x75ab14);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ab16:{NFSU2_TR(0x75ab16);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ab18:{NFSU2_TR(0x75ab18);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab1a:{NFSU2_TR(0x75ab1a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4bdecfa9ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab21:{NFSU2_TR(0x75ab21);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab25:{NFSU2_TR(0x75ab25);
__builtin_memmove((R+8),(R+28),4);
}
B75ab27:{NFSU2_TR(0x75ab27);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab2a:{NFSU2_TR(0x75ab2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75ab2d:{NFSU2_TR(0x75ab2d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75ab2f:{NFSU2_TR(0x75ab2f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B75ab31:{NFSU2_TR(0x75ab31);
__builtin_memmove((R+28),(R+8),4);
}
B75ab33:{NFSU2_TR(0x75ab33);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ab35:{NFSU2_TR(0x75ab35);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ab37:{NFSU2_TR(0x75ab37);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab39:{NFSU2_TR(0x75ab39);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab3d:{NFSU2_TR(0x75ab3d);
u8 U[12];
w4(U+0,u32(u32(u32(0xf6bb4b60ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab44:{NFSU2_TR(0x75ab44);
__builtin_memmove((R+24),(R+28),4);
}
B75ab46:{NFSU2_TR(0x75ab46);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab49:{NFSU2_TR(0x75ab49);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75ab4c:{NFSU2_TR(0x75ab4c);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75ab4e:{NFSU2_TR(0x75ab4e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75ab50:{NFSU2_TR(0x75ab50);
__builtin_memmove((R+28),(R+8),4);
}
B75ab52:{NFSU2_TR(0x75ab52);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ab54:{NFSU2_TR(0x75ab54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ab58:{NFSU2_TR(0x75ab58);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ab5a:{NFSU2_TR(0x75ab5a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab5c:{NFSU2_TR(0x75ab5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab60:{NFSU2_TR(0x75ab60);
u8 U[12];
w4(U+0,u32(u32(u32(0xbebfbc70ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab67:{NFSU2_TR(0x75ab67);
__builtin_memmove((G+4),(R+28),4);
}
B75ab69:{NFSU2_TR(0x75ab69);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab6c:{NFSU2_TR(0x75ab6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75ab6f:{NFSU2_TR(0x75ab6f);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75ab71:{NFSU2_TR(0x75ab71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75ab75:{NFSU2_TR(0x75ab75);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75ab77:{NFSU2_TR(0x75ab77);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ab79:{NFSU2_TR(0x75ab79);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab7b:{NFSU2_TR(0x75ab7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x289b7ec6ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab82:{NFSU2_TR(0x75ab82);
__builtin_memmove((G+0),(R+28),4);
}
B75ab84:{NFSU2_TR(0x75ab84);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75ab87:{NFSU2_TR(0x75ab87);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab8a:{NFSU2_TR(0x75ab8a);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75ab8c:{NFSU2_TR(0x75ab8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab90:{NFSU2_TR(0x75ab90);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75ab92:{NFSU2_TR(0x75ab92);
__builtin_memmove((R+28),(R+24),4);
}
B75ab94:{NFSU2_TR(0x75ab94);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ab96:{NFSU2_TR(0x75ab96);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ab98:{NFSU2_TR(0x75ab98);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab9a:{NFSU2_TR(0x75ab9a);
u8 U[12];
w4(U+0,u32(u32(u32(0xeaa127faull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aba1:{NFSU2_TR(0x75aba1);
__builtin_memmove((R+8),(R+28),4);
}
B75aba3:{NFSU2_TR(0x75aba3);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aba6:{NFSU2_TR(0x75aba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75abaa:{NFSU2_TR(0x75abaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75abad:{NFSU2_TR(0x75abad);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75abaf:{NFSU2_TR(0x75abaf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B75abb1:{NFSU2_TR(0x75abb1);
__builtin_memmove((R+28),(R+8),4);
}
B75abb3:{NFSU2_TR(0x75abb3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75abb5:{NFSU2_TR(0x75abb5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75abb7:{NFSU2_TR(0x75abb7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75abb9:{NFSU2_TR(0x75abb9);
u8 U[12];
w4(U+0,u32(u32(u32(0xd4ef3085ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75abc0:{NFSU2_TR(0x75abc0);
__builtin_memmove((R+24),(R+28),4);
}
B75abc2:{NFSU2_TR(0x75abc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75abc5:{NFSU2_TR(0x75abc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75abc9:{NFSU2_TR(0x75abc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75abcc:{NFSU2_TR(0x75abcc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75abce:{NFSU2_TR(0x75abce);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75abd0:{NFSU2_TR(0x75abd0);
__builtin_memmove((R+28),(R+8),4);
}
B75abd2:{NFSU2_TR(0x75abd2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75abd4:{NFSU2_TR(0x75abd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75abd8:{NFSU2_TR(0x75abd8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75abda:{NFSU2_TR(0x75abda);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75abdc:{NFSU2_TR(0x75abdc);
u8 U[12];
w4(U+0,u32(u32(u32(0x4881d05ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75abe3:{NFSU2_TR(0x75abe3);
__builtin_memmove((G+4),(R+28),4);
}
B75abe5:{NFSU2_TR(0x75abe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75abe9:{NFSU2_TR(0x75abe9);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75abec:{NFSU2_TR(0x75abec);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75abef:{NFSU2_TR(0x75abef);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75abf1:{NFSU2_TR(0x75abf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75abf5:{NFSU2_TR(0x75abf5);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75abf7:{NFSU2_TR(0x75abf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75abf9:{NFSU2_TR(0x75abf9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75abfb:{NFSU2_TR(0x75abfb);
u8 U[12];
w4(U+0,u32(u32(u32(0xd9d4d039ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac02:{NFSU2_TR(0x75ac02);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ac06:{NFSU2_TR(0x75ac06);
__builtin_memmove((G+0),(R+28),4);
}
B75ac08:{NFSU2_TR(0x75ac08);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac0b:{NFSU2_TR(0x75ac0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75ac0e:{NFSU2_TR(0x75ac0e);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75ac10:{NFSU2_TR(0x75ac10);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75ac12:{NFSU2_TR(0x75ac12);
__builtin_memmove((R+28),(R+24),4);
}
B75ac14:{NFSU2_TR(0x75ac14);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ac16:{NFSU2_TR(0x75ac16);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ac18:{NFSU2_TR(0x75ac18);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ac1a:{NFSU2_TR(0x75ac1a);
u8 U[12];
w4(U+0,u32(u32(u32(0xe6db99e5ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac21:{NFSU2_TR(0x75ac21);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ac25:{NFSU2_TR(0x75ac25);
__builtin_memmove((R+8),(R+28),4);
}
B75ac27:{NFSU2_TR(0x75ac27);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac2a:{NFSU2_TR(0x75ac2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75ac2d:{NFSU2_TR(0x75ac2d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75ac2f:{NFSU2_TR(0x75ac2f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B75ac31:{NFSU2_TR(0x75ac31);
__builtin_memmove((R+28),(R+8),4);
}
B75ac33:{NFSU2_TR(0x75ac33);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ac35:{NFSU2_TR(0x75ac35);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ac37:{NFSU2_TR(0x75ac37);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ac39:{NFSU2_TR(0x75ac39);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ac3d:{NFSU2_TR(0x75ac3d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1fa27cf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac44:{NFSU2_TR(0x75ac44);
__builtin_memmove((R+24),(R+28),4);
}
B75ac46:{NFSU2_TR(0x75ac46);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac49:{NFSU2_TR(0x75ac49);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75ac4c:{NFSU2_TR(0x75ac4c);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75ac4e:{NFSU2_TR(0x75ac4e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75ac50:{NFSU2_TR(0x75ac50);
__builtin_memmove((R+28),(R+8),4);
}
B75ac52:{NFSU2_TR(0x75ac52);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ac54:{NFSU2_TR(0x75ac54);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ac56:{NFSU2_TR(0x75ac56);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ac58:{NFSU2_TR(0x75ac58);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ac5665ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac5f:{NFSU2_TR(0x75ac5f);
__builtin_memmove((G+4),(R+28),4);
}
B75ac61:{NFSU2_TR(0x75ac61);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac64:{NFSU2_TR(0x75ac64);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75ac67:{NFSU2_TR(0x75ac67);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75ac69:{NFSU2_TR(0x75ac69);
__builtin_memmove((R+28),(R+8),4);
}
B75ac6b:{NFSU2_TR(0x75ac6b);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75ac6d:{NFSU2_TR(0x75ac6d);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ac6f:{NFSU2_TR(0x75ac6f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+4))));
}
B75ac71:{NFSU2_TR(0x75ac71);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ac73:{NFSU2_TR(0x75ac73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B75ac77:{NFSU2_TR(0x75ac77);
u8 U[12];
w4(U+0,u32(u32(u32(0xf4292244ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac7e:{NFSU2_TR(0x75ac7e);
__builtin_memmove((G+0),(R+28),4);
}
B75ac80:{NFSU2_TR(0x75ac80);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac83:{NFSU2_TR(0x75ac83);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ac87:{NFSU2_TR(0x75ac87);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75ac8a:{NFSU2_TR(0x75ac8a);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75ac8c:{NFSU2_TR(0x75ac8c);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75ac8e:{NFSU2_TR(0x75ac8e);
__builtin_memmove((R+28),(R+24),4);
}
B75ac90:{NFSU2_TR(0x75ac90);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ac92:{NFSU2_TR(0x75ac92);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+0))));
}
B75ac94:{NFSU2_TR(0x75ac94);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ac96:{NFSU2_TR(0x75ac96);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ac98:{NFSU2_TR(0x75ac98);
u8 U[12];
w4(U+0,u32(u32(u32(0x432aff97ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac9f:{NFSU2_TR(0x75ac9f);
__builtin_memmove((R+8),(R+28),4);
}
B75aca1:{NFSU2_TR(0x75aca1);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aca4:{NFSU2_TR(0x75aca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aca8:{NFSU2_TR(0x75aca8);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75acab:{NFSU2_TR(0x75acab);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75acad:{NFSU2_TR(0x75acad);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B75acaf:{NFSU2_TR(0x75acaf);
__builtin_memmove((R+28),(G+4),4);
}
B75acb1:{NFSU2_TR(0x75acb1);
w4(R+28,u32(~u32(r4(R+28))));
}
B75acb3:{NFSU2_TR(0x75acb3);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B75acb5:{NFSU2_TR(0x75acb5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75acb7:{NFSU2_TR(0x75acb7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75acb9:{NFSU2_TR(0x75acb9);
u8 U[12];
w4(U+0,u32(u32(u32(0xab9423a7ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75acc0:{NFSU2_TR(0x75acc0);
__builtin_memmove((R+24),(R+28),4);
}
B75acc2:{NFSU2_TR(0x75acc2);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75acc5:{NFSU2_TR(0x75acc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75acc9:{NFSU2_TR(0x75acc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75accc:{NFSU2_TR(0x75accc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75acce:{NFSU2_TR(0x75acce);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75acd0:{NFSU2_TR(0x75acd0);
__builtin_memmove((R+28),(G+0),4);
}
B75acd2:{NFSU2_TR(0x75acd2);
w4(R+28,u32(~u32(r4(R+28))));
}
B75acd4:{NFSU2_TR(0x75acd4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B75acd6:{NFSU2_TR(0x75acd6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75acd8:{NFSU2_TR(0x75acd8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75acda:{NFSU2_TR(0x75acda);
u8 U[12];
w4(U+0,u32(u32(u32(0xfc93a039ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ace1:{NFSU2_TR(0x75ace1);
__builtin_memmove((G+4),(R+28),4);
}
B75ace3:{NFSU2_TR(0x75ace3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ace7:{NFSU2_TR(0x75ace7);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75acea:{NFSU2_TR(0x75acea);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75aced:{NFSU2_TR(0x75aced);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75acef:{NFSU2_TR(0x75acef);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75acf1:{NFSU2_TR(0x75acf1);
__builtin_memmove((R+28),(R+8),4);
}
B75acf3:{NFSU2_TR(0x75acf3);
w4(R+28,u32(~u32(r4(R+28))));
}
B75acf5:{NFSU2_TR(0x75acf5);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+4))));
}
B75acf7:{NFSU2_TR(0x75acf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75acf9:{NFSU2_TR(0x75acf9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75acfb:{NFSU2_TR(0x75acfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75acff:{NFSU2_TR(0x75acff);
u8 U[12];
w4(U+0,u32(u32(u32(0x655b59c3ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad06:{NFSU2_TR(0x75ad06);
__builtin_memmove((G+0),(R+28),4);
}
B75ad08:{NFSU2_TR(0x75ad08);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad0b:{NFSU2_TR(0x75ad0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75ad0e:{NFSU2_TR(0x75ad0e);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75ad10:{NFSU2_TR(0x75ad10);
__builtin_memmove((R+28),(R+24),4);
}
B75ad12:{NFSU2_TR(0x75ad12);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad14:{NFSU2_TR(0x75ad14);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75ad16:{NFSU2_TR(0x75ad16);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+0))));
}
B75ad18:{NFSU2_TR(0x75ad18);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ad1a:{NFSU2_TR(0x75ad1a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ad1c:{NFSU2_TR(0x75ad1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ad20:{NFSU2_TR(0x75ad20);
u8 U[12];
w4(U+0,u32(u32(u32(0x8f0ccc92ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad27:{NFSU2_TR(0x75ad27);
__builtin_memmove((R+8),(R+28),4);
}
B75ad29:{NFSU2_TR(0x75ad29);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad2c:{NFSU2_TR(0x75ad2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75ad2f:{NFSU2_TR(0x75ad2f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75ad31:{NFSU2_TR(0x75ad31);
__builtin_memmove((R+28),(G+4),4);
}
B75ad33:{NFSU2_TR(0x75ad33);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad35:{NFSU2_TR(0x75ad35);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B75ad37:{NFSU2_TR(0x75ad37);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B75ad39:{NFSU2_TR(0x75ad39);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ad3b:{NFSU2_TR(0x75ad3b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ad3d:{NFSU2_TR(0x75ad3d);
u8 U[12];
w4(U+0,u32(u32(u32(0xffeff47dull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad44:{NFSU2_TR(0x75ad44);
__builtin_memmove((R+24),(R+28),4);
}
B75ad46:{NFSU2_TR(0x75ad46);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75ad49:{NFSU2_TR(0x75ad49);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad4c:{NFSU2_TR(0x75ad4c);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75ad4e:{NFSU2_TR(0x75ad4e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75ad50:{NFSU2_TR(0x75ad50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ad54:{NFSU2_TR(0x75ad54);
__builtin_memmove((R+28),(G+0),4);
}
B75ad56:{NFSU2_TR(0x75ad56);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad58:{NFSU2_TR(0x75ad58);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B75ad5a:{NFSU2_TR(0x75ad5a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75ad5c:{NFSU2_TR(0x75ad5c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ad5e:{NFSU2_TR(0x75ad5e);
u8 U[12];
w4(U+0,u32(u32(u32(0x85845dd1ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad65:{NFSU2_TR(0x75ad65);
__builtin_memmove((G+4),(R+28),4);
}
B75ad67:{NFSU2_TR(0x75ad67);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad6a:{NFSU2_TR(0x75ad6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ad6e:{NFSU2_TR(0x75ad6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75ad71:{NFSU2_TR(0x75ad71);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75ad73:{NFSU2_TR(0x75ad73);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75ad75:{NFSU2_TR(0x75ad75);
__builtin_memmove((R+28),(R+8),4);
}
B75ad77:{NFSU2_TR(0x75ad77);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad79:{NFSU2_TR(0x75ad79);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+4))));
}
B75ad7b:{NFSU2_TR(0x75ad7b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ad7d:{NFSU2_TR(0x75ad7d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ad7f:{NFSU2_TR(0x75ad7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x6fa87e4full))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad86:{NFSU2_TR(0x75ad86);
__builtin_memmove((G+0),(R+28),4);
}
B75ad88:{NFSU2_TR(0x75ad88);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad8b:{NFSU2_TR(0x75ad8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ad8f:{NFSU2_TR(0x75ad8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75ad92:{NFSU2_TR(0x75ad92);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75ad94:{NFSU2_TR(0x75ad94);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75ad96:{NFSU2_TR(0x75ad96);
__builtin_memmove((R+28),(R+24),4);
}
B75ad98:{NFSU2_TR(0x75ad98);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad9a:{NFSU2_TR(0x75ad9a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+0))));
}
B75ad9c:{NFSU2_TR(0x75ad9c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ad9e:{NFSU2_TR(0x75ad9e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ada0:{NFSU2_TR(0x75ada0);
u8 U[12];
w4(U+0,u32(u32(u32(0xfe2ce6e0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ada7:{NFSU2_TR(0x75ada7);
__builtin_memmove((R+8),(R+28),4);
}
B75ada9:{NFSU2_TR(0x75ada9);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75adac:{NFSU2_TR(0x75adac);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75adb0:{NFSU2_TR(0x75adb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75adb3:{NFSU2_TR(0x75adb3);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75adb5:{NFSU2_TR(0x75adb5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B75adb7:{NFSU2_TR(0x75adb7);
__builtin_memmove((R+28),(G+4),4);
}
B75adb9:{NFSU2_TR(0x75adb9);
w4(R+28,u32(~u32(r4(R+28))));
}
B75adbb:{NFSU2_TR(0x75adbb);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B75adbd:{NFSU2_TR(0x75adbd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75adbf:{NFSU2_TR(0x75adbf);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75adc1:{NFSU2_TR(0x75adc1);
u8 U[12];
w4(U+0,u32(u32(u32(0xa3014314ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75adc8:{NFSU2_TR(0x75adc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75adcc:{NFSU2_TR(0x75adcc);
__builtin_memmove((R+24),(R+28),4);
}
B75adce:{NFSU2_TR(0x75adce);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75add1:{NFSU2_TR(0x75add1);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75add4:{NFSU2_TR(0x75add4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75add6:{NFSU2_TR(0x75add6);
__builtin_memmove((R+28),(G+0),4);
}
B75add8:{NFSU2_TR(0x75add8);
w4(R+28,u32(~u32(r4(R+28))));
}
B75adda:{NFSU2_TR(0x75adda);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75addc:{NFSU2_TR(0x75addc);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B75adde:{NFSU2_TR(0x75adde);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75ade0:{NFSU2_TR(0x75ade0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ade2:{NFSU2_TR(0x75ade2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ade6:{NFSU2_TR(0x75ade6);
u8 U[12];
w4(U+0,u32(u32(u32(0x4e0811a1ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aded:{NFSU2_TR(0x75aded);
__builtin_memmove((G+4),(R+28),4);
}
B75adef:{NFSU2_TR(0x75adef);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75adf2:{NFSU2_TR(0x75adf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B75adf5:{NFSU2_TR(0x75adf5);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+28))));
}
B75adf7:{NFSU2_TR(0x75adf7);
__builtin_memmove((R+28),(R+8),4);
}
B75adf9:{NFSU2_TR(0x75adf9);
w4(R+28,u32(~u32(r4(R+28))));
}
B75adfb:{NFSU2_TR(0x75adfb);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B75adfd:{NFSU2_TR(0x75adfd);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+4))));
}
B75adff:{NFSU2_TR(0x75adff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ae01:{NFSU2_TR(0x75ae01);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ae03:{NFSU2_TR(0x75ae03);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ae07:{NFSU2_TR(0x75ae07);
u8 U[12];
w4(U+0,u32(u32(u32(0xf7537e82ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ae0e:{NFSU2_TR(0x75ae0e);
__builtin_memmove((G+0),(R+28),4);
}
B75ae10:{NFSU2_TR(0x75ae10);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ae13:{NFSU2_TR(0x75ae13);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75ae16:{NFSU2_TR(0x75ae16);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+28))));
}
B75ae18:{NFSU2_TR(0x75ae18);
__builtin_memmove((R+28),(R+24),4);
}
B75ae1a:{NFSU2_TR(0x75ae1a);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ae1c:{NFSU2_TR(0x75ae1c);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B75ae1e:{NFSU2_TR(0x75ae1e);
w4(R+28,u32(u32(r4(R+28))|u32(r4(G+0))));
}
B75ae20:{NFSU2_TR(0x75ae20);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+4))));
}
B75ae22:{NFSU2_TR(0x75ae22);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ae24:{NFSU2_TR(0x75ae24);
u8 U[12];
w4(U+0,u32(u32(u32(0xbd3af235ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ae2b:{NFSU2_TR(0x75ae2b);
__builtin_memmove((R+8),(R+28),4);
}
B75ae2d:{NFSU2_TR(0x75ae2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75ae30:{NFSU2_TR(0x75ae30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ae34:{NFSU2_TR(0x75ae34);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ae37:{NFSU2_TR(0x75ae37);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75ae39:{NFSU2_TR(0x75ae39);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B75ae3b:{NFSU2_TR(0x75ae3b);
__builtin_memmove((R+28),(G+4),4);
}
B75ae3d:{NFSU2_TR(0x75ae3d);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ae3f:{NFSU2_TR(0x75ae3f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B75ae41:{NFSU2_TR(0x75ae41);
w4(R+28,u32(u32(r4(R+28))^u32(r4(G+0))));
}
B75ae43:{NFSU2_TR(0x75ae43);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ae45:{NFSU2_TR(0x75ae45);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ae49:{NFSU2_TR(0x75ae49);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ad7d2bbull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75ae50:{NFSU2_TR(0x75ae50);
__builtin_memmove((R+28),(R+24),4);
}
B75ae52:{NFSU2_TR(0x75ae52);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75ae55:{NFSU2_TR(0x75ae55);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75ae58:{NFSU2_TR(0x75ae58);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B75ae5a:{NFSU2_TR(0x75ae5a);
__builtin_memmove((R+24),(G+0),4);
}
B75ae5c:{NFSU2_TR(0x75ae5c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B75ae5e:{NFSU2_TR(0x75ae5e);
w4(R+24,u32(~u32(r4(R+24))));
}
B75ae60:{NFSU2_TR(0x75ae60);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75ae62:{NFSU2_TR(0x75ae62);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B75ae64:{NFSU2_TR(0x75ae64);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75ae66:{NFSU2_TR(0x75ae66);
u8 U[12];
w4(U+0,u32(u32(u32(0xeb86d391ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B75ae6d:{NFSU2_TR(0x75ae6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75ae71:{NFSU2_TR(0x75ae71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ae74:{NFSU2_TR(0x75ae74);
w4(R+20,u32(u32(r4(R+20))+u32(r4(G+0))));
}
B75ae76:{NFSU2_TR(0x75ae76);
__builtin_memmove((G+0),(G+4),4);
}
B75ae78:{NFSU2_TR(0x75ae78);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B75ae7b:{NFSU2_TR(0x75ae7b);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75ae7e:{NFSU2_TR(0x75ae7e);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B75ae80:{NFSU2_TR(0x75ae80);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+12))));
}
B75ae82:{NFSU2_TR(0x75ae82);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+28))));
}
B75ae84:{NFSU2_TR(0x75ae84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ae87:{NFSU2_TR(0x75ae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75ae8a:{NFSU2_TR(0x75ae8a);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+28))));
}
B75ae8c:{NFSU2_TR(0x75ae8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ae8f:{NFSU2_TR(0x75ae8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75ae92:{NFSU2_TR(0x75ae92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75ae93:{NFSU2_TR(0x75ae93);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B75ae95:{NFSU2_TR(0x75ae95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ae98:{NFSU2_TR(0x75ae98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ae9b:{NFSU2_TR(0x75ae9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75ae9c:{NFSU2_TR(0x75ae9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75ae9d:{NFSU2_TR(0x75ae9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75ae9e:{NFSU2_TR(0x75ae9e);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x44ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x44ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x44ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B75aea1:{NFSU2_TR(0x75aea1);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x75af29u)[[clang::musttail]] return blk_75af29(ARGS);if(t__==0x75af72u)[[clang::musttail]] return blk_75af72(ARGS);if(t__==0x75afb8u)[[clang::musttail]] return blk_75afb8(ARGS););}
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
PN u32 blk_75aeb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75aeb0:L75aeb0:{bud-=7;NFSU2_TR(0x75aeb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75aeb4:{NFSU2_TR(0x75aeb4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(G+0)),r4(U+0));
}
B75aeba:{NFSU2_TR(0x75aeba);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x67452301ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75aec1:{NFSU2_TR(0x75aec1);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w4(U+4,u32(0xefcdab89ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75aec8:{NFSU2_TR(0x75aec8);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
w4(U+4,u32(0x98badcfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B75aecf:{NFSU2_TR(0x75aecf);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x10325476ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75aed6:{NFSU2_TR(0x75aed6);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x7584e1u)[[clang::musttail]] return blk_7584e1(ARGS);if(t__==0x75867fu)[[clang::musttail]] return blk_75867f(ARGS);if(t__==0x758735u)[[clang::musttail]] return blk_758735(ARGS);if(t__==0x759cf5u)[[clang::musttail]] return blk_759cf5(ARGS););}
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
PN u32 blk_75aee0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75aee0:L75aee0:{bud-=7;NFSU2_TR(0x75aee0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B75aee4:{NFSU2_TR(0x75aee4);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75aee6:{NFSU2_TR(0x75aee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B75aeea:{NFSU2_TR(0x75aeea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75aeeb:{NFSU2_TR(0x75aeeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75aeec:{NFSU2_TR(0x75aeec);
__builtin_memmove((R+28),(G+0),4);
}
B75aeee:{NFSU2_TR(0x75aeee);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_75af01(ARGS);}}
}
B75aef0:L75aef0:{bud-=4;NFSU2_TR(0x75aef0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75aef2:{NFSU2_TR(0x75aef2);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B75aef4:{NFSU2_TR(0x75aef4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B75aef6:{NFSU2_TR(0x75aef6);
if(r1(F+6)){{[[clang::musttail]] return blk_75af01(ARGS);}}
{[[clang::musttail]] return blk_75aef8(ARGS);}
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
PN u32 blk_75aef8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75aef8:L75aef8:{bud-=4;NFSU2_TR(0x75aef8);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B75aefc:{NFSU2_TR(0x75aefc);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B75aefd:{NFSU2_TR(0x75aefd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B75aeff:{NFSU2_TR(0x75aeff);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75aef8u);}goto L75aef8;}}
{[[clang::musttail]] return blk_75af01(ARGS);}
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
PN u32 blk_75af01(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af01:L75af01:{bud-=5;NFSU2_TR(0x75af01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75af05:{NFSU2_TR(0x75af05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B75af07:{NFSU2_TR(0x75af07);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x3full))));
}
B75af0a:{NFSU2_TR(0x75af0a);
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
B75af0c:{NFSU2_TR(0x75af0c);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75af32(ARGS);}}
}
B75af0e:L75af0e:{bud-=2;NFSU2_TR(0x75af0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af0f:{NFSU2_TR(0x75af0f);
__builtin_memmove((R+12),(G+4),4);
{[[clang::musttail]] return blk_75af11(ARGS);}
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
PN u32 blk_75af11(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af11:L75af11:{bud-=9;NFSU2_TR(0x75af11);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((G+4),(U+0),1);
}
B75af13:{NFSU2_TR(0x75af13);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75af17:{NFSU2_TR(0x75af17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75af19:{NFSU2_TR(0x75af19);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B75af1a:{NFSU2_TR(0x75af1a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75af1b:{NFSU2_TR(0x75af1b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75af1c:{NFSU2_TR(0x75af1c);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+0,u8((r4(U+0))<(u32(0x40ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75af1f:{NFSU2_TR(0x75af1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75af21:{NFSU2_TR(0x75af21);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);[[clang::musttail]] return blk_75af2e(ARGS);}}
}
B75af23:L75af23:{bud-=2;NFSU2_TR(0x75af23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af24:{NFSU2_TR(0x75af24);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75af29ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x75a600u);}[[clang::musttail]] return blk_75a600(ARGS);}
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
PN u32 blk_75af29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af29:L75af29:{bud-=2;NFSU2_TR(0x75af29);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B75af2c:{NFSU2_TR(0x75af2c);
w1(F+0,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{__builtin_memcpy(R+512,F+0,1);[[clang::musttail]] return blk_75af2e(ARGS);}
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
PN u32 blk_75af2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af2e:L75af2e:{bud-=2;NFSU2_TR(0x75af2e);
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
B75af2f:{NFSU2_TR(0x75af2f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75af11u);}[[clang::musttail]] return blk_75af11(ARGS);}}
}
B75af31:L75af31:{bud-=1;NFSU2_TR(0x75af31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
{__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_75af32(ARGS);}
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
PN u32 blk_75af32(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af32:L75af32:{bud-=3;NFSU2_TR(0x75af32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75af33:{NFSU2_TR(0x75af33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75af34:{NFSU2_TR(0x75af34);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_PRED(t_,if(t__==0x7584f9u)[[clang::musttail]] return blk_7584f9(ARGS);if(t__==0x758514u)[[clang::musttail]] return blk_758514(ARGS);if(t__==0x758525u)[[clang::musttail]] return blk_758525(ARGS);if(t__==0x758697u)[[clang::musttail]] return blk_758697(ARGS););}
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
PN u32 blk_75af40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af40:L75af40:{bud-=12;NFSU2_TR(0x75af40);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af41:{NFSU2_TR(0x75af41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af42:{NFSU2_TR(0x75af42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af43:{NFSU2_TR(0x75af43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af44:{NFSU2_TR(0x75af44);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75af48:{NFSU2_TR(0x75af48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B75af4a:{NFSU2_TR(0x75af4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af4b:{NFSU2_TR(0x75af4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75af4f:{NFSU2_TR(0x75af4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75af57:{NFSU2_TR(0x75af57);
w1(R+12,u8(0x80ull));
}
B75af59:{NFSU2_TR(0x75af59);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x3full))));
}
B75af5c:{NFSU2_TR(0x75af5c);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_75af60(ARGS);}
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
PN u32 blk_75af60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af60:L75af60:{bud-=5;NFSU2_TR(0x75af60);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75af64:{NFSU2_TR(0x75af64);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B75af65:{NFSU2_TR(0x75af65);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B75af67:{NFSU2_TR(0x75af67);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75af6a:{NFSU2_TR(0x75af6a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_75af79(ARGS);}}
}
B75af6c:L75af6c:{bud-=2;NFSU2_TR(0x75af6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af6d:{NFSU2_TR(0x75af6d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75af72ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x75a600u);}[[clang::musttail]] return blk_75a600(ARGS);}
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
PN u32 blk_75af72(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af72:L75af72:{bud-=3;NFSU2_TR(0x75af72);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B75af75:{NFSU2_TR(0x75af75);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B75af77:{NFSU2_TR(0x75af77);
{if(__builtin_expect(bud<=0,0)){EXIT(0x75af60u);}[[clang::musttail]] return blk_75af60(ARGS);}
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
PN u32 blk_75af79(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75af79:L75af79:{bud-=2;NFSU2_TR(0x75af79);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x38ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B75af7c:{NFSU2_TR(0x75af7c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x75af60u);}[[clang::musttail]] return blk_75af60(ARGS);}}
}
B75af7e:L75af7e:{bud-=20;NFSU2_TR(0x75af7e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((G+0),(U+0),1);
}
B75af80:{NFSU2_TR(0x75af80);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w1(G+0,shl<u8>(r1(G+0),u64(r4(U+0))));
}
B75af83:{NFSU2_TR(0x75af83);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75af86:{NFSU2_TR(0x75af86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B75af88:{NFSU2_TR(0x75af88);
__builtin_memmove((G+4),(G+0),4);
}
B75af8a:{NFSU2_TR(0x75af8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75af8d:{NFSU2_TR(0x75af8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75af90:{NFSU2_TR(0x75af90);
__builtin_memmove((R+8),(G+0),4);
}
B75af92:{NFSU2_TR(0x75af92);
__builtin_memmove((G+4),(G+0),4);
}
B75af94:{NFSU2_TR(0x75af94);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75af97:{NFSU2_TR(0x75af97);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B75af9a:{NFSU2_TR(0x75af9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+0))));
}
B75af9d:{NFSU2_TR(0x75af9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B75af9e:{NFSU2_TR(0x75af9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75afa1:{NFSU2_TR(0x75afa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4full))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75afa4:{NFSU2_TR(0x75afa4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(G+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75afa7:{NFSU2_TR(0x75afa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75afab:{NFSU2_TR(0x75afab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75afaf:{NFSU2_TR(0x75afaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x53ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75afb3:{NFSU2_TR(0x75afb3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x75afb8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x75a600u);}[[clang::musttail]] return blk_75a600(ARGS);}
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
PN u32 blk_75afb8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75afb8:L75afb8:{bud-=4;NFSU2_TR(0x75afb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75afbc:{NFSU2_TR(0x75afbc);
__builtin_memmove((R+20),gp(0x819c50),4);
}
B75afc2:{NFSU2_TR(0x75afc2);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B75afc5:{NFSU2_TR(0x75afc5);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
{[[clang::musttail]] return blk_75afc7(ARGS);}
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
PN u32 blk_75afc7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75afc7:L75afc7:{bud-=2;NFSU2_TR(0x75afc7);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x3ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B75afca:{NFSU2_TR(0x75afca);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_75afd7(ARGS);}}
}
B75afcc:L75afcc:{bud-=4;NFSU2_TR(0x75afcc);
__builtin_memmove((G+0),(G+4),4);
}
B75afce:{NFSU2_TR(0x75afce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B75afd1:{NFSU2_TR(0x75afd1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B75afd5:{NFSU2_TR(0x75afd5);
{[[clang::musttail]] return blk_75afdb(ARGS);}
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
PN u32 blk_75afd7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75afd7:L75afd7:{bud-=1;NFSU2_TR(0x75afd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_75afdb(ARGS);}
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
PN u32 blk_75afdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75afdb:L75afdb:{bud-=2;NFSU2_TR(0x75afdb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x21ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x21ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75afde:{NFSU2_TR(0x75afde);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_75affa(ARGS);}}
}
B75afe0:L75afe0:{bud-=11;NFSU2_TR(0x75afe0);
__builtin_memmove((R+12),(G+0),4);
}
B75afe2:{NFSU2_TR(0x75afe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B75afe5:{NFSU2_TR(0x75afe5);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B75afe8:{NFSU2_TR(0x75afe8);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B75afeb:{NFSU2_TR(0x75afeb);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75afed:{NFSU2_TR(0x75afed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75afee:{NFSU2_TR(0x75afee);
__builtin_memmove((R+12),(G+0),4);
}
B75aff0:{NFSU2_TR(0x75aff0);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B75aff3:{NFSU2_TR(0x75aff3);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B75aff6:{NFSU2_TR(0x75aff6);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75aff8:{NFSU2_TR(0x75aff8);
{[[clang::musttail]] return blk_75b000(ARGS);}
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
PN u32 blk_75affa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_PRED(T,P) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){if(g_speed_predict){P}[[clang::musttail]] return ent_dispatch(ARGS);}if(bud>0&&g_native_hook){[[clang::musttail]] return ent_native(ARGS);}nx=t__;goto XIT;}while(0)
#define TAIL_DYNAMIC(T) TAIL_PRED(T,)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B75affa:L75affa:{bud-=2;NFSU2_TR(0x75affa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75affc:{NFSU2_TR(0x75affc);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_75b001(ARGS);}}
}
B75affe:L75affe:{bud-=1;NFSU2_TR(0x75affe);
u8 U[1];
__builtin_memmove((U+0),(G+0),1);
s1(u32(r4(R+28)),r1(U+0));
{[[clang::musttail]] return blk_75b000(ARGS);}
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
PN u32 ent_75a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x75a002:[[clang::musttail]] return blk_75a002(c,a4,a0,a1,bud);
case 0x75a00d:[[clang::musttail]] return blk_75a00d(c,a4,a0,a1,bud);
case 0x75a01a:[[clang::musttail]] return blk_75a01a(c,a4,a0,a1,bud);
case 0x75a034:[[clang::musttail]] return blk_75a034(c,a4,a0,a1,bud);
case 0x75a03d:[[clang::musttail]] return blk_75a03d(c,a4,a0,a1,bud);
case 0x75a056:[[clang::musttail]] return blk_75a056(c,a4,a0,a1,bud);
case 0x75a059:[[clang::musttail]] return blk_75a059(c,a4,a0,a1,bud);
case 0x75a060:[[clang::musttail]] return blk_75a060(c,a4,a0,a1,bud);
case 0x75a0aa:[[clang::musttail]] return blk_75a0aa(c,a4,a0,a1,bud);
case 0x75a0b5:[[clang::musttail]] return blk_75a0b5(c,a4,a0,a1,bud);
case 0x75a0c2:[[clang::musttail]] return blk_75a0c2(c,a4,a0,a1,bud);
case 0x75a0e4:[[clang::musttail]] return blk_75a0e4(c,a4,a0,a1,bud);
case 0x75a0f8:[[clang::musttail]] return blk_75a0f8(c,a4,a0,a1,bud);
case 0x75a0fa:[[clang::musttail]] return blk_75a0fa(c,a4,a0,a1,bud);
case 0x75a0ff:[[clang::musttail]] return blk_75a0ff(c,a4,a0,a1,bud);
case 0x75a101:[[clang::musttail]] return blk_75a101(c,a4,a0,a1,bud);
case 0x75a134:[[clang::musttail]] return blk_75a134(c,a4,a0,a1,bud);
case 0x75a155:[[clang::musttail]] return blk_75a155(c,a4,a0,a1,bud);
case 0x75a15a:[[clang::musttail]] return blk_75a15a(c,a4,a0,a1,bud);
case 0x75a172:[[clang::musttail]] return blk_75a172(c,a4,a0,a1,bud);
case 0x75a174:[[clang::musttail]] return blk_75a174(c,a4,a0,a1,bud);
case 0x75a180:[[clang::musttail]] return blk_75a180(c,a4,a0,a1,bud);
case 0x75a1a4:[[clang::musttail]] return blk_75a1a4(c,a4,a0,a1,bud);
case 0x75a1c9:[[clang::musttail]] return blk_75a1c9(c,a4,a0,a1,bud);
case 0x75a1cb:[[clang::musttail]] return blk_75a1cb(c,a4,a0,a1,bud);
case 0x75a1d0:[[clang::musttail]] return blk_75a1d0(c,a4,a0,a1,bud);
case 0x75a1e5:[[clang::musttail]] return blk_75a1e5(c,a4,a0,a1,bud);
case 0x75a1e7:[[clang::musttail]] return blk_75a1e7(c,a4,a0,a1,bud);
case 0x75a1f7:[[clang::musttail]] return blk_75a1f7(c,a4,a0,a1,bud);
case 0x75a1f9:[[clang::musttail]] return blk_75a1f9(c,a4,a0,a1,bud);
case 0x75a210:[[clang::musttail]] return blk_75a210(c,a4,a0,a1,bud);
case 0x75a242:[[clang::musttail]] return blk_75a242(c,a4,a0,a1,bud);
case 0x75a253:[[clang::musttail]] return blk_75a253(c,a4,a0,a1,bud);
case 0x75a256:[[clang::musttail]] return blk_75a256(c,a4,a0,a1,bud);
case 0x75a260:[[clang::musttail]] return blk_75a260(c,a4,a0,a1,bud);
case 0x75a27d:[[clang::musttail]] return blk_75a27d(c,a4,a0,a1,bud);
case 0x75a287:[[clang::musttail]] return blk_75a287(c,a4,a0,a1,bud);
case 0x75a290:[[clang::musttail]] return blk_75a290(c,a4,a0,a1,bud);
case 0x75a2c7:[[clang::musttail]] return blk_75a2c7(c,a4,a0,a1,bud);
case 0x75a2cb:[[clang::musttail]] return blk_75a2cb(c,a4,a0,a1,bud);
case 0x75a2d7:[[clang::musttail]] return blk_75a2d7(c,a4,a0,a1,bud);
case 0x75a2ed:[[clang::musttail]] return blk_75a2ed(c,a4,a0,a1,bud);
case 0x75a2fe:[[clang::musttail]] return blk_75a2fe(c,a4,a0,a1,bud);
case 0x75a310:[[clang::musttail]] return blk_75a310(c,a4,a0,a1,bud);
case 0x75a312:[[clang::musttail]] return blk_75a312(c,a4,a0,a1,bud);
case 0x75a327:[[clang::musttail]] return blk_75a327(c,a4,a0,a1,bud);
case 0x75a32b:[[clang::musttail]] return blk_75a32b(c,a4,a0,a1,bud);
case 0x75a336:[[clang::musttail]] return blk_75a336(c,a4,a0,a1,bud);
case 0x75a340:[[clang::musttail]] return blk_75a340(c,a4,a0,a1,bud);
case 0x75a35d:[[clang::musttail]] return blk_75a35d(c,a4,a0,a1,bud);
case 0x75a361:[[clang::musttail]] return blk_75a361(c,a4,a0,a1,bud);
case 0x75a370:[[clang::musttail]] return blk_75a370(c,a4,a0,a1,bud);
case 0x75a380:[[clang::musttail]] return blk_75a380(c,a4,a0,a1,bud);
case 0x75a390:[[clang::musttail]] return blk_75a390(c,a4,a0,a1,bud);
case 0x75a3bf:[[clang::musttail]] return blk_75a3bf(c,a4,a0,a1,bud);
case 0x75a3c3:[[clang::musttail]] return blk_75a3c3(c,a4,a0,a1,bud);
case 0x75a3ce:[[clang::musttail]] return blk_75a3ce(c,a4,a0,a1,bud);
case 0x75a3de:[[clang::musttail]] return blk_75a3de(c,a4,a0,a1,bud);
case 0x75a3ed:[[clang::musttail]] return blk_75a3ed(c,a4,a0,a1,bud);
case 0x75a3f1:[[clang::musttail]] return blk_75a3f1(c,a4,a0,a1,bud);
case 0x75a3fd:[[clang::musttail]] return blk_75a3fd(c,a4,a0,a1,bud);
case 0x75a410:[[clang::musttail]] return blk_75a410(c,a4,a0,a1,bud);
case 0x75a427:[[clang::musttail]] return blk_75a427(c,a4,a0,a1,bud);
case 0x75a430:[[clang::musttail]] return blk_75a430(c,a4,a0,a1,bud);
case 0x75a441:[[clang::musttail]] return blk_75a441(c,a4,a0,a1,bud);
case 0x75a451:[[clang::musttail]] return blk_75a451(c,a4,a0,a1,bud);
case 0x75a4a0:[[clang::musttail]] return blk_75a4a0(c,a4,a0,a1,bud);
case 0x75a4b0:[[clang::musttail]] return blk_75a4b0(c,a4,a0,a1,bud);
case 0x75a584:[[clang::musttail]] return blk_75a584(c,a4,a0,a1,bud);
case 0x75a590:[[clang::musttail]] return blk_75a590(c,a4,a0,a1,bud);
case 0x75a5b0:[[clang::musttail]] return blk_75a5b0(c,a4,a0,a1,bud);
case 0x75a5f1:[[clang::musttail]] return blk_75a5f1(c,a4,a0,a1,bud);
case 0x75a600:[[clang::musttail]] return blk_75a600(c,a4,a0,a1,bud);
case 0x75a613:[[clang::musttail]] return blk_75a613(c,a4,a0,a1,bud);
case 0x75aeb0:[[clang::musttail]] return blk_75aeb0(c,a4,a0,a1,bud);
case 0x75aee0:[[clang::musttail]] return blk_75aee0(c,a4,a0,a1,bud);
case 0x75aef8:[[clang::musttail]] return blk_75aef8(c,a4,a0,a1,bud);
case 0x75af01:[[clang::musttail]] return blk_75af01(c,a4,a0,a1,bud);
case 0x75af11:[[clang::musttail]] return blk_75af11(c,a4,a0,a1,bud);
case 0x75af29:[[clang::musttail]] return blk_75af29(c,a4,a0,a1,bud);
case 0x75af2e:[[clang::musttail]] return blk_75af2e(c,a4,a0,a1,bud);
case 0x75af32:[[clang::musttail]] return blk_75af32(c,a4,a0,a1,bud);
case 0x75af40:[[clang::musttail]] return blk_75af40(c,a4,a0,a1,bud);
case 0x75af60:[[clang::musttail]] return blk_75af60(c,a4,a0,a1,bud);
case 0x75af72:[[clang::musttail]] return blk_75af72(c,a4,a0,a1,bud);
case 0x75af79:[[clang::musttail]] return blk_75af79(c,a4,a0,a1,bud);
case 0x75afb8:[[clang::musttail]] return blk_75afb8(c,a4,a0,a1,bud);
case 0x75afc7:[[clang::musttail]] return blk_75afc7(c,a4,a0,a1,bud);
case 0x75afd7:[[clang::musttail]] return blk_75afd7(c,a4,a0,a1,bud);
case 0x75afdb:[[clang::musttail]] return blk_75afdb(c,a4,a0,a1,bud);
case 0x75affa:[[clang::musttail]] return blk_75affa(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_75a(Cpu& c){u8* R=c.regs.data();return ent_75a(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
