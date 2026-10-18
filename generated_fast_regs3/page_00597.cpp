#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43cf10(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_43d1e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5956a8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5956e1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_595730(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_596f55(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597043(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59707f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5970aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5970d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597108(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597134(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59714d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597160(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59718b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597197(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597583(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597585(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5975bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5975f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597626(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597683(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5976d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5977f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59788e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5978a8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59790b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597949(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597975(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5979a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5979d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5979fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597a1a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597a30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597a5b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597a6a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597e58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597e5a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597e97(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597eca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597ef5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597fa0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597fdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597ff1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59802f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59803c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59810a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_59723a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5972f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5973b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597763(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597778(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597b0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597bcb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597c8a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_597000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597000:L597000:{bud-=7;NFSU2_TR(0x597000);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597002:{NFSU2_TR(0x597002);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597004:{NFSU2_TR(0x597004);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597007:{NFSU2_TR(0x597007);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59700a:{NFSU2_TR(0x59700a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59700c:{NFSU2_TR(0x59700c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B597010:{NFSU2_TR(0x597010);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_597043(ARGS);}}
}
B597012:L597012:{bud-=14;NFSU2_TR(0x597012);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597016:{NFSU2_TR(0x597016);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597019:{NFSU2_TR(0x597019);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59701b:{NFSU2_TR(0x59701b);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59701e:{NFSU2_TR(0x59701e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597021:{NFSU2_TR(0x597021);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597023:{NFSU2_TR(0x597023);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597026:{NFSU2_TR(0x597026);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597028:{NFSU2_TR(0x597028);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59702a:{NFSU2_TR(0x59702a);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59702e:{NFSU2_TR(0x59702e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B597032:{NFSU2_TR(0x597032);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597034:{NFSU2_TR(0x597034);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B597037:{NFSU2_TR(0x597037);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597043(ARGS);}}
}
B597039:L597039:{bud-=3;NFSU2_TR(0x597039);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59703b:{NFSU2_TR(0x59703b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59703f:{NFSU2_TR(0x59703f);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_597043(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597043(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597043:L597043:{bud-=15;NFSU2_TR(0x597043);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597046:{NFSU2_TR(0x597046);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59704a:{NFSU2_TR(0x59704a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59704d:{NFSU2_TR(0x59704d);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B59704e:{NFSU2_TR(0x59704e);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597051:{NFSU2_TR(0x597051);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597054:{NFSU2_TR(0x597054);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597057:{NFSU2_TR(0x597057);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59705f:{NFSU2_TR(0x59705f);
w4(R+8,u32(0x1ull));
}
B597064:{NFSU2_TR(0x597064);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597066:{NFSU2_TR(0x597066);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597069:{NFSU2_TR(0x597069);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59706b:{NFSU2_TR(0x59706b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59706d:{NFSU2_TR(0x59706d);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B597071:{NFSU2_TR(0x597071);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_59714d(ARGS);}}
}
B597077:L597077:{bud-=2;NFSU2_TR(0x597077);
w4(R+12,u32(0x4ull));
}
B59707c:{NFSU2_TR(0x59707c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_59707f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59707f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59707f:L59707f:{bud-=13;NFSU2_TR(0x59707f);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597082:{NFSU2_TR(0x597082);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597084:{NFSU2_TR(0x597084);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597087:{NFSU2_TR(0x597087);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59708a:{NFSU2_TR(0x59708a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59708c:{NFSU2_TR(0x59708c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59708f:{NFSU2_TR(0x59708f);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597091:{NFSU2_TR(0x597091);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597093:{NFSU2_TR(0x597093);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B597097:{NFSU2_TR(0x597097);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B597099:{NFSU2_TR(0x597099);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59709b:{NFSU2_TR(0x59709b);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59709e:{NFSU2_TR(0x59709e);
if(r1(F+2)){{[[clang::musttail]] return blk_5970aa(ARGS);}}
}
B5970a0:L5970a0:{bud-=3;NFSU2_TR(0x5970a0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5970a2:{NFSU2_TR(0x5970a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5970a6:{NFSU2_TR(0x5970a6);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5970aa(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5970aa(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5970aa:L5970aa:{bud-=13;NFSU2_TR(0x5970aa);
{u32 ea_=u32(r4(G+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5970ad:{NFSU2_TR(0x5970ad);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5970b0:{NFSU2_TR(0x5970b0);
{u32 ea_=u32(r4(G+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5970b3:{NFSU2_TR(0x5970b3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5970b5:{NFSU2_TR(0x5970b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5970b7:{NFSU2_TR(0x5970b7);
{u32 ea_=u32(r4(G+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5970ba:{NFSU2_TR(0x5970ba);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5970bd:{NFSU2_TR(0x5970bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5970bf:{NFSU2_TR(0x5970bf);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5970c3:{NFSU2_TR(0x5970c3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5970c5:{NFSU2_TR(0x5970c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5970c7:{NFSU2_TR(0x5970c7);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5970ca:{NFSU2_TR(0x5970ca);
if(r1(F+2)){{[[clang::musttail]] return blk_5970d9(ARGS);}}
}
B5970cc:L5970cc:{bud-=4;NFSU2_TR(0x5970cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((G+0),(U+0),4);
}
B5970cf:{NFSU2_TR(0x5970cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5970d1:{NFSU2_TR(0x5970d1);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5970d5:{NFSU2_TR(0x5970d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5970d9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5970d9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5970d9:L5970d9:{bud-=13;NFSU2_TR(0x5970d9);
{u32 ea_=u32(r4(G+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5970dc:{NFSU2_TR(0x5970dc);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5970df:{NFSU2_TR(0x5970df);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5970e2:{NFSU2_TR(0x5970e2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5970e4:{NFSU2_TR(0x5970e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5970e6:{NFSU2_TR(0x5970e6);
{u32 ea_=u32(r4(G+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5970e9:{NFSU2_TR(0x5970e9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5970ec:{NFSU2_TR(0x5970ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5970ee:{NFSU2_TR(0x5970ee);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5970f2:{NFSU2_TR(0x5970f2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5970f4:{NFSU2_TR(0x5970f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5970f6:{NFSU2_TR(0x5970f6);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5970f9:{NFSU2_TR(0x5970f9);
if(r1(F+2)){{[[clang::musttail]] return blk_597108(ARGS);}}
}
B5970fb:L5970fb:{bud-=4;NFSU2_TR(0x5970fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((G+0),(U+0),4);
}
B5970fe:{NFSU2_TR(0x5970fe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B597100:{NFSU2_TR(0x597100);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597104:{NFSU2_TR(0x597104);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_597108(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597108(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597108:L597108:{bud-=13;NFSU2_TR(0x597108);
{u32 ea_=u32(r4(G+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59710b:{NFSU2_TR(0x59710b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59710e:{NFSU2_TR(0x59710e);
{u32 ea_=u32(r4(G+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597111:{NFSU2_TR(0x597111);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597113:{NFSU2_TR(0x597113);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597115:{NFSU2_TR(0x597115);
{u32 ea_=u32(r4(G+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597118:{NFSU2_TR(0x597118);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59711b:{NFSU2_TR(0x59711b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59711d:{NFSU2_TR(0x59711d);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B597121:{NFSU2_TR(0x597121);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B597123:{NFSU2_TR(0x597123);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597125:{NFSU2_TR(0x597125);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B597128:{NFSU2_TR(0x597128);
if(r1(F+2)){{[[clang::musttail]] return blk_597134(ARGS);}}
}
B59712a:L59712a:{bud-=3;NFSU2_TR(0x59712a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59712c:{NFSU2_TR(0x59712c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597130:{NFSU2_TR(0x597130);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_597134(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597134(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597134:L597134:{bud-=6;NFSU2_TR(0x597134);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597138:{NFSU2_TR(0x597138);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B59713b:{NFSU2_TR(0x59713b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B59713e:{NFSU2_TR(0x59713e);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x40ull))));
}
B597141:{NFSU2_TR(0x597141);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597143:{NFSU2_TR(0x597143);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x59707fu);}[[clang::musttail]] return blk_59707f(ARGS);}}
}
B597149:L597149:{bud-=1;NFSU2_TR(0x597149);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59714d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59714d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59714d:L59714d:{bud-=3;NFSU2_TR(0x59714d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B597151:{NFSU2_TR(0x597151);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597153:{NFSU2_TR(0x597153);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_597197(ARGS);}}
}
B597155:L597155:{bud-=4;NFSU2_TR(0x597155);
__builtin_memmove((G+4),(R+8),4);
}
B597157:{NFSU2_TR(0x597157);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B59715a:{NFSU2_TR(0x59715a);
u8 U[12];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B59715e:{NFSU2_TR(0x59715e);
__builtin_memmove((R+28),(R+28),4);
{[[clang::musttail]] return blk_597160(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597160(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597160:L597160:{bud-=13;NFSU2_TR(0x597160);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597163:{NFSU2_TR(0x597163);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597165:{NFSU2_TR(0x597165);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597168:{NFSU2_TR(0x597168);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59716b:{NFSU2_TR(0x59716b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59716d:{NFSU2_TR(0x59716d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59716f:{NFSU2_TR(0x59716f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597172:{NFSU2_TR(0x597172);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597174:{NFSU2_TR(0x597174);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B597178:{NFSU2_TR(0x597178);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59717a:{NFSU2_TR(0x59717a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59717c:{NFSU2_TR(0x59717c);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59717f:{NFSU2_TR(0x59717f);
if(r1(F+2)){{[[clang::musttail]] return blk_59718b(ARGS);}}
}
B597181:L597181:{bud-=3;NFSU2_TR(0x597181);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B597183:{NFSU2_TR(0x597183);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597187:{NFSU2_TR(0x597187);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59718b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59718b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59718b:L59718b:{bud-=4;NFSU2_TR(0x59718b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B59718c:{NFSU2_TR(0x59718c);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B59718f:{NFSU2_TR(0x59718f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597191:{NFSU2_TR(0x597191);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x597160u);}[[clang::musttail]] return blk_597160(ARGS);}}
}
B597193:L597193:{bud-=1;NFSU2_TR(0x597193);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_597197(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597197(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597197:L597197:{bud-=5;NFSU2_TR(0x597197);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B597199:{NFSU2_TR(0x597199);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59719b:{NFSU2_TR(0x59719b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59719d:{NFSU2_TR(0x59719d);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5971a0:{NFSU2_TR(0x5971a0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597585(ARGS);}}
}
B5971a6:L5971a6:{bud-=37;NFSU2_TR(0x5971a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5971aa:{NFSU2_TR(0x5971aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5971ae:{NFSU2_TR(0x5971ae);
u8 U[6];
w1(F+0,carry<u32>(r4(R+8),u32(0x4ull)));
w1(F+11,scarry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5971b1:{NFSU2_TR(0x5971b1);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(F+0))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(F+11))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5971b4:{NFSU2_TR(0x5971b4);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5971b7:{NFSU2_TR(0x5971b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5971ba:{NFSU2_TR(0x5971ba);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5971bc:{NFSU2_TR(0x5971bc);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5971bf:{NFSU2_TR(0x5971bf);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5971c2:{NFSU2_TR(0x5971c2);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5971c5:{NFSU2_TR(0x5971c5);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5971c8:{NFSU2_TR(0x5971c8);
{u32 ea_=u32(r4(G+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5971cf:{NFSU2_TR(0x5971cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5971d6:{NFSU2_TR(0x5971d6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5971d8:{NFSU2_TR(0x5971d8);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5971dc:{NFSU2_TR(0x5971dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5971e0:{NFSU2_TR(0x5971e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5971e4:{NFSU2_TR(0x5971e4);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5971e8:{NFSU2_TR(0x5971e8);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5971ea:{NFSU2_TR(0x5971ea);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5971ec:{NFSU2_TR(0x5971ec);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5971ef:{NFSU2_TR(0x5971ef);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5971f2:{NFSU2_TR(0x5971f2);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5971f5:{NFSU2_TR(0x5971f5);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5971fc:{NFSU2_TR(0x5971fc);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5971ff:{NFSU2_TR(0x5971ff);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597200:{NFSU2_TR(0x597200);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B597207:{NFSU2_TR(0x597207);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59720e:{NFSU2_TR(0x59720e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597215:{NFSU2_TR(0x597215);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597217:{NFSU2_TR(0x597217);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59721e:{NFSU2_TR(0x59721e);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597225:{NFSU2_TR(0x597225);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597226:{NFSU2_TR(0x597226);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59722d:{NFSU2_TR(0x59722d);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597234:{NFSU2_TR(0x597234);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597235:{NFSU2_TR(0x597235);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x59723aull));
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
PN u32 blk_59723a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59723a:L59723a:{bud-=13;NFSU2_TR(0x59723a);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597241:{NFSU2_TR(0x597241);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597245:{NFSU2_TR(0x597245);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B597248:{NFSU2_TR(0x597248);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59724f:{NFSU2_TR(0x59724f);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597253:{NFSU2_TR(0x597253);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597255:{NFSU2_TR(0x597255);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59725c:{NFSU2_TR(0x59725c);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597260:{NFSU2_TR(0x597260);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597262:{NFSU2_TR(0x597262);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B597268:{NFSU2_TR(0x597268);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B59726a:{NFSU2_TR(0x59726a);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59726d:{NFSU2_TR(0x59726d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597585(ARGS);}}
}
B597273:L597273:{bud-=33;NFSU2_TR(0x597273);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597277:{NFSU2_TR(0x597277);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597279:{NFSU2_TR(0x597279);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59727b:{NFSU2_TR(0x59727b);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59727e:{NFSU2_TR(0x59727e);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597281:{NFSU2_TR(0x597281);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597284:{NFSU2_TR(0x597284);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597287:{NFSU2_TR(0x597287);
{u32 ea_=u32(r4(G+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59728e:{NFSU2_TR(0x59728e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597295:{NFSU2_TR(0x597295);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597297:{NFSU2_TR(0x597297);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59729b:{NFSU2_TR(0x59729b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59729f:{NFSU2_TR(0x59729f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5972a3:{NFSU2_TR(0x5972a3);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5972a7:{NFSU2_TR(0x5972a7);
{u32 ea_=u32(r4(G+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5972aa:{NFSU2_TR(0x5972aa);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5972ac:{NFSU2_TR(0x5972ac);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5972af:{NFSU2_TR(0x5972af);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5972b2:{NFSU2_TR(0x5972b2);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5972b4:{NFSU2_TR(0x5972b4);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5972bb:{NFSU2_TR(0x5972bb);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5972be:{NFSU2_TR(0x5972be);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B5972c5:{NFSU2_TR(0x5972c5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5972c6:{NFSU2_TR(0x5972c6);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5972c7:{NFSU2_TR(0x5972c7);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5972ce:{NFSU2_TR(0x5972ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x280ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5972d5:{NFSU2_TR(0x5972d5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5972d7:{NFSU2_TR(0x5972d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5972de:{NFSU2_TR(0x5972de);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5972e5:{NFSU2_TR(0x5972e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5972ec:{NFSU2_TR(0x5972ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5972ed:{NFSU2_TR(0x5972ed);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5972f4:{NFSU2_TR(0x5972f4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5972f9ull));
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
PN u32 blk_5972f9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5972f9:L5972f9:{bud-=13;NFSU2_TR(0x5972f9);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597300:{NFSU2_TR(0x597300);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597304:{NFSU2_TR(0x597304);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B597307:{NFSU2_TR(0x597307);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59730e:{NFSU2_TR(0x59730e);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597312:{NFSU2_TR(0x597312);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597314:{NFSU2_TR(0x597314);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59731b:{NFSU2_TR(0x59731b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59731f:{NFSU2_TR(0x59731f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597321:{NFSU2_TR(0x597321);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B597327:{NFSU2_TR(0x597327);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597329:{NFSU2_TR(0x597329);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B59732c:{NFSU2_TR(0x59732c);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597585(ARGS);}}
}
B597332:L597332:{bud-=33;NFSU2_TR(0x597332);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597336:{NFSU2_TR(0x597336);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597338:{NFSU2_TR(0x597338);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59733b:{NFSU2_TR(0x59733b);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59733e:{NFSU2_TR(0x59733e);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597341:{NFSU2_TR(0x597341);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597344:{NFSU2_TR(0x597344);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597346:{NFSU2_TR(0x597346);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59734d:{NFSU2_TR(0x59734d);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597354:{NFSU2_TR(0x597354);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597356:{NFSU2_TR(0x597356);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59735a:{NFSU2_TR(0x59735a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59735e:{NFSU2_TR(0x59735e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597362:{NFSU2_TR(0x597362);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597366:{NFSU2_TR(0x597366);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597368:{NFSU2_TR(0x597368);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59736b:{NFSU2_TR(0x59736b);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59736e:{NFSU2_TR(0x59736e);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597371:{NFSU2_TR(0x597371);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597374:{NFSU2_TR(0x597374);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59737b:{NFSU2_TR(0x59737b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59737d:{NFSU2_TR(0x59737d);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B597384:{NFSU2_TR(0x597384);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597385:{NFSU2_TR(0x597385);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59738c:{NFSU2_TR(0x59738c);
u8 U[8];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597393:{NFSU2_TR(0x597393);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597395:{NFSU2_TR(0x597395);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59739c:{NFSU2_TR(0x59739c);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5973a3:{NFSU2_TR(0x5973a3);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5973a4:{NFSU2_TR(0x5973a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5973ab:{NFSU2_TR(0x5973ab);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5973b2:{NFSU2_TR(0x5973b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5973b3:{NFSU2_TR(0x5973b3);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x5973b8ull));
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
PN u32 blk_5973b8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5973b8:L5973b8:{bud-=13;NFSU2_TR(0x5973b8);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5973bf:{NFSU2_TR(0x5973bf);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5973c3:{NFSU2_TR(0x5973c3);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B5973c6:{NFSU2_TR(0x5973c6);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5973cd:{NFSU2_TR(0x5973cd);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5973d1:{NFSU2_TR(0x5973d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5973d3:{NFSU2_TR(0x5973d3);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5973da:{NFSU2_TR(0x5973da);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5973de:{NFSU2_TR(0x5973de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5973e0:{NFSU2_TR(0x5973e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5973e6:{NFSU2_TR(0x5973e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5973e8:{NFSU2_TR(0x5973e8);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5973eb:{NFSU2_TR(0x5973eb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597585(ARGS);}}
}
B5973f1:L5973f1:{bud-=46;NFSU2_TR(0x5973f1);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5973f5:{NFSU2_TR(0x5973f5);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5973f9:{NFSU2_TR(0x5973f9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5973fb:{NFSU2_TR(0x5973fb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5973fd:{NFSU2_TR(0x5973fd);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5973ff:{NFSU2_TR(0x5973ff);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597402:{NFSU2_TR(0x597402);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B597404:{NFSU2_TR(0x597404);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597407:{NFSU2_TR(0x597407);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59740e:{NFSU2_TR(0x59740e);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597415:{NFSU2_TR(0x597415);
u8 U[8];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59741c:{NFSU2_TR(0x59741c);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597423:{NFSU2_TR(0x597423);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59742a:{NFSU2_TR(0x59742a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59742c:{NFSU2_TR(0x59742c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597430:{NFSU2_TR(0x597430);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597437:{NFSU2_TR(0x597437);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597439:{NFSU2_TR(0x597439);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597440:{NFSU2_TR(0x597440);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597443:{NFSU2_TR(0x597443);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59744a:{NFSU2_TR(0x59744a);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59744d:{NFSU2_TR(0x59744d);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B59744f:{NFSU2_TR(0x59744f);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597456:{NFSU2_TR(0x597456);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59745d:{NFSU2_TR(0x59745d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59745f:{NFSU2_TR(0x59745f);
{u32 ea_=u32(r4(R+28)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597465:{NFSU2_TR(0x597465);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59746b:{NFSU2_TR(0x59746b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597471:{NFSU2_TR(0x597471);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597474:{NFSU2_TR(0x597474);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B597476:{NFSU2_TR(0x597476);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597479:{NFSU2_TR(0x597479);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59747d:{NFSU2_TR(0x59747d);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B59747f:{NFSU2_TR(0x59747f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597481:{NFSU2_TR(0x597481);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597487:{NFSU2_TR(0x597487);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59748d:{NFSU2_TR(0x59748d);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597493:{NFSU2_TR(0x597493);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B597495:{NFSU2_TR(0x597495);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B597497:{NFSU2_TR(0x597497);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59749e:{NFSU2_TR(0x59749e);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5974a5:{NFSU2_TR(0x5974a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5974a7:{NFSU2_TR(0x5974a7);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5974ae:{NFSU2_TR(0x5974ae);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5974b5:{NFSU2_TR(0x5974b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5974b7:{NFSU2_TR(0x5974b7);
if(r1(F+6)){{[[clang::musttail]] return blk_5977f2(ARGS);}}
}
B5974bd:L5974bd:{bud-=4;NFSU2_TR(0x5974bd);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5974c1:{NFSU2_TR(0x5974c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5974c3:{NFSU2_TR(0x5974c3);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5974c6:{NFSU2_TR(0x5974c6);
if(r1(F+2)){{[[clang::musttail]] return blk_597583(ARGS);}}
}
B5974cc:L5974cc:{bud-=31;NFSU2_TR(0x5974cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5974d2:{NFSU2_TR(0x5974d2);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5974d6:{NFSU2_TR(0x5974d6);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5974dc:{NFSU2_TR(0x5974dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5974e3:{NFSU2_TR(0x5974e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5974e9:{NFSU2_TR(0x5974e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5974f0:{NFSU2_TR(0x5974f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5974f2:{NFSU2_TR(0x5974f2);
{u32 ea_=u32(r4(G+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5974f9:{NFSU2_TR(0x5974f9);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5974ff:{NFSU2_TR(0x5974ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597506:{NFSU2_TR(0x597506);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597509:{NFSU2_TR(0x597509);
{u32 ea_=u32(r4(G+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597510:{NFSU2_TR(0x597510);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597516:{NFSU2_TR(0x597516);
w4(G+0,u32(0x1ull));
}
B59751b:{NFSU2_TR(0x59751b);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597522:{NFSU2_TR(0x597522);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597525:{NFSU2_TR(0x597525);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59752c:{NFSU2_TR(0x59752c);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597532:{NFSU2_TR(0x597532);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597539:{NFSU2_TR(0x597539);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597540:{NFSU2_TR(0x597540);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597544:{NFSU2_TR(0x597544);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59754b:{NFSU2_TR(0x59754b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59754f:{NFSU2_TR(0x59754f);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597556:{NFSU2_TR(0x597556);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59755a:{NFSU2_TR(0x59755a);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597561:{NFSU2_TR(0x597561);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(G+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59756c:{NFSU2_TR(0x59756c);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597573:{NFSU2_TR(0x597573);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59757a:{NFSU2_TR(0x59757a);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597581:{NFSU2_TR(0x597581);
{[[clang::musttail]] return blk_597585(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597583(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597583:L597583:{bud-=1;NFSU2_TR(0x597583);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_597585(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597585(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597585:L597585:{bud-=16;NFSU2_TR(0x597585);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597589:{NFSU2_TR(0x597589);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59758d:{NFSU2_TR(0x59758d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B597591:{NFSU2_TR(0x597591);
w4(G+4,u32(0x10ull));
}
B597596:{NFSU2_TR(0x597596);
w4(R+8,u32(u32(r4(R+8))-u32(r4(G+4))));
}
B597598:{NFSU2_TR(0x597598);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59759c:{NFSU2_TR(0x59759c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5975a0:{NFSU2_TR(0x5975a0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B5975a2:{NFSU2_TR(0x5975a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5975a6:{NFSU2_TR(0x5975a6);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B5975a7:{NFSU2_TR(0x5975a7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B5975a8:{NFSU2_TR(0x5975a8);
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
B5975aa:{NFSU2_TR(0x5975aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5975ae:{NFSU2_TR(0x5975ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5975b2:{NFSU2_TR(0x5975b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5975b6:{NFSU2_TR(0x5975b6);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x595730u);}[[clang::musttail]] return blk_595730(ARGS);}}
{[[clang::musttail]] return blk_5975bc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5975bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5975bc:L5975bc:{bud-=16;NFSU2_TR(0x5975bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5975c0:{NFSU2_TR(0x5975c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5975c4:{NFSU2_TR(0x5975c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5975cb:{NFSU2_TR(0x5975cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5975cf:{NFSU2_TR(0x5975cf);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B5975d0:{NFSU2_TR(0x5975d0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5975d1:{NFSU2_TR(0x5975d1);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B5975d2:{NFSU2_TR(0x5975d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5975d9:{NFSU2_TR(0x5975d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5975dd:{NFSU2_TR(0x5975dd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B5975e0:{NFSU2_TR(0x5975e0);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B5975e1:{NFSU2_TR(0x5975e1);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5975e3:{NFSU2_TR(0x5975e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5975e7:{NFSU2_TR(0x5975e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5975eb:{NFSU2_TR(0x5975eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5975ef:{NFSU2_TR(0x5975ef);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5956e1u);}[[clang::musttail]] return blk_5956e1(ARGS);}}
{[[clang::musttail]] return blk_5975f5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5975f5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5975f5:L5975f5:{bud-=12;NFSU2_TR(0x5975f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5975f9:{NFSU2_TR(0x5975f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B597600:{NFSU2_TR(0x597600);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597604:{NFSU2_TR(0x597604);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B597607:{NFSU2_TR(0x597607);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59760b:{NFSU2_TR(0x59760b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59760f:{NFSU2_TR(0x59760f);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B597610:{NFSU2_TR(0x597610);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0xfffffffeull))));
}
B597613:{NFSU2_TR(0x597613);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597615:{NFSU2_TR(0x597615);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597619:{NFSU2_TR(0x597619);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597620:{NFSU2_TR(0x597620);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x5956a8u);}[[clang::musttail]] return blk_5956a8(ARGS);}}
{[[clang::musttail]] return blk_597626(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597626(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597626:L597626:{bud-=5;NFSU2_TR(0x597626);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59762a:{NFSU2_TR(0x59762a);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((G+4),(U+0),4);
}
B59762d:{NFSU2_TR(0x59762d);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B59762f:{NFSU2_TR(0x59762f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B597637:{NFSU2_TR(0x597637);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_597ef5(ARGS);}}
}
B59763d:L59763d:{bud-=5;NFSU2_TR(0x59763d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((G+4),(U+0),4);
}
B597640:{NFSU2_TR(0x597640);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B597641:{NFSU2_TR(0x597641);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597645:{NFSU2_TR(0x597645);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59764d:{NFSU2_TR(0x59764d);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_597650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597650:L597650:{bud-=6;NFSU2_TR(0x597650);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597654:{NFSU2_TR(0x597654);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B597655:{NFSU2_TR(0x597655);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597657:{NFSU2_TR(0x597657);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59765b:{NFSU2_TR(0x59765b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59765f:{NFSU2_TR(0x59765f);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_597eca(ARGS);}}
}
B597665:L597665:{bud-=9;NFSU2_TR(0x597665);
__builtin_memmove((G+0),(G+4),4);
}
B597667:{NFSU2_TR(0x597667);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B59766b:{NFSU2_TR(0x59766b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B59766c:{NFSU2_TR(0x59766c);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B59766f:{NFSU2_TR(0x59766f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597673:{NFSU2_TR(0x597673);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597677:{NFSU2_TR(0x597677);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59767b:{NFSU2_TR(0x59767b);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))-u32(r4(U+4))));
}
B59767f:{NFSU2_TR(0x59767f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_597683(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597683(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597683:L597683:{bud-=4;NFSU2_TR(0x597683);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597687:{NFSU2_TR(0x597687);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+8)));
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B59768b:{NFSU2_TR(0x59768b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59768f:{NFSU2_TR(0x59768f);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_597e97(ARGS);}}
}
B597695:L597695:{bud-=15;NFSU2_TR(0x597695);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597699:{NFSU2_TR(0x597699);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59769d:{NFSU2_TR(0x59769d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5976a1:{NFSU2_TR(0x5976a1);
w4(G+0,u32(u32(r4(G+0))-u32(r4(G+4))));
}
B5976a3:{NFSU2_TR(0x5976a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5976a7:{NFSU2_TR(0x5976a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5976ab:{NFSU2_TR(0x5976ab);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B5976af:{NFSU2_TR(0x5976af);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B5976b2:{NFSU2_TR(0x5976b2);
__builtin_memmove((G+0),(R+28),4);
}
B5976b4:{NFSU2_TR(0x5976b4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B5976b7:{NFSU2_TR(0x5976b7);
w4(G+0,u32(u32(r4(G+0))-u32(r4(G+4))));
}
B5976b9:{NFSU2_TR(0x5976b9);
u8 U[6];
w1(F+0,carry<u32>(r4(G+0),u32(0xa4ull)));
w1(F+11,scarry<u32>(r4(G+0),u32(0xa4ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0xa4ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B5976be:{NFSU2_TR(0x5976be);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5976c2:{NFSU2_TR(0x5976c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5976c9:{NFSU2_TR(0x5976c9);
__builtin_memmove((G+16),(G+16),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_5976d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5976d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5976d0:L5976d0:{bud-=34;NFSU2_TR(0x5976d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5976d4:{NFSU2_TR(0x5976d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5976d8:{NFSU2_TR(0x5976d8);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5976da:{NFSU2_TR(0x5976da);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5976dc:{NFSU2_TR(0x5976dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B5976e3:{NFSU2_TR(0x5976e3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5976e6:{NFSU2_TR(0x5976e6);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B5976e7:{NFSU2_TR(0x5976e7);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5976ea:{NFSU2_TR(0x5976ea);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5976ed:{NFSU2_TR(0x5976ed);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5976f0:{NFSU2_TR(0x5976f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5976f4:{NFSU2_TR(0x5976f4);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5976fb:{NFSU2_TR(0x5976fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597702:{NFSU2_TR(0x597702);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597704:{NFSU2_TR(0x597704);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59770b:{NFSU2_TR(0x59770b);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597712:{NFSU2_TR(0x597712);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B597719:{NFSU2_TR(0x597719);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597720:{NFSU2_TR(0x597720);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597721:{NFSU2_TR(0x597721);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597724:{NFSU2_TR(0x597724);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597726:{NFSU2_TR(0x597726);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597729:{NFSU2_TR(0x597729);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59772c:{NFSU2_TR(0x59772c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59772f:{NFSU2_TR(0x59772f);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B597731:{NFSU2_TR(0x597731);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597738:{NFSU2_TR(0x597738);
u8 U[8];
w4(U+0,u32(u32(u32(0x270ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59773f:{NFSU2_TR(0x59773f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597741:{NFSU2_TR(0x597741);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597748:{NFSU2_TR(0x597748);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59774f:{NFSU2_TR(0x59774f);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B597756:{NFSU2_TR(0x597756);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597757:{NFSU2_TR(0x597757);
{u32 ea_=u32(r4(G+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59775e:{NFSU2_TR(0x59775e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x597763ull));
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
PN u32 blk_597763(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597763:L597763:{bud-=5;NFSU2_TR(0x597763);
u8 U[4];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B59776a:{NFSU2_TR(0x59776a);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B59776b:{NFSU2_TR(0x59776b);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B597772:{NFSU2_TR(0x597772);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597773:{NFSU2_TR(0x597773);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x597778ull));
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
PN u32 blk_597778(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597778:L597778:{bud-=20;NFSU2_TR(0x597778);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59777a:{NFSU2_TR(0x59777a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59777c:{NFSU2_TR(0x59777c);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
}
B59777f:{NFSU2_TR(0x59777f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597782:{NFSU2_TR(0x597782);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597785:{NFSU2_TR(0x597785);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597788:{NFSU2_TR(0x597788);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59778b:{NFSU2_TR(0x59778b);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597792:{NFSU2_TR(0x597792);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B597794:{NFSU2_TR(0x597794);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B597796:{NFSU2_TR(0x597796);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59779d:{NFSU2_TR(0x59779d);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B59779f:{NFSU2_TR(0x59779f);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5977a1:{NFSU2_TR(0x5977a1);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5977a8:{NFSU2_TR(0x5977a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5977aa:{NFSU2_TR(0x5977aa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5977b0:{NFSU2_TR(0x5977b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5977b2:{NFSU2_TR(0x5977b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5977b4:{NFSU2_TR(0x5977b4);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5977b7:{NFSU2_TR(0x5977b7);
if(r1(F+2)){{[[clang::musttail]] return blk_59788e(ARGS);}}
}
B5977bd:L5977bd:{bud-=12;NFSU2_TR(0x5977bd);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5977c4:{NFSU2_TR(0x5977c4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5977c6:{NFSU2_TR(0x5977c6);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5977cd:{NFSU2_TR(0x5977cd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5977cf:{NFSU2_TR(0x5977cf);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5977d6:{NFSU2_TR(0x5977d6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5977d8:{NFSU2_TR(0x5977d8);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5977df:{NFSU2_TR(0x5977df);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5977e6:{NFSU2_TR(0x5977e6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5977e8:{NFSU2_TR(0x5977e8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5977ea:{NFSU2_TR(0x5977ea);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5977ed:{NFSU2_TR(0x5977ed);
{[[clang::musttail]] return blk_5978a8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5977f2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5977f2:L5977f2:{bud-=39;NFSU2_TR(0x5977f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5977fc:{NFSU2_TR(0x5977fc);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B597803:{NFSU2_TR(0x597803);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597809:{NFSU2_TR(0x597809);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B59780c:{NFSU2_TR(0x59780c);
{u32 ea_=u32(r4(R+28)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597810:{NFSU2_TR(0x597810);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((G+0),(U+8),4);
}
B597813:{NFSU2_TR(0x597813);
{u32 ea_=u32(r4(R+28)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597817:{NFSU2_TR(0x597817);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B597819:{NFSU2_TR(0x597819);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B59781d:{NFSU2_TR(0x59781d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59781f:{NFSU2_TR(0x59781f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597822:{NFSU2_TR(0x597822);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B597824:{NFSU2_TR(0x597824);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597827:{NFSU2_TR(0x597827);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B59782e:{NFSU2_TR(0x59782e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597834:{NFSU2_TR(0x597834);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B597837:{NFSU2_TR(0x597837);
{u32 ea_=u32(r4(R+28)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59783b:{NFSU2_TR(0x59783b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B59783e:{NFSU2_TR(0x59783e);
{u32 ea_=u32(r4(R+28)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597842:{NFSU2_TR(0x597842);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+28))));
}
B597844:{NFSU2_TR(0x597844);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597848:{NFSU2_TR(0x597848);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59784a:{NFSU2_TR(0x59784a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59784d:{NFSU2_TR(0x59784d);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597850:{NFSU2_TR(0x597850);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597853:{NFSU2_TR(0x597853);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+4),(U+12),4);
}
B59785a:{NFSU2_TR(0x59785a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597860:{NFSU2_TR(0x597860);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B597863:{NFSU2_TR(0x597863);
{u32 ea_=u32(r4(R+28)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597867:{NFSU2_TR(0x597867);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B59786a:{NFSU2_TR(0x59786a);
{u32 ea_=u32(r4(R+28)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59786e:{NFSU2_TR(0x59786e);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+28))));
}
B597870:{NFSU2_TR(0x597870);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597874:{NFSU2_TR(0x597874);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597876:{NFSU2_TR(0x597876);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597879:{NFSU2_TR(0x597879);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59787c:{NFSU2_TR(0x59787c);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59787f:{NFSU2_TR(0x59787f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B597889:{NFSU2_TR(0x597889);
{if(__builtin_expect(bud<=0,0)){EXIT(0x596f55u);}[[clang::musttail]] return blk_596f55(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59788e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59788e:L59788e:{bud-=5;NFSU2_TR(0x59788e);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597895:{NFSU2_TR(0x597895);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59789c:{NFSU2_TR(0x59789c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5978a3:{NFSU2_TR(0x5978a3);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5978a5:{NFSU2_TR(0x5978a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5978a8(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5978a8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5978a8:L5978a8:{bud-=16;NFSU2_TR(0x5978a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5978ac:{NFSU2_TR(0x5978ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5978af:{NFSU2_TR(0x5978af);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5978b2:{NFSU2_TR(0x5978b2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5978b5:{NFSU2_TR(0x5978b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5978b9:{NFSU2_TR(0x5978b9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5978bc:{NFSU2_TR(0x5978bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5978c0:{NFSU2_TR(0x5978c0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5978c3:{NFSU2_TR(0x5978c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B5978c7:{NFSU2_TR(0x5978c7);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5978c9:{NFSU2_TR(0x5978c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5978cb:{NFSU2_TR(0x5978cb);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5978cd:{NFSU2_TR(0x5978cd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5978cf:{NFSU2_TR(0x5978cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5978d1:{NFSU2_TR(0x5978d1);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5978d5:{NFSU2_TR(0x5978d5);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_59790b(ARGS);}}
}
B5978d7:L5978d7:{bud-=14;NFSU2_TR(0x5978d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5978de:{NFSU2_TR(0x5978de);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5978e1:{NFSU2_TR(0x5978e1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5978e3:{NFSU2_TR(0x5978e3);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5978e6:{NFSU2_TR(0x5978e6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5978e9:{NFSU2_TR(0x5978e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5978eb:{NFSU2_TR(0x5978eb);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5978ed:{NFSU2_TR(0x5978ed);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5978f0:{NFSU2_TR(0x5978f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5978f2:{NFSU2_TR(0x5978f2);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5978f6:{NFSU2_TR(0x5978f6);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5978fa:{NFSU2_TR(0x5978fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5978fc:{NFSU2_TR(0x5978fc);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B5978ff:{NFSU2_TR(0x5978ff);
if(r1(F+2)){{[[clang::musttail]] return blk_59790b(ARGS);}}
}
B597901:L597901:{bud-=3;NFSU2_TR(0x597901);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B597903:{NFSU2_TR(0x597903);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597907:{NFSU2_TR(0x597907);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_59790b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_59790b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B59790b:L59790b:{bud-=15;NFSU2_TR(0x59790b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59790d:{NFSU2_TR(0x59790d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597911:{NFSU2_TR(0x597911);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597913:{NFSU2_TR(0x597913);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B597914:{NFSU2_TR(0x597914);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597917:{NFSU2_TR(0x597917);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59791a:{NFSU2_TR(0x59791a);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59791d:{NFSU2_TR(0x59791d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B597925:{NFSU2_TR(0x597925);
w4(R+8,u32(0x1ull));
}
B59792a:{NFSU2_TR(0x59792a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59792c:{NFSU2_TR(0x59792c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59792f:{NFSU2_TR(0x59792f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597932:{NFSU2_TR(0x597932);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597934:{NFSU2_TR(0x597934);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59793b:{NFSU2_TR(0x59793b);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_597a1a(ARGS);}}
}
B597941:L597941:{bud-=2;NFSU2_TR(0x597941);
w4(R+12,u32(0x4ull));
}
B597946:{NFSU2_TR(0x597946);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_597949(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597949(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597949:L597949:{bud-=13;NFSU2_TR(0x597949);
{u32 ea_=u32(r4(G+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59794c:{NFSU2_TR(0x59794c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59794e:{NFSU2_TR(0x59794e);
{u32 ea_=u32(r4(G+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597951:{NFSU2_TR(0x597951);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597954:{NFSU2_TR(0x597954);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597956:{NFSU2_TR(0x597956);
{u32 ea_=u32(r4(G+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597959:{NFSU2_TR(0x597959);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59795c:{NFSU2_TR(0x59795c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59795e:{NFSU2_TR(0x59795e);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B597962:{NFSU2_TR(0x597962);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B597964:{NFSU2_TR(0x597964);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597966:{NFSU2_TR(0x597966);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B597969:{NFSU2_TR(0x597969);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597975(ARGS);}}
}
B59796b:L59796b:{bud-=3;NFSU2_TR(0x59796b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59796d:{NFSU2_TR(0x59796d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597971:{NFSU2_TR(0x597971);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_597975(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597975(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597975:L597975:{bud-=13;NFSU2_TR(0x597975);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597978:{NFSU2_TR(0x597978);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59797a:{NFSU2_TR(0x59797a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59797d:{NFSU2_TR(0x59797d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597980:{NFSU2_TR(0x597980);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597982:{NFSU2_TR(0x597982);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597985:{NFSU2_TR(0x597985);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597987:{NFSU2_TR(0x597987);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597989:{NFSU2_TR(0x597989);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59798d:{NFSU2_TR(0x59798d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59798f:{NFSU2_TR(0x59798f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597991:{NFSU2_TR(0x597991);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B597994:{NFSU2_TR(0x597994);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5979a3(ARGS);}}
}
B597996:L597996:{bud-=4;NFSU2_TR(0x597996);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((G+0),(U+0),4);
}
B597999:{NFSU2_TR(0x597999);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59799b:{NFSU2_TR(0x59799b);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59799f:{NFSU2_TR(0x59799f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5979a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5979a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5979a3:L5979a3:{bud-=13;NFSU2_TR(0x5979a3);
{u32 ea_=u32(r4(G+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5979a6:{NFSU2_TR(0x5979a6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5979a9:{NFSU2_TR(0x5979a9);
{u32 ea_=u32(r4(G+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5979ac:{NFSU2_TR(0x5979ac);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5979ae:{NFSU2_TR(0x5979ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5979b0:{NFSU2_TR(0x5979b0);
{u32 ea_=u32(r4(G+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5979b3:{NFSU2_TR(0x5979b3);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5979b6:{NFSU2_TR(0x5979b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5979b8:{NFSU2_TR(0x5979b8);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5979bc:{NFSU2_TR(0x5979bc);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5979be:{NFSU2_TR(0x5979be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5979c0:{NFSU2_TR(0x5979c0);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5979c3:{NFSU2_TR(0x5979c3);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5979d2(ARGS);}}
}
B5979c5:L5979c5:{bud-=4;NFSU2_TR(0x5979c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((G+0),(U+0),4);
}
B5979c8:{NFSU2_TR(0x5979c8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5979ca:{NFSU2_TR(0x5979ca);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5979ce:{NFSU2_TR(0x5979ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_5979d2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5979d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5979d2:L5979d2:{bud-=13;NFSU2_TR(0x5979d2);
{u32 ea_=u32(r4(G+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5979d5:{NFSU2_TR(0x5979d5);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5979d8:{NFSU2_TR(0x5979d8);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5979db:{NFSU2_TR(0x5979db);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5979dd:{NFSU2_TR(0x5979dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5979df:{NFSU2_TR(0x5979df);
{u32 ea_=u32(r4(G+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5979e2:{NFSU2_TR(0x5979e2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5979e5:{NFSU2_TR(0x5979e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5979e7:{NFSU2_TR(0x5979e7);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5979eb:{NFSU2_TR(0x5979eb);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5979ed:{NFSU2_TR(0x5979ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5979ef:{NFSU2_TR(0x5979ef);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5979f2:{NFSU2_TR(0x5979f2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5979fe(ARGS);}}
}
B5979f4:L5979f4:{bud-=3;NFSU2_TR(0x5979f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5979f6:{NFSU2_TR(0x5979f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5979fa:{NFSU2_TR(0x5979fa);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5979fe(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5979fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5979fe:L5979fe:{bud-=6;NFSU2_TR(0x5979fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597a02:{NFSU2_TR(0x597a02);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B597a05:{NFSU2_TR(0x597a05);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B597a08:{NFSU2_TR(0x597a08);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x40ull))));
}
B597a0b:{NFSU2_TR(0x597a0b);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597a0d:{NFSU2_TR(0x597a0d);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x597949u);}[[clang::musttail]] return blk_597949(ARGS);}}
}
B597a13:L597a13:{bud-=1;NFSU2_TR(0x597a13);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_597a1a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597a1a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597a1a:L597a1a:{bud-=3;NFSU2_TR(0x597a1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B597a1e:{NFSU2_TR(0x597a1e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597a20:{NFSU2_TR(0x597a20);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_597a6a(ARGS);}}
}
B597a22:L597a22:{bud-=4;NFSU2_TR(0x597a22);
__builtin_memmove((G+4),(R+8),4);
}
B597a24:{NFSU2_TR(0x597a24);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B597a27:{NFSU2_TR(0x597a27);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B597a2b:{NFSU2_TR(0x597a2b);
{[[clang::musttail]] return blk_597a30(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597a30(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597a30:L597a30:{bud-=13;NFSU2_TR(0x597a30);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597a33:{NFSU2_TR(0x597a33);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597a35:{NFSU2_TR(0x597a35);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597a38:{NFSU2_TR(0x597a38);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597a3b:{NFSU2_TR(0x597a3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597a3d:{NFSU2_TR(0x597a3d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597a3f:{NFSU2_TR(0x597a3f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597a42:{NFSU2_TR(0x597a42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597a44:{NFSU2_TR(0x597a44);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B597a48:{NFSU2_TR(0x597a48);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B597a4a:{NFSU2_TR(0x597a4a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597a4c:{NFSU2_TR(0x597a4c);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B597a4f:{NFSU2_TR(0x597a4f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597a5b(ARGS);}}
}
B597a51:L597a51:{bud-=3;NFSU2_TR(0x597a51);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B597a53:{NFSU2_TR(0x597a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597a57:{NFSU2_TR(0x597a57);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_597a5b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597a5b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597a5b:L597a5b:{bud-=4;NFSU2_TR(0x597a5b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B597a5c:{NFSU2_TR(0x597a5c);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B597a5f:{NFSU2_TR(0x597a5f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597a61:{NFSU2_TR(0x597a61);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x597a30u);}[[clang::musttail]] return blk_597a30(ARGS);}}
}
B597a63:L597a63:{bud-=1;NFSU2_TR(0x597a63);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_597a6a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597a6a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597a6a:L597a6a:{bud-=6;NFSU2_TR(0x597a6a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597a6c:{NFSU2_TR(0x597a6c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B597a6e:{NFSU2_TR(0x597a6e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597a70:{NFSU2_TR(0x597a70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B597a72:{NFSU2_TR(0x597a72);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B597a75:{NFSU2_TR(0x597a75);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597e5a(ARGS);}}
}
B597a7b:L597a7b:{bud-=36;NFSU2_TR(0x597a7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597a7f:{NFSU2_TR(0x597a7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597a83:{NFSU2_TR(0x597a83);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(F+0))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(F+0,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(F+0))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(F+11))));
w1(F+11,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(F+7))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(F+7,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(F+6))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(F+6,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(F+2))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(F+2,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B597a86:{NFSU2_TR(0x597a86);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597a89:{NFSU2_TR(0x597a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B597a8c:{NFSU2_TR(0x597a8c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597a8e:{NFSU2_TR(0x597a8e);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597a91:{NFSU2_TR(0x597a91);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597a94:{NFSU2_TR(0x597a94);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597a97:{NFSU2_TR(0x597a97);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597a9a:{NFSU2_TR(0x597a9a);
{u32 ea_=u32(r4(G+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597aa1:{NFSU2_TR(0x597aa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597aa8:{NFSU2_TR(0x597aa8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597aaa:{NFSU2_TR(0x597aaa);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597aae:{NFSU2_TR(0x597aae);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597ab2:{NFSU2_TR(0x597ab2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597ab6:{NFSU2_TR(0x597ab6);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597aba:{NFSU2_TR(0x597aba);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597abc:{NFSU2_TR(0x597abc);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597abe:{NFSU2_TR(0x597abe);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597ac1:{NFSU2_TR(0x597ac1);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B597ac4:{NFSU2_TR(0x597ac4);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597ac7:{NFSU2_TR(0x597ac7);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B597ace:{NFSU2_TR(0x597ace);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B597ad1:{NFSU2_TR(0x597ad1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597ad2:{NFSU2_TR(0x597ad2);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B597ad9:{NFSU2_TR(0x597ad9);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597ae0:{NFSU2_TR(0x597ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597ae7:{NFSU2_TR(0x597ae7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597ae9:{NFSU2_TR(0x597ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597af0:{NFSU2_TR(0x597af0);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597af7:{NFSU2_TR(0x597af7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597af8:{NFSU2_TR(0x597af8);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B597aff:{NFSU2_TR(0x597aff);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597b06:{NFSU2_TR(0x597b06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597b07:{NFSU2_TR(0x597b07);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x597b0cull));
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
PN u32 blk_597b0c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597b0c:L597b0c:{bud-=13;NFSU2_TR(0x597b0c);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b13:{NFSU2_TR(0x597b13);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597b17:{NFSU2_TR(0x597b17);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B597b1a:{NFSU2_TR(0x597b1a);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b21:{NFSU2_TR(0x597b21);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597b25:{NFSU2_TR(0x597b25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597b27:{NFSU2_TR(0x597b27);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b2e:{NFSU2_TR(0x597b2e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597b32:{NFSU2_TR(0x597b32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597b34:{NFSU2_TR(0x597b34);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B597b3a:{NFSU2_TR(0x597b3a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597b3c:{NFSU2_TR(0x597b3c);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B597b3f:{NFSU2_TR(0x597b3f);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597e5a(ARGS);}}
}
B597b45:L597b45:{bud-=33;NFSU2_TR(0x597b45);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597b49:{NFSU2_TR(0x597b49);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b4b:{NFSU2_TR(0x597b4b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597b4d:{NFSU2_TR(0x597b4d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b50:{NFSU2_TR(0x597b50);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597b53:{NFSU2_TR(0x597b53);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b56:{NFSU2_TR(0x597b56);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597b59:{NFSU2_TR(0x597b59);
{u32 ea_=u32(r4(G+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597b60:{NFSU2_TR(0x597b60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597b67:{NFSU2_TR(0x597b67);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597b69:{NFSU2_TR(0x597b69);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597b6d:{NFSU2_TR(0x597b6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597b71:{NFSU2_TR(0x597b71);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597b75:{NFSU2_TR(0x597b75);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597b79:{NFSU2_TR(0x597b79);
{u32 ea_=u32(r4(G+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b7c:{NFSU2_TR(0x597b7c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597b7e:{NFSU2_TR(0x597b7e);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b81:{NFSU2_TR(0x597b81);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597b84:{NFSU2_TR(0x597b84);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597b86:{NFSU2_TR(0x597b86);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B597b8d:{NFSU2_TR(0x597b8d);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597b90:{NFSU2_TR(0x597b90);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B597b97:{NFSU2_TR(0x597b97);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597b98:{NFSU2_TR(0x597b98);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597b99:{NFSU2_TR(0x597b99);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597ba0:{NFSU2_TR(0x597ba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x280ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597ba7:{NFSU2_TR(0x597ba7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597ba9:{NFSU2_TR(0x597ba9);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597bb0:{NFSU2_TR(0x597bb0);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597bb7:{NFSU2_TR(0x597bb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B597bbe:{NFSU2_TR(0x597bbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597bbf:{NFSU2_TR(0x597bbf);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597bc6:{NFSU2_TR(0x597bc6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x597bcbull));
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
PN u32 blk_597bcb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597bcb:L597bcb:{bud-=13;NFSU2_TR(0x597bcb);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597bd2:{NFSU2_TR(0x597bd2);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597bd6:{NFSU2_TR(0x597bd6);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B597bd9:{NFSU2_TR(0x597bd9);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597be0:{NFSU2_TR(0x597be0);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597be4:{NFSU2_TR(0x597be4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597be6:{NFSU2_TR(0x597be6);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597bed:{NFSU2_TR(0x597bed);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597bf1:{NFSU2_TR(0x597bf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597bf3:{NFSU2_TR(0x597bf3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B597bf9:{NFSU2_TR(0x597bf9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597bfb:{NFSU2_TR(0x597bfb);
u8 U[4];
w1(F+0,u8(0x0ull));
w1(F+11,u8(0x0ull));
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+7,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(F+6,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B597bfe:{NFSU2_TR(0x597bfe);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597e5a(ARGS);}}
}
B597c04:L597c04:{bud-=33;NFSU2_TR(0x597c04);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597c08:{NFSU2_TR(0x597c08);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597c0a:{NFSU2_TR(0x597c0a);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597c0d:{NFSU2_TR(0x597c0d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597c10:{NFSU2_TR(0x597c10);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597c13:{NFSU2_TR(0x597c13);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597c16:{NFSU2_TR(0x597c16);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597c18:{NFSU2_TR(0x597c18);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597c1f:{NFSU2_TR(0x597c1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597c26:{NFSU2_TR(0x597c26);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597c28:{NFSU2_TR(0x597c28);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597c2c:{NFSU2_TR(0x597c2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597c30:{NFSU2_TR(0x597c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597c34:{NFSU2_TR(0x597c34);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597c38:{NFSU2_TR(0x597c38);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597c3a:{NFSU2_TR(0x597c3a);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597c3d:{NFSU2_TR(0x597c3d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597c40:{NFSU2_TR(0x597c40);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597c43:{NFSU2_TR(0x597c43);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597c46:{NFSU2_TR(0x597c46);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B597c4d:{NFSU2_TR(0x597c4d);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597c4f:{NFSU2_TR(0x597c4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B597c56:{NFSU2_TR(0x597c56);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597c57:{NFSU2_TR(0x597c57);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597c5e:{NFSU2_TR(0x597c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597c65:{NFSU2_TR(0x597c65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597c67:{NFSU2_TR(0x597c67);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597c6e:{NFSU2_TR(0x597c6e);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597c75:{NFSU2_TR(0x597c75);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597c76:{NFSU2_TR(0x597c76);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B597c7d:{NFSU2_TR(0x597c7d);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597c84:{NFSU2_TR(0x597c84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B597c85:{NFSU2_TR(0x597c85);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x597c8aull));
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
PN u32 blk_597c8a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597c8a:L597c8a:{bud-=13;NFSU2_TR(0x597c8a);
{u32 ea_=u32(r4(G+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597c91:{NFSU2_TR(0x597c91);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597c95:{NFSU2_TR(0x597c95);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0xcull))));
}
B597c98:{NFSU2_TR(0x597c98);
{u32 ea_=u32(r4(G+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597c9f:{NFSU2_TR(0x597c9f);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597ca3:{NFSU2_TR(0x597ca3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597ca5:{NFSU2_TR(0x597ca5);
{u32 ea_=u32(r4(G+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597cac:{NFSU2_TR(0x597cac);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597cb0:{NFSU2_TR(0x597cb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597cb2:{NFSU2_TR(0x597cb2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B597cb8:{NFSU2_TR(0x597cb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597cba:{NFSU2_TR(0x597cba);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B597cbd:{NFSU2_TR(0x597cbd);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_597e5a(ARGS);}}
}
B597cc3:L597cc3:{bud-=46;NFSU2_TR(0x597cc3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597cc7:{NFSU2_TR(0x597cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((G+4),(U+0),4);
}
B597cc9:{NFSU2_TR(0x597cc9);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B597cd0:{NFSU2_TR(0x597cd0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B597cd2:{NFSU2_TR(0x597cd2);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597cd4:{NFSU2_TR(0x597cd4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B597cd6:{NFSU2_TR(0x597cd6);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597cd9:{NFSU2_TR(0x597cd9);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B597cdb:{NFSU2_TR(0x597cdb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597cde:{NFSU2_TR(0x597cde);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597ce5:{NFSU2_TR(0x597ce5);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597cec:{NFSU2_TR(0x597cec);
u8 U[8];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597cf3:{NFSU2_TR(0x597cf3);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597cfa:{NFSU2_TR(0x597cfa);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597d01:{NFSU2_TR(0x597d01);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597d03:{NFSU2_TR(0x597d03);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597d07:{NFSU2_TR(0x597d07);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597d0e:{NFSU2_TR(0x597d0e);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597d11:{NFSU2_TR(0x597d11);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597d14:{NFSU2_TR(0x597d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597d1a:{NFSU2_TR(0x597d1a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597d1c:{NFSU2_TR(0x597d1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597d20:{NFSU2_TR(0x597d20);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B597d22:{NFSU2_TR(0x597d22);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597d28:{NFSU2_TR(0x597d28);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597d2e:{NFSU2_TR(0x597d2e);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597d35:{NFSU2_TR(0x597d35);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B597d37:{NFSU2_TR(0x597d37);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597d3a:{NFSU2_TR(0x597d3a);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B597d41:{NFSU2_TR(0x597d41);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597d44:{NFSU2_TR(0x597d44);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B597d46:{NFSU2_TR(0x597d46);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597d4d:{NFSU2_TR(0x597d4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597d54:{NFSU2_TR(0x597d54);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597d56:{NFSU2_TR(0x597d56);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597d5c:{NFSU2_TR(0x597d5c);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597d62:{NFSU2_TR(0x597d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597d68:{NFSU2_TR(0x597d68);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B597d6a:{NFSU2_TR(0x597d6a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B597d6c:{NFSU2_TR(0x597d6c);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597d73:{NFSU2_TR(0x597d73);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597d7a:{NFSU2_TR(0x597d7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597d7c:{NFSU2_TR(0x597d7c);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597d83:{NFSU2_TR(0x597d83);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B597d8a:{NFSU2_TR(0x597d8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B597d8c:{NFSU2_TR(0x597d8c);
if(r1(F+6)){{[[clang::musttail]] return blk_59803c(ARGS);}}
}
B597d92:L597d92:{bud-=4;NFSU2_TR(0x597d92);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B597d96:{NFSU2_TR(0x597d96);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B597d98:{NFSU2_TR(0x597d98);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B597d9b:{NFSU2_TR(0x597d9b);
if(r1(F+2)){{[[clang::musttail]] return blk_597e58(ARGS);}}
}
B597da1:L597da1:{bud-=31;NFSU2_TR(0x597da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597da7:{NFSU2_TR(0x597da7);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597dab:{NFSU2_TR(0x597dab);
{u32 ea_=u32(r4(R+28)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597db1:{NFSU2_TR(0x597db1);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597db8:{NFSU2_TR(0x597db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597dbe:{NFSU2_TR(0x597dbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597dc5:{NFSU2_TR(0x597dc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B597dc7:{NFSU2_TR(0x597dc7);
{u32 ea_=u32(r4(G+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597dce:{NFSU2_TR(0x597dce);
{u32 ea_=u32(r4(R+28)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597dd4:{NFSU2_TR(0x597dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597ddb:{NFSU2_TR(0x597ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597dde:{NFSU2_TR(0x597dde);
{u32 ea_=u32(r4(G+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597de5:{NFSU2_TR(0x597de5);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597deb:{NFSU2_TR(0x597deb);
w4(G+0,u32(0x1ull));
}
B597df0:{NFSU2_TR(0x597df0);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597df7:{NFSU2_TR(0x597df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597dfa:{NFSU2_TR(0x597dfa);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597e01:{NFSU2_TR(0x597e01);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597e07:{NFSU2_TR(0x597e07);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e0e:{NFSU2_TR(0x597e0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e15:{NFSU2_TR(0x597e15);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597e19:{NFSU2_TR(0x597e19);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e20:{NFSU2_TR(0x597e20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597e24:{NFSU2_TR(0x597e24);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e2b:{NFSU2_TR(0x597e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597e2f:{NFSU2_TR(0x597e2f);
{u32 ea_=u32(r4(G+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597e36:{NFSU2_TR(0x597e36);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e3d:{NFSU2_TR(0x597e3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B597e48:{NFSU2_TR(0x597e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e4f:{NFSU2_TR(0x597e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e56:{NFSU2_TR(0x597e56);
{[[clang::musttail]] return blk_597e5a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597e58(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597e58:L597e58:{bud-=1;NFSU2_TR(0x597e58);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_597e5a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597e5a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597e5a:L597e5a:{bud-=16;NFSU2_TR(0x597e5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597e5e:{NFSU2_TR(0x597e5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B597e65:{NFSU2_TR(0x597e65);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597e69:{NFSU2_TR(0x597e69);
w4(G+4,u32(0x10ull));
}
B597e6e:{NFSU2_TR(0x597e6e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B597e70:{NFSU2_TR(0x597e70);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+4))));
}
B597e72:{NFSU2_TR(0x597e72);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597e76:{NFSU2_TR(0x597e76);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e7a:{NFSU2_TR(0x597e7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597e7e:{NFSU2_TR(0x597e7e);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B597e7f:{NFSU2_TR(0x597e7f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B597e80:{NFSU2_TR(0x597e80);
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
B597e82:{NFSU2_TR(0x597e82);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e86:{NFSU2_TR(0x597e86);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e8d:{NFSU2_TR(0x597e8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597e91:{NFSU2_TR(0x597e91);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x5976d0u);}[[clang::musttail]] return blk_5976d0(ARGS);}}
{[[clang::musttail]] return blk_597e97(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597e97(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597e97:L597e97:{bud-=16;NFSU2_TR(0x597e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597e9b:{NFSU2_TR(0x597e9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597e9f:{NFSU2_TR(0x597e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597ea3:{NFSU2_TR(0x597ea3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B597ea7:{NFSU2_TR(0x597ea7);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B597ea8:{NFSU2_TR(0x597ea8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B597eab:{NFSU2_TR(0x597eab);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B597eac:{NFSU2_TR(0x597eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597eb0:{NFSU2_TR(0x597eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597eb4:{NFSU2_TR(0x597eb4);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B597eb5:{NFSU2_TR(0x597eb5);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B597eb6:{NFSU2_TR(0x597eb6);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597eb8:{NFSU2_TR(0x597eb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597ebc:{NFSU2_TR(0x597ebc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597ec0:{NFSU2_TR(0x597ec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597ec4:{NFSU2_TR(0x597ec4);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x597683u);}[[clang::musttail]] return blk_597683(ARGS);}}
{[[clang::musttail]] return blk_597eca(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597eca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597eca:L597eca:{bud-=12;NFSU2_TR(0x597eca);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597ece:{NFSU2_TR(0x597ece);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B597ed2:{NFSU2_TR(0x597ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597ed6:{NFSU2_TR(0x597ed6);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B597ed9:{NFSU2_TR(0x597ed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597edd:{NFSU2_TR(0x597edd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597ee1:{NFSU2_TR(0x597ee1);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B597ee2:{NFSU2_TR(0x597ee2);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0xfffffffeull))));
}
B597ee5:{NFSU2_TR(0x597ee5);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597ee7:{NFSU2_TR(0x597ee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597eeb:{NFSU2_TR(0x597eeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597eef:{NFSU2_TR(0x597eef);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x597650u);}[[clang::musttail]] return blk_597650(ARGS);}}
{[[clang::musttail]] return blk_597ef5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597ef5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597ef5:L597ef5:{bud-=3;NFSU2_TR(0x597ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597efc:{NFSU2_TR(0x597efc);
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
B597efe:{NFSU2_TR(0x597efe);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_59810a(ARGS);}}
}
B597f04:L597f04:{bud-=25;NFSU2_TR(0x597f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597f0b:{NFSU2_TR(0x597f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597f12:{NFSU2_TR(0x597f12);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597f19:{NFSU2_TR(0x597f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f1f:{NFSU2_TR(0x597f1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597f26:{NFSU2_TR(0x597f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f2c:{NFSU2_TR(0x597f2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597f33:{NFSU2_TR(0x597f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f39:{NFSU2_TR(0x597f39);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597f40:{NFSU2_TR(0x597f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f46:{NFSU2_TR(0x597f46);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597f4d:{NFSU2_TR(0x597f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f53:{NFSU2_TR(0x597f53);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597f5a:{NFSU2_TR(0x597f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f60:{NFSU2_TR(0x597f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B597f67:{NFSU2_TR(0x597f67);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B597f69:{NFSU2_TR(0x597f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597f70:{NFSU2_TR(0x597f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f73:{NFSU2_TR(0x597f73);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B597f7a:{NFSU2_TR(0x597f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f7d:{NFSU2_TR(0x597f7d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B597f7f:{NFSU2_TR(0x597f7f);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B597f81:{NFSU2_TR(0x597f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f87:{NFSU2_TR(0x597f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597f8d:{NFSU2_TR(0x597f8d);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_597fdb(ARGS);}}
}
B597f8f:L597f8f:{bud-=3;NFSU2_TR(0x597f8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((G+4),(U+0),4);
}
B597f92:{NFSU2_TR(0x597f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B597f98:{NFSU2_TR(0x597f98);
{[[clang::musttail]] return blk_597fa0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597fa0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597fa0:L597fa0:{bud-=18;NFSU2_TR(0x597fa0);
u8 U[16];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B597fa7:{NFSU2_TR(0x597fa7);
u8 U[16];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B597fae:{NFSU2_TR(0x597fae);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B597fb1:{NFSU2_TR(0x597fb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B597fb3:{NFSU2_TR(0x597fb3);
{u32 ea_=u32(r4(R+28)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597fb7:{NFSU2_TR(0x597fb7);
{u32 ea_=u32(r4(R+28)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B597fbb:{NFSU2_TR(0x597fbb);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+28))));
}
B597fbd:{NFSU2_TR(0x597fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+0),(U+0),4);
}
B597fbf:{NFSU2_TR(0x597fbf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B597fc1:{NFSU2_TR(0x597fc1);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B597fc4:{NFSU2_TR(0x597fc4);
{u32 ea_=u32(r4(G+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597fc7:{NFSU2_TR(0x597fc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597fce:{NFSU2_TR(0x597fce);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B597fd0:{NFSU2_TR(0x597fd0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B597fd1:{NFSU2_TR(0x597fd1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B597fd4:{NFSU2_TR(0x597fd4);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B597fd7:{NFSU2_TR(0x597fd7);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B597fd9:{NFSU2_TR(0x597fd9);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x597fa0u);}goto L597fa0;}}
{[[clang::musttail]] return blk_597fdb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597fdb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597fdb:L597fdb:{bud-=4;NFSU2_TR(0x597fdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B597fe2:{NFSU2_TR(0x597fe2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B597fe4:{NFSU2_TR(0x597fe4);
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
B597fe6:{NFSU2_TR(0x597fe6);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_59802f(ARGS);}}
}
B597fe8:L597fe8:{bud-=2;NFSU2_TR(0x597fe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B597fee:{NFSU2_TR(0x597fee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((G+4),(U+0),4);
{[[clang::musttail]] return blk_597ff1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_597ff1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B597ff1:L597ff1:{bud-=3;NFSU2_TR(0x597ff1);
u8 U[16];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B597ff8:{NFSU2_TR(0x597ff8);
u8 U[16];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B597fff:{NFSU2_TR(0x597fff);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
{EXIT(0x598002u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_597(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x597043:[[clang::musttail]] return blk_597043(c,a4,a0,a1,bud);
case 0x59707f:[[clang::musttail]] return blk_59707f(c,a4,a0,a1,bud);
case 0x5970aa:[[clang::musttail]] return blk_5970aa(c,a4,a0,a1,bud);
case 0x5970d9:[[clang::musttail]] return blk_5970d9(c,a4,a0,a1,bud);
case 0x597108:[[clang::musttail]] return blk_597108(c,a4,a0,a1,bud);
case 0x597134:[[clang::musttail]] return blk_597134(c,a4,a0,a1,bud);
case 0x59714d:[[clang::musttail]] return blk_59714d(c,a4,a0,a1,bud);
case 0x597160:[[clang::musttail]] return blk_597160(c,a4,a0,a1,bud);
case 0x59718b:[[clang::musttail]] return blk_59718b(c,a4,a0,a1,bud);
case 0x597197:[[clang::musttail]] return blk_597197(c,a4,a0,a1,bud);
case 0x59723a:[[clang::musttail]] return blk_59723a(c,a4,a0,a1,bud);
case 0x5972f9:[[clang::musttail]] return blk_5972f9(c,a4,a0,a1,bud);
case 0x5973b8:[[clang::musttail]] return blk_5973b8(c,a4,a0,a1,bud);
case 0x597583:[[clang::musttail]] return blk_597583(c,a4,a0,a1,bud);
case 0x597585:[[clang::musttail]] return blk_597585(c,a4,a0,a1,bud);
case 0x5975bc:[[clang::musttail]] return blk_5975bc(c,a4,a0,a1,bud);
case 0x5975f5:[[clang::musttail]] return blk_5975f5(c,a4,a0,a1,bud);
case 0x597626:[[clang::musttail]] return blk_597626(c,a4,a0,a1,bud);
case 0x597650:[[clang::musttail]] return blk_597650(c,a4,a0,a1,bud);
case 0x597683:[[clang::musttail]] return blk_597683(c,a4,a0,a1,bud);
case 0x5976d0:[[clang::musttail]] return blk_5976d0(c,a4,a0,a1,bud);
case 0x597763:[[clang::musttail]] return blk_597763(c,a4,a0,a1,bud);
case 0x597778:[[clang::musttail]] return blk_597778(c,a4,a0,a1,bud);
case 0x5977f2:[[clang::musttail]] return blk_5977f2(c,a4,a0,a1,bud);
case 0x59788e:[[clang::musttail]] return blk_59788e(c,a4,a0,a1,bud);
case 0x5978a8:[[clang::musttail]] return blk_5978a8(c,a4,a0,a1,bud);
case 0x59790b:[[clang::musttail]] return blk_59790b(c,a4,a0,a1,bud);
case 0x597949:[[clang::musttail]] return blk_597949(c,a4,a0,a1,bud);
case 0x597975:[[clang::musttail]] return blk_597975(c,a4,a0,a1,bud);
case 0x5979a3:[[clang::musttail]] return blk_5979a3(c,a4,a0,a1,bud);
case 0x5979d2:[[clang::musttail]] return blk_5979d2(c,a4,a0,a1,bud);
case 0x5979fe:[[clang::musttail]] return blk_5979fe(c,a4,a0,a1,bud);
case 0x597a1a:[[clang::musttail]] return blk_597a1a(c,a4,a0,a1,bud);
case 0x597a30:[[clang::musttail]] return blk_597a30(c,a4,a0,a1,bud);
case 0x597a5b:[[clang::musttail]] return blk_597a5b(c,a4,a0,a1,bud);
case 0x597a6a:[[clang::musttail]] return blk_597a6a(c,a4,a0,a1,bud);
case 0x597b0c:[[clang::musttail]] return blk_597b0c(c,a4,a0,a1,bud);
case 0x597bcb:[[clang::musttail]] return blk_597bcb(c,a4,a0,a1,bud);
case 0x597c8a:[[clang::musttail]] return blk_597c8a(c,a4,a0,a1,bud);
case 0x597e58:[[clang::musttail]] return blk_597e58(c,a4,a0,a1,bud);
case 0x597e5a:[[clang::musttail]] return blk_597e5a(c,a4,a0,a1,bud);
case 0x597e97:[[clang::musttail]] return blk_597e97(c,a4,a0,a1,bud);
case 0x597eca:[[clang::musttail]] return blk_597eca(c,a4,a0,a1,bud);
case 0x597ef5:[[clang::musttail]] return blk_597ef5(c,a4,a0,a1,bud);
case 0x597fa0:[[clang::musttail]] return blk_597fa0(c,a4,a0,a1,bud);
case 0x597fdb:[[clang::musttail]] return blk_597fdb(c,a4,a0,a1,bud);
case 0x597ff1:[[clang::musttail]] return blk_597ff1(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_597(Cpu& c){u8* R=c.regs.data();return ent_597(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
