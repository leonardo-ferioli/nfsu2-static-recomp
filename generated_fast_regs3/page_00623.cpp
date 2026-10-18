#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_433cd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_434190(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_434460(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_434550(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43c7c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_488e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48d860(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bae90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60c850(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60c8f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623033(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623035(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623080(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6230db(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623100(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623126(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623141(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623180(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623188(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62318c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62318f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623212(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623268(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62326d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6232a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6232a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6232d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6232d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62332b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623332(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623339(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623374(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62339f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6233b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6233e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6233ea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6233fb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62342f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623441(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623492(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6234ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62355a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623a99(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623adc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623ae2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623e0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624436(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6244a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_630d1b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623061(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62314b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62315a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6231ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6231cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6231f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623234(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62324e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623286(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6232b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6232ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623320(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62334a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623359(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623384(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6233c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6233d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62340b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62344b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62347e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6234d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62350c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623568(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62357d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623584(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623598(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6235c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6235fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623673(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623a3c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623a4b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623a60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623ac2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623e09(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_623003(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623003:L623003:{bud-=4;NFSU2_TR(0x623003);
w4(R+24,u32(u32(r4(R+24))|u32(r4(G+0))));
}
B623005:{NFSU2_TR(0x623005);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623007:{NFSU2_TR(0x623007);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62300e:{NFSU2_TR(0x62300e);
if(r1(F+6)){{[[clang::musttail]] return blk_623033(ARGS);}}
}
B623010:L623010:{bud-=3;NFSU2_TR(0x623010);
__builtin_memmove((G+0),gp(0x8036e8),4);
}
B623015:{NFSU2_TR(0x623015);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623017:{NFSU2_TR(0x623017);
if(r1(F+6)){{[[clang::musttail]] return blk_623033(ARGS);}}
}
B623019:L623019:{bud-=5;NFSU2_TR(0x623019);
{u32 ea_=u32(r4(G+4)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62301f:{NFSU2_TR(0x62301f);
{u32 ea_=u32(u32(8403252u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B623025:{NFSU2_TR(0x623025);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B623027:{NFSU2_TR(0x623027);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B62302a:{NFSU2_TR(0x62302a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_623033(ARGS);}}
}
B62302c:L62302c:{bud-=2;NFSU2_TR(0x62302c);
w4(G+0,u32(0x1ull));
}
B623031:{NFSU2_TR(0x623031);
{[[clang::musttail]] return blk_623035(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623033(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623033:L623033:{bud-=1;NFSU2_TR(0x623033);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_623035(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623035(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623035:L623035:{bud-=10;NFSU2_TR(0x623035);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B62303c:{NFSU2_TR(0x62303c);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B62303e:{NFSU2_TR(0x62303e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B623040:{NFSU2_TR(0x623040);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B623042:{NFSU2_TR(0x623042);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B623049:{NFSU2_TR(0x623049);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62304d:{NFSU2_TR(0x62304d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B623051:{NFSU2_TR(0x623051);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B623058:{NFSU2_TR(0x623058);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62305f:{NFSU2_TR(0x62305f);
{[[clang::musttail]] return blk_623080(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623061(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623061:L623061:{bud-=4;NFSU2_TR(0x623061);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B623065:{NFSU2_TR(0x623065);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B623067:{NFSU2_TR(0x623067);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62306e:{NFSU2_TR(0x62306e);
{[[clang::musttail]] return blk_623080(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623070:L623070:{bud-=2;NFSU2_TR(0x623070);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B623074:{NFSU2_TR(0x623074);
{[[clang::musttail]] return blk_623080(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623080(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623080:L623080:{bud-=9;NFSU2_TR(0x623080);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B623083:{NFSU2_TR(0x623083);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62308a:{NFSU2_TR(0x62308a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B62308d:{NFSU2_TR(0x62308d);
u8 U[12];
w4(U+0,u32(u32(u32(0x17a8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B623094:{NFSU2_TR(0x623094);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62309b:{NFSU2_TR(0x62309b);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6230a2:{NFSU2_TR(0x6230a2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+8))==(u32(0x0ull))));
}
B6230a5:{NFSU2_TR(0x6230a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6230ac:{NFSU2_TR(0x6230ac);
if(r1(F+6)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B6230b2:L6230b2:{bud-=5;NFSU2_TR(0x6230b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6230b6:{NFSU2_TR(0x6230b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B6230b9:{NFSU2_TR(0x6230b9);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6230bb:{NFSU2_TR(0x6230bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6230bf:{NFSU2_TR(0x6230bf);
if(r1(F+6)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B6230c5:L6230c5:{bud-=3;NFSU2_TR(0x6230c5);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffdull))));
__builtin_memmove((G+0),(U+0),4);
}
B6230c8:{NFSU2_TR(0x6230c8);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x2bull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x2bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2bull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6230cb:{NFSU2_TR(0x6230cb);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6230db(ARGS);}}
}
B6230cd:L6230cd:{bud-=2;NFSU2_TR(0x6230cd);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x630d2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+0,u32(r1(U+4)));
}
B6230d4:{NFSU2_TR(0x6230d4);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x630d24ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
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
PN u32 blk_6230db(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6230db:L6230db:{bud-=6;NFSU2_TR(0x6230db);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6230df:{NFSU2_TR(0x6230df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6230e2:{NFSU2_TR(0x6230e2);
u8 U[13];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B6230ea:{NFSU2_TR(0x6230ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6230f2:{NFSU2_TR(0x6230f2);
w4(G+0,u32(0x8036a4ull));
}
B6230f7:{NFSU2_TR(0x6230f7);
{[[clang::musttail]] return blk_623100(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623100(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623100:L623100:{bud-=3;NFSU2_TR(0x623100);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623107:{NFSU2_TR(0x623107);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(G+4))));
w1(F+6,u8((r4(U+8))==(u32(0x0ull))));
}
B623109:{NFSU2_TR(0x623109);
if(r1(F+6)){{[[clang::musttail]] return blk_623141(ARGS);}}
}
B62310b:L62310b:{bud-=6;NFSU2_TR(0x62310b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62310f:{NFSU2_TR(0x62310f);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B623110:{NFSU2_TR(0x623110);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B623113:{NFSU2_TR(0x623113);
u8 U[4];
w1(F+11,sborrow<u32>(r4(G+0),u32(0x803704ull)));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0x803704ull))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B623118:{NFSU2_TR(0x623118);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62311c:{NFSU2_TR(0x62311c);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x623100u);}goto L623100;}}
}
B62311e:L62311e:{bud-=1;NFSU2_TR(0x62311e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_623126(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623126(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623126:L623126:{bud-=4;NFSU2_TR(0x623126);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62312d:{NFSU2_TR(0x62312d);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B62312e:{NFSU2_TR(0x62312e);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x19ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B623131:{NFSU2_TR(0x623131);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_62318c(ARGS);}}
}
B623133:L623133:{bud-=2;NFSU2_TR(0x623133);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x630d98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B62313a:{NFSU2_TR(0x62313a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x630d58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
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
PN u32 blk_623141(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623141:L623141:{bud-=3;NFSU2_TR(0x623141);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623145:{NFSU2_TR(0x623145);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B623149:{NFSU2_TR(0x623149);
{if(__builtin_expect(bud<=0,0)){EXIT(0x623126u);}[[clang::musttail]] return blk_623126(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62314b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62314b:L62314b:{bud-=5;NFSU2_TR(0x62314b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62314f:{NFSU2_TR(0x62314f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623152:{NFSU2_TR(0x623152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B623154:{NFSU2_TR(0x623154);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623155:{NFSU2_TR(0x623155);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62315aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60c850u);}[[clang::musttail]] return blk_60c850(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62315a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62315a:L62315a:{bud-=3;NFSU2_TR(0x62315a);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B62315d:{NFSU2_TR(0x62315d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62315f:{NFSU2_TR(0x62315f);
if(r1(F+6)){{[[clang::musttail]] return blk_623180(ARGS);}}
}
B623161:L623161:{bud-=3;NFSU2_TR(0x623161);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x5acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623167:{NFSU2_TR(0x623167);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623169:{NFSU2_TR(0x623169);
if(r1(F+6)){{[[clang::musttail]] return blk_623180(ARGS);}}
}
B62316b:L62316b:{bud-=4;NFSU2_TR(0x62316b);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B62316e:{NFSU2_TR(0x62316e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(G+4,shr<u8>(r1(G+4),u64(r4(U+0))));
}
B623171:{NFSU2_TR(0x623171);
u8 U[1];
w1(F+11,u8(0x0ull));
w1(U+0,u8(u32(r1(G+4))&u32(r1(G+4))));
w1(F+7,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B623173:{NFSU2_TR(0x623173);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_623180(ARGS);}}
}
B623175:L623175:{bud-=3;NFSU2_TR(0x623175);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62317c:{NFSU2_TR(0x62317c);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62317e:{NFSU2_TR(0x62317e);
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_623188(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623180(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623180:L623180:{bud-=1;NFSU2_TR(0x623180);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,1);[[clang::musttail]] return blk_623188(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623188(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623188:L623188:{bud-=1;NFSU2_TR(0x623188);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62318c(ARGS);}}
}
B62318a:L62318a:{bud-=1;NFSU2_TR(0x62318a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_62318c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62318c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62318c:L62318c:{bud-=1;NFSU2_TR(0x62318c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
{[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62318f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62318f:L62318f:{bud-=2;NFSU2_TR(0x62318f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623191:{NFSU2_TR(0x623191);
if(r1(F+6)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B623197:L623197:{bud-=5;NFSU2_TR(0x623197);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62319e:{NFSU2_TR(0x62319e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6231a2:{NFSU2_TR(0x6231a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6231a3:{NFSU2_TR(0x6231a3);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6231a8:{NFSU2_TR(0x6231a8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6231adull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6231ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6231ad:L6231ad:{bud-=7;NFSU2_TR(0x6231ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6231b4:{NFSU2_TR(0x6231b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6231b8:{NFSU2_TR(0x6231b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6231bf:{NFSU2_TR(0x6231bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B6231c2:{NFSU2_TR(0x6231c2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6231c3:{NFSU2_TR(0x6231c3);
u8 U[4];
w4(U+0,u32(0x471a1dcaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6231c8:{NFSU2_TR(0x6231c8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6231cdull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6231cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6231cd:L6231cd:{bud-=4;NFSU2_TR(0x6231cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6231d1:{NFSU2_TR(0x6231d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6231d7:{NFSU2_TR(0x6231d7);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6231d9:{NFSU2_TR(0x6231d9);
if(r1(F+6)){{[[clang::musttail]] return blk_62342f(ARGS);}}
}
B6231df:L6231df:{bud-=6;NFSU2_TR(0x6231df);
__builtin_memmove((G+0),(R+8),4);
}
B6231e1:{NFSU2_TR(0x6231e1);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x388ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6231e7:{NFSU2_TR(0x6231e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6231ee:{NFSU2_TR(0x6231ee);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6231ef:{NFSU2_TR(0x6231ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B6231f2:{NFSU2_TR(0x6231f2);
{[[clang::musttail]] return blk_623441(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6231f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6231f7:L6231f7:{bud-=4;NFSU2_TR(0x6231f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6231fb:{NFSU2_TR(0x6231fb);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623201:{NFSU2_TR(0x623201);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623203:{NFSU2_TR(0x623203);
if(r1(F+6)){{[[clang::musttail]] return blk_623212(ARGS);}}
}
B623205:L623205:{bud-=2;NFSU2_TR(0x623205);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x388ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62320b:{NFSU2_TR(0x62320b);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_623212(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623212(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623212:L623212:{bud-=4;NFSU2_TR(0x623212);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623219:{NFSU2_TR(0x623219);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B62321c:{NFSU2_TR(0x62321c);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62321e:{NFSU2_TR(0x62321e);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}}
}
B623224:L623224:{bud-=2;NFSU2_TR(0x623224);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B623229:{NFSU2_TR(0x623229);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B62322f:L62322f:{bud-=1;NFSU2_TR(0x62322f);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623234(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623234:L623234:{bud-=3;NFSU2_TR(0x623234);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62323b:{NFSU2_TR(0x62323b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62323d:{NFSU2_TR(0x62323d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6232a0(ARGS);}}
}
B62323f:L62323f:{bud-=3;NFSU2_TR(0x62323f);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623246:{NFSU2_TR(0x623246);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623248:{NFSU2_TR(0x623248);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6232a0(ARGS);}}
}
B62324a:L62324a:{bud-=2;NFSU2_TR(0x62324a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B62324c:{NFSU2_TR(0x62324c);
{[[clang::musttail]] return blk_6232a5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62324e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62324e:L62324e:{bud-=3;NFSU2_TR(0x62324e);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623255:{NFSU2_TR(0x623255);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623257:{NFSU2_TR(0x623257);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_623268(ARGS);}}
}
B623259:L623259:{bud-=3;NFSU2_TR(0x623259);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623260:{NFSU2_TR(0x623260);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623262:{NFSU2_TR(0x623262);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_623268(ARGS);}}
}
B623264:L623264:{bud-=2;NFSU2_TR(0x623264);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B623266:{NFSU2_TR(0x623266);
{[[clang::musttail]] return blk_62326d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623268(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623268:L623268:{bud-=1;NFSU2_TR(0x623268);
w4(R+8,u32(0x1ull));
{[[clang::musttail]] return blk_62326d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62326d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62326d:L62326d:{bud-=4;NFSU2_TR(0x62326d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623271:{NFSU2_TR(0x623271);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623273:{NFSU2_TR(0x623273);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62327b:{NFSU2_TR(0x62327b);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B623281:L623281:{bud-=1;NFSU2_TR(0x623281);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623286(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623286:L623286:{bud-=3;NFSU2_TR(0x623286);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62328d:{NFSU2_TR(0x62328d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62328f:{NFSU2_TR(0x62328f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6232a0(ARGS);}}
}
B623291:L623291:{bud-=3;NFSU2_TR(0x623291);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623298:{NFSU2_TR(0x623298);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62329a:{NFSU2_TR(0x62329a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6232a0(ARGS);}}
}
B62329c:L62329c:{bud-=2;NFSU2_TR(0x62329c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B62329e:{NFSU2_TR(0x62329e);
{[[clang::musttail]] return blk_6232a5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6232a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6232a0:L6232a0:{bud-=1;NFSU2_TR(0x6232a0);
w4(R+8,u32(0x1ull));
{[[clang::musttail]] return blk_6232a5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6232a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6232a5:L6232a5:{bud-=3;NFSU2_TR(0x6232a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6232a9:{NFSU2_TR(0x6232a9);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6232ab:{NFSU2_TR(0x6232ab);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B6232b1:L6232b1:{bud-=1;NFSU2_TR(0x6232b1);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6232b6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6232b6:L6232b6:{bud-=3;NFSU2_TR(0x6232b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6232bd:{NFSU2_TR(0x6232bd);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6232bf:{NFSU2_TR(0x6232bf);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6232d0(ARGS);}}
}
B6232c1:L6232c1:{bud-=3;NFSU2_TR(0x6232c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6232c8:{NFSU2_TR(0x6232c8);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6232ca:{NFSU2_TR(0x6232ca);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6232d0(ARGS);}}
}
B6232cc:L6232cc:{bud-=2;NFSU2_TR(0x6232cc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6232ce:{NFSU2_TR(0x6232ce);
{[[clang::musttail]] return blk_6232d5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6232d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6232d0:L6232d0:{bud-=1;NFSU2_TR(0x6232d0);
w4(R+8,u32(0x1ull));
{[[clang::musttail]] return blk_6232d5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6232d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6232d5:L6232d5:{bud-=4;NFSU2_TR(0x6232d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6232d9:{NFSU2_TR(0x6232d9);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6232db:{NFSU2_TR(0x6232db);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6232e3:{NFSU2_TR(0x6232e3);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B6232e9:L6232e9:{bud-=1;NFSU2_TR(0x6232e9);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6232ee(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6232ee:L6232ee:{bud-=3;NFSU2_TR(0x6232ee);
__builtin_memmove((G+0),gp(0x8a1bec),4);
}
B6232f3:{NFSU2_TR(0x6232f3);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6232f5:{NFSU2_TR(0x6232f5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B6232fb:L6232fb:{bud-=3;NFSU2_TR(0x6232fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623302:{NFSU2_TR(0x623302);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623304:{NFSU2_TR(0x623304);
if(r1(F+6)){{[[clang::musttail]] return blk_623332(ARGS);}}
}
B623306:L623306:{bud-=3;NFSU2_TR(0x623306);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62330d:{NFSU2_TR(0x62330d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62330f:{NFSU2_TR(0x62330f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62332b(ARGS);}}
}
B623311:L623311:{bud-=5;NFSU2_TR(0x623311);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623315:{NFSU2_TR(0x623315);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623318:{NFSU2_TR(0x623318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B62331a:{NFSU2_TR(0x62331a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62331b:{NFSU2_TR(0x62331b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623320ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60c8f0u);}[[clang::musttail]] return blk_60c8f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623320(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623320:L623320:{bud-=3;NFSU2_TR(0x623320);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B623323:{NFSU2_TR(0x623323);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623325:{NFSU2_TR(0x623325);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62332b(ARGS);}}
}
B623327:L623327:{bud-=2;NFSU2_TR(0x623327);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B623329:{NFSU2_TR(0x623329);
{[[clang::musttail]] return blk_623339(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62332b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62332b:L62332b:{bud-=2;NFSU2_TR(0x62332b);
w4(R+8,u32(0x1ull));
}
B623330:{NFSU2_TR(0x623330);
{[[clang::musttail]] return blk_623339(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623332(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623332:L623332:{bud-=1;NFSU2_TR(0x623332);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_623339(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623339(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623339:L623339:{bud-=3;NFSU2_TR(0x623339);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62333d:{NFSU2_TR(0x62333d);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62333f:{NFSU2_TR(0x62333f);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B623345:L623345:{bud-=1;NFSU2_TR(0x623345);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62334a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62334a:L62334a:{bud-=3;NFSU2_TR(0x62334a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62334e:{NFSU2_TR(0x62334e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623354:{NFSU2_TR(0x623354);
{[[clang::musttail]] return blk_6233ea(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623359(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623359:L623359:{bud-=4;NFSU2_TR(0x623359);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62335d:{NFSU2_TR(0x62335d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623363:{NFSU2_TR(0x623363);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623365:{NFSU2_TR(0x623365);
if(r1(F+6)){{[[clang::musttail]] return blk_623374(ARGS);}}
}
B623367:L623367:{bud-=2;NFSU2_TR(0x623367);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x388ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62336d:{NFSU2_TR(0x62336d);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_623374(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623374(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623374:L623374:{bud-=2;NFSU2_TR(0x623374);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B623379:{NFSU2_TR(0x623379);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B62337f:L62337f:{bud-=1;NFSU2_TR(0x62337f);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623384(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623384:L623384:{bud-=4;NFSU2_TR(0x623384);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623388:{NFSU2_TR(0x623388);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62338e:{NFSU2_TR(0x62338e);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623390:{NFSU2_TR(0x623390);
if(r1(F+6)){{[[clang::musttail]] return blk_62339f(ARGS);}}
}
B623392:L623392:{bud-=2;NFSU2_TR(0x623392);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x388ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B623398:{NFSU2_TR(0x623398);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_62339f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62339f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62339f:L62339f:{bud-=4;NFSU2_TR(0x62339f);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6233a6:{NFSU2_TR(0x6233a6);
w4(R+8,u32(0x1ull));
}
B6233ab:{NFSU2_TR(0x6233ab);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6233ad:{NFSU2_TR(0x6233ad);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6233b9(ARGS);}}
}
B6233af:L6233af:{bud-=3;NFSU2_TR(0x6233af);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6233b3:{NFSU2_TR(0x6233b3);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6233b5:{NFSU2_TR(0x6233b5);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6233b9(ARGS);}}
}
B6233b7:L6233b7:{bud-=1;NFSU2_TR(0x6233b7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_6233b9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6233b9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6233b9:L6233b9:{bud-=2;NFSU2_TR(0x6233b9);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6233be:{NFSU2_TR(0x6233be);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B6233c4:L6233c4:{bud-=1;NFSU2_TR(0x6233c4);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6233c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6233c9:L6233c9:{bud-=2;NFSU2_TR(0x6233c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6233d0:{NFSU2_TR(0x6233d0);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6233d5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6233d5:L6233d5:{bud-=3;NFSU2_TR(0x6233d5);
__builtin_memmove((G+0),gp(0x8a1bec),4);
}
B6233da:{NFSU2_TR(0x6233da);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6233dc:{NFSU2_TR(0x6233dc);
if(r1(F+6)){{[[clang::musttail]] return blk_6233e0(ARGS);}}
}
B6233de:L6233de:{bud-=1;NFSU2_TR(0x6233de);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_6233e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6233e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6233e0:L6233e0:{bud-=2;NFSU2_TR(0x6233e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6233e4:{NFSU2_TR(0x6233e4);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_6233ea(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6233ea(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6233ea:L6233ea:{bud-=2;NFSU2_TR(0x6233ea);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6233ec:{NFSU2_TR(0x6233ec);
if(r1(F+6)){{[[clang::musttail]] return blk_6233fb(ARGS);}}
}
B6233ee:L6233ee:{bud-=2;NFSU2_TR(0x6233ee);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x388ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6233f4:{NFSU2_TR(0x6233f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6233fb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6233fb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6233fb:L6233fb:{bud-=2;NFSU2_TR(0x6233fb);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B623400:{NFSU2_TR(0x623400);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6244a5(ARGS);}}
}
B623406:L623406:{bud-=1;NFSU2_TR(0x623406);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62340b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62340b:L62340b:{bud-=4;NFSU2_TR(0x62340b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62340f:{NFSU2_TR(0x62340f);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623415:{NFSU2_TR(0x623415);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623417:{NFSU2_TR(0x623417);
if(r1(F+6)){{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}}
}
B62341d:L62341d:{bud-=3;NFSU2_TR(0x62341d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x388ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623423:{NFSU2_TR(0x623423);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62342a:{NFSU2_TR(0x62342a);
{if(__builtin_expect(bud<=0,0)){EXIT(0x62318fu);}[[clang::musttail]] return blk_62318f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62342f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62342f:L62342f:{bud-=4;NFSU2_TR(0x62342f);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623436:{NFSU2_TR(0x623436);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62343d:{NFSU2_TR(0x62343d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B623440:{NFSU2_TR(0x623440);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_623441(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623441(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623441:L623441:{bud-=2;NFSU2_TR(0x623441);
u8 U[4];
w4(U+0,u32(0xa7366ae6ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623446:{NFSU2_TR(0x623446);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62344bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48d860u);}[[clang::musttail]] return blk_48d860(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62344b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62344b:L62344b:{bud-=7;NFSU2_TR(0x62344b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623452:{NFSU2_TR(0x623452);
__builtin_memmove((R+8),gp(0x8a1cdc),4);
}
B623458:{NFSU2_TR(0x623458);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(G+4,u32(s32(s8(r1(U+8)))));
}
B62345c:{NFSU2_TR(0x62345c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623463:{NFSU2_TR(0x623463);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x36ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B623466:{NFSU2_TR(0x623466);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62346d:{NFSU2_TR(0x62346d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_623492(ARGS);}}
}
B62346f:L62346f:{bud-=5;NFSU2_TR(0x62346f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B623473:{NFSU2_TR(0x623473);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623476:{NFSU2_TR(0x623476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B623478:{NFSU2_TR(0x623478);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623479:{NFSU2_TR(0x623479);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62347eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60c8f0u);}[[clang::musttail]] return blk_60c8f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62347e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62347e:L62347e:{bud-=3;NFSU2_TR(0x62347e);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B623481:{NFSU2_TR(0x623481);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B623483:{NFSU2_TR(0x623483);
if(r1(F+6)){{[[clang::musttail]] return blk_6234ae(ARGS);}}
}
B623485:L623485:{bud-=2;NFSU2_TR(0x623485);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B623490:{NFSU2_TR(0x623490);
{[[clang::musttail]] return blk_6234ae(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623492(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623492:L623492:{bud-=2;NFSU2_TR(0x623492);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B623495:{NFSU2_TR(0x623495);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6234ae(ARGS);}}
}
B623497:L623497:{bud-=4;NFSU2_TR(0x623497);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62349b:{NFSU2_TR(0x62349b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62349e:{NFSU2_TR(0x62349e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8ull))));
w1(F+6,u8((r4(U+8))==(u32(0x0ull))));
}
B6234a1:{NFSU2_TR(0x6234a1);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6234ae(ARGS);}}
}
B6234a3:L6234a3:{bud-=1;NFSU2_TR(0x6234a3);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6234ae(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6234ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6234ae:L6234ae:{bud-=4;NFSU2_TR(0x6234ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6234b2:{NFSU2_TR(0x6234b2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6234b8:{NFSU2_TR(0x6234b8);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6234ba:{NFSU2_TR(0x6234ba);
if(r1(F+6)){{[[clang::musttail]] return blk_624436(ARGS);}}
}
B6234c0:L6234c0:{bud-=6;NFSU2_TR(0x6234c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6234c7:{NFSU2_TR(0x6234c7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6234ca:{NFSU2_TR(0x6234ca);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6234d0:{NFSU2_TR(0x6234d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6234d1:{NFSU2_TR(0x6234d1);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6234d2:{NFSU2_TR(0x6234d2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6234d7ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x433cd0u);}[[clang::musttail]] return blk_433cd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6234d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6234d7:L6234d7:{bud-=3;NFSU2_TR(0x6234d7);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B6234da:{NFSU2_TR(0x6234da);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6234dd:{NFSU2_TR(0x6234dd);
if(r1(F+6)){{[[clang::musttail]] return blk_624436(ARGS);}}
}
B6234e3:L6234e3:{bud-=4;NFSU2_TR(0x6234e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6234e7:{NFSU2_TR(0x6234e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6234ed:{NFSU2_TR(0x6234ed);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6234ef:{NFSU2_TR(0x6234ef);
if(r1(F+6)){{[[clang::musttail]] return blk_624436(ARGS);}}
}
B6234f5:L6234f5:{bud-=6;NFSU2_TR(0x6234f5);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6234fc:{NFSU2_TR(0x6234fc);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6234ff:{NFSU2_TR(0x6234ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623505:{NFSU2_TR(0x623505);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623506:{NFSU2_TR(0x623506);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623507:{NFSU2_TR(0x623507);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62350cull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x433cd0u);}[[clang::musttail]] return blk_433cd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62350c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62350c:L62350c:{bud-=3;NFSU2_TR(0x62350c);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B62350f:{NFSU2_TR(0x62350f);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B623512:{NFSU2_TR(0x623512);
if(r1(F+6)){{[[clang::musttail]] return blk_624436(ARGS);}}
}
B623518:L623518:{bud-=2;NFSU2_TR(0x623518);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B62351b:{NFSU2_TR(0x62351b);
if(r1(F+6)){{[[clang::musttail]] return blk_624436(ARGS);}}
}
B623521:L623521:{bud-=4;NFSU2_TR(0x623521);
u8 U[22];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(u32(0xeull))));
w1(F+11,sborrow<u32>(r4(U+14),u32(0xeull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xeull))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B623529:{NFSU2_TR(0x623529);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623530:{NFSU2_TR(0x623530);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B623537:{NFSU2_TR(0x623537);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_62355a(ARGS);}}
}
B623539:L623539:{bud-=4;NFSU2_TR(0x623539);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62353d:{NFSU2_TR(0x62353d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B623540:{NFSU2_TR(0x623540);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(F+0,u8((r4(U+10))<(u32(0x8ull))));
w1(F+11,sborrow<u32>(r4(U+10),u32(0x8ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x8ull))));
w1(F+7,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+9))==(u8(0x0ull))));
}
B623543:{NFSU2_TR(0x623543);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_62355a(ARGS);}}
}
B623545:L623545:{bud-=3;NFSU2_TR(0x623545);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2d48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B62354b:{NFSU2_TR(0x62354b);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+4))&u32(r1(G+4))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B62354d:{NFSU2_TR(0x62354d);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_62355a(ARGS);}}
}
B62354f:L62354f:{bud-=1;NFSU2_TR(0x62354f);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_62355a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62355a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62355a:L62355a:{bud-=4;NFSU2_TR(0x62355a);
u8 U[4];
w4(U+0,u32(u32(u32(0x7a0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B623561:{NFSU2_TR(0x623561);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623562:{NFSU2_TR(0x623562);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623563:{NFSU2_TR(0x623563);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623568ull));
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
PN u32 blk_623568(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623568:L623568:{bud-=5;NFSU2_TR(0x623568);
u8 U[4];
w4(U+0,u32(u32(u32(0x7a8ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62356f:{NFSU2_TR(0x62356f);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623570:{NFSU2_TR(0x623570);
u8 U[4];
w4(U+0,u32(u32(u32(0x7acull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B623577:{NFSU2_TR(0x623577);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623578:{NFSU2_TR(0x623578);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62357dull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c7c0u);}[[clang::musttail]] return blk_43c7c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62357d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62357d:L62357d:{bud-=2;NFSU2_TR(0x62357d);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62357f:{NFSU2_TR(0x62357f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623584ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x401e30u);}[[clang::musttail]] return blk_401e30(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623584(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623584:L623584:{bud-=4;NFSU2_TR(0x623584);
__builtin_memmove((R+24),(G+0),4);
}
B623586:{NFSU2_TR(0x623586);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
}
B623589:{NFSU2_TR(0x623589);
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
B62358b:{NFSU2_TR(0x62358b);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_630d1b(ARGS);}}
}
B623591:L623591:{bud-=3;NFSU2_TR(0x623591);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623592:{NFSU2_TR(0x623592);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623593:{NFSU2_TR(0x623593);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623598ull));
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
PN u32 blk_623598(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623598:L623598:{bud-=12;NFSU2_TR(0x623598);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62359f:{NFSU2_TR(0x62359f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6235a6:{NFSU2_TR(0x6235a6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6235a7:{NFSU2_TR(0x6235a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6235ab:{NFSU2_TR(0x6235ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x9dcull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6235b2:{NFSU2_TR(0x6235b2);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6235b3:{NFSU2_TR(0x6235b3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6235b9:{NFSU2_TR(0x6235b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6235ba:{NFSU2_TR(0x6235ba);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6235bd:{NFSU2_TR(0x6235bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6235c3:{NFSU2_TR(0x6235c3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6235c4:{NFSU2_TR(0x6235c4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6235c9ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x434460u);}[[clang::musttail]] return blk_434460(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6235c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6235c9:L6235c9:{bud-=12;NFSU2_TR(0x6235c9);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6235d0:{NFSU2_TR(0x6235d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6235d7:{NFSU2_TR(0x6235d7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6235d8:{NFSU2_TR(0x6235d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6235dc:{NFSU2_TR(0x6235dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3acull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6235e3:{NFSU2_TR(0x6235e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6235e4:{NFSU2_TR(0x6235e4);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6235ea:{NFSU2_TR(0x6235ea);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6235eb:{NFSU2_TR(0x6235eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6235ee:{NFSU2_TR(0x6235ee);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6235f4:{NFSU2_TR(0x6235f4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6235f5:{NFSU2_TR(0x6235f5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6235faull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x434190u);}[[clang::musttail]] return blk_434190(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6235fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6235fa:L6235fa:{bud-=18;NFSU2_TR(0x6235fa);
{u32 ea_=u32(r4(G+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623601:{NFSU2_TR(0x623601);
{u32 ea_=u32(r4(G+16)+u32(2600u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B623608:{NFSU2_TR(0x623608);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62360f:{NFSU2_TR(0x62360f);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x28ull))));
}
B623612:{NFSU2_TR(0x623612);
u8 U[4];
w4(U+0,u32(u32(u32(0x8b0ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B623619:{NFSU2_TR(0x623619);
{u32 ea_=u32(r4(G+16)+u32(2208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623620:{NFSU2_TR(0x623620);
{u32 ea_=u32(r4(G+16)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623627:{NFSU2_TR(0x623627);
u8 U[8];
w4(U+0,u32(u32(u32(0x3c0ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B623632:{NFSU2_TR(0x623632);
{u32 ea_=u32(r4(G+16)+u32(2564u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B623639:{NFSU2_TR(0x623639);
u8 U[8];
w4(U+0,u32(u32(u32(0x3c4ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B623644:{NFSU2_TR(0x623644);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623645:{NFSU2_TR(0x623645);
{u32 ea_=u32(r4(G+16)+u32(2216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62364c:{NFSU2_TR(0x62364c);
{u32 ea_=u32(r4(G+16)+u32(972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623653:{NFSU2_TR(0x623653);
u8 U[8];
w4(U+0,u32(u32(u32(0x3ccull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62365e:{NFSU2_TR(0x62365e);
{u32 ea_=u32(r4(G+16)+u32(2572u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B623665:{NFSU2_TR(0x623665);
{u32 ea_=u32(r4(G+16)+u32(2220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62366c:{NFSU2_TR(0x62366c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+4),(U+0),4);
}
B62366e:{NFSU2_TR(0x62366e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623673ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x488e80u);}[[clang::musttail]] return blk_488e80(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623673(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623673:L623673:{bud-=214;NFSU2_TR(0x623673);
{u32 ea_=u32(r4(G+16)+u32(2224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62367a:{NFSU2_TR(0x62367a);
{u32 ea_=u32(r4(G+16)+u32(2560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B623681:{NFSU2_TR(0x623681);
{u32 ea_=u32(r4(G+16)+u32(2176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623688:{NFSU2_TR(0x623688);
{u32 ea_=u32(r4(G+16)+u32(2228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62368f:{NFSU2_TR(0x62368f);
{u32 ea_=u32(r4(G+16)+u32(2564u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B623696:{NFSU2_TR(0x623696);
{u32 ea_=u32(r4(G+16)+u32(2180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62369d:{NFSU2_TR(0x62369d);
{u32 ea_=u32(r4(G+16)+u32(2232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6236a4:{NFSU2_TR(0x6236a4);
{u32 ea_=u32(r4(G+16)+u32(2568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6236ab:{NFSU2_TR(0x6236ab);
{u32 ea_=u32(r4(G+16)+u32(2184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6236b2:{NFSU2_TR(0x6236b2);
{u32 ea_=u32(r4(G+16)+u32(2176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6236b9:{NFSU2_TR(0x6236b9);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6236bb:{NFSU2_TR(0x6236bb);
{u32 ea_=u32(r4(G+16)+u32(2240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6236c2:{NFSU2_TR(0x6236c2);
{u32 ea_=u32(r4(G+16)+u32(2180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6236c9:{NFSU2_TR(0x6236c9);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6236cb:{NFSU2_TR(0x6236cb);
{u32 ea_=u32(r4(G+16)+u32(2244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6236d2:{NFSU2_TR(0x6236d2);
{u32 ea_=u32(r4(G+16)+u32(2184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6236d9:{NFSU2_TR(0x6236d9);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6236db:{NFSU2_TR(0x6236db);
{u32 ea_=u32(r4(G+16)+u32(2248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6236e2:{NFSU2_TR(0x6236e2);
{u32 ea_=u32(r4(G+16)+u32(1968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6236e9:{NFSU2_TR(0x6236e9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6236ec:{NFSU2_TR(0x6236ec);
{u32 ea_=u32(r4(G+16)+u32(1984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6236f3:{NFSU2_TR(0x6236f3);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6236f6:{NFSU2_TR(0x6236f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6236f8:{NFSU2_TR(0x6236f8);
{u32 ea_=u32(r4(G+16)+u32(2000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6236ff:{NFSU2_TR(0x6236ff);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623702:{NFSU2_TR(0x623702);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623704:{NFSU2_TR(0x623704);
{u32 ea_=u32(r4(G+16)+u32(1952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62370b:{NFSU2_TR(0x62370b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62370d:{NFSU2_TR(0x62370d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62370f:{NFSU2_TR(0x62370f);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623716:{NFSU2_TR(0x623716);
{u32 ea_=u32(r4(G+16)+u32(1972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62371d:{NFSU2_TR(0x62371d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623720:{NFSU2_TR(0x623720);
{u32 ea_=u32(r4(G+16)+u32(1988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623727:{NFSU2_TR(0x623727);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62372a:{NFSU2_TR(0x62372a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62372c:{NFSU2_TR(0x62372c);
{u32 ea_=u32(r4(G+16)+u32(2004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623733:{NFSU2_TR(0x623733);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623736:{NFSU2_TR(0x623736);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623738:{NFSU2_TR(0x623738);
{u32 ea_=u32(r4(G+16)+u32(1956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62373f:{NFSU2_TR(0x62373f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623741:{NFSU2_TR(0x623741);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623743:{NFSU2_TR(0x623743);
{u32 ea_=u32(r4(G+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62374a:{NFSU2_TR(0x62374a);
{u32 ea_=u32(r4(G+16)+u32(1976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623751:{NFSU2_TR(0x623751);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623754:{NFSU2_TR(0x623754);
{u32 ea_=u32(r4(G+16)+u32(1992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62375b:{NFSU2_TR(0x62375b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62375e:{NFSU2_TR(0x62375e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623760:{NFSU2_TR(0x623760);
{u32 ea_=u32(r4(G+16)+u32(2008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623767:{NFSU2_TR(0x623767);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62376a:{NFSU2_TR(0x62376a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62376c:{NFSU2_TR(0x62376c);
{u32 ea_=u32(r4(G+16)+u32(1960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623773:{NFSU2_TR(0x623773);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623775:{NFSU2_TR(0x623775);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623777:{NFSU2_TR(0x623777);
{u32 ea_=u32(r4(G+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62377e:{NFSU2_TR(0x62377e);
{u32 ea_=u32(r4(G+16)+u32(1996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623785:{NFSU2_TR(0x623785);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623788:{NFSU2_TR(0x623788);
{u32 ea_=u32(r4(G+16)+u32(2012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62378f:{NFSU2_TR(0x62378f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623792:{NFSU2_TR(0x623792);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623794:{NFSU2_TR(0x623794);
{u32 ea_=u32(r4(G+16)+u32(1980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62379b:{NFSU2_TR(0x62379b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62379e:{NFSU2_TR(0x62379e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6237a0:{NFSU2_TR(0x6237a0);
{u32 ea_=u32(r4(G+16)+u32(1964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6237a7:{NFSU2_TR(0x6237a7);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6237a9:{NFSU2_TR(0x6237a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6237ab:{NFSU2_TR(0x6237ab);
{u32 ea_=u32(r4(G+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6237b2:{NFSU2_TR(0x6237b2);
{u32 ea_=u32(r4(G+16)+u32(1968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6237b9:{NFSU2_TR(0x6237b9);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6237bc:{NFSU2_TR(0x6237bc);
{u32 ea_=u32(r4(G+16)+u32(1952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6237c3:{NFSU2_TR(0x6237c3);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6237c6:{NFSU2_TR(0x6237c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6237c8:{NFSU2_TR(0x6237c8);
{u32 ea_=u32(r4(G+16)+u32(1984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6237cf:{NFSU2_TR(0x6237cf);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6237d2:{NFSU2_TR(0x6237d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6237d4:{NFSU2_TR(0x6237d4);
{u32 ea_=u32(r4(G+16)+u32(2000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6237db:{NFSU2_TR(0x6237db);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6237de:{NFSU2_TR(0x6237de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6237e0:{NFSU2_TR(0x6237e0);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6237e7:{NFSU2_TR(0x6237e7);
{u32 ea_=u32(r4(G+16)+u32(1972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6237ee:{NFSU2_TR(0x6237ee);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6237f1:{NFSU2_TR(0x6237f1);
{u32 ea_=u32(r4(G+16)+u32(1956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6237f8:{NFSU2_TR(0x6237f8);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6237fb:{NFSU2_TR(0x6237fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6237fd:{NFSU2_TR(0x6237fd);
{u32 ea_=u32(r4(G+16)+u32(1988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623804:{NFSU2_TR(0x623804);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623807:{NFSU2_TR(0x623807);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623809:{NFSU2_TR(0x623809);
{u32 ea_=u32(r4(G+16)+u32(2004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623810:{NFSU2_TR(0x623810);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623813:{NFSU2_TR(0x623813);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623815:{NFSU2_TR(0x623815);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62381c:{NFSU2_TR(0x62381c);
{u32 ea_=u32(r4(G+16)+u32(1976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623823:{NFSU2_TR(0x623823);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623826:{NFSU2_TR(0x623826);
{u32 ea_=u32(r4(G+16)+u32(1960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62382d:{NFSU2_TR(0x62382d);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623830:{NFSU2_TR(0x623830);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623832:{NFSU2_TR(0x623832);
{u32 ea_=u32(r4(G+16)+u32(1992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623839:{NFSU2_TR(0x623839);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62383c:{NFSU2_TR(0x62383c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62383e:{NFSU2_TR(0x62383e);
{u32 ea_=u32(r4(G+16)+u32(2008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623845:{NFSU2_TR(0x623845);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623848:{NFSU2_TR(0x623848);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62384a:{NFSU2_TR(0x62384a);
{u32 ea_=u32(r4(G+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623851:{NFSU2_TR(0x623851);
{u32 ea_=u32(r4(G+16)+u32(1964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623858:{NFSU2_TR(0x623858);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62385b:{NFSU2_TR(0x62385b);
{u32 ea_=u32(r4(G+16)+u32(1996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623862:{NFSU2_TR(0x623862);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623865:{NFSU2_TR(0x623865);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623867:{NFSU2_TR(0x623867);
{u32 ea_=u32(r4(G+16)+u32(1980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62386e:{NFSU2_TR(0x62386e);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623871:{NFSU2_TR(0x623871);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623873:{NFSU2_TR(0x623873);
{u32 ea_=u32(r4(G+16)+u32(2012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62387a:{NFSU2_TR(0x62387a);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62387d:{NFSU2_TR(0x62387d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62387f:{NFSU2_TR(0x62387f);
{u32 ea_=u32(r4(G+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623886:{NFSU2_TR(0x623886);
{u32 ea_=u32(r4(G+16)+u32(1968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62388d:{NFSU2_TR(0x62388d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623890:{NFSU2_TR(0x623890);
{u32 ea_=u32(r4(G+16)+u32(1952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623897:{NFSU2_TR(0x623897);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62389a:{NFSU2_TR(0x62389a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62389c:{NFSU2_TR(0x62389c);
{u32 ea_=u32(r4(G+16)+u32(1984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6238a3:{NFSU2_TR(0x6238a3);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6238a6:{NFSU2_TR(0x6238a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6238a8:{NFSU2_TR(0x6238a8);
{u32 ea_=u32(r4(G+16)+u32(2000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6238af:{NFSU2_TR(0x6238af);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6238b2:{NFSU2_TR(0x6238b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6238b4:{NFSU2_TR(0x6238b4);
{u32 ea_=u32(r4(G+16)+u32(816u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6238bb:{NFSU2_TR(0x6238bb);
{u32 ea_=u32(r4(G+16)+u32(1972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6238c2:{NFSU2_TR(0x6238c2);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6238c5:{NFSU2_TR(0x6238c5);
{u32 ea_=u32(r4(G+16)+u32(1956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6238cc:{NFSU2_TR(0x6238cc);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6238cf:{NFSU2_TR(0x6238cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6238d1:{NFSU2_TR(0x6238d1);
{u32 ea_=u32(r4(G+16)+u32(1988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6238d8:{NFSU2_TR(0x6238d8);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6238db:{NFSU2_TR(0x6238db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6238dd:{NFSU2_TR(0x6238dd);
{u32 ea_=u32(r4(G+16)+u32(2004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6238e4:{NFSU2_TR(0x6238e4);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6238e7:{NFSU2_TR(0x6238e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6238e9:{NFSU2_TR(0x6238e9);
{u32 ea_=u32(r4(G+16)+u32(820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6238f0:{NFSU2_TR(0x6238f0);
{u32 ea_=u32(r4(G+16)+u32(1976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6238f7:{NFSU2_TR(0x6238f7);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6238fa:{NFSU2_TR(0x6238fa);
{u32 ea_=u32(r4(G+16)+u32(1960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623901:{NFSU2_TR(0x623901);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623904:{NFSU2_TR(0x623904);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623906:{NFSU2_TR(0x623906);
{u32 ea_=u32(r4(G+16)+u32(1992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62390d:{NFSU2_TR(0x62390d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623910:{NFSU2_TR(0x623910);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623912:{NFSU2_TR(0x623912);
{u32 ea_=u32(r4(G+16)+u32(2008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623919:{NFSU2_TR(0x623919);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62391c:{NFSU2_TR(0x62391c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62391e:{NFSU2_TR(0x62391e);
{u32 ea_=u32(r4(G+16)+u32(824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623925:{NFSU2_TR(0x623925);
{u32 ea_=u32(r4(G+16)+u32(1964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62392c:{NFSU2_TR(0x62392c);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62392f:{NFSU2_TR(0x62392f);
{u32 ea_=u32(r4(G+16)+u32(1996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623936:{NFSU2_TR(0x623936);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623939:{NFSU2_TR(0x623939);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62393b:{NFSU2_TR(0x62393b);
{u32 ea_=u32(r4(G+16)+u32(1980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623942:{NFSU2_TR(0x623942);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623945:{NFSU2_TR(0x623945);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623947:{NFSU2_TR(0x623947);
{u32 ea_=u32(r4(G+16)+u32(2012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62394e:{NFSU2_TR(0x62394e);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623951:{NFSU2_TR(0x623951);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623953:{NFSU2_TR(0x623953);
{u32 ea_=u32(r4(G+16)+u32(828u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62395a:{NFSU2_TR(0x62395a);
{u32 ea_=u32(r4(G+16)+u32(1968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623961:{NFSU2_TR(0x623961);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623964:{NFSU2_TR(0x623964);
{u32 ea_=u32(r4(G+16)+u32(1952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62396b:{NFSU2_TR(0x62396b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62396e:{NFSU2_TR(0x62396e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623970:{NFSU2_TR(0x623970);
{u32 ea_=u32(r4(G+16)+u32(1984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623977:{NFSU2_TR(0x623977);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62397a:{NFSU2_TR(0x62397a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62397c:{NFSU2_TR(0x62397c);
{u32 ea_=u32(r4(G+16)+u32(2000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623983:{NFSU2_TR(0x623983);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623986:{NFSU2_TR(0x623986);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623988:{NFSU2_TR(0x623988);
{u32 ea_=u32(r4(G+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62398f:{NFSU2_TR(0x62398f);
{u32 ea_=u32(r4(G+16)+u32(1972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623996:{NFSU2_TR(0x623996);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623999:{NFSU2_TR(0x623999);
{u32 ea_=u32(r4(G+16)+u32(1956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6239a0:{NFSU2_TR(0x6239a0);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6239a3:{NFSU2_TR(0x6239a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6239a5:{NFSU2_TR(0x6239a5);
{u32 ea_=u32(r4(G+16)+u32(1988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6239ac:{NFSU2_TR(0x6239ac);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6239af:{NFSU2_TR(0x6239af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6239b1:{NFSU2_TR(0x6239b1);
{u32 ea_=u32(r4(G+16)+u32(2004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6239b8:{NFSU2_TR(0x6239b8);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6239bb:{NFSU2_TR(0x6239bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6239bd:{NFSU2_TR(0x6239bd);
{u32 ea_=u32(r4(G+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6239c4:{NFSU2_TR(0x6239c4);
{u32 ea_=u32(r4(G+16)+u32(1976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6239cb:{NFSU2_TR(0x6239cb);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6239ce:{NFSU2_TR(0x6239ce);
{u32 ea_=u32(r4(G+16)+u32(1960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6239d5:{NFSU2_TR(0x6239d5);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6239d8:{NFSU2_TR(0x6239d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6239da:{NFSU2_TR(0x6239da);
{u32 ea_=u32(r4(G+16)+u32(1992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6239e1:{NFSU2_TR(0x6239e1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6239e4:{NFSU2_TR(0x6239e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6239e6:{NFSU2_TR(0x6239e6);
{u32 ea_=u32(r4(G+16)+u32(2008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6239ed:{NFSU2_TR(0x6239ed);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6239f0:{NFSU2_TR(0x6239f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6239f2:{NFSU2_TR(0x6239f2);
{u32 ea_=u32(r4(G+16)+u32(840u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6239f9:{NFSU2_TR(0x6239f9);
{u32 ea_=u32(r4(G+16)+u32(1964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623a00:{NFSU2_TR(0x623a00);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623a03:{NFSU2_TR(0x623a03);
{u32 ea_=u32(r4(G+16)+u32(1996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623a0a:{NFSU2_TR(0x623a0a);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623a0d:{NFSU2_TR(0x623a0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623a0f:{NFSU2_TR(0x623a0f);
{u32 ea_=u32(r4(G+16)+u32(1980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623a16:{NFSU2_TR(0x623a16);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623a19:{NFSU2_TR(0x623a19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623a1b:{NFSU2_TR(0x623a1b);
{u32 ea_=u32(r4(G+16)+u32(2012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623a22:{NFSU2_TR(0x623a22);
u8 U[4];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B623a29:{NFSU2_TR(0x623a29);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623a2c:{NFSU2_TR(0x623a2c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623a2d:{NFSU2_TR(0x623a2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623a2e:{NFSU2_TR(0x623a2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623a30:{NFSU2_TR(0x623a30);
{u32 ea_=u32(r4(G+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623a37:{NFSU2_TR(0x623a37);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623a3cull));
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
PN u32 blk_623a3c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623a3c:L623a3c:{bud-=5;NFSU2_TR(0x623a3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x888ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B623a43:{NFSU2_TR(0x623a43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623a44:{NFSU2_TR(0x623a44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623a45:{NFSU2_TR(0x623a45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623a46:{NFSU2_TR(0x623a46);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623a4bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bae90u);}[[clang::musttail]] return blk_5bae90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623a4b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623a4b:L623a4b:{bud-=5;NFSU2_TR(0x623a4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x9e4ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B623a52:{NFSU2_TR(0x623a52);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623a53:{NFSU2_TR(0x623a53);
u8 U[4];
w4(U+0,u32(u32(u32(0x728ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B623a5a:{NFSU2_TR(0x623a5a);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623a5b:{NFSU2_TR(0x623a5b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623a60ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x43c7c0u);}[[clang::musttail]] return blk_43c7c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623a60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623a60:L623a60:{bud-=7;NFSU2_TR(0x623a60);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623a67:{NFSU2_TR(0x623a67);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x1cull))));
}
B623a6a:{NFSU2_TR(0x623a6a);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x2ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B623a6d:{NFSU2_TR(0x623a6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x748ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B623a78:{NFSU2_TR(0x623a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x744ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B623a83:{NFSU2_TR(0x623a83);
u8 U[8];
w4(U+0,u32(u32(u32(0x740ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B623a8e:{NFSU2_TR(0x623a8e);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623a99(ARGS);}}
}
B623a90:L623a90:{bud-=2;NFSU2_TR(0x623a90);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x3ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B623a93:{NFSU2_TR(0x623a93);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623a99(ARGS);}}
}
B623a95:L623a95:{bud-=2;NFSU2_TR(0x623a95);
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
B623a97:{NFSU2_TR(0x623a97);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623adc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623a99(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623a99:L623a99:{bud-=10;NFSU2_TR(0x623a99);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B623aa0:{NFSU2_TR(0x623aa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623aa4:{NFSU2_TR(0x623aa4);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623aab:{NFSU2_TR(0x623aab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623aac:{NFSU2_TR(0x623aac);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B623ab2:{NFSU2_TR(0x623ab2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623ab3:{NFSU2_TR(0x623ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B623ab6:{NFSU2_TR(0x623ab6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B623abc:{NFSU2_TR(0x623abc);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623abd:{NFSU2_TR(0x623abd);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623ac2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x434550u);}[[clang::musttail]] return blk_434550(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623ac2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623ac2:L623ac2:{bud-=3;NFSU2_TR(0x623ac2);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B623ac5:{NFSU2_TR(0x623ac5);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x1ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B623ac8:{NFSU2_TR(0x623ac8);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623ae2(ARGS);}}
}
B623aca:L623aca:{bud-=2;NFSU2_TR(0x623aca);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x3ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B623acd:{NFSU2_TR(0x623acd);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623ae2(ARGS);}}
}
B623acf:L623acf:{bud-=2;NFSU2_TR(0x623acf);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x4ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B623ad2:{NFSU2_TR(0x623ad2);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623ae2(ARGS);}}
}
B623ad4:L623ad4:{bud-=2;NFSU2_TR(0x623ad4);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x5ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B623ad7:{NFSU2_TR(0x623ad7);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623ae2(ARGS);}}
}
B623ad9:L623ad9:{bud-=1;NFSU2_TR(0x623ad9);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x6ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623adc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623adc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623adc:L623adc:{bud-=1;NFSU2_TR(0x623adc);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_623e0c(ARGS);}}
{[[clang::musttail]] return blk_623ae2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623ae2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623ae2:L623ae2:{bud-=196;NFSU2_TR(0x623ae2);
{u32 ea_=u32(r4(G+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ae9:{NFSU2_TR(0x623ae9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623aeb:{NFSU2_TR(0x623aeb);
{u32 ea_=u32(r4(G+16)+u32(1840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623af2:{NFSU2_TR(0x623af2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623af5:{NFSU2_TR(0x623af5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623af7:{NFSU2_TR(0x623af7);
{u32 ea_=u32(r4(G+16)+u32(1856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623afe:{NFSU2_TR(0x623afe);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b01:{NFSU2_TR(0x623b01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b03:{NFSU2_TR(0x623b03);
{u32 ea_=u32(r4(G+16)+u32(1824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b0a:{NFSU2_TR(0x623b0a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b0d:{NFSU2_TR(0x623b0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b0f:{NFSU2_TR(0x623b0f);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623b13:{NFSU2_TR(0x623b13);
{u32 ea_=u32(r4(G+16)+u32(1812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b1a:{NFSU2_TR(0x623b1a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b1c:{NFSU2_TR(0x623b1c);
{u32 ea_=u32(r4(G+16)+u32(1844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b23:{NFSU2_TR(0x623b23);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b26:{NFSU2_TR(0x623b26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b28:{NFSU2_TR(0x623b28);
{u32 ea_=u32(r4(G+16)+u32(1860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b2f:{NFSU2_TR(0x623b2f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b32:{NFSU2_TR(0x623b32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b34:{NFSU2_TR(0x623b34);
{u32 ea_=u32(r4(G+16)+u32(1828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b3b:{NFSU2_TR(0x623b3b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b3e:{NFSU2_TR(0x623b3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b40:{NFSU2_TR(0x623b40);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623b44:{NFSU2_TR(0x623b44);
{u32 ea_=u32(r4(G+16)+u32(1816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b4b:{NFSU2_TR(0x623b4b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b4d:{NFSU2_TR(0x623b4d);
{u32 ea_=u32(r4(G+16)+u32(1848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b54:{NFSU2_TR(0x623b54);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b57:{NFSU2_TR(0x623b57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b59:{NFSU2_TR(0x623b59);
{u32 ea_=u32(r4(G+16)+u32(1864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b60:{NFSU2_TR(0x623b60);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b63:{NFSU2_TR(0x623b63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b65:{NFSU2_TR(0x623b65);
{u32 ea_=u32(r4(G+16)+u32(1832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b6c:{NFSU2_TR(0x623b6c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b6f:{NFSU2_TR(0x623b6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b71:{NFSU2_TR(0x623b71);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623b75:{NFSU2_TR(0x623b75);
{u32 ea_=u32(r4(G+16)+u32(1820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b7c:{NFSU2_TR(0x623b7c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b7e:{NFSU2_TR(0x623b7e);
{u32 ea_=u32(r4(G+16)+u32(1868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b85:{NFSU2_TR(0x623b85);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b88:{NFSU2_TR(0x623b88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b8a:{NFSU2_TR(0x623b8a);
{u32 ea_=u32(r4(G+16)+u32(1852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b91:{NFSU2_TR(0x623b91);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623b94:{NFSU2_TR(0x623b94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623b96:{NFSU2_TR(0x623b96);
{u32 ea_=u32(r4(G+16)+u32(1836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623b9d:{NFSU2_TR(0x623b9d);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ba0:{NFSU2_TR(0x623ba0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623ba2:{NFSU2_TR(0x623ba2);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623ba6:{NFSU2_TR(0x623ba6);
{u32 ea_=u32(r4(G+16)+u32(1856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623bad:{NFSU2_TR(0x623bad);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623bb0:{NFSU2_TR(0x623bb0);
{u32 ea_=u32(r4(G+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623bb7:{NFSU2_TR(0x623bb7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623bba:{NFSU2_TR(0x623bba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623bbc:{NFSU2_TR(0x623bbc);
{u32 ea_=u32(r4(G+16)+u32(1840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623bc3:{NFSU2_TR(0x623bc3);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623bc6:{NFSU2_TR(0x623bc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623bc8:{NFSU2_TR(0x623bc8);
{u32 ea_=u32(r4(G+16)+u32(1824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623bcf:{NFSU2_TR(0x623bcf);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623bd2:{NFSU2_TR(0x623bd2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623bd4:{NFSU2_TR(0x623bd4);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623bd8:{NFSU2_TR(0x623bd8);
{u32 ea_=u32(r4(G+16)+u32(1860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623bdf:{NFSU2_TR(0x623bdf);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623be2:{NFSU2_TR(0x623be2);
{u32 ea_=u32(r4(G+16)+u32(1844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623be9:{NFSU2_TR(0x623be9);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623bec:{NFSU2_TR(0x623bec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623bee:{NFSU2_TR(0x623bee);
{u32 ea_=u32(r4(G+16)+u32(1812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623bf5:{NFSU2_TR(0x623bf5);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623bf8:{NFSU2_TR(0x623bf8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623bfa:{NFSU2_TR(0x623bfa);
{u32 ea_=u32(r4(G+16)+u32(1828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c01:{NFSU2_TR(0x623c01);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c04:{NFSU2_TR(0x623c04);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c06:{NFSU2_TR(0x623c06);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623c0a:{NFSU2_TR(0x623c0a);
{u32 ea_=u32(r4(G+16)+u32(1864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c11:{NFSU2_TR(0x623c11);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c14:{NFSU2_TR(0x623c14);
{u32 ea_=u32(r4(G+16)+u32(1848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c1b:{NFSU2_TR(0x623c1b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c1e:{NFSU2_TR(0x623c1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c20:{NFSU2_TR(0x623c20);
{u32 ea_=u32(r4(G+16)+u32(1816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c27:{NFSU2_TR(0x623c27);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c2a:{NFSU2_TR(0x623c2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c2c:{NFSU2_TR(0x623c2c);
{u32 ea_=u32(r4(G+16)+u32(1832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c33:{NFSU2_TR(0x623c33);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c36:{NFSU2_TR(0x623c36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c38:{NFSU2_TR(0x623c38);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623c3c:{NFSU2_TR(0x623c3c);
{u32 ea_=u32(r4(G+16)+u32(1868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c43:{NFSU2_TR(0x623c43);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c46:{NFSU2_TR(0x623c46);
{u32 ea_=u32(r4(G+16)+u32(1852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c4d:{NFSU2_TR(0x623c4d);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c50:{NFSU2_TR(0x623c50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c52:{NFSU2_TR(0x623c52);
{u32 ea_=u32(r4(G+16)+u32(1820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c59:{NFSU2_TR(0x623c59);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c5c:{NFSU2_TR(0x623c5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c5e:{NFSU2_TR(0x623c5e);
{u32 ea_=u32(r4(G+16)+u32(1836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c65:{NFSU2_TR(0x623c65);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c68:{NFSU2_TR(0x623c68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c6a:{NFSU2_TR(0x623c6a);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623c6e:{NFSU2_TR(0x623c6e);
{u32 ea_=u32(r4(G+16)+u32(1856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c75:{NFSU2_TR(0x623c75);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c78:{NFSU2_TR(0x623c78);
{u32 ea_=u32(r4(G+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c7f:{NFSU2_TR(0x623c7f);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c82:{NFSU2_TR(0x623c82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c84:{NFSU2_TR(0x623c84);
{u32 ea_=u32(r4(G+16)+u32(1840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c8b:{NFSU2_TR(0x623c8b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c8e:{NFSU2_TR(0x623c8e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c90:{NFSU2_TR(0x623c90);
{u32 ea_=u32(r4(G+16)+u32(1824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623c97:{NFSU2_TR(0x623c97);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623c9a:{NFSU2_TR(0x623c9a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623c9c:{NFSU2_TR(0x623c9c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623ca0:{NFSU2_TR(0x623ca0);
{u32 ea_=u32(r4(G+16)+u32(1860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ca7:{NFSU2_TR(0x623ca7);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623caa:{NFSU2_TR(0x623caa);
{u32 ea_=u32(r4(G+16)+u32(1844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623cb1:{NFSU2_TR(0x623cb1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623cb4:{NFSU2_TR(0x623cb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623cb6:{NFSU2_TR(0x623cb6);
{u32 ea_=u32(r4(G+16)+u32(1812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623cbd:{NFSU2_TR(0x623cbd);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623cc0:{NFSU2_TR(0x623cc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623cc2:{NFSU2_TR(0x623cc2);
{u32 ea_=u32(r4(G+16)+u32(1828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623cc9:{NFSU2_TR(0x623cc9);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ccc:{NFSU2_TR(0x623ccc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623cce:{NFSU2_TR(0x623cce);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623cd2:{NFSU2_TR(0x623cd2);
{u32 ea_=u32(r4(G+16)+u32(1864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623cd9:{NFSU2_TR(0x623cd9);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623cdc:{NFSU2_TR(0x623cdc);
{u32 ea_=u32(r4(G+16)+u32(1848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ce3:{NFSU2_TR(0x623ce3);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ce6:{NFSU2_TR(0x623ce6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623ce8:{NFSU2_TR(0x623ce8);
{u32 ea_=u32(r4(G+16)+u32(1816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623cef:{NFSU2_TR(0x623cef);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623cf2:{NFSU2_TR(0x623cf2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623cf4:{NFSU2_TR(0x623cf4);
{u32 ea_=u32(r4(G+16)+u32(1832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623cfb:{NFSU2_TR(0x623cfb);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623cfe:{NFSU2_TR(0x623cfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d00:{NFSU2_TR(0x623d00);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623d04:{NFSU2_TR(0x623d04);
{u32 ea_=u32(r4(G+16)+u32(1868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d0b:{NFSU2_TR(0x623d0b);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d0e:{NFSU2_TR(0x623d0e);
{u32 ea_=u32(r4(G+16)+u32(1852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d15:{NFSU2_TR(0x623d15);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d18:{NFSU2_TR(0x623d18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d1a:{NFSU2_TR(0x623d1a);
{u32 ea_=u32(r4(G+16)+u32(1820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d21:{NFSU2_TR(0x623d21);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d24:{NFSU2_TR(0x623d24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d26:{NFSU2_TR(0x623d26);
{u32 ea_=u32(r4(G+16)+u32(1836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d2d:{NFSU2_TR(0x623d2d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d30:{NFSU2_TR(0x623d30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d32:{NFSU2_TR(0x623d32);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623d36:{NFSU2_TR(0x623d36);
{u32 ea_=u32(r4(G+16)+u32(1856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d3d:{NFSU2_TR(0x623d3d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d40:{NFSU2_TR(0x623d40);
{u32 ea_=u32(r4(G+16)+u32(1808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d47:{NFSU2_TR(0x623d47);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d4a:{NFSU2_TR(0x623d4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d4c:{NFSU2_TR(0x623d4c);
{u32 ea_=u32(r4(G+16)+u32(1840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d53:{NFSU2_TR(0x623d53);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d56:{NFSU2_TR(0x623d56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d58:{NFSU2_TR(0x623d58);
{u32 ea_=u32(r4(G+16)+u32(1824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d5f:{NFSU2_TR(0x623d5f);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d62:{NFSU2_TR(0x623d62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d64:{NFSU2_TR(0x623d64);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623d68:{NFSU2_TR(0x623d68);
{u32 ea_=u32(r4(G+16)+u32(1860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d6f:{NFSU2_TR(0x623d6f);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d72:{NFSU2_TR(0x623d72);
{u32 ea_=u32(r4(G+16)+u32(1844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d79:{NFSU2_TR(0x623d79);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d7c:{NFSU2_TR(0x623d7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d7e:{NFSU2_TR(0x623d7e);
{u32 ea_=u32(r4(G+16)+u32(1812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d85:{NFSU2_TR(0x623d85);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d88:{NFSU2_TR(0x623d88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d8a:{NFSU2_TR(0x623d8a);
{u32 ea_=u32(r4(G+16)+u32(1828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623d91:{NFSU2_TR(0x623d91);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623d94:{NFSU2_TR(0x623d94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623d96:{NFSU2_TR(0x623d96);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623d9a:{NFSU2_TR(0x623d9a);
{u32 ea_=u32(r4(G+16)+u32(1864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623da1:{NFSU2_TR(0x623da1);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623da4:{NFSU2_TR(0x623da4);
{u32 ea_=u32(r4(G+16)+u32(1848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623dab:{NFSU2_TR(0x623dab);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623dae:{NFSU2_TR(0x623dae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623db0:{NFSU2_TR(0x623db0);
{u32 ea_=u32(r4(G+16)+u32(1816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623db7:{NFSU2_TR(0x623db7);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623dba:{NFSU2_TR(0x623dba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623dbc:{NFSU2_TR(0x623dbc);
{u32 ea_=u32(r4(G+16)+u32(1832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623dc3:{NFSU2_TR(0x623dc3);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623dc6:{NFSU2_TR(0x623dc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623dc8:{NFSU2_TR(0x623dc8);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623dcc:{NFSU2_TR(0x623dcc);
{u32 ea_=u32(r4(G+16)+u32(1868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623dd3:{NFSU2_TR(0x623dd3);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623dd6:{NFSU2_TR(0x623dd6);
{u32 ea_=u32(r4(G+16)+u32(1852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ddd:{NFSU2_TR(0x623ddd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B623de1:{NFSU2_TR(0x623de1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623de4:{NFSU2_TR(0x623de4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623de5:{NFSU2_TR(0x623de5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B623de6:{NFSU2_TR(0x623de6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623de8:{NFSU2_TR(0x623de8);
{u32 ea_=u32(r4(G+16)+u32(1828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623def:{NFSU2_TR(0x623def);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623df2:{NFSU2_TR(0x623df2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623df4:{NFSU2_TR(0x623df4);
{u32 ea_=u32(r4(G+16)+u32(1844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623dfb:{NFSU2_TR(0x623dfb);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623dfe:{NFSU2_TR(0x623dfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e00:{NFSU2_TR(0x623e00);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623e04:{NFSU2_TR(0x623e04);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x623e09ull));
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
PN u32 blk_623e09(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623e09:L623e09:{bud-=1;NFSU2_TR(0x623e09);
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
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_623e0c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_623e0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B623e0c:L623e0c:{bud-=114;NFSU2_TR(0x623e0c);
{u32 ea_=u32(r4(G+16)+u32(960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e13:{NFSU2_TR(0x623e13);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e16:{NFSU2_TR(0x623e16);
{u32 ea_=u32(r4(G+16)+u32(912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e1d:{NFSU2_TR(0x623e1d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e1f:{NFSU2_TR(0x623e1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e21:{NFSU2_TR(0x623e21);
{u32 ea_=u32(r4(G+16)+u32(944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e28:{NFSU2_TR(0x623e28);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e2b:{NFSU2_TR(0x623e2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e2d:{NFSU2_TR(0x623e2d);
{u32 ea_=u32(r4(G+16)+u32(928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e34:{NFSU2_TR(0x623e34);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e37:{NFSU2_TR(0x623e37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e39:{NFSU2_TR(0x623e39);
{u32 ea_=u32(r4(G+16)+u32(2016u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623e40:{NFSU2_TR(0x623e40);
{u32 ea_=u32(r4(G+16)+u32(916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e47:{NFSU2_TR(0x623e47);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e49:{NFSU2_TR(0x623e49);
{u32 ea_=u32(r4(G+16)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e50:{NFSU2_TR(0x623e50);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e53:{NFSU2_TR(0x623e53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e55:{NFSU2_TR(0x623e55);
{u32 ea_=u32(r4(G+16)+u32(948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e5c:{NFSU2_TR(0x623e5c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e5f:{NFSU2_TR(0x623e5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e61:{NFSU2_TR(0x623e61);
{u32 ea_=u32(r4(G+16)+u32(932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e68:{NFSU2_TR(0x623e68);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e6b:{NFSU2_TR(0x623e6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e6d:{NFSU2_TR(0x623e6d);
{u32 ea_=u32(r4(G+16)+u32(2020u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623e74:{NFSU2_TR(0x623e74);
{u32 ea_=u32(r4(G+16)+u32(920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e7b:{NFSU2_TR(0x623e7b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e7d:{NFSU2_TR(0x623e7d);
{u32 ea_=u32(r4(G+16)+u32(968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e84:{NFSU2_TR(0x623e84);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e87:{NFSU2_TR(0x623e87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e89:{NFSU2_TR(0x623e89);
{u32 ea_=u32(r4(G+16)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e90:{NFSU2_TR(0x623e90);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e93:{NFSU2_TR(0x623e93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623e95:{NFSU2_TR(0x623e95);
{u32 ea_=u32(r4(G+16)+u32(936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623e9c:{NFSU2_TR(0x623e9c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623e9f:{NFSU2_TR(0x623e9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623ea1:{NFSU2_TR(0x623ea1);
{u32 ea_=u32(r4(G+16)+u32(2024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623ea8:{NFSU2_TR(0x623ea8);
{u32 ea_=u32(r4(G+16)+u32(924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623eaf:{NFSU2_TR(0x623eaf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623eb1:{NFSU2_TR(0x623eb1);
{u32 ea_=u32(r4(G+16)+u32(972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623eb8:{NFSU2_TR(0x623eb8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ebb:{NFSU2_TR(0x623ebb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623ebd:{NFSU2_TR(0x623ebd);
{u32 ea_=u32(r4(G+16)+u32(956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ec4:{NFSU2_TR(0x623ec4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ec7:{NFSU2_TR(0x623ec7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623ec9:{NFSU2_TR(0x623ec9);
{u32 ea_=u32(r4(G+16)+u32(940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ed0:{NFSU2_TR(0x623ed0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ed3:{NFSU2_TR(0x623ed3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623ed5:{NFSU2_TR(0x623ed5);
{u32 ea_=u32(r4(G+16)+u32(2028u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623edc:{NFSU2_TR(0x623edc);
{u32 ea_=u32(r4(G+16)+u32(960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ee3:{NFSU2_TR(0x623ee3);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ee6:{NFSU2_TR(0x623ee6);
{u32 ea_=u32(r4(G+16)+u32(912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623eed:{NFSU2_TR(0x623eed);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ef0:{NFSU2_TR(0x623ef0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623ef2:{NFSU2_TR(0x623ef2);
{u32 ea_=u32(r4(G+16)+u32(944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ef9:{NFSU2_TR(0x623ef9);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623efc:{NFSU2_TR(0x623efc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623efe:{NFSU2_TR(0x623efe);
{u32 ea_=u32(r4(G+16)+u32(928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f05:{NFSU2_TR(0x623f05);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f08:{NFSU2_TR(0x623f08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f0a:{NFSU2_TR(0x623f0a);
{u32 ea_=u32(r4(G+16)+u32(2032u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623f11:{NFSU2_TR(0x623f11);
{u32 ea_=u32(r4(G+16)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f18:{NFSU2_TR(0x623f18);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f1b:{NFSU2_TR(0x623f1b);
{u32 ea_=u32(r4(G+16)+u32(948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f22:{NFSU2_TR(0x623f22);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f25:{NFSU2_TR(0x623f25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f27:{NFSU2_TR(0x623f27);
{u32 ea_=u32(r4(G+16)+u32(916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f2e:{NFSU2_TR(0x623f2e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f31:{NFSU2_TR(0x623f31);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f33:{NFSU2_TR(0x623f33);
{u32 ea_=u32(r4(G+16)+u32(932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f3a:{NFSU2_TR(0x623f3a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f3d:{NFSU2_TR(0x623f3d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f3f:{NFSU2_TR(0x623f3f);
{u32 ea_=u32(r4(G+16)+u32(2036u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623f46:{NFSU2_TR(0x623f46);
{u32 ea_=u32(r4(G+16)+u32(968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f4d:{NFSU2_TR(0x623f4d);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f50:{NFSU2_TR(0x623f50);
{u32 ea_=u32(r4(G+16)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f57:{NFSU2_TR(0x623f57);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f5a:{NFSU2_TR(0x623f5a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f5c:{NFSU2_TR(0x623f5c);
{u32 ea_=u32(r4(G+16)+u32(920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f63:{NFSU2_TR(0x623f63);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f66:{NFSU2_TR(0x623f66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f68:{NFSU2_TR(0x623f68);
{u32 ea_=u32(r4(G+16)+u32(936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f6f:{NFSU2_TR(0x623f6f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f72:{NFSU2_TR(0x623f72);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f74:{NFSU2_TR(0x623f74);
{u32 ea_=u32(r4(G+16)+u32(2040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623f7b:{NFSU2_TR(0x623f7b);
{u32 ea_=u32(r4(G+16)+u32(972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f82:{NFSU2_TR(0x623f82);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f85:{NFSU2_TR(0x623f85);
{u32 ea_=u32(r4(G+16)+u32(956u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f8c:{NFSU2_TR(0x623f8c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f8f:{NFSU2_TR(0x623f8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f91:{NFSU2_TR(0x623f91);
{u32 ea_=u32(r4(G+16)+u32(924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623f98:{NFSU2_TR(0x623f98);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623f9b:{NFSU2_TR(0x623f9b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623f9d:{NFSU2_TR(0x623f9d);
{u32 ea_=u32(r4(G+16)+u32(940u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623fa4:{NFSU2_TR(0x623fa4);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623fa7:{NFSU2_TR(0x623fa7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623fa9:{NFSU2_TR(0x623fa9);
{u32 ea_=u32(r4(G+16)+u32(2044u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623fb0:{NFSU2_TR(0x623fb0);
{u32 ea_=u32(r4(G+16)+u32(960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623fb7:{NFSU2_TR(0x623fb7);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623fba:{NFSU2_TR(0x623fba);
{u32 ea_=u32(r4(G+16)+u32(912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623fc1:{NFSU2_TR(0x623fc1);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623fc4:{NFSU2_TR(0x623fc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623fc6:{NFSU2_TR(0x623fc6);
{u32 ea_=u32(r4(G+16)+u32(944u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623fcd:{NFSU2_TR(0x623fcd);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623fd0:{NFSU2_TR(0x623fd0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623fd2:{NFSU2_TR(0x623fd2);
{u32 ea_=u32(r4(G+16)+u32(928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623fd9:{NFSU2_TR(0x623fd9);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623fdc:{NFSU2_TR(0x623fdc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623fde:{NFSU2_TR(0x623fde);
{u32 ea_=u32(r4(G+16)+u32(2048u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B623fe5:{NFSU2_TR(0x623fe5);
{u32 ea_=u32(r4(G+16)+u32(964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623fec:{NFSU2_TR(0x623fec);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623fef:{NFSU2_TR(0x623fef);
{u32 ea_=u32(r4(G+16)+u32(948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B623ff6:{NFSU2_TR(0x623ff6);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B623ff9:{NFSU2_TR(0x623ff9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B623ffb:{NFSU2_TR(0x623ffb);
{u32 ea_=u32(r4(G+16)+u32(916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{EXIT(0x624002u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_623(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x623033:[[clang::musttail]] return blk_623033(c,a4,a0,a1,bud);
case 0x623035:[[clang::musttail]] return blk_623035(c,a4,a0,a1,bud);
case 0x623061:[[clang::musttail]] return blk_623061(c,a4,a0,a1,bud);
case 0x623070:[[clang::musttail]] return blk_623070(c,a4,a0,a1,bud);
case 0x623080:[[clang::musttail]] return blk_623080(c,a4,a0,a1,bud);
case 0x6230db:[[clang::musttail]] return blk_6230db(c,a4,a0,a1,bud);
case 0x623100:[[clang::musttail]] return blk_623100(c,a4,a0,a1,bud);
case 0x623126:[[clang::musttail]] return blk_623126(c,a4,a0,a1,bud);
case 0x623141:[[clang::musttail]] return blk_623141(c,a4,a0,a1,bud);
case 0x62314b:[[clang::musttail]] return blk_62314b(c,a4,a0,a1,bud);
case 0x62315a:[[clang::musttail]] return blk_62315a(c,a4,a0,a1,bud);
case 0x623180:[[clang::musttail]] return blk_623180(c,a4,a0,a1,bud);
case 0x623188:[[clang::musttail]] return blk_623188(c,a4,a0,a1,bud);
case 0x62318c:[[clang::musttail]] return blk_62318c(c,a4,a0,a1,bud);
case 0x62318f:[[clang::musttail]] return blk_62318f(c,a4,a0,a1,bud);
case 0x6231ad:[[clang::musttail]] return blk_6231ad(c,a4,a0,a1,bud);
case 0x6231cd:[[clang::musttail]] return blk_6231cd(c,a4,a0,a1,bud);
case 0x6231f7:[[clang::musttail]] return blk_6231f7(c,a4,a0,a1,bud);
case 0x623212:[[clang::musttail]] return blk_623212(c,a4,a0,a1,bud);
case 0x623234:[[clang::musttail]] return blk_623234(c,a4,a0,a1,bud);
case 0x62324e:[[clang::musttail]] return blk_62324e(c,a4,a0,a1,bud);
case 0x623268:[[clang::musttail]] return blk_623268(c,a4,a0,a1,bud);
case 0x62326d:[[clang::musttail]] return blk_62326d(c,a4,a0,a1,bud);
case 0x623286:[[clang::musttail]] return blk_623286(c,a4,a0,a1,bud);
case 0x6232a0:[[clang::musttail]] return blk_6232a0(c,a4,a0,a1,bud);
case 0x6232a5:[[clang::musttail]] return blk_6232a5(c,a4,a0,a1,bud);
case 0x6232b6:[[clang::musttail]] return blk_6232b6(c,a4,a0,a1,bud);
case 0x6232d0:[[clang::musttail]] return blk_6232d0(c,a4,a0,a1,bud);
case 0x6232d5:[[clang::musttail]] return blk_6232d5(c,a4,a0,a1,bud);
case 0x6232ee:[[clang::musttail]] return blk_6232ee(c,a4,a0,a1,bud);
case 0x623320:[[clang::musttail]] return blk_623320(c,a4,a0,a1,bud);
case 0x62332b:[[clang::musttail]] return blk_62332b(c,a4,a0,a1,bud);
case 0x623332:[[clang::musttail]] return blk_623332(c,a4,a0,a1,bud);
case 0x623339:[[clang::musttail]] return blk_623339(c,a4,a0,a1,bud);
case 0x62334a:[[clang::musttail]] return blk_62334a(c,a4,a0,a1,bud);
case 0x623359:[[clang::musttail]] return blk_623359(c,a4,a0,a1,bud);
case 0x623374:[[clang::musttail]] return blk_623374(c,a4,a0,a1,bud);
case 0x623384:[[clang::musttail]] return blk_623384(c,a4,a0,a1,bud);
case 0x62339f:[[clang::musttail]] return blk_62339f(c,a4,a0,a1,bud);
case 0x6233b9:[[clang::musttail]] return blk_6233b9(c,a4,a0,a1,bud);
case 0x6233c9:[[clang::musttail]] return blk_6233c9(c,a4,a0,a1,bud);
case 0x6233d5:[[clang::musttail]] return blk_6233d5(c,a4,a0,a1,bud);
case 0x6233e0:[[clang::musttail]] return blk_6233e0(c,a4,a0,a1,bud);
case 0x6233ea:[[clang::musttail]] return blk_6233ea(c,a4,a0,a1,bud);
case 0x6233fb:[[clang::musttail]] return blk_6233fb(c,a4,a0,a1,bud);
case 0x62340b:[[clang::musttail]] return blk_62340b(c,a4,a0,a1,bud);
case 0x62342f:[[clang::musttail]] return blk_62342f(c,a4,a0,a1,bud);
case 0x623441:[[clang::musttail]] return blk_623441(c,a4,a0,a1,bud);
case 0x62344b:[[clang::musttail]] return blk_62344b(c,a4,a0,a1,bud);
case 0x62347e:[[clang::musttail]] return blk_62347e(c,a4,a0,a1,bud);
case 0x623492:[[clang::musttail]] return blk_623492(c,a4,a0,a1,bud);
case 0x6234ae:[[clang::musttail]] return blk_6234ae(c,a4,a0,a1,bud);
case 0x6234d7:[[clang::musttail]] return blk_6234d7(c,a4,a0,a1,bud);
case 0x62350c:[[clang::musttail]] return blk_62350c(c,a4,a0,a1,bud);
case 0x62355a:[[clang::musttail]] return blk_62355a(c,a4,a0,a1,bud);
case 0x623568:[[clang::musttail]] return blk_623568(c,a4,a0,a1,bud);
case 0x62357d:[[clang::musttail]] return blk_62357d(c,a4,a0,a1,bud);
case 0x623584:[[clang::musttail]] return blk_623584(c,a4,a0,a1,bud);
case 0x623598:[[clang::musttail]] return blk_623598(c,a4,a0,a1,bud);
case 0x6235c9:[[clang::musttail]] return blk_6235c9(c,a4,a0,a1,bud);
case 0x6235fa:[[clang::musttail]] return blk_6235fa(c,a4,a0,a1,bud);
case 0x623673:[[clang::musttail]] return blk_623673(c,a4,a0,a1,bud);
case 0x623a3c:[[clang::musttail]] return blk_623a3c(c,a4,a0,a1,bud);
case 0x623a4b:[[clang::musttail]] return blk_623a4b(c,a4,a0,a1,bud);
case 0x623a60:[[clang::musttail]] return blk_623a60(c,a4,a0,a1,bud);
case 0x623a99:[[clang::musttail]] return blk_623a99(c,a4,a0,a1,bud);
case 0x623ac2:[[clang::musttail]] return blk_623ac2(c,a4,a0,a1,bud);
case 0x623adc:[[clang::musttail]] return blk_623adc(c,a4,a0,a1,bud);
case 0x623ae2:[[clang::musttail]] return blk_623ae2(c,a4,a0,a1,bud);
case 0x623e09:[[clang::musttail]] return blk_623e09(c,a4,a0,a1,bud);
case 0x623e0c:[[clang::musttail]] return blk_623e0c(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_623(Cpu& c){u8* R=c.regs.data();return ent_623(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
