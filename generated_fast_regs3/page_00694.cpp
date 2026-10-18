#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_63bd7d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_63be32(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_692f76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693d0e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_693d9b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694064(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6940d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69424a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6942e2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6942e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694485(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69448c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6944ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6945b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6945d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694643(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694742(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694762(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69400b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69401a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69401e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694022(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69402f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694033(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694042(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694046(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694055(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694062(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6940fb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69413b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694190(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69419f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6941f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694203(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694207(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694214(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69421f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694223(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694230(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69423d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694248(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6942f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694318(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694358(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6943df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694494(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6944c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6944fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694600(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69463e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69477b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6947d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69480d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694873(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_69490b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694954(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694997(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694a42(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694ac6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694b25(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694c59(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694cca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694d92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694e70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694eb3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694f97(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_694000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694000:L694000:{bud-=1;NFSU2_TR(0x694000);
{[[clang::musttail]] return blk_694064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694002:L694002:{bud-=2;NFSU2_TR(0x694002);
__builtin_memmove((R+24),(G+4),4);
}
B694004:{NFSU2_TR(0x694004);
{[[clang::musttail]] return blk_694064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694006:L694006:{bud-=2;NFSU2_TR(0x694006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B694009:{NFSU2_TR(0x694009);
{[[clang::musttail]] return blk_694064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69400b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69400b:L69400b:{bud-=6;NFSU2_TR(0x69400b);
w2(R+4260,0xffffu);
}
B69400d:{NFSU2_TR(0x69400d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69400e:{NFSU2_TR(0x69400e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B694011:{NFSU2_TR(0x694011);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B694014:{NFSU2_TR(0x694014);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694015:{NFSU2_TR(0x694015);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69401aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69401a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69401a:L69401a:{bud-=2;NFSU2_TR(0x69401a);
w2(R+4260,0xffffu);
}
B69401c:{NFSU2_TR(0x69401c);
{[[clang::musttail]] return blk_694064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69401e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69401e:L69401e:{bud-=2;NFSU2_TR(0x69401e);
__builtin_memmove((R+24),(R+28),4);
}
B694020:{NFSU2_TR(0x694020);
{[[clang::musttail]] return blk_694064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694022(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694022:L694022:{bud-=6;NFSU2_TR(0x694022);
w2(R+4260,0xffffu);
}
B694024:{NFSU2_TR(0x694024);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694025:{NFSU2_TR(0x694025);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694026:{NFSU2_TR(0x694026);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B694029:{NFSU2_TR(0x694029);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69402a:{NFSU2_TR(0x69402a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69402full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69402f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69402f:L69402f:{bud-=2;NFSU2_TR(0x69402f);
w2(R+4260,0xffffu);
}
B694031:{NFSU2_TR(0x694031);
{[[clang::musttail]] return blk_694064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694033(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694033:L694033:{bud-=6;NFSU2_TR(0x694033);
w2(R+4260,0xffffu);
}
B694035:{NFSU2_TR(0x694035);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B694038:{NFSU2_TR(0x694038);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B69403b:{NFSU2_TR(0x69403b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69403c:{NFSU2_TR(0x69403c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69403d:{NFSU2_TR(0x69403d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694042ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694042(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694042:L694042:{bud-=2;NFSU2_TR(0x694042);
w2(R+4260,0xffffu);
}
B694044:{NFSU2_TR(0x694044);
{[[clang::musttail]] return blk_694064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694046(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694046:L694046:{bud-=6;NFSU2_TR(0x694046);
w2(R+4260,0xffffu);
}
B694048:{NFSU2_TR(0x694048);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B69404b:{NFSU2_TR(0x69404b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B69404e:{NFSU2_TR(0x69404e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69404f:{NFSU2_TR(0x69404f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694050:{NFSU2_TR(0x694050);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694055ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694055(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694055:L694055:{bud-=5;NFSU2_TR(0x694055);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B694058:{NFSU2_TR(0x694058);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B69405b:{NFSU2_TR(0x69405b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69405c:{NFSU2_TR(0x69405c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69405d:{NFSU2_TR(0x69405d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694062ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694062(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694062:L694062:{bud-=1;NFSU2_TR(0x694062);
w2(R+4260,0xffffu);
{[[clang::musttail]] return blk_694064(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694064(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694064:L694064:{bud-=4;NFSU2_TR(0x694064);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694065:{NFSU2_TR(0x694065);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B694068:{NFSU2_TR(0x694068);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B69406b:{NFSU2_TR(0x69406b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694070ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d0eu);}[[clang::musttail]] return blk_693d0e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694070(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694070:L694070:{bud-=4;NFSU2_TR(0x694070);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B694074:{NFSU2_TR(0x694074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B694075:{NFSU2_TR(0x694075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B694076:{NFSU2_TR(0x694076);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6940d4(ARGS);}}
}
B694078:L694078:{bud-=23;NFSU2_TR(0x694078);
w2(R+4260,0xffffu);
}
B69407a:{NFSU2_TR(0x69407a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69407d:{NFSU2_TR(0x69407d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694080:{NFSU2_TR(0x694080);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694083:{NFSU2_TR(0x694083);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B694087:{NFSU2_TR(0x694087);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B69408a:{NFSU2_TR(0x69408a);
w8(R+4352,u64(u64(r8(R+4352))^u64(m8(0x7b71d8))));
}
B694091:{NFSU2_TR(0x694091);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B694095:{NFSU2_TR(0x694095);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B694099:{NFSU2_TR(0x694099);
{wv<8>((R+4384),uo::pi2fd<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B69409d:{NFSU2_TR(0x69409d);
{wv<8>((R+4400),uo::pi2fd<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B6940a1:{NFSU2_TR(0x6940a1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71e0))));}
}
B6940a9:{NFSU2_TR(0x6940a9);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71e8))));}
}
B6940b1:{NFSU2_TR(0x6940b1);
__builtin_memmove((R+4432),(R+4416),8);
}
B6940b4:{NFSU2_TR(0x6940b4);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B6940b7:{NFSU2_TR(0x6940b7);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6940bb:{NFSU2_TR(0x6940bb);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6940bf:{NFSU2_TR(0x6940bf);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B6940c3:{NFSU2_TR(0x6940c3);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6940c7:{NFSU2_TR(0x6940c7);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6940cb:{NFSU2_TR(0x6940cb);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6940ce:{NFSU2_TR(0x6940ce);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6940d2:{NFSU2_TR(0x6940d2);
w2(R+4260,0xffffu);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6940d4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6940d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6940d4:L6940d4:{bud-=3;NFSU2_TR(0x6940d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6940d7:{NFSU2_TR(0x6940d7);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B6940d8:{NFSU2_TR(0x6940d8);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_6940fb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6940fb:L6940fb:{bud-=24;NFSU2_TR(0x6940fb);
__builtin_memmove((R+28),(R+28),4);
}
B6940fd:{NFSU2_TR(0x6940fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6940fe:{NFSU2_TR(0x6940fe);
__builtin_memmove((R+20),(G+16),4);
}
B694100:{NFSU2_TR(0x694100);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x40ull))));
}
B694103:{NFSU2_TR(0x694103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694106:{NFSU2_TR(0x694106);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B694108:{NFSU2_TR(0x694108);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694109:{NFSU2_TR(0x694109);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69410b:{NFSU2_TR(0x69410b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69410c:{NFSU2_TR(0x69410c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69410f:{NFSU2_TR(0x69410f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B694111:{NFSU2_TR(0x694111);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((G+0),(U+0),1);
}
B694114:{NFSU2_TR(0x694114);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B694116:{NFSU2_TR(0x694116);
w4(G+0,shl<u32>(r4(G+0),u64(u32(0x1ull))));
}
B694118:{NFSU2_TR(0x694118);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B69411a:{NFSU2_TR(0x69411a);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((R+8),(U+0),1);
}
B69411d:{NFSU2_TR(0x69411d);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B69411f:{NFSU2_TR(0x69411f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B694121:{NFSU2_TR(0x694121);
w4(G+0,shl<u32>(r4(G+0),u64(u32(0x1ull))));
}
B694123:{NFSU2_TR(0x694123);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B694126:{NFSU2_TR(0x694126);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((R+8),(U+0),1);
}
B694129:{NFSU2_TR(0x694129);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B69412b:{NFSU2_TR(0x69412b);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x7ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B69412e:{NFSU2_TR(0x69412e);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_69424a(ARGS);}}
}
B694134:L694134:{bud-=1;NFSU2_TR(0x694134);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6942f8ull))+u32(r4(U+0))));
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
PN u32 blk_69413b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69413b:L69413b:{bud-=33;NFSU2_TR(0x69413b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69413d:{NFSU2_TR(0x69413d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694140:{NFSU2_TR(0x694140);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694142:{NFSU2_TR(0x694142);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694145:{NFSU2_TR(0x694145);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694147:{NFSU2_TR(0x694147);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69414a:{NFSU2_TR(0x69414a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69414c:{NFSU2_TR(0x69414c);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69414f:{NFSU2_TR(0x69414f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694151:{NFSU2_TR(0x694151);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694154:{NFSU2_TR(0x694154);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694156:{NFSU2_TR(0x694156);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694159:{NFSU2_TR(0x694159);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69415b:{NFSU2_TR(0x69415b);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69415e:{NFSU2_TR(0x69415e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694160:{NFSU2_TR(0x694160);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694163:{NFSU2_TR(0x694163);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694165:{NFSU2_TR(0x694165);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694168:{NFSU2_TR(0x694168);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69416a:{NFSU2_TR(0x69416a);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69416d:{NFSU2_TR(0x69416d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69416f:{NFSU2_TR(0x69416f);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694172:{NFSU2_TR(0x694172);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694174:{NFSU2_TR(0x694174);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694177:{NFSU2_TR(0x694177);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B694179:{NFSU2_TR(0x694179);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69417c:{NFSU2_TR(0x69417c);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B69417e:{NFSU2_TR(0x69417e);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694181:{NFSU2_TR(0x694181);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B694183:{NFSU2_TR(0x694183);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694186:{NFSU2_TR(0x694186);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B694188:{NFSU2_TR(0x694188);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69418b:{NFSU2_TR(0x69418b);
{[[clang::musttail]] return blk_69424a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694190(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694190:L694190:{bud-=6;NFSU2_TR(0x694190);
w2(R+4260,0xffffu);
}
B694192:{NFSU2_TR(0x694192);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B694195:{NFSU2_TR(0x694195);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B694198:{NFSU2_TR(0x694198);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694199:{NFSU2_TR(0x694199);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69419a:{NFSU2_TR(0x69419a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69419full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693650u);}[[clang::musttail]] return blk_693650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69419f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69419f:L69419f:{bud-=2;NFSU2_TR(0x69419f);
w2(R+4260,0xffffu);
}
B6941a1:{NFSU2_TR(0x6941a1);
{[[clang::musttail]] return blk_69424a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941a6:L6941a6:{bud-=6;NFSU2_TR(0x6941a6);
w2(R+4260,0xffffu);
}
B6941a8:{NFSU2_TR(0x6941a8);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941a9:{NFSU2_TR(0x6941a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941aa:{NFSU2_TR(0x6941aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6941ad:{NFSU2_TR(0x6941ad);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941ae:{NFSU2_TR(0x6941ae);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6941b3ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693650u);}[[clang::musttail]] return blk_693650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941b3:L6941b3:{bud-=2;NFSU2_TR(0x6941b3);
w2(R+4260,0xffffu);
}
B6941b5:{NFSU2_TR(0x6941b5);
{[[clang::musttail]] return blk_69424a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941ba:L6941ba:{bud-=6;NFSU2_TR(0x6941ba);
w2(R+4260,0xffffu);
}
B6941bc:{NFSU2_TR(0x6941bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6941bf:{NFSU2_TR(0x6941bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6941c2:{NFSU2_TR(0x6941c2);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941c3:{NFSU2_TR(0x6941c3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941c4:{NFSU2_TR(0x6941c4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6941c9ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941c9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941c9:L6941c9:{bud-=5;NFSU2_TR(0x6941c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6941cc:{NFSU2_TR(0x6941cc);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941cd:{NFSU2_TR(0x6941cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941ce:{NFSU2_TR(0x6941ce);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941cf:{NFSU2_TR(0x6941cf);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6941d4ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693650u);}[[clang::musttail]] return blk_693650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941d4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941d4:L6941d4:{bud-=2;NFSU2_TR(0x6941d4);
w2(R+4260,0xffffu);
}
B6941d6:{NFSU2_TR(0x6941d6);
{[[clang::musttail]] return blk_69424a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941d8:L6941d8:{bud-=6;NFSU2_TR(0x6941d8);
w2(R+4260,0xffffu);
}
B6941da:{NFSU2_TR(0x6941da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941db:{NFSU2_TR(0x6941db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941dc:{NFSU2_TR(0x6941dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6941df:{NFSU2_TR(0x6941df);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941e0:{NFSU2_TR(0x6941e0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6941e5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693650u);}[[clang::musttail]] return blk_693650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941e5:L6941e5:{bud-=2;NFSU2_TR(0x6941e5);
w2(R+4260,0xffffu);
}
B6941e7:{NFSU2_TR(0x6941e7);
{[[clang::musttail]] return blk_69424a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941e9:L6941e9:{bud-=6;NFSU2_TR(0x6941e9);
w2(R+4260,0xffffu);
}
B6941eb:{NFSU2_TR(0x6941eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6941ee:{NFSU2_TR(0x6941ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6941f1:{NFSU2_TR(0x6941f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941f2:{NFSU2_TR(0x6941f2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941f3:{NFSU2_TR(0x6941f3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6941f8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6941f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6941f8:L6941f8:{bud-=5;NFSU2_TR(0x6941f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6941fb:{NFSU2_TR(0x6941fb);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941fc:{NFSU2_TR(0x6941fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941fd:{NFSU2_TR(0x6941fd);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6941fe:{NFSU2_TR(0x6941fe);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694203ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693650u);}[[clang::musttail]] return blk_693650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694203(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694203:L694203:{bud-=2;NFSU2_TR(0x694203);
w2(R+4260,0xffffu);
}
B694205:{NFSU2_TR(0x694205);
{[[clang::musttail]] return blk_69424a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694207(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694207:L694207:{bud-=6;NFSU2_TR(0x694207);
w2(R+4260,0xffffu);
}
B694209:{NFSU2_TR(0x694209);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69420a:{NFSU2_TR(0x69420a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69420b:{NFSU2_TR(0x69420b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B69420e:{NFSU2_TR(0x69420e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69420f:{NFSU2_TR(0x69420f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694214ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694214(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694214:L694214:{bud-=5;NFSU2_TR(0x694214);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B694217:{NFSU2_TR(0x694217);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694218:{NFSU2_TR(0x694218);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694219:{NFSU2_TR(0x694219);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69421a:{NFSU2_TR(0x69421a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69421full));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693650u);}[[clang::musttail]] return blk_693650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69421f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69421f:L69421f:{bud-=2;NFSU2_TR(0x69421f);
w2(R+4260,0xffffu);
}
B694221:{NFSU2_TR(0x694221);
{[[clang::musttail]] return blk_69424a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694223(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694223:L694223:{bud-=6;NFSU2_TR(0x694223);
w2(R+4260,0xffffu);
}
B694225:{NFSU2_TR(0x694225);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694226:{NFSU2_TR(0x694226);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694227:{NFSU2_TR(0x694227);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B69422a:{NFSU2_TR(0x69422a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69422b:{NFSU2_TR(0x69422b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694230ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694230(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694230:L694230:{bud-=5;NFSU2_TR(0x694230);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B694233:{NFSU2_TR(0x694233);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B694236:{NFSU2_TR(0x694236);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694237:{NFSU2_TR(0x694237);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694238:{NFSU2_TR(0x694238);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69423dull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69423d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69423d:L69423d:{bud-=5;NFSU2_TR(0x69423d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B694240:{NFSU2_TR(0x694240);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694241:{NFSU2_TR(0x694241);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694242:{NFSU2_TR(0x694242);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694243:{NFSU2_TR(0x694243);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694248ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693650u);}[[clang::musttail]] return blk_693650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694248(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694248:L694248:{bud-=1;NFSU2_TR(0x694248);
w2(R+4260,0xffffu);
{[[clang::musttail]] return blk_69424a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69424a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69424a:L69424a:{bud-=4;NFSU2_TR(0x69424a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(r4(R+24))));
w1(F+11,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B69424d:{NFSU2_TR(0x69424d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69424e:{NFSU2_TR(0x69424e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69424f:{NFSU2_TR(0x69424f);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6942e2(ARGS);}}
}
B694255:L694255:{bud-=38;NFSU2_TR(0x694255);
w2(R+4260,0xffffu);
}
B694257:{NFSU2_TR(0x694257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69425a:{NFSU2_TR(0x69425a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B69425d:{NFSU2_TR(0x69425d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694260:{NFSU2_TR(0x694260);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B694263:{NFSU2_TR(0x694263);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B694267:{NFSU2_TR(0x694267);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69426a:{NFSU2_TR(0x69426a);
{wv<8>((R+4368),uo::pi2fd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B69426e:{NFSU2_TR(0x69426e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B694272:{NFSU2_TR(0x694272);
{wv<8>((R+4384),uo::pi2fd<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B694276:{NFSU2_TR(0x694276);
__builtin_memmove((R+4400),(R+4384),8);
}
B694279:{NFSU2_TR(0x694279);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69427c:{NFSU2_TR(0x69427c);
{SPILL_OUT();c.pc=0x69427cu;V r_=user_op(c,524532,{rv<8>((R+4432)),rv<8>((R+4384))});SPILL_IN();wv<8>((R+4432),r_);}
}
B694280:{NFSU2_TR(0x694280);
{SPILL_OUT();c.pc=0x694280u;V r_=user_op(c,524532,{rv<8>((R+4400)),rv<8>((R+4400))});SPILL_IN();wv<8>((R+4400),r_);}
}
B694284:{NFSU2_TR(0x694284);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694288:{NFSU2_TR(0x694288);
__builtin_memmove((R+4436),(R+4400),4);
}
B69428b:{NFSU2_TR(0x69428b);
{SPILL_OUT();c.pc=0x69428bu;V r_=user_op(c,524534,{rv<8>((R+4384)),rv<8>((R+4432))});SPILL_IN();wv<8>((R+4384),r_);}
}
B69428f:{NFSU2_TR(0x69428f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B694293:{NFSU2_TR(0x694293);
{SPILL_OUT();c.pc=0x694293u;V r_=user_op(c,524536,{rv<8>((R+4384)),rv<8>((R+4432))});SPILL_IN();wv<8>((R+4384),r_);}
}
B694297:{NFSU2_TR(0x694297);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71f0))));}
}
B69429f:{NFSU2_TR(0x69429f);
__builtin_memmove((R+4432),(R+4416),8);
}
B6942a2:{NFSU2_TR(0x6942a2);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6942a6:{NFSU2_TR(0x6942a6);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B6942a9:{NFSU2_TR(0x6942a9);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71e0))));}
}
B6942b1:{NFSU2_TR(0x6942b1);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6942b5:{NFSU2_TR(0x6942b5);
{SPILL_OUT();c.pc=0x6942b5u;V r_=user_op(c,524532,{rv<8>((R+4448)),rv<8>((R+4432))});SPILL_IN();wv<8>((R+4448),r_);}
}
B6942b9:{NFSU2_TR(0x6942b9);
w8(R+4352,u64(u64(r8(R+4352))^u64(m8(0x7b71d8))));
}
B6942c0:{NFSU2_TR(0x6942c0);
{SPILL_OUT();c.pc=0x6942c0u;V r_=user_op(c,524534,{rv<8>((R+4432)),rv<8>((R+4448))});SPILL_IN();wv<8>((R+4432),r_);}
}
B6942c4:{NFSU2_TR(0x6942c4);
{SPILL_OUT();c.pc=0x6942c4u;V r_=user_op(c,524536,{rv<8>((R+4432)),rv<8>((R+4448))});SPILL_IN();wv<8>((R+4432),r_);}
}
B6942c8:{NFSU2_TR(0x6942c8);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B6942cc:{NFSU2_TR(0x6942cc);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B6942d0:{NFSU2_TR(0x6942d0);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B6942d3:{NFSU2_TR(0x6942d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B6942d7:{NFSU2_TR(0x6942d7);
w2(R+4260,0xffffu);
}
B6942d9:{NFSU2_TR(0x6942d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6942dc:{NFSU2_TR(0x6942dc);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6942dd:{NFSU2_TR(0x6942dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6942e0:{NFSU2_TR(0x6942e0);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6942e9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6942e2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6942e2:L6942e2:{bud-=3;NFSU2_TR(0x6942e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6942e5:{NFSU2_TR(0x6942e5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6942e6:{NFSU2_TR(0x6942e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
{[[clang::musttail]] return blk_6942e9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6942e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6942e9:L6942e9:{bud-=2;NFSU2_TR(0x6942e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6942ec:{NFSU2_TR(0x6942ec);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6942f1ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d0eu);}[[clang::musttail]] return blk_693d0e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6942f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6942f1:L6942f1:{bud-=3;NFSU2_TR(0x6942f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6942f4:{NFSU2_TR(0x6942f4);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B6942f5:{NFSU2_TR(0x6942f5);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_694318(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694318:L694318:{bud-=24;NFSU2_TR(0x694318);
__builtin_memmove((R+28),(R+28),4);
}
B69431a:{NFSU2_TR(0x69431a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69431b:{NFSU2_TR(0x69431b);
__builtin_memmove((R+20),(G+16),4);
}
B69431d:{NFSU2_TR(0x69431d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x40ull))));
}
B694320:{NFSU2_TR(0x694320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694323:{NFSU2_TR(0x694323);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B694325:{NFSU2_TR(0x694325);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694326:{NFSU2_TR(0x694326);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B694328:{NFSU2_TR(0x694328);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694329:{NFSU2_TR(0x694329);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69432c:{NFSU2_TR(0x69432c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B69432e:{NFSU2_TR(0x69432e);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((G+0),(U+0),1);
}
B694331:{NFSU2_TR(0x694331);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B694333:{NFSU2_TR(0x694333);
w4(G+0,shl<u32>(r4(G+0),u64(u32(0x1ull))));
}
B694335:{NFSU2_TR(0x694335);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B694337:{NFSU2_TR(0x694337);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((R+8),(U+0),1);
}
B69433a:{NFSU2_TR(0x69433a);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B69433c:{NFSU2_TR(0x69433c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69433e:{NFSU2_TR(0x69433e);
w4(G+0,shl<u32>(r4(G+0),u64(u32(0x1ull))));
}
B694340:{NFSU2_TR(0x694340);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B694343:{NFSU2_TR(0x694343);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
__builtin_memmove((R+8),(U+0),1);
}
B694346:{NFSU2_TR(0x694346);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B694348:{NFSU2_TR(0x694348);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x7ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B69434b:{NFSU2_TR(0x69434b);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6943ed(ARGS);}}
}
B694351:L694351:{bud-=1;NFSU2_TR(0x694351);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x69449bull))+u32(r4(U+0))));
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
PN u32 blk_694358(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694358:L694358:{bud-=33;NFSU2_TR(0x694358);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69435a:{NFSU2_TR(0x69435a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69435d:{NFSU2_TR(0x69435d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69435f:{NFSU2_TR(0x69435f);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694362:{NFSU2_TR(0x694362);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694364:{NFSU2_TR(0x694364);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694367:{NFSU2_TR(0x694367);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694369:{NFSU2_TR(0x694369);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69436c:{NFSU2_TR(0x69436c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69436e:{NFSU2_TR(0x69436e);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694371:{NFSU2_TR(0x694371);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694373:{NFSU2_TR(0x694373);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694376:{NFSU2_TR(0x694376);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694378:{NFSU2_TR(0x694378);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69437b:{NFSU2_TR(0x69437b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69437d:{NFSU2_TR(0x69437d);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694380:{NFSU2_TR(0x694380);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694382:{NFSU2_TR(0x694382);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694385:{NFSU2_TR(0x694385);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694387:{NFSU2_TR(0x694387);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69438a:{NFSU2_TR(0x69438a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69438c:{NFSU2_TR(0x69438c);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69438f:{NFSU2_TR(0x69438f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694391:{NFSU2_TR(0x694391);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694394:{NFSU2_TR(0x694394);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B694396:{NFSU2_TR(0x694396);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694399:{NFSU2_TR(0x694399);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B69439b:{NFSU2_TR(0x69439b);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69439e:{NFSU2_TR(0x69439e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6943a0:{NFSU2_TR(0x6943a0);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6943a3:{NFSU2_TR(0x6943a3);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6943a5:{NFSU2_TR(0x6943a5);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6943a8:{NFSU2_TR(0x6943a8);
{[[clang::musttail]] return blk_6943ed(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943aa:L6943aa:{bud-=2;NFSU2_TR(0x6943aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6943ad:{NFSU2_TR(0x6943ad);
{[[clang::musttail]] return blk_6943e3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943af(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943af:L6943af:{bud-=2;NFSU2_TR(0x6943af);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943b0:{NFSU2_TR(0x6943b0);
{[[clang::musttail]] return blk_6943e3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943b2:L6943b2:{bud-=3;NFSU2_TR(0x6943b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6943b5:{NFSU2_TR(0x6943b5);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943b6:{NFSU2_TR(0x6943b6);
{[[clang::musttail]] return blk_6943d6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943b8:L6943b8:{bud-=2;NFSU2_TR(0x6943b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943b9:{NFSU2_TR(0x6943b9);
{[[clang::musttail]] return blk_6943e3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943bb:L6943bb:{bud-=2;NFSU2_TR(0x6943bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6943be:{NFSU2_TR(0x6943be);
{[[clang::musttail]] return blk_6943c1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943c0:L6943c0:{bud-=1;NFSU2_TR(0x6943c0);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_6943c1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943c1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943c1:L6943c1:{bud-=2;NFSU2_TR(0x6943c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943c2:{NFSU2_TR(0x6943c2);
{[[clang::musttail]] return blk_6943d6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943c4:L6943c4:{bud-=5;NFSU2_TR(0x6943c4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943c5:{NFSU2_TR(0x6943c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943c6:{NFSU2_TR(0x6943c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6943c9:{NFSU2_TR(0x6943c9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943ca:{NFSU2_TR(0x6943ca);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6943cfull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943cf:L6943cf:{bud-=3;NFSU2_TR(0x6943cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B6943d2:{NFSU2_TR(0x6943d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6943d5:{NFSU2_TR(0x6943d5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_6943d6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943d6:L6943d6:{bud-=3;NFSU2_TR(0x6943d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6943d9:{NFSU2_TR(0x6943d9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943da:{NFSU2_TR(0x6943da);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6943dfull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d9bu);}[[clang::musttail]] return blk_693d9b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943df:L6943df:{bud-=2;NFSU2_TR(0x6943df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6943e2:{NFSU2_TR(0x6943e2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_6943e3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943e3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943e3:L6943e3:{bud-=4;NFSU2_TR(0x6943e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6943e6:{NFSU2_TR(0x6943e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943e7:{NFSU2_TR(0x6943e7);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6943e8:{NFSU2_TR(0x6943e8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6943edull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x692f76u);}[[clang::musttail]] return blk_692f76(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6943ed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6943ed:L6943ed:{bud-=4;NFSU2_TR(0x6943ed);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(F+0,u8((r4(U+14))<(r4(R+24))));
w1(F+11,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(F+7,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+13))==(u8(0x0ull))));
}
B6943f0:{NFSU2_TR(0x6943f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6943f1:{NFSU2_TR(0x6943f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6943f2:{NFSU2_TR(0x6943f2);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_694485(ARGS);}}
}
B6943f8:L6943f8:{bud-=38;NFSU2_TR(0x6943f8);
w2(R+4260,0xffffu);
}
B6943fa:{NFSU2_TR(0x6943fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6943fd:{NFSU2_TR(0x6943fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694400:{NFSU2_TR(0x694400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694403:{NFSU2_TR(0x694403);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B694406:{NFSU2_TR(0x694406);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69440a:{NFSU2_TR(0x69440a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69440d:{NFSU2_TR(0x69440d);
{wv<8>((R+4368),uo::pi2fd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694411:{NFSU2_TR(0x694411);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B694415:{NFSU2_TR(0x694415);
{wv<8>((R+4384),uo::pi2fd<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B694419:{NFSU2_TR(0x694419);
__builtin_memmove((R+4400),(R+4384),8);
}
B69441c:{NFSU2_TR(0x69441c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69441f:{NFSU2_TR(0x69441f);
{SPILL_OUT();c.pc=0x69441fu;V r_=user_op(c,524532,{rv<8>((R+4432)),rv<8>((R+4384))});SPILL_IN();wv<8>((R+4432),r_);}
}
B694423:{NFSU2_TR(0x694423);
{SPILL_OUT();c.pc=0x694423u;V r_=user_op(c,524532,{rv<8>((R+4400)),rv<8>((R+4400))});SPILL_IN();wv<8>((R+4400),r_);}
}
B694427:{NFSU2_TR(0x694427);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69442b:{NFSU2_TR(0x69442b);
__builtin_memmove((R+4436),(R+4400),4);
}
B69442e:{NFSU2_TR(0x69442e);
{SPILL_OUT();c.pc=0x69442eu;V r_=user_op(c,524534,{rv<8>((R+4384)),rv<8>((R+4432))});SPILL_IN();wv<8>((R+4384),r_);}
}
B694432:{NFSU2_TR(0x694432);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B694436:{NFSU2_TR(0x694436);
{SPILL_OUT();c.pc=0x694436u;V r_=user_op(c,524536,{rv<8>((R+4384)),rv<8>((R+4432))});SPILL_IN();wv<8>((R+4384),r_);}
}
B69443a:{NFSU2_TR(0x69443a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71f0))));}
}
B694442:{NFSU2_TR(0x694442);
__builtin_memmove((R+4432),(R+4416),8);
}
B694445:{NFSU2_TR(0x694445);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694449:{NFSU2_TR(0x694449);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B69444c:{NFSU2_TR(0x69444c);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71e0))));}
}
B694454:{NFSU2_TR(0x694454);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B694458:{NFSU2_TR(0x694458);
{SPILL_OUT();c.pc=0x694458u;V r_=user_op(c,524532,{rv<8>((R+4448)),rv<8>((R+4432))});SPILL_IN();wv<8>((R+4448),r_);}
}
B69445c:{NFSU2_TR(0x69445c);
w8(R+4352,u64(u64(r8(R+4352))^u64(m8(0x7b71d8))));
}
B694463:{NFSU2_TR(0x694463);
{SPILL_OUT();c.pc=0x694463u;V r_=user_op(c,524534,{rv<8>((R+4432)),rv<8>((R+4448))});SPILL_IN();wv<8>((R+4432),r_);}
}
B694467:{NFSU2_TR(0x694467);
{SPILL_OUT();c.pc=0x694467u;V r_=user_op(c,524536,{rv<8>((R+4432)),rv<8>((R+4448))});SPILL_IN();wv<8>((R+4432),r_);}
}
B69446b:{NFSU2_TR(0x69446b);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B69446f:{NFSU2_TR(0x69446f);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B694473:{NFSU2_TR(0x694473);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B694476:{NFSU2_TR(0x694476);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B69447a:{NFSU2_TR(0x69447a);
w2(R+4260,0xffffu);
}
B69447c:{NFSU2_TR(0x69447c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B69447f:{NFSU2_TR(0x69447f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694480:{NFSU2_TR(0x694480);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B694483:{NFSU2_TR(0x694483);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_69448c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694485(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694485:L694485:{bud-=3;NFSU2_TR(0x694485);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((G+0),(U+0),4);
}
B694488:{NFSU2_TR(0x694488);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694489:{NFSU2_TR(0x694489);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
{[[clang::musttail]] return blk_69448c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69448c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69448c:L69448c:{bud-=2;NFSU2_TR(0x69448c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+8));
}
B69448f:{NFSU2_TR(0x69448f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x694494ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x693d0eu);}[[clang::musttail]] return blk_693d0e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694494(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694494:L694494:{bud-=3;NFSU2_TR(0x694494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694497:{NFSU2_TR(0x694497);
__builtin_memmove((G+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B694498:{NFSU2_TR(0x694498);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_6944c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6944c0:L6944c0:{bud-=10;NFSU2_TR(0x6944c0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xcull))));
}
B6944c3:{NFSU2_TR(0x6944c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(G+16)),r4(U+0));
}
B6944c6:{NFSU2_TR(0x6944c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6944ca:{NFSU2_TR(0x6944ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6944ce:{NFSU2_TR(0x6944ce);
__builtin_memmove((R+20),(G+16),4);
}
B6944d0:{NFSU2_TR(0x6944d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6944d3:{NFSU2_TR(0x6944d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6944d6:{NFSU2_TR(0x6944d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6944d9:{NFSU2_TR(0x6944d9);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6944dc:{NFSU2_TR(0x6944dc);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6944ff(ARGS);}}
}
B6944de:L6944de:{bud-=2;NFSU2_TR(0x6944de);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6944e1:{NFSU2_TR(0x6944e1);
if(r1(F+6)){{[[clang::musttail]] return blk_6945d2(ARGS);}}
}
B6944e7:L6944e7:{bud-=5;NFSU2_TR(0x6944e7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xcull))));
}
B6944ea:{NFSU2_TR(0x6944ea);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+16)),r4(U+0));
}
B6944ed:{NFSU2_TR(0x6944ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6944f1:{NFSU2_TR(0x6944f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6944f5:{NFSU2_TR(0x6944f5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6944faull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x63be32u);}[[clang::musttail]] return blk_63be32(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6944fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6944fa:L6944fa:{bud-=1;NFSU2_TR(0x6944fa);
{[[clang::musttail]] return blk_6945d2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6944ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6944ff:L6944ff:{bud-=2;NFSU2_TR(0x6944ff);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B694502:{NFSU2_TR(0x694502);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6945b2(ARGS);}}
}
B694508:L694508:{bud-=44;NFSU2_TR(0x694508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w8(R+4352,u64(r4(U+0)));
}
B69450b:{NFSU2_TR(0x69450b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B69450f:{NFSU2_TR(0x69450f);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B694512:{NFSU2_TR(0x694512);
__builtin_memmove((R+4464),gp(0x80af00),8);
}
B694519:{NFSU2_TR(0x694519);
__builtin_memmove((R+4358),(R+4450),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4448),2);
}
B69451c:{NFSU2_TR(0x69451c);
__builtin_memmove((R+4374),(R+4450),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4448),2);
}
B69451f:{NFSU2_TR(0x69451f);
__builtin_memmove((R+4384),(R+4352),8);
}
B694522:{NFSU2_TR(0x694522);
__builtin_memmove((R+4400),(R+4352),8);
}
B694525:{NFSU2_TR(0x694525);
__builtin_memmove((R+4416),(R+4368),8);
}
B694528:{NFSU2_TR(0x694528);
__builtin_memmove((R+4432),(R+4368),8);
}
B69452b:{NFSU2_TR(0x69452b);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4464))));
}
B69452e:{NFSU2_TR(0x69452e);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4464))));
}
B694531:{NFSU2_TR(0x694531);
__builtin_memmove((R+4464),gp(0x80af10),8);
}
B694538:{NFSU2_TR(0x694538);
u8 U[10];
w1(U+0,u8((r4(R+4352))==(r4(R+4448))));
w4(U+1,u32(r1(U+0)));
w4(R+4352,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4356))==(r4(R+4452))));
w4(U+6,u32(r1(U+5)));
w4(R+4356,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
}
B69453b:{NFSU2_TR(0x69453b);
u8 U[10];
w1(U+0,u8((r4(R+4368))==(r4(R+4448))));
w4(U+1,u32(r1(U+0)));
w4(R+4368,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4372))==(r4(R+4452))));
w4(U+6,u32(r1(U+5)));
w4(R+4372,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
}
B69453e:{NFSU2_TR(0x69453e);
__builtin_memmove((R+4448),gp(0x80af20),8);
}
B694545:{NFSU2_TR(0x694545);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4448))));
}
B694548:{NFSU2_TR(0x694548);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B69454b:{NFSU2_TR(0x69454b);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4384))));
}
B69454e:{NFSU2_TR(0x69454e);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4416))));
}
B694551:{NFSU2_TR(0x694551);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4464))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4468))));
}
B694554:{NFSU2_TR(0x694554);
w4(R+4432,u32(u32(r4(R+4432))+u32(r4(R+4464))));
w4(R+4436,u32(u32(r4(R+4436))+u32(r4(R+4468))));
}
B694557:{NFSU2_TR(0x694557);
__builtin_memmove((R+4448),(R+4352),8);
}
B69455a:{NFSU2_TR(0x69455a);
__builtin_memmove((R+4464),(R+4368),8);
}
B69455d:{NFSU2_TR(0x69455d);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x80af30))));
}
B694564:{NFSU2_TR(0x694564);
w8(R+4368,u64(u64(r8(R+4368))&u64(m8(0x80af30))));
}
B69456b:{NFSU2_TR(0x69456b);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4352))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4356))));
}
B69456e:{NFSU2_TR(0x69456e);
w4(R+4432,u32(u32(r4(R+4432))+u32(r4(R+4368))));
w4(R+4436,u32(u32(r4(R+4436))+u32(r4(R+4372))));
}
B694571:{NFSU2_TR(0x694571);
w8(R+4448,u64(u64(r8(R+4448))&u64(m8(0x80af40))));
}
B694578:{NFSU2_TR(0x694578);
w8(R+4464,u64(u64(r8(R+4464))&u64(m8(0x80af40))));
}
B69457f:{NFSU2_TR(0x69457f);
w4(R+4384,shl<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shl<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B694583:{NFSU2_TR(0x694583);
w4(R+4416,shl<u32>(r4(R+4416),u64(u32(0x10ull))));
w4(R+4420,shl<u32>(r4(R+4420),u64(u32(0x10ull))));
}
B694587:{NFSU2_TR(0x694587);
w4(R+4400,shl<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,shl<u32>(r4(R+4404),u64(u32(0xdull))));
}
B69458b:{NFSU2_TR(0x69458b);
w4(R+4432,shl<u32>(r4(R+4432),u64(u32(0xdull))));
w4(R+4436,shl<u32>(r4(R+4436),u64(u32(0xdull))));
}
B69458f:{NFSU2_TR(0x69458f);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B694593:{NFSU2_TR(0x694593);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B694597:{NFSU2_TR(0x694597);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4384))));
}
B69459a:{NFSU2_TR(0x69459a);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4416))));
}
B69459d:{NFSU2_TR(0x69459d);
u8 U[8];
__builtin_memmove((U+0),(R+4400),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B6945a0:{NFSU2_TR(0x6945a0);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6945a4:{NFSU2_TR(0x6945a4);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6945a7:{NFSU2_TR(0x6945a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6945aa:{NFSU2_TR(0x6945aa);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
}
B6945ad:{NFSU2_TR(0x6945ad);
{if(__builtin_expect(bud<=0,0)){EXIT(0x6944ffu);}goto L6944ff;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6945b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6945b2:L6945b2:{bud-=2;NFSU2_TR(0x6945b2);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6945b5:{NFSU2_TR(0x6945b5);
if(r1(F+6)){{[[clang::musttail]] return blk_6945d2(ARGS);}}
}
B6945b7:L6945b7:{bud-=9;NFSU2_TR(0x6945b7);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
}
B6945ba:{NFSU2_TR(0x6945ba);
__builtin_memmove((R+28),(G+4),4);
}
B6945bc:{NFSU2_TR(0x6945bc);
__builtin_memmove((R+24),(G+4),4);
}
B6945be:{NFSU2_TR(0x6945be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6945c1:{NFSU2_TR(0x6945c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6945c4:{NFSU2_TR(0x6945c4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6945c6:{NFSU2_TR(0x6945c6);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+28))));
}
B6945c8:{NFSU2_TR(0x6945c8);
w4(G+4,u32(0x4ull));
}
B6945cd:{NFSU2_TR(0x6945cd);
{if(__builtin_expect(bud<=0,0)){EXIT(0x6944ffu);}[[clang::musttail]] return blk_6944ff(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6945d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6945d2:L6945d2:{bud-=8;NFSU2_TR(0x6945d2);
__builtin_memmove((G+16),(R+20),4);
}
B6945d4:{NFSU2_TR(0x6945d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6945d7:{NFSU2_TR(0x6945d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6945da:{NFSU2_TR(0x6945da);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6945de:{NFSU2_TR(0x6945de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6945e2:{NFSU2_TR(0x6945e2);
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
B6945e5:{NFSU2_TR(0x6945e5);
w2(R+4260,0xffffu);
}
B6945e7:{NFSU2_TR(0x6945e7);
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
PN u32 blk_694600(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694600:L694600:{bud-=11;NFSU2_TR(0x694600);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x1cull))));
}
B694603:{NFSU2_TR(0x694603);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B694607:{NFSU2_TR(0x694607);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69460b:{NFSU2_TR(0x69460b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69460f:{NFSU2_TR(0x69460f);
__builtin_memmove((R+20),(G+16),4);
}
B694611:{NFSU2_TR(0x694611);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff8ull))));
}
B694614:{NFSU2_TR(0x694614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694617:{NFSU2_TR(0x694617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69461a:{NFSU2_TR(0x69461a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69461d:{NFSU2_TR(0x69461d);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B694620:{NFSU2_TR(0x694620);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_694643(ARGS);}}
}
B694622:L694622:{bud-=2;NFSU2_TR(0x694622);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B694625:{NFSU2_TR(0x694625);
if(r1(F+6)){{[[clang::musttail]] return blk_694762(ARGS);}}
}
B69462b:L69462b:{bud-=5;NFSU2_TR(0x69462b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xcull))));
}
B69462e:{NFSU2_TR(0x69462e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+16)),r4(U+0));
}
B694631:{NFSU2_TR(0x694631);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B694635:{NFSU2_TR(0x694635);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B694639:{NFSU2_TR(0x694639);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x69463eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x63bd7du);}[[clang::musttail]] return blk_63bd7d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_69463e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69463e:L69463e:{bud-=1;NFSU2_TR(0x69463e);
{[[clang::musttail]] return blk_694762(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694643(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694643:L694643:{bud-=2;NFSU2_TR(0x694643);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B694646:{NFSU2_TR(0x694646);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_694742(ARGS);}}
}
B69464c:L69464c:{bud-=64;NFSU2_TR(0x69464c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69464f:{NFSU2_TR(0x69464f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B694653:{NFSU2_TR(0x694653);
__builtin_memmove((R+4448),gp(0x80af70),8);
}
B69465a:{NFSU2_TR(0x69465a);
__builtin_memmove((R+4464),(R+4448),8);
}
B69465d:{NFSU2_TR(0x69465d);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4352))));
}
B694660:{NFSU2_TR(0x694660);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4368))));
}
B694663:{NFSU2_TR(0x694663);
w4(R+4448,shr<u32>(r4(R+4448),u64(u32(0x12ull))));
w4(R+4452,shr<u32>(r4(R+4452),u64(u32(0x12ull))));
}
B694667:{NFSU2_TR(0x694667);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x12ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x12ull))));
}
B69466b:{NFSU2_TR(0x69466b);
{wv<8>((R+4448),uo::packssdw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B69466e:{NFSU2_TR(0x69466e);
w4(R+4448,shl<u32>(r4(R+4448),u64(u32(0x2ull))));
w4(R+4452,shl<u32>(r4(R+4452),u64(u32(0x2ull))));
}
B694672:{NFSU2_TR(0x694672);
u8 U[8];
__builtin_memmove((U+0),(R+4448),8);
s8_(u32(r4(G+16)),r8(U+0));
}
B694676:{NFSU2_TR(0x694676);
__builtin_memmove((R+4384),gp(0x80afc0),8);
}
B69467d:{NFSU2_TR(0x69467d);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4384))));
}
B694680:{NFSU2_TR(0x694680);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B694683:{NFSU2_TR(0x694683);
__builtin_memmove((R+4448),(R+4352),8);
}
B694686:{NFSU2_TR(0x694686);
__builtin_memmove((R+4464),(R+4368),8);
}
B694689:{NFSU2_TR(0x694689);
__builtin_memmove((R+4400),gp(0x80af60),8);
}
B694690:{NFSU2_TR(0x694690);
__builtin_memmove((R+4416),(R+4400),8);
}
B694693:{NFSU2_TR(0x694693);
__builtin_memmove((R+4432),(R+4400),8);
}
B694696:{NFSU2_TR(0x694696);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B69469a:{NFSU2_TR(0x69469a);
__builtin_memmove((R+4384),(R+4400),8);
}
B69469d:{NFSU2_TR(0x69469d);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4416))));
}
B6946a0:{NFSU2_TR(0x6946a0);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6946a4:{NFSU2_TR(0x6946a4);
w8(R+4384,u64(u64(r8(R+4384))&u64(m8(0x80afd0))));
}
B6946ab:{NFSU2_TR(0x6946ab);
w4(R+4352,u32(u32(r4(R+4352))-u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))-u32(r4(R+4388))));
}
B6946ae:{NFSU2_TR(0x6946ae);
{wv<8>((R+4432),uo::pfcmpge<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B6946b2:{NFSU2_TR(0x6946b2);
__builtin_memmove((R+4400),(R+4432),8);
}
B6946b5:{NFSU2_TR(0x6946b5);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(R+4416))));
}
B6946b8:{NFSU2_TR(0x6946b8);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B6946bc:{NFSU2_TR(0x6946bc);
w8(R+4400,u64(u64(r8(R+4400))&u64(m8(0x80afd0))));
}
B6946c3:{NFSU2_TR(0x6946c3);
w4(R+4368,u32(u32(r4(R+4368))-u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))-u32(r4(R+4404))));
}
B6946c6:{NFSU2_TR(0x6946c6);
__builtin_memmove((R+4384),(R+4352),8);
}
B6946c9:{NFSU2_TR(0x6946c9);
__builtin_memmove((R+4400),(R+4368),8);
}
B6946cc:{NFSU2_TR(0x6946cc);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0xdull))));
}
B6946d0:{NFSU2_TR(0x6946d0);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0xdull))));
}
B6946d4:{NFSU2_TR(0x6946d4);
__builtin_memmove((R+4416),gp(0x80af90),8);
}
B6946db:{NFSU2_TR(0x6946db);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4416))));
}
B6946de:{NFSU2_TR(0x6946de);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4416))));
}
B6946e1:{NFSU2_TR(0x6946e1);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B6946e4:{NFSU2_TR(0x6946e4);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B6946e7:{NFSU2_TR(0x6946e7);
__builtin_memmove((R+4416),gp(0x80af50),8);
}
B6946ee:{NFSU2_TR(0x6946ee);
__builtin_memmove((R+4432),(R+4416),8);
}
B6946f1:{NFSU2_TR(0x6946f1);
{wv<8>((R+4416),uo::pfcmpgt<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6946f5:{NFSU2_TR(0x6946f5);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B6946f9:{NFSU2_TR(0x6946f9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+16))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B6946fd:{NFSU2_TR(0x6946fd);
__builtin_memmove((R+4384),gp(0x80afa0),8);
}
B694704:{NFSU2_TR(0x694704);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B694707:{NFSU2_TR(0x694707);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4384))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4388))));
}
B69470a:{NFSU2_TR(0x69470a);
__builtin_memmove((R+4400),gp(0x80afe0),8);
}
B694711:{NFSU2_TR(0x694711);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0xdull))));
}
B694715:{NFSU2_TR(0x694715);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0xdull))));
}
B694719:{NFSU2_TR(0x694719);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4416))));
}
B69471c:{NFSU2_TR(0x69471c);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B69471f:{NFSU2_TR(0x69471f);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4416))));
w8(R+4416,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B694722:{NFSU2_TR(0x694722);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4432))));
w8(R+4432,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B694725:{NFSU2_TR(0x694725);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B694728:{NFSU2_TR(0x694728);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4432))));
}
B69472b:{NFSU2_TR(0x69472b);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69472e:{NFSU2_TR(0x69472e);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4448))));
}
B694731:{NFSU2_TR(0x694731);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694734:{NFSU2_TR(0x694734);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B694737:{NFSU2_TR(0x694737);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69473a:{NFSU2_TR(0x69473a);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
}
B69473d:{NFSU2_TR(0x69473d);
{if(__builtin_expect(bud<=0,0)){EXIT(0x694643u);}goto L694643;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694742(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694742:L694742:{bud-=2;NFSU2_TR(0x694742);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B694745:{NFSU2_TR(0x694745);
if(r1(F+6)){{[[clang::musttail]] return blk_694762(ARGS);}}
}
B694747:L694747:{bud-=9;NFSU2_TR(0x694747);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x4ull))));
}
B69474a:{NFSU2_TR(0x69474a);
__builtin_memmove((R+28),(G+4),4);
}
B69474c:{NFSU2_TR(0x69474c);
__builtin_memmove((R+24),(G+4),4);
}
B69474e:{NFSU2_TR(0x69474e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x2ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B694751:{NFSU2_TR(0x694751);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B694754:{NFSU2_TR(0x694754);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B694756:{NFSU2_TR(0x694756);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+28))));
}
B694758:{NFSU2_TR(0x694758);
w4(G+4,u32(0x4ull));
}
B69475d:{NFSU2_TR(0x69475d);
{if(__builtin_expect(bud<=0,0)){EXIT(0x694643u);}[[clang::musttail]] return blk_694643(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_694762(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694762:L694762:{bud-=8;NFSU2_TR(0x694762);
__builtin_memmove((G+16),(R+20),4);
}
B694764:{NFSU2_TR(0x694764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694767:{NFSU2_TR(0x694767);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B69476b:{NFSU2_TR(0x69476b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69476f:{NFSU2_TR(0x69476f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B694773:{NFSU2_TR(0x694773);
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
B694776:{NFSU2_TR(0x694776);
w2(R+4260,0xffffu);
}
B694778:{NFSU2_TR(0x694778);
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
PN u32 blk_69477b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69477b:L69477b:{bud-=27;NFSU2_TR(0x69477b);
__builtin_memmove((R+28),(R+28),4);
}
B69477d:{NFSU2_TR(0x69477d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B69477e:{NFSU2_TR(0x69477e);
__builtin_memmove((R+20),(G+16),4);
}
B694780:{NFSU2_TR(0x694780);
w2(R+4260,0xffffu);
}
B694782:{NFSU2_TR(0x694782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694785:{NFSU2_TR(0x694785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694788:{NFSU2_TR(0x694788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B69478b:{NFSU2_TR(0x69478b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69478e:{NFSU2_TR(0x69478e);
__builtin_memmove((R+4368),(R+4352),8);
}
B694791:{NFSU2_TR(0x694791);
__builtin_memmove((R+4356),(R+4352),4);
}
B694794:{NFSU2_TR(0x694794);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B694797:{NFSU2_TR(0x694797);
__builtin_memmove((R+4400),(R+4352),8);
}
B69479a:{NFSU2_TR(0x69479a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B69479e:{NFSU2_TR(0x69479e);
__builtin_memmove((R+4416),(R+4368),8);
}
B6947a1:{NFSU2_TR(0x6947a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6947a6:{NFSU2_TR(0x6947a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6947ab:{NFSU2_TR(0x6947ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6947b0:{NFSU2_TR(0x6947b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6947b5:{NFSU2_TR(0x6947b5);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6947b9:{NFSU2_TR(0x6947b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6947be:{NFSU2_TR(0x6947be);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B6947c2:{NFSU2_TR(0x6947c2);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+4)),r8(U+0));
}
B6947c5:{NFSU2_TR(0x6947c5);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6947c9:{NFSU2_TR(0x6947c9);
w2(R+4260,0xffffu);
}
B6947cb:{NFSU2_TR(0x6947cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6947ce:{NFSU2_TR(0x6947ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6947cf:{NFSU2_TR(0x6947cf);
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
PN u32 blk_6947d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6947d2:L6947d2:{bud-=21;NFSU2_TR(0x6947d2);
__builtin_memmove((R+28),(R+28),4);
}
B6947d4:{NFSU2_TR(0x6947d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6947d5:{NFSU2_TR(0x6947d5);
__builtin_memmove((R+20),(G+16),4);
}
B6947d7:{NFSU2_TR(0x6947d7);
w2(R+4260,0xffffu);
}
B6947d9:{NFSU2_TR(0x6947d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6947dc:{NFSU2_TR(0x6947dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6947df:{NFSU2_TR(0x6947df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6947e2:{NFSU2_TR(0x6947e2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6947e5:{NFSU2_TR(0x6947e5);
__builtin_memmove((R+4368),(R+4352),8);
}
B6947e8:{NFSU2_TR(0x6947e8);
__builtin_memmove((R+4356),(R+4352),4);
}
B6947eb:{NFSU2_TR(0x6947eb);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B6947ee:{NFSU2_TR(0x6947ee);
__builtin_memmove((R+4400),(R+4352),8);
}
B6947f1:{NFSU2_TR(0x6947f1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6947f5:{NFSU2_TR(0x6947f5);
__builtin_memmove((R+4416),(R+4368),8);
}
B6947f8:{NFSU2_TR(0x6947f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6947fd:{NFSU2_TR(0x6947fd);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694801:{NFSU2_TR(0x694801);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+4)),r8(U+0));
}
B694804:{NFSU2_TR(0x694804);
w2(R+4260,0xffffu);
}
B694806:{NFSU2_TR(0x694806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694809:{NFSU2_TR(0x694809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69480a:{NFSU2_TR(0x69480a);
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
PN u32 blk_69480d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69480d:L69480d:{bud-=31;NFSU2_TR(0x69480d);
__builtin_memmove((R+28),(R+28),4);
}
B69480f:{NFSU2_TR(0x69480f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694810:{NFSU2_TR(0x694810);
__builtin_memmove((R+20),(G+16),4);
}
B694812:{NFSU2_TR(0x694812);
w2(R+4260,0xffffu);
}
B694814:{NFSU2_TR(0x694814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694817:{NFSU2_TR(0x694817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69481a:{NFSU2_TR(0x69481a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B69481d:{NFSU2_TR(0x69481d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694820:{NFSU2_TR(0x694820);
__builtin_memmove((R+4368),(R+4352),8);
}
B694823:{NFSU2_TR(0x694823);
__builtin_memmove((R+4356),(R+4352),4);
}
B694826:{NFSU2_TR(0x694826);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B694829:{NFSU2_TR(0x694829);
__builtin_memmove((R+4400),(R+4352),8);
}
B69482c:{NFSU2_TR(0x69482c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694830:{NFSU2_TR(0x694830);
__builtin_memmove((R+4416),(R+4368),8);
}
B694833:{NFSU2_TR(0x694833);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B694838:{NFSU2_TR(0x694838);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69483d:{NFSU2_TR(0x69483d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B694842:{NFSU2_TR(0x694842);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B694847:{NFSU2_TR(0x694847);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69484b:{NFSU2_TR(0x69484b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B694850:{NFSU2_TR(0x694850);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B694854:{NFSU2_TR(0x694854);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694857:{NFSU2_TR(0x694857);
{SPILL_OUT();c.pc=0x694857u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4400))});SPILL_IN();wv<8>((R+4416),r_);}
}
B69485b:{NFSU2_TR(0x69485b);
{SPILL_OUT();c.pc=0x69485bu;V r_=user_op(c,524534,{rv<8>((R+4400)),rv<8>((R+4416))});SPILL_IN();wv<8>((R+4400),r_);}
}
B69485f:{NFSU2_TR(0x69485f);
{SPILL_OUT();c.pc=0x69485fu;V r_=user_op(c,524536,{rv<8>((R+4400)),rv<8>((R+4416))});SPILL_IN();wv<8>((R+4400),r_);}
}
B694863:{NFSU2_TR(0x694863);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694867:{NFSU2_TR(0x694867);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+4)),r8(U+0));
}
B69486a:{NFSU2_TR(0x69486a);
w2(R+4260,0xffffu);
}
B69486c:{NFSU2_TR(0x69486c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B69486f:{NFSU2_TR(0x69486f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B694870:{NFSU2_TR(0x694870);
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
PN u32 blk_694873(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694873:L694873:{bud-=39;NFSU2_TR(0x694873);
w2(R+4260,0xffffu);
}
B694875:{NFSU2_TR(0x694875);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B69487a:{NFSU2_TR(0x69487a);
__builtin_memmove((R+4368),(R+4352),8);
}
B69487d:{NFSU2_TR(0x69487d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694881:{NFSU2_TR(0x694881);
__builtin_memmove((R+4384),(R+4368),8);
}
B694884:{NFSU2_TR(0x694884);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694888:{NFSU2_TR(0x694888);
__builtin_memmove((R+4400),gp(0x7b71f0),8);
}
B69488f:{NFSU2_TR(0x69488f);
__builtin_memmove((R+4416),(R+4368),8);
}
B694892:{NFSU2_TR(0x694892);
__builtin_memmove((R+4464),(R+4384),8);
}
B694895:{NFSU2_TR(0x694895);
{wv<8>((R+4464),uo::pfsub<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B694899:{NFSU2_TR(0x694899);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B69489d:{NFSU2_TR(0x69489d);
__builtin_memmove((R+4448),(R+4384),8);
}
B6948a0:{NFSU2_TR(0x6948a0);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7b71f8))));}
}
B6948a8:{NFSU2_TR(0x6948a8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B6948ac:{NFSU2_TR(0x6948ac);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B6948b0:{NFSU2_TR(0x6948b0);
__builtin_memmove((R+4432),(R+4368),8);
}
B6948b3:{NFSU2_TR(0x6948b3);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6948b7:{NFSU2_TR(0x6948b7);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B6948bb:{NFSU2_TR(0x6948bb);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B6948bf:{NFSU2_TR(0x6948bf);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71e0))));}
}
B6948c7:{NFSU2_TR(0x6948c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6948cb:{NFSU2_TR(0x6948cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6948cf:{NFSU2_TR(0x6948cf);
__builtin_memmove((R+4372),(R+4368),4);
}
B6948d2:{NFSU2_TR(0x6948d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6948d6:{NFSU2_TR(0x6948d6);
__builtin_memmove((R+4452),(R+4448),4);
}
B6948d9:{NFSU2_TR(0x6948d9);
__builtin_memmove((R+4468),(R+4464),4);
}
B6948dc:{NFSU2_TR(0x6948dc);
__builtin_memmove((R+4388),(R+4384),4);
}
B6948df:{NFSU2_TR(0x6948df);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B6948e3:{NFSU2_TR(0x6948e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6948e7:{NFSU2_TR(0x6948e7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B6948eb:{NFSU2_TR(0x6948eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6948ef:{NFSU2_TR(0x6948ef);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B6948f3:{NFSU2_TR(0x6948f3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B6948f7:{NFSU2_TR(0x6948f7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+0))));}
}
B6948fb:{NFSU2_TR(0x6948fb);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B6948ff:{NFSU2_TR(0x6948ff);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B694903:{NFSU2_TR(0x694903);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694906:{NFSU2_TR(0x694906);
w2(R+4260,0xffffu);
}
B694908:{NFSU2_TR(0x694908);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_69490b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B69490b:L69490b:{bud-=20;NFSU2_TR(0x69490b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69490f:{NFSU2_TR(0x69490f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694913:{NFSU2_TR(0x694913);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694917:{NFSU2_TR(0x694917);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B69491c:{NFSU2_TR(0x69491c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69491f:{NFSU2_TR(0x69491f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B694922:{NFSU2_TR(0x694922);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B694925:{NFSU2_TR(0x694925);
__builtin_memmove((R+4452),(R+4448),4);
}
B694928:{NFSU2_TR(0x694928);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B69492d:{NFSU2_TR(0x69492d);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B694931:{NFSU2_TR(0x694931);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694935:{NFSU2_TR(0x694935);
__builtin_memmove((R+4468),(R+4464),4);
}
B694938:{NFSU2_TR(0x694938);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B69493c:{NFSU2_TR(0x69493c);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B694940:{NFSU2_TR(0x694940);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B694944:{NFSU2_TR(0x694944);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B694948:{NFSU2_TR(0x694948);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B69494c:{NFSU2_TR(0x69494c);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B69494f:{NFSU2_TR(0x69494f);
w2(R+4260,0xffffu);
}
B694951:{NFSU2_TR(0x694951);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_694954(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694954:L694954:{bud-=18;NFSU2_TR(0x694954);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694958:{NFSU2_TR(0x694958);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69495b:{NFSU2_TR(0x69495b);
__builtin_memmove((R+4368),(R+4352),8);
}
B69495e:{NFSU2_TR(0x69495e);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694962:{NFSU2_TR(0x694962);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694966:{NFSU2_TR(0x694966);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B69496a:{NFSU2_TR(0x69496a);
__builtin_memmove((R+4384),(R+4352),8);
}
B69496d:{NFSU2_TR(0x69496d);
{SPILL_OUT();c.pc=0x69496du;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL_IN();wv<8>((R+4416),r_);}
}
B694971:{NFSU2_TR(0x694971);
{wv<8>((R+4384),uo::pfcmpgt<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71c8))));}
}
B694979:{NFSU2_TR(0x694979);
__builtin_memmove((R+4432),(R+4416),8);
}
B69497c:{NFSU2_TR(0x69497c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B694980:{NFSU2_TR(0x694980);
{SPILL_OUT();c.pc=0x694980u;V r_=user_op(c,524535,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL_IN();wv<8>((R+4416),r_);}
}
B694984:{NFSU2_TR(0x694984);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B694987:{NFSU2_TR(0x694987);
{SPILL_OUT();c.pc=0x694987u;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4432))});SPILL_IN();wv<8>((R+4416),r_);}
}
B69498b:{NFSU2_TR(0x69498b);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B69498f:{NFSU2_TR(0x69498f);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694992:{NFSU2_TR(0x694992);
w2(R+4260,0xffffu);
}
B694994:{NFSU2_TR(0x694994);
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
PN u32 blk_694997(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694997:L694997:{bud-=44;NFSU2_TR(0x694997);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B69499c:{NFSU2_TR(0x69499c);
__builtin_memmove((R+4368),(R+4352),8);
}
B69499f:{NFSU2_TR(0x69499f);
__builtin_memmove((R+4356),(R+4352),4);
}
B6949a2:{NFSU2_TR(0x6949a2);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6949a6:{NFSU2_TR(0x6949a6);
__builtin_memmove((R+4372),gp(0x7b7158),4);
}
B6949ad:{NFSU2_TR(0x6949ad);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6949b1:{NFSU2_TR(0x6949b1);
__builtin_memmove((R+4400),(R+4368),8);
}
B6949b4:{NFSU2_TR(0x6949b4);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6949b8:{NFSU2_TR(0x6949b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6949bc:{NFSU2_TR(0x6949bc);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B6949bf:{NFSU2_TR(0x6949bf);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6949c3:{NFSU2_TR(0x6949c3);
__builtin_memmove((R+4372),(R+4368),4);
}
B6949c6:{NFSU2_TR(0x6949c6);
__builtin_memmove((R+4416),(R+4352),8);
}
B6949c9:{NFSU2_TR(0x6949c9);
__builtin_memmove((R+4404),(R+4400),4);
}
B6949cc:{NFSU2_TR(0x6949cc);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7168))));}
}
B6949d4:{NFSU2_TR(0x6949d4);
__builtin_memmove((R+4432),(R+4352),8);
}
B6949d7:{NFSU2_TR(0x6949d7);
__builtin_memmove((R+4356),(R+4416),4);
}
B6949da:{NFSU2_TR(0x6949da);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7178))));
}
B6949e1:{NFSU2_TR(0x6949e1);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4468),4);
}
B6949e4:{NFSU2_TR(0x6949e4);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6949e8:{NFSU2_TR(0x6949e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6949ec:{NFSU2_TR(0x6949ec);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6949f0:{NFSU2_TR(0x6949f0);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B6949f4:{NFSU2_TR(0x6949f4);
__builtin_memmove((R+4384),(R+4368),8);
}
B6949f7:{NFSU2_TR(0x6949f7);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B6949fa:{NFSU2_TR(0x6949fa);
__builtin_memmove((R+4400),(R+4352),8);
}
B6949fd:{NFSU2_TR(0x6949fd);
__builtin_memmove((R+4356),(R+4352),4);
}
B694a00:{NFSU2_TR(0x694a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694a04:{NFSU2_TR(0x694a04);
__builtin_memmove((R+4388),(R+4384),4);
}
B694a07:{NFSU2_TR(0x694a07);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B694a0b:{NFSU2_TR(0x694a0b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694a0e:{NFSU2_TR(0x694a0e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694a12:{NFSU2_TR(0x694a12);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B694a16:{NFSU2_TR(0x694a16);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694a1a:{NFSU2_TR(0x694a1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694a1e:{NFSU2_TR(0x694a1e);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694a22:{NFSU2_TR(0x694a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694a26:{NFSU2_TR(0x694a26);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694a2a:{NFSU2_TR(0x694a2a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B694a2e:{NFSU2_TR(0x694a2e);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694a32:{NFSU2_TR(0x694a32);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71c0))));}
}
B694a3a:{NFSU2_TR(0x694a3a);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694a3d:{NFSU2_TR(0x694a3d);
w2(R+4260,0xffffu);
}
B694a3f:{NFSU2_TR(0x694a3f);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_694a42(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694a42:L694a42:{bud-=39;NFSU2_TR(0x694a42);
__builtin_memmove((R+28),(R+28),4);
}
B694a44:{NFSU2_TR(0x694a44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694a45:{NFSU2_TR(0x694a45);
__builtin_memmove((R+20),(G+16),4);
}
B694a47:{NFSU2_TR(0x694a47);
w2(R+4260,0xffffu);
}
B694a49:{NFSU2_TR(0x694a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694a4c:{NFSU2_TR(0x694a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694a4f:{NFSU2_TR(0x694a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694a52:{NFSU2_TR(0x694a52);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694a55:{NFSU2_TR(0x694a55);
__builtin_memmove((R+4368),(R+4352),8);
}
B694a58:{NFSU2_TR(0x694a58);
__builtin_memmove((R+4356),(R+4352),4);
}
B694a5b:{NFSU2_TR(0x694a5b);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B694a5e:{NFSU2_TR(0x694a5e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B694a62:{NFSU2_TR(0x694a62);
__builtin_memmove((R+4400),(R+4384),8);
}
B694a65:{NFSU2_TR(0x694a65);
__builtin_memmove((R+4388),(R+4384),4);
}
B694a68:{NFSU2_TR(0x694a68);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694a6b:{NFSU2_TR(0x694a6b);
__builtin_memmove((R+4416),(R+4352),8);
}
B694a6e:{NFSU2_TR(0x694a6e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694a72:{NFSU2_TR(0x694a72);
__builtin_memmove((R+4432),(R+4368),8);
}
B694a75:{NFSU2_TR(0x694a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B694a7a:{NFSU2_TR(0x694a7a);
__builtin_memmove((R+4448),(R+4384),8);
}
B694a7d:{NFSU2_TR(0x694a7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B694a82:{NFSU2_TR(0x694a82);
__builtin_memmove((R+4464),(R+4400),8);
}
B694a85:{NFSU2_TR(0x694a85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B694a8a:{NFSU2_TR(0x694a8a);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694a8e:{NFSU2_TR(0x694a8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B694a93:{NFSU2_TR(0x694a93);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694a97:{NFSU2_TR(0x694a97);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B694a9c:{NFSU2_TR(0x694a9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B694aa1:{NFSU2_TR(0x694aa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B694aa6:{NFSU2_TR(0x694aa6);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694aaa:{NFSU2_TR(0x694aaa);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694aae:{NFSU2_TR(0x694aae);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B694ab2:{NFSU2_TR(0x694ab2);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B694ab6:{NFSU2_TR(0x694ab6);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694ab9:{NFSU2_TR(0x694ab9);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694abd:{NFSU2_TR(0x694abd);
w2(R+4260,0xffffu);
}
B694abf:{NFSU2_TR(0x694abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694ac2:{NFSU2_TR(0x694ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B694ac3:{NFSU2_TR(0x694ac3);
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
PN u32 blk_694ac6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694ac6:L694ac6:{bud-=26;NFSU2_TR(0x694ac6);
w2(R+4260,0xffffu);
}
B694ac8:{NFSU2_TR(0x694ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694acc:{NFSU2_TR(0x694acc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694acf:{NFSU2_TR(0x694acf);
__builtin_memmove((R+4368),(R+4352),8);
}
B694ad2:{NFSU2_TR(0x694ad2);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B694ad6:{NFSU2_TR(0x694ad6);
__builtin_memmove((R+4400),(R+4384),8);
}
B694ad9:{NFSU2_TR(0x694ad9);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694add:{NFSU2_TR(0x694add);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B694ae1:{NFSU2_TR(0x694ae1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694ae5:{NFSU2_TR(0x694ae5);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694ae9:{NFSU2_TR(0x694ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694aed:{NFSU2_TR(0x694aed);
__builtin_memmove((R+4432),(R+4352),8);
}
B694af0:{NFSU2_TR(0x694af0);
{SPILL_OUT();c.pc=0x694af0u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL_IN();wv<8>((R+4416),r_);}
}
B694af4:{NFSU2_TR(0x694af4);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B694afc:{NFSU2_TR(0x694afc);
__builtin_memmove((R+4384),(R+4416),8);
}
B694aff:{NFSU2_TR(0x694aff);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B694b03:{NFSU2_TR(0x694b03);
{SPILL_OUT();c.pc=0x694b03u;V r_=user_op(c,524535,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL_IN();wv<8>((R+4352),r_);}
}
B694b07:{NFSU2_TR(0x694b07);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B694b0a:{NFSU2_TR(0x694b0a);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B694b0d:{NFSU2_TR(0x694b0d);
{SPILL_OUT();c.pc=0x694b0du;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL_IN();wv<8>((R+4352),r_);}
}
B694b11:{NFSU2_TR(0x694b11);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B694b15:{NFSU2_TR(0x694b15);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B694b19:{NFSU2_TR(0x694b19);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694b1c:{NFSU2_TR(0x694b1c);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694b20:{NFSU2_TR(0x694b20);
w2(R+4260,0xffffu);
}
B694b22:{NFSU2_TR(0x694b22);
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
PN u32 blk_694b25(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694b25:L694b25:{bud-=94;NFSU2_TR(0x694b25);
__builtin_memmove((R+28),(R+28),4);
}
B694b27:{NFSU2_TR(0x694b27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B694b28:{NFSU2_TR(0x694b28);
w2(R+4260,0xffffu);
}
B694b2a:{NFSU2_TR(0x694b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B694b2e:{NFSU2_TR(0x694b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694b32:{NFSU2_TR(0x694b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694b36:{NFSU2_TR(0x694b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694b3a:{NFSU2_TR(0x694b3a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694b3d:{NFSU2_TR(0x694b3d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B694b40:{NFSU2_TR(0x694b40);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B694b44:{NFSU2_TR(0x694b44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B694b48:{NFSU2_TR(0x694b48);
__builtin_memmove((R+4416),(R+4400),8);
}
B694b4b:{NFSU2_TR(0x694b4b);
__builtin_memmove((R+4448),(R+4384),8);
}
B694b4e:{NFSU2_TR(0x694b4e);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B694b51:{NFSU2_TR(0x694b51);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B694b54:{NFSU2_TR(0x694b54);
__builtin_memmove((R+4432),(R+4384),8);
}
B694b57:{NFSU2_TR(0x694b57);
__builtin_memmove((R+4464),(R+4400),8);
}
B694b5a:{NFSU2_TR(0x694b5a);
__builtin_memmove((R+4436),(R+4432),4);
}
B694b5d:{NFSU2_TR(0x694b5d);
__builtin_memmove((R+4468),(R+4464),4);
}
B694b60:{NFSU2_TR(0x694b60);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B694b63:{NFSU2_TR(0x694b63);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B694b66:{NFSU2_TR(0x694b66);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694b6a:{NFSU2_TR(0x694b6a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B694b6e:{NFSU2_TR(0x694b6e);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B694b72:{NFSU2_TR(0x694b72);
__builtin_memmove((R+4432),(R+4352),8);
}
B694b75:{NFSU2_TR(0x694b75);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4388),4);
}
B694b78:{NFSU2_TR(0x694b78);
__builtin_memmove((R+4448),(R+4400),8);
}
B694b7b:{NFSU2_TR(0x694b7b);
__builtin_memmove((R+4452),(R+4368),4);
}
B694b7e:{NFSU2_TR(0x694b7e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B694b82:{NFSU2_TR(0x694b82);
__builtin_memmove((R+4448),(R+4368),8);
}
B694b85:{NFSU2_TR(0x694b85);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4404),4);
}
B694b88:{NFSU2_TR(0x694b88);
__builtin_memmove((R+4464),(R+4384),8);
}
B694b8b:{NFSU2_TR(0x694b8b);
__builtin_memmove((R+4468),(R+4352),4);
}
B694b8e:{NFSU2_TR(0x694b8e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B694b92:{NFSU2_TR(0x694b92);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B694b96:{NFSU2_TR(0x694b96);
__builtin_memmove((R+4448),(R+4368),8);
}
B694b99:{NFSU2_TR(0x694b99);
__builtin_memmove((R+4452),(R+4448),4);
}
B694b9c:{NFSU2_TR(0x694b9c);
__builtin_memmove((R+4388),(R+4384),4);
}
B694b9f:{NFSU2_TR(0x694b9f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B694ba2:{NFSU2_TR(0x694ba2);
__builtin_memmove((R+4404),(R+4400),4);
}
B694ba5:{NFSU2_TR(0x694ba5);
__builtin_memmove((R+4356),(R+4352),4);
}
B694ba8:{NFSU2_TR(0x694ba8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B694bac:{NFSU2_TR(0x694bac);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B694baf:{NFSU2_TR(0x694baf);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694bb3:{NFSU2_TR(0x694bb3);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B694bb7:{NFSU2_TR(0x694bb7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694bba:{NFSU2_TR(0x694bba);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B694bbe:{NFSU2_TR(0x694bbe);
__builtin_memmove((R+4464),gp(0x7b71d8),8);
}
B694bc5:{NFSU2_TR(0x694bc5);
__builtin_memmove((R+4384),(R+4416),8);
}
B694bc8:{NFSU2_TR(0x694bc8);
__builtin_memmove((R+4400),(R+4352),8);
}
B694bcb:{NFSU2_TR(0x694bcb);
__builtin_memmove((R+4388),(R+4384),4);
}
B694bce:{NFSU2_TR(0x694bce);
__builtin_memmove((R+4404),(R+4400),4);
}
B694bd1:{NFSU2_TR(0x694bd1);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4464))));
}
B694bd4:{NFSU2_TR(0x694bd4);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4404),4);
}
B694bd7:{NFSU2_TR(0x694bd7);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694bdb:{NFSU2_TR(0x694bdb);
__builtin_memmove((R+4352),(R+4464),8);
}
B694bde:{NFSU2_TR(0x694bde);
__builtin_memmove((R+4400),(R+4416),8);
}
B694be1:{NFSU2_TR(0x694be1);
__builtin_memmove((R+4464),(R+4432),8);
}
B694be4:{NFSU2_TR(0x694be4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694be7:{NFSU2_TR(0x694be7);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B694bea:{NFSU2_TR(0x694bea);
__builtin_memmove((R+4404),(R+4432),4);
}
B694bed:{NFSU2_TR(0x694bed);
__builtin_memmove((R+4468),(R+4448),4);
}
B694bf0:{NFSU2_TR(0x694bf0);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B694bf4:{NFSU2_TR(0x694bf4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B694bf8:{NFSU2_TR(0x694bf8);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4352))));
}
B694bfb:{NFSU2_TR(0x694bfb);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4352))));
}
B694bfe:{NFSU2_TR(0x694bfe);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B694c02:{NFSU2_TR(0x694c02);
__builtin_memmove((R+4464),(R+4352),8);
}
B694c05:{NFSU2_TR(0x694c05);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694c08:{NFSU2_TR(0x694c08);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694c0c:{NFSU2_TR(0x694c0c);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694c0f:{NFSU2_TR(0x694c0f);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B694c12:{NFSU2_TR(0x694c12);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4464))));
}
B694c15:{NFSU2_TR(0x694c15);
__builtin_memmove((R+4384),(R+4432),8);
}
B694c18:{NFSU2_TR(0x694c18);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B694c1c:{NFSU2_TR(0x694c1c);
__builtin_memmove((R+4388),(R+4448),4);
}
B694c1f:{NFSU2_TR(0x694c1f);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4464))));
}
B694c22:{NFSU2_TR(0x694c22);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B694c25:{NFSU2_TR(0x694c25);
__builtin_memmove((R+4400),(R+4368),8);
}
B694c28:{NFSU2_TR(0x694c28);
__builtin_memmove((R+4404),(R+4400),4);
}
B694c2b:{NFSU2_TR(0x694c2b);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4464))));
}
B694c2e:{NFSU2_TR(0x694c2e);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4404),4);
}
B694c31:{NFSU2_TR(0x694c31);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x20ull))));
}
B694c35:{NFSU2_TR(0x694c35);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B694c39:{NFSU2_TR(0x694c39);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694c3d:{NFSU2_TR(0x694c3d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694c41:{NFSU2_TR(0x694c41);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4464))));
}
B694c44:{NFSU2_TR(0x694c44);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4464))));
}
B694c47:{NFSU2_TR(0x694c47);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B694c4b:{NFSU2_TR(0x694c4b);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B694c4f:{NFSU2_TR(0x694c4f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694c53:{NFSU2_TR(0x694c53);
w2(R+4260,0xffffu);
}
B694c55:{NFSU2_TR(0x694c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B694c56:{NFSU2_TR(0x694c56);
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
PN u32 blk_694c59(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694c59:L694c59:{bud-=30;NFSU2_TR(0x694c59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694c5d:{NFSU2_TR(0x694c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694c61:{NFSU2_TR(0x694c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694c65:{NFSU2_TR(0x694c65);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694c68:{NFSU2_TR(0x694c68);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B694c6c:{NFSU2_TR(0x694c6c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B694c6f:{NFSU2_TR(0x694c6f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B694c73:{NFSU2_TR(0x694c73);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B694c76:{NFSU2_TR(0x694c76);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B694c7a:{NFSU2_TR(0x694c7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B694c7f:{NFSU2_TR(0x694c7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B694c84:{NFSU2_TR(0x694c84);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B694c88:{NFSU2_TR(0x694c88);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B694c8c:{NFSU2_TR(0x694c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694c90:{NFSU2_TR(0x694c90);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B694c94:{NFSU2_TR(0x694c94);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B694c98:{NFSU2_TR(0x694c98);
__builtin_memmove((R+4452),(R+4448),4);
}
B694c9b:{NFSU2_TR(0x694c9b);
__builtin_memmove((R+4468),(R+4464),4);
}
B694c9e:{NFSU2_TR(0x694c9e);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B694ca2:{NFSU2_TR(0x694ca2);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694ca6:{NFSU2_TR(0x694ca6);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B694caa:{NFSU2_TR(0x694caa);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B694cae:{NFSU2_TR(0x694cae);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B694cb2:{NFSU2_TR(0x694cb2);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B694cb6:{NFSU2_TR(0x694cb6);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694cba:{NFSU2_TR(0x694cba);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B694cbe:{NFSU2_TR(0x694cbe);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694cc1:{NFSU2_TR(0x694cc1);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694cc5:{NFSU2_TR(0x694cc5);
w2(R+4260,0xffffu);
}
B694cc7:{NFSU2_TR(0x694cc7);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_694cca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694cca:L694cca:{bud-=51;NFSU2_TR(0x694cca);
w2(R+4260,0xffffu);
}
B694ccc:{NFSU2_TR(0x694ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B694cd1:{NFSU2_TR(0x694cd1);
__builtin_memmove((R+4368),(R+4352),8);
}
B694cd4:{NFSU2_TR(0x694cd4);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694cd8:{NFSU2_TR(0x694cd8);
__builtin_memmove((R+4384),(R+4368),8);
}
B694cdb:{NFSU2_TR(0x694cdb);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694cdf:{NFSU2_TR(0x694cdf);
__builtin_memmove((R+4400),gp(0x7b71f0),8);
}
B694ce6:{NFSU2_TR(0x694ce6);
__builtin_memmove((R+4416),(R+4368),8);
}
B694ce9:{NFSU2_TR(0x694ce9);
__builtin_memmove((R+4464),(R+4384),8);
}
B694cec:{NFSU2_TR(0x694cec);
{wv<8>((R+4464),uo::pfsub<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B694cf0:{NFSU2_TR(0x694cf0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B694cf4:{NFSU2_TR(0x694cf4);
__builtin_memmove((R+4448),(R+4384),8);
}
B694cf7:{NFSU2_TR(0x694cf7);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7b71f8))));}
}
B694cff:{NFSU2_TR(0x694cff);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694d03:{NFSU2_TR(0x694d03);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B694d07:{NFSU2_TR(0x694d07);
__builtin_memmove((R+4432),(R+4368),8);
}
B694d0a:{NFSU2_TR(0x694d0a);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B694d0e:{NFSU2_TR(0x694d0e);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B694d12:{NFSU2_TR(0x694d12);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B694d16:{NFSU2_TR(0x694d16);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71e0))));}
}
B694d1e:{NFSU2_TR(0x694d1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694d22:{NFSU2_TR(0x694d22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694d26:{NFSU2_TR(0x694d26);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694d2a:{NFSU2_TR(0x694d2a);
__builtin_memmove((R+4468),(R+4464),4);
}
B694d2d:{NFSU2_TR(0x694d2d);
__builtin_memmove((R+4372),(R+4368),4);
}
B694d30:{NFSU2_TR(0x694d30);
__builtin_memmove((R+4452),(R+4448),4);
}
B694d33:{NFSU2_TR(0x694d33);
__builtin_memmove((R+4388),(R+4384),4);
}
B694d36:{NFSU2_TR(0x694d36);
__builtin_memmove((R+4432),(R+4464),8);
}
B694d39:{NFSU2_TR(0x694d39);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+0))));}
}
B694d3d:{NFSU2_TR(0x694d3d);
__builtin_memmove((R+4352),(R+4368),8);
}
B694d40:{NFSU2_TR(0x694d40);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B694d44:{NFSU2_TR(0x694d44);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B694d49:{NFSU2_TR(0x694d49);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B694d4e:{NFSU2_TR(0x694d4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694d52:{NFSU2_TR(0x694d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694d56:{NFSU2_TR(0x694d56);
__builtin_memmove((R+4416),(R+4448),8);
}
B694d59:{NFSU2_TR(0x694d59);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B694d5d:{NFSU2_TR(0x694d5d);
__builtin_memmove((R+4400),(R+4384),8);
}
B694d60:{NFSU2_TR(0x694d60);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B694d64:{NFSU2_TR(0x694d64);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B694d69:{NFSU2_TR(0x694d69);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B694d6e:{NFSU2_TR(0x694d6e);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B694d72:{NFSU2_TR(0x694d72);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B694d76:{NFSU2_TR(0x694d76);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B694d7a:{NFSU2_TR(0x694d7a);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B694d7e:{NFSU2_TR(0x694d7e);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B694d82:{NFSU2_TR(0x694d82);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694d86:{NFSU2_TR(0x694d86);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694d89:{NFSU2_TR(0x694d89);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694d8d:{NFSU2_TR(0x694d8d);
w2(R+4260,0xffffu);
}
B694d8f:{NFSU2_TR(0x694d8f);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_694d92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694d92:L694d92:{bud-=57;NFSU2_TR(0x694d92);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B694d97:{NFSU2_TR(0x694d97);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694d9b:{NFSU2_TR(0x694d9b);
__builtin_memmove((R+4368),(R+4352),8);
}
B694d9e:{NFSU2_TR(0x694d9e);
__builtin_memmove((R+4356),(R+4352),4);
}
B694da1:{NFSU2_TR(0x694da1);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694da5:{NFSU2_TR(0x694da5);
__builtin_memmove((R+4372),gp(0x7b7158),4);
}
B694dac:{NFSU2_TR(0x694dac);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694db0:{NFSU2_TR(0x694db0);
__builtin_memmove((R+4400),(R+4368),8);
}
B694db3:{NFSU2_TR(0x694db3);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694db7:{NFSU2_TR(0x694db7);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B694dba:{NFSU2_TR(0x694dba);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694dbe:{NFSU2_TR(0x694dbe);
__builtin_memmove((R+4372),(R+4368),4);
}
B694dc1:{NFSU2_TR(0x694dc1);
__builtin_memmove((R+4416),(R+4352),8);
}
B694dc4:{NFSU2_TR(0x694dc4);
__builtin_memmove((R+4404),(R+4400),4);
}
B694dc7:{NFSU2_TR(0x694dc7);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7168))));}
}
B694dcf:{NFSU2_TR(0x694dcf);
__builtin_memmove((R+4432),(R+4352),8);
}
B694dd2:{NFSU2_TR(0x694dd2);
__builtin_memmove((R+4356),(R+4416),4);
}
B694dd5:{NFSU2_TR(0x694dd5);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7178))));
}
B694ddc:{NFSU2_TR(0x694ddc);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4468),4);
}
B694ddf:{NFSU2_TR(0x694ddf);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B694de3:{NFSU2_TR(0x694de3);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B694de7:{NFSU2_TR(0x694de7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694deb:{NFSU2_TR(0x694deb);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B694def:{NFSU2_TR(0x694def);
__builtin_memmove((R+4384),(R+4368),8);
}
B694df2:{NFSU2_TR(0x694df2);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B694df5:{NFSU2_TR(0x694df5);
__builtin_memmove((R+4400),(R+4352),8);
}
B694df8:{NFSU2_TR(0x694df8);
__builtin_memmove((R+4356),(R+4352),4);
}
B694dfb:{NFSU2_TR(0x694dfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694dff:{NFSU2_TR(0x694dff);
__builtin_memmove((R+4388),(R+4384),4);
}
B694e02:{NFSU2_TR(0x694e02);
__builtin_memmove((R+4416),(R+4368),8);
}
B694e05:{NFSU2_TR(0x694e05);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B694e09:{NFSU2_TR(0x694e09);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694e0c:{NFSU2_TR(0x694e0c);
__builtin_memmove((R+4432),(R+4352),8);
}
B694e0f:{NFSU2_TR(0x694e0f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694e13:{NFSU2_TR(0x694e13);
__builtin_memmove((R+4448),(R+4384),8);
}
B694e16:{NFSU2_TR(0x694e16);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B694e1a:{NFSU2_TR(0x694e1a);
__builtin_memmove((R+4464),(R+4400),8);
}
B694e1d:{NFSU2_TR(0x694e1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B694e22:{NFSU2_TR(0x694e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694e26:{NFSU2_TR(0x694e26);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B694e2b:{NFSU2_TR(0x694e2b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694e2f:{NFSU2_TR(0x694e2f);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B694e34:{NFSU2_TR(0x694e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694e38:{NFSU2_TR(0x694e38);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694e3c:{NFSU2_TR(0x694e3c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694e40:{NFSU2_TR(0x694e40);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B694e44:{NFSU2_TR(0x694e44);
__builtin_memmove((R+4368),gp(0x7b71c0),8);
}
B694e4b:{NFSU2_TR(0x694e4b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694e4f:{NFSU2_TR(0x694e4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B694e54:{NFSU2_TR(0x694e54);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B694e58:{NFSU2_TR(0x694e58);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694e5c:{NFSU2_TR(0x694e5c);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B694e60:{NFSU2_TR(0x694e60);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694e63:{NFSU2_TR(0x694e63);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B694e67:{NFSU2_TR(0x694e67);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694e6b:{NFSU2_TR(0x694e6b);
w2(R+4260,0xffffu);
}
B694e6d:{NFSU2_TR(0x694e6d);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
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
PN u32 blk_694e70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694e70:L694e70:{bud-=18;NFSU2_TR(0x694e70);
w2(R+4260,0xffffu);
}
B694e72:{NFSU2_TR(0x694e72);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694e76:{NFSU2_TR(0x694e76);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694e7a:{NFSU2_TR(0x694e7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694e7e:{NFSU2_TR(0x694e7e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694e81:{NFSU2_TR(0x694e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B694e85:{NFSU2_TR(0x694e85);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B694e88:{NFSU2_TR(0x694e88);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B694e8c:{NFSU2_TR(0x694e8c);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694e90:{NFSU2_TR(0x694e90);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B694e94:{NFSU2_TR(0x694e94);
{wv<8>((R+4384),uo::pfacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B694e98:{NFSU2_TR(0x694e98);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694e9c:{NFSU2_TR(0x694e9c);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694e9f:{NFSU2_TR(0x694e9f);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b71d0))));
}
B694ea6:{NFSU2_TR(0x694ea6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B694eaa:{NFSU2_TR(0x694eaa);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B694eae:{NFSU2_TR(0x694eae);
w2(R+4260,0xffffu);
}
B694eb0:{NFSU2_TR(0x694eb0);
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
PN u32 blk_694eb3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694eb3:L694eb3:{bud-=63;NFSU2_TR(0x694eb3);
w2(R+4260,0xffffu);
}
B694eb5:{NFSU2_TR(0x694eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694eb9:{NFSU2_TR(0x694eb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694ebd:{NFSU2_TR(0x694ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694ec1:{NFSU2_TR(0x694ec1);
__builtin_memmove((R+4400),gp(0x7b71d8),8);
}
B694ec8:{NFSU2_TR(0x694ec8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694ecb:{NFSU2_TR(0x694ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B694ecf:{NFSU2_TR(0x694ecf);
__builtin_memmove((R+4384),(R+4368),8);
}
B694ed2:{NFSU2_TR(0x694ed2);
__builtin_memmove((R+4416),(R+4352),8);
}
B694ed5:{NFSU2_TR(0x694ed5);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B694ed9:{NFSU2_TR(0x694ed9);
__builtin_memmove((R+4372),(R+4368),4);
}
B694edc:{NFSU2_TR(0x694edc);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4452),(U+4),4);
}
B694ee0:{NFSU2_TR(0x694ee0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694ee4:{NFSU2_TR(0x694ee4);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694ee8:{NFSU2_TR(0x694ee8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((U+0))));}
}
B694eec:{NFSU2_TR(0x694eec);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B694eef:{NFSU2_TR(0x694eef);
{wv<8>((R+4464),uo::pfsub<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B694ef3:{NFSU2_TR(0x694ef3);
__builtin_memmove((R+4432),(R+4352),8);
}
B694ef6:{NFSU2_TR(0x694ef6);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4468),4);
}
B694ef9:{NFSU2_TR(0x694ef9);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694efd:{NFSU2_TR(0x694efd);
__builtin_memmove((R+4448),(R+4464),8);
}
B694f00:{NFSU2_TR(0x694f00);
__builtin_memmove((R+4452),(R+4368),4);
}
B694f03:{NFSU2_TR(0x694f03);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4404),4);
}
B694f06:{NFSU2_TR(0x694f06);
__builtin_memmove((R+4372),(R+4432),4);
}
B694f09:{NFSU2_TR(0x694f09);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694f0d:{NFSU2_TR(0x694f0d);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694f11:{NFSU2_TR(0x694f11);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4400))));
}
B694f14:{NFSU2_TR(0x694f14);
__builtin_memmove((R+4368),(R+4416),8);
}
B694f17:{NFSU2_TR(0x694f17);
__builtin_memmove((R+4420),(R+4464),4);
}
B694f1a:{NFSU2_TR(0x694f1a);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4420),4);
}
B694f1d:{NFSU2_TR(0x694f1d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B694f21:{NFSU2_TR(0x694f21);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694f25:{NFSU2_TR(0x694f25);
__builtin_memmove((R+4448),(R+4352),8);
}
B694f28:{NFSU2_TR(0x694f28);
__builtin_memmove((R+4464),(R+4368),8);
}
B694f2b:{NFSU2_TR(0x694f2b);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x20ull))));
}
B694f2f:{NFSU2_TR(0x694f2f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B694f33:{NFSU2_TR(0x694f33);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B694f37:{NFSU2_TR(0x694f37);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B694f3b:{NFSU2_TR(0x694f3b);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B694f3f:{NFSU2_TR(0x694f3f);
__builtin_memmove((R+4432),(R+4448),8);
}
B694f42:{NFSU2_TR(0x694f42);
{SPILL_OUT();c.pc=0x694f42u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4448))});SPILL_IN();wv<8>((R+4416),r_);}
}
B694f46:{NFSU2_TR(0x694f46);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B694f4e:{NFSU2_TR(0x694f4e);
__builtin_memmove((R+4464),(R+4416),8);
}
B694f51:{NFSU2_TR(0x694f51);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B694f55:{NFSU2_TR(0x694f55);
{SPILL_OUT();c.pc=0x694f55u;V r_=user_op(c,524535,{rv<8>((R+4448)),rv<8>((R+4464))});SPILL_IN();wv<8>((R+4448),r_);}
}
B694f59:{NFSU2_TR(0x694f59);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4432))));
}
B694f5c:{NFSU2_TR(0x694f5c);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B694f5f:{NFSU2_TR(0x694f5f);
{SPILL_OUT();c.pc=0x694f5fu;V r_=user_op(c,524536,{rv<8>((R+4448)),rv<8>((R+4416))});SPILL_IN();wv<8>((R+4448),r_);}
}
B694f63:{NFSU2_TR(0x694f63);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B694f67:{NFSU2_TR(0x694f67);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694f6b:{NFSU2_TR(0x694f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694f6f:{NFSU2_TR(0x694f6f);
__builtin_memmove((R+4416),(R+4352),8);
}
B694f72:{NFSU2_TR(0x694f72);
__builtin_memmove((R+4432),(R+4368),8);
}
B694f75:{NFSU2_TR(0x694f75);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694f79:{NFSU2_TR(0x694f79);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B694f7d:{NFSU2_TR(0x694f7d);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694f81:{NFSU2_TR(0x694f81);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694f85:{NFSU2_TR(0x694f85);
__builtin_memmove((R+4436),(R+4352),4);
}
B694f88:{NFSU2_TR(0x694f88);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4400))));
}
B694f8b:{NFSU2_TR(0x694f8b);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(G+0)),r8(U+0));
}
B694f8e:{NFSU2_TR(0x694f8e);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694f92:{NFSU2_TR(0x694f92);
w2(R+4260,0xffffu);
}
B694f94:{NFSU2_TR(0x694f94);
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
PN u32 blk_694f97(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B694f97:L694f97:{bud-=29;NFSU2_TR(0x694f97);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B694f9b:{NFSU2_TR(0x694f9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694f9f:{NFSU2_TR(0x694f9f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694fa2:{NFSU2_TR(0x694fa2);
u8 U[12];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B694fa6:{NFSU2_TR(0x694fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B694faa:{NFSU2_TR(0x694faa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B694fad:{NFSU2_TR(0x694fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B694fb1:{NFSU2_TR(0x694fb1);
__builtin_memmove((R+4400),(R+4368),8);
}
B694fb4:{NFSU2_TR(0x694fb4);
__builtin_memmove((R+4384),(R+4352),8);
}
B694fb7:{NFSU2_TR(0x694fb7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+4))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B694fba:{NFSU2_TR(0x694fba);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B694fbe:{NFSU2_TR(0x694fbe);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B694fc2:{NFSU2_TR(0x694fc2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B694fc6:{NFSU2_TR(0x694fc6);
__builtin_memmove((R+4416),(R+4352),8);
}
B694fc9:{NFSU2_TR(0x694fc9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694fcd:{NFSU2_TR(0x694fcd);
__builtin_memmove((R+4432),(R+4368),8);
}
B694fd0:{NFSU2_TR(0x694fd0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B694fd4:{NFSU2_TR(0x694fd4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B694fd8:{NFSU2_TR(0x694fd8);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694fdc:{NFSU2_TR(0x694fdc);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B694fdf:{NFSU2_TR(0x694fdf);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B694fe3:{NFSU2_TR(0x694fe3);
__builtin_memmove((R+4468),gp(0x7b7148),4);
}
B694fea:{NFSU2_TR(0x694fea);
__builtin_memmove((R+4384),(R+4352),8);
}
B694fed:{NFSU2_TR(0x694fed);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B694ff1:{NFSU2_TR(0x694ff1);
{wv<8>((R+4400),uo::pfcmpeq<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B694ff5:{NFSU2_TR(0x694ff5);
w4(G+0,u32(r8(R+4400)));
}
B694ff8:{NFSU2_TR(0x694ff8);
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
B694ffa:{NFSU2_TR(0x694ffa);
{SPILL_OUT();c.pc=0x694ffau;V r_=user_op(c,524532,{rv<8>((R+4432)),rv<8>((R+4416))});SPILL_IN();wv<8>((R+4432),r_);}
}
B694ffe:{NFSU2_TR(0x694ffe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);EXIT(0x695002u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_694(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x694002:[[clang::musttail]] return blk_694002(c,a4,a0,a1,bud);
case 0x694006:[[clang::musttail]] return blk_694006(c,a4,a0,a1,bud);
case 0x69400b:[[clang::musttail]] return blk_69400b(c,a4,a0,a1,bud);
case 0x69401a:[[clang::musttail]] return blk_69401a(c,a4,a0,a1,bud);
case 0x69401e:[[clang::musttail]] return blk_69401e(c,a4,a0,a1,bud);
case 0x694022:[[clang::musttail]] return blk_694022(c,a4,a0,a1,bud);
case 0x69402f:[[clang::musttail]] return blk_69402f(c,a4,a0,a1,bud);
case 0x694033:[[clang::musttail]] return blk_694033(c,a4,a0,a1,bud);
case 0x694042:[[clang::musttail]] return blk_694042(c,a4,a0,a1,bud);
case 0x694046:[[clang::musttail]] return blk_694046(c,a4,a0,a1,bud);
case 0x694055:[[clang::musttail]] return blk_694055(c,a4,a0,a1,bud);
case 0x694062:[[clang::musttail]] return blk_694062(c,a4,a0,a1,bud);
case 0x694064:[[clang::musttail]] return blk_694064(c,a4,a0,a1,bud);
case 0x694070:[[clang::musttail]] return blk_694070(c,a4,a0,a1,bud);
case 0x6940d4:[[clang::musttail]] return blk_6940d4(c,a4,a0,a1,bud);
case 0x6940fb:[[clang::musttail]] return blk_6940fb(c,a4,a0,a1,bud);
case 0x69413b:[[clang::musttail]] return blk_69413b(c,a4,a0,a1,bud);
case 0x694190:[[clang::musttail]] return blk_694190(c,a4,a0,a1,bud);
case 0x69419f:[[clang::musttail]] return blk_69419f(c,a4,a0,a1,bud);
case 0x6941a6:[[clang::musttail]] return blk_6941a6(c,a4,a0,a1,bud);
case 0x6941b3:[[clang::musttail]] return blk_6941b3(c,a4,a0,a1,bud);
case 0x6941ba:[[clang::musttail]] return blk_6941ba(c,a4,a0,a1,bud);
case 0x6941c9:[[clang::musttail]] return blk_6941c9(c,a4,a0,a1,bud);
case 0x6941d4:[[clang::musttail]] return blk_6941d4(c,a4,a0,a1,bud);
case 0x6941d8:[[clang::musttail]] return blk_6941d8(c,a4,a0,a1,bud);
case 0x6941e5:[[clang::musttail]] return blk_6941e5(c,a4,a0,a1,bud);
case 0x6941e9:[[clang::musttail]] return blk_6941e9(c,a4,a0,a1,bud);
case 0x6941f8:[[clang::musttail]] return blk_6941f8(c,a4,a0,a1,bud);
case 0x694203:[[clang::musttail]] return blk_694203(c,a4,a0,a1,bud);
case 0x694207:[[clang::musttail]] return blk_694207(c,a4,a0,a1,bud);
case 0x694214:[[clang::musttail]] return blk_694214(c,a4,a0,a1,bud);
case 0x69421f:[[clang::musttail]] return blk_69421f(c,a4,a0,a1,bud);
case 0x694223:[[clang::musttail]] return blk_694223(c,a4,a0,a1,bud);
case 0x694230:[[clang::musttail]] return blk_694230(c,a4,a0,a1,bud);
case 0x69423d:[[clang::musttail]] return blk_69423d(c,a4,a0,a1,bud);
case 0x694248:[[clang::musttail]] return blk_694248(c,a4,a0,a1,bud);
case 0x69424a:[[clang::musttail]] return blk_69424a(c,a4,a0,a1,bud);
case 0x6942e2:[[clang::musttail]] return blk_6942e2(c,a4,a0,a1,bud);
case 0x6942e9:[[clang::musttail]] return blk_6942e9(c,a4,a0,a1,bud);
case 0x6942f1:[[clang::musttail]] return blk_6942f1(c,a4,a0,a1,bud);
case 0x694318:[[clang::musttail]] return blk_694318(c,a4,a0,a1,bud);
case 0x694358:[[clang::musttail]] return blk_694358(c,a4,a0,a1,bud);
case 0x6943aa:[[clang::musttail]] return blk_6943aa(c,a4,a0,a1,bud);
case 0x6943af:[[clang::musttail]] return blk_6943af(c,a4,a0,a1,bud);
case 0x6943b2:[[clang::musttail]] return blk_6943b2(c,a4,a0,a1,bud);
case 0x6943b8:[[clang::musttail]] return blk_6943b8(c,a4,a0,a1,bud);
case 0x6943bb:[[clang::musttail]] return blk_6943bb(c,a4,a0,a1,bud);
case 0x6943c0:[[clang::musttail]] return blk_6943c0(c,a4,a0,a1,bud);
case 0x6943c1:[[clang::musttail]] return blk_6943c1(c,a4,a0,a1,bud);
case 0x6943c4:[[clang::musttail]] return blk_6943c4(c,a4,a0,a1,bud);
case 0x6943cf:[[clang::musttail]] return blk_6943cf(c,a4,a0,a1,bud);
case 0x6943d6:[[clang::musttail]] return blk_6943d6(c,a4,a0,a1,bud);
case 0x6943df:[[clang::musttail]] return blk_6943df(c,a4,a0,a1,bud);
case 0x6943e3:[[clang::musttail]] return blk_6943e3(c,a4,a0,a1,bud);
case 0x6943ed:[[clang::musttail]] return blk_6943ed(c,a4,a0,a1,bud);
case 0x694485:[[clang::musttail]] return blk_694485(c,a4,a0,a1,bud);
case 0x69448c:[[clang::musttail]] return blk_69448c(c,a4,a0,a1,bud);
case 0x694494:[[clang::musttail]] return blk_694494(c,a4,a0,a1,bud);
case 0x6944c0:[[clang::musttail]] return blk_6944c0(c,a4,a0,a1,bud);
case 0x6944fa:[[clang::musttail]] return blk_6944fa(c,a4,a0,a1,bud);
case 0x6944ff:[[clang::musttail]] return blk_6944ff(c,a4,a0,a1,bud);
case 0x6945b2:[[clang::musttail]] return blk_6945b2(c,a4,a0,a1,bud);
case 0x6945d2:[[clang::musttail]] return blk_6945d2(c,a4,a0,a1,bud);
case 0x694600:[[clang::musttail]] return blk_694600(c,a4,a0,a1,bud);
case 0x69463e:[[clang::musttail]] return blk_69463e(c,a4,a0,a1,bud);
case 0x694643:[[clang::musttail]] return blk_694643(c,a4,a0,a1,bud);
case 0x694742:[[clang::musttail]] return blk_694742(c,a4,a0,a1,bud);
case 0x694762:[[clang::musttail]] return blk_694762(c,a4,a0,a1,bud);
case 0x69477b:[[clang::musttail]] return blk_69477b(c,a4,a0,a1,bud);
case 0x6947d2:[[clang::musttail]] return blk_6947d2(c,a4,a0,a1,bud);
case 0x69480d:[[clang::musttail]] return blk_69480d(c,a4,a0,a1,bud);
case 0x694873:[[clang::musttail]] return blk_694873(c,a4,a0,a1,bud);
case 0x69490b:[[clang::musttail]] return blk_69490b(c,a4,a0,a1,bud);
case 0x694954:[[clang::musttail]] return blk_694954(c,a4,a0,a1,bud);
case 0x694997:[[clang::musttail]] return blk_694997(c,a4,a0,a1,bud);
case 0x694a42:[[clang::musttail]] return blk_694a42(c,a4,a0,a1,bud);
case 0x694ac6:[[clang::musttail]] return blk_694ac6(c,a4,a0,a1,bud);
case 0x694b25:[[clang::musttail]] return blk_694b25(c,a4,a0,a1,bud);
case 0x694c59:[[clang::musttail]] return blk_694c59(c,a4,a0,a1,bud);
case 0x694cca:[[clang::musttail]] return blk_694cca(c,a4,a0,a1,bud);
case 0x694d92:[[clang::musttail]] return blk_694d92(c,a4,a0,a1,bud);
case 0x694e70:[[clang::musttail]] return blk_694e70(c,a4,a0,a1,bud);
case 0x694eb3:[[clang::musttail]] return blk_694eb3(c,a4,a0,a1,bud);
case 0x694f97:[[clang::musttail]] return blk_694f97(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_694(Cpu& c){u8* R=c.regs.data();return ent_694(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
