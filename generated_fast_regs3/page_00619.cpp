#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_60d700(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619191(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619c4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619c51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619c7e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61ab25(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61912a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_61915b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6195b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619949(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619bed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619c16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619c2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619002:L619002:{bud-=87;NFSU2_TR(0x619002);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619005:{NFSU2_TR(0x619005);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619007:{NFSU2_TR(0x619007);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61900b:{NFSU2_TR(0x61900b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61900e:{NFSU2_TR(0x61900e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619010:{NFSU2_TR(0x619010);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619014:{NFSU2_TR(0x619014);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619017:{NFSU2_TR(0x619017);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619019:{NFSU2_TR(0x619019);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619020:{NFSU2_TR(0x619020);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619024:{NFSU2_TR(0x619024);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619027:{NFSU2_TR(0x619027);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61902b:{NFSU2_TR(0x61902b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61902e:{NFSU2_TR(0x61902e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619030:{NFSU2_TR(0x619030);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619034:{NFSU2_TR(0x619034);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619037:{NFSU2_TR(0x619037);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619039:{NFSU2_TR(0x619039);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61903d:{NFSU2_TR(0x61903d);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619040:{NFSU2_TR(0x619040);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619042:{NFSU2_TR(0x619042);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619049:{NFSU2_TR(0x619049);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61904d:{NFSU2_TR(0x61904d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619050:{NFSU2_TR(0x619050);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619054:{NFSU2_TR(0x619054);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619057:{NFSU2_TR(0x619057);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619059:{NFSU2_TR(0x619059);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61905d:{NFSU2_TR(0x61905d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619060:{NFSU2_TR(0x619060);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619062:{NFSU2_TR(0x619062);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619066:{NFSU2_TR(0x619066);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619069:{NFSU2_TR(0x619069);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61906b:{NFSU2_TR(0x61906b);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619072:{NFSU2_TR(0x619072);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619076:{NFSU2_TR(0x619076);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619079:{NFSU2_TR(0x619079);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61907d:{NFSU2_TR(0x61907d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61907f:{NFSU2_TR(0x61907f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619081:{NFSU2_TR(0x619081);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619085:{NFSU2_TR(0x619085);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619088:{NFSU2_TR(0x619088);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61908a:{NFSU2_TR(0x61908a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61908e:{NFSU2_TR(0x61908e);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619091:{NFSU2_TR(0x619091);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619093:{NFSU2_TR(0x619093);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61909a:{NFSU2_TR(0x61909a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61909e:{NFSU2_TR(0x61909e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190a2:{NFSU2_TR(0x6190a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6190a9:{NFSU2_TR(0x6190a9);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190ac:{NFSU2_TR(0x6190ac);
u8 U[6];
w1(F+0,carry<u32>(r4(G+0),u32(0x40ull)));
w1(F+11,scarry<u32>(r4(G+0),u32(0x40ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B6190af:{NFSU2_TR(0x6190af);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190b3:{NFSU2_TR(0x6190b3);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6190b4:{NFSU2_TR(0x6190b4);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190b7:{NFSU2_TR(0x6190b7);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6190b8:{NFSU2_TR(0x6190b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190ba:{NFSU2_TR(0x6190ba);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190be:{NFSU2_TR(0x6190be);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190c1:{NFSU2_TR(0x6190c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190c3:{NFSU2_TR(0x6190c3);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190c7:{NFSU2_TR(0x6190c7);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190ca:{NFSU2_TR(0x6190ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190cc:{NFSU2_TR(0x6190cc);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6190d3:{NFSU2_TR(0x6190d3);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190d7:{NFSU2_TR(0x6190d7);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190da:{NFSU2_TR(0x6190da);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190de:{NFSU2_TR(0x6190de);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190e1:{NFSU2_TR(0x6190e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190e3:{NFSU2_TR(0x6190e3);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190e7:{NFSU2_TR(0x6190e7);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190ea:{NFSU2_TR(0x6190ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190ec:{NFSU2_TR(0x6190ec);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6190f0:{NFSU2_TR(0x6190f0);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6190f3:{NFSU2_TR(0x6190f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6190f5:{NFSU2_TR(0x6190f5);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6190fc:{NFSU2_TR(0x6190fc);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619100:{NFSU2_TR(0x619100);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619103:{NFSU2_TR(0x619103);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619107:{NFSU2_TR(0x619107);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61910a:{NFSU2_TR(0x61910a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61910c:{NFSU2_TR(0x61910c);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619110:{NFSU2_TR(0x619110);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619113:{NFSU2_TR(0x619113);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619115:{NFSU2_TR(0x619115);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619119:{NFSU2_TR(0x619119);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61911c:{NFSU2_TR(0x61911c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61911e:{NFSU2_TR(0x61911e);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619125:{NFSU2_TR(0x619125);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61912aull));
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
PN u32 blk_61912a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61912a:L61912a:{bud-=14;NFSU2_TR(0x61912a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61912d:{NFSU2_TR(0x61912d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B619131:{NFSU2_TR(0x619131);
u8 U[4];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B619138:{NFSU2_TR(0x619138);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619139:{NFSU2_TR(0x619139);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61913a:{NFSU2_TR(0x61913a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61913e:{NFSU2_TR(0x61913e);
u8 U[4];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B619145:{NFSU2_TR(0x619145);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619146:{NFSU2_TR(0x619146);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61914b:{NFSU2_TR(0x61914b);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B61914e:{NFSU2_TR(0x61914e);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1c0ull))));
}
B619154:{NFSU2_TR(0x619154);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619155:{NFSU2_TR(0x619155);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619156:{NFSU2_TR(0x619156);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x61915bull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48f660u);}[[clang::musttail]] return blk_48f660(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_61915b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B61915b:L61915b:{bud-=3;NFSU2_TR(0x61915b);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
}
B61915e:{NFSU2_TR(0x61915e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B619160:{NFSU2_TR(0x619160);
if(r1(F+6)){{[[clang::musttail]] return blk_619191(ARGS);}}
}
B619162:L619162:{bud-=15;NFSU2_TR(0x619162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B619165:{NFSU2_TR(0x619165);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61916c:{NFSU2_TR(0x61916c);
w4(G+0,u32(u32(r4(G+0))|u32(r4(G+4))));
}
B61916e:{NFSU2_TR(0x61916e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B619171:{NFSU2_TR(0x619171);
w4(G+0,u32(u32(r4(G+0))|u32(u32(0x8000ull))));
}
B619176:{NFSU2_TR(0x619176);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619178:{NFSU2_TR(0x619178);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619179:{NFSU2_TR(0x619179);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61917d:{NFSU2_TR(0x61917d);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1c0ull))));
}
B619182:{NFSU2_TR(0x619182);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619183:{NFSU2_TR(0x619183);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619187:{NFSU2_TR(0x619187);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B61918a:{NFSU2_TR(0x61918a);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61918b:{NFSU2_TR(0x61918b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61918c:{NFSU2_TR(0x61918c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x619191ull));
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
PN u32 blk_619191(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619191:L619191:{bud-=3;NFSU2_TR(0x619191);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619195:{NFSU2_TR(0x619195);
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
B619197:{NFSU2_TR(0x619197);
if(r1(F+6)){{[[clang::musttail]] return blk_619c7e(ARGS);}}
}
B61919d:L61919d:{bud-=197;NFSU2_TR(0x61919d);
{u32 ea_=u32(r4(G+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191a4:{NFSU2_TR(0x6191a4);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191aa:{NFSU2_TR(0x6191aa);
{u32 ea_=u32(r4(G+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191b1:{NFSU2_TR(0x6191b1);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191b7:{NFSU2_TR(0x6191b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6191b9:{NFSU2_TR(0x6191b9);
{u32 ea_=u32(r4(G+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191c0:{NFSU2_TR(0x6191c0);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191c6:{NFSU2_TR(0x6191c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6191c8:{NFSU2_TR(0x6191c8);
{u32 ea_=u32(r4(G+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191cf:{NFSU2_TR(0x6191cf);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191d5:{NFSU2_TR(0x6191d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6191d7:{NFSU2_TR(0x6191d7);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6191db:{NFSU2_TR(0x6191db);
{u32 ea_=u32(r4(G+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191e2:{NFSU2_TR(0x6191e2);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191e8:{NFSU2_TR(0x6191e8);
{u32 ea_=u32(r4(G+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191ef:{NFSU2_TR(0x6191ef);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6191f5:{NFSU2_TR(0x6191f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6191f7:{NFSU2_TR(0x6191f7);
{u32 ea_=u32(r4(G+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6191fe:{NFSU2_TR(0x6191fe);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619204:{NFSU2_TR(0x619204);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619206:{NFSU2_TR(0x619206);
{u32 ea_=u32(r4(G+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61920d:{NFSU2_TR(0x61920d);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619213:{NFSU2_TR(0x619213);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619215:{NFSU2_TR(0x619215);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619219:{NFSU2_TR(0x619219);
{u32 ea_=u32(r4(G+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619220:{NFSU2_TR(0x619220);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619226:{NFSU2_TR(0x619226);
{u32 ea_=u32(r4(G+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61922d:{NFSU2_TR(0x61922d);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619233:{NFSU2_TR(0x619233);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619235:{NFSU2_TR(0x619235);
{u32 ea_=u32(r4(G+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61923c:{NFSU2_TR(0x61923c);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619242:{NFSU2_TR(0x619242);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619244:{NFSU2_TR(0x619244);
{u32 ea_=u32(r4(G+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61924b:{NFSU2_TR(0x61924b);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619251:{NFSU2_TR(0x619251);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619253:{NFSU2_TR(0x619253);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619257:{NFSU2_TR(0x619257);
{u32 ea_=u32(r4(G+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61925e:{NFSU2_TR(0x61925e);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619264:{NFSU2_TR(0x619264);
{u32 ea_=u32(r4(G+16)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61926b:{NFSU2_TR(0x61926b);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619271:{NFSU2_TR(0x619271);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619273:{NFSU2_TR(0x619273);
{u32 ea_=u32(r4(G+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61927a:{NFSU2_TR(0x61927a);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619280:{NFSU2_TR(0x619280);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619282:{NFSU2_TR(0x619282);
{u32 ea_=u32(r4(G+16)+u32(420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619289:{NFSU2_TR(0x619289);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61928f:{NFSU2_TR(0x61928f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619291:{NFSU2_TR(0x619291);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619295:{NFSU2_TR(0x619295);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61929c:{NFSU2_TR(0x61929c);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192a2:{NFSU2_TR(0x6192a2);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192a9:{NFSU2_TR(0x6192a9);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192af:{NFSU2_TR(0x6192af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6192b1:{NFSU2_TR(0x6192b1);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192b8:{NFSU2_TR(0x6192b8);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192be:{NFSU2_TR(0x6192be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6192c0:{NFSU2_TR(0x6192c0);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192c7:{NFSU2_TR(0x6192c7);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192cd:{NFSU2_TR(0x6192cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6192cf:{NFSU2_TR(0x6192cf);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6192d6:{NFSU2_TR(0x6192d6);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192dd:{NFSU2_TR(0x6192dd);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192e3:{NFSU2_TR(0x6192e3);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192ea:{NFSU2_TR(0x6192ea);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192f0:{NFSU2_TR(0x6192f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6192f2:{NFSU2_TR(0x6192f2);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6192f9:{NFSU2_TR(0x6192f9);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6192ff:{NFSU2_TR(0x6192ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619301:{NFSU2_TR(0x619301);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619308:{NFSU2_TR(0x619308);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61930e:{NFSU2_TR(0x61930e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619310:{NFSU2_TR(0x619310);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619317:{NFSU2_TR(0x619317);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61931e:{NFSU2_TR(0x61931e);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619324:{NFSU2_TR(0x619324);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61932b:{NFSU2_TR(0x61932b);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619331:{NFSU2_TR(0x619331);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619333:{NFSU2_TR(0x619333);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61933a:{NFSU2_TR(0x61933a);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619340:{NFSU2_TR(0x619340);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619342:{NFSU2_TR(0x619342);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619349:{NFSU2_TR(0x619349);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61934f:{NFSU2_TR(0x61934f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619351:{NFSU2_TR(0x619351);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619358:{NFSU2_TR(0x619358);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61935f:{NFSU2_TR(0x61935f);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619365:{NFSU2_TR(0x619365);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61936c:{NFSU2_TR(0x61936c);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619372:{NFSU2_TR(0x619372);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619374:{NFSU2_TR(0x619374);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61937b:{NFSU2_TR(0x61937b);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619381:{NFSU2_TR(0x619381);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619383:{NFSU2_TR(0x619383);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61938a:{NFSU2_TR(0x61938a);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619390:{NFSU2_TR(0x619390);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619392:{NFSU2_TR(0x619392);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619399:{NFSU2_TR(0x619399);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193a0:{NFSU2_TR(0x6193a0);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193a6:{NFSU2_TR(0x6193a6);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193ad:{NFSU2_TR(0x6193ad);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193b3:{NFSU2_TR(0x6193b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6193b5:{NFSU2_TR(0x6193b5);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193bc:{NFSU2_TR(0x6193bc);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193c2:{NFSU2_TR(0x6193c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6193c4:{NFSU2_TR(0x6193c4);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193cb:{NFSU2_TR(0x6193cb);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193d1:{NFSU2_TR(0x6193d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6193d3:{NFSU2_TR(0x6193d3);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6193da:{NFSU2_TR(0x6193da);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193e1:{NFSU2_TR(0x6193e1);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193e7:{NFSU2_TR(0x6193e7);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193ee:{NFSU2_TR(0x6193ee);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6193f4:{NFSU2_TR(0x6193f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6193f6:{NFSU2_TR(0x6193f6);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6193fd:{NFSU2_TR(0x6193fd);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619403:{NFSU2_TR(0x619403);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619405:{NFSU2_TR(0x619405);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61940c:{NFSU2_TR(0x61940c);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619412:{NFSU2_TR(0x619412);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619414:{NFSU2_TR(0x619414);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61941b:{NFSU2_TR(0x61941b);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619422:{NFSU2_TR(0x619422);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619428:{NFSU2_TR(0x619428);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61942f:{NFSU2_TR(0x61942f);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619435:{NFSU2_TR(0x619435);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619437:{NFSU2_TR(0x619437);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61943e:{NFSU2_TR(0x61943e);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619444:{NFSU2_TR(0x619444);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619446:{NFSU2_TR(0x619446);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61944d:{NFSU2_TR(0x61944d);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619453:{NFSU2_TR(0x619453);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619455:{NFSU2_TR(0x619455);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61945c:{NFSU2_TR(0x61945c);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619463:{NFSU2_TR(0x619463);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619469:{NFSU2_TR(0x619469);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619470:{NFSU2_TR(0x619470);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619476:{NFSU2_TR(0x619476);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619478:{NFSU2_TR(0x619478);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61947f:{NFSU2_TR(0x61947f);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619485:{NFSU2_TR(0x619485);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619487:{NFSU2_TR(0x619487);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61948e:{NFSU2_TR(0x61948e);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619494:{NFSU2_TR(0x619494);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619496:{NFSU2_TR(0x619496);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61949d:{NFSU2_TR(0x61949d);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194a4:{NFSU2_TR(0x6194a4);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194aa:{NFSU2_TR(0x6194aa);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194b1:{NFSU2_TR(0x6194b1);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194b7:{NFSU2_TR(0x6194b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6194b9:{NFSU2_TR(0x6194b9);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194c0:{NFSU2_TR(0x6194c0);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194c6:{NFSU2_TR(0x6194c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6194c8:{NFSU2_TR(0x6194c8);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194cf:{NFSU2_TR(0x6194cf);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194d5:{NFSU2_TR(0x6194d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6194d7:{NFSU2_TR(0x6194d7);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6194de:{NFSU2_TR(0x6194de);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194e5:{NFSU2_TR(0x6194e5);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194eb:{NFSU2_TR(0x6194eb);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6194f2:{NFSU2_TR(0x6194f2);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6194f8:{NFSU2_TR(0x6194f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6194fa:{NFSU2_TR(0x6194fa);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619501:{NFSU2_TR(0x619501);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619507:{NFSU2_TR(0x619507);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619509:{NFSU2_TR(0x619509);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619510:{NFSU2_TR(0x619510);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619516:{NFSU2_TR(0x619516);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619518:{NFSU2_TR(0x619518);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61951f:{NFSU2_TR(0x61951f);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619526:{NFSU2_TR(0x619526);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61952c:{NFSU2_TR(0x61952c);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619533:{NFSU2_TR(0x619533);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619539:{NFSU2_TR(0x619539);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61953b:{NFSU2_TR(0x61953b);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619542:{NFSU2_TR(0x619542);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619548:{NFSU2_TR(0x619548);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61954a:{NFSU2_TR(0x61954a);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619551:{NFSU2_TR(0x619551);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619557:{NFSU2_TR(0x619557);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619559:{NFSU2_TR(0x619559);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619560:{NFSU2_TR(0x619560);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619567:{NFSU2_TR(0x619567);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61956d:{NFSU2_TR(0x61956d);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619574:{NFSU2_TR(0x619574);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B619578:{NFSU2_TR(0x619578);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61957e:{NFSU2_TR(0x61957e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61957f:{NFSU2_TR(0x61957f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B619583:{NFSU2_TR(0x619583);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619584:{NFSU2_TR(0x619584);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619586:{NFSU2_TR(0x619586);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61958d:{NFSU2_TR(0x61958d);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619593:{NFSU2_TR(0x619593);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619595:{NFSU2_TR(0x619595);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61959c:{NFSU2_TR(0x61959c);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195a2:{NFSU2_TR(0x6195a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195a4:{NFSU2_TR(0x6195a4);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6195ab:{NFSU2_TR(0x6195ab);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6195b0ull));
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
PN u32 blk_6195b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6195b0:L6195b0:{bud-=197;NFSU2_TR(0x6195b0);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195b7:{NFSU2_TR(0x6195b7);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195bb:{NFSU2_TR(0x6195bb);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195c2:{NFSU2_TR(0x6195c2);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195c6:{NFSU2_TR(0x6195c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195c8:{NFSU2_TR(0x6195c8);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195cc:{NFSU2_TR(0x6195cc);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195d3:{NFSU2_TR(0x6195d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195d5:{NFSU2_TR(0x6195d5);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195d9:{NFSU2_TR(0x6195d9);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195e0:{NFSU2_TR(0x6195e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195e2:{NFSU2_TR(0x6195e2);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6195e6:{NFSU2_TR(0x6195e6);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195ed:{NFSU2_TR(0x6195ed);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195f1:{NFSU2_TR(0x6195f1);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6195f8:{NFSU2_TR(0x6195f8);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6195fc:{NFSU2_TR(0x6195fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6195fe:{NFSU2_TR(0x6195fe);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619605:{NFSU2_TR(0x619605);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619609:{NFSU2_TR(0x619609);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61960b:{NFSU2_TR(0x61960b);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61960f:{NFSU2_TR(0x61960f);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619616:{NFSU2_TR(0x619616);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619618:{NFSU2_TR(0x619618);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61961c:{NFSU2_TR(0x61961c);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619623:{NFSU2_TR(0x619623);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619627:{NFSU2_TR(0x619627);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61962e:{NFSU2_TR(0x61962e);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619632:{NFSU2_TR(0x619632);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619634:{NFSU2_TR(0x619634);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61963b:{NFSU2_TR(0x61963b);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61963f:{NFSU2_TR(0x61963f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619641:{NFSU2_TR(0x619641);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619645:{NFSU2_TR(0x619645);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61964c:{NFSU2_TR(0x61964c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61964e:{NFSU2_TR(0x61964e);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619655:{NFSU2_TR(0x619655);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61965c:{NFSU2_TR(0x61965c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619660:{NFSU2_TR(0x619660);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619667:{NFSU2_TR(0x619667);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61966b:{NFSU2_TR(0x61966b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61966d:{NFSU2_TR(0x61966d);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619674:{NFSU2_TR(0x619674);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619678:{NFSU2_TR(0x619678);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61967a:{NFSU2_TR(0x61967a);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61967e:{NFSU2_TR(0x61967e);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619685:{NFSU2_TR(0x619685);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619687:{NFSU2_TR(0x619687);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61968e:{NFSU2_TR(0x61968e);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619695:{NFSU2_TR(0x619695);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619699:{NFSU2_TR(0x619699);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196a0:{NFSU2_TR(0x6196a0);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196a4:{NFSU2_TR(0x6196a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196a6:{NFSU2_TR(0x6196a6);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196ad:{NFSU2_TR(0x6196ad);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196b1:{NFSU2_TR(0x6196b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196b3:{NFSU2_TR(0x6196b3);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196b7:{NFSU2_TR(0x6196b7);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196be:{NFSU2_TR(0x6196be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196c0:{NFSU2_TR(0x6196c0);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6196c7:{NFSU2_TR(0x6196c7);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196ce:{NFSU2_TR(0x6196ce);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196d2:{NFSU2_TR(0x6196d2);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196d9:{NFSU2_TR(0x6196d9);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196dd:{NFSU2_TR(0x6196dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196df:{NFSU2_TR(0x6196df);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196e6:{NFSU2_TR(0x6196e6);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196ea:{NFSU2_TR(0x6196ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196ec:{NFSU2_TR(0x6196ec);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6196f3:{NFSU2_TR(0x6196f3);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6196f7:{NFSU2_TR(0x6196f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6196f9:{NFSU2_TR(0x6196f9);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619700:{NFSU2_TR(0x619700);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619707:{NFSU2_TR(0x619707);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61970b:{NFSU2_TR(0x61970b);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619712:{NFSU2_TR(0x619712);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619716:{NFSU2_TR(0x619716);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619718:{NFSU2_TR(0x619718);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61971f:{NFSU2_TR(0x61971f);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619723:{NFSU2_TR(0x619723);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619725:{NFSU2_TR(0x619725);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61972c:{NFSU2_TR(0x61972c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619730:{NFSU2_TR(0x619730);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619732:{NFSU2_TR(0x619732);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619739:{NFSU2_TR(0x619739);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619740:{NFSU2_TR(0x619740);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619744:{NFSU2_TR(0x619744);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61974b:{NFSU2_TR(0x61974b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61974f:{NFSU2_TR(0x61974f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619751:{NFSU2_TR(0x619751);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619758:{NFSU2_TR(0x619758);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61975c:{NFSU2_TR(0x61975c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61975e:{NFSU2_TR(0x61975e);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619765:{NFSU2_TR(0x619765);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619769:{NFSU2_TR(0x619769);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61976b:{NFSU2_TR(0x61976b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619772:{NFSU2_TR(0x619772);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619779:{NFSU2_TR(0x619779);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61977d:{NFSU2_TR(0x61977d);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619784:{NFSU2_TR(0x619784);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619788:{NFSU2_TR(0x619788);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61978a:{NFSU2_TR(0x61978a);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619791:{NFSU2_TR(0x619791);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619795:{NFSU2_TR(0x619795);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619797:{NFSU2_TR(0x619797);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61979b:{NFSU2_TR(0x61979b);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197a2:{NFSU2_TR(0x6197a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197a4:{NFSU2_TR(0x6197a4);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6197ab:{NFSU2_TR(0x6197ab);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197b2:{NFSU2_TR(0x6197b2);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197b6:{NFSU2_TR(0x6197b6);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197bd:{NFSU2_TR(0x6197bd);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197c1:{NFSU2_TR(0x6197c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197c3:{NFSU2_TR(0x6197c3);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197ca:{NFSU2_TR(0x6197ca);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197ce:{NFSU2_TR(0x6197ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197d0:{NFSU2_TR(0x6197d0);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197d7:{NFSU2_TR(0x6197d7);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197db:{NFSU2_TR(0x6197db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197dd:{NFSU2_TR(0x6197dd);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6197e4:{NFSU2_TR(0x6197e4);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197eb:{NFSU2_TR(0x6197eb);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197ef:{NFSU2_TR(0x6197ef);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6197f6:{NFSU2_TR(0x6197f6);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6197fa:{NFSU2_TR(0x6197fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6197fc:{NFSU2_TR(0x6197fc);
{u32 ea_=u32(r4(G+16)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619803:{NFSU2_TR(0x619803);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619807:{NFSU2_TR(0x619807);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619809:{NFSU2_TR(0x619809);
{u32 ea_=u32(r4(G+16)+u32(688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619810:{NFSU2_TR(0x619810);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619814:{NFSU2_TR(0x619814);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619816:{NFSU2_TR(0x619816);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61981d:{NFSU2_TR(0x61981d);
{u32 ea_=u32(r4(G+16)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619824:{NFSU2_TR(0x619824);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619828:{NFSU2_TR(0x619828);
{u32 ea_=u32(r4(G+16)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61982f:{NFSU2_TR(0x61982f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619833:{NFSU2_TR(0x619833);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619835:{NFSU2_TR(0x619835);
{u32 ea_=u32(r4(G+16)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61983c:{NFSU2_TR(0x61983c);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619840:{NFSU2_TR(0x619840);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619842:{NFSU2_TR(0x619842);
{u32 ea_=u32(r4(G+16)+u32(692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619849:{NFSU2_TR(0x619849);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61984d:{NFSU2_TR(0x61984d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61984f:{NFSU2_TR(0x61984f);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619856:{NFSU2_TR(0x619856);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61985d:{NFSU2_TR(0x61985d);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619861:{NFSU2_TR(0x619861);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619868:{NFSU2_TR(0x619868);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61986c:{NFSU2_TR(0x61986c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61986e:{NFSU2_TR(0x61986e);
{u32 ea_=u32(r4(G+16)+u32(680u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619875:{NFSU2_TR(0x619875);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619879:{NFSU2_TR(0x619879);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61987b:{NFSU2_TR(0x61987b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61987f:{NFSU2_TR(0x61987f);
{u32 ea_=u32(r4(G+16)+u32(728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619886:{NFSU2_TR(0x619886);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619888:{NFSU2_TR(0x619888);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61988f:{NFSU2_TR(0x61988f);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619896:{NFSU2_TR(0x619896);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61989a:{NFSU2_TR(0x61989a);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198a1:{NFSU2_TR(0x6198a1);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198a5:{NFSU2_TR(0x6198a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198a7:{NFSU2_TR(0x6198a7);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198ae:{NFSU2_TR(0x6198ae);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198b2:{NFSU2_TR(0x6198b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198b4:{NFSU2_TR(0x6198b4);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198bb:{NFSU2_TR(0x6198bb);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198bf:{NFSU2_TR(0x6198bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198c1:{NFSU2_TR(0x6198c1);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6198c8:{NFSU2_TR(0x6198c8);
{u32 ea_=u32(r4(G+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198cf:{NFSU2_TR(0x6198cf);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198d3:{NFSU2_TR(0x6198d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6198d7:{NFSU2_TR(0x6198d7);
{u32 ea_=u32(r4(G+16)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198de:{NFSU2_TR(0x6198de);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6198df:{NFSU2_TR(0x6198df);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198e3:{NFSU2_TR(0x6198e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6198e7:{NFSU2_TR(0x6198e7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6198e8:{NFSU2_TR(0x6198e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198ea:{NFSU2_TR(0x6198ea);
{u32 ea_=u32(r4(G+16)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198f1:{NFSU2_TR(0x6198f1);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6198f5:{NFSU2_TR(0x6198f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6198f7:{NFSU2_TR(0x6198f7);
{u32 ea_=u32(r4(G+16)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6198fe:{NFSU2_TR(0x6198fe);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619902:{NFSU2_TR(0x619902);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619904:{NFSU2_TR(0x619904);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61990b:{NFSU2_TR(0x61990b);
{u32 ea_=u32(r4(G+16)+u32(748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619912:{NFSU2_TR(0x619912);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619916:{NFSU2_TR(0x619916);
{u32 ea_=u32(r4(G+16)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61991d:{NFSU2_TR(0x61991d);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619921:{NFSU2_TR(0x619921);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619923:{NFSU2_TR(0x619923);
{u32 ea_=u32(r4(G+16)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61992a:{NFSU2_TR(0x61992a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61992e:{NFSU2_TR(0x61992e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619930:{NFSU2_TR(0x619930);
{u32 ea_=u32(r4(G+16)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619937:{NFSU2_TR(0x619937);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61993b:{NFSU2_TR(0x61993b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61993d:{NFSU2_TR(0x61993d);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619944:{NFSU2_TR(0x619944);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x619949ull));
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
PN u32 blk_619949(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619949:L619949:{bud-=198;NFSU2_TR(0x619949);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61994d:{NFSU2_TR(0x61994d);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619950:{NFSU2_TR(0x619950);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619954:{NFSU2_TR(0x619954);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619956:{NFSU2_TR(0x619956);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619958:{NFSU2_TR(0x619958);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61995c:{NFSU2_TR(0x61995c);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61995f:{NFSU2_TR(0x61995f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619961:{NFSU2_TR(0x619961);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619965:{NFSU2_TR(0x619965);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619968:{NFSU2_TR(0x619968);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61996a:{NFSU2_TR(0x61996a);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619971:{NFSU2_TR(0x619971);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619975:{NFSU2_TR(0x619975);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619978:{NFSU2_TR(0x619978);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61997c:{NFSU2_TR(0x61997c);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61997f:{NFSU2_TR(0x61997f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619981:{NFSU2_TR(0x619981);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619985:{NFSU2_TR(0x619985);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619988:{NFSU2_TR(0x619988);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61998a:{NFSU2_TR(0x61998a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61998e:{NFSU2_TR(0x61998e);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619991:{NFSU2_TR(0x619991);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619993:{NFSU2_TR(0x619993);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61999a:{NFSU2_TR(0x61999a);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61999e:{NFSU2_TR(0x61999e);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199a1:{NFSU2_TR(0x6199a1);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199a5:{NFSU2_TR(0x6199a5);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199a8:{NFSU2_TR(0x6199a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199aa:{NFSU2_TR(0x6199aa);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199ae:{NFSU2_TR(0x6199ae);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199b1:{NFSU2_TR(0x6199b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199b3:{NFSU2_TR(0x6199b3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199b7:{NFSU2_TR(0x6199b7);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199ba:{NFSU2_TR(0x6199ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199bc:{NFSU2_TR(0x6199bc);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6199c3:{NFSU2_TR(0x6199c3);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199c7:{NFSU2_TR(0x6199c7);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199ca:{NFSU2_TR(0x6199ca);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199ce:{NFSU2_TR(0x6199ce);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199d1:{NFSU2_TR(0x6199d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199d3:{NFSU2_TR(0x6199d3);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199d7:{NFSU2_TR(0x6199d7);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199da:{NFSU2_TR(0x6199da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199dc:{NFSU2_TR(0x6199dc);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199e0:{NFSU2_TR(0x6199e0);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199e3:{NFSU2_TR(0x6199e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199e5:{NFSU2_TR(0x6199e5);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6199ec:{NFSU2_TR(0x6199ec);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199f0:{NFSU2_TR(0x6199f0);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199f3:{NFSU2_TR(0x6199f3);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199f7:{NFSU2_TR(0x6199f7);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6199f9:{NFSU2_TR(0x6199f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6199fb:{NFSU2_TR(0x6199fb);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6199ff:{NFSU2_TR(0x6199ff);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a02:{NFSU2_TR(0x619a02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a04:{NFSU2_TR(0x619a04);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a08:{NFSU2_TR(0x619a08);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a0b:{NFSU2_TR(0x619a0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a0d:{NFSU2_TR(0x619a0d);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619a14:{NFSU2_TR(0x619a14);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a18:{NFSU2_TR(0x619a18);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a1b:{NFSU2_TR(0x619a1b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a1f:{NFSU2_TR(0x619a1f);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a22:{NFSU2_TR(0x619a22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a24:{NFSU2_TR(0x619a24);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a28:{NFSU2_TR(0x619a28);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a2b:{NFSU2_TR(0x619a2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a2d:{NFSU2_TR(0x619a2d);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a31:{NFSU2_TR(0x619a31);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a34:{NFSU2_TR(0x619a34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a36:{NFSU2_TR(0x619a36);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619a3d:{NFSU2_TR(0x619a3d);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a41:{NFSU2_TR(0x619a41);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a44:{NFSU2_TR(0x619a44);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a48:{NFSU2_TR(0x619a48);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a4b:{NFSU2_TR(0x619a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a4d:{NFSU2_TR(0x619a4d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a51:{NFSU2_TR(0x619a51);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a54:{NFSU2_TR(0x619a54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a56:{NFSU2_TR(0x619a56);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a5a:{NFSU2_TR(0x619a5a);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a5d:{NFSU2_TR(0x619a5d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a5f:{NFSU2_TR(0x619a5f);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619a66:{NFSU2_TR(0x619a66);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a6a:{NFSU2_TR(0x619a6a);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a6d:{NFSU2_TR(0x619a6d);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a71:{NFSU2_TR(0x619a71);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a74:{NFSU2_TR(0x619a74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a76:{NFSU2_TR(0x619a76);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a7a:{NFSU2_TR(0x619a7a);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a7d:{NFSU2_TR(0x619a7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a7f:{NFSU2_TR(0x619a7f);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a83:{NFSU2_TR(0x619a83);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a86:{NFSU2_TR(0x619a86);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a88:{NFSU2_TR(0x619a88);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619a8f:{NFSU2_TR(0x619a8f);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a93:{NFSU2_TR(0x619a93);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a96:{NFSU2_TR(0x619a96);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619a9a:{NFSU2_TR(0x619a9a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619a9c:{NFSU2_TR(0x619a9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619a9e:{NFSU2_TR(0x619a9e);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619aa2:{NFSU2_TR(0x619aa2);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619aa5:{NFSU2_TR(0x619aa5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619aa7:{NFSU2_TR(0x619aa7);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619aab:{NFSU2_TR(0x619aab);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619aae:{NFSU2_TR(0x619aae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ab0:{NFSU2_TR(0x619ab0);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619ab7:{NFSU2_TR(0x619ab7);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619abb:{NFSU2_TR(0x619abb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619abe:{NFSU2_TR(0x619abe);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ac2:{NFSU2_TR(0x619ac2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ac5:{NFSU2_TR(0x619ac5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ac7:{NFSU2_TR(0x619ac7);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619acb:{NFSU2_TR(0x619acb);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ace:{NFSU2_TR(0x619ace);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ad0:{NFSU2_TR(0x619ad0);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ad4:{NFSU2_TR(0x619ad4);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ad7:{NFSU2_TR(0x619ad7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ad9:{NFSU2_TR(0x619ad9);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619ae0:{NFSU2_TR(0x619ae0);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ae4:{NFSU2_TR(0x619ae4);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ae7:{NFSU2_TR(0x619ae7);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619aeb:{NFSU2_TR(0x619aeb);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619aee:{NFSU2_TR(0x619aee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619af0:{NFSU2_TR(0x619af0);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619af4:{NFSU2_TR(0x619af4);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619af7:{NFSU2_TR(0x619af7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619af9:{NFSU2_TR(0x619af9);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619afd:{NFSU2_TR(0x619afd);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b00:{NFSU2_TR(0x619b00);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b02:{NFSU2_TR(0x619b02);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619b09:{NFSU2_TR(0x619b09);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b0d:{NFSU2_TR(0x619b0d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b10:{NFSU2_TR(0x619b10);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b14:{NFSU2_TR(0x619b14);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b17:{NFSU2_TR(0x619b17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b19:{NFSU2_TR(0x619b19);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b1d:{NFSU2_TR(0x619b1d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b20:{NFSU2_TR(0x619b20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b22:{NFSU2_TR(0x619b22);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b26:{NFSU2_TR(0x619b26);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b29:{NFSU2_TR(0x619b29);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b2b:{NFSU2_TR(0x619b2b);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619b32:{NFSU2_TR(0x619b32);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b36:{NFSU2_TR(0x619b36);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b39:{NFSU2_TR(0x619b39);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b3d:{NFSU2_TR(0x619b3d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b3f:{NFSU2_TR(0x619b3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b41:{NFSU2_TR(0x619b41);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b45:{NFSU2_TR(0x619b45);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b48:{NFSU2_TR(0x619b48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b4a:{NFSU2_TR(0x619b4a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b4e:{NFSU2_TR(0x619b4e);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b51:{NFSU2_TR(0x619b51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b53:{NFSU2_TR(0x619b53);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619b5a:{NFSU2_TR(0x619b5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B619b5e:{NFSU2_TR(0x619b5e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b62:{NFSU2_TR(0x619b62);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B619b69:{NFSU2_TR(0x619b69);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b6c:{NFSU2_TR(0x619b6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619b6d:{NFSU2_TR(0x619b6d);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b71:{NFSU2_TR(0x619b71);
u8 U[6];
w1(F+0,carry<u32>(r4(R+12),u32(0x80ull)));
w1(F+11,scarry<u32>(r4(R+12),u32(0x80ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x80ull))));
w1(F+7,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B619b77:{NFSU2_TR(0x619b77);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b7a:{NFSU2_TR(0x619b7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619b7b:{NFSU2_TR(0x619b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b7d:{NFSU2_TR(0x619b7d);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b81:{NFSU2_TR(0x619b81);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b84:{NFSU2_TR(0x619b84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b86:{NFSU2_TR(0x619b86);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b8a:{NFSU2_TR(0x619b8a);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b8d:{NFSU2_TR(0x619b8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619b8f:{NFSU2_TR(0x619b8f);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619b96:{NFSU2_TR(0x619b96);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619b9a:{NFSU2_TR(0x619b9a);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619b9d:{NFSU2_TR(0x619b9d);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ba1:{NFSU2_TR(0x619ba1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ba4:{NFSU2_TR(0x619ba4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ba6:{NFSU2_TR(0x619ba6);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619baa:{NFSU2_TR(0x619baa);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bad:{NFSU2_TR(0x619bad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619baf:{NFSU2_TR(0x619baf);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bb3:{NFSU2_TR(0x619bb3);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bb6:{NFSU2_TR(0x619bb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619bb8:{NFSU2_TR(0x619bb8);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619bbf:{NFSU2_TR(0x619bbf);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bc3:{NFSU2_TR(0x619bc3);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bc6:{NFSU2_TR(0x619bc6);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bca:{NFSU2_TR(0x619bca);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bcd:{NFSU2_TR(0x619bcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619bcf:{NFSU2_TR(0x619bcf);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bd3:{NFSU2_TR(0x619bd3);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bd6:{NFSU2_TR(0x619bd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619bd8:{NFSU2_TR(0x619bd8);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619bdc:{NFSU2_TR(0x619bdc);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619bdf:{NFSU2_TR(0x619bdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619be1:{NFSU2_TR(0x619be1);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619be8:{NFSU2_TR(0x619be8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x619bedull));
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
PN u32 blk_619bed(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619bed:L619bed:{bud-=12;NFSU2_TR(0x619bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B619bf0:{NFSU2_TR(0x619bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619bf4:{NFSU2_TR(0x619bf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x428ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B619bfb:{NFSU2_TR(0x619bfb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619bfc:{NFSU2_TR(0x619bfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619bfd:{NFSU2_TR(0x619bfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B619c04:{NFSU2_TR(0x619c04);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c05:{NFSU2_TR(0x619c05);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c0a:{NFSU2_TR(0x619c0a);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x380ull))));
}
B619c0f:{NFSU2_TR(0x619c0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c10:{NFSU2_TR(0x619c10);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c11:{NFSU2_TR(0x619c11);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x619c16ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x48f660u);}[[clang::musttail]] return blk_48f660(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_619c16(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619c16:L619c16:{bud-=4;NFSU2_TR(0x619c16);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619c1d:{NFSU2_TR(0x619c1d);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x30ull))));
}
B619c20:{NFSU2_TR(0x619c20);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B619c22:{NFSU2_TR(0x619c22);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_619c4a(ARGS);}}
}
B619c24:L619c24:{bud-=4;NFSU2_TR(0x619c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B619c27:{NFSU2_TR(0x619c27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c28:{NFSU2_TR(0x619c28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c29:{NFSU2_TR(0x619c29);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x619c2eull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x60d700u);}[[clang::musttail]] return blk_60d700(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_619c2e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+514,F+2,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619c2e:L619c2e:{bud-=5;NFSU2_TR(0x619c2e);
{u32 ea_=u32(u32(9051228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B619c34:{NFSU2_TR(0x619c34);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B619c37:{NFSU2_TR(0x619c37);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B619c39:{NFSU2_TR(0x619c39);
u8 U[4];
w1(U+3,u8(u32(r1(G+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+2))==(u8(0x0ull))));
}
B619c3c:{NFSU2_TR(0x619c3c);
if(r1(F+2)){{[[clang::musttail]] return blk_619c4a(ARGS);}}
}
B619c3e:L619c3e:{bud-=3;NFSU2_TR(0x619c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619c42:{NFSU2_TR(0x619c42);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x1b6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B619c48:{NFSU2_TR(0x619c48);
{[[clang::musttail]] return blk_619c51(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_619c4a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619c4a:L619c4a:{bud-=1;NFSU2_TR(0x619c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_619c51(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_619c51(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619c51:L619c51:{bud-=2;NFSU2_TR(0x619c51);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B619c53:{NFSU2_TR(0x619c53);
if(r1(F+6)){{[[clang::musttail]] return blk_619c7e(ARGS);}}
}
B619c55:L619c55:{bud-=13;NFSU2_TR(0x619c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619c58:{NFSU2_TR(0x619c58);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B619c5f:{NFSU2_TR(0x619c5f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B619c61:{NFSU2_TR(0x619c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619c65:{NFSU2_TR(0x619c65);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c67:{NFSU2_TR(0x619c67);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8000ull))));
}
B619c6d:{NFSU2_TR(0x619c6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c6e:{NFSU2_TR(0x619c6e);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x380ull))));
}
B619c73:{NFSU2_TR(0x619c73);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c74:{NFSU2_TR(0x619c74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c75:{NFSU2_TR(0x619c75);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B619c76:{NFSU2_TR(0x619c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B619c79:{NFSU2_TR(0x619c79);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x619c7eull));
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
PN u32 blk_619c7e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B619c7e:L619c7e:{bud-=8;NFSU2_TR(0x619c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619c82:{NFSU2_TR(0x619c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B619c89:{NFSU2_TR(0x619c89);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b68ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B619c90:{NFSU2_TR(0x619c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B619c94:{NFSU2_TR(0x619c94);
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
B619c96:{NFSU2_TR(0x619c96);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B619c9d:{NFSU2_TR(0x619c9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B619ca4:{NFSU2_TR(0x619ca4);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_61ab25(ARGS);}}
}
B619caa:L619caa:{bud-=151;NFSU2_TR(0x619caa);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619cb1:{NFSU2_TR(0x619cb1);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619cb8:{NFSU2_TR(0x619cb8);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619cbf:{NFSU2_TR(0x619cbf);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619cc6:{NFSU2_TR(0x619cc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619cc8:{NFSU2_TR(0x619cc8);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ccf:{NFSU2_TR(0x619ccf);
{u32 ea_=u32(r4(G+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619cd6:{NFSU2_TR(0x619cd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619cd8:{NFSU2_TR(0x619cd8);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619cdf:{NFSU2_TR(0x619cdf);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ce6:{NFSU2_TR(0x619ce6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ce8:{NFSU2_TR(0x619ce8);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619cec:{NFSU2_TR(0x619cec);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619cf3:{NFSU2_TR(0x619cf3);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619cfa:{NFSU2_TR(0x619cfa);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d01:{NFSU2_TR(0x619d01);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d08:{NFSU2_TR(0x619d08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d0a:{NFSU2_TR(0x619d0a);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d11:{NFSU2_TR(0x619d11);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d18:{NFSU2_TR(0x619d18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d1a:{NFSU2_TR(0x619d1a);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d21:{NFSU2_TR(0x619d21);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d28:{NFSU2_TR(0x619d28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d2a:{NFSU2_TR(0x619d2a);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619d2e:{NFSU2_TR(0x619d2e);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d35:{NFSU2_TR(0x619d35);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d3c:{NFSU2_TR(0x619d3c);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d43:{NFSU2_TR(0x619d43);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d4a:{NFSU2_TR(0x619d4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d4c:{NFSU2_TR(0x619d4c);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d53:{NFSU2_TR(0x619d53);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d5a:{NFSU2_TR(0x619d5a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d5c:{NFSU2_TR(0x619d5c);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d63:{NFSU2_TR(0x619d63);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d6a:{NFSU2_TR(0x619d6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d6c:{NFSU2_TR(0x619d6c);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619d70:{NFSU2_TR(0x619d70);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d77:{NFSU2_TR(0x619d77);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d7e:{NFSU2_TR(0x619d7e);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d85:{NFSU2_TR(0x619d85);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d8c:{NFSU2_TR(0x619d8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d8e:{NFSU2_TR(0x619d8e);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619d95:{NFSU2_TR(0x619d95);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619d9c:{NFSU2_TR(0x619d9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619d9e:{NFSU2_TR(0x619d9e);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619da5:{NFSU2_TR(0x619da5);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dac:{NFSU2_TR(0x619dac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619dae:{NFSU2_TR(0x619dae);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619db2:{NFSU2_TR(0x619db2);
{u32 ea_=u32(r4(G+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619db9:{NFSU2_TR(0x619db9);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dc0:{NFSU2_TR(0x619dc0);
{u32 ea_=u32(r4(G+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619dc7:{NFSU2_TR(0x619dc7);
{u32 ea_=u32(r4(G+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dce:{NFSU2_TR(0x619dce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619dd0:{NFSU2_TR(0x619dd0);
{u32 ea_=u32(r4(G+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619dd7:{NFSU2_TR(0x619dd7);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dde:{NFSU2_TR(0x619dde);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619de0:{NFSU2_TR(0x619de0);
{u32 ea_=u32(r4(G+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619de7:{NFSU2_TR(0x619de7);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619dee:{NFSU2_TR(0x619dee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619df0:{NFSU2_TR(0x619df0);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619df7:{NFSU2_TR(0x619df7);
{u32 ea_=u32(r4(G+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619dfe:{NFSU2_TR(0x619dfe);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e05:{NFSU2_TR(0x619e05);
{u32 ea_=u32(r4(G+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e0c:{NFSU2_TR(0x619e0c);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e13:{NFSU2_TR(0x619e13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e15:{NFSU2_TR(0x619e15);
{u32 ea_=u32(r4(G+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e1c:{NFSU2_TR(0x619e1c);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e23:{NFSU2_TR(0x619e23);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e25:{NFSU2_TR(0x619e25);
{u32 ea_=u32(r4(G+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e2c:{NFSU2_TR(0x619e2c);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e33:{NFSU2_TR(0x619e33);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e35:{NFSU2_TR(0x619e35);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619e3c:{NFSU2_TR(0x619e3c);
{u32 ea_=u32(r4(G+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e43:{NFSU2_TR(0x619e43);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e4a:{NFSU2_TR(0x619e4a);
{u32 ea_=u32(r4(G+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e51:{NFSU2_TR(0x619e51);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e58:{NFSU2_TR(0x619e58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e5a:{NFSU2_TR(0x619e5a);
{u32 ea_=u32(r4(G+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e61:{NFSU2_TR(0x619e61);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e68:{NFSU2_TR(0x619e68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e6a:{NFSU2_TR(0x619e6a);
{u32 ea_=u32(r4(G+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e71:{NFSU2_TR(0x619e71);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e78:{NFSU2_TR(0x619e78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e7a:{NFSU2_TR(0x619e7a);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619e81:{NFSU2_TR(0x619e81);
{u32 ea_=u32(r4(G+16)+u32(508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e88:{NFSU2_TR(0x619e88);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e8f:{NFSU2_TR(0x619e8f);
{u32 ea_=u32(r4(G+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619e96:{NFSU2_TR(0x619e96);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619e9d:{NFSU2_TR(0x619e9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619e9f:{NFSU2_TR(0x619e9f);
{u32 ea_=u32(r4(G+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ea6:{NFSU2_TR(0x619ea6);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ead:{NFSU2_TR(0x619ead);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619eaf:{NFSU2_TR(0x619eaf);
{u32 ea_=u32(r4(G+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619eb6:{NFSU2_TR(0x619eb6);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ebd:{NFSU2_TR(0x619ebd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ebf:{NFSU2_TR(0x619ebf);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619ec6:{NFSU2_TR(0x619ec6);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619ecd:{NFSU2_TR(0x619ecd);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ed4:{NFSU2_TR(0x619ed4);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619edb:{NFSU2_TR(0x619edb);
{u32 ea_=u32(r4(G+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ee2:{NFSU2_TR(0x619ee2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ee4:{NFSU2_TR(0x619ee4);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619eeb:{NFSU2_TR(0x619eeb);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ef2:{NFSU2_TR(0x619ef2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ef4:{NFSU2_TR(0x619ef4);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619efb:{NFSU2_TR(0x619efb);
{u32 ea_=u32(r4(G+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f02:{NFSU2_TR(0x619f02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f04:{NFSU2_TR(0x619f04);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619f0b:{NFSU2_TR(0x619f0b);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f12:{NFSU2_TR(0x619f12);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f19:{NFSU2_TR(0x619f19);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f20:{NFSU2_TR(0x619f20);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f27:{NFSU2_TR(0x619f27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f29:{NFSU2_TR(0x619f29);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f30:{NFSU2_TR(0x619f30);
{u32 ea_=u32(r4(G+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f37:{NFSU2_TR(0x619f37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f39:{NFSU2_TR(0x619f39);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f40:{NFSU2_TR(0x619f40);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f47:{NFSU2_TR(0x619f47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f49:{NFSU2_TR(0x619f49);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619f50:{NFSU2_TR(0x619f50);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f57:{NFSU2_TR(0x619f57);
{u32 ea_=u32(r4(G+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f5e:{NFSU2_TR(0x619f5e);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f65:{NFSU2_TR(0x619f65);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f6c:{NFSU2_TR(0x619f6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f6e:{NFSU2_TR(0x619f6e);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f75:{NFSU2_TR(0x619f75);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f7c:{NFSU2_TR(0x619f7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f7e:{NFSU2_TR(0x619f7e);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f85:{NFSU2_TR(0x619f85);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619f8c:{NFSU2_TR(0x619f8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619f8e:{NFSU2_TR(0x619f8e);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619f95:{NFSU2_TR(0x619f95);
{u32 ea_=u32(r4(G+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619f9c:{NFSU2_TR(0x619f9c);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fa3:{NFSU2_TR(0x619fa3);
{u32 ea_=u32(r4(G+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619faa:{NFSU2_TR(0x619faa);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fb1:{NFSU2_TR(0x619fb1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619fb3:{NFSU2_TR(0x619fb3);
{u32 ea_=u32(r4(G+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fba:{NFSU2_TR(0x619fba);
{u32 ea_=u32(r4(G+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fc1:{NFSU2_TR(0x619fc1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619fc3:{NFSU2_TR(0x619fc3);
{u32 ea_=u32(r4(G+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fca:{NFSU2_TR(0x619fca);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fd1:{NFSU2_TR(0x619fd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619fd3:{NFSU2_TR(0x619fd3);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B619fda:{NFSU2_TR(0x619fda);
{u32 ea_=u32(r4(G+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fe1:{NFSU2_TR(0x619fe1);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619fe8:{NFSU2_TR(0x619fe8);
{u32 ea_=u32(r4(G+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fef:{NFSU2_TR(0x619fef);
{u32 ea_=u32(r4(G+16)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B619ff6:{NFSU2_TR(0x619ff6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B619ff8:{NFSU2_TR(0x619ff8);
{u32 ea_=u32(r4(G+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B619fff:{NFSU2_TR(0x619fff);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);EXIT(0x61a006u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_619(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x61912a:[[clang::musttail]] return blk_61912a(c,a4,a0,a1,bud);
case 0x61915b:[[clang::musttail]] return blk_61915b(c,a4,a0,a1,bud);
case 0x619191:[[clang::musttail]] return blk_619191(c,a4,a0,a1,bud);
case 0x6195b0:[[clang::musttail]] return blk_6195b0(c,a4,a0,a1,bud);
case 0x619949:[[clang::musttail]] return blk_619949(c,a4,a0,a1,bud);
case 0x619bed:[[clang::musttail]] return blk_619bed(c,a4,a0,a1,bud);
case 0x619c16:[[clang::musttail]] return blk_619c16(c,a4,a0,a1,bud);
case 0x619c2e:[[clang::musttail]] return blk_619c2e(c,a4,a0,a1,bud);
case 0x619c4a:[[clang::musttail]] return blk_619c4a(c,a4,a0,a1,bud);
case 0x619c51:[[clang::musttail]] return blk_619c51(c,a4,a0,a1,bud);
case 0x619c7e:[[clang::musttail]] return blk_619c7e(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_619(Cpu& c){u8* R=c.regs.data();return ent_619(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
