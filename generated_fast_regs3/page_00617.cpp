#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4011f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48d860(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59a420(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5b5350(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bae60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5be0a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5be0f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5be130(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5be180(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5cec40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5e7e70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60cf70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60cf90(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617012(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617110(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61717a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61718f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6171cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6171d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6171f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617222(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617244(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61724d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6172a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6172b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61730f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617313(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617360(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6173db(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6173f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617407(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617440(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617442(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61744b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617459(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617482(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6174f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61755d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617569(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6175a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6175d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6176ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6176f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617715(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6177b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6177c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6177cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6177e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6177eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6177ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617808(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61780e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617812(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61782b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617831(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617835(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617853(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617940(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6179a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6179f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_618791(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ab25(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_75bed4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617023(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6170b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6170d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617129(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6171a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6171b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617219(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61729d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617346(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61736a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617374(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617380(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61738a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617394(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6173a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6173d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61749e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6174b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6174c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6174f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617559(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61776b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61777b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61791d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61797e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617992(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6179cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6179df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617e62(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_617000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617000:L617000:{bud-=2;NFSU2_TR(0x617000);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617001:{NFSU2_TR(0x617001);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617006ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x401650u);}[[clang::musttail]] return blk_401650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617006:L617006:{bud-=3;NFSU2_TR(0x617006);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61700a:{NFSU2_TR(0x61700a);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61700e:{NFSU2_TR(0x61700e);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_617012(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617012(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617012:L617012:{bud-=5;NFSU2_TR(0x617012);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617016:{NFSU2_TR(0x617016);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617019:{NFSU2_TR(0x617019);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61701b:{NFSU2_TR(0x61701b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
__builtin_memmove((G+4),(U+0),4);
}
B61701e:{NFSU2_TR(0x61701e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617023ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5b5350u);}[[clang::musttail]] return blk_5b5350(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617023(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617023:L617023:{bud-=47;NFSU2_TR(0x617023);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B617027:{NFSU2_TR(0x617027);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61702b:{NFSU2_TR(0x61702b);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B61702f:{NFSU2_TR(0x61702f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617031:{NFSU2_TR(0x617031);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B617035:{NFSU2_TR(0x617035);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617038:{NFSU2_TR(0x617038);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61703c:{NFSU2_TR(0x61703c);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61703f:{NFSU2_TR(0x61703f);
u8 U[12];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B617046:{NFSU2_TR(0x617046);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617048:{NFSU2_TR(0x617048);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61704b:{NFSU2_TR(0x61704b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61704e:{NFSU2_TR(0x61704e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617050:{NFSU2_TR(0x617050);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B617053:{NFSU2_TR(0x617053);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617056:{NFSU2_TR(0x617056);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617059:{NFSU2_TR(0x617059);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61705b:{NFSU2_TR(0x61705b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61705e:{NFSU2_TR(0x61705e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617060:{NFSU2_TR(0x617060);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617063:{NFSU2_TR(0x617063);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617066:{NFSU2_TR(0x617066);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617068:{NFSU2_TR(0x617068);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61706b:{NFSU2_TR(0x61706b);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61706e:{NFSU2_TR(0x61706e);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617071:{NFSU2_TR(0x617071);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617073:{NFSU2_TR(0x617073);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617076:{NFSU2_TR(0x617076);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617078:{NFSU2_TR(0x617078);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61707b:{NFSU2_TR(0x61707b);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61707f:{NFSU2_TR(0x61707f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617082:{NFSU2_TR(0x617082);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B617086:{NFSU2_TR(0x617086);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617088:{NFSU2_TR(0x617088);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61708b:{NFSU2_TR(0x61708b);
{u32 ea_=u32(r4(G+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617092:{NFSU2_TR(0x617092);
u8 U[8];
w4(U+0,u32(u32(u32(0x358ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617099:{NFSU2_TR(0x617099);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61709c:{NFSU2_TR(0x61709c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61709e:{NFSU2_TR(0x61709e);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6170a5:{NFSU2_TR(0x6170a5);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6170a7:{NFSU2_TR(0x6170a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6170ab:{NFSU2_TR(0x6170ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6170ac:{NFSU2_TR(0x6170ac);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6170af:{NFSU2_TR(0x6170af);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6170b0:{NFSU2_TR(0x6170b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6170b2:{NFSU2_TR(0x6170b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6170b3:{NFSU2_TR(0x6170b3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6170b8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e7e70u);}[[clang::musttail]] return blk_5e7e70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6170b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6170b8:L6170b8:{bud-=10;NFSU2_TR(0x6170b8);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6170bb:{NFSU2_TR(0x6170bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6170bf:{NFSU2_TR(0x6170bf);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6170c5:{NFSU2_TR(0x6170c5);
{u32 ea_=u32(r4(R+12)+r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B6170c9:{NFSU2_TR(0x6170c9);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6170ca:{NFSU2_TR(0x6170ca);
u8 U[12];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6170ce:{NFSU2_TR(0x6170ce);
{u32 ea_=u32(r4(G+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6170d1:{NFSU2_TR(0x6170d1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6170d2:{NFSU2_TR(0x6170d2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6170d3:{NFSU2_TR(0x6170d3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6170d8ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x4011f0u);}[[clang::musttail]] return blk_4011f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6170d8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6170d8:L6170d8:{bud-=11;NFSU2_TR(0x6170d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6170dc:{NFSU2_TR(0x6170dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6170e0:{NFSU2_TR(0x6170e0);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B6170e3:{NFSU2_TR(0x6170e3);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x30ull))));
}
B6170e6:{NFSU2_TR(0x6170e6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6170e7:{NFSU2_TR(0x6170e7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6170ea:{NFSU2_TR(0x6170ea);
u8 U[4];
w1(F+11,sborrow<u32>(r4(G+0),u32(0xc0ull)));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0xc0ull))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6170ef:{NFSU2_TR(0x6170ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6170f3:{NFSU2_TR(0x6170f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6170f7:{NFSU2_TR(0x6170f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6170fb:{NFSU2_TR(0x6170fb);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x617012u);}[[clang::musttail]] return blk_617012(ARGS);}}
}
B617101:L617101:{bud-=2;NFSU2_TR(0x617101);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617109:{NFSU2_TR(0x617109);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((R+12),(U+0),4);
{[[clang::musttail]] return blk_617110(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617110(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617110:L617110:{bud-=8;NFSU2_TR(0x617110);
u8 U[4];
w4(U+0,u32(u32(u32(0x10full))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B617117:{NFSU2_TR(0x617117);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617118:{NFSU2_TR(0x617118);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61711c:{NFSU2_TR(0x61711c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61711e:{NFSU2_TR(0x61711e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B617121:{NFSU2_TR(0x617121);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617123:{NFSU2_TR(0x617123);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617124:{NFSU2_TR(0x617124);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617129ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5e7e70u);}[[clang::musttail]] return blk_5e7e70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617129(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617129:L617129:{bud-=5;NFSU2_TR(0x617129);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61712b:{NFSU2_TR(0x61712b);
u8 U[5];
w4(U+0,u32(u32(u32(0x10full))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B617132:{NFSU2_TR(0x617132);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(r1(G+4))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B617134:{NFSU2_TR(0x617134);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617138:{NFSU2_TR(0x617138);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61717a(ARGS);}}
}
B61713a:L61713a:{bud-=3;NFSU2_TR(0x61713a);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B61713e:{NFSU2_TR(0x61713e);
u8 U[15];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(G+4))));
w1(F+6,u8((r1(U+14))==(u8(0x0ull))));
}
B617145:{NFSU2_TR(0x617145);
if(r1(F+6)){{[[clang::musttail]] return blk_61717a(ARGS);}}
}
B617147:L617147:{bud-=12;NFSU2_TR(0x617147);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61714a:{NFSU2_TR(0x61714a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B61714d:{NFSU2_TR(0x61714d);
{u32 ea_=u32(r4(G+0)+r4(G+16)+u32(916u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B617154:{NFSU2_TR(0x617154);
w1(G+4,u8(0x1ull));
}
B617156:{NFSU2_TR(0x617156);
u8 U[5];
w4(U+0,u32(u32(u32(0x10full))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61715d:{NFSU2_TR(0x61715d);
{u32 ea_=u32(r4(G+0)+r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617161:{NFSU2_TR(0x617161);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617164:{NFSU2_TR(0x617164);
{u32 ea_=u32(r4(G+0)+r4(G+16)+u32(912u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61716b:{NFSU2_TR(0x61716b);
{u32 ea_=u32(r4(G+0)+r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61716f:{NFSU2_TR(0x61716f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617171:{NFSU2_TR(0x617171);
{u32 ea_=u32(r4(G+0)+r4(G+16)+u32(920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B617178:{NFSU2_TR(0x617178);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_61717a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61717a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61717a:L61717a:{bud-=6;NFSU2_TR(0x61717a);
__builtin_memmove((G+0),(R+8),4);
}
B61717c:{NFSU2_TR(0x61717c);
w4(G+0,sar<u32>(r4(G+0),u64(u32(0x1ull))));
}
B61717e:{NFSU2_TR(0x61717e);
w4(G+0,u32(u32(r4(G+0))^u32(r4(R+8))));
}
B617180:{NFSU2_TR(0x617180);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x5ull))));
}
B617183:{NFSU2_TR(0x617183);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))-u32(u8(0x5ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B617185:{NFSU2_TR(0x617185);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_61718f(ARGS);}}
}
B617187:L617187:{bud-=3;NFSU2_TR(0x617187);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61718b:{NFSU2_TR(0x61718b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61718d:{NFSU2_TR(0x61718d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_61718f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61718f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61718f:L61718f:{bud-=2;NFSU2_TR(0x61718f);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(r1(G+4))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B617191:{NFSU2_TR(0x617191);
if(r1(F+6)){{[[clang::musttail]] return blk_6171d0(ARGS);}}
}
B617193:L617193:{bud-=5;NFSU2_TR(0x617193);
__builtin_memmove((G+4),gp(0x8a1f08),4);
}
B617199:{NFSU2_TR(0x617199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61719b:{NFSU2_TR(0x61719b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61719c:{NFSU2_TR(0x61719c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61719d:{NFSU2_TR(0x61719d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6171a2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60cf70u);}[[clang::musttail]] return blk_60cf70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6171a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6171a2:L6171a2:{bud-=3;NFSU2_TR(0x6171a2);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B6171a5:{NFSU2_TR(0x6171a5);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6171a7:{NFSU2_TR(0x6171a7);
if(r1(F+6)){{[[clang::musttail]] return blk_6171cc(ARGS);}}
}
B6171a9:L6171a9:{bud-=3;NFSU2_TR(0x6171a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff8ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6171ac:{NFSU2_TR(0x6171ac);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6171ad:{NFSU2_TR(0x6171ad);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6171b2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60cf90u);}[[clang::musttail]] return blk_60cf90(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6171b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6171b2:L6171b2:{bud-=3;NFSU2_TR(0x6171b2);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B6171b5:{NFSU2_TR(0x6171b5);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6171b7:{NFSU2_TR(0x6171b7);
if(r1(F+6)){{[[clang::musttail]] return blk_6171cc(ARGS);}}
}
B6171b9:L6171b9:{bud-=5;NFSU2_TR(0x6171b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+0),(U+0),4);
}
B6171bb:{NFSU2_TR(0x6171bb);
{u32 ea_=u32(u32(8021684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6171c1:{NFSU2_TR(0x6171c1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6171c3:{NFSU2_TR(0x6171c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6171ca:{NFSU2_TR(0x6171ca);
{[[clang::musttail]] return blk_6171f9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6171cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6171cc:L6171cc:{bud-=1;NFSU2_TR(0x6171cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_6171d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6171d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6171d0:L6171d0:{bud-=11;NFSU2_TR(0x6171d0);
{u32 ea_=u32(r4(G+16)+u32(824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6171d7:{NFSU2_TR(0x6171d7);
__builtin_memmove((G+0),(R+8),4);
}
B6171d9:{NFSU2_TR(0x6171d9);
{u32 ea_=u32(u32(8021684u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6171df:{NFSU2_TR(0x6171df);
u8 U[8];
w8(U+0,u64(s64(s32(r4(G+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6171e0:{NFSU2_TR(0x6171e0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B6171e3:{NFSU2_TR(0x6171e3);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B6171e5:{NFSU2_TR(0x6171e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B6171e8:{NFSU2_TR(0x6171e8);
u8 U[16];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B6171ef:{NFSU2_TR(0x6171ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6171f6:{NFSU2_TR(0x6171f6);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6171f7:{NFSU2_TR(0x6171f7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(G+0)),r4(U+0));
{[[clang::musttail]] return blk_6171f9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6171f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6171f9:L6171f9:{bud-=7;NFSU2_TR(0x6171f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6171fd:{NFSU2_TR(0x6171fd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6171ff:{NFSU2_TR(0x6171ff);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B617200:{NFSU2_TR(0x617200);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B617203:{NFSU2_TR(0x617203);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617206:{NFSU2_TR(0x617206);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61720a:{NFSU2_TR(0x61720a);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x617110u);}[[clang::musttail]] return blk_617110(ARGS);}}
}
B617210:L617210:{bud-=2;NFSU2_TR(0x617210);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B617217:{NFSU2_TR(0x617217);
{[[clang::musttail]] return blk_61724d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617219(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617219:L617219:{bud-=2;NFSU2_TR(0x617219);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B61721b:{NFSU2_TR(0x61721b);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
{[[clang::musttail]] return blk_617222(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617222(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617222:L617222:{bud-=8;NFSU2_TR(0x617222);
__builtin_memmove((R+12),gp(0x7a66bc),4);
}
B617228:{NFSU2_TR(0x617228);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B61722a:{NFSU2_TR(0x61722a);
__builtin_memmove((R+12),(G+0),4);
}
B61722c:{NFSU2_TR(0x61722c);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B61722e:{NFSU2_TR(0x61722e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(G+0))));
}
B617230:{NFSU2_TR(0x617230);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x5ull))));
}
B617233:{NFSU2_TR(0x617233);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(F+6,u8((r1(U+1))==(u8(0x0ull))));
}
B617236:{NFSU2_TR(0x617236);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_617244(ARGS);}}
}
B617238:L617238:{bud-=3;NFSU2_TR(0x617238);
{u32 ea_=u32(u32(8021692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61723e:{NFSU2_TR(0x61723e);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B617242:{NFSU2_TR(0x617242);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_617244(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617244(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617244:L617244:{bud-=4;NFSU2_TR(0x617244);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B617245:{NFSU2_TR(0x617245);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B617248:{NFSU2_TR(0x617248);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61724b:{NFSU2_TR(0x61724b);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x617222u);}[[clang::musttail]] return blk_617222(ARGS);}}
{[[clang::musttail]] return blk_61724d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61724d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61724d:L61724d:{bud-=22;NFSU2_TR(0x61724d);
__builtin_memmove((R+8),(G+4),4);
}
B61724f:{NFSU2_TR(0x61724f);
w1(F+0,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B617251:{NFSU2_TR(0x617251);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B617253:{NFSU2_TR(0x617253);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80ull))));
}
B617259:{NFSU2_TR(0x617259);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617260:{NFSU2_TR(0x617260);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B617267:{NFSU2_TR(0x617267);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61726a:{NFSU2_TR(0x61726a);
w1(F+0,u8((r4(G+4))!=(u32(0x0ull))));
w4(G+4,u32(0-u32(r4(G+4))));
}
B61726c:{NFSU2_TR(0x61726c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B61726e:{NFSU2_TR(0x61726e);
u8 U[8];
w4(U+0,u32(r1(F+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(G+4))));
w4(G+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B617270:{NFSU2_TR(0x617270);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617276:{NFSU2_TR(0x617276);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61727a:{NFSU2_TR(0x61727a);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xeull))));
}
B61727d:{NFSU2_TR(0x61727d);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x72ull))));
}
B617280:{NFSU2_TR(0x617280);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B617282:{NFSU2_TR(0x617282);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617289:{NFSU2_TR(0x617289);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B617290:{NFSU2_TR(0x617290);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B617292:{NFSU2_TR(0x617292);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B617294:{NFSU2_TR(0x617294);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B617296:{NFSU2_TR(0x617296);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B617298:{NFSU2_TR(0x617298);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61729dull));
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
PN u32 blk_61729d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61729d:L61729d:{bud-=3;NFSU2_TR(0x61729d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61729f:{NFSU2_TR(0x61729f);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6172a1:{NFSU2_TR(0x6172a1);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6172a7(ARGS);}}
}
B6172a3:L6172a3:{bud-=2;NFSU2_TR(0x6172a3);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B6172a5:{NFSU2_TR(0x6172a5);
{[[clang::musttail]] return blk_6172b3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6172a7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6172a7:L6172a7:{bud-=2;NFSU2_TR(0x6172a7);
u8 U[4];
w1(F+11,sborrow<u32>(r4(G+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(G+0))-u32(u32(0xfeull))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6172ac:{NFSU2_TR(0x6172ac);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6172b3(ARGS);}}
}
B6172ae:L6172ae:{bud-=1;NFSU2_TR(0x6172ae);
w4(G+0,u32(0xfeull));
{[[clang::musttail]] return blk_6172b3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6172b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6172b3:L6172b3:{bud-=8;NFSU2_TR(0x6172b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6172b7:{NFSU2_TR(0x6172b7);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6172bd:{NFSU2_TR(0x6172bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B6172c0:{NFSU2_TR(0x6172c0);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0x808080ull))));
}
B6172c5:{NFSU2_TR(0x6172c5);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6172c7:{NFSU2_TR(0x6172c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6172ce:{NFSU2_TR(0x6172ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6172d2:{NFSU2_TR(0x6172d2);
if(r1(F+6)){{[[clang::musttail]] return blk_617407(ARGS);}}
}
B6172d8:L6172d8:{bud-=2;NFSU2_TR(0x6172d8);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xff000000ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6172dd:{NFSU2_TR(0x6172dd);
if(r1(F+6)){{[[clang::musttail]] return blk_617407(ARGS);}}
}
B6172e3:L6172e3:{bud-=9;NFSU2_TR(0x6172e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6172ea:{NFSU2_TR(0x6172ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6172ee:{NFSU2_TR(0x6172ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6172f5:{NFSU2_TR(0x6172f5);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B6172f7:{NFSU2_TR(0x6172f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6172fb:{NFSU2_TR(0x6172fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(G+16))));
__builtin_memmove((R+24),(U+0),4);
}
B617302:{NFSU2_TR(0x617302);
u8 U[4];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(G+16))));
__builtin_memmove((R+12),(U+0),4);
}
B617309:{NFSU2_TR(0x617309);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61730d:{NFSU2_TR(0x61730d);
{[[clang::musttail]] return blk_617313(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61730f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61730f:L61730f:{bud-=1;NFSU2_TR(0x61730f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{[[clang::musttail]] return blk_617313(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617313(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617313:L617313:{bud-=5;NFSU2_TR(0x617313);
u8 U[16];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B61731a:{NFSU2_TR(0x61731a);
u8 U[16];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+12))));
}
B617321:{NFSU2_TR(0x617321);
w4(G+4,u32(0x40ull));
}
B617326:{NFSU2_TR(0x617326);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617329:{NFSU2_TR(0x617329);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6173db(ARGS);}}
}
B61732f:L61732f:{bud-=6;NFSU2_TR(0x61732f);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617336:{NFSU2_TR(0x617336);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61733d:{NFSU2_TR(0x61733d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61733e:{NFSU2_TR(0x61733e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617340:{NFSU2_TR(0x617340);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617341:{NFSU2_TR(0x617341);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617346ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5be180u);}[[clang::musttail]] return blk_5be180(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617346(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617346:L617346:{bud-=3;NFSU2_TR(0x617346);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B617349:{NFSU2_TR(0x617349);
u8 U[1];
w1(F+0,u8(0x0ull));
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B61734b:{NFSU2_TR(0x61734b);
if(r1(F+6)){{[[clang::musttail]] return blk_6173f5(ARGS);}}
}
B617351:L617351:{bud-=2;NFSU2_TR(0x617351);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617359:{NFSU2_TR(0x617359);
__builtin_memmove((G+16),(G+16),4);
{__builtin_memcpy(R+512,F+0,1);[[clang::musttail]] return blk_617360(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617360(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617360:L617360:{bud-=3;NFSU2_TR(0x617360);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617364:{NFSU2_TR(0x617364);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617365:{NFSU2_TR(0x617365);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61736aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5be130u);}[[clang::musttail]] return blk_5be130(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61736a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61736a:L61736a:{bud-=3;NFSU2_TR(0x61736a);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61736e:{NFSU2_TR(0x61736e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61736f:{NFSU2_TR(0x61736f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617374ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5be0a0u);}[[clang::musttail]] return blk_5be0a0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617374(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617374:L617374:{bud-=5;NFSU2_TR(0x617374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B617377:{NFSU2_TR(0x617377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B617379:{NFSU2_TR(0x617379);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61737a:{NFSU2_TR(0x61737a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61737b:{NFSU2_TR(0x61737b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617380ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5be0f0u);}[[clang::musttail]] return blk_5be0f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617380(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617380:L617380:{bud-=3;NFSU2_TR(0x617380);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617384:{NFSU2_TR(0x617384);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617385:{NFSU2_TR(0x617385);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61738aull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5be130u);}[[clang::musttail]] return blk_5be130(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61738a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61738a:L61738a:{bud-=3;NFSU2_TR(0x61738a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61738e:{NFSU2_TR(0x61738e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61738f:{NFSU2_TR(0x61738f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617394ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5be0a0u);}[[clang::musttail]] return blk_5be0a0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617394(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617394:L617394:{bud-=5;NFSU2_TR(0x617394);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617397:{NFSU2_TR(0x617397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+0),(U+0),4);
}
B617399:{NFSU2_TR(0x617399);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61739a:{NFSU2_TR(0x61739a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61739b:{NFSU2_TR(0x61739b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6173a0ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5be0f0u);}[[clang::musttail]] return blk_5be0f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6173a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6173a0:L6173a0:{bud-=14;NFSU2_TR(0x6173a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6173a4:{NFSU2_TR(0x6173a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6173a8:{NFSU2_TR(0x6173a8);
w4(G+0,u32(0x10ull));
}
B6173ad:{NFSU2_TR(0x6173ad);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
}
B6173af:{NFSU2_TR(0x6173af);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B6173b1:{NFSU2_TR(0x6173b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6173b5:{NFSU2_TR(0x6173b5);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x20ull))));
}
B6173b8:{NFSU2_TR(0x6173b8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6173bb:{NFSU2_TR(0x6173bb);
w1(F+0,carry<u32>(r4(R+12),u32(0x8ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B6173be:{NFSU2_TR(0x6173be);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B6173bf:{NFSU2_TR(0x6173bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173c3:{NFSU2_TR(0x6173c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173c7:{NFSU2_TR(0x6173c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173cb:{NFSU2_TR(0x6173cb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);if(__builtin_expect(bud<=0,0)){EXIT(0x617360u);}[[clang::musttail]] return blk_617360(ARGS);}}
}
B6173cd:L6173cd:{bud-=3;NFSU2_TR(0x6173cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6173d0:{NFSU2_TR(0x6173d0);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6173d1:{NFSU2_TR(0x6173d1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6173d6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5cec40u);}[[clang::musttail]] return blk_5cec40(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6173d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6173d6:L6173d6:{bud-=2;NFSU2_TR(0x6173d6);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B6173d9:{NFSU2_TR(0x6173d9);
{[[clang::musttail]] return blk_6173f5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6173db(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6173db:L6173db:{bud-=8;NFSU2_TR(0x6173db);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6173df:{NFSU2_TR(0x6173df);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6173e3:{NFSU2_TR(0x6173e3);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B6173e5:{NFSU2_TR(0x6173e5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B6173e7:{NFSU2_TR(0x6173e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B6173ea:{NFSU2_TR(0x6173ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173ee:{NFSU2_TR(0x6173ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6173f2:{NFSU2_TR(0x6173f2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
{[[clang::musttail]] return blk_6173f5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6173f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6173f5:L6173f5:{bud-=5;NFSU2_TR(0x6173f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6173f9:{NFSU2_TR(0x6173f9);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6173fa:{NFSU2_TR(0x6173fa);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6173fd:{NFSU2_TR(0x6173fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617401:{NFSU2_TR(0x617401);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x61730fu);}[[clang::musttail]] return blk_61730f(ARGS);}}
{[[clang::musttail]] return blk_617407(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617407(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617407:L617407:{bud-=12;NFSU2_TR(0x617407);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61740b:{NFSU2_TR(0x61740b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617411:{NFSU2_TR(0x617411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617417:{NFSU2_TR(0x617417);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61741e:{NFSU2_TR(0x61741e);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617425:{NFSU2_TR(0x617425);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B617427:{NFSU2_TR(0x617427);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B617429:{NFSU2_TR(0x617429);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x17a8ull))));
}
B61742f:{NFSU2_TR(0x61742f);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617436:{NFSU2_TR(0x617436);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61743a:{NFSU2_TR(0x61743a);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61743e:{NFSU2_TR(0x61743e);
__builtin_memmove((R+28),(R+28),4);
{[[clang::musttail]] return blk_617440(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617440(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617440:L617440:{bud-=1;NFSU2_TR(0x617440);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_617442(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617442(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617442:L617442:{bud-=2;NFSU2_TR(0x617442);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(F+6,u8((r4(U+8))==(u32(0x0ull))));
}
B617444:{NFSU2_TR(0x617444);
if(r1(F+6)){{[[clang::musttail]] return blk_61744b(ARGS);}}
}
B617446:L617446:{bud-=2;NFSU2_TR(0x617446);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(F+6,u8((r4(U+16))==(u32(0x0ull))));
}
B617449:{NFSU2_TR(0x617449);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_617459(ARGS);}}
{[[clang::musttail]] return blk_61744b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61744b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61744b:L61744b:{bud-=4;NFSU2_TR(0x61744b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B61744c:{NFSU2_TR(0x61744c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B61744f:{NFSU2_TR(0x61744f);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617452:{NFSU2_TR(0x617452);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x617442u);}[[clang::musttail]] return blk_617442(ARGS);}}
}
B617454:L617454:{bud-=1;NFSU2_TR(0x617454);
{[[clang::musttail]] return blk_6174f4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617459(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617459:L617459:{bud-=6;NFSU2_TR(0x617459);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61745d:{NFSU2_TR(0x61745d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617460:{NFSU2_TR(0x617460);
u8 U[13];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(G+0,u32(s32(s8(r1(U+12)))));
}
B617468:{NFSU2_TR(0x617468);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0xfffffff2ull))));
}
B61746b:{NFSU2_TR(0x61746b);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(U+6))<(u32(0x13ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B61746e:{NFSU2_TR(0x61746e);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_617482(ARGS);}}
}
B617470:L617470:{bud-=3;NFSU2_TR(0x617470);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B617474:{NFSU2_TR(0x617474);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x61ab2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B61747b:{NFSU2_TR(0x61747b);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x61ab30ull))+u32(r4(U+0))));
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
PN u32 blk_617482(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617482:L617482:{bud-=3;NFSU2_TR(0x617482);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0x1ull))));
}
B617485:{NFSU2_TR(0x617485);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B617487:{NFSU2_TR(0x617487);
if(r1(F+6)){{[[clang::musttail]] return blk_6174f4(ARGS);}}
}
B617489:L617489:{bud-=5;NFSU2_TR(0x617489);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617490:{NFSU2_TR(0x617490);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B617493:{NFSU2_TR(0x617493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617494:{NFSU2_TR(0x617494);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617499:{NFSU2_TR(0x617499);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61749eull));
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
PN u32 blk_61749e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61749e:L61749e:{bud-=5;NFSU2_TR(0x61749e);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6174a5:{NFSU2_TR(0x6174a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B6174a8:{NFSU2_TR(0x6174a8);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174a9:{NFSU2_TR(0x6174a9);
u8 U[4];
w4(U+0,u32(0x471a1dcaull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174ae:{NFSU2_TR(0x6174ae);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6174b3ull));
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
PN u32 blk_6174b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6174b3:L6174b3:{bud-=5;NFSU2_TR(0x6174b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6174ba:{NFSU2_TR(0x6174ba);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174bb:{NFSU2_TR(0x6174bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B6174be:{NFSU2_TR(0x6174be);
u8 U[4];
w4(U+0,u32(0xa7366ae6ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174c3:{NFSU2_TR(0x6174c3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6174c8ull));
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
PN u32 blk_6174c8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6174c8:L6174c8:{bud-=13;NFSU2_TR(0x6174c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6174cb:{NFSU2_TR(0x6174cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6174d2:{NFSU2_TR(0x6174d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+4),(U+8),4);
}
B6174d5:{NFSU2_TR(0x6174d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174d7:{NFSU2_TR(0x6174d7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B6174d9:{NFSU2_TR(0x6174d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6174e0:{NFSU2_TR(0x6174e0);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8000ull))));
}
B6174e6:{NFSU2_TR(0x6174e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174e7:{NFSU2_TR(0x6174e7);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174e8:{NFSU2_TR(0x6174e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174e9:{NFSU2_TR(0x6174e9);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6174ea:{NFSU2_TR(0x6174ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6174ed:{NFSU2_TR(0x6174ed);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6174f2ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5c5930u);}[[clang::musttail]] return blk_5c5930(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6174f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6174f2:L6174f2:{bud-=1;NFSU2_TR(0x6174f2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_6174f4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6174f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6174f4:L6174f4:{bud-=8;NFSU2_TR(0x6174f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6174f8:{NFSU2_TR(0x6174f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6174fc:{NFSU2_TR(0x6174fc);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6174fd:{NFSU2_TR(0x6174fd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B617500:{NFSU2_TR(0x617500);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x3full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617503:{NFSU2_TR(0x617503);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617507:{NFSU2_TR(0x617507);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61750b:{NFSU2_TR(0x61750b);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x617440u);}[[clang::musttail]] return blk_617440(ARGS);}}
}
B617511:L617511:{bud-=7;NFSU2_TR(0x617511);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B617514:{NFSU2_TR(0x617514);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61751a:{NFSU2_TR(0x61751a);
__builtin_memmove((G+0),gp(0x8026c0),4);
}
B61751f:{NFSU2_TR(0x61751f);
__builtin_memmove((G+4),gp(0x8026c4),4);
}
B617525:{NFSU2_TR(0x617525);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61752c:{NFSU2_TR(0x61752c);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617533:{NFSU2_TR(0x617533);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_617569(ARGS);}}
}
B617535:L617535:{bud-=6;NFSU2_TR(0x617535);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B617537:{NFSU2_TR(0x617537);
{u32 ea_=u32(u32(8021840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61753d:{NFSU2_TR(0x61753d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B617543:{NFSU2_TR(0x617543);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B617545:{NFSU2_TR(0x617545);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B617548:{NFSU2_TR(0x617548);
if(r1(F+2)){{[[clang::musttail]] return blk_61755d(ARGS);}}
}
B61754a:L61754a:{bud-=4;NFSU2_TR(0x61754a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61754e:{NFSU2_TR(0x61754e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B617551:{NFSU2_TR(0x617551);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B617554:{NFSU2_TR(0x617554);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617559ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x59a420u);}[[clang::musttail]] return blk_59a420(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617559(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617559:L617559:{bud-=2;NFSU2_TR(0x617559);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61755b:{NFSU2_TR(0x61755b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_61755d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61755d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61755d:L61755d:{bud-=2;NFSU2_TR(0x61755d);
{u32 ea_=u32(u32(8021848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617563:{NFSU2_TR(0x617563);
{u32 ea_=u32(u32(8021840u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_617569(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617569(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617569:L617569:{bud-=12;NFSU2_TR(0x617569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61756c:{NFSU2_TR(0x61756c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617572:{NFSU2_TR(0x617572);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B617579:{NFSU2_TR(0x617579);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((G+0),(U+0),4);
}
B61757c:{NFSU2_TR(0x61757c);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617580:{NFSU2_TR(0x617580);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617584:{NFSU2_TR(0x617584);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x420ull))));
__builtin_memmove((G+4),(U+0),4);
}
B61758a:{NFSU2_TR(0x61758a);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x400ull))));
}
B61758f:{NFSU2_TR(0x61758f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617593:{NFSU2_TR(0x617593);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61759a:{NFSU2_TR(0x61759a);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B61759c:{NFSU2_TR(0x61759c);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_6175a0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6175a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6175a0:L6175a0:{bud-=12;NFSU2_TR(0x6175a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6175a4:{NFSU2_TR(0x6175a4);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6175a6:{NFSU2_TR(0x6175a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6175ad:{NFSU2_TR(0x6175ad);
{u32 ea_=u32(r4(G+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6175b4:{NFSU2_TR(0x6175b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+0),(U+0),4);
}
B6175b6:{NFSU2_TR(0x6175b6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6175b8:{NFSU2_TR(0x6175b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6175bc:{NFSU2_TR(0x6175bc);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6175c0:{NFSU2_TR(0x6175c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6175c6:{NFSU2_TR(0x6175c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6175c8:{NFSU2_TR(0x6175c8);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6175cb:{NFSU2_TR(0x6175cb);
if(r1(F+2)){{[[clang::musttail]] return blk_6175d6(ARGS);}}
}
B6175cd:L6175cd:{bud-=2;NFSU2_TR(0x6175cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6175cf:{NFSU2_TR(0x6175cf);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6175d6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6175d6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6175d6:L6175d6:{bud-=43;NFSU2_TR(0x6175d6);
w4(G+0,u32(0x3f800000ull));
}
B6175db:{NFSU2_TR(0x6175db);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6175dd:{NFSU2_TR(0x6175dd);
u8 U[16];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6175e4:{NFSU2_TR(0x6175e4);
u8 U[16];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6175eb:{NFSU2_TR(0x6175eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6175f2:{NFSU2_TR(0x6175f2);
u8 U[16];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6175f9:{NFSU2_TR(0x6175f9);
u8 U[16];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617600:{NFSU2_TR(0x617600);
u8 U[16];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617607:{NFSU2_TR(0x617607);
u8 U[16];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61760e:{NFSU2_TR(0x61760e);
u8 U[16];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617615:{NFSU2_TR(0x617615);
u8 U[16];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61761c:{NFSU2_TR(0x61761c);
u8 U[16];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617623:{NFSU2_TR(0x617623);
u8 U[16];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61762a:{NFSU2_TR(0x61762a);
u8 U[16];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617631:{NFSU2_TR(0x617631);
u8 U[16];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617638:{NFSU2_TR(0x617638);
u8 U[16];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61763f:{NFSU2_TR(0x61763f);
u8 U[16];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617646:{NFSU2_TR(0x617646);
u8 U[16];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61764d:{NFSU2_TR(0x61764d);
{u32 ea_=u32(r4(G+4)+r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617654:{NFSU2_TR(0x617654);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617658:{NFSU2_TR(0x617658);
u8 U[16];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61765f:{NFSU2_TR(0x61765f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B617661:{NFSU2_TR(0x617661);
u8 U[16];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617668:{NFSU2_TR(0x617668);
{u32 ea_=u32(r4(G+4)+r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61766f:{NFSU2_TR(0x61766f);
u8 U[16];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617676:{NFSU2_TR(0x617676);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61767a:{NFSU2_TR(0x61767a);
u8 U[16];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(G+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617681:{NFSU2_TR(0x617681);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B617687:{NFSU2_TR(0x617687);
u8 U[16];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61768e:{NFSU2_TR(0x61768e);
u8 U[16];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B617695:{NFSU2_TR(0x617695);
u8 U[16];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61769c:{NFSU2_TR(0x61769c);
u8 U[16];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176a3:{NFSU2_TR(0x6176a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6176a5:{NFSU2_TR(0x6176a5);
u8 U[16];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176ac:{NFSU2_TR(0x6176ac);
u8 U[16];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176b3:{NFSU2_TR(0x6176b3);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6176b6:{NFSU2_TR(0x6176b6);
u8 U[16];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176bd:{NFSU2_TR(0x6176bd);
u8 U[16];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176c4:{NFSU2_TR(0x6176c4);
u8 U[16];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176cb:{NFSU2_TR(0x6176cb);
u8 U[16];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176d2:{NFSU2_TR(0x6176d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176d9:{NFSU2_TR(0x6176d9);
u8 U[16];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6176e0:{NFSU2_TR(0x6176e0);
if(r1(F+2)){{[[clang::musttail]] return blk_6176ec(ARGS);}}
}
B6176e2:L6176e2:{bud-=3;NFSU2_TR(0x6176e2);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6176e6:{NFSU2_TR(0x6176e6);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6176ea:{NFSU2_TR(0x6176ea);
{[[clang::musttail]] return blk_6176f4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6176ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6176ec:L6176ec:{bud-=2;NFSU2_TR(0x6176ec);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6176f0:{NFSU2_TR(0x6176f0);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6176f4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6176f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6176f4:L6176f4:{bud-=4;NFSU2_TR(0x6176f4);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6176fa:{NFSU2_TR(0x6176fa);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6176fc:{NFSU2_TR(0x6176fc);
{u32 ea_=u32(r4(G+4)+r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617703:{NFSU2_TR(0x617703);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_617715(ARGS);}}
}
B617705:L617705:{bud-=3;NFSU2_TR(0x617705);
{u32 ea_=u32(r4(G+4)+r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61770c:{NFSU2_TR(0x61770c);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B61770e:{NFSU2_TR(0x61770e);
{u32 ea_=u32(r4(G+4)+r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_617715(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617715(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617715:L617715:{bud-=10;NFSU2_TR(0x617715);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617719:{NFSU2_TR(0x617719);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B61771b:{NFSU2_TR(0x61771b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B617720:{NFSU2_TR(0x617720);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B617728:{NFSU2_TR(0x617728);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61772c:{NFSU2_TR(0x61772c);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x40ull))));
}
B61772f:{NFSU2_TR(0x61772f);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B617732:{NFSU2_TR(0x617732);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B617738:{NFSU2_TR(0x617738);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61773c:{NFSU2_TR(0x61773c);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6175a0u);}[[clang::musttail]] return blk_6175a0(ARGS);}}
}
B617742:L617742:{bud-=7;NFSU2_TR(0x617742);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B617746:{NFSU2_TR(0x617746);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B617748:{NFSU2_TR(0x617748);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61774b:{NFSU2_TR(0x61774b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61774d:{NFSU2_TR(0x61774d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x855ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B617753:{NFSU2_TR(0x617753);
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
B617755:{NFSU2_TR(0x617755);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ab25(ARGS);}}
}
B61775b:L61775b:{bud-=2;NFSU2_TR(0x61775b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B61775e:{NFSU2_TR(0x61775e);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ab25(ARGS);}}
}
B617764:L617764:{bud-=2;NFSU2_TR(0x617764);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617766:{NFSU2_TR(0x617766);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61776bull));
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
PN u32 blk_61776b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61776b:L61776b:{bud-=4;NFSU2_TR(0x61776b);
__builtin_memmove((R+12),(G+0),4);
}
B61776d:{NFSU2_TR(0x61776d);
u8 U[4];
w4(U+0,u32(0x700ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617772:{NFSU2_TR(0x617772);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617776:{NFSU2_TR(0x617776);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61777bull));
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
PN u32 blk_61777b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61777b:L61777b:{bud-=5;NFSU2_TR(0x61777b);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B61777d:{NFSU2_TR(0x61777d);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B617780:{NFSU2_TR(0x617780);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
w1(F+0,u8((r4(R+12))<(r4(U+6))));
w1(F+11,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B617782:{NFSU2_TR(0x617782);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617786:{NFSU2_TR(0x617786);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ab25(ARGS);}}
}
B61778c:L61778c:{bud-=2;NFSU2_TR(0x61778c);
u8 U[14];
__builtin_memmove((U+6),(G+4),4);
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
B61778e:{NFSU2_TR(0x61778e);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ab25(ARGS);}}
}
B617794:L617794:{bud-=4;NFSU2_TR(0x617794);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B617798:{NFSU2_TR(0x617798);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B61779e:{NFSU2_TR(0x61779e);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6177a0:{NFSU2_TR(0x6177a0);
if(r1(F+6)){{[[clang::musttail]] return blk_6177c0(ARGS);}}
}
B6177a2:L6177a2:{bud-=3;NFSU2_TR(0x6177a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+0),(U+0),4);
}
B6177a4:{NFSU2_TR(0x6177a4);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6177a6:{NFSU2_TR(0x6177a6);
if(r1(F+6)){{[[clang::musttail]] return blk_6177b2(ARGS);}}
}
B6177a8:L6177a8:{bud-=3;NFSU2_TR(0x6177a8);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6177ae:{NFSU2_TR(0x6177ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6177b0:{NFSU2_TR(0x6177b0);
if(r1(F+6)){{[[clang::musttail]] return blk_6177c0(ARGS);}}
{[[clang::musttail]] return blk_6177b2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6177b2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6177b2:L6177b2:{bud-=3;NFSU2_TR(0x6177b2);
w4(R+8,u32(0x1ull));
}
B6177b7:{NFSU2_TR(0x6177b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6177be:{NFSU2_TR(0x6177be);
{[[clang::musttail]] return blk_6177cc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6177c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6177c0:L6177c0:{bud-=2;NFSU2_TR(0x6177c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6177c7:{NFSU2_TR(0x6177c7);
w4(R+8,u32(0x1ull));
{[[clang::musttail]] return blk_6177cc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6177cc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6177cc:L6177cc:{bud-=3;NFSU2_TR(0x6177cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B6177d2:{NFSU2_TR(0x6177d2);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6177d4:{NFSU2_TR(0x6177d4);
if(r1(F+6)){{[[clang::musttail]] return blk_6177eb(ARGS);}}
}
B6177d6:L6177d6:{bud-=3;NFSU2_TR(0x6177d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+0),(U+0),4);
}
B6177d8:{NFSU2_TR(0x6177d8);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6177da:{NFSU2_TR(0x6177da);
if(r1(F+6)){{[[clang::musttail]] return blk_6177e5(ARGS);}}
}
B6177dc:L6177dc:{bud-=2;NFSU2_TR(0x6177dc);
u8 U[7];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B6177e3:{NFSU2_TR(0x6177e3);
if(r1(F+6)){{[[clang::musttail]] return blk_6177eb(ARGS);}}
{[[clang::musttail]] return blk_6177e5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6177e5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6177e5:L6177e5:{bud-=2;NFSU2_TR(0x6177e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6177e9:{NFSU2_TR(0x6177e9);
{[[clang::musttail]] return blk_6177ef(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6177eb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6177eb:L6177eb:{bud-=1;NFSU2_TR(0x6177eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6177ef(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6177ef(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6177ef:L6177ef:{bud-=3;NFSU2_TR(0x6177ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2db8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B6177f5:{NFSU2_TR(0x6177f5);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6177f7:{NFSU2_TR(0x6177f7);
if(r1(F+6)){{[[clang::musttail]] return blk_61780e(ARGS);}}
}
B6177f9:L6177f9:{bud-=3;NFSU2_TR(0x6177f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+0),(U+0),4);
}
B6177fb:{NFSU2_TR(0x6177fb);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6177fd:{NFSU2_TR(0x6177fd);
if(r1(F+6)){{[[clang::musttail]] return blk_617808(ARGS);}}
}
B6177ff:L6177ff:{bud-=2;NFSU2_TR(0x6177ff);
u8 U[7];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3f6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B617806:{NFSU2_TR(0x617806);
if(r1(F+6)){{[[clang::musttail]] return blk_61780e(ARGS);}}
{[[clang::musttail]] return blk_617808(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617808(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617808:L617808:{bud-=2;NFSU2_TR(0x617808);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61780c:{NFSU2_TR(0x61780c);
{[[clang::musttail]] return blk_617812(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61780e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61780e:L61780e:{bud-=1;NFSU2_TR(0x61780e);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_617812(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617812(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617812:L617812:{bud-=3;NFSU2_TR(0x617812);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2dd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B617818:{NFSU2_TR(0x617818);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B61781a:{NFSU2_TR(0x61781a);
if(r1(F+6)){{[[clang::musttail]] return blk_617831(ARGS);}}
}
B61781c:L61781c:{bud-=3;NFSU2_TR(0x61781c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+0),(U+0),4);
}
B61781e:{NFSU2_TR(0x61781e);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B617820:{NFSU2_TR(0x617820);
if(r1(F+6)){{[[clang::musttail]] return blk_61782b(ARGS);}}
}
B617822:L617822:{bud-=2;NFSU2_TR(0x617822);
u8 U[7];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x3f7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(F+6,u8((r1(U+6))==(u8(0x0ull))));
}
B617829:{NFSU2_TR(0x617829);
if(r1(F+6)){{[[clang::musttail]] return blk_617831(ARGS);}}
{[[clang::musttail]] return blk_61782b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61782b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61782b:L61782b:{bud-=2;NFSU2_TR(0x61782b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61782f:{NFSU2_TR(0x61782f);
{[[clang::musttail]] return blk_617835(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617831(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617831:L617831:{bud-=1;NFSU2_TR(0x617831);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_617835(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617835(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617835:L617835:{bud-=4;NFSU2_TR(0x617835);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61783c:{NFSU2_TR(0x61783c);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B61783f:{NFSU2_TR(0x61783f);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617846:{NFSU2_TR(0x617846);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_617853(ARGS);}}
}
B617848:L617848:{bud-=1;NFSU2_TR(0x617848);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_617853(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617853(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617853:L617853:{bud-=22;NFSU2_TR(0x617853);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617858:{NFSU2_TR(0x617858);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B61785f:{NFSU2_TR(0x61785f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617860:{NFSU2_TR(0x617860);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B617867:{NFSU2_TR(0x617867);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617868:{NFSU2_TR(0x617868);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617873:{NFSU2_TR(0x617873);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61787e:{NFSU2_TR(0x61787e);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617889:{NFSU2_TR(0x617889);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617894:{NFSU2_TR(0x617894);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61789f:{NFSU2_TR(0x61789f);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178aa:{NFSU2_TR(0x6178aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178b5:{NFSU2_TR(0x6178b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178c0:{NFSU2_TR(0x6178c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178cb:{NFSU2_TR(0x6178cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178d6:{NFSU2_TR(0x6178d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178e1:{NFSU2_TR(0x6178e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178ec:{NFSU2_TR(0x6178ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6178f7:{NFSU2_TR(0x6178f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617902:{NFSU2_TR(0x617902);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61790d:{NFSU2_TR(0x61790d);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617918:{NFSU2_TR(0x617918);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61791dull));
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
PN u32 blk_61791d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61791d:L61791d:{bud-=5;NFSU2_TR(0x61791d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617923:{NFSU2_TR(0x617923);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B617926:{NFSU2_TR(0x617926);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61792d:{NFSU2_TR(0x61792d);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B617938:{NFSU2_TR(0x617938);
{[[clang::musttail]] return blk_617940(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_617940(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617940:L617940:{bud-=7;NFSU2_TR(0x617940);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B617944:{NFSU2_TR(0x617944);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61794b:{NFSU2_TR(0x61794b);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b48ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B617952:{NFSU2_TR(0x617952);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B617954:{NFSU2_TR(0x617954);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b68ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B61795b:{NFSU2_TR(0x61795b);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B617962:{NFSU2_TR(0x617962);
if(r1(F+6)){{[[clang::musttail]] return blk_6179a6(ARGS);}}
}
B617964:L617964:{bud-=3;NFSU2_TR(0x617964);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61796b:{NFSU2_TR(0x61796b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B61796d:{NFSU2_TR(0x61796d);
if(r1(F+6)){{[[clang::musttail]] return blk_6179a6(ARGS);}}
}
B61796f:L61796f:{bud-=5;NFSU2_TR(0x61796f);
__builtin_memmove((G+4),(G+0),4);
}
B617971:{NFSU2_TR(0x617971);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617972:{NFSU2_TR(0x617972);
u8 U[4];
w4(U+0,u32(0x22719fa9ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617977:{NFSU2_TR(0x617977);
__builtin_memmove((G+4),(R+12),4);
}
B617979:{NFSU2_TR(0x617979);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61797eull));
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
PN u32 blk_61797e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61797e:L61797e:{bud-=5;NFSU2_TR(0x61797e);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B617985:{NFSU2_TR(0x617985);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617986:{NFSU2_TR(0x617986);
u8 U[4];
w4(U+0,u32(0xfd102a92ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61798b:{NFSU2_TR(0x61798b);
__builtin_memmove((G+4),(R+12),4);
}
B61798d:{NFSU2_TR(0x61798d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617992ull));
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
PN u32 blk_617992(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617992:L617992:{bud-=5;NFSU2_TR(0x617992);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617999:{NFSU2_TR(0x617999);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61799a:{NFSU2_TR(0x61799a);
u8 U[4];
w4(U+0,u32(0x12049251ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61799f:{NFSU2_TR(0x61799f);
__builtin_memmove((G+4),(R+12),4);
}
B6179a1:{NFSU2_TR(0x6179a1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6179a6ull));
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
PN u32 blk_6179a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6179a6:L6179a6:{bud-=3;NFSU2_TR(0x6179a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6179ad:{NFSU2_TR(0x6179ad);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6179af:{NFSU2_TR(0x6179af);
if(r1(F+6)){{[[clang::musttail]] return blk_6179f3(ARGS);}}
}
B6179b1:L6179b1:{bud-=3;NFSU2_TR(0x6179b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6179b8:{NFSU2_TR(0x6179b8);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6179ba:{NFSU2_TR(0x6179ba);
if(r1(F+6)){{[[clang::musttail]] return blk_6179f3(ARGS);}}
}
B6179bc:L6179bc:{bud-=5;NFSU2_TR(0x6179bc);
__builtin_memmove((G+4),(G+0),4);
}
B6179be:{NFSU2_TR(0x6179be);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6179bf:{NFSU2_TR(0x6179bf);
u8 U[4];
w4(U+0,u32(0x22719fa9ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6179c4:{NFSU2_TR(0x6179c4);
__builtin_memmove((G+4),(R+12),4);
}
B6179c6:{NFSU2_TR(0x6179c6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6179cbull));
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
PN u32 blk_6179cb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6179cb:L6179cb:{bud-=5;NFSU2_TR(0x6179cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6179d2:{NFSU2_TR(0x6179d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6179d3:{NFSU2_TR(0x6179d3);
u8 U[4];
w4(U+0,u32(0xfd102a92ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6179d8:{NFSU2_TR(0x6179d8);
__builtin_memmove((G+4),(R+12),4);
}
B6179da:{NFSU2_TR(0x6179da);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6179dfull));
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
PN u32 blk_6179df(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6179df:L6179df:{bud-=5;NFSU2_TR(0x6179df);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6179e6:{NFSU2_TR(0x6179e6);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6179e7:{NFSU2_TR(0x6179e7);
u8 U[4];
w4(U+0,u32(0x12049251ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6179ec:{NFSU2_TR(0x6179ec);
__builtin_memmove((G+4),(R+12),4);
}
B6179ee:{NFSU2_TR(0x6179ee);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6179f3ull));
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
PN u32 blk_6179f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6179f3:L6179f3:{bud-=2;NFSU2_TR(0x6179f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6179fa:{NFSU2_TR(0x6179fa);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x617940u);}[[clang::musttail]] return blk_617940(ARGS);}}
}
B617a00:L617a00:{bud-=3;NFSU2_TR(0x617a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B617a07:{NFSU2_TR(0x617a07);
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
B617a09:{NFSU2_TR(0x617a09);
if(r1(F+6)){{[[clang::musttail]] return blk_618791(ARGS);}}
}
B617a0f:L617a0f:{bud-=197;NFSU2_TR(0x617a0f);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a16:{NFSU2_TR(0x617a16);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a1d:{NFSU2_TR(0x617a1d);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a24:{NFSU2_TR(0x617a24);
{u32 ea_=u32(r4(G+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a2b:{NFSU2_TR(0x617a2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a2d:{NFSU2_TR(0x617a2d);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a34:{NFSU2_TR(0x617a34);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a3b:{NFSU2_TR(0x617a3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a3d:{NFSU2_TR(0x617a3d);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a44:{NFSU2_TR(0x617a44);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a4b:{NFSU2_TR(0x617a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a4d:{NFSU2_TR(0x617a4d);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617a51:{NFSU2_TR(0x617a51);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a58:{NFSU2_TR(0x617a58);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a5f:{NFSU2_TR(0x617a5f);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a66:{NFSU2_TR(0x617a66);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a6d:{NFSU2_TR(0x617a6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a6f:{NFSU2_TR(0x617a6f);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a76:{NFSU2_TR(0x617a76);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a7d:{NFSU2_TR(0x617a7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a7f:{NFSU2_TR(0x617a7f);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a86:{NFSU2_TR(0x617a86);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617a8d:{NFSU2_TR(0x617a8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617a8f:{NFSU2_TR(0x617a8f);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617a93:{NFSU2_TR(0x617a93);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617a9a:{NFSU2_TR(0x617a9a);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617aa1:{NFSU2_TR(0x617aa1);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617aa8:{NFSU2_TR(0x617aa8);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617aaf:{NFSU2_TR(0x617aaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ab1:{NFSU2_TR(0x617ab1);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ab8:{NFSU2_TR(0x617ab8);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617abf:{NFSU2_TR(0x617abf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ac1:{NFSU2_TR(0x617ac1);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ac8:{NFSU2_TR(0x617ac8);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617acf:{NFSU2_TR(0x617acf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ad1:{NFSU2_TR(0x617ad1);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ad5:{NFSU2_TR(0x617ad5);
{u32 ea_=u32(r4(G+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617adc:{NFSU2_TR(0x617adc);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ae3:{NFSU2_TR(0x617ae3);
{u32 ea_=u32(r4(G+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617aea:{NFSU2_TR(0x617aea);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617af1:{NFSU2_TR(0x617af1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617af3:{NFSU2_TR(0x617af3);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617afa:{NFSU2_TR(0x617afa);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b01:{NFSU2_TR(0x617b01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b03:{NFSU2_TR(0x617b03);
{u32 ea_=u32(r4(G+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b0a:{NFSU2_TR(0x617b0a);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b11:{NFSU2_TR(0x617b11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b13:{NFSU2_TR(0x617b13);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617b17:{NFSU2_TR(0x617b17);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b1e:{NFSU2_TR(0x617b1e);
{u32 ea_=u32(r4(G+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b25:{NFSU2_TR(0x617b25);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b2c:{NFSU2_TR(0x617b2c);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b33:{NFSU2_TR(0x617b33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b35:{NFSU2_TR(0x617b35);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b3c:{NFSU2_TR(0x617b3c);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b43:{NFSU2_TR(0x617b43);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b45:{NFSU2_TR(0x617b45);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b4c:{NFSU2_TR(0x617b4c);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b53:{NFSU2_TR(0x617b53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b55:{NFSU2_TR(0x617b55);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617b5c:{NFSU2_TR(0x617b5c);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b63:{NFSU2_TR(0x617b63);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b6a:{NFSU2_TR(0x617b6a);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b71:{NFSU2_TR(0x617b71);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b78:{NFSU2_TR(0x617b78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b7a:{NFSU2_TR(0x617b7a);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b81:{NFSU2_TR(0x617b81);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b88:{NFSU2_TR(0x617b88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b8a:{NFSU2_TR(0x617b8a);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617b91:{NFSU2_TR(0x617b91);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617b98:{NFSU2_TR(0x617b98);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617b9a:{NFSU2_TR(0x617b9a);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ba1:{NFSU2_TR(0x617ba1);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ba8:{NFSU2_TR(0x617ba8);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617baf:{NFSU2_TR(0x617baf);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bb6:{NFSU2_TR(0x617bb6);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617bbd:{NFSU2_TR(0x617bbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617bbf:{NFSU2_TR(0x617bbf);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bc6:{NFSU2_TR(0x617bc6);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617bcd:{NFSU2_TR(0x617bcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617bcf:{NFSU2_TR(0x617bcf);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bd6:{NFSU2_TR(0x617bd6);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617bdd:{NFSU2_TR(0x617bdd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617bdf:{NFSU2_TR(0x617bdf);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617be6:{NFSU2_TR(0x617be6);
{u32 ea_=u32(r4(G+16)+u32(316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bed:{NFSU2_TR(0x617bed);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617bf4:{NFSU2_TR(0x617bf4);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617bfb:{NFSU2_TR(0x617bfb);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c02:{NFSU2_TR(0x617c02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c04:{NFSU2_TR(0x617c04);
{u32 ea_=u32(r4(G+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c0b:{NFSU2_TR(0x617c0b);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c12:{NFSU2_TR(0x617c12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c14:{NFSU2_TR(0x617c14);
{u32 ea_=u32(r4(G+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c1b:{NFSU2_TR(0x617c1b);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c22:{NFSU2_TR(0x617c22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c24:{NFSU2_TR(0x617c24);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617c2b:{NFSU2_TR(0x617c2b);
{u32 ea_=u32(r4(G+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c32:{NFSU2_TR(0x617c32);
{u32 ea_=u32(r4(G+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c39:{NFSU2_TR(0x617c39);
{u32 ea_=u32(r4(G+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c40:{NFSU2_TR(0x617c40);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c47:{NFSU2_TR(0x617c47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c49:{NFSU2_TR(0x617c49);
{u32 ea_=u32(r4(G+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c50:{NFSU2_TR(0x617c50);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c57:{NFSU2_TR(0x617c57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c59:{NFSU2_TR(0x617c59);
{u32 ea_=u32(r4(G+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c60:{NFSU2_TR(0x617c60);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c67:{NFSU2_TR(0x617c67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c69:{NFSU2_TR(0x617c69);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617c70:{NFSU2_TR(0x617c70);
{u32 ea_=u32(r4(G+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c77:{NFSU2_TR(0x617c77);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c7e:{NFSU2_TR(0x617c7e);
{u32 ea_=u32(r4(G+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c85:{NFSU2_TR(0x617c85);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c8c:{NFSU2_TR(0x617c8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c8e:{NFSU2_TR(0x617c8e);
{u32 ea_=u32(r4(G+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617c95:{NFSU2_TR(0x617c95);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617c9c:{NFSU2_TR(0x617c9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617c9e:{NFSU2_TR(0x617c9e);
{u32 ea_=u32(r4(G+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ca5:{NFSU2_TR(0x617ca5);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617cac:{NFSU2_TR(0x617cac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617cae:{NFSU2_TR(0x617cae);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617cb5:{NFSU2_TR(0x617cb5);
{u32 ea_=u32(r4(G+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617cbc:{NFSU2_TR(0x617cbc);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617cc3:{NFSU2_TR(0x617cc3);
{u32 ea_=u32(r4(G+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617cca:{NFSU2_TR(0x617cca);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617cd1:{NFSU2_TR(0x617cd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617cd3:{NFSU2_TR(0x617cd3);
{u32 ea_=u32(r4(G+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617cda:{NFSU2_TR(0x617cda);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ce1:{NFSU2_TR(0x617ce1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ce3:{NFSU2_TR(0x617ce3);
{u32 ea_=u32(r4(G+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617cea:{NFSU2_TR(0x617cea);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617cf1:{NFSU2_TR(0x617cf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617cf3:{NFSU2_TR(0x617cf3);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617cfa:{NFSU2_TR(0x617cfa);
{u32 ea_=u32(r4(G+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d01:{NFSU2_TR(0x617d01);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d08:{NFSU2_TR(0x617d08);
{u32 ea_=u32(r4(G+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d0f:{NFSU2_TR(0x617d0f);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d16:{NFSU2_TR(0x617d16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d18:{NFSU2_TR(0x617d18);
{u32 ea_=u32(r4(G+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d1f:{NFSU2_TR(0x617d1f);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d26:{NFSU2_TR(0x617d26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d28:{NFSU2_TR(0x617d28);
{u32 ea_=u32(r4(G+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d2f:{NFSU2_TR(0x617d2f);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d36:{NFSU2_TR(0x617d36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d38:{NFSU2_TR(0x617d38);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617d3f:{NFSU2_TR(0x617d3f);
{u32 ea_=u32(r4(G+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d46:{NFSU2_TR(0x617d46);
{u32 ea_=u32(r4(G+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d4d:{NFSU2_TR(0x617d4d);
{u32 ea_=u32(r4(G+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d54:{NFSU2_TR(0x617d54);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d5b:{NFSU2_TR(0x617d5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d5d:{NFSU2_TR(0x617d5d);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d64:{NFSU2_TR(0x617d64);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d6b:{NFSU2_TR(0x617d6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d6d:{NFSU2_TR(0x617d6d);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d74:{NFSU2_TR(0x617d74);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d7b:{NFSU2_TR(0x617d7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617d7d:{NFSU2_TR(0x617d7d);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617d84:{NFSU2_TR(0x617d84);
{u32 ea_=u32(r4(G+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d8b:{NFSU2_TR(0x617d8b);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617d92:{NFSU2_TR(0x617d92);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617d99:{NFSU2_TR(0x617d99);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617da0:{NFSU2_TR(0x617da0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617da2:{NFSU2_TR(0x617da2);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617da9:{NFSU2_TR(0x617da9);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617db0:{NFSU2_TR(0x617db0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617db2:{NFSU2_TR(0x617db2);
{u32 ea_=u32(r4(G+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617db9:{NFSU2_TR(0x617db9);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617dc0:{NFSU2_TR(0x617dc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617dc2:{NFSU2_TR(0x617dc2);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617dc9:{NFSU2_TR(0x617dc9);
{u32 ea_=u32(r4(G+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617dd0:{NFSU2_TR(0x617dd0);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617dd7:{NFSU2_TR(0x617dd7);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617dde:{NFSU2_TR(0x617dde);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617de5:{NFSU2_TR(0x617de5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617de7:{NFSU2_TR(0x617de7);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617dee:{NFSU2_TR(0x617dee);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617df5:{NFSU2_TR(0x617df5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617df7:{NFSU2_TR(0x617df7);
{u32 ea_=u32(r4(G+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617dfe:{NFSU2_TR(0x617dfe);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e05:{NFSU2_TR(0x617e05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e07:{NFSU2_TR(0x617e07);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617e0e:{NFSU2_TR(0x617e0e);
{u32 ea_=u32(r4(G+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e15:{NFSU2_TR(0x617e15);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e1c:{NFSU2_TR(0x617e1c);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e23:{NFSU2_TR(0x617e23);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B617e27:{NFSU2_TR(0x617e27);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e2e:{NFSU2_TR(0x617e2e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617e2f:{NFSU2_TR(0x617e2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B617e33:{NFSU2_TR(0x617e33);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B617e34:{NFSU2_TR(0x617e34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e36:{NFSU2_TR(0x617e36);
{u32 ea_=u32(r4(G+16)+u32(348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e3d:{NFSU2_TR(0x617e3d);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e44:{NFSU2_TR(0x617e44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e46:{NFSU2_TR(0x617e46);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e4d:{NFSU2_TR(0x617e4d);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e54:{NFSU2_TR(0x617e54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e56:{NFSU2_TR(0x617e56);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617e5d:{NFSU2_TR(0x617e5d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x617e62ull));
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
PN u32 blk_617e62(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B617e62:L617e62:{bud-=124;NFSU2_TR(0x617e62);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e66:{NFSU2_TR(0x617e66);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e69:{NFSU2_TR(0x617e69);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e6d:{NFSU2_TR(0x617e6d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e6f:{NFSU2_TR(0x617e6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e71:{NFSU2_TR(0x617e71);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e75:{NFSU2_TR(0x617e75);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e78:{NFSU2_TR(0x617e78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e7a:{NFSU2_TR(0x617e7a);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e7e:{NFSU2_TR(0x617e7e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e81:{NFSU2_TR(0x617e81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e83:{NFSU2_TR(0x617e83);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617e87:{NFSU2_TR(0x617e87);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e8b:{NFSU2_TR(0x617e8b);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e8e:{NFSU2_TR(0x617e8e);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e92:{NFSU2_TR(0x617e92);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e95:{NFSU2_TR(0x617e95);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617e97:{NFSU2_TR(0x617e97);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617e9b:{NFSU2_TR(0x617e9b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617e9e:{NFSU2_TR(0x617e9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ea0:{NFSU2_TR(0x617ea0);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ea4:{NFSU2_TR(0x617ea4);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ea7:{NFSU2_TR(0x617ea7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ea9:{NFSU2_TR(0x617ea9);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ead:{NFSU2_TR(0x617ead);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eb1:{NFSU2_TR(0x617eb1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617eb4:{NFSU2_TR(0x617eb4);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eb8:{NFSU2_TR(0x617eb8);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ebb:{NFSU2_TR(0x617ebb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ebd:{NFSU2_TR(0x617ebd);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ec1:{NFSU2_TR(0x617ec1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ec4:{NFSU2_TR(0x617ec4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ec6:{NFSU2_TR(0x617ec6);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eca:{NFSU2_TR(0x617eca);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ecd:{NFSU2_TR(0x617ecd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ecf:{NFSU2_TR(0x617ecf);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ed6:{NFSU2_TR(0x617ed6);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eda:{NFSU2_TR(0x617eda);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617edd:{NFSU2_TR(0x617edd);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ee1:{NFSU2_TR(0x617ee1);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ee4:{NFSU2_TR(0x617ee4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ee6:{NFSU2_TR(0x617ee6);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617eea:{NFSU2_TR(0x617eea);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617eed:{NFSU2_TR(0x617eed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617eef:{NFSU2_TR(0x617eef);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ef3:{NFSU2_TR(0x617ef3);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ef6:{NFSU2_TR(0x617ef6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617ef8:{NFSU2_TR(0x617ef8);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617eff:{NFSU2_TR(0x617eff);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f03:{NFSU2_TR(0x617f03);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f06:{NFSU2_TR(0x617f06);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f0a:{NFSU2_TR(0x617f0a);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f0d:{NFSU2_TR(0x617f0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f0f:{NFSU2_TR(0x617f0f);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f13:{NFSU2_TR(0x617f13);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f15:{NFSU2_TR(0x617f15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f17:{NFSU2_TR(0x617f17);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f1b:{NFSU2_TR(0x617f1b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f1e:{NFSU2_TR(0x617f1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f20:{NFSU2_TR(0x617f20);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617f27:{NFSU2_TR(0x617f27);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f2b:{NFSU2_TR(0x617f2b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f2e:{NFSU2_TR(0x617f2e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f32:{NFSU2_TR(0x617f32);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f35:{NFSU2_TR(0x617f35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f37:{NFSU2_TR(0x617f37);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f3b:{NFSU2_TR(0x617f3b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f3e:{NFSU2_TR(0x617f3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f40:{NFSU2_TR(0x617f40);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f44:{NFSU2_TR(0x617f44);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f47:{NFSU2_TR(0x617f47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f49:{NFSU2_TR(0x617f49);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617f50:{NFSU2_TR(0x617f50);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f54:{NFSU2_TR(0x617f54);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f57:{NFSU2_TR(0x617f57);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f5b:{NFSU2_TR(0x617f5b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f5e:{NFSU2_TR(0x617f5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f60:{NFSU2_TR(0x617f60);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f64:{NFSU2_TR(0x617f64);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f67:{NFSU2_TR(0x617f67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f69:{NFSU2_TR(0x617f69);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f6d:{NFSU2_TR(0x617f6d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f70:{NFSU2_TR(0x617f70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f72:{NFSU2_TR(0x617f72);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617f79:{NFSU2_TR(0x617f79);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f7d:{NFSU2_TR(0x617f7d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f80:{NFSU2_TR(0x617f80);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f84:{NFSU2_TR(0x617f84);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f87:{NFSU2_TR(0x617f87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f89:{NFSU2_TR(0x617f89);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f8d:{NFSU2_TR(0x617f8d);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f90:{NFSU2_TR(0x617f90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f92:{NFSU2_TR(0x617f92);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617f96:{NFSU2_TR(0x617f96);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617f99:{NFSU2_TR(0x617f99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617f9b:{NFSU2_TR(0x617f9b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617fa2:{NFSU2_TR(0x617fa2);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fa6:{NFSU2_TR(0x617fa6);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fa9:{NFSU2_TR(0x617fa9);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fad:{NFSU2_TR(0x617fad);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fb0:{NFSU2_TR(0x617fb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fb2:{NFSU2_TR(0x617fb2);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fb6:{NFSU2_TR(0x617fb6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fb8:{NFSU2_TR(0x617fb8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fba:{NFSU2_TR(0x617fba);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fbe:{NFSU2_TR(0x617fbe);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fc1:{NFSU2_TR(0x617fc1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fc3:{NFSU2_TR(0x617fc3);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617fca:{NFSU2_TR(0x617fca);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fce:{NFSU2_TR(0x617fce);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fd1:{NFSU2_TR(0x617fd1);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fd5:{NFSU2_TR(0x617fd5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fd8:{NFSU2_TR(0x617fd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fda:{NFSU2_TR(0x617fda);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fde:{NFSU2_TR(0x617fde);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fe1:{NFSU2_TR(0x617fe1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fe3:{NFSU2_TR(0x617fe3);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617fe7:{NFSU2_TR(0x617fe7);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617fea:{NFSU2_TR(0x617fea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B617fec:{NFSU2_TR(0x617fec);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B617ff3:{NFSU2_TR(0x617ff3);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ff7:{NFSU2_TR(0x617ff7);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B617ffa:{NFSU2_TR(0x617ffa);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B617ffe:{NFSU2_TR(0x617ffe);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
{EXIT(0x618001u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_617(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x617006:[[clang::musttail]] return blk_617006(c,a4,a0,a1,bud);
case 0x617012:[[clang::musttail]] return blk_617012(c,a4,a0,a1,bud);
case 0x617023:[[clang::musttail]] return blk_617023(c,a4,a0,a1,bud);
case 0x6170b8:[[clang::musttail]] return blk_6170b8(c,a4,a0,a1,bud);
case 0x6170d8:[[clang::musttail]] return blk_6170d8(c,a4,a0,a1,bud);
case 0x617110:[[clang::musttail]] return blk_617110(c,a4,a0,a1,bud);
case 0x617129:[[clang::musttail]] return blk_617129(c,a4,a0,a1,bud);
case 0x61717a:[[clang::musttail]] return blk_61717a(c,a4,a0,a1,bud);
case 0x61718f:[[clang::musttail]] return blk_61718f(c,a4,a0,a1,bud);
case 0x6171a2:[[clang::musttail]] return blk_6171a2(c,a4,a0,a1,bud);
case 0x6171b2:[[clang::musttail]] return blk_6171b2(c,a4,a0,a1,bud);
case 0x6171cc:[[clang::musttail]] return blk_6171cc(c,a4,a0,a1,bud);
case 0x6171d0:[[clang::musttail]] return blk_6171d0(c,a4,a0,a1,bud);
case 0x6171f9:[[clang::musttail]] return blk_6171f9(c,a4,a0,a1,bud);
case 0x617219:[[clang::musttail]] return blk_617219(c,a4,a0,a1,bud);
case 0x617222:[[clang::musttail]] return blk_617222(c,a4,a0,a1,bud);
case 0x617244:[[clang::musttail]] return blk_617244(c,a4,a0,a1,bud);
case 0x61724d:[[clang::musttail]] return blk_61724d(c,a4,a0,a1,bud);
case 0x61729d:[[clang::musttail]] return blk_61729d(c,a4,a0,a1,bud);
case 0x6172a7:[[clang::musttail]] return blk_6172a7(c,a4,a0,a1,bud);
case 0x6172b3:[[clang::musttail]] return blk_6172b3(c,a4,a0,a1,bud);
case 0x61730f:[[clang::musttail]] return blk_61730f(c,a4,a0,a1,bud);
case 0x617313:[[clang::musttail]] return blk_617313(c,a4,a0,a1,bud);
case 0x617346:[[clang::musttail]] return blk_617346(c,a4,a0,a1,bud);
case 0x617360:[[clang::musttail]] return blk_617360(c,a4,a0,a1,bud);
case 0x61736a:[[clang::musttail]] return blk_61736a(c,a4,a0,a1,bud);
case 0x617374:[[clang::musttail]] return blk_617374(c,a4,a0,a1,bud);
case 0x617380:[[clang::musttail]] return blk_617380(c,a4,a0,a1,bud);
case 0x61738a:[[clang::musttail]] return blk_61738a(c,a4,a0,a1,bud);
case 0x617394:[[clang::musttail]] return blk_617394(c,a4,a0,a1,bud);
case 0x6173a0:[[clang::musttail]] return blk_6173a0(c,a4,a0,a1,bud);
case 0x6173d6:[[clang::musttail]] return blk_6173d6(c,a4,a0,a1,bud);
case 0x6173db:[[clang::musttail]] return blk_6173db(c,a4,a0,a1,bud);
case 0x6173f5:[[clang::musttail]] return blk_6173f5(c,a4,a0,a1,bud);
case 0x617407:[[clang::musttail]] return blk_617407(c,a4,a0,a1,bud);
case 0x617440:[[clang::musttail]] return blk_617440(c,a4,a0,a1,bud);
case 0x617442:[[clang::musttail]] return blk_617442(c,a4,a0,a1,bud);
case 0x61744b:[[clang::musttail]] return blk_61744b(c,a4,a0,a1,bud);
case 0x617459:[[clang::musttail]] return blk_617459(c,a4,a0,a1,bud);
case 0x617482:[[clang::musttail]] return blk_617482(c,a4,a0,a1,bud);
case 0x61749e:[[clang::musttail]] return blk_61749e(c,a4,a0,a1,bud);
case 0x6174b3:[[clang::musttail]] return blk_6174b3(c,a4,a0,a1,bud);
case 0x6174c8:[[clang::musttail]] return blk_6174c8(c,a4,a0,a1,bud);
case 0x6174f2:[[clang::musttail]] return blk_6174f2(c,a4,a0,a1,bud);
case 0x6174f4:[[clang::musttail]] return blk_6174f4(c,a4,a0,a1,bud);
case 0x617559:[[clang::musttail]] return blk_617559(c,a4,a0,a1,bud);
case 0x61755d:[[clang::musttail]] return blk_61755d(c,a4,a0,a1,bud);
case 0x617569:[[clang::musttail]] return blk_617569(c,a4,a0,a1,bud);
case 0x6175a0:[[clang::musttail]] return blk_6175a0(c,a4,a0,a1,bud);
case 0x6175d6:[[clang::musttail]] return blk_6175d6(c,a4,a0,a1,bud);
case 0x6176ec:[[clang::musttail]] return blk_6176ec(c,a4,a0,a1,bud);
case 0x6176f4:[[clang::musttail]] return blk_6176f4(c,a4,a0,a1,bud);
case 0x617715:[[clang::musttail]] return blk_617715(c,a4,a0,a1,bud);
case 0x61776b:[[clang::musttail]] return blk_61776b(c,a4,a0,a1,bud);
case 0x61777b:[[clang::musttail]] return blk_61777b(c,a4,a0,a1,bud);
case 0x6177b2:[[clang::musttail]] return blk_6177b2(c,a4,a0,a1,bud);
case 0x6177c0:[[clang::musttail]] return blk_6177c0(c,a4,a0,a1,bud);
case 0x6177cc:[[clang::musttail]] return blk_6177cc(c,a4,a0,a1,bud);
case 0x6177e5:[[clang::musttail]] return blk_6177e5(c,a4,a0,a1,bud);
case 0x6177eb:[[clang::musttail]] return blk_6177eb(c,a4,a0,a1,bud);
case 0x6177ef:[[clang::musttail]] return blk_6177ef(c,a4,a0,a1,bud);
case 0x617808:[[clang::musttail]] return blk_617808(c,a4,a0,a1,bud);
case 0x61780e:[[clang::musttail]] return blk_61780e(c,a4,a0,a1,bud);
case 0x617812:[[clang::musttail]] return blk_617812(c,a4,a0,a1,bud);
case 0x61782b:[[clang::musttail]] return blk_61782b(c,a4,a0,a1,bud);
case 0x617831:[[clang::musttail]] return blk_617831(c,a4,a0,a1,bud);
case 0x617835:[[clang::musttail]] return blk_617835(c,a4,a0,a1,bud);
case 0x617853:[[clang::musttail]] return blk_617853(c,a4,a0,a1,bud);
case 0x61791d:[[clang::musttail]] return blk_61791d(c,a4,a0,a1,bud);
case 0x617940:[[clang::musttail]] return blk_617940(c,a4,a0,a1,bud);
case 0x61797e:[[clang::musttail]] return blk_61797e(c,a4,a0,a1,bud);
case 0x617992:[[clang::musttail]] return blk_617992(c,a4,a0,a1,bud);
case 0x6179a6:[[clang::musttail]] return blk_6179a6(c,a4,a0,a1,bud);
case 0x6179cb:[[clang::musttail]] return blk_6179cb(c,a4,a0,a1,bud);
case 0x6179df:[[clang::musttail]] return blk_6179df(c,a4,a0,a1,bud);
case 0x6179f3:[[clang::musttail]] return blk_6179f3(c,a4,a0,a1,bud);
case 0x617e62:[[clang::musttail]] return blk_617e62(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_617(Cpu& c){u8* R=c.regs.data();return ent_617(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
