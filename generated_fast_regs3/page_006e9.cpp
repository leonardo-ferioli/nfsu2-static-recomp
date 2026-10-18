#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e4900(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e88f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e89c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e8cd0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e8fa0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e8fb3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9048(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9066(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e90c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e90d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e916b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9189(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e91a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e91ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e921e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9222(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e925e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9262(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9264(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e92d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9369(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9389(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9390(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e93b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e94a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e94d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9503(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e960f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9613(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9642(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9697(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e96a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e96e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9757(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e975a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e976f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9792(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e97b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e97ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e97f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e97fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9801(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e980c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9818(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9819(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9832(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9843(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9847(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9856(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9859(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e98db(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e98e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9904(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e992a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e992e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9945(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e99ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e99bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e99e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e99f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9a70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9a92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9ac0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9ad0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9b59(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9b76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9bb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9bde(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9be2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9c18(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9c1c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9c1e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9c92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9d0a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9d11(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9d40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9e3f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9e71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9f78(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9f81(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9f91(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9fcc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9ff3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6ea01f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9088(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e96b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e96c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9780(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e97ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e97da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9fda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9fe6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6e9003(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9003:L6e9003:{bud-=22;NFSU2_TR(0x6e9003);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9006:{NFSU2_TR(0x6e9006);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9009:{NFSU2_TR(0x6e9009);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e900d:{NFSU2_TR(0x6e900d);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9010:{NFSU2_TR(0x6e9010);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9013:{NFSU2_TR(0x6e9013);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9016:{NFSU2_TR(0x6e9016);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B6e9018:{NFSU2_TR(0x6e9018);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e901c:{NFSU2_TR(0x6e901c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e901e:{NFSU2_TR(0x6e901e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9020:{NFSU2_TR(0x6e9020);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9022:{NFSU2_TR(0x6e9022);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9026:{NFSU2_TR(0x6e9026);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9029:{NFSU2_TR(0x6e9029);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e902d:{NFSU2_TR(0x6e902d);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9031:{NFSU2_TR(0x6e9031);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9033:{NFSU2_TR(0x6e9033);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9037:{NFSU2_TR(0x6e9037);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e903a:{NFSU2_TR(0x6e903a);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e903e:{NFSU2_TR(0x6e903e);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9042:{NFSU2_TR(0x6e9042);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9046:{NFSU2_TR(0x6e9046);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6e9048(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9048(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9048:L6e9048:{bud-=9;NFSU2_TR(0x6e9048);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e904c:{NFSU2_TR(0x6e904c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9050:{NFSU2_TR(0x6e9050);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e9051:{NFSU2_TR(0x6e9051);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x30ull))));
}
B6e9054:{NFSU2_TR(0x6e9054);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B6e9057:{NFSU2_TR(0x6e9057);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e905a:{NFSU2_TR(0x6e905a);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e905c:{NFSU2_TR(0x6e905c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9060:{NFSU2_TR(0x6e9060);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e8fb3u);}[[clang::musttail]] return blk_6e8fb3(ARGS);}}
{[[clang::musttail]] return blk_6e9066(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9066(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9066:L6e9066:{bud-=8;NFSU2_TR(0x6e9066);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e906a:{NFSU2_TR(0x6e906a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e906e:{NFSU2_TR(0x6e906e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9072:{NFSU2_TR(0x6e9072);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B6e9074:{NFSU2_TR(0x6e9074);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B6e9075:{NFSU2_TR(0x6e9075);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9079:{NFSU2_TR(0x6e9079);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e907d:{NFSU2_TR(0x6e907d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e8fa0u);}[[clang::musttail]] return blk_6e8fa0(ARGS);}}
}
B6e9083:L6e9083:{bud-=1;NFSU2_TR(0x6e9083);
{[[clang::musttail]] return blk_6e91a6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9088(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9088:L6e9088:{bud-=1;NFSU2_TR(0x6e9088);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e91a6(ARGS);}}
}
B6e908e:L6e908e:{bud-=10;NFSU2_TR(0x6e908e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9092:{NFSU2_TR(0x6e9092);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e9096:{NFSU2_TR(0x6e9096);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((G+4),(U+0),4);
}
B6e9099:{NFSU2_TR(0x6e9099);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B6e909c:{NFSU2_TR(0x6e909c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e909f:{NFSU2_TR(0x6e909f);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+24))));
}
B6e90a1:{NFSU2_TR(0x6e90a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e90a5:{NFSU2_TR(0x6e90a5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6e90a6:{NFSU2_TR(0x6e90a6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e90a8:{NFSU2_TR(0x6e90a8);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e91a6(ARGS);}}
}
B6e90ae:L6e90ae:{bud-=7;NFSU2_TR(0x6e90ae);
__builtin_memmove((R+28),(R+24),4);
}
B6e90b0:{NFSU2_TR(0x6e90b0);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x2ull))));
}
B6e90b3:{NFSU2_TR(0x6e90b3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B6e90b5:{NFSU2_TR(0x6e90b5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e90b6:{NFSU2_TR(0x6e90b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e90ba:{NFSU2_TR(0x6e90ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e90be:{NFSU2_TR(0x6e90be);
__builtin_memmove((R+28),(R+28),4);
{[[clang::musttail]] return blk_6e90c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e90c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e90c0:L6e90c0:{bud-=3;NFSU2_TR(0x6e90c0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e90c2:{NFSU2_TR(0x6e90c2);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e90c4:{NFSU2_TR(0x6e90c4);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9189(ARGS);}}
}
B6e90ca:L6e90ca:{bud-=3;NFSU2_TR(0x6e90ca);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e90cc:{NFSU2_TR(0x6e90cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e90d0:{NFSU2_TR(0x6e90d0);
__builtin_memmove((R+8),(G+4),4);
{[[clang::musttail]] return blk_6e90d2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e90d2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e90d2:L6e90d2:{bud-=9;NFSU2_TR(0x6e90d2);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(G+0,u32(r1(U+12)));
}
B6e90d7:{NFSU2_TR(0x6e90d7);
__builtin_memmove((G+4),(G+0),4);
}
B6e90d9:{NFSU2_TR(0x6e90d9);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x1full))));
}
B6e90dc:{NFSU2_TR(0x6e90dc);
w4(R+28,u32(0x1ull));
}
B6e90e1:{NFSU2_TR(0x6e90e1);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e90e3:{NFSU2_TR(0x6e90e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e90ea:{NFSU2_TR(0x6e90ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B6e90ed:{NFSU2_TR(0x6e90ed);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e90f0:{NFSU2_TR(0x6e90f0);
if(r1(F+6)){{[[clang::musttail]] return blk_6e916b(ARGS);}}
}
B6e90f2:L6e90f2:{bud-=38;NFSU2_TR(0x6e90f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e90f6:{NFSU2_TR(0x6e90f6);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e90f9:{NFSU2_TR(0x6e90f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B6e90fd:{NFSU2_TR(0x6e90fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e9101:{NFSU2_TR(0x6e9101);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9105:{NFSU2_TR(0x6e9105);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e9109:{NFSU2_TR(0x6e9109);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e910d:{NFSU2_TR(0x6e910d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9111:{NFSU2_TR(0x6e9111);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B6e9114:{NFSU2_TR(0x6e9114);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9117:{NFSU2_TR(0x6e9117);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e911a:{NFSU2_TR(0x6e911a);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e911e:{NFSU2_TR(0x6e911e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9122:{NFSU2_TR(0x6e9122);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9125:{NFSU2_TR(0x6e9125);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9128:{NFSU2_TR(0x6e9128);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e912c:{NFSU2_TR(0x6e912c);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e912f:{NFSU2_TR(0x6e912f);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9132:{NFSU2_TR(0x6e9132);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9135:{NFSU2_TR(0x6e9135);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+24))));
}
B6e9137:{NFSU2_TR(0x6e9137);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e913b:{NFSU2_TR(0x6e913b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e913d:{NFSU2_TR(0x6e913d);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e913f:{NFSU2_TR(0x6e913f);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9141:{NFSU2_TR(0x6e9141);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9145:{NFSU2_TR(0x6e9145);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9148:{NFSU2_TR(0x6e9148);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e914c:{NFSU2_TR(0x6e914c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9150:{NFSU2_TR(0x6e9150);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9152:{NFSU2_TR(0x6e9152);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9154:{NFSU2_TR(0x6e9154);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9158:{NFSU2_TR(0x6e9158);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e915b:{NFSU2_TR(0x6e915b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e915d:{NFSU2_TR(0x6e915d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9161:{NFSU2_TR(0x6e9161);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e9163:{NFSU2_TR(0x6e9163);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9165:{NFSU2_TR(0x6e9165);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9169:{NFSU2_TR(0x6e9169);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6e916b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e916b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e916b:L6e916b:{bud-=9;NFSU2_TR(0x6e916b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e916f:{NFSU2_TR(0x6e916f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9173:{NFSU2_TR(0x6e9173);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e9174:{NFSU2_TR(0x6e9174);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x30ull))));
}
B6e9177:{NFSU2_TR(0x6e9177);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B6e917a:{NFSU2_TR(0x6e917a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e917d:{NFSU2_TR(0x6e917d);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e917f:{NFSU2_TR(0x6e917f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9183:{NFSU2_TR(0x6e9183);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e90d2u);}[[clang::musttail]] return blk_6e90d2(ARGS);}}
{[[clang::musttail]] return blk_6e9189(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9189(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9189:L6e9189:{bud-=8;NFSU2_TR(0x6e9189);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e918d:{NFSU2_TR(0x6e918d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e9191:{NFSU2_TR(0x6e9191);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9195:{NFSU2_TR(0x6e9195);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+24))));
}
B6e9197:{NFSU2_TR(0x6e9197);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B6e9198:{NFSU2_TR(0x6e9198);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e919c:{NFSU2_TR(0x6e919c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e91a0:{NFSU2_TR(0x6e91a0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e90c0u);}[[clang::musttail]] return blk_6e90c0(ARGS);}}
{[[clang::musttail]] return blk_6e91a6(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e91a6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e91a6:L6e91a6:{bud-=9;NFSU2_TR(0x6e91a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e91aa:{NFSU2_TR(0x6e91aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e91ae:{NFSU2_TR(0x6e91ae);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e91b1:{NFSU2_TR(0x6e91b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e91b4:{NFSU2_TR(0x6e91b4);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e91b6:{NFSU2_TR(0x6e91b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e91b9:{NFSU2_TR(0x6e91b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e91bd:{NFSU2_TR(0x6e91bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e91c5:{NFSU2_TR(0x6e91c5);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e91ec(ARGS);}}
}
B6e91c7:L6e91c7:{bud-=6;NFSU2_TR(0x6e91c7);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e91cb:{NFSU2_TR(0x6e91cb);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e91d2:{NFSU2_TR(0x6e91d2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e91d4:{NFSU2_TR(0x6e91d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e91d6:{NFSU2_TR(0x6e91d6);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e91d9:{NFSU2_TR(0x6e91d9);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9389(ARGS);}}
}
B6e91df:L6e91df:{bud-=4;NFSU2_TR(0x6e91df);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e91e6:{NFSU2_TR(0x6e91e6);
w1(G+0,u8(0x1ull));
}
B6e91e8:{NFSU2_TR(0x6e91e8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e91ea:{NFSU2_TR(0x6e91ea);
{[[clang::musttail]] return blk_6e925e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e91ec(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e91ec:L6e91ec:{bud-=2;NFSU2_TR(0x6e91ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e91ee:{NFSU2_TR(0x6e91ee);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9222(ARGS);}}
}
B6e91f0:L6e91f0:{bud-=5;NFSU2_TR(0x6e91f0);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e91f7:{NFSU2_TR(0x6e91f7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e91fd:{NFSU2_TR(0x6e91fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e91ff:{NFSU2_TR(0x6e91ff);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e9202:{NFSU2_TR(0x6e9202);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e921e(ARGS);}}
}
B6e9204:L6e9204:{bud-=7;NFSU2_TR(0x6e9204);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+4))),2);
w4(G+4,u32(r2(U+0)));
}
B6e9207:{NFSU2_TR(0x6e9207);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e920b:{NFSU2_TR(0x6e920b);
w1(G+0,u8(0x1ull));
}
B6e920d:{NFSU2_TR(0x6e920d);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9211:{NFSU2_TR(0x6e9211);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e9218:{NFSU2_TR(0x6e9218);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e921c:{NFSU2_TR(0x6e921c);
{[[clang::musttail]] return blk_6e9264(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e921e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e921e:L6e921e:{bud-=2;NFSU2_TR(0x6e921e);
w1(G+0,u8(u32(r1(G+0))^u32(r1(G+0))));
}
B6e9220:{NFSU2_TR(0x6e9220);
{[[clang::musttail]] return blk_6e9264(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9222(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9222:L6e9222:{bud-=8;NFSU2_TR(0x6e9222);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(G+0,u32(r2(U+12)));
}
B6e9227:{NFSU2_TR(0x6e9227);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e922b:{NFSU2_TR(0x6e922b);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e922f:{NFSU2_TR(0x6e922f);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9236:{NFSU2_TR(0x6e9236);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e9238:{NFSU2_TR(0x6e9238);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e923a:{NFSU2_TR(0x6e923a);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e923d:{NFSU2_TR(0x6e923d);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9389(ARGS);}}
}
B6e9243:L6e9243:{bud-=8;NFSU2_TR(0x6e9243);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(G+4,u32(r2(U+8)));
}
B6e9247:{NFSU2_TR(0x6e9247);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e924e:{NFSU2_TR(0x6e924e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9250:{NFSU2_TR(0x6e9250);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9254:{NFSU2_TR(0x6e9254);
w1(G+0,u8(0x1ull));
}
B6e9256:{NFSU2_TR(0x6e9256);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e925a:{NFSU2_TR(0x6e925a);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e925c:{NFSU2_TR(0x6e925c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
{[[clang::musttail]] return blk_6e925e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e925e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e925e:L6e925e:{bud-=1;NFSU2_TR(0x6e925e);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6e9262(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9262(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9262:L6e9262:{bud-=1;NFSU2_TR(0x6e9262);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_6e9264(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9264(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9264:L6e9264:{bud-=3;NFSU2_TR(0x6e9264);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6e9266:{NFSU2_TR(0x6e9266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e9269:{NFSU2_TR(0x6e9269);
if(r1(F+6)){{[[clang::musttail]] return blk_6e9642(ARGS);}}
}
B6e926f:L6e926f:{bud-=4;NFSU2_TR(0x6e926f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9273:{NFSU2_TR(0x6e9273);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B6e9274:{NFSU2_TR(0x6e9274);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9276:{NFSU2_TR(0x6e9276);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9642(ARGS);}}
}
B6e927c:L6e927c:{bud-=19;NFSU2_TR(0x6e927c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9280:{NFSU2_TR(0x6e9280);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e9284:{NFSU2_TR(0x6e9284);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B6e9286:{NFSU2_TR(0x6e9286);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B6e9289:{NFSU2_TR(0x6e9289);
w4(G+0,u32(0x1ull));
}
B6e928e:{NFSU2_TR(0x6e928e);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r1(U+0))));
}
B6e9290:{NFSU2_TR(0x6e9290);
__builtin_memmove((R+12),(R+20),4);
}
B6e9292:{NFSU2_TR(0x6e9292);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6e9293:{NFSU2_TR(0x6e9293);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e9296:{NFSU2_TR(0x6e9296);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B6e929a:{NFSU2_TR(0x6e929a);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0xfffffffeull))));
}
B6e929d:{NFSU2_TR(0x6e929d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B6e92a0:{NFSU2_TR(0x6e92a0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+4))));
}
B6e92a2:{NFSU2_TR(0x6e92a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B6e92a5:{NFSU2_TR(0x6e92a5);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B6e92a9:{NFSU2_TR(0x6e92a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e92ad:{NFSU2_TR(0x6e92ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e92b1:{NFSU2_TR(0x6e92b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e92b4:{NFSU2_TR(0x6e92b4);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9390(ARGS);}}
}
B6e92ba:L6e92ba:{bud-=4;NFSU2_TR(0x6e92ba);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B6e92bc:{NFSU2_TR(0x6e92bc);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e92be:{NFSU2_TR(0x6e92be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e92c2:{NFSU2_TR(0x6e92c2);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e96a3(ARGS);}}
}
B6e92c8:L6e92c8:{bud-=2;NFSU2_TR(0x6e92c8);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B6e92ca:{NFSU2_TR(0x6e92ca);
__builtin_memmove((R+12),(R+12),4);
{[[clang::musttail]] return blk_6e92d0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e92d0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e92d0:L6e92d0:{bud-=9;NFSU2_TR(0x6e92d0);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B6e92d5:{NFSU2_TR(0x6e92d5);
__builtin_memmove((G+4),(R+8),4);
}
B6e92d7:{NFSU2_TR(0x6e92d7);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x1full))));
}
B6e92da:{NFSU2_TR(0x6e92da);
w4(R+28,u32(0x1ull));
}
B6e92df:{NFSU2_TR(0x6e92df);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e92e1:{NFSU2_TR(0x6e92e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e92e8:{NFSU2_TR(0x6e92e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6e92eb:{NFSU2_TR(0x6e92eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e92ee:{NFSU2_TR(0x6e92ee);
if(r1(F+6)){{[[clang::musttail]] return blk_6e9369(ARGS);}}
}
B6e92f0:L6e92f0:{bud-=33;NFSU2_TR(0x6e92f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e92f3:{NFSU2_TR(0x6e92f3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B6e92f6:{NFSU2_TR(0x6e92f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e92f9:{NFSU2_TR(0x6e92f9);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e92fc:{NFSU2_TR(0x6e92fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9303:{NFSU2_TR(0x6e9303);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9305:{NFSU2_TR(0x6e9305);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9309:{NFSU2_TR(0x6e9309);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e930b:{NFSU2_TR(0x6e930b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+4,u32(r2(U+0)));
}
B6e930e:{NFSU2_TR(0x6e930e);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9311:{NFSU2_TR(0x6e9311);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9315:{NFSU2_TR(0x6e9315);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9318:{NFSU2_TR(0x6e9318);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e931b:{NFSU2_TR(0x6e931b);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e931f:{NFSU2_TR(0x6e931f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9326:{NFSU2_TR(0x6e9326);
{u32 ea_=u32(r4(G+0)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e932a:{NFSU2_TR(0x6e932a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B6e932e:{NFSU2_TR(0x6e932e);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9332:{NFSU2_TR(0x6e9332);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9334:{NFSU2_TR(0x6e9334);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+4,u32(r2(U+0)));
}
B6e9337:{NFSU2_TR(0x6e9337);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e933b:{NFSU2_TR(0x6e933b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e933f:{NFSU2_TR(0x6e933f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9342:{NFSU2_TR(0x6e9342);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9345:{NFSU2_TR(0x6e9345);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9349:{NFSU2_TR(0x6e9349);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9350:{NFSU2_TR(0x6e9350);
{u32 ea_=u32(r4(G+0)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9354:{NFSU2_TR(0x6e9354);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B6e9358:{NFSU2_TR(0x6e9358);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e935c:{NFSU2_TR(0x6e935c);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e935e:{NFSU2_TR(0x6e935e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+4,u32(r2(U+0)));
}
B6e9361:{NFSU2_TR(0x6e9361);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9365:{NFSU2_TR(0x6e9365);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_6e9369(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9369(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9369:L6e9369:{bud-=8;NFSU2_TR(0x6e9369);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e936d:{NFSU2_TR(0x6e936d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e9371:{NFSU2_TR(0x6e9371);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e9374:{NFSU2_TR(0x6e9374);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6e9375:{NFSU2_TR(0x6e9375);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B6e9378:{NFSU2_TR(0x6e9378);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e937a:{NFSU2_TR(0x6e937a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e937e:{NFSU2_TR(0x6e937e);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e92d0u);}[[clang::musttail]] return blk_6e92d0(ARGS);}}
}
B6e9384:L6e9384:{bud-=1;NFSU2_TR(0x6e9384);
{[[clang::musttail]] return blk_6e96a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9389(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9389:L6e9389:{bud-=2;NFSU2_TR(0x6e9389);
w1(G+0,u8(u32(r1(G+0))^u32(r1(G+0))));
}
B6e938b:{NFSU2_TR(0x6e938b);
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9262u);}[[clang::musttail]] return blk_6e9262(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9390(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9390:L6e9390:{bud-=2;NFSU2_TR(0x6e9390);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e9394:{NFSU2_TR(0x6e9394);
if(r1(F+6)){{[[clang::musttail]] return blk_6e94d7(ARGS);}}
}
B6e939a:L6e939a:{bud-=4;NFSU2_TR(0x6e939a);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B6e939c:{NFSU2_TR(0x6e939c);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e939e:{NFSU2_TR(0x6e939e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e93a2:{NFSU2_TR(0x6e93a2);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e96a3(ARGS);}}
}
B6e93a8:L6e93a8:{bud-=3;NFSU2_TR(0x6e93a8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e93aa:{NFSU2_TR(0x6e93aa);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e93ad:{NFSU2_TR(0x6e93ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6e93b1(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e93b1(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e93b1:L6e93b1:{bud-=9;NFSU2_TR(0x6e93b1);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(G+0,u32(r1(U+12)));
}
B6e93b6:{NFSU2_TR(0x6e93b6);
__builtin_memmove((G+4),(G+0),4);
}
B6e93b8:{NFSU2_TR(0x6e93b8);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x1full))));
}
B6e93bb:{NFSU2_TR(0x6e93bb);
w4(R+20,u32(0x1ull));
}
B6e93c0:{NFSU2_TR(0x6e93c0);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e93c2:{NFSU2_TR(0x6e93c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e93c9:{NFSU2_TR(0x6e93c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B6e93cc:{NFSU2_TR(0x6e93cc);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e93cf:{NFSU2_TR(0x6e93cf);
if(r1(F+6)){{[[clang::musttail]] return blk_6e94a5(ARGS);}}
}
B6e93d5:L6e93d5:{bud-=59;NFSU2_TR(0x6e93d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e93d8:{NFSU2_TR(0x6e93d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e93db:{NFSU2_TR(0x6e93db);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(U+4))));
}
B6e93df:{NFSU2_TR(0x6e93df);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e93e3:{NFSU2_TR(0x6e93e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e93e7:{NFSU2_TR(0x6e93e7);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B6e93e9:{NFSU2_TR(0x6e93e9);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e93ed:{NFSU2_TR(0x6e93ed);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e93f0:{NFSU2_TR(0x6e93f0);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e93f2:{NFSU2_TR(0x6e93f2);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e93f4:{NFSU2_TR(0x6e93f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e93f8:{NFSU2_TR(0x6e93f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e93fc:{NFSU2_TR(0x6e93fc);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9400:{NFSU2_TR(0x6e9400);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9403:{NFSU2_TR(0x6e9403);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9406:{NFSU2_TR(0x6e9406);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9409:{NFSU2_TR(0x6e9409);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+12,u32(r2(U+0)));
}
B6e940c:{NFSU2_TR(0x6e940c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9410:{NFSU2_TR(0x6e9410);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9414:{NFSU2_TR(0x6e9414);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9417:{NFSU2_TR(0x6e9417);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e941a:{NFSU2_TR(0x6e941a);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e941d:{NFSU2_TR(0x6e941d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9421:{NFSU2_TR(0x6e9421);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9425:{NFSU2_TR(0x6e9425);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9428:{NFSU2_TR(0x6e9428);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e942c:{NFSU2_TR(0x6e942c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e942f:{NFSU2_TR(0x6e942f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9432:{NFSU2_TR(0x6e9432);
{u32 ea_=u32(r4(R+8)+r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9435:{NFSU2_TR(0x6e9435);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e943c:{NFSU2_TR(0x6e943c);
{u32 ea_=u32(r4(R+8)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e943f:{NFSU2_TR(0x6e943f);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B6e9441:{NFSU2_TR(0x6e9441);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9445:{NFSU2_TR(0x6e9445);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9447:{NFSU2_TR(0x6e9447);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+0,u32(r2(U+0)));
}
B6e944a:{NFSU2_TR(0x6e944a);
{u32 ea_=u32((r4(G+0)*4u)+r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e944d:{NFSU2_TR(0x6e944d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9451:{NFSU2_TR(0x6e9451);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9454:{NFSU2_TR(0x6e9454);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9457:{NFSU2_TR(0x6e9457);
{u32 ea_=u32(r4(R+8)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e945b:{NFSU2_TR(0x6e945b);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9462:{NFSU2_TR(0x6e9462);
{u32 ea_=u32(r4(R+8)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9466:{NFSU2_TR(0x6e9466);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e946a:{NFSU2_TR(0x6e946a);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e946e:{NFSU2_TR(0x6e946e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9470:{NFSU2_TR(0x6e9470);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+0,u32(r2(U+0)));
}
B6e9473:{NFSU2_TR(0x6e9473);
{u32 ea_=u32((r4(G+0)*4u)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9477:{NFSU2_TR(0x6e9477);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e947b:{NFSU2_TR(0x6e947b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e947e:{NFSU2_TR(0x6e947e);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9481:{NFSU2_TR(0x6e9481);
{u32 ea_=u32(r4(R+8)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9485:{NFSU2_TR(0x6e9485);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e948c:{NFSU2_TR(0x6e948c);
{u32 ea_=u32(r4(R+8)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9490:{NFSU2_TR(0x6e9490);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9494:{NFSU2_TR(0x6e9494);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9498:{NFSU2_TR(0x6e9498);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e949a:{NFSU2_TR(0x6e949a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+0,u32(r2(U+0)));
}
B6e949d:{NFSU2_TR(0x6e949d);
{u32 ea_=u32((r4(G+0)*4u)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e94a1:{NFSU2_TR(0x6e94a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_6e94a5(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e94a5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e94a5:L6e94a5:{bud-=13;NFSU2_TR(0x6e94a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e94a9:{NFSU2_TR(0x6e94a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e94ad:{NFSU2_TR(0x6e94ad);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B6e94b0:{NFSU2_TR(0x6e94b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e94b4:{NFSU2_TR(0x6e94b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e94b8:{NFSU2_TR(0x6e94b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e94bc:{NFSU2_TR(0x6e94bc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e94bf:{NFSU2_TR(0x6e94bf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x6ull))));
}
B6e94c2:{NFSU2_TR(0x6e94c2);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6e94c3:{NFSU2_TR(0x6e94c3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6e94c6:{NFSU2_TR(0x6e94c6);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e94c8:{NFSU2_TR(0x6e94c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e94cc:{NFSU2_TR(0x6e94cc);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e93b1u);}[[clang::musttail]] return blk_6e93b1(ARGS);}}
}
B6e94d2:L6e94d2:{bud-=1;NFSU2_TR(0x6e94d2);
{[[clang::musttail]] return blk_6e96a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e94d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e94d7:L6e94d7:{bud-=10;NFSU2_TR(0x6e94d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e94db:{NFSU2_TR(0x6e94db);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x2ull))));
}
B6e94de:{NFSU2_TR(0x6e94de);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e94e1:{NFSU2_TR(0x6e94e1);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B6e94e4:{NFSU2_TR(0x6e94e4);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B6e94e6:{NFSU2_TR(0x6e94e6);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B6e94e8:{NFSU2_TR(0x6e94e8);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e94ea:{NFSU2_TR(0x6e94ea);
__builtin_memmove((R+28),(G+0),4);
}
B6e94ec:{NFSU2_TR(0x6e94ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e94f0:{NFSU2_TR(0x6e94f0);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e96a3(ARGS);}}
}
B6e94f6:L6e94f6:{bud-=4;NFSU2_TR(0x6e94f6);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B6e94f8:{NFSU2_TR(0x6e94f8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B6e94fb:{NFSU2_TR(0x6e94fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e94ff:{NFSU2_TR(0x6e94ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6e9503(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9503(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9503:L6e9503:{bud-=9;NFSU2_TR(0x6e9503);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B6e9508:{NFSU2_TR(0x6e9508);
__builtin_memmove((G+4),(R+8),4);
}
B6e950a:{NFSU2_TR(0x6e950a);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x1full))));
}
B6e950d:{NFSU2_TR(0x6e950d);
w4(R+28,u32(0x1ull));
}
B6e9512:{NFSU2_TR(0x6e9512);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e9514:{NFSU2_TR(0x6e9514);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e951b:{NFSU2_TR(0x6e951b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6e951e:{NFSU2_TR(0x6e951e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e9521:{NFSU2_TR(0x6e9521);
if(r1(F+6)){{[[clang::musttail]] return blk_6e960f(ARGS);}}
}
B6e9527:L6e9527:{bud-=64;NFSU2_TR(0x6e9527);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e952a:{NFSU2_TR(0x6e952a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B6e952e:{NFSU2_TR(0x6e952e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9532:{NFSU2_TR(0x6e9532);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e9536:{NFSU2_TR(0x6e9536);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e953a:{NFSU2_TR(0x6e953a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e953e:{NFSU2_TR(0x6e953e);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9542:{NFSU2_TR(0x6e9542);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9546:{NFSU2_TR(0x6e9546);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B6e9549:{NFSU2_TR(0x6e9549);
{u32 ea_=u32(r4(G+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e954c:{NFSU2_TR(0x6e954c);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e954f:{NFSU2_TR(0x6e954f);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9553:{NFSU2_TR(0x6e9553);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9557:{NFSU2_TR(0x6e9557);
{u32 ea_=u32(r4(G+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e955a:{NFSU2_TR(0x6e955a);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e955d:{NFSU2_TR(0x6e955d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9561:{NFSU2_TR(0x6e9561);
{u32 ea_=u32(r4(G+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9564:{NFSU2_TR(0x6e9564);
{u32 ea_=u32(r4(G+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9567:{NFSU2_TR(0x6e9567);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e956b:{NFSU2_TR(0x6e956b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e956e:{NFSU2_TR(0x6e956e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9572:{NFSU2_TR(0x6e9572);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9576:{NFSU2_TR(0x6e9576);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e9579:{NFSU2_TR(0x6e9579);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6e957b:{NFSU2_TR(0x6e957b);
{u32 ea_=u32(r4(G+0)+r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e957e:{NFSU2_TR(0x6e957e);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9581:{NFSU2_TR(0x6e9581);
{u32 ea_=u32(r4(G+4)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9584:{NFSU2_TR(0x6e9584);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9588:{NFSU2_TR(0x6e9588);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e958b:{NFSU2_TR(0x6e958b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e958e:{NFSU2_TR(0x6e958e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6e9590:{NFSU2_TR(0x6e9590);
{u32 ea_=u32(r4(G+0)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9594:{NFSU2_TR(0x6e9594);
{u32 ea_=u32(r4(G+0)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9598:{NFSU2_TR(0x6e9598);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e959c:{NFSU2_TR(0x6e959c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e959f:{NFSU2_TR(0x6e959f);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e95a3:{NFSU2_TR(0x6e95a3);
{u32 ea_=u32(r4(G+0)+r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e95a7:{NFSU2_TR(0x6e95a7);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e95aa:{NFSU2_TR(0x6e95aa);
{u32 ea_=u32(r4(G+0)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e95ae:{NFSU2_TR(0x6e95ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e95b2:{NFSU2_TR(0x6e95b2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e95b5:{NFSU2_TR(0x6e95b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e95b7:{NFSU2_TR(0x6e95b7);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e95bb:{NFSU2_TR(0x6e95bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e95c2:{NFSU2_TR(0x6e95c2);
{u32 ea_=u32(r4(G+0)+r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e95c5:{NFSU2_TR(0x6e95c5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+4,u32(r2(U+0)));
}
B6e95c8:{NFSU2_TR(0x6e95c8);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e95cb:{NFSU2_TR(0x6e95cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e95cf:{NFSU2_TR(0x6e95cf);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e95d2:{NFSU2_TR(0x6e95d2);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e95d6:{NFSU2_TR(0x6e95d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e95dd:{NFSU2_TR(0x6e95dd);
{u32 ea_=u32(r4(G+0)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e95e1:{NFSU2_TR(0x6e95e1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+4,u32(r2(U+0)));
}
B6e95e4:{NFSU2_TR(0x6e95e4);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e95e8:{NFSU2_TR(0x6e95e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e95ec:{NFSU2_TR(0x6e95ec);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e95f0:{NFSU2_TR(0x6e95f0);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e95f3:{NFSU2_TR(0x6e95f3);
{u32 ea_=u32(r4(G+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e95f7:{NFSU2_TR(0x6e95f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e95fe:{NFSU2_TR(0x6e95fe);
{u32 ea_=u32(r4(G+0)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9602:{NFSU2_TR(0x6e9602);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+4,u32(r2(U+0)));
}
B6e9605:{NFSU2_TR(0x6e9605);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9609:{NFSU2_TR(0x6e9609);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e960d:{NFSU2_TR(0x6e960d);
{[[clang::musttail]] return blk_6e9613(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e960f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e960f:L6e960f:{bud-=1;NFSU2_TR(0x6e960f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_6e9613(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9613(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9613:L6e9613:{bud-=13;NFSU2_TR(0x6e9613);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9617:{NFSU2_TR(0x6e9617);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e961b:{NFSU2_TR(0x6e961b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B6e961e:{NFSU2_TR(0x6e961e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9622:{NFSU2_TR(0x6e9622);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e9626:{NFSU2_TR(0x6e9626);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e9629:{NFSU2_TR(0x6e9629);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6e962a:{NFSU2_TR(0x6e962a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B6e962d:{NFSU2_TR(0x6e962d);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B6e9630:{NFSU2_TR(0x6e9630);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9632:{NFSU2_TR(0x6e9632);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9636:{NFSU2_TR(0x6e9636);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e963a:{NFSU2_TR(0x6e963a);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9503u);}[[clang::musttail]] return blk_6e9503(ARGS);}}
}
B6e9640:L6e9640:{bud-=1;NFSU2_TR(0x6e9640);
{[[clang::musttail]] return blk_6e96a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9642(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9642:L6e9642:{bud-=3;NFSU2_TR(0x6e9642);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e9644:{NFSU2_TR(0x6e9644);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(F+0,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(F+6,u8((r2(U+8))==(u16(0x0ull))));
}
B6e9648:{NFSU2_TR(0x6e9648);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e96a3(ARGS);}}
}
B6e964a:L6e964a:{bud-=2;NFSU2_TR(0x6e964a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e964c:{NFSU2_TR(0x6e964c);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_6e9650(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9650(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9650:L6e9650:{bud-=9;NFSU2_TR(0x6e9650);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(G+0,u32(r1(U+12)));
}
B6e9655:{NFSU2_TR(0x6e9655);
__builtin_memmove((G+4),(G+0),4);
}
B6e9657:{NFSU2_TR(0x6e9657);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x1full))));
}
B6e965a:{NFSU2_TR(0x6e965a);
w4(R+12,u32(0x1ull));
}
B6e965f:{NFSU2_TR(0x6e965f);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6e9661:{NFSU2_TR(0x6e9661);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9668:{NFSU2_TR(0x6e9668);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B6e966b:{NFSU2_TR(0x6e966b);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e966e:{NFSU2_TR(0x6e966e);
if(r1(F+6)){{[[clang::musttail]] return blk_6e9697(ARGS);}}
}
B6e9670:L6e9670:{bud-=12;NFSU2_TR(0x6e9670);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9674:{NFSU2_TR(0x6e9674);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9677:{NFSU2_TR(0x6e9677);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(G+0,u32(r2(U+8)));
}
B6e967b:{NFSU2_TR(0x6e967b);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9682:{NFSU2_TR(0x6e9682);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+28))));
}
B6e9684:{NFSU2_TR(0x6e9684);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B6e9687:{NFSU2_TR(0x6e9687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e9689:{NFSU2_TR(0x6e9689);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(G+0)),r4(U+0));
}
B6e968b:{NFSU2_TR(0x6e968b);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e968e:{NFSU2_TR(0x6e968e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9691:{NFSU2_TR(0x6e9691);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9694:{NFSU2_TR(0x6e9694);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6e9697(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9697(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9697:L6e9697:{bud-=5;NFSU2_TR(0x6e9697);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e969b:{NFSU2_TR(0x6e969b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e969c:{NFSU2_TR(0x6e969c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e969f:{NFSU2_TR(0x6e969f);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e96a1:{NFSU2_TR(0x6e96a1);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9650u);}[[clang::musttail]] return blk_6e9650(ARGS);}}
{[[clang::musttail]] return blk_6e96a3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e96a3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e96a3:L6e96a3:{bud-=3;NFSU2_TR(0x6e96a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6e96a6:{NFSU2_TR(0x6e96a6);
u8 U[1];
w1(F+0,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6e96a8:{NFSU2_TR(0x6e96a8);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e976f(ARGS);}}
}
B6e96ae:L6e96ae:{bud-=2;NFSU2_TR(0x6e96ae);
__builtin_memmove((G+4),(R+20),4);
}
B6e96b0:{NFSU2_TR(0x6e96b0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e96b5ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e88f0u);}[[clang::musttail]] return blk_6e88f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e96b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e96b5:L6e96b5:{bud-=4;NFSU2_TR(0x6e96b5);
__builtin_memmove((G+4),(R+20),4);
}
B6e96b7:{NFSU2_TR(0x6e96b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e96bb:{NFSU2_TR(0x6e96bb);
w4(R+28,u32(r1(R+12)));
}
B6e96be:{NFSU2_TR(0x6e96be);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e96c3ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e88f0u);}[[clang::musttail]] return blk_6e88f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e96c3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e96c3:L6e96c3:{bud-=5;NFSU2_TR(0x6e96c3);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6e96c7:{NFSU2_TR(0x6e96c7);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffffcull))));
}
B6e96ca:{NFSU2_TR(0x6e96ca);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e96cc:{NFSU2_TR(0x6e96cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e96d4:{NFSU2_TR(0x6e96d4);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e976f(ARGS);}}
}
B6e96da:L6e96da:{bud-=1;NFSU2_TR(0x6e96da);
__builtin_memmove((R+12),(R+12),4);
{[[clang::musttail]] return blk_6e96e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e96e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e96e0:L6e96e0:{bud-=20;NFSU2_TR(0x6e96e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e96e4:{NFSU2_TR(0x6e96e4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+0))),2);
__builtin_memmove((R+28),(U+0),2);
}
B6e96e7:{NFSU2_TR(0x6e96e7);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x2ull))));
}
B6e96ea:{NFSU2_TR(0x6e96ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e96ee:{NFSU2_TR(0x6e96ee);
w4(R+12,u32(r2(R+28)));
}
B6e96f1:{NFSU2_TR(0x6e96f1);
w4(G+0,u32(0x2aaaaaabull));
}
B6e96f6:{NFSU2_TR(0x6e96f6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(G+0,u32(r8(U+16)));
}
B6e96f8:{NFSU2_TR(0x6e96f8);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6e96fa:{NFSU2_TR(0x6e96fa);
__builtin_memmove((G+4),(R+8),4);
}
B6e96fc:{NFSU2_TR(0x6e96fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(G+4,shr<u32>(r4(G+4),u64(r4(U+0))));
}
B6e96ff:{NFSU2_TR(0x6e96ff);
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+4))));
}
B6e9701:{NFSU2_TR(0x6e9701);
w4(G+0,u32(r2(R+8)));
}
B6e9704:{NFSU2_TR(0x6e9704);
__builtin_memmove((G+4),(G+0),4);
}
B6e9706:{NFSU2_TR(0x6e9706);
w4(G+4,u32(u32(r4(G+4))&u32(u32(0x1full))));
}
B6e9709:{NFSU2_TR(0x6e9709);
w4(R+8,u32(0x1ull));
}
B6e970e:{NFSU2_TR(0x6e970e);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e9710:{NFSU2_TR(0x6e9710);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9717:{NFSU2_TR(0x6e9717);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r4(U+0))));
}
B6e971a:{NFSU2_TR(0x6e971a);
u8 U[16];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e971d:{NFSU2_TR(0x6e971d);
if(r1(F+6)){{[[clang::musttail]] return blk_6e9757(ARGS);}}
}
B6e971f:L6e971f:{bud-=17;NFSU2_TR(0x6e971f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e9721:{NFSU2_TR(0x6e9721);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9728:{NFSU2_TR(0x6e9728);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e972b:{NFSU2_TR(0x6e972b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e972e:{NFSU2_TR(0x6e972e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9735:{NFSU2_TR(0x6e9735);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e9736:{NFSU2_TR(0x6e9736);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e9739:{NFSU2_TR(0x6e9739);
w4(G+4,u32(r2(R+28)));
}
B6e973c:{NFSU2_TR(0x6e973c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e973f:{NFSU2_TR(0x6e973f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e9742:{NFSU2_TR(0x6e9742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e9744:{NFSU2_TR(0x6e9744);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e974b:{NFSU2_TR(0x6e974b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e974c:{NFSU2_TR(0x6e974c);
w4(G+4,u32(r2(R+28)));
}
B6e974f:{NFSU2_TR(0x6e974f);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e9752:{NFSU2_TR(0x6e9752);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6e9755:{NFSU2_TR(0x6e9755);
{[[clang::musttail]] return blk_6e975a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9757(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9757:L6e9757:{bud-=1;NFSU2_TR(0x6e9757);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
{[[clang::musttail]] return blk_6e975a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e975a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e975a:L6e975a:{bud-=6;NFSU2_TR(0x6e975a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e975e:{NFSU2_TR(0x6e975e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B6e9762:{NFSU2_TR(0x6e9762);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6e9763:{NFSU2_TR(0x6e9763);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9765:{NFSU2_TR(0x6e9765);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9769:{NFSU2_TR(0x6e9769);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e96e0u);}[[clang::musttail]] return blk_6e96e0(ARGS);}}
{[[clang::musttail]] return blk_6e976f(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e976f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e976f:L6e976f:{bud-=7;NFSU2_TR(0x6e976f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e9770:{NFSU2_TR(0x6e9770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e9771:{NFSU2_TR(0x6e9771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e9772:{NFSU2_TR(0x6e9772);
w1(G+0,u8(0x1ull));
}
B6e9774:{NFSU2_TR(0x6e9774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e9775:{NFSU2_TR(0x6e9775);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x90ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x90ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x90ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e977b:{NFSU2_TR(0x6e977b);
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
PN u32 blk_6e9780(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9780:L6e9780:{bud-=6;NFSU2_TR(0x6e9780);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x30ull))));
}
B6e9783:{NFSU2_TR(0x6e9783);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e9784:{NFSU2_TR(0x6e9784);
__builtin_memmove((R+24),(G+4),4);
}
B6e9786:{NFSU2_TR(0x6e9786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9789:{NFSU2_TR(0x6e9789);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e978b:{NFSU2_TR(0x6e978b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9792(ARGS);}}
}
B6e978d:L6e978d:{bud-=1;NFSU2_TR(0x6e978d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e9792ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e89c0u);}[[clang::musttail]] return blk_6e89c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9792(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9792:L6e9792:{bud-=3;NFSU2_TR(0x6e9792);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9796:{NFSU2_TR(0x6e9796);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9798:{NFSU2_TR(0x6e9798);
if(r1(F+6)){{[[clang::musttail]] return blk_6e97b3(ARGS);}}
}
B6e979a:L6e979a:{bud-=7;NFSU2_TR(0x6e979a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e979e:{NFSU2_TR(0x6e979e);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e979f:{NFSU2_TR(0x6e979f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e97a3:{NFSU2_TR(0x6e97a3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e97a4:{NFSU2_TR(0x6e97a4);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e97a5:{NFSU2_TR(0x6e97a5);
__builtin_memmove((G+4),(R+24),4);
}
B6e97a7:{NFSU2_TR(0x6e97a7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e97acull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e8cd0u);}[[clang::musttail]] return blk_6e8cd0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e97ac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e97ac:L6e97ac:{bud-=3;NFSU2_TR(0x6e97ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e97ad:{NFSU2_TR(0x6e97ad);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x30ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x30ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6e97b0:{NFSU2_TR(0x6e97b0);
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
PN u32 blk_6e97b3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e97b3:L6e97b3:{bud-=4;NFSU2_TR(0x6e97b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e97b6:{NFSU2_TR(0x6e97b6);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0xffffffffull))));
}
B6e97b9:{NFSU2_TR(0x6e97b9);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e97bb:{NFSU2_TR(0x6e97bb);
if(r1(F+6)){{[[clang::musttail]] return blk_6e97ca(ARGS);}}
}
B6e97bd:L6e97bd:{bud-=3;NFSU2_TR(0x6e97bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e97c0:{NFSU2_TR(0x6e97c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e97c3:{NFSU2_TR(0x6e97c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6e97ca(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e97ca(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e97ca:L6e97ca:{bud-=7;NFSU2_TR(0x6e97ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e97ce:{NFSU2_TR(0x6e97ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e97cf:{NFSU2_TR(0x6e97cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e97d0:{NFSU2_TR(0x6e97d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e97d1:{NFSU2_TR(0x6e97d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e97d4:{NFSU2_TR(0x6e97d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6e97d5:{NFSU2_TR(0x6e97d5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e97daull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e4900u);}[[clang::musttail]] return blk_6e4900(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e97da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e97da:L6e97da:{bud-=5;NFSU2_TR(0x6e97da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e97dd:{NFSU2_TR(0x6e97dd);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B6e97e0:{NFSU2_TR(0x6e97e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e97e2:{NFSU2_TR(0x6e97e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e97e6:{NFSU2_TR(0x6e97e6);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9801(ARGS);}}
}
B6e97e8:L6e97e8:{bud-=2;NFSU2_TR(0x6e97e8);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e97ea:{NFSU2_TR(0x6e97ea);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e97f0(ARGS);}}
}
B6e97ec:L6e97ec:{bud-=2;NFSU2_TR(0x6e97ec);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e97ee:{NFSU2_TR(0x6e97ee);
{[[clang::musttail]] return blk_6e9859(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e97f0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e97f0:L6e97f0:{bud-=3;NFSU2_TR(0x6e97f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e97f4:{NFSU2_TR(0x6e97f4);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e97f6:{NFSU2_TR(0x6e97f6);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e97fd(ARGS);}}
}
B6e97f8:L6e97f8:{bud-=2;NFSU2_TR(0x6e97f8);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e97fb:{NFSU2_TR(0x6e97fb);
{[[clang::musttail]] return blk_6e9859(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e97fd(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e97fd:L6e97fd:{bud-=2;NFSU2_TR(0x6e97fd);
__builtin_memmove((R+8),(G+0),4);
}
B6e97ff:{NFSU2_TR(0x6e97ff);
{[[clang::musttail]] return blk_6e9859(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9801(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9801:L6e9801:{bud-=3;NFSU2_TR(0x6e9801);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(G+4,u32(r2(U+0)));
}
B6e9804:{NFSU2_TR(0x6e9804);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9806:{NFSU2_TR(0x6e9806);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e980c(ARGS);}}
}
B6e9808:L6e9808:{bud-=2;NFSU2_TR(0x6e9808);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e980a:{NFSU2_TR(0x6e980a);
{[[clang::musttail]] return blk_6e9859(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e980c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e980c:L6e980c:{bud-=3;NFSU2_TR(0x6e980c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e980f:{NFSU2_TR(0x6e980f);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9812:{NFSU2_TR(0x6e9812);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9818(ARGS);}}
}
B6e9814:L6e9814:{bud-=2;NFSU2_TR(0x6e9814);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B6e9816:{NFSU2_TR(0x6e9816);
{[[clang::musttail]] return blk_6e9819(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9818(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9818:L6e9818:{bud-=1;NFSU2_TR(0x6e9818);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
{[[clang::musttail]] return blk_6e9819(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9819(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9819:L6e9819:{bud-=4;NFSU2_TR(0x6e9819);
u8 U[10];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e981d:{NFSU2_TR(0x6e981d);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e981f:{NFSU2_TR(0x6e981f);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e9822:{NFSU2_TR(0x6e9822);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6e9843(ARGS);}}
}
B6e9824:L6e9824:{bud-=4;NFSU2_TR(0x6e9824);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e9828:{NFSU2_TR(0x6e9828);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e982b:{NFSU2_TR(0x6e982b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e982d:{NFSU2_TR(0x6e982d);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9856(ARGS);}}
}
B6e982f:L6e982f:{bud-=1;NFSU2_TR(0x6e982f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
{[[clang::musttail]] return blk_6e9832(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9832(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9832:L6e9832:{bud-=3;NFSU2_TR(0x6e9832);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(r2(U+0)));
}
B6e9835:{NFSU2_TR(0x6e9835);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9837:{NFSU2_TR(0x6e9837);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{[[clang::musttail]] return blk_6e9856(ARGS);}}
}
B6e9839:L6e9839:{bud-=4;NFSU2_TR(0x6e9839);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6e983a:{NFSU2_TR(0x6e983a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B6e983d:{NFSU2_TR(0x6e983d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e983f:{NFSU2_TR(0x6e983f);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9832u);}goto L6e9832;}}
}
B6e9841:L6e9841:{bud-=1;NFSU2_TR(0x6e9841);
{[[clang::musttail]] return blk_6e9856(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9843(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9843:L6e9843:{bud-=2;NFSU2_TR(0x6e9843);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9845:{NFSU2_TR(0x6e9845);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9856(ARGS);}}
{[[clang::musttail]] return blk_6e9847(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9847(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9847:L6e9847:{bud-=3;NFSU2_TR(0x6e9847);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(r2(U+0)));
}
B6e984a:{NFSU2_TR(0x6e984a);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e984c:{NFSU2_TR(0x6e984c);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9856(ARGS);}}
}
B6e984e:L6e984e:{bud-=4;NFSU2_TR(0x6e984e);
w4(G+4,u32(u32(r4(G+4))-u32(u32(0x1ull))));
}
B6e984f:{NFSU2_TR(0x6e984f);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x2ull))));
}
B6e9852:{NFSU2_TR(0x6e9852);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9854:{NFSU2_TR(0x6e9854);
u8 U[3];
w1(U+0,u8(!(r1(F+6))));
w1(U+1,u8((r1(F+11))==(r1(F+7))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9847u);}goto L6e9847;}}
{[[clang::musttail]] return blk_6e9856(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9856(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9856:L6e9856:{bud-=1;NFSU2_TR(0x6e9856);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
{[[clang::musttail]] return blk_6e9859(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9859(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9859:L6e9859:{bud-=36;NFSU2_TR(0x6e9859);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e985d:{NFSU2_TR(0x6e985d);
w4(G+4,u32(0x1full));
}
B6e9862:{NFSU2_TR(0x6e9862);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+12))));
}
B6e9864:{NFSU2_TR(0x6e9864);
w4(G+0,u32(0x7fffffffull));
}
B6e9869:{NFSU2_TR(0x6e9869);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(G+0,shr<u32>(r4(G+0),u64(r1(U+0))));
}
B6e986b:{NFSU2_TR(0x6e986b);
__builtin_memmove((G+4),(R+12),4);
}
B6e986d:{NFSU2_TR(0x6e986d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9871:{NFSU2_TR(0x6e9871);
__builtin_memmove((R+20),(R+8),4);
}
B6e9873:{NFSU2_TR(0x6e9873);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9877:{NFSU2_TR(0x6e9877);
w4(G+0,u32(u32(r4(G+0))&u32(r4(R+8))));
}
B6e9879:{NFSU2_TR(0x6e9879);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e987d:{NFSU2_TR(0x6e987d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9881:{NFSU2_TR(0x6e9881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9884:{NFSU2_TR(0x6e9884);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9888:{NFSU2_TR(0x6e9888);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(G+0,sar<u32>(r4(G+0),u64(r1(U+0))));
}
B6e988a:{NFSU2_TR(0x6e988a);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r1(U+0))));
}
B6e988c:{NFSU2_TR(0x6e988c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9890:{NFSU2_TR(0x6e9890);
__builtin_memmove((R+12),(R+28),4);
}
B6e9892:{NFSU2_TR(0x6e9892);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9896:{NFSU2_TR(0x6e9896);
w4(G+0,u32(0x1ull));
}
B6e989b:{NFSU2_TR(0x6e989b);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r1(U+0))));
}
B6e989d:{NFSU2_TR(0x6e989d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B6e98a0:{NFSU2_TR(0x6e98a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98a4:{NFSU2_TR(0x6e98a4);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6e98a5:{NFSU2_TR(0x6e98a5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e98a8:{NFSU2_TR(0x6e98a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e98ac:{NFSU2_TR(0x6e98ac);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xfffffffeull))));
}
B6e98af:{NFSU2_TR(0x6e98af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e98b2:{NFSU2_TR(0x6e98b2);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+0))));
}
B6e98b4:{NFSU2_TR(0x6e98b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B6e98b7:{NFSU2_TR(0x6e98b7);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6e98bb:{NFSU2_TR(0x6e98bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e98bf:{NFSU2_TR(0x6e98bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98c3:{NFSU2_TR(0x6e98c3);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),r4(G+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6e98c7:{NFSU2_TR(0x6e98c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98cb:{NFSU2_TR(0x6e98cb);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e98db(ARGS);}}
}
B6e98cd:L6e98cd:{bud-=4;NFSU2_TR(0x6e98cd);
__builtin_memmove((G+0),gp(0x811e32),1);
}
B6e98d2:{NFSU2_TR(0x6e98d2);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6e98d4:{NFSU2_TR(0x6e98d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e98d9:{NFSU2_TR(0x6e98d9);
if(r1(F+6)){{[[clang::musttail]] return blk_6e98e0(ARGS);}}
{[[clang::musttail]] return blk_6e98db(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e98db(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e98db:L6e98db:{bud-=1;NFSU2_TR(0x6e98db);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_6e98e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e98e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e98e0:L6e98e0:{bud-=3;NFSU2_TR(0x6e98e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e98e3:{NFSU2_TR(0x6e98e3);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+0))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e98e7:{NFSU2_TR(0x6e98e7);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9904(ARGS);}}
}
B6e98e9:L6e98e9:{bud-=7;NFSU2_TR(0x6e98e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e98ec:{NFSU2_TR(0x6e98ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e98ef:{NFSU2_TR(0x6e98ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98f2:{NFSU2_TR(0x6e98f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98f5:{NFSU2_TR(0x6e98f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e98f8:{NFSU2_TR(0x6e98f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e98ff:{NFSU2_TR(0x6e98ff);
{[[clang::musttail]] return blk_6e9b76(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9904(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9904:L6e9904:{bud-=2;NFSU2_TR(0x6e9904);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9907:{NFSU2_TR(0x6e9907);
if(r1(F+6)){{[[clang::musttail]] return blk_6e992a(ARGS);}}
}
B6e9909:L6e9909:{bud-=2;NFSU2_TR(0x6e9909);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e990d:{NFSU2_TR(0x6e990d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e992a(ARGS);}}
}
B6e990f:L6e990f:{bud-=3;NFSU2_TR(0x6e990f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e9913:{NFSU2_TR(0x6e9913);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9915:{NFSU2_TR(0x6e9915);
if(r1(F+6)){{[[clang::musttail]] return blk_6e992e(ARGS);}}
}
B6e9917:L6e9917:{bud-=3;NFSU2_TR(0x6e9917);
u8 U[5];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B6e991b:{NFSU2_TR(0x6e991b);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6e991d:{NFSU2_TR(0x6e991d);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e992e(ARGS);}}
}
B6e991f:L6e991f:{bud-=3;NFSU2_TR(0x6e991f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))&u32(r4(U+4))));
}
B6e9923:{NFSU2_TR(0x6e9923);
__builtin_memmove((R+8),(G+4),4);
}
B6e9925:{NFSU2_TR(0x6e9925);
{[[clang::musttail]] return blk_6e99bc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e992a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e992a:L6e992a:{bud-=1;NFSU2_TR(0x6e992a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
{[[clang::musttail]] return blk_6e992e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e992e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e992e:L6e992e:{bud-=4;NFSU2_TR(0x6e992e);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B6e9930:{NFSU2_TR(0x6e9930);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9932:{NFSU2_TR(0x6e9932);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9936:{NFSU2_TR(0x6e9936);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e99ba(ARGS);}}
}
B6e993c:L6e993c:{bud-=3;NFSU2_TR(0x6e993c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9940:{NFSU2_TR(0x6e9940);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e9942:{NFSU2_TR(0x6e9942);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
{[[clang::musttail]] return blk_6e9945(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9945(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9945:L6e9945:{bud-=34;NFSU2_TR(0x6e9945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9948:{NFSU2_TR(0x6e9948);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e994c:{NFSU2_TR(0x6e994c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e994f:{NFSU2_TR(0x6e994f);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+12))));
}
B6e9951:{NFSU2_TR(0x6e9951);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9955:{NFSU2_TR(0x6e9955);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9959:{NFSU2_TR(0x6e9959);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+20))));
}
B6e995b:{NFSU2_TR(0x6e995b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6e995e:{NFSU2_TR(0x6e995e);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9962:{NFSU2_TR(0x6e9962);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6e9965:{NFSU2_TR(0x6e9965);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9968:{NFSU2_TR(0x6e9968);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e996a:{NFSU2_TR(0x6e996a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e996c:{NFSU2_TR(0x6e996c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9970:{NFSU2_TR(0x6e9970);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9974:{NFSU2_TR(0x6e9974);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9978:{NFSU2_TR(0x6e9978);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e997b:{NFSU2_TR(0x6e997b);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e997e:{NFSU2_TR(0x6e997e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9981:{NFSU2_TR(0x6e9981);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9985:{NFSU2_TR(0x6e9985);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9989:{NFSU2_TR(0x6e9989);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e998d:{NFSU2_TR(0x6e998d);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9990:{NFSU2_TR(0x6e9990);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9993:{NFSU2_TR(0x6e9993);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9997:{NFSU2_TR(0x6e9997);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6e9998:{NFSU2_TR(0x6e9998);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e999b:{NFSU2_TR(0x6e999b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e999f:{NFSU2_TR(0x6e999f);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x30ull))));
}
B6e99a2:{NFSU2_TR(0x6e99a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99a6:{NFSU2_TR(0x6e99a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e99aa:{NFSU2_TR(0x6e99aa);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e99ac:{NFSU2_TR(0x6e99ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99b0:{NFSU2_TR(0x6e99b0);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9945u);}goto L6e9945;}}
}
B6e99b2:L6e99b2:{bud-=2;NFSU2_TR(0x6e99b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e99b6:{NFSU2_TR(0x6e99b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_6e99ba(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e99ba(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e99ba:L6e99ba:{bud-=1;NFSU2_TR(0x6e99ba);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_6e99bc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e99bc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e99bc:L6e99bc:{bud-=2;NFSU2_TR(0x6e99bc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e99be:{NFSU2_TR(0x6e99be);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_6e9a92(ARGS);}}
}
B6e99c4:L6e99c4:{bud-=9;NFSU2_TR(0x6e99c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e99c8:{NFSU2_TR(0x6e99c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((G+4),(U+0),4);
}
B6e99cb:{NFSU2_TR(0x6e99cb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B6e99ce:{NFSU2_TR(0x6e99ce);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e99d1:{NFSU2_TR(0x6e99d1);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B6e99d3:{NFSU2_TR(0x6e99d3);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+8))));
}
B6e99d5:{NFSU2_TR(0x6e99d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99d9:{NFSU2_TR(0x6e99d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99dd:{NFSU2_TR(0x6e99dd);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_6e99e0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e99e0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e99e0:L6e99e0:{bud-=4;NFSU2_TR(0x6e99e0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e99e2:{NFSU2_TR(0x6e99e2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e99e4:{NFSU2_TR(0x6e99e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e99e8:{NFSU2_TR(0x6e99e8);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9a70(ARGS);}}
}
B6e99ee:L6e99ee:{bud-=2;NFSU2_TR(0x6e99ee);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e99f0:{NFSU2_TR(0x6e99f0);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x2ull))));
{[[clang::musttail]] return blk_6e99f3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e99f3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e99f3:L6e99f3:{bud-=41;NFSU2_TR(0x6e99f3);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e99f7:{NFSU2_TR(0x6e99f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e99fa:{NFSU2_TR(0x6e99fa);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+20))));
}
B6e99fc:{NFSU2_TR(0x6e99fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a00:{NFSU2_TR(0x6e9a00);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9a04:{NFSU2_TR(0x6e9a04);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9a08:{NFSU2_TR(0x6e9a08);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a0c:{NFSU2_TR(0x6e9a0c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(R+12,u32(r1(U+0)));
}
B6e9a0f:{NFSU2_TR(0x6e9a0f);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9a12:{NFSU2_TR(0x6e9a12);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B6e9a15:{NFSU2_TR(0x6e9a15);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a18:{NFSU2_TR(0x6e9a18);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x3ull))));
}
B6e9a1b:{NFSU2_TR(0x6e9a1b);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9a1f:{NFSU2_TR(0x6e9a1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a23:{NFSU2_TR(0x6e9a23);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9a27:{NFSU2_TR(0x6e9a27);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9a2a:{NFSU2_TR(0x6e9a2a);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a2d:{NFSU2_TR(0x6e9a2d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9a31:{NFSU2_TR(0x6e9a31);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9a34:{NFSU2_TR(0x6e9a34);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a37:{NFSU2_TR(0x6e9a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9a3a:{NFSU2_TR(0x6e9a3a);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B6e9a3c:{NFSU2_TR(0x6e9a3c);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9a40:{NFSU2_TR(0x6e9a40);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e9a41:{NFSU2_TR(0x6e9a41);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e9a43:{NFSU2_TR(0x6e9a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a47:{NFSU2_TR(0x6e9a47);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a49:{NFSU2_TR(0x6e9a49);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9a4b:{NFSU2_TR(0x6e9a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9a4e:{NFSU2_TR(0x6e9a4e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9a52:{NFSU2_TR(0x6e9a52);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a54:{NFSU2_TR(0x6e9a54);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9a56:{NFSU2_TR(0x6e9a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9a59:{NFSU2_TR(0x6e9a59);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9a5d:{NFSU2_TR(0x6e9a5d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9a61:{NFSU2_TR(0x6e9a61);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9a63:{NFSU2_TR(0x6e9a63);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6e9a66:{NFSU2_TR(0x6e9a66);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9a68:{NFSU2_TR(0x6e9a68);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9a6c:{NFSU2_TR(0x6e9a6c);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9a6e:{NFSU2_TR(0x6e9a6e);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e99f3u);}goto L6e99f3;}}
{[[clang::musttail]] return blk_6e9a70(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9a70(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9a70:L6e9a70:{bud-=8;NFSU2_TR(0x6e9a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9a74:{NFSU2_TR(0x6e9a74);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9a78:{NFSU2_TR(0x6e9a78);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9a7c:{NFSU2_TR(0x6e9a7c);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B6e9a7e:{NFSU2_TR(0x6e9a7e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B6e9a7f:{NFSU2_TR(0x6e9a7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a83:{NFSU2_TR(0x6e9a83);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9a87:{NFSU2_TR(0x6e9a87);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e99e0u);}[[clang::musttail]] return blk_6e99e0(ARGS);}}
}
B6e9a8d:L6e9a8d:{bud-=1;NFSU2_TR(0x6e9a8d);
{[[clang::musttail]] return blk_6e9b76(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9a92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9a92:L6e9a92:{bud-=1;NFSU2_TR(0x6e9a92);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9b76(ARGS);}}
}
B6e9a98:L6e9a98:{bud-=8;NFSU2_TR(0x6e9a98);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9a9c:{NFSU2_TR(0x6e9a9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((G+4),(U+0),4);
}
B6e9a9f:{NFSU2_TR(0x6e9a9f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+4)))));
w8(U+8,u64(s64(s32(r4(G+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+4,u32(r8(U+16)));
}
B6e9aa2:{NFSU2_TR(0x6e9aa2);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e9aa5:{NFSU2_TR(0x6e9aa5);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+12))));
}
B6e9aa7:{NFSU2_TR(0x6e9aa7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6e9aa8:{NFSU2_TR(0x6e9aa8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+11,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9aaa:{NFSU2_TR(0x6e9aaa);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9b76(ARGS);}}
}
B6e9ab0:L6e9ab0:{bud-=6;NFSU2_TR(0x6e9ab0);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x2ull))));
}
B6e9ab3:{NFSU2_TR(0x6e9ab3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+20))));
}
B6e9ab5:{NFSU2_TR(0x6e9ab5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e9ab6:{NFSU2_TR(0x6e9ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9aba:{NFSU2_TR(0x6e9aba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9abe:{NFSU2_TR(0x6e9abe);
__builtin_memmove((R+28),(R+28),4);
{[[clang::musttail]] return blk_6e9ac0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9ac0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9ac0:L6e9ac0:{bud-=4;NFSU2_TR(0x6e9ac0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6e9ac2:{NFSU2_TR(0x6e9ac2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9ac4:{NFSU2_TR(0x6e9ac4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9ac8:{NFSU2_TR(0x6e9ac8);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9b59(ARGS);}}
}
B6e9ace:L6e9ace:{bud-=1;NFSU2_TR(0x6e9ace);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
{[[clang::musttail]] return blk_6e9ad0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9ad0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9ad0:L6e9ad0:{bud-=44;NFSU2_TR(0x6e9ad0);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9ad4:{NFSU2_TR(0x6e9ad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9ad7:{NFSU2_TR(0x6e9ad7);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+20))));
}
B6e9ad9:{NFSU2_TR(0x6e9ad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9add:{NFSU2_TR(0x6e9add);
u8 U[5];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9ae1:{NFSU2_TR(0x6e9ae1);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9ae5:{NFSU2_TR(0x6e9ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9ae9:{NFSU2_TR(0x6e9ae9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(G+4))),1);
w4(R+12,u32(r1(U+0)));
}
B6e9aec:{NFSU2_TR(0x6e9aec);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9aef:{NFSU2_TR(0x6e9aef);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B6e9af2:{NFSU2_TR(0x6e9af2);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9af5:{NFSU2_TR(0x6e9af5);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x3ull))));
}
B6e9af8:{NFSU2_TR(0x6e9af8);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9afc:{NFSU2_TR(0x6e9afc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b00:{NFSU2_TR(0x6e9b00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9b04:{NFSU2_TR(0x6e9b04);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9b07:{NFSU2_TR(0x6e9b07);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9b0a:{NFSU2_TR(0x6e9b0a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9b0e:{NFSU2_TR(0x6e9b0e);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9b11:{NFSU2_TR(0x6e9b11);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9b14:{NFSU2_TR(0x6e9b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9b17:{NFSU2_TR(0x6e9b17);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B6e9b19:{NFSU2_TR(0x6e9b19);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9b1d:{NFSU2_TR(0x6e9b1d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e9b1e:{NFSU2_TR(0x6e9b1e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9b20:{NFSU2_TR(0x6e9b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b24:{NFSU2_TR(0x6e9b24);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e9b26:{NFSU2_TR(0x6e9b26);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9b28:{NFSU2_TR(0x6e9b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9b2b:{NFSU2_TR(0x6e9b2b);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9b2f:{NFSU2_TR(0x6e9b2f);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9b33:{NFSU2_TR(0x6e9b33);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9b35:{NFSU2_TR(0x6e9b35);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9b37:{NFSU2_TR(0x6e9b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9b3a:{NFSU2_TR(0x6e9b3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9b3e:{NFSU2_TR(0x6e9b3e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e9b40:{NFSU2_TR(0x6e9b40);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6e9b43:{NFSU2_TR(0x6e9b43);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e9b45:{NFSU2_TR(0x6e9b45);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9b47:{NFSU2_TR(0x6e9b47);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9b4b:{NFSU2_TR(0x6e9b4b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9b4d:{NFSU2_TR(0x6e9b4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9b51:{NFSU2_TR(0x6e9b51);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9b53:{NFSU2_TR(0x6e9b53);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9ad0u);}goto L6e9ad0;}}
{[[clang::musttail]] return blk_6e9b59(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9b59(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9b59:L6e9b59:{bud-=8;NFSU2_TR(0x6e9b59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9b5d:{NFSU2_TR(0x6e9b5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9b61:{NFSU2_TR(0x6e9b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9b65:{NFSU2_TR(0x6e9b65);
w4(G+4,u32(u32(r4(G+4))-u32(r4(R+12))));
}
B6e9b67:{NFSU2_TR(0x6e9b67);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
}
B6e9b68:{NFSU2_TR(0x6e9b68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b6c:{NFSU2_TR(0x6e9b6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b70:{NFSU2_TR(0x6e9b70);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9ac0u);}[[clang::musttail]] return blk_6e9ac0(ARGS);}}
{[[clang::musttail]] return blk_6e9b76(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9b76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9b76:L6e9b76:{bud-=8;NFSU2_TR(0x6e9b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9b7a:{NFSU2_TR(0x6e9b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((G+4),(U+0),4);
}
B6e9b7d:{NFSU2_TR(0x6e9b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b80:{NFSU2_TR(0x6e9b80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b84:{NFSU2_TR(0x6e9b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9b87:{NFSU2_TR(0x6e9b87);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9b89:{NFSU2_TR(0x6e9b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e9b91:{NFSU2_TR(0x6e9b91);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9bb2(ARGS);}}
}
B6e9b93:L6e9b93:{bud-=6;NFSU2_TR(0x6e9b93);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9b97:{NFSU2_TR(0x6e9b97);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9b9b:{NFSU2_TR(0x6e9b9b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e9b9d:{NFSU2_TR(0x6e9b9d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e9b9f:{NFSU2_TR(0x6e9b9f);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e9ba2:{NFSU2_TR(0x6e9ba2);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9d0a(ARGS);}}
}
B6e9ba8:L6e9ba8:{bud-=4;NFSU2_TR(0x6e9ba8);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9bac:{NFSU2_TR(0x6e9bac);
w1(G+0,u8(0x1ull));
}
B6e9bae:{NFSU2_TR(0x6e9bae);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9bb0:{NFSU2_TR(0x6e9bb0);
{[[clang::musttail]] return blk_6e9c18(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9bb2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9bb2:L6e9bb2:{bud-=2;NFSU2_TR(0x6e9bb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9bb4:{NFSU2_TR(0x6e9bb4);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9be2(ARGS);}}
}
B6e9bb6:L6e9bb6:{bud-=5;NFSU2_TR(0x6e9bb6);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9bba:{NFSU2_TR(0x6e9bba);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e9bc0:{NFSU2_TR(0x6e9bc0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e9bc2:{NFSU2_TR(0x6e9bc2);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e9bc5:{NFSU2_TR(0x6e9bc5);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9bde(ARGS);}}
}
B6e9bc7:L6e9bc7:{bud-=7;NFSU2_TR(0x6e9bc7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(G+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e9bca:{NFSU2_TR(0x6e9bca);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9bce:{NFSU2_TR(0x6e9bce);
w1(G+0,u8(0x1ull));
}
B6e9bd0:{NFSU2_TR(0x6e9bd0);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9bd4:{NFSU2_TR(0x6e9bd4);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e9bd8:{NFSU2_TR(0x6e9bd8);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9bdc:{NFSU2_TR(0x6e9bdc);
{[[clang::musttail]] return blk_6e9c1e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9bde(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9bde:L6e9bde:{bud-=2;NFSU2_TR(0x6e9bde);
w1(G+0,u8(u32(r1(G+0))^u32(r1(G+0))));
}
B6e9be0:{NFSU2_TR(0x6e9be0);
{[[clang::musttail]] return blk_6e9c1e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9be2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9be2:L6e9be2:{bud-=8;NFSU2_TR(0x6e9be2);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(G+0,u32(r2(U+12)));
}
B6e9be7:{NFSU2_TR(0x6e9be7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9beb:{NFSU2_TR(0x6e9beb);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9bef:{NFSU2_TR(0x6e9bef);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9bf3:{NFSU2_TR(0x6e9bf3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e9bf5:{NFSU2_TR(0x6e9bf5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B6e9bf7:{NFSU2_TR(0x6e9bf7);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B6e9bfa:{NFSU2_TR(0x6e9bfa);
u8 U[1];
w1(U+0,u8(!(r1(F+2))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9d0a(ARGS);}}
}
B6e9c00:L6e9c00:{bud-=8;NFSU2_TR(0x6e9c00);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(G+4,u32(r2(U+8)));
}
B6e9c04:{NFSU2_TR(0x6e9c04);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9c08:{NFSU2_TR(0x6e9c08);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e9c0a:{NFSU2_TR(0x6e9c0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9c0e:{NFSU2_TR(0x6e9c0e);
w1(G+0,u8(0x1ull));
}
B6e9c10:{NFSU2_TR(0x6e9c10);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9c14:{NFSU2_TR(0x6e9c14);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e9c16:{NFSU2_TR(0x6e9c16);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
{[[clang::musttail]] return blk_6e9c18(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9c18(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9c18:L6e9c18:{bud-=1;NFSU2_TR(0x6e9c18);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_6e9c1c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9c1c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9c1c:L6e9c1c:{bud-=1;NFSU2_TR(0x6e9c1c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_6e9c1e(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9c1e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9c1e:L6e9c1e:{bud-=4;NFSU2_TR(0x6e9c1e);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6e9c20:{NFSU2_TR(0x6e9c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9c23:{NFSU2_TR(0x6e9c23);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e9c27:{NFSU2_TR(0x6e9c27);
if(r1(F+6)){{[[clang::musttail]] return blk_6e9f81(ARGS);}}
}
B6e9c2d:L6e9c2d:{bud-=4;NFSU2_TR(0x6e9c2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9c31:{NFSU2_TR(0x6e9c31);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
}
B6e9c32:{NFSU2_TR(0x6e9c32);
u8 U[8];
__builtin_memmove((U+0),(G+0),4);
w1(F+11,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9c34:{NFSU2_TR(0x6e9c34);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9f81(ARGS);}}
}
B6e9c3a:L6e9c3a:{bud-=20;NFSU2_TR(0x6e9c3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9c3e:{NFSU2_TR(0x6e9c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9c42:{NFSU2_TR(0x6e9c42);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B6e9c44:{NFSU2_TR(0x6e9c44);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+4),(U+4),1);
}
B6e9c47:{NFSU2_TR(0x6e9c47);
w4(G+0,u32(0x1ull));
}
B6e9c4c:{NFSU2_TR(0x6e9c4c);
u8 U[1];
w1(U+0,u8(u32(r1(G+4))&u32(u8(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r1(U+0))));
}
B6e9c4e:{NFSU2_TR(0x6e9c4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9c52:{NFSU2_TR(0x6e9c52);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6e9c53:{NFSU2_TR(0x6e9c53);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e9c56:{NFSU2_TR(0x6e9c56);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9c5a:{NFSU2_TR(0x6e9c5a);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xfffffffeull))));
}
B6e9c5d:{NFSU2_TR(0x6e9c5d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e9c60:{NFSU2_TR(0x6e9c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9c64:{NFSU2_TR(0x6e9c64);
__builtin_memmove((R+12),(R+28),4);
}
B6e9c66:{NFSU2_TR(0x6e9c66);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+0))));
}
B6e9c68:{NFSU2_TR(0x6e9c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9c6c:{NFSU2_TR(0x6e9c6c);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B6e9c6f:{NFSU2_TR(0x6e9c6f);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6e9c73:{NFSU2_TR(0x6e9c73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e9c76:{NFSU2_TR(0x6e9c76);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9d11(ARGS);}}
}
B6e9c7c:L6e9c7c:{bud-=4;NFSU2_TR(0x6e9c7c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9c80:{NFSU2_TR(0x6e9c80);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9c82:{NFSU2_TR(0x6e9c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e9c8a:{NFSU2_TR(0x6e9c8a);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9fcc(ARGS);}}
}
B6e9c90:L6e9c90:{bud-=1;NFSU2_TR(0x6e9c90);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
{[[clang::musttail]] return blk_6e9c92(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9c92(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9c92:L6e9c92:{bud-=35;NFSU2_TR(0x6e9c92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9c95:{NFSU2_TR(0x6e9c95);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9c98:{NFSU2_TR(0x6e9c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9c9b:{NFSU2_TR(0x6e9c9b);
{u32 ea_=u32(r4(G+0)+r4(G+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9c9e:{NFSU2_TR(0x6e9c9e);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B6e9ca0:{NFSU2_TR(0x6e9ca0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e9ca3:{NFSU2_TR(0x6e9ca3);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9ca7:{NFSU2_TR(0x6e9ca7);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ca9:{NFSU2_TR(0x6e9ca9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9cad:{NFSU2_TR(0x6e9cad);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9cb1:{NFSU2_TR(0x6e9cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9cb4:{NFSU2_TR(0x6e9cb4);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9cb8:{NFSU2_TR(0x6e9cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9cbb:{NFSU2_TR(0x6e9cbb);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9cbf:{NFSU2_TR(0x6e9cbf);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B6e9cc3:{NFSU2_TR(0x6e9cc3);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9cc7:{NFSU2_TR(0x6e9cc7);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9cc9:{NFSU2_TR(0x6e9cc9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9ccd:{NFSU2_TR(0x6e9ccd);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9cd1:{NFSU2_TR(0x6e9cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9cd4:{NFSU2_TR(0x6e9cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9cd7:{NFSU2_TR(0x6e9cd7);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9cdb:{NFSU2_TR(0x6e9cdb);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9cdf:{NFSU2_TR(0x6e9cdf);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B6e9ce3:{NFSU2_TR(0x6e9ce3);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B6e9ce6:{NFSU2_TR(0x6e9ce6);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9cea:{NFSU2_TR(0x6e9cea);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9cec:{NFSU2_TR(0x6e9cec);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9cf0:{NFSU2_TR(0x6e9cf0);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9cf4:{NFSU2_TR(0x6e9cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9cf8:{NFSU2_TR(0x6e9cf8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9cfc:{NFSU2_TR(0x6e9cfc);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6e9cfd:{NFSU2_TR(0x6e9cfd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9cff:{NFSU2_TR(0x6e9cff);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d03:{NFSU2_TR(0x6e9d03);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9c92u);}goto L6e9c92;}}
}
B6e9d05:L6e9d05:{bud-=1;NFSU2_TR(0x6e9d05);
{[[clang::musttail]] return blk_6e9fcc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9d0a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9d0a:L6e9d0a:{bud-=2;NFSU2_TR(0x6e9d0a);
w1(G+0,u8(u32(r1(G+0))^u32(r1(G+0))));
}
B6e9d0c:{NFSU2_TR(0x6e9d0c);
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9c1cu);}[[clang::musttail]] return blk_6e9c1c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9d11(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9d11:L6e9d11:{bud-=3;NFSU2_TR(0x6e9d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9d15:{NFSU2_TR(0x6e9d15);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(G+0))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B6e9d19:{NFSU2_TR(0x6e9d19);
if(r1(F+6)){{[[clang::musttail]] return blk_6e9e3f(ARGS);}}
}
B6e9d1f:L6e9d1f:{bud-=5;NFSU2_TR(0x6e9d1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9d23:{NFSU2_TR(0x6e9d23);
w4(G+4,u32(u32(r4(G+4))^u32(r4(G+4))));
}
B6e9d25:{NFSU2_TR(0x6e9d25);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B6e9d27:{NFSU2_TR(0x6e9d27);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d2b:{NFSU2_TR(0x6e9d2b);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9f78(ARGS);}}
}
B6e9d31:L6e9d31:{bud-=4;NFSU2_TR(0x6e9d31);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B6e9d34:{NFSU2_TR(0x6e9d34);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d38:{NFSU2_TR(0x6e9d38);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d3c:{NFSU2_TR(0x6e9d3c);
__builtin_memmove((G+16),(G+16),4);
{[[clang::musttail]] return blk_6e9d40(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9d40(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9d40:L6e9d40:{bud-=71;NFSU2_TR(0x6e9d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9d43:{NFSU2_TR(0x6e9d43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d47:{NFSU2_TR(0x6e9d47);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B6e9d49:{NFSU2_TR(0x6e9d49);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d4d:{NFSU2_TR(0x6e9d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9d50:{NFSU2_TR(0x6e9d50);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+12))));
}
B6e9d52:{NFSU2_TR(0x6e9d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d56:{NFSU2_TR(0x6e9d56);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9d5a:{NFSU2_TR(0x6e9d5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d5e:{NFSU2_TR(0x6e9d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d62:{NFSU2_TR(0x6e9d62);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e9d65:{NFSU2_TR(0x6e9d65);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9d69:{NFSU2_TR(0x6e9d69);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9d6c:{NFSU2_TR(0x6e9d6c);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9d6e:{NFSU2_TR(0x6e9d6e);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9d70:{NFSU2_TR(0x6e9d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d74:{NFSU2_TR(0x6e9d74);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9d78:{NFSU2_TR(0x6e9d78);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d7c:{NFSU2_TR(0x6e9d7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d80:{NFSU2_TR(0x6e9d80);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9d84:{NFSU2_TR(0x6e9d84);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9d87:{NFSU2_TR(0x6e9d87);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9d8a:{NFSU2_TR(0x6e9d8a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9d8d:{NFSU2_TR(0x6e9d8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9d91:{NFSU2_TR(0x6e9d91);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+12,u32(r2(U+0)));
}
B6e9d94:{NFSU2_TR(0x6e9d94);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9d98:{NFSU2_TR(0x6e9d98);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9d9c:{NFSU2_TR(0x6e9d9c);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9d9f:{NFSU2_TR(0x6e9d9f);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9da2:{NFSU2_TR(0x6e9da2);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9da6:{NFSU2_TR(0x6e9da6);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9da9:{NFSU2_TR(0x6e9da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9dac:{NFSU2_TR(0x6e9dac);
{u32 ea_=u32(r4(R+12)+r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9daf:{NFSU2_TR(0x6e9daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9db2:{NFSU2_TR(0x6e9db2);
{u32 ea_=u32(r4(G+4)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9db5:{NFSU2_TR(0x6e9db5);
w4(G+0,u32(u32(r4(G+0))+u32(r4(G+4))));
}
B6e9db7:{NFSU2_TR(0x6e9db7);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9dbb:{NFSU2_TR(0x6e9dbb);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9dbd:{NFSU2_TR(0x6e9dbd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9dc1:{NFSU2_TR(0x6e9dc1);
{u32 ea_=u32((r4(G+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9dc5:{NFSU2_TR(0x6e9dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9dc8:{NFSU2_TR(0x6e9dc8);
{u32 ea_=u32(r4(R+12)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9dcc:{NFSU2_TR(0x6e9dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9dcf:{NFSU2_TR(0x6e9dcf);
{u32 ea_=u32(r4(G+0)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9dd3:{NFSU2_TR(0x6e9dd3);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9dd7:{NFSU2_TR(0x6e9dd7);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9ddb:{NFSU2_TR(0x6e9ddb);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ddd:{NFSU2_TR(0x6e9ddd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9de1:{NFSU2_TR(0x6e9de1);
{u32 ea_=u32((r4(G+0)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9de5:{NFSU2_TR(0x6e9de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9de8:{NFSU2_TR(0x6e9de8);
{u32 ea_=u32(r4(R+12)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9dec:{NFSU2_TR(0x6e9dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9def:{NFSU2_TR(0x6e9def);
{u32 ea_=u32(r4(G+0)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9df3:{NFSU2_TR(0x6e9df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9df7:{NFSU2_TR(0x6e9df7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+4))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9dfb:{NFSU2_TR(0x6e9dfb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6e9dfe:{NFSU2_TR(0x6e9dfe);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9e02:{NFSU2_TR(0x6e9e02);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e06:{NFSU2_TR(0x6e9e06);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B6e9e09:{NFSU2_TR(0x6e9e09);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9e0b:{NFSU2_TR(0x6e9e0b);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+0,u32(r2(U+4)));
}
B6e9e0f:{NFSU2_TR(0x6e9e0f);
{u32 ea_=u32((r4(G+0)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9e13:{NFSU2_TR(0x6e9e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9e17:{NFSU2_TR(0x6e9e17);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9e1b:{NFSU2_TR(0x6e9e1b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x6ull))));
}
B6e9e1e:{NFSU2_TR(0x6e9e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e22:{NFSU2_TR(0x6e9e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9e26:{NFSU2_TR(0x6e9e26);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6e9e27:{NFSU2_TR(0x6e9e27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9e29:{NFSU2_TR(0x6e9e29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e2d:{NFSU2_TR(0x6e9e2d);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9d40u);}goto L6e9d40;}}
}
B6e9e33:L6e9e33:{bud-=3;NFSU2_TR(0x6e9e33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9e37:{NFSU2_TR(0x6e9e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e3a:{NFSU2_TR(0x6e9e3a);
{[[clang::musttail]] return blk_6e9fcc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9e3f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9e3f:L6e9e3f:{bud-=10;NFSU2_TR(0x6e9e3f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9e43:{NFSU2_TR(0x6e9e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9e47:{NFSU2_TR(0x6e9e47);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x2ull))));
}
B6e9e4a:{NFSU2_TR(0x6e9e4a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(G+0)))));
w8(U+8,u64(s64(s32(r4(G+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(G+0,u32(r8(U+16)));
}
B6e9e4d:{NFSU2_TR(0x6e9e4d);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6e9e50:{NFSU2_TR(0x6e9e50);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+12))));
}
B6e9e52:{NFSU2_TR(0x6e9e52);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9e54:{NFSU2_TR(0x6e9e54);
__builtin_memmove((R+12),(G+0),4);
}
B6e9e56:{NFSU2_TR(0x6e9e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e5e:{NFSU2_TR(0x6e9e5e);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6e9f78(ARGS);}}
}
B6e9e64:L6e9e64:{bud-=4;NFSU2_TR(0x6e9e64);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B6e9e66:{NFSU2_TR(0x6e9e66);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B6e9e69:{NFSU2_TR(0x6e9e69);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e6d:{NFSU2_TR(0x6e9e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6e9e71(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9e71(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9e71:L6e9e71:{bud-=76;NFSU2_TR(0x6e9e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9e74:{NFSU2_TR(0x6e9e74);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B6e9e78:{NFSU2_TR(0x6e9e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9e7c:{NFSU2_TR(0x6e9e7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9e80:{NFSU2_TR(0x6e9e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e84:{NFSU2_TR(0x6e9e84);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9e88:{NFSU2_TR(0x6e9e88);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e9e8c:{NFSU2_TR(0x6e9e8c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9e90:{NFSU2_TR(0x6e9e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9e94:{NFSU2_TR(0x6e9e94);
{u32 ea_=u32(r4(G+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9e97:{NFSU2_TR(0x6e9e97);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9e9b:{NFSU2_TR(0x6e9e9b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+12,u32(r1(U+0)));
}
B6e9e9e:{NFSU2_TR(0x6e9e9e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e9ea1:{NFSU2_TR(0x6e9ea1);
{u32 ea_=u32(r4(G+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ea4:{NFSU2_TR(0x6e9ea4);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9ea8:{NFSU2_TR(0x6e9ea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9eac:{NFSU2_TR(0x6e9eac);
{u32 ea_=u32(r4(G+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9eaf:{NFSU2_TR(0x6e9eaf);
{u32 ea_=u32(r4(G+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9eb2:{NFSU2_TR(0x6e9eb2);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e9eb6:{NFSU2_TR(0x6e9eb6);
{u32 ea_=u32(r4(G+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9eb9:{NFSU2_TR(0x6e9eb9);
{u32 ea_=u32(r4(G+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ebc:{NFSU2_TR(0x6e9ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9ebf:{NFSU2_TR(0x6e9ebf);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9ec3:{NFSU2_TR(0x6e9ec3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6e9ec5:{NFSU2_TR(0x6e9ec5);
{u32 ea_=u32(r4(G+4)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ec8:{NFSU2_TR(0x6e9ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9ecb:{NFSU2_TR(0x6e9ecb);
{u32 ea_=u32(r4(G+4)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9ece:{NFSU2_TR(0x6e9ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9ed1:{NFSU2_TR(0x6e9ed1);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ed5:{NFSU2_TR(0x6e9ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9ed8:{NFSU2_TR(0x6e9ed8);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9edc:{NFSU2_TR(0x6e9edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9edf:{NFSU2_TR(0x6e9edf);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9ee3:{NFSU2_TR(0x6e9ee3);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9ee7:{NFSU2_TR(0x6e9ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9eea:{NFSU2_TR(0x6e9eea);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9eee:{NFSU2_TR(0x6e9eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9ef1:{NFSU2_TR(0x6e9ef1);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9ef4:{NFSU2_TR(0x6e9ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9ef7:{NFSU2_TR(0x6e9ef7);
{u32 ea_=u32(r4(G+0)+r4(G+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9efa:{NFSU2_TR(0x6e9efa);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B6e9efc:{NFSU2_TR(0x6e9efc);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9f00:{NFSU2_TR(0x6e9f00);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9f02:{NFSU2_TR(0x6e9f02);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9f06:{NFSU2_TR(0x6e9f06);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9f0a:{NFSU2_TR(0x6e9f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9f0d:{NFSU2_TR(0x6e9f0d);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9f11:{NFSU2_TR(0x6e9f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9f14:{NFSU2_TR(0x6e9f14);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9f18:{NFSU2_TR(0x6e9f18);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B6e9f1c:{NFSU2_TR(0x6e9f1c);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9f20:{NFSU2_TR(0x6e9f20);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9f22:{NFSU2_TR(0x6e9f22);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9f26:{NFSU2_TR(0x6e9f26);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9f2a:{NFSU2_TR(0x6e9f2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9f2d:{NFSU2_TR(0x6e9f2d);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e9f31:{NFSU2_TR(0x6e9f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9f34:{NFSU2_TR(0x6e9f34);
{u32 ea_=u32(r4(G+4)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e9f38:{NFSU2_TR(0x6e9f38);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9f3c:{NFSU2_TR(0x6e9f3c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+4),(U+8),4);
}
B6e9f40:{NFSU2_TR(0x6e9f40);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6e9f43:{NFSU2_TR(0x6e9f43);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e9f47:{NFSU2_TR(0x6e9f47);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f4b:{NFSU2_TR(0x6e9f4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9f4f:{NFSU2_TR(0x6e9f4f);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e9f51:{NFSU2_TR(0x6e9f51);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9f55:{NFSU2_TR(0x6e9f55);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B6e9f58:{NFSU2_TR(0x6e9f58);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f5c:{NFSU2_TR(0x6e9f5c);
{u32 ea_=u32((r4(G+4)*4u)+r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e9f60:{NFSU2_TR(0x6e9f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9f64:{NFSU2_TR(0x6e9f64);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e9f68:{NFSU2_TR(0x6e9f68);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1ull))));
}
B6e9f69:{NFSU2_TR(0x6e9f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f6d:{NFSU2_TR(0x6e9f6d);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B6e9f70:{NFSU2_TR(0x6e9f70);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(F+11,sborrow<u32>(r4(G+4),r4(U+0)));
w4(U+4,u32(u32(r4(G+4))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9f72:{NFSU2_TR(0x6e9f72);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9e71u);}goto L6e9e71;}}
{[[clang::musttail]] return blk_6e9f78(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9f78(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9f78:L6e9f78:{bud-=3;NFSU2_TR(0x6e9f78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e9f7c:{NFSU2_TR(0x6e9f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f7f:{NFSU2_TR(0x6e9f7f);
{[[clang::musttail]] return blk_6e9fcc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9f81(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9f81:L6e9f81:{bud-=4;NFSU2_TR(0x6e9f81);
w4(G+0,u32(u32(r4(G+0))^u32(r4(G+0))));
}
B6e9f83:{NFSU2_TR(0x6e9f83);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(F+0,u8((r2(U+6))<(r2(G+0))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(G+0))));
w1(F+6,u8((r2(U+8))==(u16(0x0ull))));
}
B6e9f87:{NFSU2_TR(0x6e9f87);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9f8b:{NFSU2_TR(0x6e9f8b);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6e9fcc(ARGS);}}
}
B6e9f8d:L6e9f8d:{bud-=1;NFSU2_TR(0x6e9f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_6e9f91(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9f91(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9f91:L6e9f91:{bud-=19;NFSU2_TR(0x6e9f91);
u8 U[10];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(G+0,u32(r2(U+8)));
}
B6e9f95:{NFSU2_TR(0x6e9f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9f98:{NFSU2_TR(0x6e9f98);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(G+4,u32(u32(r4(G+4))+u32(r4(U+4))));
}
B6e9f9c:{NFSU2_TR(0x6e9f9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e9f9e:{NFSU2_TR(0x6e9f9e);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B6e9fa2:{NFSU2_TR(0x6e9fa2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(G+0)),r4(U+0));
}
B6e9fa4:{NFSU2_TR(0x6e9fa4);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9fa7:{NFSU2_TR(0x6e9fa7);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9faa:{NFSU2_TR(0x6e9faa);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9fad:{NFSU2_TR(0x6e9fad);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9fb0:{NFSU2_TR(0x6e9fb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6e9fb4:{NFSU2_TR(0x6e9fb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6e9fb8:{NFSU2_TR(0x6e9fb8);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B6e9fbb:{NFSU2_TR(0x6e9fbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9fbf:{NFSU2_TR(0x6e9fbf);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(G+4,u32(r2(U+4)));
}
B6e9fc3:{NFSU2_TR(0x6e9fc3);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B6e9fc4:{NFSU2_TR(0x6e9fc4);
u8 U[8];
__builtin_memmove((U+0),(G+4),4);
w1(F+11,sborrow<u32>(r4(G+0),r4(U+0)));
w4(U+4,u32(u32(r4(G+0))-u32(r4(U+0))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e9fc6:{NFSU2_TR(0x6e9fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e9fca:{NFSU2_TR(0x6e9fca);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6e9f91u);}goto L6e9f91;}}
{[[clang::musttail]] return blk_6e9fcc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9fcc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9fcc:L6e9fcc:{bud-=3;NFSU2_TR(0x6e9fcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B6e9fcf:{NFSU2_TR(0x6e9fcf);
u8 U[1];
w1(F+0,u8(0x0ull));
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B6e9fd1:{NFSU2_TR(0x6e9fd1);
u8 U[1];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_6ea01f(ARGS);}}
}
B6e9fd3:L6e9fd3:{bud-=2;NFSU2_TR(0x6e9fd3);
__builtin_memmove((G+4),(R+28),4);
}
B6e9fd5:{NFSU2_TR(0x6e9fd5);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e9fdaull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e88f0u);}[[clang::musttail]] return blk_6e88f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9fda(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9fda:L6e9fda:{bud-=4;NFSU2_TR(0x6e9fda);
__builtin_memmove((G+4),(R+28),4);
}
B6e9fdc:{NFSU2_TR(0x6e9fdc);
__builtin_memmove((R+24),(G+0),4);
}
B6e9fde:{NFSU2_TR(0x6e9fde);
w4(R+12,u32(r1(R+12)));
}
B6e9fe1:{NFSU2_TR(0x6e9fe1);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6e9fe6ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x6e88f0u);}[[clang::musttail]] return blk_6e88f0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9fe6(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9fe6:L6e9fe6:{bud-=5;NFSU2_TR(0x6e9fe6);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B6e9fea:{NFSU2_TR(0x6e9fea);
w4(G+0,u32(u32(r4(G+0))&u32(u32(0xfffffffcull))));
}
B6e9fed:{NFSU2_TR(0x6e9fed);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e9fef:{NFSU2_TR(0x6e9fef);
u8 U[4];
w1(F+11,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+7,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6e9ff1:{NFSU2_TR(0x6e9ff1);
u8 U[2];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
w1(U+1,u8((r1(F+6))||(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6ea01f(ARGS);}}
{[[clang::musttail]] return blk_6e9ff3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6e9ff3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6e9ff3:L6e9ff3:{bud-=5;NFSU2_TR(0x6e9ff3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(G+4,u32(r2(U+0)));
}
B6e9ff6:{NFSU2_TR(0x6e9ff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6e9ff8:{NFSU2_TR(0x6e9ff8);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e9ffc:{NFSU2_TR(0x6e9ffc);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e9fff:{NFSU2_TR(0x6e9fff);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
{EXIT(0x6ea002u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_6e9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x6e9048:[[clang::musttail]] return blk_6e9048(c,a4,a0,a1,bud);
case 0x6e9066:[[clang::musttail]] return blk_6e9066(c,a4,a0,a1,bud);
case 0x6e9088:[[clang::musttail]] return blk_6e9088(c,a4,a0,a1,bud);
case 0x6e90c0:[[clang::musttail]] return blk_6e90c0(c,a4,a0,a1,bud);
case 0x6e90d2:[[clang::musttail]] return blk_6e90d2(c,a4,a0,a1,bud);
case 0x6e916b:[[clang::musttail]] return blk_6e916b(c,a4,a0,a1,bud);
case 0x6e9189:[[clang::musttail]] return blk_6e9189(c,a4,a0,a1,bud);
case 0x6e91a6:[[clang::musttail]] return blk_6e91a6(c,a4,a0,a1,bud);
case 0x6e91ec:[[clang::musttail]] return blk_6e91ec(c,a4,a0,a1,bud);
case 0x6e921e:[[clang::musttail]] return blk_6e921e(c,a4,a0,a1,bud);
case 0x6e9222:[[clang::musttail]] return blk_6e9222(c,a4,a0,a1,bud);
case 0x6e925e:[[clang::musttail]] return blk_6e925e(c,a4,a0,a1,bud);
case 0x6e9262:[[clang::musttail]] return blk_6e9262(c,a4,a0,a1,bud);
case 0x6e9264:[[clang::musttail]] return blk_6e9264(c,a4,a0,a1,bud);
case 0x6e92d0:[[clang::musttail]] return blk_6e92d0(c,a4,a0,a1,bud);
case 0x6e9369:[[clang::musttail]] return blk_6e9369(c,a4,a0,a1,bud);
case 0x6e9389:[[clang::musttail]] return blk_6e9389(c,a4,a0,a1,bud);
case 0x6e9390:[[clang::musttail]] return blk_6e9390(c,a4,a0,a1,bud);
case 0x6e93b1:[[clang::musttail]] return blk_6e93b1(c,a4,a0,a1,bud);
case 0x6e94a5:[[clang::musttail]] return blk_6e94a5(c,a4,a0,a1,bud);
case 0x6e94d7:[[clang::musttail]] return blk_6e94d7(c,a4,a0,a1,bud);
case 0x6e9503:[[clang::musttail]] return blk_6e9503(c,a4,a0,a1,bud);
case 0x6e960f:[[clang::musttail]] return blk_6e960f(c,a4,a0,a1,bud);
case 0x6e9613:[[clang::musttail]] return blk_6e9613(c,a4,a0,a1,bud);
case 0x6e9642:[[clang::musttail]] return blk_6e9642(c,a4,a0,a1,bud);
case 0x6e9650:[[clang::musttail]] return blk_6e9650(c,a4,a0,a1,bud);
case 0x6e9697:[[clang::musttail]] return blk_6e9697(c,a4,a0,a1,bud);
case 0x6e96a3:[[clang::musttail]] return blk_6e96a3(c,a4,a0,a1,bud);
case 0x6e96b5:[[clang::musttail]] return blk_6e96b5(c,a4,a0,a1,bud);
case 0x6e96c3:[[clang::musttail]] return blk_6e96c3(c,a4,a0,a1,bud);
case 0x6e96e0:[[clang::musttail]] return blk_6e96e0(c,a4,a0,a1,bud);
case 0x6e9757:[[clang::musttail]] return blk_6e9757(c,a4,a0,a1,bud);
case 0x6e975a:[[clang::musttail]] return blk_6e975a(c,a4,a0,a1,bud);
case 0x6e976f:[[clang::musttail]] return blk_6e976f(c,a4,a0,a1,bud);
case 0x6e9780:[[clang::musttail]] return blk_6e9780(c,a4,a0,a1,bud);
case 0x6e9792:[[clang::musttail]] return blk_6e9792(c,a4,a0,a1,bud);
case 0x6e97ac:[[clang::musttail]] return blk_6e97ac(c,a4,a0,a1,bud);
case 0x6e97b3:[[clang::musttail]] return blk_6e97b3(c,a4,a0,a1,bud);
case 0x6e97ca:[[clang::musttail]] return blk_6e97ca(c,a4,a0,a1,bud);
case 0x6e97da:[[clang::musttail]] return blk_6e97da(c,a4,a0,a1,bud);
case 0x6e97f0:[[clang::musttail]] return blk_6e97f0(c,a4,a0,a1,bud);
case 0x6e97fd:[[clang::musttail]] return blk_6e97fd(c,a4,a0,a1,bud);
case 0x6e9801:[[clang::musttail]] return blk_6e9801(c,a4,a0,a1,bud);
case 0x6e980c:[[clang::musttail]] return blk_6e980c(c,a4,a0,a1,bud);
case 0x6e9818:[[clang::musttail]] return blk_6e9818(c,a4,a0,a1,bud);
case 0x6e9819:[[clang::musttail]] return blk_6e9819(c,a4,a0,a1,bud);
case 0x6e9832:[[clang::musttail]] return blk_6e9832(c,a4,a0,a1,bud);
case 0x6e9843:[[clang::musttail]] return blk_6e9843(c,a4,a0,a1,bud);
case 0x6e9847:[[clang::musttail]] return blk_6e9847(c,a4,a0,a1,bud);
case 0x6e9856:[[clang::musttail]] return blk_6e9856(c,a4,a0,a1,bud);
case 0x6e9859:[[clang::musttail]] return blk_6e9859(c,a4,a0,a1,bud);
case 0x6e98db:[[clang::musttail]] return blk_6e98db(c,a4,a0,a1,bud);
case 0x6e98e0:[[clang::musttail]] return blk_6e98e0(c,a4,a0,a1,bud);
case 0x6e9904:[[clang::musttail]] return blk_6e9904(c,a4,a0,a1,bud);
case 0x6e992a:[[clang::musttail]] return blk_6e992a(c,a4,a0,a1,bud);
case 0x6e992e:[[clang::musttail]] return blk_6e992e(c,a4,a0,a1,bud);
case 0x6e9945:[[clang::musttail]] return blk_6e9945(c,a4,a0,a1,bud);
case 0x6e99ba:[[clang::musttail]] return blk_6e99ba(c,a4,a0,a1,bud);
case 0x6e99bc:[[clang::musttail]] return blk_6e99bc(c,a4,a0,a1,bud);
case 0x6e99e0:[[clang::musttail]] return blk_6e99e0(c,a4,a0,a1,bud);
case 0x6e99f3:[[clang::musttail]] return blk_6e99f3(c,a4,a0,a1,bud);
case 0x6e9a70:[[clang::musttail]] return blk_6e9a70(c,a4,a0,a1,bud);
case 0x6e9a92:[[clang::musttail]] return blk_6e9a92(c,a4,a0,a1,bud);
case 0x6e9ac0:[[clang::musttail]] return blk_6e9ac0(c,a4,a0,a1,bud);
case 0x6e9ad0:[[clang::musttail]] return blk_6e9ad0(c,a4,a0,a1,bud);
case 0x6e9b59:[[clang::musttail]] return blk_6e9b59(c,a4,a0,a1,bud);
case 0x6e9b76:[[clang::musttail]] return blk_6e9b76(c,a4,a0,a1,bud);
case 0x6e9bb2:[[clang::musttail]] return blk_6e9bb2(c,a4,a0,a1,bud);
case 0x6e9bde:[[clang::musttail]] return blk_6e9bde(c,a4,a0,a1,bud);
case 0x6e9be2:[[clang::musttail]] return blk_6e9be2(c,a4,a0,a1,bud);
case 0x6e9c18:[[clang::musttail]] return blk_6e9c18(c,a4,a0,a1,bud);
case 0x6e9c1c:[[clang::musttail]] return blk_6e9c1c(c,a4,a0,a1,bud);
case 0x6e9c1e:[[clang::musttail]] return blk_6e9c1e(c,a4,a0,a1,bud);
case 0x6e9c92:[[clang::musttail]] return blk_6e9c92(c,a4,a0,a1,bud);
case 0x6e9d0a:[[clang::musttail]] return blk_6e9d0a(c,a4,a0,a1,bud);
case 0x6e9d11:[[clang::musttail]] return blk_6e9d11(c,a4,a0,a1,bud);
case 0x6e9d40:[[clang::musttail]] return blk_6e9d40(c,a4,a0,a1,bud);
case 0x6e9e3f:[[clang::musttail]] return blk_6e9e3f(c,a4,a0,a1,bud);
case 0x6e9e71:[[clang::musttail]] return blk_6e9e71(c,a4,a0,a1,bud);
case 0x6e9f78:[[clang::musttail]] return blk_6e9f78(c,a4,a0,a1,bud);
case 0x6e9f81:[[clang::musttail]] return blk_6e9f81(c,a4,a0,a1,bud);
case 0x6e9f91:[[clang::musttail]] return blk_6e9f91(c,a4,a0,a1,bud);
case 0x6e9fcc:[[clang::musttail]] return blk_6e9fcc(c,a4,a0,a1,bud);
case 0x6e9fda:[[clang::musttail]] return blk_6e9fda(c,a4,a0,a1,bud);
case 0x6e9fe6:[[clang::musttail]] return blk_6e9fe6(c,a4,a0,a1,bud);
case 0x6e9ff3:[[clang::musttail]] return blk_6e9ff3(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_6e9(Cpu& c){u8* R=c.regs.data();return ent_6e9(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
