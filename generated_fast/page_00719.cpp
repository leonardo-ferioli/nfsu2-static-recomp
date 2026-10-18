#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7033a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719021(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719027(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71902d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719033(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719036(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71903c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71903f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719045(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719049(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71904b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71904f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719052(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719063(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71907d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190f6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719174(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719199(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7191cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7191f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7191f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7191fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719200(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719206(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719224(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719274(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719288(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71928a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71928f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719291(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7192a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7193e8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719c12(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719cda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719dae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719f14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71a001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75bed4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_760d7d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71905a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71906e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71908c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7190ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_71917f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7191d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719296(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_7192ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719537(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719697(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719a05(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719be6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719cb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719d98(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719efe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_719002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719002:L719002:{bud-=13;NFSU2_TR(0x719002);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719003:{NFSU2_TR(0x719003);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B719006:{NFSU2_TR(0x719006);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71900a:{NFSU2_TR(0x71900a);
__builtin_memmove((R+20),(G+16),4);
}
B71900c:{NFSU2_TR(0x71900c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x988ull))));
}
B719012:{NFSU2_TR(0x719012);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719013:{NFSU2_TR(0x719013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719014:{NFSU2_TR(0x719014);
w2(R+4260,u16(0xffffull));
}
B719016:{NFSU2_TR(0x719016);
u8 U[4];
w4(U+0,u32(0x3full));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719018:{NFSU2_TR(0x719018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B719019:{NFSU2_TR(0x719019);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B71901c:{NFSU2_TR(0x71901c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B71901e:{NFSU2_TR(0x71901e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_719021(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719021(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719021:L719021:{bud-=2;NFSU2_TR(0x719021);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B719024:{NFSU2_TR(0x719024);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_719027(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719027(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719027:L719027:{bud-=1;NFSU2_TR(0x719027);
{u32 ea_=u32(u32(8144400u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_71902d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71902d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71902d:L71902d:{bud-=1;NFSU2_TR(0x71902d);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_719033(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719033(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719033:L719033:{bud-=1;NFSU2_TR(0x719033);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_719036(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719036(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719036:L719036:{bud-=1;NFSU2_TR(0x719036);
{u32 ea_=u32(u32(8144392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_71903c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71903c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71903c:L71903c:{bud-=1;NFSU2_TR(0x71903c);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_71903f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71903f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71903f:L71903f:{bud-=2;NFSU2_TR(0x71903f);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B719042:{NFSU2_TR(0x719042);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x18ull))));
{[[clang::musttail]] return blk_719045(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719045(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719045:L719045:{bud-=1;NFSU2_TR(0x719045);
{u32 ea_=u32(r4(G+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_719049(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719049(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719049:L719049:{bud-=1;NFSU2_TR(0x719049);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
{[[clang::musttail]] return blk_71904b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71904b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71904b:L71904b:{bud-=1;NFSU2_TR(0x71904b);
{u32 ea_=u32(r4(G+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_71904f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71904f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71904f:L71904f:{bud-=1;NFSU2_TR(0x71904f);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_719052(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719052(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719052:L719052:{bud-=2;NFSU2_TR(0x719052);
{u32 ea_=u32(r4(G+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B719055:{NFSU2_TR(0x719055);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71905aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7033a5u);}[[clang::musttail]] return blk_7033a5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71905a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71905a:L71905a:{bud-=2;NFSU2_TR(0x71905a);
{u32 ea_=u32(u32(8144384u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B719060:{NFSU2_TR(0x719060);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
{[[clang::musttail]] return blk_719063(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719063(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719063:L719063:{bud-=2;NFSU2_TR(0x719063);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B719069:{NFSU2_TR(0x719069);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71906eull));
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
PN u32 blk_71906e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71906e:L71906e:{bud-=4;NFSU2_TR(0x71906e);
__builtin_memmove((R+24),(G+0),4);
}
B719070:{NFSU2_TR(0x719070);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B719072:{NFSU2_TR(0x719072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719075:{NFSU2_TR(0x719075);
if(r1(F+6)){{[[clang::musttail]] return blk_7190b7(ARGS);}}
}
B719077:L719077:{bud-=3;NFSU2_TR(0x719077);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B719079:{NFSU2_TR(0x719079);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B71907b:{NFSU2_TR(0x71907b);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_7190b2(ARGS);}}
{[[clang::musttail]] return blk_71907d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71907d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71907d:L71907d:{bud-=3;NFSU2_TR(0x71907d);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B719080:{NFSU2_TR(0x719080);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffe80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B719087:{NFSU2_TR(0x719087);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71908cull));
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
PN u32 blk_71908c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71908c:L71908c:{bud-=10;NFSU2_TR(0x71908c);
__builtin_memmove((G+4),(R+24),4);
}
B71908e:{NFSU2_TR(0x71908e);
__builtin_memmove((R+8),(G+4),4);
}
B719090:{NFSU2_TR(0x719090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719093:{NFSU2_TR(0x719093);
__builtin_memmove((R+8),(G+0),1);
}
B719095:{NFSU2_TR(0x719095);
__builtin_memmove((R+9),(R+8),1);
}
B719097:{NFSU2_TR(0x719097);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B71909a:{NFSU2_TR(0x71909a);
__builtin_memmove((G+0),(R+8),4);
}
B71909c:{NFSU2_TR(0x71909c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B71909f:{NFSU2_TR(0x71909f);
__builtin_memmove((G+0),(R+8),2);
}
B7190a2:{NFSU2_TR(0x7190a2);
__builtin_memmove((R+8),(R+24),4);
{[[clang::musttail]] return blk_7190a4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190a4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190a4:L7190a4:{bud-=1;NFSU2_TR(0x7190a4);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_7190a6(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7190a4u);}goto L7190a4;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190a6:L7190a6:{bud-=2;NFSU2_TR(0x7190a6);
__builtin_memmove((G+4),(R+8),4);
}
B7190a8:{NFSU2_TR(0x7190a8);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
{[[clang::musttail]] return blk_7190ab(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190ab(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190ab:L7190ab:{bud-=1;NFSU2_TR(0x7190ab);
u8 U[18];
w1(U+17,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+17)){{[[clang::musttail]] return blk_7190ad(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7190abu);}goto L7190ab;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190ad:L7190ad:{bud-=2;NFSU2_TR(0x7190ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7190b0:{NFSU2_TR(0x7190b0);
__builtin_memmove((G+0),(R+24),4);
{[[clang::musttail]] return blk_7190b2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190b2:L7190b2:{bud-=2;NFSU2_TR(0x7190b2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+0))));
}
B7190b4:{NFSU2_TR(0x7190b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7190b7(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190b7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190b7:L7190b7:{bud-=1;NFSU2_TR(0x7190b7);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_7190ba(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190ba:L7190ba:{bud-=1;NFSU2_TR(0x7190ba);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_7190c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190c0:L7190c0:{bud-=1;NFSU2_TR(0x7190c0);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_7190c3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190c3:L7190c3:{bud-=4;NFSU2_TR(0x7190c3);
{u32 ea_=u32(u32(8144376u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7190c9:{NFSU2_TR(0x7190c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B7190cb:{NFSU2_TR(0x7190cb);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B7190ce:{NFSU2_TR(0x7190ce);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x71903fu);}[[clang::musttail]] return blk_71903f(ARGS);}}
}
B7190d4:L7190d4:{bud-=3;NFSU2_TR(0x7190d4);
w4(G+4,u32(0x100ull));
}
B7190d9:{NFSU2_TR(0x7190d9);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7190db:{NFSU2_TR(0x7190db);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_7190f8(ARGS);}}
}
B7190dd:L7190dd:{bud-=6;NFSU2_TR(0x7190dd);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+28))));
}
B7190df:{NFSU2_TR(0x7190df);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffe80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B7190e6:{NFSU2_TR(0x7190e6);
__builtin_memmove((R+28),(R+8),4);
}
B7190e8:{NFSU2_TR(0x7190e8);
__builtin_memmove((R+8),(G+4),4);
}
B7190ea:{NFSU2_TR(0x7190ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B7190ed:{NFSU2_TR(0x7190ed);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_7190ef(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190ef:L7190ef:{bud-=1;NFSU2_TR(0x7190ef);
u8 U[21];
w1(U+20,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+20)){{[[clang::musttail]] return blk_7190f1(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7190efu);}goto L7190ef;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190f1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190f1:L7190f1:{bud-=2;NFSU2_TR(0x7190f1);
__builtin_memmove((G+4),(R+8),4);
}
B7190f3:{NFSU2_TR(0x7190f3);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
{[[clang::musttail]] return blk_7190f6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190f6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190f6:L7190f6:{bud-=1;NFSU2_TR(0x7190f6);
u8 U[18];
w1(U+17,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+17)){{[[clang::musttail]] return blk_7190f8(ARGS);}}
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(bud<=0,0)){EXIT(0x7190f6u);}goto L7190f6;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190f8:L7190f8:{bud-=1;NFSU2_TR(0x7190f8);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(F+7,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7190fa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190fa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190fa:L7190fa:{bud-=1;NFSU2_TR(0x7190fa);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x7190ffull));
{[[clang::musttail]] return blk_760d7d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7190ff(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7190ff:L7190ff:{bud-=6;NFSU2_TR(0x7190ff);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B719104:{NFSU2_TR(0x719104);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffe80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((G+0),(U+12),1);
}
B71910b:{NFSU2_TR(0x71910b);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B719112:{NFSU2_TR(0x719112);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B719113:{NFSU2_TR(0x719113);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(F+0,u8((r4(U+6))<(u32(0x800ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x800ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x800ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B719119:{NFSU2_TR(0x719119);
if(r1(F+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x7190fau);}[[clang::musttail]] return blk_7190fa(ARGS);}}
}
B71911b:L71911b:{bud-=39;NFSU2_TR(0x71911b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B719121:{NFSU2_TR(0x719121);
__builtin_memmove((G+4),(G+0),1);
}
B719123:{NFSU2_TR(0x719123);
w1(R+8,u8(0xfeull));
}
B719125:{NFSU2_TR(0x719125);
u8 U[4];
w2(U+0,u16(s16(s8(r1(G+0)))));
w2(U+2,u16(s16(s8(r1(R+8)))));
w2(G+0,u16(u32(r2(U+0))*u32(r2(U+2))));
}
B719127:{NFSU2_TR(0x719127);
__builtin_memmove((R+8),(G+0),1);
}
B719129:{NFSU2_TR(0x719129);
__builtin_memmove((R+9),(R+8),1);
}
B71912b:{NFSU2_TR(0x71912b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71912e:{NFSU2_TR(0x71912e);
w1(G+4,u8(0-u32(r1(G+4))));
}
B719130:{NFSU2_TR(0x719130);
__builtin_memmove((G+5),(G+4),1);
}
B719132:{NFSU2_TR(0x719132);
__builtin_memmove((G+0),(R+8),4);
}
B719134:{NFSU2_TR(0x719134);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B719137:{NFSU2_TR(0x719137);
__builtin_memmove((G+0),(R+8),2);
}
B71913a:{NFSU2_TR(0x71913a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B71913b:{NFSU2_TR(0x71913b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B71913c:{NFSU2_TR(0x71913c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B71913d:{NFSU2_TR(0x71913d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B71913e:{NFSU2_TR(0x71913e);
__builtin_memmove((G+0),(G+4),1);
}
B719140:{NFSU2_TR(0x719140);
__builtin_memmove((R+8),(G+0),1);
}
B719142:{NFSU2_TR(0x719142);
__builtin_memmove((R+9),(R+8),1);
}
B719144:{NFSU2_TR(0x719144);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719147:{NFSU2_TR(0x719147);
__builtin_memmove((G+0),(R+8),4);
}
B719149:{NFSU2_TR(0x719149);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B71914c:{NFSU2_TR(0x71914c);
__builtin_memmove((G+0),(R+8),2);
}
B71914f:{NFSU2_TR(0x71914f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719150:{NFSU2_TR(0x719150);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719151:{NFSU2_TR(0x719151);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719152:{NFSU2_TR(0x719152);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719153:{NFSU2_TR(0x719153);
__builtin_memmove((G+0),(G+4),1);
}
B719155:{NFSU2_TR(0x719155);
__builtin_memmove((G+0),(G+4),4);
}
B719157:{NFSU2_TR(0x719157);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B71915a:{NFSU2_TR(0x71915a);
__builtin_memmove((G+0),(G+4),2);
}
B71915d:{NFSU2_TR(0x71915d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719160:{NFSU2_TR(0x719160);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719161:{NFSU2_TR(0x719161);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719162:{NFSU2_TR(0x719162);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719163:{NFSU2_TR(0x719163);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(F+10)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(G+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B719164:{NFSU2_TR(0x719164);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B719167:{NFSU2_TR(0x719167);
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
B719169:{NFSU2_TR(0x719169);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7191cd(ARGS);}}
}
B71916b:L71916b:{bud-=3;NFSU2_TR(0x71916b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B71916e:{NFSU2_TR(0x71916e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719171:{NFSU2_TR(0x719171);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_719174(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719174(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719174:L719174:{bud-=3;NFSU2_TR(0x719174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B719177:{NFSU2_TR(0x719177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71917a:{NFSU2_TR(0x71917a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x71917full));
{[[clang::musttail]] return blk_760d7d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71917f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71917f:L71917f:{bud-=7;NFSU2_TR(0x71917f);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
}
B719184:{NFSU2_TR(0x719184);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B71918b:{NFSU2_TR(0x71918b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71918e:{NFSU2_TR(0x71918e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B719191:{NFSU2_TR(0x719191);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719194:{NFSU2_TR(0x719194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719197:{NFSU2_TR(0x719197);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_719199(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719199(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719199:L719199:{bud-=10;NFSU2_TR(0x719199);
u8 U[24];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4672),(U+8),16);
}
B71919e:{NFSU2_TR(0x71919e);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::psubusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B7191a3:{NFSU2_TR(0x7191a3);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::paddusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B7191a8:{NFSU2_TR(0x7191a8);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::psubusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B7191ad:{NFSU2_TR(0x7191ad);
u8 U[24];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4736),(U+8),16);
}
B7191b2:{NFSU2_TR(0x7191b2);
w1(R+4672,u8(u32(r1(R+4672))+u32(r1(R+4736))));
w1(R+4673,u8(u32(r1(R+4673))+u32(r1(R+4737))));
w1(R+4674,u8(u32(r1(R+4674))+u32(r1(R+4738))));
w1(R+4675,u8(u32(r1(R+4675))+u32(r1(R+4739))));
w1(R+4676,u8(u32(r1(R+4676))+u32(r1(R+4740))));
w1(R+4677,u8(u32(r1(R+4677))+u32(r1(R+4741))));
w1(R+4678,u8(u32(r1(R+4678))+u32(r1(R+4742))));
w1(R+4679,u8(u32(r1(R+4679))+u32(r1(R+4743))));
w1(R+4680,u8(u32(r1(R+4680))+u32(r1(R+4744))));
w1(R+4681,u8(u32(r1(R+4681))+u32(r1(R+4745))));
w1(R+4682,u8(u32(r1(R+4682))+u32(r1(R+4746))));
w1(R+4683,u8(u32(r1(R+4683))+u32(r1(R+4747))));
w1(R+4684,u8(u32(r1(R+4684))+u32(r1(R+4748))));
w1(R+4685,u8(u32(r1(R+4685))+u32(r1(R+4749))));
w1(R+4686,u8(u32(r1(R+4686))+u32(r1(R+4750))));
w1(R+4687,u8(u32(r1(R+4687))+u32(r1(R+4751))));
}
B7191b6:{NFSU2_TR(0x7191b6);
u8 U[24];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+4))),(U+8),16);
}
B7191bb:{NFSU2_TR(0x7191bb);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B7191be:{NFSU2_TR(0x7191be);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7191c0:{NFSU2_TR(0x7191c0);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x719199u);}goto L719199;}}
}
B7191c2:L7191c2:{bud-=4;NFSU2_TR(0x7191c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7191c5:{NFSU2_TR(0x7191c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+0,carry<u32>(r4(U+4),r4(G+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7191c8:{NFSU2_TR(0x7191c8);
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
B7191cb:{NFSU2_TR(0x7191cb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x719174u);}[[clang::musttail]] return blk_719174(ARGS);}}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7191cd(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7191cd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7191cd:L7191cd:{bud-=7;NFSU2_TR(0x7191cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7191ce:{NFSU2_TR(0x7191ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7191cf:{NFSU2_TR(0x7191cf);
__builtin_memmove((G+16),(R+20),4);
}
B7191d1:{NFSU2_TR(0x7191d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7191d2:{NFSU2_TR(0x7191d2);
__builtin_memmove((G+16),(R+12),4);
}
B7191d4:{NFSU2_TR(0x7191d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7191d5:{NFSU2_TR(0x7191d5);
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
PN u32 blk_7191d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7191d6:L7191d6:{bud-=12;NFSU2_TR(0x7191d6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7191d7:{NFSU2_TR(0x7191d7);
__builtin_memmove((R+20),(G+16),4);
}
B7191d9:{NFSU2_TR(0x7191d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B7191dc:{NFSU2_TR(0x7191dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7191dd:{NFSU2_TR(0x7191dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7191de:{NFSU2_TR(0x7191de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7191e1:{NFSU2_TR(0x7191e1);
__builtin_memmove((G+0),(G+4),4);
}
B7191e3:{NFSU2_TR(0x7191e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B7191e6:{NFSU2_TR(0x7191e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7191e7:{NFSU2_TR(0x7191e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7191ea:{NFSU2_TR(0x7191ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7191ed:{NFSU2_TR(0x7191ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_7191f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7191f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7191f0:L7191f0:{bud-=1;NFSU2_TR(0x7191f0);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_7191f2(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x7191f0u);}goto L7191f0;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7191f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7191f2:L7191f2:{bud-=5;NFSU2_TR(0x7191f2);
__builtin_memmove((G+4),(G+0),4);
}
B7191f4:{NFSU2_TR(0x7191f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7191f7:{NFSU2_TR(0x7191f7);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
}
B7191fa:{NFSU2_TR(0x7191fa);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B7191fb:{NFSU2_TR(0x7191fb);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
{__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_7191fe(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7191fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7191fe:L7191fe:{bud-=1;NFSU2_TR(0x7191fe);
u8 U[35];
w1(U+34,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+34)){{[[clang::musttail]] return blk_719200(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x7191feu);}goto L7191fe;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719200(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719200:L719200:{bud-=1;NFSU2_TR(0x719200);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_719274(ARGS);}}
}
B719202:L719202:{bud-=2;NFSU2_TR(0x719202);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B719203:{NFSU2_TR(0x719203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_719206(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719206(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719206:L719206:{bud-=10;NFSU2_TR(0x719206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B719209:{NFSU2_TR(0x719209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71920c:{NFSU2_TR(0x71920c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71920f:{NFSU2_TR(0x71920f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719212:{NFSU2_TR(0x719212);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B719214:{NFSU2_TR(0x719214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B719217:{NFSU2_TR(0x719217);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B71921a:{NFSU2_TR(0x71921a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B71921d:{NFSU2_TR(0x71921d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B719220:{NFSU2_TR(0x719220);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
{[[clang::musttail]] return blk_719224(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719224(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719224:L719224:{bud-=16;NFSU2_TR(0x719224);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B719229:{NFSU2_TR(0x719229);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B71922e:{NFSU2_TR(0x71922e);
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
B719232:{NFSU2_TR(0x719232);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B719237:{NFSU2_TR(0x719237);
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
B71923b:{NFSU2_TR(0x71923b);
u8 U[16];
__builtin_memmove((U+0),gp(0x817720),16);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(U+0))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(U+2))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(U+4))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(U+6))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(U+8))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(U+10))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(U+12))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(U+14))));
}
B719243:{NFSU2_TR(0x719243);
{wv<16>((R+4672),uo::psllw<16>(rv<16>((R+4672)),V(0x1ull)));}
}
B719248:{NFSU2_TR(0x719248);
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
B71924c:{NFSU2_TR(0x71924c);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4672))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4674))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4676))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4678))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4680))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4682))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4684))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4686))));
}
B719250:{NFSU2_TR(0x719250);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B719254:{NFSU2_TR(0x719254);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x2ull)));}
}
B719259:{NFSU2_TR(0x719259);
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
B71925d:{NFSU2_TR(0x71925d);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719262:{NFSU2_TR(0x719262);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B719265:{NFSU2_TR(0x719265);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B719267:{NFSU2_TR(0x719267);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x719224u);}goto L719224;}}
}
B719269:L719269:{bud-=4;NFSU2_TR(0x719269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71926c:{NFSU2_TR(0x71926c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(G+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B71926f:{NFSU2_TR(0x71926f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B719272:{NFSU2_TR(0x719272);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x719206u);}[[clang::musttail]] return blk_719206(ARGS);}}
{[[clang::musttail]] return blk_719274(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719274(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719274:L719274:{bud-=7;NFSU2_TR(0x719274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B719277:{NFSU2_TR(0x719277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71927a:{NFSU2_TR(0x71927a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B71927d:{NFSU2_TR(0x71927d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719280:{NFSU2_TR(0x719280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B719283:{NFSU2_TR(0x719283);
__builtin_memmove((G+0),(G+4),4);
}
B719285:{NFSU2_TR(0x719285);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
{[[clang::musttail]] return blk_719288(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719288(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719288:L719288:{bud-=1;NFSU2_TR(0x719288);
u8 U[41];
w1(U+40,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+40)){{[[clang::musttail]] return blk_71928a(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x719288u);}goto L719288;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71928a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71928a:L71928a:{bud-=2;NFSU2_TR(0x71928a);
__builtin_memmove((G+4),(G+0),4);
}
B71928c:{NFSU2_TR(0x71928c);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(G+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_71928f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_71928f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B71928f:L71928f:{bud-=1;NFSU2_TR(0x71928f);
u8 U[35];
w1(U+34,u8((r4(G+4))==(u32(0x0ull))));
if(r1(U+34)){{[[clang::musttail]] return blk_719291(ARGS);}}
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
{if(__builtin_expect(bud<=0,0)){EXIT(0x71928fu);}goto L71928f;}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719291(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719291:L719291:{bud-=5;NFSU2_TR(0x719291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719292:{NFSU2_TR(0x719292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719293:{NFSU2_TR(0x719293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719294:{NFSU2_TR(0x719294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719295:{NFSU2_TR(0x719295);
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
PN u32 blk_719296(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719296:L719296:{bud-=2;NFSU2_TR(0x719296);
__builtin_memmove((G+0),gp(0x8b9c40),4);
}
B71929b:{NFSU2_TR(0x71929b);
w4(G+4,u32(0x8b9942ull));
{[[clang::musttail]] return blk_7192a0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7192a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7192a0:L7192a0:{bud-=12;NFSU2_TR(0x7192a0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7192a3:{NFSU2_TR(0x7192a3);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192a7:{NFSU2_TR(0x7192a7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7192aa:{NFSU2_TR(0x7192aa);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(G+4)),r2(U+0));
}
B7192ad:{NFSU2_TR(0x7192ad);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7192b0:{NFSU2_TR(0x7192b0);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192b4:{NFSU2_TR(0x7192b4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B7192b7:{NFSU2_TR(0x7192b7);
u8 U[6];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192bb:{NFSU2_TR(0x7192bb);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x8ull))));
}
B7192be:{NFSU2_TR(0x7192be);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
}
B7192c1:{NFSU2_TR(0x7192c1);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(U+6))<(u32(0x8b9b42ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x8b9b42ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b9b42ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B7192c7:{NFSU2_TR(0x7192c7);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x7192a0u);}goto L7192a0;}}
}
B7192c9:L7192c9:{bud-=1;NFSU2_TR(0x7192c9);
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
PN u32 blk_7192ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7192ca:L7192ca:{bud-=88;NFSU2_TR(0x7192ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7192cb:{NFSU2_TR(0x7192cb);
__builtin_memmove((R+12),(G+16),4);
}
B7192cd:{NFSU2_TR(0x7192cd);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7192ce:{NFSU2_TR(0x7192ce);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7192cf:{NFSU2_TR(0x7192cf);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B7192d2:{NFSU2_TR(0x7192d2);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7192d5:{NFSU2_TR(0x7192d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7192d6:{NFSU2_TR(0x7192d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7192d9:{NFSU2_TR(0x7192d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7192dd:{NFSU2_TR(0x7192dd);
__builtin_memmove((R+20),(G+16),4);
}
B7192df:{NFSU2_TR(0x7192df);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x58ull))));
}
B7192e2:{NFSU2_TR(0x7192e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7192e5:{NFSU2_TR(0x7192e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7192e6:{NFSU2_TR(0x7192e6);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b9940ull))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B7192ed:{NFSU2_TR(0x7192ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7192ee:{NFSU2_TR(0x7192ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7192f1:{NFSU2_TR(0x7192f1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7192f3:{NFSU2_TR(0x7192f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B7192f4:{NFSU2_TR(0x7192f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192f8:{NFSU2_TR(0x7192f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7192fc:{NFSU2_TR(0x7192fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719300:{NFSU2_TR(0x719300);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719304:{NFSU2_TR(0x719304);
w1(F+0,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B719306:{NFSU2_TR(0x719306);
u8 U[6];
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B719307:{NFSU2_TR(0x719307);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71930b:{NFSU2_TR(0x71930b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71930f:{NFSU2_TR(0x71930f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719313:{NFSU2_TR(0x719313);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719317:{NFSU2_TR(0x719317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B71931a:{NFSU2_TR(0x71931a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B71931d:{NFSU2_TR(0x71931d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719320:{NFSU2_TR(0x719320);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719323:{NFSU2_TR(0x719323);
__builtin_memmove((G+4),(R+8),4);
}
B719325:{NFSU2_TR(0x719325);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719329:{NFSU2_TR(0x719329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B71932c:{NFSU2_TR(0x71932c);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B719330:{NFSU2_TR(0x719330);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719335:{NFSU2_TR(0x719335);
__builtin_memmove((R+4358),(R+4418),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4416),2);
}
B719338:{NFSU2_TR(0x719338);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71933c:{NFSU2_TR(0x71933c);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B719340:{NFSU2_TR(0x719340);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719343:{NFSU2_TR(0x719343);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B719346:{NFSU2_TR(0x719346);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71934b:{NFSU2_TR(0x71934b);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B71934e:{NFSU2_TR(0x71934e);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719352:{NFSU2_TR(0x719352);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B719356:{NFSU2_TR(0x719356);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B71935b:{NFSU2_TR(0x71935b);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B71935e:{NFSU2_TR(0x71935e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719362:{NFSU2_TR(0x719362);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B719366:{NFSU2_TR(0x719366);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719369:{NFSU2_TR(0x719369);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71936c:{NFSU2_TR(0x71936c);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71936f:{NFSU2_TR(0x71936f);
__builtin_memmove((R+4368),(R+4352),8);
}
B719372:{NFSU2_TR(0x719372);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B719375:{NFSU2_TR(0x719375);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B719378:{NFSU2_TR(0x719378);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B71937b:{NFSU2_TR(0x71937b);
__builtin_memmove((R+4448),(R+4352),8);
}
B71937e:{NFSU2_TR(0x71937e);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B719381:{NFSU2_TR(0x719381);
__builtin_memmove((R+4384),(R+4368),8);
}
B719384:{NFSU2_TR(0x719384);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B719388:{NFSU2_TR(0x719388);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B71938c:{NFSU2_TR(0x71938c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B719390:{NFSU2_TR(0x719390);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B719393:{NFSU2_TR(0x719393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B719396:{NFSU2_TR(0x719396);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x10ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x10ull))));
}
B71939a:{NFSU2_TR(0x71939a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71939f:{NFSU2_TR(0x71939f);
__builtin_memmove((R+4470),(R+4418),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4416),2);
}
B7193a2:{NFSU2_TR(0x7193a2);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7193a6:{NFSU2_TR(0x7193a6);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B7193aa:{NFSU2_TR(0x7193aa);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B7193ad:{NFSU2_TR(0x7193ad);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B7193b0:{NFSU2_TR(0x7193b0);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B7193b3:{NFSU2_TR(0x7193b3);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B7193b7:{NFSU2_TR(0x7193b7);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B7193ba:{NFSU2_TR(0x7193ba);
__builtin_memmove((R+4471),(R+4435),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4434),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4433),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4432),1);
}
B7193bd:{NFSU2_TR(0x7193bd);
__builtin_memmove((R+4400),(R+4368),8);
}
B7193c0:{NFSU2_TR(0x7193c0);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B7193c3:{NFSU2_TR(0x7193c3);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B7193c6:{NFSU2_TR(0x7193c6);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B7193c9:{NFSU2_TR(0x7193c9);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B7193cc:{NFSU2_TR(0x7193cc);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B7193d0:{NFSU2_TR(0x7193d0);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B7193d3:{NFSU2_TR(0x7193d3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B7193d8:{NFSU2_TR(0x7193d8);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B7193db:{NFSU2_TR(0x7193db);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7193df:{NFSU2_TR(0x7193df);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B7193e3:{NFSU2_TR(0x7193e3);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);[[clang::musttail]] return blk_7193e8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_7193e8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B7193e8:L7193e8:{bud-=104;NFSU2_TR(0x7193e8);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B7193eb:{NFSU2_TR(0x7193eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7193ef:{NFSU2_TR(0x7193ef);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B7193f3:{NFSU2_TR(0x7193f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7193f6:{NFSU2_TR(0x7193f6);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B7193f9:{NFSU2_TR(0x7193f9);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B7193fd:{NFSU2_TR(0x7193fd);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B719400:{NFSU2_TR(0x719400);
__builtin_memmove((R+4391),(R+4435),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4434),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4433),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4432),1);
}
B719403:{NFSU2_TR(0x719403);
__builtin_memmove((R+4432),(R+4464),8);
}
B719406:{NFSU2_TR(0x719406);
__builtin_memmove((R+4368),(R+4448),8);
}
B719409:{NFSU2_TR(0x719409);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4388),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4390),2);
}
B71940c:{NFSU2_TR(0x71940c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B719410:{NFSU2_TR(0x719410);
__builtin_memmove((R+4470),(R+4386),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4384),2);
}
B719413:{NFSU2_TR(0x719413);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B719417:{NFSU2_TR(0x719417);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B71941b:{NFSU2_TR(0x71941b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B71941e:{NFSU2_TR(0x71941e);
__builtin_memmove((R+4352),(R+4464),8);
}
B719421:{NFSU2_TR(0x719421);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B719425:{NFSU2_TR(0x719425);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B719428:{NFSU2_TR(0x719428);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B71942b:{NFSU2_TR(0x71942b);
__builtin_memmove((R+4439),(R+4419),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4418),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4417),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4416),1);
}
B71942e:{NFSU2_TR(0x71942e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B719432:{NFSU2_TR(0x719432);
__builtin_memmove((R+4400),(R+4384),8);
}
B719435:{NFSU2_TR(0x719435);
__builtin_memmove((R+4471),(R+4419),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4418),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4417),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4416),1);
}
B719438:{NFSU2_TR(0x719438);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71943b:{NFSU2_TR(0x71943b);
__builtin_memmove((R+4416),(R+4400),8);
}
B71943e:{NFSU2_TR(0x71943e);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719442:{NFSU2_TR(0x719442);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B719445:{NFSU2_TR(0x719445);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B719448:{NFSU2_TR(0x719448);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B71944b:{NFSU2_TR(0x71944b);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B71944e:{NFSU2_TR(0x71944e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B719452:{NFSU2_TR(0x719452);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719455:{NFSU2_TR(0x719455);
__builtin_memmove((R+4359),(R+4403),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4402),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4401),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4400),1);
}
B719458:{NFSU2_TR(0x719458);
__builtin_memmove((R+4464),(R+4432),8);
}
B71945b:{NFSU2_TR(0x71945b);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71945e:{NFSU2_TR(0x71945e);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B719461:{NFSU2_TR(0x719461);
__builtin_memmove((R+4375),(R+4403),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4402),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4401),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4400),1);
}
B719464:{NFSU2_TR(0x719464);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B719467:{NFSU2_TR(0x719467);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+18))));
}
B71946b:{NFSU2_TR(0x71946b);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B71946e:{NFSU2_TR(0x71946e);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4438))));
}
B719471:{NFSU2_TR(0x719471);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B719474:{NFSU2_TR(0x719474);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B719478:{NFSU2_TR(0x719478);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x3ull)));}
}
B71947c:{NFSU2_TR(0x71947c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B719480:{NFSU2_TR(0x719480);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B719483:{NFSU2_TR(0x719483);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B719486:{NFSU2_TR(0x719486);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B719489:{NFSU2_TR(0x719489);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71948c:{NFSU2_TR(0x71948c);
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
B71948f:{NFSU2_TR(0x71948f);
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
B719492:{NFSU2_TR(0x719492);
__builtin_memmove((R+4368),(R+4352),8);
}
B719495:{NFSU2_TR(0x719495);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B719498:{NFSU2_TR(0x719498);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B71949c:{NFSU2_TR(0x71949c);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B71949f:{NFSU2_TR(0x71949f);
__builtin_memmove((R+4464),(R+4352),8);
}
B7194a2:{NFSU2_TR(0x7194a2);
w4(G+0,u32(r8(R+4400)));
}
B7194a5:{NFSU2_TR(0x7194a5);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4352))));
}
B7194a8:{NFSU2_TR(0x7194a8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7194ac:{NFSU2_TR(0x7194ac);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B7194af:{NFSU2_TR(0x7194af);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7194b2:{NFSU2_TR(0x7194b2);
__builtin_memmove((R+4432),(R+4384),8);
}
B7194b5:{NFSU2_TR(0x7194b5);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7194ba:{NFSU2_TR(0x7194ba);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7194be:{NFSU2_TR(0x7194be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(U+4))));
}
B7194c2:{NFSU2_TR(0x7194c2);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4374))));
}
B7194c5:{NFSU2_TR(0x7194c5);
w4(G+0,u32(r8(R+4400)));
}
B7194c8:{NFSU2_TR(0x7194c8);
__builtin_memmove((R+4416),(R+4432),8);
}
B7194cb:{NFSU2_TR(0x7194cb);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7194d0:{NFSU2_TR(0x7194d0);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B7194d4:{NFSU2_TR(0x7194d4);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7194d7:{NFSU2_TR(0x7194d7);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B7194da:{NFSU2_TR(0x7194da);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7194df:{NFSU2_TR(0x7194df);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7194e2:{NFSU2_TR(0x7194e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B7194e6:{NFSU2_TR(0x7194e6);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B7194e9:{NFSU2_TR(0x7194e9);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4464))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4466))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4468))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4470))));
}
B7194ec:{NFSU2_TR(0x7194ec);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B7194ef:{NFSU2_TR(0x7194ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B7194f3:{NFSU2_TR(0x7194f3);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B7194f6:{NFSU2_TR(0x7194f6);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7194f9:{NFSU2_TR(0x7194f9);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B7194fc:{NFSU2_TR(0x7194fc);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7194ff:{NFSU2_TR(0x7194ff);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B719502:{NFSU2_TR(0x719502);
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
B719505:{NFSU2_TR(0x719505);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B719508:{NFSU2_TR(0x719508);
__builtin_memmove((R+4407),(R+4435),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4434),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4433),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4432),1);
}
B71950b:{NFSU2_TR(0x71950b);
w4(G+0,u32(r8(R+4400)));
}
B71950e:{NFSU2_TR(0x71950e);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B719512:{NFSU2_TR(0x719512);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719516:{NFSU2_TR(0x719516);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B719519:{NFSU2_TR(0x719519);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71951e:{NFSU2_TR(0x71951e);
w4(G+0,u32(r8(R+4400)));
}
B719521:{NFSU2_TR(0x719521);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B719526:{NFSU2_TR(0x719526);
u8 U[48];
w4(U+40,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B719529:{NFSU2_TR(0x719529);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71952e:{NFSU2_TR(0x71952e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71952f:{NFSU2_TR(0x71952f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719530:{NFSU2_TR(0x719530);
__builtin_memmove((G+16),(R+20),4);
}
B719532:{NFSU2_TR(0x719532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719533:{NFSU2_TR(0x719533);
__builtin_memmove((G+16),(R+12),4);
}
B719535:{NFSU2_TR(0x719535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719536:{NFSU2_TR(0x719536);
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
PN u32 blk_719537(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719537:L719537:{bud-=115;NFSU2_TR(0x719537);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719538:{NFSU2_TR(0x719538);
__builtin_memmove((R+12),(G+16),4);
}
B71953a:{NFSU2_TR(0x71953a);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71953b:{NFSU2_TR(0x71953b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71953c:{NFSU2_TR(0x71953c);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B71953f:{NFSU2_TR(0x71953f);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B719542:{NFSU2_TR(0x719542);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719543:{NFSU2_TR(0x719543);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B719546:{NFSU2_TR(0x719546);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71954a:{NFSU2_TR(0x71954a);
__builtin_memmove((R+20),(G+16),4);
}
B71954c:{NFSU2_TR(0x71954c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x3cull))));
}
B71954f:{NFSU2_TR(0x71954f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B719552:{NFSU2_TR(0x719552);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b9940ull))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B719559:{NFSU2_TR(0x719559);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71955a:{NFSU2_TR(0x71955a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71955d:{NFSU2_TR(0x71955d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71955f:{NFSU2_TR(0x71955f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B719560:{NFSU2_TR(0x719560);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719564:{NFSU2_TR(0x719564);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719568:{NFSU2_TR(0x719568);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71956c:{NFSU2_TR(0x71956c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719570:{NFSU2_TR(0x719570);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B719572:{NFSU2_TR(0x719572);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B719573:{NFSU2_TR(0x719573);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719577:{NFSU2_TR(0x719577);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71957b:{NFSU2_TR(0x71957b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71957f:{NFSU2_TR(0x71957f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719583:{NFSU2_TR(0x719583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B719586:{NFSU2_TR(0x719586);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B719589:{NFSU2_TR(0x719589);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B71958b:{NFSU2_TR(0x71958b);
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
B71958d:{NFSU2_TR(0x71958d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719590:{NFSU2_TR(0x719590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4352,u64(r4(U+0)));
}
B719593:{NFSU2_TR(0x719593);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719596:{NFSU2_TR(0x719596);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4368,u64(r4(U+8)));
}
B71959a:{NFSU2_TR(0x71959a);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71959d:{NFSU2_TR(0x71959d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4384,u64(r4(U+8)));
}
B7195a1:{NFSU2_TR(0x7195a1);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B7195a4:{NFSU2_TR(0x7195a4);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4400,u64(r4(U+8)));
}
B7195a8:{NFSU2_TR(0x7195a8);
__builtin_memmove((R+4432),(R+4352),8);
}
B7195ab:{NFSU2_TR(0x7195ab);
__builtin_memmove((R+4448),(R+4368),8);
}
B7195ae:{NFSU2_TR(0x7195ae);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B7195b1:{NFSU2_TR(0x7195b1);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7195b4:{NFSU2_TR(0x7195b4);
__builtin_memmove((R+4368),(R+4352),8);
}
B7195b7:{NFSU2_TR(0x7195b7);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B7195ba:{NFSU2_TR(0x7195ba);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B7195bd:{NFSU2_TR(0x7195bd);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B7195c0:{NFSU2_TR(0x7195c0);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B7195c3:{NFSU2_TR(0x7195c3);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B7195c6:{NFSU2_TR(0x7195c6);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7195ca:{NFSU2_TR(0x7195ca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7195cd:{NFSU2_TR(0x7195cd);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B7195d1:{NFSU2_TR(0x7195d1);
__builtin_memmove((R+4368),(R+4400),8);
}
B7195d4:{NFSU2_TR(0x7195d4);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B7195d8:{NFSU2_TR(0x7195d8);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B7195db:{NFSU2_TR(0x7195db);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B7195de:{NFSU2_TR(0x7195de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B7195e2:{NFSU2_TR(0x7195e2);
__builtin_memmove((R+4384),(R+4352),8);
}
B7195e5:{NFSU2_TR(0x7195e5);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B7195e8:{NFSU2_TR(0x7195e8);
__builtin_memmove((R+4416),(R+4352),8);
}
B7195eb:{NFSU2_TR(0x7195eb);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B7195ef:{NFSU2_TR(0x7195ef);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B7195f2:{NFSU2_TR(0x7195f2);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B7195f5:{NFSU2_TR(0x7195f5);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B7195f8:{NFSU2_TR(0x7195f8);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B7195fb:{NFSU2_TR(0x7195fb);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B7195fe:{NFSU2_TR(0x7195fe);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719601:{NFSU2_TR(0x719601);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B719604:{NFSU2_TR(0x719604);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719607:{NFSU2_TR(0x719607);
u8 U[4];
w4(U+0,u32(r8(R+4432)));
s4(u32(r4(R+24)),r4(U+0));
}
B71960a:{NFSU2_TR(0x71960a);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4448)));
s4(u32(r4(U+4)),r4(U+8));
}
B71960e:{NFSU2_TR(0x71960e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719612:{NFSU2_TR(0x719612);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719617:{NFSU2_TR(0x719617);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71961a:{NFSU2_TR(0x71961a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B71961f:{NFSU2_TR(0x71961f);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719622:{NFSU2_TR(0x719622);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B719627:{NFSU2_TR(0x719627);
__builtin_memmove((R+4432),(R+4352),8);
}
B71962a:{NFSU2_TR(0x71962a);
__builtin_memmove((R+4448),(R+4368),8);
}
B71962d:{NFSU2_TR(0x71962d);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719630:{NFSU2_TR(0x719630);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B719633:{NFSU2_TR(0x719633);
__builtin_memmove((R+4368),(R+4352),8);
}
B719636:{NFSU2_TR(0x719636);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B719639:{NFSU2_TR(0x719639);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B71963c:{NFSU2_TR(0x71963c);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B71963f:{NFSU2_TR(0x71963f);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719642:{NFSU2_TR(0x719642);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719645:{NFSU2_TR(0x719645);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B719649:{NFSU2_TR(0x719649);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71964c:{NFSU2_TR(0x71964c);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B719650:{NFSU2_TR(0x719650);
__builtin_memmove((R+4368),(R+4400),8);
}
B719653:{NFSU2_TR(0x719653);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719657:{NFSU2_TR(0x719657);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B71965a:{NFSU2_TR(0x71965a);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B71965d:{NFSU2_TR(0x71965d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B719661:{NFSU2_TR(0x719661);
__builtin_memmove((R+4384),(R+4352),8);
}
B719664:{NFSU2_TR(0x719664);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719667:{NFSU2_TR(0x719667);
__builtin_memmove((R+4416),(R+4352),8);
}
B71966a:{NFSU2_TR(0x71966a);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B71966e:{NFSU2_TR(0x71966e);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B719671:{NFSU2_TR(0x719671);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B719674:{NFSU2_TR(0x719674);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719677:{NFSU2_TR(0x719677);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B71967a:{NFSU2_TR(0x71967a);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B71967d:{NFSU2_TR(0x71967d);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719680:{NFSU2_TR(0x719680);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B719683:{NFSU2_TR(0x719683);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719686:{NFSU2_TR(0x719686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4432)));
s4(u32(r4(U+0)),r4(U+4));
}
B71968a:{NFSU2_TR(0x71968a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(r8(R+4448)));
s4(u32(r4(U+8)),r4(U+12));
}
B71968f:{NFSU2_TR(0x71968f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719690:{NFSU2_TR(0x719690);
__builtin_memmove((G+16),(R+20),4);
}
B719692:{NFSU2_TR(0x719692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719693:{NFSU2_TR(0x719693);
__builtin_memmove((G+16),(R+12),4);
}
B719695:{NFSU2_TR(0x719695);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719696:{NFSU2_TR(0x719696);
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
PN u32 blk_719697(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719697:L719697:{bud-=267;NFSU2_TR(0x719697);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719698:{NFSU2_TR(0x719698);
__builtin_memmove((R+12),(G+16),4);
}
B71969a:{NFSU2_TR(0x71969a);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71969b:{NFSU2_TR(0x71969b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B71969c:{NFSU2_TR(0x71969c);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B71969f:{NFSU2_TR(0x71969f);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B7196a2:{NFSU2_TR(0x7196a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7196a3:{NFSU2_TR(0x7196a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7196a6:{NFSU2_TR(0x7196a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7196aa:{NFSU2_TR(0x7196aa);
__builtin_memmove((R+20),(G+16),4);
}
B7196ac:{NFSU2_TR(0x7196ac);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x58ull))));
}
B7196af:{NFSU2_TR(0x7196af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7196b2:{NFSU2_TR(0x7196b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7196b3:{NFSU2_TR(0x7196b3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b9940ull))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B7196ba:{NFSU2_TR(0x7196ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7196bb:{NFSU2_TR(0x7196bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7196be:{NFSU2_TR(0x7196be);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B7196c0:{NFSU2_TR(0x7196c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B7196c1:{NFSU2_TR(0x7196c1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196c5:{NFSU2_TR(0x7196c5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196c9:{NFSU2_TR(0x7196c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196cd:{NFSU2_TR(0x7196cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196d1:{NFSU2_TR(0x7196d1);
w1(F+0,u8(0x0ull));
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B7196d3:{NFSU2_TR(0x7196d3);
u8 U[6];
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B7196d4:{NFSU2_TR(0x7196d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196d8:{NFSU2_TR(0x7196d8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196dc:{NFSU2_TR(0x7196dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196e0:{NFSU2_TR(0x7196e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7196e4:{NFSU2_TR(0x7196e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7196e7:{NFSU2_TR(0x7196e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7196ea:{NFSU2_TR(0x7196ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7196ed:{NFSU2_TR(0x7196ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7196f0:{NFSU2_TR(0x7196f0);
__builtin_memmove((G+4),(R+8),4);
}
B7196f2:{NFSU2_TR(0x7196f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B7196f6:{NFSU2_TR(0x7196f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B7196f9:{NFSU2_TR(0x7196f9);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B7196fd:{NFSU2_TR(0x7196fd);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719702:{NFSU2_TR(0x719702);
__builtin_memmove((R+4358),(R+4418),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4416),2);
}
B719705:{NFSU2_TR(0x719705);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719709:{NFSU2_TR(0x719709);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71970d:{NFSU2_TR(0x71970d);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719710:{NFSU2_TR(0x719710);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B719713:{NFSU2_TR(0x719713);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B719718:{NFSU2_TR(0x719718);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B71971b:{NFSU2_TR(0x71971b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71971f:{NFSU2_TR(0x71971f);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B719723:{NFSU2_TR(0x719723);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719728:{NFSU2_TR(0x719728);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B71972b:{NFSU2_TR(0x71972b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71972f:{NFSU2_TR(0x71972f);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B719733:{NFSU2_TR(0x719733);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719736:{NFSU2_TR(0x719736);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B719739:{NFSU2_TR(0x719739);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B71973c:{NFSU2_TR(0x71973c);
__builtin_memmove((R+4368),(R+4352),8);
}
B71973f:{NFSU2_TR(0x71973f);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B719742:{NFSU2_TR(0x719742);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B719745:{NFSU2_TR(0x719745);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B719748:{NFSU2_TR(0x719748);
__builtin_memmove((R+4448),(R+4352),8);
}
B71974b:{NFSU2_TR(0x71974b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71974e:{NFSU2_TR(0x71974e);
__builtin_memmove((R+4384),(R+4368),8);
}
B719751:{NFSU2_TR(0x719751);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B719755:{NFSU2_TR(0x719755);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B719759:{NFSU2_TR(0x719759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B71975d:{NFSU2_TR(0x71975d);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B719760:{NFSU2_TR(0x719760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B719763:{NFSU2_TR(0x719763);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x10ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x10ull))));
}
B719767:{NFSU2_TR(0x719767);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B71976c:{NFSU2_TR(0x71976c);
__builtin_memmove((R+4470),(R+4418),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4416),2);
}
B71976f:{NFSU2_TR(0x71976f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719773:{NFSU2_TR(0x719773);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B719777:{NFSU2_TR(0x719777);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B71977a:{NFSU2_TR(0x71977a);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B71977d:{NFSU2_TR(0x71977d);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B719780:{NFSU2_TR(0x719780);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B719784:{NFSU2_TR(0x719784);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B719787:{NFSU2_TR(0x719787);
__builtin_memmove((R+4471),(R+4435),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4434),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4433),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4432),1);
}
B71978a:{NFSU2_TR(0x71978a);
__builtin_memmove((R+4400),(R+4368),8);
}
B71978d:{NFSU2_TR(0x71978d);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B719790:{NFSU2_TR(0x719790);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719793:{NFSU2_TR(0x719793);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B719796:{NFSU2_TR(0x719796);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B719799:{NFSU2_TR(0x719799);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B71979d:{NFSU2_TR(0x71979d);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B7197a0:{NFSU2_TR(0x7197a0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B7197a5:{NFSU2_TR(0x7197a5);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B7197a8:{NFSU2_TR(0x7197a8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7197ac:{NFSU2_TR(0x7197ac);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B7197b0:{NFSU2_TR(0x7197b0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4432,u64(r4(U+12)));
}
B7197b5:{NFSU2_TR(0x7197b5);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B7197b8:{NFSU2_TR(0x7197b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B7197bc:{NFSU2_TR(0x7197bc);
w4(R+4432,shr<u32>(r4(R+4432),u64(u32(0x10ull))));
w4(R+4436,shr<u32>(r4(R+4436),u64(u32(0x10ull))));
}
B7197c0:{NFSU2_TR(0x7197c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7197c3:{NFSU2_TR(0x7197c3);
__builtin_memmove((R+4438),(R+4418),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4416),2);
}
B7197c6:{NFSU2_TR(0x7197c6);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B7197ca:{NFSU2_TR(0x7197ca);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B7197cd:{NFSU2_TR(0x7197cd);
__builtin_memmove((R+4391),(R+4435),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4434),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4433),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4432),1);
}
B7197d0:{NFSU2_TR(0x7197d0);
__builtin_memmove((R+4432),(R+4464),8);
}
B7197d3:{NFSU2_TR(0x7197d3);
__builtin_memmove((R+4368),(R+4448),8);
}
B7197d6:{NFSU2_TR(0x7197d6);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4388),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4390),2);
}
B7197d9:{NFSU2_TR(0x7197d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7197dd:{NFSU2_TR(0x7197dd);
__builtin_memmove((R+4470),(R+4386),2);
__builtin_memmove((R+4468),(R+4466),2);
__builtin_memmove((R+4466),(R+4384),2);
}
B7197e0:{NFSU2_TR(0x7197e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7197e4:{NFSU2_TR(0x7197e4);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B7197e8:{NFSU2_TR(0x7197e8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B7197eb:{NFSU2_TR(0x7197eb);
__builtin_memmove((R+4352),(R+4464),8);
}
B7197ee:{NFSU2_TR(0x7197ee);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B7197f2:{NFSU2_TR(0x7197f2);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B7197f5:{NFSU2_TR(0x7197f5);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B7197f8:{NFSU2_TR(0x7197f8);
__builtin_memmove((R+4439),(R+4419),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4418),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4417),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4416),1);
}
B7197fb:{NFSU2_TR(0x7197fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B7197ff:{NFSU2_TR(0x7197ff);
__builtin_memmove((R+4400),(R+4384),8);
}
B719802:{NFSU2_TR(0x719802);
__builtin_memmove((R+4471),(R+4419),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4418),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4417),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4416),1);
}
B719805:{NFSU2_TR(0x719805);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B719808:{NFSU2_TR(0x719808);
__builtin_memmove((R+4416),(R+4400),8);
}
B71980b:{NFSU2_TR(0x71980b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B71980f:{NFSU2_TR(0x71980f);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4470))));
}
B719812:{NFSU2_TR(0x719812);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B719815:{NFSU2_TR(0x719815);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B719818:{NFSU2_TR(0x719818);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B71981b:{NFSU2_TR(0x71981b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B71981f:{NFSU2_TR(0x71981f);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719822:{NFSU2_TR(0x719822);
__builtin_memmove((R+4359),(R+4403),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4402),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4401),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4400),1);
}
B719825:{NFSU2_TR(0x719825);
__builtin_memmove((R+4464),(R+4432),8);
}
B719828:{NFSU2_TR(0x719828);
w2(R+4464,u16(u32(r2(R+4464))+u32(r2(R+4432))));
w2(R+4466,u16(u32(r2(R+4466))+u32(r2(R+4434))));
w2(R+4468,u16(u32(r2(R+4468))+u32(r2(R+4436))));
w2(R+4470,u16(u32(r2(R+4470))+u32(r2(R+4438))));
}
B71982b:{NFSU2_TR(0x71982b);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B71982e:{NFSU2_TR(0x71982e);
__builtin_memmove((R+4375),(R+4403),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4402),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4401),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4400),1);
}
B719831:{NFSU2_TR(0x719831);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4464))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4466))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4468))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4470))));
}
B719834:{NFSU2_TR(0x719834);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(U+12))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(U+14))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(U+16))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(U+18))));
}
B719838:{NFSU2_TR(0x719838);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B71983b:{NFSU2_TR(0x71983b);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4438))));
}
B71983e:{NFSU2_TR(0x71983e);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B719841:{NFSU2_TR(0x719841);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B719845:{NFSU2_TR(0x719845);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x3ull)));}
}
B719849:{NFSU2_TR(0x719849);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B71984d:{NFSU2_TR(0x71984d);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B719850:{NFSU2_TR(0x719850);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B719853:{NFSU2_TR(0x719853);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B719856:{NFSU2_TR(0x719856);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B719859:{NFSU2_TR(0x719859);
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
B71985c:{NFSU2_TR(0x71985c);
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
B71985f:{NFSU2_TR(0x71985f);
__builtin_memmove((R+4368),(R+4352),8);
}
B719862:{NFSU2_TR(0x719862);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B719865:{NFSU2_TR(0x719865);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B719869:{NFSU2_TR(0x719869);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B71986c:{NFSU2_TR(0x71986c);
__builtin_memmove((R+4464),(R+4352),8);
}
B71986f:{NFSU2_TR(0x71986f);
w4(G+0,u32(r8(R+4400)));
}
B719872:{NFSU2_TR(0x719872);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4352))));
}
B719875:{NFSU2_TR(0x719875);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719879:{NFSU2_TR(0x719879);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B71987c:{NFSU2_TR(0x71987c);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B71987f:{NFSU2_TR(0x71987f);
__builtin_memmove((R+4432),(R+4384),8);
}
B719882:{NFSU2_TR(0x719882);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B719887:{NFSU2_TR(0x719887);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B71988b:{NFSU2_TR(0x71988b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4464,u64(u64(r8(R+4464))|u64(r8(U+4))));
}
B71988f:{NFSU2_TR(0x71988f);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4368))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4370))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4372))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4374))));
}
B719892:{NFSU2_TR(0x719892);
w4(G+0,u32(r8(R+4400)));
}
B719895:{NFSU2_TR(0x719895);
__builtin_memmove((R+4416),(R+4432),8);
}
B719898:{NFSU2_TR(0x719898);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B71989d:{NFSU2_TR(0x71989d);
{wv<8>((R+4432),uo::psraw<8>(rv<8>((R+4432)),V(0xfull)));}
}
B7198a1:{NFSU2_TR(0x7198a1);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7198a4:{NFSU2_TR(0x7198a4);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4432))));
}
B7198a7:{NFSU2_TR(0x7198a7);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7198ac:{NFSU2_TR(0x7198ac);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7198af:{NFSU2_TR(0x7198af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B7198b3:{NFSU2_TR(0x7198b3);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B7198b6:{NFSU2_TR(0x7198b6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4464))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4466))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4468))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4470))));
}
B7198b9:{NFSU2_TR(0x7198b9);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B7198bc:{NFSU2_TR(0x7198bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B7198c0:{NFSU2_TR(0x7198c0);
__builtin_memmove((R+4439),(R+4451),1);
__builtin_memmove((R+4438),(R+4435),1);
__builtin_memmove((R+4437),(R+4450),1);
__builtin_memmove((R+4436),(R+4434),1);
__builtin_memmove((R+4435),(R+4449),1);
__builtin_memmove((R+4434),(R+4433),1);
__builtin_memmove((R+4433),(R+4448),1);
}
B7198c3:{NFSU2_TR(0x7198c3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7198c6:{NFSU2_TR(0x7198c6);
__builtin_memmove((R+4407),(R+4451),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4450),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4449),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4448),1);
}
B7198c9:{NFSU2_TR(0x7198c9);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7198cc:{NFSU2_TR(0x7198cc);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B7198cf:{NFSU2_TR(0x7198cf);
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
B7198d2:{NFSU2_TR(0x7198d2);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B7198d5:{NFSU2_TR(0x7198d5);
__builtin_memmove((R+4407),(R+4435),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4434),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4433),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4432),1);
}
B7198d8:{NFSU2_TR(0x7198d8);
w4(G+0,u32(r8(R+4400)));
}
B7198db:{NFSU2_TR(0x7198db);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7198df:{NFSU2_TR(0x7198df);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7198e3:{NFSU2_TR(0x7198e3);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7198e6:{NFSU2_TR(0x7198e6);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7198eb:{NFSU2_TR(0x7198eb);
w4(G+0,u32(r8(R+4400)));
}
B7198ee:{NFSU2_TR(0x7198ee);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7198f3:{NFSU2_TR(0x7198f3);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7198f6:{NFSU2_TR(0x7198f6);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7198fb:{NFSU2_TR(0x7198fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B7198fe:{NFSU2_TR(0x7198fe);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B719901:{NFSU2_TR(0x719901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719905:{NFSU2_TR(0x719905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4416,u64(r4(U+0)));
}
B719908:{NFSU2_TR(0x719908);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0x10ull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0x10ull))));
}
B71990c:{NFSU2_TR(0x71990c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719911:{NFSU2_TR(0x719911);
__builtin_memmove((R+4358),(R+4418),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4416),2);
}
B719914:{NFSU2_TR(0x719914);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B719918:{NFSU2_TR(0x719918);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71991c:{NFSU2_TR(0x71991c);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B71991f:{NFSU2_TR(0x71991f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B719924:{NFSU2_TR(0x719924);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B719927:{NFSU2_TR(0x719927);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71992b:{NFSU2_TR(0x71992b);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B71992f:{NFSU2_TR(0x71992f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719934:{NFSU2_TR(0x719934);
__builtin_memmove((R+4390),(R+4418),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4416),2);
}
B719937:{NFSU2_TR(0x719937);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4416,u64(r4(U+8)));
}
B71993b:{NFSU2_TR(0x71993b);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0x10ull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0x10ull))));
}
B71993f:{NFSU2_TR(0x71993f);
__builtin_memmove((R+4374),(R+4418),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4416),2);
}
B719942:{NFSU2_TR(0x719942);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4416))));
}
B719945:{NFSU2_TR(0x719945);
__builtin_memmove((R+4391),(R+4371),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4370),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4369),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4368),1);
}
B719948:{NFSU2_TR(0x719948);
__builtin_memmove((R+4368),(R+4352),8);
}
B71994b:{NFSU2_TR(0x71994b);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B71994e:{NFSU2_TR(0x71994e);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B719951:{NFSU2_TR(0x719951);
__builtin_memmove((R+4448),(R+4352),8);
}
B719954:{NFSU2_TR(0x719954);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B719957:{NFSU2_TR(0x719957);
__builtin_memmove((R+4384),(R+4368),8);
}
B71995a:{NFSU2_TR(0x71995a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71995e:{NFSU2_TR(0x71995e);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x20ull))));
}
B719962:{NFSU2_TR(0x719962);
__builtin_memmove((R+4375),(R+4419),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4418),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4417),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4416),1);
}
B719965:{NFSU2_TR(0x719965);
__builtin_memmove((R+4359),(R+4419),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4418),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4417),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4416),1);
}
B719968:{NFSU2_TR(0x719968);
w8(R+4384,shr<u64>(r8(R+4384),u64(u32(0x20ull))));
}
B71996c:{NFSU2_TR(0x71996c);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4358))));
}
B71996f:{NFSU2_TR(0x71996f);
__builtin_memmove((R+4400),(R+4368),8);
}
B719972:{NFSU2_TR(0x719972);
__builtin_memmove((R+4455),(R+4419),1);
__builtin_memmove((R+4454),(R+4451),1);
__builtin_memmove((R+4453),(R+4418),1);
__builtin_memmove((R+4452),(R+4450),1);
__builtin_memmove((R+4451),(R+4417),1);
__builtin_memmove((R+4450),(R+4449),1);
__builtin_memmove((R+4449),(R+4416),1);
}
B719975:{NFSU2_TR(0x719975);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719978:{NFSU2_TR(0x719978);
__builtin_memmove((R+4391),(R+4419),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4418),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4417),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4416),1);
}
B71997b:{NFSU2_TR(0x71997b);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4400))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4402))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4404))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4406))));
}
B71997e:{NFSU2_TR(0x71997e);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+12))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+14))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+16))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+18))));
}
B719982:{NFSU2_TR(0x719982);
w2(R+4448,u16(u32(r2(R+4448))-u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))-u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))-u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))-u32(r2(R+4390))));
}
B719985:{NFSU2_TR(0x719985);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4368))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4370))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4372))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4374))));
}
B719988:{NFSU2_TR(0x719988);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x3ull)));}
}
B71998c:{NFSU2_TR(0x71998c);
__builtin_memmove((R+4368),(R+4448),8);
}
B71998f:{NFSU2_TR(0x71998f);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0xfull)));}
}
B719993:{NFSU2_TR(0x719993);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4448))));
}
B719996:{NFSU2_TR(0x719996);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B719999:{NFSU2_TR(0x719999);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(U+4))));
}
B71999d:{NFSU2_TR(0x71999d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B7199a0:{NFSU2_TR(0x7199a0);
__builtin_memmove((R+4400),(R+4384),8);
}
B7199a3:{NFSU2_TR(0x7199a3);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B7199a6:{NFSU2_TR(0x7199a6);
__builtin_memmove((R+4416),(R+4400),8);
}
B7199a9:{NFSU2_TR(0x7199a9);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B7199ad:{NFSU2_TR(0x7199ad);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4400))));
}
B7199b0:{NFSU2_TR(0x7199b0);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B7199b3:{NFSU2_TR(0x7199b3);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B7199b6:{NFSU2_TR(0x7199b6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B7199b9:{NFSU2_TR(0x7199b9);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B7199bc:{NFSU2_TR(0x7199bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B7199c0:{NFSU2_TR(0x7199c0);
__builtin_memmove((R+4471),(R+4435),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4434),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4433),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4432),1);
}
B7199c3:{NFSU2_TR(0x7199c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B7199c7:{NFSU2_TR(0x7199c7);
w2(R+4464,u16(u32(r2(R+4464))-u32(r2(R+4384))));
w2(R+4466,u16(u32(r2(R+4466))-u32(r2(R+4386))));
w2(R+4468,u16(u32(r2(R+4468))-u32(r2(R+4388))));
w2(R+4470,u16(u32(r2(R+4470))-u32(r2(R+4390))));
}
B7199ca:{NFSU2_TR(0x7199ca);
__builtin_memmove((R+4407),(R+4435),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4434),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4433),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4432),1);
}
B7199cd:{NFSU2_TR(0x7199cd);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7199d0:{NFSU2_TR(0x7199d0);
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
B7199d3:{NFSU2_TR(0x7199d3);
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
B7199d6:{NFSU2_TR(0x7199d6);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B7199d9:{NFSU2_TR(0x7199d9);
w4(G+0,u32(r8(R+4400)));
}
B7199dc:{NFSU2_TR(0x7199dc);
w8(R+4400,shr<u64>(r8(R+4400),u64(u32(0x20ull))));
}
B7199e0:{NFSU2_TR(0x7199e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7199e4:{NFSU2_TR(0x7199e4);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7199e7:{NFSU2_TR(0x7199e7);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7199ec:{NFSU2_TR(0x7199ec);
w4(G+0,u32(r8(R+4400)));
}
B7199ef:{NFSU2_TR(0x7199ef);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7199f4:{NFSU2_TR(0x7199f4);
u8 U[48];
w4(U+40,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(G+0),4);
w4(G+0,shr<u32>(r4(G+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(G+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B7199f7:{NFSU2_TR(0x7199f7);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7199fc:{NFSU2_TR(0x7199fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7199fd:{NFSU2_TR(0x7199fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7199fe:{NFSU2_TR(0x7199fe);
__builtin_memmove((G+16),(R+20),4);
}
B719a00:{NFSU2_TR(0x719a00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719a01:{NFSU2_TR(0x719a01);
__builtin_memmove((G+16),(R+12),4);
}
B719a03:{NFSU2_TR(0x719a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719a04:{NFSU2_TR(0x719a04);
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
PN u32 blk_719a05(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719a05:L719a05:{bud-=153;NFSU2_TR(0x719a05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719a06:{NFSU2_TR(0x719a06);
__builtin_memmove((R+12),(G+16),4);
}
B719a08:{NFSU2_TR(0x719a08);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719a09:{NFSU2_TR(0x719a09);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719a0a:{NFSU2_TR(0x719a0a);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B719a0d:{NFSU2_TR(0x719a0d);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B719a10:{NFSU2_TR(0x719a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719a11:{NFSU2_TR(0x719a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B719a14:{NFSU2_TR(0x719a14);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719a18:{NFSU2_TR(0x719a18);
__builtin_memmove((R+20),(G+16),4);
}
B719a1a:{NFSU2_TR(0x719a1a);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x3cull))));
}
B719a1d:{NFSU2_TR(0x719a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B719a20:{NFSU2_TR(0x719a20);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x8b9940ull))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B719a27:{NFSU2_TR(0x719a27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719a28:{NFSU2_TR(0x719a28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B719a2b:{NFSU2_TR(0x719a2b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719a2d:{NFSU2_TR(0x719a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((G+0),(U+0),4);
}
B719a2e:{NFSU2_TR(0x719a2e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a32:{NFSU2_TR(0x719a32);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a36:{NFSU2_TR(0x719a36);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a3a:{NFSU2_TR(0x719a3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a3e:{NFSU2_TR(0x719a3e);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B719a40:{NFSU2_TR(0x719a40);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B719a41:{NFSU2_TR(0x719a41);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a45:{NFSU2_TR(0x719a45);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a49:{NFSU2_TR(0x719a49);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a4d:{NFSU2_TR(0x719a4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(G+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B719a51:{NFSU2_TR(0x719a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B719a54:{NFSU2_TR(0x719a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B719a57:{NFSU2_TR(0x719a57);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B719a59:{NFSU2_TR(0x719a59);
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
B719a5b:{NFSU2_TR(0x719a5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719a5e:{NFSU2_TR(0x719a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w8(R+4352,u64(r4(U+0)));
}
B719a61:{NFSU2_TR(0x719a61);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719a64:{NFSU2_TR(0x719a64);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4368,u64(r4(U+8)));
}
B719a68:{NFSU2_TR(0x719a68);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719a6b:{NFSU2_TR(0x719a6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4384,u64(r4(U+8)));
}
B719a6f:{NFSU2_TR(0x719a6f);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719a72:{NFSU2_TR(0x719a72);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(R+4400,u64(r4(U+8)));
}
B719a76:{NFSU2_TR(0x719a76);
__builtin_memmove((R+4432),(R+4352),8);
}
B719a79:{NFSU2_TR(0x719a79);
__builtin_memmove((R+4448),(R+4368),8);
}
B719a7c:{NFSU2_TR(0x719a7c);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719a7f:{NFSU2_TR(0x719a7f);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B719a82:{NFSU2_TR(0x719a82);
__builtin_memmove((R+4368),(R+4352),8);
}
B719a85:{NFSU2_TR(0x719a85);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B719a88:{NFSU2_TR(0x719a88);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719a8b:{NFSU2_TR(0x719a8b);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B719a8e:{NFSU2_TR(0x719a8e);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719a91:{NFSU2_TR(0x719a91);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719a94:{NFSU2_TR(0x719a94);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B719a98:{NFSU2_TR(0x719a98);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719a9b:{NFSU2_TR(0x719a9b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B719a9f:{NFSU2_TR(0x719a9f);
__builtin_memmove((R+4368),(R+4400),8);
}
B719aa2:{NFSU2_TR(0x719aa2);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719aa6:{NFSU2_TR(0x719aa6);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B719aa9:{NFSU2_TR(0x719aa9);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B719aac:{NFSU2_TR(0x719aac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B719ab0:{NFSU2_TR(0x719ab0);
__builtin_memmove((R+4384),(R+4352),8);
}
B719ab3:{NFSU2_TR(0x719ab3);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719ab6:{NFSU2_TR(0x719ab6);
__builtin_memmove((R+4416),(R+4352),8);
}
B719ab9:{NFSU2_TR(0x719ab9);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B719abd:{NFSU2_TR(0x719abd);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B719ac0:{NFSU2_TR(0x719ac0);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B719ac3:{NFSU2_TR(0x719ac3);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719ac6:{NFSU2_TR(0x719ac6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B719ac9:{NFSU2_TR(0x719ac9);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B719acc:{NFSU2_TR(0x719acc);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719acf:{NFSU2_TR(0x719acf);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B719ad2:{NFSU2_TR(0x719ad2);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719ad5:{NFSU2_TR(0x719ad5);
u8 U[4];
w4(U+0,u32(r8(R+4432)));
s4(u32(r4(R+24)),r4(U+0));
}
B719ad8:{NFSU2_TR(0x719ad8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(r8(R+4448)));
s4(u32(r4(U+4)),r4(U+8));
}
B719adc:{NFSU2_TR(0x719adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719ae0:{NFSU2_TR(0x719ae0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719ae5:{NFSU2_TR(0x719ae5);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719ae8:{NFSU2_TR(0x719ae8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B719aed:{NFSU2_TR(0x719aed);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719af0:{NFSU2_TR(0x719af0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B719af5:{NFSU2_TR(0x719af5);
__builtin_memmove((R+4432),(R+4352),8);
}
B719af8:{NFSU2_TR(0x719af8);
__builtin_memmove((R+4448),(R+4368),8);
}
B719afb:{NFSU2_TR(0x719afb);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719afe:{NFSU2_TR(0x719afe);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B719b01:{NFSU2_TR(0x719b01);
__builtin_memmove((R+4368),(R+4352),8);
}
B719b04:{NFSU2_TR(0x719b04);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B719b07:{NFSU2_TR(0x719b07);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719b0a:{NFSU2_TR(0x719b0a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B719b0d:{NFSU2_TR(0x719b0d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719b10:{NFSU2_TR(0x719b10);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719b13:{NFSU2_TR(0x719b13);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B719b17:{NFSU2_TR(0x719b17);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719b1a:{NFSU2_TR(0x719b1a);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B719b1e:{NFSU2_TR(0x719b1e);
__builtin_memmove((R+4368),(R+4400),8);
}
B719b21:{NFSU2_TR(0x719b21);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719b25:{NFSU2_TR(0x719b25);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B719b28:{NFSU2_TR(0x719b28);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B719b2b:{NFSU2_TR(0x719b2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B719b2f:{NFSU2_TR(0x719b2f);
__builtin_memmove((R+4384),(R+4352),8);
}
B719b32:{NFSU2_TR(0x719b32);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719b35:{NFSU2_TR(0x719b35);
__builtin_memmove((R+4416),(R+4352),8);
}
B719b38:{NFSU2_TR(0x719b38);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B719b3c:{NFSU2_TR(0x719b3c);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B719b3f:{NFSU2_TR(0x719b3f);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B719b42:{NFSU2_TR(0x719b42);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719b45:{NFSU2_TR(0x719b45);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B719b48:{NFSU2_TR(0x719b48);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B719b4b:{NFSU2_TR(0x719b4b);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719b4e:{NFSU2_TR(0x719b4e);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B719b51:{NFSU2_TR(0x719b51);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719b54:{NFSU2_TR(0x719b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(r8(R+4432)));
s4(u32(r4(U+0)),r4(U+4));
}
B719b58:{NFSU2_TR(0x719b58);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(r8(R+4448)));
s4(u32(r4(U+8)),r4(U+12));
}
B719b5d:{NFSU2_TR(0x719b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B719b61:{NFSU2_TR(0x719b61);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4368,u64(r4(U+12)));
}
B719b66:{NFSU2_TR(0x719b66);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719b69:{NFSU2_TR(0x719b69);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4384,u64(r4(U+12)));
}
B719b6e:{NFSU2_TR(0x719b6e);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719b71:{NFSU2_TR(0x719b71);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(R+4400,u64(r4(U+12)));
}
B719b76:{NFSU2_TR(0x719b76);
__builtin_memmove((R+4432),(R+4352),8);
}
B719b79:{NFSU2_TR(0x719b79);
__builtin_memmove((R+4448),(R+4368),8);
}
B719b7c:{NFSU2_TR(0x719b7c);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719b7f:{NFSU2_TR(0x719b7f);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B719b82:{NFSU2_TR(0x719b82);
__builtin_memmove((R+4368),(R+4352),8);
}
B719b85:{NFSU2_TR(0x719b85);
__builtin_memmove((R+4407),(R+4467),1);
__builtin_memmove((R+4406),(R+4403),1);
__builtin_memmove((R+4405),(R+4466),1);
__builtin_memmove((R+4404),(R+4402),1);
__builtin_memmove((R+4403),(R+4465),1);
__builtin_memmove((R+4402),(R+4401),1);
__builtin_memmove((R+4401),(R+4464),1);
}
B719b88:{NFSU2_TR(0x719b88);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719b8b:{NFSU2_TR(0x719b8b);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4390))));
}
B719b8e:{NFSU2_TR(0x719b8e);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719b91:{NFSU2_TR(0x719b91);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B719b94:{NFSU2_TR(0x719b94);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B719b98:{NFSU2_TR(0x719b98);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(G+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719b9b:{NFSU2_TR(0x719b9b);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B719b9f:{NFSU2_TR(0x719b9f);
__builtin_memmove((R+4368),(R+4400),8);
}
B719ba2:{NFSU2_TR(0x719ba2);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B719ba6:{NFSU2_TR(0x719ba6);
w8(R+4368,u64(u64(r8(R+4368))^u64(r8(R+4400))));
}
B719ba9:{NFSU2_TR(0x719ba9);
{wv<8>((R+4368),uo::psubsw<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B719bac:{NFSU2_TR(0x719bac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(U+4))));
}
B719bb0:{NFSU2_TR(0x719bb0);
__builtin_memmove((R+4384),(R+4352),8);
}
B719bb3:{NFSU2_TR(0x719bb3);
w2(R+4352,u16(u32(r2(R+4352))-u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))-u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))-u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))-u32(r2(R+4374))));
}
B719bb6:{NFSU2_TR(0x719bb6);
__builtin_memmove((R+4416),(R+4352),8);
}
B719bb9:{NFSU2_TR(0x719bb9);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0xfull)));}
}
B719bbd:{NFSU2_TR(0x719bbd);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4352))));
}
B719bc0:{NFSU2_TR(0x719bc0);
{wv<8>((R+4416),uo::psubsw<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B719bc3:{NFSU2_TR(0x719bc3);
{wv<8>((R+4384),uo::psubusw<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B719bc6:{NFSU2_TR(0x719bc6);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4406))));
}
B719bc9:{NFSU2_TR(0x719bc9);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4384))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4386))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4388))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4390))));
}
B719bcc:{NFSU2_TR(0x719bcc);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4384))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4386))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4388))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4390))));
}
B719bcf:{NFSU2_TR(0x719bcf);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B719bd2:{NFSU2_TR(0x719bd2);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B719bd5:{NFSU2_TR(0x719bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4432)));
s4(u32(r4(U+0)),r4(U+4));
}
B719bd9:{NFSU2_TR(0x719bd9);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(r8(R+4448)));
s4(u32(r4(U+8)),r4(U+12));
}
B719bde:{NFSU2_TR(0x719bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719bdf:{NFSU2_TR(0x719bdf);
__builtin_memmove((G+16),(R+20),4);
}
B719be1:{NFSU2_TR(0x719be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719be2:{NFSU2_TR(0x719be2);
__builtin_memmove((G+16),(R+12),4);
}
B719be4:{NFSU2_TR(0x719be4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719be5:{NFSU2_TR(0x719be5);
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
PN u32 blk_719be6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719be6:L719be6:{bud-=14;NFSU2_TR(0x719be6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719be7:{NFSU2_TR(0x719be7);
__builtin_memmove((R+20),(G+16),4);
}
B719be9:{NFSU2_TR(0x719be9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719bea:{NFSU2_TR(0x719bea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719beb:{NFSU2_TR(0x719beb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719bec:{NFSU2_TR(0x719bec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719bed:{NFSU2_TR(0x719bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719bf0:{NFSU2_TR(0x719bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719bf3:{NFSU2_TR(0x719bf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B719bf6:{NFSU2_TR(0x719bf6);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B719bfa:{NFSU2_TR(0x719bfa);
__builtin_memmove((R+4432),gp(0x7c6760),8);
}
B719c01:{NFSU2_TR(0x719c01);
__builtin_memmove((R+4448),gp(0x7c6750),8);
}
B719c08:{NFSU2_TR(0x719c08);
__builtin_memmove((R+4416),gp(0x7c6700),8);
}
B719c0f:{NFSU2_TR(0x719c0f);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
{[[clang::musttail]] return blk_719c12(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719c12(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719c12:L719c12:{bud-=26;NFSU2_TR(0x719c12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B719c14:{NFSU2_TR(0x719c14);
__builtin_memmove((R+12),(G+0),4);
}
B719c16:{NFSU2_TR(0x719c16);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff00ull))));
}
B719c1c:{NFSU2_TR(0x719c1c);
__builtin_memmove((G+4),(G+0),4);
}
B719c1e:{NFSU2_TR(0x719c1e);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffff0000ull))));
}
B719c23:{NFSU2_TR(0x719c23);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+0))));
}
B719c25:{NFSU2_TR(0x719c25);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B719c28:{NFSU2_TR(0x719c28);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+12))));
}
B719c2a:{NFSU2_TR(0x719c2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B719c2d:{NFSU2_TR(0x719c2d);
w8(R+4368,u64(r4(G+0)));
}
B719c30:{NFSU2_TR(0x719c30);
w4(R+12,u32(u32(r4(R+12))|u32(r4(G+4))));
}
B719c32:{NFSU2_TR(0x719c32);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719c35:{NFSU2_TR(0x719c35);
w8(R+4352,u64(r4(R+12)));
}
B719c38:{NFSU2_TR(0x719c38);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B719c3b:{NFSU2_TR(0x719c3b);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719c3e:{NFSU2_TR(0x719c3e);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719c41:{NFSU2_TR(0x719c41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B719c43:{NFSU2_TR(0x719c43);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B719c46:{NFSU2_TR(0x719c46);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5ull))));
}
B719c49:{NFSU2_TR(0x719c49);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719c4c:{NFSU2_TR(0x719c4c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719c4f:{NFSU2_TR(0x719c4f);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719c53:{NFSU2_TR(0x719c53);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B719c55:{NFSU2_TR(0x719c55);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4464),8);
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
B719c58:{NFSU2_TR(0x719c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B719c5c:{NFSU2_TR(0x719c5c);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x719c12u);}goto L719c12;}}
}
B719c5e:L719c5e:{bud-=31;NFSU2_TR(0x719c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((G+0),(U+0),4);
}
B719c60:{NFSU2_TR(0x719c60);
__builtin_memmove((R+12),(G+0),4);
}
B719c62:{NFSU2_TR(0x719c62);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffff00ull))));
}
B719c68:{NFSU2_TR(0x719c68);
__builtin_memmove((G+4),(G+0),4);
}
B719c6a:{NFSU2_TR(0x719c6a);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffff0000ull))));
}
B719c6f:{NFSU2_TR(0x719c6f);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+0))));
}
B719c71:{NFSU2_TR(0x719c71);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B719c74:{NFSU2_TR(0x719c74);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+12))));
}
B719c76:{NFSU2_TR(0x719c76);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B719c79:{NFSU2_TR(0x719c79);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xffff0000ull))));
}
B719c7e:{NFSU2_TR(0x719c7e);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+12))));
}
B719c80:{NFSU2_TR(0x719c80);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B719c83:{NFSU2_TR(0x719c83);
w8(R+4368,u64(r4(G+0)));
}
B719c86:{NFSU2_TR(0x719c86);
u8 U[6];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(r4(G+4))));
w1(F+7,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B719c88:{NFSU2_TR(0x719c88);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719c8b:{NFSU2_TR(0x719c8b);
w8(R+4352,u64(r4(R+12)));
}
B719c8e:{NFSU2_TR(0x719c8e);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B719c91:{NFSU2_TR(0x719c91);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719c94:{NFSU2_TR(0x719c94);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719c97:{NFSU2_TR(0x719c97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B719c99:{NFSU2_TR(0x719c99);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719c9c:{NFSU2_TR(0x719c9c);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719c9f:{NFSU2_TR(0x719c9f);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719ca3:{NFSU2_TR(0x719ca3);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4464),8);
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
B719ca6:{NFSU2_TR(0x719ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B719caa:{NFSU2_TR(0x719caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719cab:{NFSU2_TR(0x719cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719cac:{NFSU2_TR(0x719cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719cad:{NFSU2_TR(0x719cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B719cae:{NFSU2_TR(0x719cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719caf:{NFSU2_TR(0x719caf);
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
PN u32 blk_719cb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719cb0:L719cb0:{bud-=12;NFSU2_TR(0x719cb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719cb1:{NFSU2_TR(0x719cb1);
__builtin_memmove((R+20),(G+16),4);
}
B719cb3:{NFSU2_TR(0x719cb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719cb4:{NFSU2_TR(0x719cb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719cb5:{NFSU2_TR(0x719cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719cb8:{NFSU2_TR(0x719cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B719cbb:{NFSU2_TR(0x719cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B719cbe:{NFSU2_TR(0x719cbe);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B719cc2:{NFSU2_TR(0x719cc2);
__builtin_memmove((R+4432),gp(0x7c6730),8);
}
B719cc9:{NFSU2_TR(0x719cc9);
__builtin_memmove((R+4448),gp(0x7c6720),8);
}
B719cd0:{NFSU2_TR(0x719cd0);
__builtin_memmove((R+4416),gp(0x7c6700),8);
}
B719cd7:{NFSU2_TR(0x719cd7);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
{[[clang::musttail]] return blk_719cda(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719cda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719cda:L719cda:{bud-=28;NFSU2_TR(0x719cda);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719cdd:{NFSU2_TR(0x719cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B719ce1:{NFSU2_TR(0x719ce1);
__builtin_memmove((R+4384),(R+4352),8);
}
B719ce4:{NFSU2_TR(0x719ce4);
__builtin_memmove((R+4400),(R+4368),8);
}
B719ce7:{NFSU2_TR(0x719ce7);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+28)),r4(U+0));
}
B719cea:{NFSU2_TR(0x719cea);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719ced:{NFSU2_TR(0x719ced);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719cf0:{NFSU2_TR(0x719cf0);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719cf3:{NFSU2_TR(0x719cf3);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B719cf6:{NFSU2_TR(0x719cf6);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719cf9:{NFSU2_TR(0x719cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B719cfd:{NFSU2_TR(0x719cfd);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B719d00:{NFSU2_TR(0x719d00);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719d03:{NFSU2_TR(0x719d03);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B719d06:{NFSU2_TR(0x719d06);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719d09:{NFSU2_TR(0x719d09);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719d0c:{NFSU2_TR(0x719d0c);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719d10:{NFSU2_TR(0x719d10);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4464),8);
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
B719d13:{NFSU2_TR(0x719d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d17:{NFSU2_TR(0x719d17);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xaull))));
}
B719d1a:{NFSU2_TR(0x719d1a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B719d1d:{NFSU2_TR(0x719d1d);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B719d20:{NFSU2_TR(0x719d20);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4422))));
}
B719d23:{NFSU2_TR(0x719d23);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(F+0,u8((r4(R+24))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B719d25:{NFSU2_TR(0x719d25);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719d29:{NFSU2_TR(0x719d29);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B719d2c:{NFSU2_TR(0x719d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d30:{NFSU2_TR(0x719d30);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x719cdau);}goto L719cda;}}
}
B719d32:L719d32:{bud-=33;NFSU2_TR(0x719d32);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719d35:{NFSU2_TR(0x719d35);
__builtin_memmove((R+4368),(R+4352),8);
}
B719d38:{NFSU2_TR(0x719d38);
__builtin_memmove((R+4384),(R+4352),8);
}
B719d3b:{NFSU2_TR(0x719d3b);
w8(R+4368,shr<u64>(r8(R+4368),u64(u32(0x8ull))));
}
B719d3f:{NFSU2_TR(0x719d3f);
__builtin_memmove((R+4400),gp(0x7c6740),8);
}
B719d46:{NFSU2_TR(0x719d46);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4368))));
}
B719d49:{NFSU2_TR(0x719d49);
w8(R+4400,shl<u64>(r8(R+4400),u64(u64(0x8ull))));
}
B719d4d:{NFSU2_TR(0x719d4d);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4400))));
}
B719d50:{NFSU2_TR(0x719d50);
__builtin_memmove((R+4400),(R+4368),8);
}
B719d53:{NFSU2_TR(0x719d53);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+28)),r4(U+0));
}
B719d56:{NFSU2_TR(0x719d56);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719d59:{NFSU2_TR(0x719d59);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719d5c:{NFSU2_TR(0x719d5c);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719d5f:{NFSU2_TR(0x719d5f);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4448))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4450))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4452))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4454))));
}
B719d62:{NFSU2_TR(0x719d62);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719d65:{NFSU2_TR(0x719d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d69:{NFSU2_TR(0x719d69);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B719d6c:{NFSU2_TR(0x719d6c);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719d6f:{NFSU2_TR(0x719d6f);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4454))));
}
B719d72:{NFSU2_TR(0x719d72);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B719d75:{NFSU2_TR(0x719d75);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719d78:{NFSU2_TR(0x719d78);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719d7c:{NFSU2_TR(0x719d7c);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4464),8);
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
B719d7f:{NFSU2_TR(0x719d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d83:{NFSU2_TR(0x719d83);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4400))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4402))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4404))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4406))));
}
B719d86:{NFSU2_TR(0x719d86);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4422))));
}
B719d89:{NFSU2_TR(0x719d89);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719d8d:{NFSU2_TR(0x719d8d);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4464),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B719d90:{NFSU2_TR(0x719d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B719d94:{NFSU2_TR(0x719d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719d95:{NFSU2_TR(0x719d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719d96:{NFSU2_TR(0x719d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719d97:{NFSU2_TR(0x719d97);
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
PN u32 blk_719d98(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719d98:L719d98:{bud-=10;NFSU2_TR(0x719d98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719d99:{NFSU2_TR(0x719d99);
__builtin_memmove((R+20),(G+16),4);
}
B719d9b:{NFSU2_TR(0x719d9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719d9c:{NFSU2_TR(0x719d9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719d9d:{NFSU2_TR(0x719d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719da0:{NFSU2_TR(0x719da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B719da3:{NFSU2_TR(0x719da3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B719da6:{NFSU2_TR(0x719da6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+4))));
}
B719da8:{NFSU2_TR(0x719da8);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719dab:{NFSU2_TR(0x719dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_719dae(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719dae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719dae:L719dae:{bud-=85;NFSU2_TR(0x719dae);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719db1:{NFSU2_TR(0x719db1);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B719db5:{NFSU2_TR(0x719db5);
__builtin_memmove((R+4384),(R+4352),8);
}
B719db8:{NFSU2_TR(0x719db8);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719dbb:{NFSU2_TR(0x719dbb);
__builtin_memmove((R+4432),gp(0x7c66c0),8);
}
B719dc2:{NFSU2_TR(0x719dc2);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719dc5:{NFSU2_TR(0x719dc5);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719dc8:{NFSU2_TR(0x719dc8);
__builtin_memmove((R+4400),(R+4368),8);
}
B719dcb:{NFSU2_TR(0x719dcb);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719dce:{NFSU2_TR(0x719dce);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B719dd1:{NFSU2_TR(0x719dd1);
__builtin_memmove((R+4448),gp(0x7c66f0),8);
}
B719dd8:{NFSU2_TR(0x719dd8);
__builtin_memmove((R+4416),(R+4368),8);
}
B719ddb:{NFSU2_TR(0x719ddb);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B719dde:{NFSU2_TR(0x719dde);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719de1:{NFSU2_TR(0x719de1);
__builtin_memmove((R+4432),(R+4400),8);
}
B719de4:{NFSU2_TR(0x719de4);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B719de7:{NFSU2_TR(0x719de7);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719dea:{NFSU2_TR(0x719dea);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4438))));
}
B719ded:{NFSU2_TR(0x719ded);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B719df4:{NFSU2_TR(0x719df4);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B719dfb:{NFSU2_TR(0x719dfb);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719dff:{NFSU2_TR(0x719dff);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719e03:{NFSU2_TR(0x719e03);
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
B719e06:{NFSU2_TR(0x719e06);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719e0a:{NFSU2_TR(0x719e0a);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B719e0e:{NFSU2_TR(0x719e0e);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B719e15:{NFSU2_TR(0x719e15);
__builtin_memmove((R+4384),(R+4352),8);
}
B719e18:{NFSU2_TR(0x719e18);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B719e1b:{NFSU2_TR(0x719e1b);
__builtin_memmove((R+4448),gp(0x7c66e0),8);
}
B719e22:{NFSU2_TR(0x719e22);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719e25:{NFSU2_TR(0x719e25);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4438))));
}
B719e28:{NFSU2_TR(0x719e28);
__builtin_memmove((R+4416),(R+4352),8);
}
B719e2b:{NFSU2_TR(0x719e2b);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719e2e:{NFSU2_TR(0x719e2e);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B719e31:{NFSU2_TR(0x719e31);
__builtin_memmove((R+4432),(R+4384),8);
}
B719e34:{NFSU2_TR(0x719e34);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B719e37:{NFSU2_TR(0x719e37);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B719e3a:{NFSU2_TR(0x719e3a);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B719e3d:{NFSU2_TR(0x719e3d);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B719e44:{NFSU2_TR(0x719e44);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B719e4b:{NFSU2_TR(0x719e4b);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B719e4f:{NFSU2_TR(0x719e4f);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B719e53:{NFSU2_TR(0x719e53);
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
B719e56:{NFSU2_TR(0x719e56);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719e5a:{NFSU2_TR(0x719e5a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B719e5d:{NFSU2_TR(0x719e5d);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4454))));
}
B719e60:{NFSU2_TR(0x719e60);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B719e67:{NFSU2_TR(0x719e67);
__builtin_memmove((R+4400),(R+4368),8);
}
B719e6a:{NFSU2_TR(0x719e6a);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B719e6d:{NFSU2_TR(0x719e6d);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719e70:{NFSU2_TR(0x719e70);
__builtin_memmove((R+4416),(R+4368),8);
}
B719e73:{NFSU2_TR(0x719e73);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719e76:{NFSU2_TR(0x719e76);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4438))));
}
B719e79:{NFSU2_TR(0x719e79);
__builtin_memmove((R+4448),(R+4400),8);
}
B719e7c:{NFSU2_TR(0x719e7c);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4438))));
}
B719e7f:{NFSU2_TR(0x719e7f);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719e82:{NFSU2_TR(0x719e82);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B719e85:{NFSU2_TR(0x719e85);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B719e8c:{NFSU2_TR(0x719e8c);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B719e93:{NFSU2_TR(0x719e93);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719e97:{NFSU2_TR(0x719e97);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719e9b:{NFSU2_TR(0x719e9b);
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
B719e9e:{NFSU2_TR(0x719e9e);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B719ea1:{NFSU2_TR(0x719ea1);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B719ea5:{NFSU2_TR(0x719ea5);
__builtin_memmove((R+4432),gp(0x7c66f0),8);
}
B719eac:{NFSU2_TR(0x719eac);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B719eaf:{NFSU2_TR(0x719eaf);
__builtin_memmove((R+4448),gp(0x7c66c0),8);
}
B719eb6:{NFSU2_TR(0x719eb6);
__builtin_memmove((R+4384),(R+4352),8);
}
B719eb9:{NFSU2_TR(0x719eb9);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4438))));
}
B719ebc:{NFSU2_TR(0x719ebc);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719ebf:{NFSU2_TR(0x719ebf);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4454))));
}
B719ec2:{NFSU2_TR(0x719ec2);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719ec5:{NFSU2_TR(0x719ec5);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B719ec8:{NFSU2_TR(0x719ec8);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B719ecb:{NFSU2_TR(0x719ecb);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B719ece:{NFSU2_TR(0x719ece);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B719ed5:{NFSU2_TR(0x719ed5);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B719edc:{NFSU2_TR(0x719edc);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B719ee0:{NFSU2_TR(0x719ee0);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B719ee4:{NFSU2_TR(0x719ee4);
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
B719ee7:{NFSU2_TR(0x719ee7);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719eeb:{NFSU2_TR(0x719eeb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B719eee:{NFSU2_TR(0x719eee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B719ef1:{NFSU2_TR(0x719ef1);
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
B719ef4:{NFSU2_TR(0x719ef4);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x719daeu);}goto L719dae;}}
}
B719efa:L719efa:{bud-=4;NFSU2_TR(0x719efa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B719efb:{NFSU2_TR(0x719efb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B719efc:{NFSU2_TR(0x719efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B719efd:{NFSU2_TR(0x719efd);
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
PN u32 blk_719efe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719efe:L719efe:{bud-=10;NFSU2_TR(0x719efe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719eff:{NFSU2_TR(0x719eff);
__builtin_memmove((R+20),(G+16),4);
}
B719f01:{NFSU2_TR(0x719f01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719f02:{NFSU2_TR(0x719f02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B719f03:{NFSU2_TR(0x719f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B719f06:{NFSU2_TR(0x719f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B719f09:{NFSU2_TR(0x719f09);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B719f0c:{NFSU2_TR(0x719f0c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(G+4))));
}
B719f0e:{NFSU2_TR(0x719f0e);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B719f11:{NFSU2_TR(0x719f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_719f14(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_719f14(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B719f14:L719f14:{bud-=61;NFSU2_TR(0x719f14);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B719f17:{NFSU2_TR(0x719f17);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B719f1b:{NFSU2_TR(0x719f1b);
__builtin_memmove((R+4384),(R+4352),8);
}
B719f1e:{NFSU2_TR(0x719f1e);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719f21:{NFSU2_TR(0x719f21);
__builtin_memmove((R+4432),gp(0x7c66c0),8);
}
B719f28:{NFSU2_TR(0x719f28);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719f2b:{NFSU2_TR(0x719f2b);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4432))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4434))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4436))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4438))));
}
B719f2e:{NFSU2_TR(0x719f2e);
__builtin_memmove((R+4400),(R+4368),8);
}
B719f31:{NFSU2_TR(0x719f31);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719f34:{NFSU2_TR(0x719f34);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4438))));
}
B719f37:{NFSU2_TR(0x719f37);
__builtin_memmove((R+4448),gp(0x7c66f0),8);
}
B719f3e:{NFSU2_TR(0x719f3e);
__builtin_memmove((R+4416),(R+4368),8);
}
B719f41:{NFSU2_TR(0x719f41);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B719f44:{NFSU2_TR(0x719f44);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719f47:{NFSU2_TR(0x719f47);
__builtin_memmove((R+4432),(R+4400),8);
}
B719f4a:{NFSU2_TR(0x719f4a);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B719f4d:{NFSU2_TR(0x719f4d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719f50:{NFSU2_TR(0x719f50);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4432))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4434))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4436))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4438))));
}
B719f53:{NFSU2_TR(0x719f53);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B719f5a:{NFSU2_TR(0x719f5a);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B719f61:{NFSU2_TR(0x719f61);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
}
B719f65:{NFSU2_TR(0x719f65);
w2(R+4384,shr<u16>(r2(R+4384),u64(u32(0x8ull))));
w2(R+4386,shr<u16>(r2(R+4386),u64(u32(0x8ull))));
w2(R+4388,shr<u16>(r2(R+4388),u64(u32(0x8ull))));
w2(R+4390,shr<u16>(r2(R+4390),u64(u32(0x8ull))));
}
B719f69:{NFSU2_TR(0x719f69);
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
B719f6c:{NFSU2_TR(0x719f6c);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719f70:{NFSU2_TR(0x719f70);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B719f74:{NFSU2_TR(0x719f74);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B719f7b:{NFSU2_TR(0x719f7b);
__builtin_memmove((R+4384),(R+4352),8);
}
B719f7e:{NFSU2_TR(0x719f7e);
w2(R+4368,u16(u32(r2(R+4368))*u32(r2(R+4432))));
w2(R+4370,u16(u32(r2(R+4370))*u32(r2(R+4434))));
w2(R+4372,u16(u32(r2(R+4372))*u32(r2(R+4436))));
w2(R+4374,u16(u32(r2(R+4374))*u32(r2(R+4438))));
}
B719f81:{NFSU2_TR(0x719f81);
__builtin_memmove((R+4448),gp(0x7c66e0),8);
}
B719f88:{NFSU2_TR(0x719f88);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B719f8b:{NFSU2_TR(0x719f8b);
w2(R+4400,u16(u32(r2(R+4400))*u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))*u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))*u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))*u32(r2(R+4438))));
}
B719f8e:{NFSU2_TR(0x719f8e);
__builtin_memmove((R+4416),(R+4352),8);
}
B719f91:{NFSU2_TR(0x719f91);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B719f94:{NFSU2_TR(0x719f94);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4448))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4450))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4452))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4454))));
}
B719f97:{NFSU2_TR(0x719f97);
__builtin_memmove((R+4432),(R+4384),8);
}
B719f9a:{NFSU2_TR(0x719f9a);
w2(R+4432,u16(u32(r2(R+4432))*u32(r2(R+4448))));
w2(R+4434,u16(u32(r2(R+4434))*u32(r2(R+4450))));
w2(R+4436,u16(u32(r2(R+4436))*u32(r2(R+4452))));
w2(R+4438,u16(u32(r2(R+4438))*u32(r2(R+4454))));
}
B719f9d:{NFSU2_TR(0x719f9d);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B719fa0:{NFSU2_TR(0x719fa0);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B719fa3:{NFSU2_TR(0x719fa3);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(U+0))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(U+2))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(U+4))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(U+6))));
}
B719faa:{NFSU2_TR(0x719faa);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B719fb1:{NFSU2_TR(0x719fb1);
w2(R+4368,shr<u16>(r2(R+4368),u64(u32(0x8ull))));
w2(R+4370,shr<u16>(r2(R+4370),u64(u32(0x8ull))));
w2(R+4372,shr<u16>(r2(R+4372),u64(u32(0x8ull))));
w2(R+4374,shr<u16>(r2(R+4374),u64(u32(0x8ull))));
}
B719fb5:{NFSU2_TR(0x719fb5);
w2(R+4400,shr<u16>(r2(R+4400),u64(u32(0x8ull))));
w2(R+4402,shr<u16>(r2(R+4402),u64(u32(0x8ull))));
w2(R+4404,shr<u16>(r2(R+4404),u64(u32(0x8ull))));
w2(R+4406,shr<u16>(r2(R+4406),u64(u32(0x8ull))));
}
B719fb9:{NFSU2_TR(0x719fb9);
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
B719fbc:{NFSU2_TR(0x719fbc);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719fc0:{NFSU2_TR(0x719fc0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B719fc3:{NFSU2_TR(0x719fc3);
u8 U[16];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B719fc7:{NFSU2_TR(0x719fc7);
w2(R+4352,u16(u32(r2(R+4352))*u32(r2(R+4448))));
w2(R+4354,u16(u32(r2(R+4354))*u32(r2(R+4450))));
w2(R+4356,u16(u32(r2(R+4356))*u32(r2(R+4452))));
w2(R+4358,u16(u32(r2(R+4358))*u32(r2(R+4454))));
}
B719fca:{NFSU2_TR(0x719fca);
__builtin_memmove((R+4432),gp(0x7c66d0),8);
}
B719fd1:{NFSU2_TR(0x719fd1);
__builtin_memmove((R+4400),(R+4368),8);
}
B719fd4:{NFSU2_TR(0x719fd4);
w2(R+4384,u16(u32(r2(R+4384))*u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))*u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))*u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))*u32(r2(R+4454))));
}
B719fd7:{NFSU2_TR(0x719fd7);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B719fda:{NFSU2_TR(0x719fda);
__builtin_memmove((R+4416),(R+4368),8);
}
B719fdd:{NFSU2_TR(0x719fdd);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B719fe0:{NFSU2_TR(0x719fe0);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4438))));
}
B719fe3:{NFSU2_TR(0x719fe3);
__builtin_memmove((R+4448),(R+4400),8);
}
B719fe6:{NFSU2_TR(0x719fe6);
w2(R+4448,u16(u32(r2(R+4448))*u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))*u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))*u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))*u32(r2(R+4438))));
}
B719fe9:{NFSU2_TR(0x719fe9);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4416))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4418))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4420))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4422))));
}
B719fec:{NFSU2_TR(0x719fec);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(R+4448))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(R+4450))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(R+4452))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(R+4454))));
}
B719fef:{NFSU2_TR(0x719fef);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B719ff6:{NFSU2_TR(0x719ff6);
u8 U[8];
__builtin_memmove((U+0),gp(0x7c6700),8);
w2(R+4384,u16(u32(r2(R+4384))+u32(r2(U+0))));
w2(R+4386,u16(u32(r2(R+4386))+u32(r2(U+2))));
w2(R+4388,u16(u32(r2(R+4388))+u32(r2(U+4))));
w2(R+4390,u16(u32(r2(R+4390))+u32(r2(U+6))));
}
B719ffd:{NFSU2_TR(0x719ffd);
w2(R+4352,shr<u16>(r2(R+4352),u64(u32(0x8ull))));
w2(R+4354,shr<u16>(r2(R+4354),u64(u32(0x8ull))));
w2(R+4356,shr<u16>(r2(R+4356),u64(u32(0x8ull))));
w2(R+4358,shr<u16>(r2(R+4358),u64(u32(0x8ull))));
{[[clang::musttail]] return blk_71a001(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_719(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x719002:[[clang::musttail]] return blk_719002(c,a4,a0,a1,bud);
case 0x719021:[[clang::musttail]] return blk_719021(c,a4,a0,a1,bud);
case 0x719027:[[clang::musttail]] return blk_719027(c,a4,a0,a1,bud);
case 0x71902d:[[clang::musttail]] return blk_71902d(c,a4,a0,a1,bud);
case 0x719033:[[clang::musttail]] return blk_719033(c,a4,a0,a1,bud);
case 0x719036:[[clang::musttail]] return blk_719036(c,a4,a0,a1,bud);
case 0x71903c:[[clang::musttail]] return blk_71903c(c,a4,a0,a1,bud);
case 0x71903f:[[clang::musttail]] return blk_71903f(c,a4,a0,a1,bud);
case 0x719045:[[clang::musttail]] return blk_719045(c,a4,a0,a1,bud);
case 0x719049:[[clang::musttail]] return blk_719049(c,a4,a0,a1,bud);
case 0x71904b:[[clang::musttail]] return blk_71904b(c,a4,a0,a1,bud);
case 0x71904f:[[clang::musttail]] return blk_71904f(c,a4,a0,a1,bud);
case 0x719052:[[clang::musttail]] return blk_719052(c,a4,a0,a1,bud);
case 0x71905a:[[clang::musttail]] return blk_71905a(c,a4,a0,a1,bud);
case 0x719063:[[clang::musttail]] return blk_719063(c,a4,a0,a1,bud);
case 0x71906e:[[clang::musttail]] return blk_71906e(c,a4,a0,a1,bud);
case 0x71907d:[[clang::musttail]] return blk_71907d(c,a4,a0,a1,bud);
case 0x71908c:[[clang::musttail]] return blk_71908c(c,a4,a0,a1,bud);
case 0x7190a4:[[clang::musttail]] return blk_7190a4(c,a4,a0,a1,bud);
case 0x7190a6:[[clang::musttail]] return blk_7190a6(c,a4,a0,a1,bud);
case 0x7190ab:[[clang::musttail]] return blk_7190ab(c,a4,a0,a1,bud);
case 0x7190ad:[[clang::musttail]] return blk_7190ad(c,a4,a0,a1,bud);
case 0x7190b2:[[clang::musttail]] return blk_7190b2(c,a4,a0,a1,bud);
case 0x7190b7:[[clang::musttail]] return blk_7190b7(c,a4,a0,a1,bud);
case 0x7190ba:[[clang::musttail]] return blk_7190ba(c,a4,a0,a1,bud);
case 0x7190c0:[[clang::musttail]] return blk_7190c0(c,a4,a0,a1,bud);
case 0x7190c3:[[clang::musttail]] return blk_7190c3(c,a4,a0,a1,bud);
case 0x7190ef:[[clang::musttail]] return blk_7190ef(c,a4,a0,a1,bud);
case 0x7190f1:[[clang::musttail]] return blk_7190f1(c,a4,a0,a1,bud);
case 0x7190f6:[[clang::musttail]] return blk_7190f6(c,a4,a0,a1,bud);
case 0x7190f8:[[clang::musttail]] return blk_7190f8(c,a4,a0,a1,bud);
case 0x7190fa:[[clang::musttail]] return blk_7190fa(c,a4,a0,a1,bud);
case 0x7190ff:[[clang::musttail]] return blk_7190ff(c,a4,a0,a1,bud);
case 0x719174:[[clang::musttail]] return blk_719174(c,a4,a0,a1,bud);
case 0x71917f:[[clang::musttail]] return blk_71917f(c,a4,a0,a1,bud);
case 0x719199:[[clang::musttail]] return blk_719199(c,a4,a0,a1,bud);
case 0x7191cd:[[clang::musttail]] return blk_7191cd(c,a4,a0,a1,bud);
case 0x7191d6:[[clang::musttail]] return blk_7191d6(c,a4,a0,a1,bud);
case 0x7191f0:[[clang::musttail]] return blk_7191f0(c,a4,a0,a1,bud);
case 0x7191f2:[[clang::musttail]] return blk_7191f2(c,a4,a0,a1,bud);
case 0x7191fe:[[clang::musttail]] return blk_7191fe(c,a4,a0,a1,bud);
case 0x719200:[[clang::musttail]] return blk_719200(c,a4,a0,a1,bud);
case 0x719206:[[clang::musttail]] return blk_719206(c,a4,a0,a1,bud);
case 0x719224:[[clang::musttail]] return blk_719224(c,a4,a0,a1,bud);
case 0x719274:[[clang::musttail]] return blk_719274(c,a4,a0,a1,bud);
case 0x719288:[[clang::musttail]] return blk_719288(c,a4,a0,a1,bud);
case 0x71928a:[[clang::musttail]] return blk_71928a(c,a4,a0,a1,bud);
case 0x71928f:[[clang::musttail]] return blk_71928f(c,a4,a0,a1,bud);
case 0x719291:[[clang::musttail]] return blk_719291(c,a4,a0,a1,bud);
case 0x719296:[[clang::musttail]] return blk_719296(c,a4,a0,a1,bud);
case 0x7192a0:[[clang::musttail]] return blk_7192a0(c,a4,a0,a1,bud);
case 0x7192ca:[[clang::musttail]] return blk_7192ca(c,a4,a0,a1,bud);
case 0x7193e8:[[clang::musttail]] return blk_7193e8(c,a4,a0,a1,bud);
case 0x719537:[[clang::musttail]] return blk_719537(c,a4,a0,a1,bud);
case 0x719697:[[clang::musttail]] return blk_719697(c,a4,a0,a1,bud);
case 0x719a05:[[clang::musttail]] return blk_719a05(c,a4,a0,a1,bud);
case 0x719be6:[[clang::musttail]] return blk_719be6(c,a4,a0,a1,bud);
case 0x719c12:[[clang::musttail]] return blk_719c12(c,a4,a0,a1,bud);
case 0x719cb0:[[clang::musttail]] return blk_719cb0(c,a4,a0,a1,bud);
case 0x719cda:[[clang::musttail]] return blk_719cda(c,a4,a0,a1,bud);
case 0x719d98:[[clang::musttail]] return blk_719d98(c,a4,a0,a1,bud);
case 0x719dae:[[clang::musttail]] return blk_719dae(c,a4,a0,a1,bud);
case 0x719efe:[[clang::musttail]] return blk_719efe(c,a4,a0,a1,bud);
case 0x719f14:[[clang::musttail]] return blk_719f14(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_719(Cpu& c){u8* R=c.regs.data();return ent_719(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
