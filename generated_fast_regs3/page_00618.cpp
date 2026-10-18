#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_618791(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_619191(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6180f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_618499(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_618737(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_618762(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_618af0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_618e89(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_618001(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B618001:L618001:{bud-=73;NFSU2_TR(0x618001);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618003:{NFSU2_TR(0x618003);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618007:{NFSU2_TR(0x618007);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61800a:{NFSU2_TR(0x61800a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61800c:{NFSU2_TR(0x61800c);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618010:{NFSU2_TR(0x618010);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618013:{NFSU2_TR(0x618013);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618015:{NFSU2_TR(0x618015);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61801c:{NFSU2_TR(0x61801c);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618020:{NFSU2_TR(0x618020);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618023:{NFSU2_TR(0x618023);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618027:{NFSU2_TR(0x618027);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61802a:{NFSU2_TR(0x61802a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61802c:{NFSU2_TR(0x61802c);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618030:{NFSU2_TR(0x618030);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618033:{NFSU2_TR(0x618033);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618035:{NFSU2_TR(0x618035);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618039:{NFSU2_TR(0x618039);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61803c:{NFSU2_TR(0x61803c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61803e:{NFSU2_TR(0x61803e);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618045:{NFSU2_TR(0x618045);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618049:{NFSU2_TR(0x618049);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61804c:{NFSU2_TR(0x61804c);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618050:{NFSU2_TR(0x618050);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618053:{NFSU2_TR(0x618053);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618055:{NFSU2_TR(0x618055);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618059:{NFSU2_TR(0x618059);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61805b:{NFSU2_TR(0x61805b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61805d:{NFSU2_TR(0x61805d);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618061:{NFSU2_TR(0x618061);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618064:{NFSU2_TR(0x618064);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618066:{NFSU2_TR(0x618066);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61806d:{NFSU2_TR(0x61806d);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618071:{NFSU2_TR(0x618071);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618074:{NFSU2_TR(0x618074);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618078:{NFSU2_TR(0x618078);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61807b:{NFSU2_TR(0x61807b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61807d:{NFSU2_TR(0x61807d);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618081:{NFSU2_TR(0x618081);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618084:{NFSU2_TR(0x618084);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618086:{NFSU2_TR(0x618086);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61808a:{NFSU2_TR(0x61808a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61808d:{NFSU2_TR(0x61808d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61808f:{NFSU2_TR(0x61808f);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618096:{NFSU2_TR(0x618096);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61809a:{NFSU2_TR(0x61809a);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61809d:{NFSU2_TR(0x61809d);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6180a1:{NFSU2_TR(0x6180a1);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180a5:{NFSU2_TR(0x6180a5);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6180a6:{NFSU2_TR(0x6180a6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180a9:{NFSU2_TR(0x6180a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6180ad:{NFSU2_TR(0x6180ad);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6180ae:{NFSU2_TR(0x6180ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180b0:{NFSU2_TR(0x6180b0);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180b4:{NFSU2_TR(0x6180b4);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180b7:{NFSU2_TR(0x6180b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180b9:{NFSU2_TR(0x6180b9);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180bd:{NFSU2_TR(0x6180bd);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180c0:{NFSU2_TR(0x6180c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180c2:{NFSU2_TR(0x6180c2);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6180c9:{NFSU2_TR(0x6180c9);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180cd:{NFSU2_TR(0x6180cd);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180d0:{NFSU2_TR(0x6180d0);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180d4:{NFSU2_TR(0x6180d4);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180d7:{NFSU2_TR(0x6180d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180d9:{NFSU2_TR(0x6180d9);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180dd:{NFSU2_TR(0x6180dd);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180e0:{NFSU2_TR(0x6180e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180e2:{NFSU2_TR(0x6180e2);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180e6:{NFSU2_TR(0x6180e6);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6180e9:{NFSU2_TR(0x6180e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6180eb:{NFSU2_TR(0x6180eb);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6180f2:{NFSU2_TR(0x6180f2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6180f7ull));
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
PN u32 blk_6180f7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6180f7:L6180f7:{bud-=197;NFSU2_TR(0x6180f7);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6180fe:{NFSU2_TR(0x6180fe);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618102:{NFSU2_TR(0x618102);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618109:{NFSU2_TR(0x618109);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61810d:{NFSU2_TR(0x61810d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61810f:{NFSU2_TR(0x61810f);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618116:{NFSU2_TR(0x618116);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61811a:{NFSU2_TR(0x61811a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61811c:{NFSU2_TR(0x61811c);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618123:{NFSU2_TR(0x618123);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618127:{NFSU2_TR(0x618127);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618129:{NFSU2_TR(0x618129);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618130:{NFSU2_TR(0x618130);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618134:{NFSU2_TR(0x618134);
{u32 ea_=u32(r4(G+16)+u32(564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61813b:{NFSU2_TR(0x61813b);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618142:{NFSU2_TR(0x618142);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618146:{NFSU2_TR(0x618146);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618148:{NFSU2_TR(0x618148);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61814f:{NFSU2_TR(0x61814f);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618153:{NFSU2_TR(0x618153);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618155:{NFSU2_TR(0x618155);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61815c:{NFSU2_TR(0x61815c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618160:{NFSU2_TR(0x618160);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618162:{NFSU2_TR(0x618162);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618169:{NFSU2_TR(0x618169);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61816d:{NFSU2_TR(0x61816d);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618174:{NFSU2_TR(0x618174);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61817b:{NFSU2_TR(0x61817b);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61817f:{NFSU2_TR(0x61817f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618181:{NFSU2_TR(0x618181);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618188:{NFSU2_TR(0x618188);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61818c:{NFSU2_TR(0x61818c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61818e:{NFSU2_TR(0x61818e);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618195:{NFSU2_TR(0x618195);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618199:{NFSU2_TR(0x618199);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61819b:{NFSU2_TR(0x61819b);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6181a2:{NFSU2_TR(0x6181a2);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181a6:{NFSU2_TR(0x6181a6);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181ad:{NFSU2_TR(0x6181ad);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181b4:{NFSU2_TR(0x6181b4);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181b8:{NFSU2_TR(0x6181b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6181ba:{NFSU2_TR(0x6181ba);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181c1:{NFSU2_TR(0x6181c1);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181c5:{NFSU2_TR(0x6181c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6181c7:{NFSU2_TR(0x6181c7);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181ce:{NFSU2_TR(0x6181ce);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181d2:{NFSU2_TR(0x6181d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6181d4:{NFSU2_TR(0x6181d4);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6181db:{NFSU2_TR(0x6181db);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181e2:{NFSU2_TR(0x6181e2);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181e6:{NFSU2_TR(0x6181e6);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181ed:{NFSU2_TR(0x6181ed);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181f1:{NFSU2_TR(0x6181f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6181f3:{NFSU2_TR(0x6181f3);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6181fa:{NFSU2_TR(0x6181fa);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6181fe:{NFSU2_TR(0x6181fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618200:{NFSU2_TR(0x618200);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618207:{NFSU2_TR(0x618207);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61820b:{NFSU2_TR(0x61820b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61820d:{NFSU2_TR(0x61820d);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618214:{NFSU2_TR(0x618214);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61821b:{NFSU2_TR(0x61821b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61821f:{NFSU2_TR(0x61821f);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618226:{NFSU2_TR(0x618226);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61822a:{NFSU2_TR(0x61822a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61822c:{NFSU2_TR(0x61822c);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618233:{NFSU2_TR(0x618233);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618237:{NFSU2_TR(0x618237);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618239:{NFSU2_TR(0x618239);
{u32 ea_=u32(r4(G+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618240:{NFSU2_TR(0x618240);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618244:{NFSU2_TR(0x618244);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618246:{NFSU2_TR(0x618246);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61824d:{NFSU2_TR(0x61824d);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618254:{NFSU2_TR(0x618254);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618258:{NFSU2_TR(0x618258);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61825f:{NFSU2_TR(0x61825f);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618263:{NFSU2_TR(0x618263);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618265:{NFSU2_TR(0x618265);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61826c:{NFSU2_TR(0x61826c);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618270:{NFSU2_TR(0x618270);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618272:{NFSU2_TR(0x618272);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618279:{NFSU2_TR(0x618279);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61827d:{NFSU2_TR(0x61827d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61827f:{NFSU2_TR(0x61827f);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618286:{NFSU2_TR(0x618286);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61828d:{NFSU2_TR(0x61828d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618291:{NFSU2_TR(0x618291);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618298:{NFSU2_TR(0x618298);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61829c:{NFSU2_TR(0x61829c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61829e:{NFSU2_TR(0x61829e);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182a5:{NFSU2_TR(0x6182a5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182a9:{NFSU2_TR(0x6182a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182ab:{NFSU2_TR(0x6182ab);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182b2:{NFSU2_TR(0x6182b2);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182b6:{NFSU2_TR(0x6182b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182b8:{NFSU2_TR(0x6182b8);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6182bf:{NFSU2_TR(0x6182bf);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182c6:{NFSU2_TR(0x6182c6);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182ca:{NFSU2_TR(0x6182ca);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182d1:{NFSU2_TR(0x6182d1);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182d5:{NFSU2_TR(0x6182d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182d7:{NFSU2_TR(0x6182d7);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182de:{NFSU2_TR(0x6182de);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182e2:{NFSU2_TR(0x6182e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182e4:{NFSU2_TR(0x6182e4);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182eb:{NFSU2_TR(0x6182eb);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6182ef:{NFSU2_TR(0x6182ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6182f1:{NFSU2_TR(0x6182f1);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6182f8:{NFSU2_TR(0x6182f8);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6182ff:{NFSU2_TR(0x6182ff);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618303:{NFSU2_TR(0x618303);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61830a:{NFSU2_TR(0x61830a);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61830e:{NFSU2_TR(0x61830e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618310:{NFSU2_TR(0x618310);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618317:{NFSU2_TR(0x618317);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61831b:{NFSU2_TR(0x61831b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61831d:{NFSU2_TR(0x61831d);
{u32 ea_=u32(r4(G+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618324:{NFSU2_TR(0x618324);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618328:{NFSU2_TR(0x618328);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61832a:{NFSU2_TR(0x61832a);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618331:{NFSU2_TR(0x618331);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618338:{NFSU2_TR(0x618338);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61833c:{NFSU2_TR(0x61833c);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618343:{NFSU2_TR(0x618343);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618347:{NFSU2_TR(0x618347);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618349:{NFSU2_TR(0x618349);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618350:{NFSU2_TR(0x618350);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618354:{NFSU2_TR(0x618354);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618356:{NFSU2_TR(0x618356);
{u32 ea_=u32(r4(G+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61835d:{NFSU2_TR(0x61835d);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618361:{NFSU2_TR(0x618361);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618363:{NFSU2_TR(0x618363);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61836a:{NFSU2_TR(0x61836a);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618371:{NFSU2_TR(0x618371);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618375:{NFSU2_TR(0x618375);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61837c:{NFSU2_TR(0x61837c);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618380:{NFSU2_TR(0x618380);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618382:{NFSU2_TR(0x618382);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618389:{NFSU2_TR(0x618389);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61838d:{NFSU2_TR(0x61838d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61838f:{NFSU2_TR(0x61838f);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618396:{NFSU2_TR(0x618396);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61839a:{NFSU2_TR(0x61839a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61839c:{NFSU2_TR(0x61839c);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6183a3:{NFSU2_TR(0x6183a3);
{u32 ea_=u32(r4(G+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183aa:{NFSU2_TR(0x6183aa);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183ae:{NFSU2_TR(0x6183ae);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183b5:{NFSU2_TR(0x6183b5);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183b9:{NFSU2_TR(0x6183b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6183bb:{NFSU2_TR(0x6183bb);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183c2:{NFSU2_TR(0x6183c2);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183c6:{NFSU2_TR(0x6183c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6183c8:{NFSU2_TR(0x6183c8);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183cf:{NFSU2_TR(0x6183cf);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183d3:{NFSU2_TR(0x6183d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6183d5:{NFSU2_TR(0x6183d5);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6183dc:{NFSU2_TR(0x6183dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6183e3:{NFSU2_TR(0x6183e3);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183ea:{NFSU2_TR(0x6183ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6183eb:{NFSU2_TR(0x6183eb);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183ef:{NFSU2_TR(0x6183ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6183f3:{NFSU2_TR(0x6183f3);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6183fa:{NFSU2_TR(0x6183fa);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6183fb:{NFSU2_TR(0x6183fb);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6183ff:{NFSU2_TR(0x6183ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618401:{NFSU2_TR(0x618401);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618408:{NFSU2_TR(0x618408);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61840c:{NFSU2_TR(0x61840c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61840e:{NFSU2_TR(0x61840e);
{u32 ea_=u32(r4(G+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618415:{NFSU2_TR(0x618415);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618419:{NFSU2_TR(0x618419);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61841b:{NFSU2_TR(0x61841b);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618422:{NFSU2_TR(0x618422);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618429:{NFSU2_TR(0x618429);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61842d:{NFSU2_TR(0x61842d);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618434:{NFSU2_TR(0x618434);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618438:{NFSU2_TR(0x618438);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61843a:{NFSU2_TR(0x61843a);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618441:{NFSU2_TR(0x618441);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618445:{NFSU2_TR(0x618445);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618447:{NFSU2_TR(0x618447);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61844e:{NFSU2_TR(0x61844e);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618452:{NFSU2_TR(0x618452);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618454:{NFSU2_TR(0x618454);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61845b:{NFSU2_TR(0x61845b);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618462:{NFSU2_TR(0x618462);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618466:{NFSU2_TR(0x618466);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61846d:{NFSU2_TR(0x61846d);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618471:{NFSU2_TR(0x618471);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618473:{NFSU2_TR(0x618473);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61847a:{NFSU2_TR(0x61847a);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61847e:{NFSU2_TR(0x61847e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618480:{NFSU2_TR(0x618480);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618487:{NFSU2_TR(0x618487);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61848b:{NFSU2_TR(0x61848b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61848d:{NFSU2_TR(0x61848d);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618494:{NFSU2_TR(0x618494);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x618499ull));
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
PN u32 blk_618499(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B618499:L618499:{bud-=197;NFSU2_TR(0x618499);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61849d:{NFSU2_TR(0x61849d);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184a0:{NFSU2_TR(0x6184a0);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184a4:{NFSU2_TR(0x6184a4);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184a6:{NFSU2_TR(0x6184a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184a8:{NFSU2_TR(0x6184a8);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184ac:{NFSU2_TR(0x6184ac);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184af:{NFSU2_TR(0x6184af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184b1:{NFSU2_TR(0x6184b1);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184b5:{NFSU2_TR(0x6184b5);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184b8:{NFSU2_TR(0x6184b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184ba:{NFSU2_TR(0x6184ba);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6184c1:{NFSU2_TR(0x6184c1);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184c5:{NFSU2_TR(0x6184c5);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184c8:{NFSU2_TR(0x6184c8);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184cc:{NFSU2_TR(0x6184cc);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184cf:{NFSU2_TR(0x6184cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184d1:{NFSU2_TR(0x6184d1);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184d5:{NFSU2_TR(0x6184d5);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184d8:{NFSU2_TR(0x6184d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184da:{NFSU2_TR(0x6184da);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184de:{NFSU2_TR(0x6184de);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184e1:{NFSU2_TR(0x6184e1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184e3:{NFSU2_TR(0x6184e3);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6184ea:{NFSU2_TR(0x6184ea);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184ee:{NFSU2_TR(0x6184ee);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184f1:{NFSU2_TR(0x6184f1);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184f5:{NFSU2_TR(0x6184f5);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6184f8:{NFSU2_TR(0x6184f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6184fa:{NFSU2_TR(0x6184fa);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6184fe:{NFSU2_TR(0x6184fe);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618501:{NFSU2_TR(0x618501);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618503:{NFSU2_TR(0x618503);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618507:{NFSU2_TR(0x618507);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61850a:{NFSU2_TR(0x61850a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61850c:{NFSU2_TR(0x61850c);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618513:{NFSU2_TR(0x618513);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618517:{NFSU2_TR(0x618517);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61851a:{NFSU2_TR(0x61851a);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61851e:{NFSU2_TR(0x61851e);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618521:{NFSU2_TR(0x618521);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618523:{NFSU2_TR(0x618523);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618527:{NFSU2_TR(0x618527);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61852a:{NFSU2_TR(0x61852a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61852c:{NFSU2_TR(0x61852c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618530:{NFSU2_TR(0x618530);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618533:{NFSU2_TR(0x618533);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618535:{NFSU2_TR(0x618535);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61853c:{NFSU2_TR(0x61853c);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618540:{NFSU2_TR(0x618540);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618543:{NFSU2_TR(0x618543);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618547:{NFSU2_TR(0x618547);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61854a:{NFSU2_TR(0x61854a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61854c:{NFSU2_TR(0x61854c);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618550:{NFSU2_TR(0x618550);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618552:{NFSU2_TR(0x618552);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618554:{NFSU2_TR(0x618554);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618558:{NFSU2_TR(0x618558);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61855b:{NFSU2_TR(0x61855b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61855d:{NFSU2_TR(0x61855d);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618564:{NFSU2_TR(0x618564);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618568:{NFSU2_TR(0x618568);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61856b:{NFSU2_TR(0x61856b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61856f:{NFSU2_TR(0x61856f);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618572:{NFSU2_TR(0x618572);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618574:{NFSU2_TR(0x618574);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618578:{NFSU2_TR(0x618578);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61857b:{NFSU2_TR(0x61857b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61857d:{NFSU2_TR(0x61857d);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618581:{NFSU2_TR(0x618581);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618584:{NFSU2_TR(0x618584);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618586:{NFSU2_TR(0x618586);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61858d:{NFSU2_TR(0x61858d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618591:{NFSU2_TR(0x618591);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618594:{NFSU2_TR(0x618594);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618598:{NFSU2_TR(0x618598);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61859b:{NFSU2_TR(0x61859b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61859d:{NFSU2_TR(0x61859d);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185a1:{NFSU2_TR(0x6185a1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185a4:{NFSU2_TR(0x6185a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185a6:{NFSU2_TR(0x6185a6);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185aa:{NFSU2_TR(0x6185aa);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185ad:{NFSU2_TR(0x6185ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185af:{NFSU2_TR(0x6185af);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6185b6:{NFSU2_TR(0x6185b6);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185ba:{NFSU2_TR(0x6185ba);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185bd:{NFSU2_TR(0x6185bd);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185c1:{NFSU2_TR(0x6185c1);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185c4:{NFSU2_TR(0x6185c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185c6:{NFSU2_TR(0x6185c6);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185ca:{NFSU2_TR(0x6185ca);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185cd:{NFSU2_TR(0x6185cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185cf:{NFSU2_TR(0x6185cf);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185d3:{NFSU2_TR(0x6185d3);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185d6:{NFSU2_TR(0x6185d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185d8:{NFSU2_TR(0x6185d8);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6185df:{NFSU2_TR(0x6185df);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185e3:{NFSU2_TR(0x6185e3);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185e6:{NFSU2_TR(0x6185e6);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185ea:{NFSU2_TR(0x6185ea);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185ed:{NFSU2_TR(0x6185ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185ef:{NFSU2_TR(0x6185ef);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185f3:{NFSU2_TR(0x6185f3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185f5:{NFSU2_TR(0x6185f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6185f7:{NFSU2_TR(0x6185f7);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6185fb:{NFSU2_TR(0x6185fb);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6185fe:{NFSU2_TR(0x6185fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618600:{NFSU2_TR(0x618600);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618607:{NFSU2_TR(0x618607);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61860b:{NFSU2_TR(0x61860b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61860e:{NFSU2_TR(0x61860e);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618612:{NFSU2_TR(0x618612);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618615:{NFSU2_TR(0x618615);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618617:{NFSU2_TR(0x618617);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61861b:{NFSU2_TR(0x61861b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61861e:{NFSU2_TR(0x61861e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618620:{NFSU2_TR(0x618620);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618624:{NFSU2_TR(0x618624);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618627:{NFSU2_TR(0x618627);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618629:{NFSU2_TR(0x618629);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618630:{NFSU2_TR(0x618630);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618634:{NFSU2_TR(0x618634);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618637:{NFSU2_TR(0x618637);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61863b:{NFSU2_TR(0x61863b);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61863e:{NFSU2_TR(0x61863e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618640:{NFSU2_TR(0x618640);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618644:{NFSU2_TR(0x618644);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618647:{NFSU2_TR(0x618647);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618649:{NFSU2_TR(0x618649);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61864d:{NFSU2_TR(0x61864d);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618650:{NFSU2_TR(0x618650);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618652:{NFSU2_TR(0x618652);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618659:{NFSU2_TR(0x618659);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61865d:{NFSU2_TR(0x61865d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618660:{NFSU2_TR(0x618660);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618664:{NFSU2_TR(0x618664);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618667:{NFSU2_TR(0x618667);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618669:{NFSU2_TR(0x618669);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61866d:{NFSU2_TR(0x61866d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618670:{NFSU2_TR(0x618670);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618672:{NFSU2_TR(0x618672);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618676:{NFSU2_TR(0x618676);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618679:{NFSU2_TR(0x618679);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61867b:{NFSU2_TR(0x61867b);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61867f:{NFSU2_TR(0x61867f);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B618686:{NFSU2_TR(0x618686);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61868d:{NFSU2_TR(0x61868d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61868e:{NFSU2_TR(0x61868e);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618692:{NFSU2_TR(0x618692);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618693:{NFSU2_TR(0x618693);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618696:{NFSU2_TR(0x618696);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61869a:{NFSU2_TR(0x61869a);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61869d:{NFSU2_TR(0x61869d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61869f:{NFSU2_TR(0x61869f);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186a3:{NFSU2_TR(0x6186a3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186a5:{NFSU2_TR(0x6186a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186a7:{NFSU2_TR(0x6186a7);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186ab:{NFSU2_TR(0x6186ab);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186ae:{NFSU2_TR(0x6186ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186b0:{NFSU2_TR(0x6186b0);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6186b7:{NFSU2_TR(0x6186b7);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186bb:{NFSU2_TR(0x6186bb);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186be:{NFSU2_TR(0x6186be);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186c2:{NFSU2_TR(0x6186c2);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186c5:{NFSU2_TR(0x6186c5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186c7:{NFSU2_TR(0x6186c7);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186cb:{NFSU2_TR(0x6186cb);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186ce:{NFSU2_TR(0x6186ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186d0:{NFSU2_TR(0x6186d0);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186d4:{NFSU2_TR(0x6186d4);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186d7:{NFSU2_TR(0x6186d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186d9:{NFSU2_TR(0x6186d9);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6186e0:{NFSU2_TR(0x6186e0);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186e4:{NFSU2_TR(0x6186e4);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186e7:{NFSU2_TR(0x6186e7);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186eb:{NFSU2_TR(0x6186eb);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186ee:{NFSU2_TR(0x6186ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186f0:{NFSU2_TR(0x6186f0);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186f4:{NFSU2_TR(0x6186f4);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6186f7:{NFSU2_TR(0x6186f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6186f9:{NFSU2_TR(0x6186f9);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6186fd:{NFSU2_TR(0x6186fd);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618700:{NFSU2_TR(0x618700);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618702:{NFSU2_TR(0x618702);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618709:{NFSU2_TR(0x618709);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61870d:{NFSU2_TR(0x61870d);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618710:{NFSU2_TR(0x618710);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618714:{NFSU2_TR(0x618714);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618717:{NFSU2_TR(0x618717);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618719:{NFSU2_TR(0x618719);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61871d:{NFSU2_TR(0x61871d);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618720:{NFSU2_TR(0x618720);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618722:{NFSU2_TR(0x618722);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618726:{NFSU2_TR(0x618726);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618729:{NFSU2_TR(0x618729);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61872b:{NFSU2_TR(0x61872b);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618732:{NFSU2_TR(0x618732);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x618737ull));
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
PN u32 blk_618737(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B618737:L618737:{bud-=12;NFSU2_TR(0x618737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61873a:{NFSU2_TR(0x61873a);
u8 U[4];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B618741:{NFSU2_TR(0x618741);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618742:{NFSU2_TR(0x618742);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B618746:{NFSU2_TR(0x618746);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618747:{NFSU2_TR(0x618747);
u8 U[4];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61874e:{NFSU2_TR(0x61874e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61874f:{NFSU2_TR(0x61874f);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618754:{NFSU2_TR(0x618754);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618755:{NFSU2_TR(0x618755);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61875c:{NFSU2_TR(0x61875c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61875d:{NFSU2_TR(0x61875d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x618762ull));
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
PN u32 blk_618762(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B618762:L618762:{bud-=3;NFSU2_TR(0x618762);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x38ull))));
}
B618765:{NFSU2_TR(0x618765);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B618767:{NFSU2_TR(0x618767);
if(r1(F+6)){{[[clang::musttail]] return blk_618791(ARGS);}}
}
B618769:L618769:{bud-=13;NFSU2_TR(0x618769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61876c:{NFSU2_TR(0x61876c);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B618773:{NFSU2_TR(0x618773);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B618777:{NFSU2_TR(0x618777);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618779:{NFSU2_TR(0x618779);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B61877b:{NFSU2_TR(0x61877b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B61877f:{NFSU2_TR(0x61877f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8000ull))));
}
B618785:{NFSU2_TR(0x618785);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618786:{NFSU2_TR(0x618786);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618787:{NFSU2_TR(0x618787);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618788:{NFSU2_TR(0x618788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B61878b:{NFSU2_TR(0x61878b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B61878c:{NFSU2_TR(0x61878c);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x618791ull));
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
PN u32 blk_618791(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B618791:L618791:{bud-=3;NFSU2_TR(0x618791);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B618795:{NFSU2_TR(0x618795);
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
B618797:{NFSU2_TR(0x618797);
if(r1(F+6)){{[[clang::musttail]] return blk_619191(ARGS);}}
}
B61879d:L61879d:{bud-=197;NFSU2_TR(0x61879d);
{u32 ea_=u32(r4(G+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187a4:{NFSU2_TR(0x6187a4);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187a7:{NFSU2_TR(0x6187a7);
{u32 ea_=u32(r4(G+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187ae:{NFSU2_TR(0x6187ae);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187b1:{NFSU2_TR(0x6187b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187b3:{NFSU2_TR(0x6187b3);
{u32 ea_=u32(r4(G+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187ba:{NFSU2_TR(0x6187ba);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187bd:{NFSU2_TR(0x6187bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187bf:{NFSU2_TR(0x6187bf);
{u32 ea_=u32(r4(G+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187c6:{NFSU2_TR(0x6187c6);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187c9:{NFSU2_TR(0x6187c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187cb:{NFSU2_TR(0x6187cb);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6187cf:{NFSU2_TR(0x6187cf);
{u32 ea_=u32(r4(G+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187d6:{NFSU2_TR(0x6187d6);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187d9:{NFSU2_TR(0x6187d9);
{u32 ea_=u32(r4(G+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187e0:{NFSU2_TR(0x6187e0);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187e3:{NFSU2_TR(0x6187e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187e5:{NFSU2_TR(0x6187e5);
{u32 ea_=u32(r4(G+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187ec:{NFSU2_TR(0x6187ec);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187ef:{NFSU2_TR(0x6187ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187f1:{NFSU2_TR(0x6187f1);
{u32 ea_=u32(r4(G+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6187f8:{NFSU2_TR(0x6187f8);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6187fb:{NFSU2_TR(0x6187fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6187fd:{NFSU2_TR(0x6187fd);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618801:{NFSU2_TR(0x618801);
{u32 ea_=u32(r4(G+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618808:{NFSU2_TR(0x618808);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61880b:{NFSU2_TR(0x61880b);
{u32 ea_=u32(r4(G+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618812:{NFSU2_TR(0x618812);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618815:{NFSU2_TR(0x618815);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618817:{NFSU2_TR(0x618817);
{u32 ea_=u32(r4(G+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61881e:{NFSU2_TR(0x61881e);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618821:{NFSU2_TR(0x618821);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618823:{NFSU2_TR(0x618823);
{u32 ea_=u32(r4(G+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61882a:{NFSU2_TR(0x61882a);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61882d:{NFSU2_TR(0x61882d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61882f:{NFSU2_TR(0x61882f);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618833:{NFSU2_TR(0x618833);
{u32 ea_=u32(r4(G+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61883a:{NFSU2_TR(0x61883a);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61883d:{NFSU2_TR(0x61883d);
{u32 ea_=u32(r4(G+16)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618844:{NFSU2_TR(0x618844);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618847:{NFSU2_TR(0x618847);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618849:{NFSU2_TR(0x618849);
{u32 ea_=u32(r4(G+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618850:{NFSU2_TR(0x618850);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618853:{NFSU2_TR(0x618853);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618855:{NFSU2_TR(0x618855);
{u32 ea_=u32(r4(G+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61885c:{NFSU2_TR(0x61885c);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61885f:{NFSU2_TR(0x61885f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618861:{NFSU2_TR(0x618861);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618865:{NFSU2_TR(0x618865);
{u32 ea_=u32(r4(G+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61886c:{NFSU2_TR(0x61886c);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61886f:{NFSU2_TR(0x61886f);
{u32 ea_=u32(r4(G+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618876:{NFSU2_TR(0x618876);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618879:{NFSU2_TR(0x618879);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61887b:{NFSU2_TR(0x61887b);
{u32 ea_=u32(r4(G+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618882:{NFSU2_TR(0x618882);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618885:{NFSU2_TR(0x618885);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618887:{NFSU2_TR(0x618887);
{u32 ea_=u32(r4(G+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61888e:{NFSU2_TR(0x61888e);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618891:{NFSU2_TR(0x618891);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618893:{NFSU2_TR(0x618893);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61889a:{NFSU2_TR(0x61889a);
{u32 ea_=u32(r4(G+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188a1:{NFSU2_TR(0x6188a1);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188a4:{NFSU2_TR(0x6188a4);
{u32 ea_=u32(r4(G+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188ab:{NFSU2_TR(0x6188ab);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188ae:{NFSU2_TR(0x6188ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188b0:{NFSU2_TR(0x6188b0);
{u32 ea_=u32(r4(G+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188b7:{NFSU2_TR(0x6188b7);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188ba:{NFSU2_TR(0x6188ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188bc:{NFSU2_TR(0x6188bc);
{u32 ea_=u32(r4(G+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188c3:{NFSU2_TR(0x6188c3);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188c6:{NFSU2_TR(0x6188c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188c8:{NFSU2_TR(0x6188c8);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6188cf:{NFSU2_TR(0x6188cf);
{u32 ea_=u32(r4(G+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188d6:{NFSU2_TR(0x6188d6);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188d9:{NFSU2_TR(0x6188d9);
{u32 ea_=u32(r4(G+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188e0:{NFSU2_TR(0x6188e0);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188e3:{NFSU2_TR(0x6188e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188e5:{NFSU2_TR(0x6188e5);
{u32 ea_=u32(r4(G+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188ec:{NFSU2_TR(0x6188ec);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188ef:{NFSU2_TR(0x6188ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188f1:{NFSU2_TR(0x6188f1);
{u32 ea_=u32(r4(G+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6188f8:{NFSU2_TR(0x6188f8);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6188fb:{NFSU2_TR(0x6188fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6188fd:{NFSU2_TR(0x6188fd);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618904:{NFSU2_TR(0x618904);
{u32 ea_=u32(r4(G+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61890b:{NFSU2_TR(0x61890b);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61890e:{NFSU2_TR(0x61890e);
{u32 ea_=u32(r4(G+16)+u32(380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618915:{NFSU2_TR(0x618915);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618918:{NFSU2_TR(0x618918);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61891a:{NFSU2_TR(0x61891a);
{u32 ea_=u32(r4(G+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618921:{NFSU2_TR(0x618921);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618924:{NFSU2_TR(0x618924);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618926:{NFSU2_TR(0x618926);
{u32 ea_=u32(r4(G+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61892d:{NFSU2_TR(0x61892d);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618930:{NFSU2_TR(0x618930);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618932:{NFSU2_TR(0x618932);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618939:{NFSU2_TR(0x618939);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618940:{NFSU2_TR(0x618940);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618943:{NFSU2_TR(0x618943);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61894a:{NFSU2_TR(0x61894a);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61894d:{NFSU2_TR(0x61894d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61894f:{NFSU2_TR(0x61894f);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618956:{NFSU2_TR(0x618956);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618959:{NFSU2_TR(0x618959);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61895b:{NFSU2_TR(0x61895b);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618962:{NFSU2_TR(0x618962);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618965:{NFSU2_TR(0x618965);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618967:{NFSU2_TR(0x618967);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61896e:{NFSU2_TR(0x61896e);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618975:{NFSU2_TR(0x618975);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618978:{NFSU2_TR(0x618978);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61897f:{NFSU2_TR(0x61897f);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618982:{NFSU2_TR(0x618982);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618984:{NFSU2_TR(0x618984);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61898b:{NFSU2_TR(0x61898b);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61898e:{NFSU2_TR(0x61898e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618990:{NFSU2_TR(0x618990);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618997:{NFSU2_TR(0x618997);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61899a:{NFSU2_TR(0x61899a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61899c:{NFSU2_TR(0x61899c);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6189a3:{NFSU2_TR(0x6189a3);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189aa:{NFSU2_TR(0x6189aa);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189ad:{NFSU2_TR(0x6189ad);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189b4:{NFSU2_TR(0x6189b4);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189b7:{NFSU2_TR(0x6189b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189b9:{NFSU2_TR(0x6189b9);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189c0:{NFSU2_TR(0x6189c0);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189c3:{NFSU2_TR(0x6189c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189c5:{NFSU2_TR(0x6189c5);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189cc:{NFSU2_TR(0x6189cc);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189cf:{NFSU2_TR(0x6189cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189d1:{NFSU2_TR(0x6189d1);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6189d8:{NFSU2_TR(0x6189d8);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189df:{NFSU2_TR(0x6189df);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189e2:{NFSU2_TR(0x6189e2);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189e9:{NFSU2_TR(0x6189e9);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189ec:{NFSU2_TR(0x6189ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189ee:{NFSU2_TR(0x6189ee);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6189f5:{NFSU2_TR(0x6189f5);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6189f8:{NFSU2_TR(0x6189f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6189fa:{NFSU2_TR(0x6189fa);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a01:{NFSU2_TR(0x618a01);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a04:{NFSU2_TR(0x618a04);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a06:{NFSU2_TR(0x618a06);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618a0d:{NFSU2_TR(0x618a0d);
{u32 ea_=u32(r4(G+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a14:{NFSU2_TR(0x618a14);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a17:{NFSU2_TR(0x618a17);
{u32 ea_=u32(r4(G+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a1e:{NFSU2_TR(0x618a1e);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a21:{NFSU2_TR(0x618a21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a23:{NFSU2_TR(0x618a23);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a2a:{NFSU2_TR(0x618a2a);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a2d:{NFSU2_TR(0x618a2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a2f:{NFSU2_TR(0x618a2f);
{u32 ea_=u32(r4(G+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a36:{NFSU2_TR(0x618a36);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a39:{NFSU2_TR(0x618a39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a3b:{NFSU2_TR(0x618a3b);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618a42:{NFSU2_TR(0x618a42);
{u32 ea_=u32(r4(G+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a49:{NFSU2_TR(0x618a49);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a4c:{NFSU2_TR(0x618a4c);
{u32 ea_=u32(r4(G+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a53:{NFSU2_TR(0x618a53);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a56:{NFSU2_TR(0x618a56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a58:{NFSU2_TR(0x618a58);
{u32 ea_=u32(r4(G+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a5f:{NFSU2_TR(0x618a5f);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a62:{NFSU2_TR(0x618a62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a64:{NFSU2_TR(0x618a64);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a6b:{NFSU2_TR(0x618a6b);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a6e:{NFSU2_TR(0x618a6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a70:{NFSU2_TR(0x618a70);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618a77:{NFSU2_TR(0x618a77);
{u32 ea_=u32(r4(G+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a7e:{NFSU2_TR(0x618a7e);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a81:{NFSU2_TR(0x618a81);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a88:{NFSU2_TR(0x618a88);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a8b:{NFSU2_TR(0x618a8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a8d:{NFSU2_TR(0x618a8d);
{u32 ea_=u32(r4(G+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618a94:{NFSU2_TR(0x618a94);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618a97:{NFSU2_TR(0x618a97);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618a99:{NFSU2_TR(0x618a99);
{u32 ea_=u32(r4(G+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618aa0:{NFSU2_TR(0x618aa0);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618aa3:{NFSU2_TR(0x618aa3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618aa5:{NFSU2_TR(0x618aa5);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618aac:{NFSU2_TR(0x618aac);
{u32 ea_=u32(r4(G+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ab3:{NFSU2_TR(0x618ab3);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ab6:{NFSU2_TR(0x618ab6);
{u32 ea_=u32(r4(G+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618abd:{NFSU2_TR(0x618abd);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B618ac1:{NFSU2_TR(0x618ac1);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ac4:{NFSU2_TR(0x618ac4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618ac5:{NFSU2_TR(0x618ac5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B618ac9:{NFSU2_TR(0x618ac9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618aca:{NFSU2_TR(0x618aca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618acc:{NFSU2_TR(0x618acc);
{u32 ea_=u32(r4(G+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ad3:{NFSU2_TR(0x618ad3);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ad6:{NFSU2_TR(0x618ad6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ad8:{NFSU2_TR(0x618ad8);
{u32 ea_=u32(r4(G+16)+u32(416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618adf:{NFSU2_TR(0x618adf);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ae2:{NFSU2_TR(0x618ae2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ae4:{NFSU2_TR(0x618ae4);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618aeb:{NFSU2_TR(0x618aeb);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x618af0ull));
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
PN u32 blk_618af0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B618af0:L618af0:{bud-=197;NFSU2_TR(0x618af0);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618af7:{NFSU2_TR(0x618af7);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618afb:{NFSU2_TR(0x618afb);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b02:{NFSU2_TR(0x618b02);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b06:{NFSU2_TR(0x618b06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b08:{NFSU2_TR(0x618b08);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b0f:{NFSU2_TR(0x618b0f);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b13:{NFSU2_TR(0x618b13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b15:{NFSU2_TR(0x618b15);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b1c:{NFSU2_TR(0x618b1c);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b20:{NFSU2_TR(0x618b20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b22:{NFSU2_TR(0x618b22);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618b26:{NFSU2_TR(0x618b26);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b2d:{NFSU2_TR(0x618b2d);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b31:{NFSU2_TR(0x618b31);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b38:{NFSU2_TR(0x618b38);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b3c:{NFSU2_TR(0x618b3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b3e:{NFSU2_TR(0x618b3e);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b45:{NFSU2_TR(0x618b45);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b49:{NFSU2_TR(0x618b49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b4b:{NFSU2_TR(0x618b4b);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b52:{NFSU2_TR(0x618b52);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b56:{NFSU2_TR(0x618b56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b58:{NFSU2_TR(0x618b58);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618b5c:{NFSU2_TR(0x618b5c);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b63:{NFSU2_TR(0x618b63);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b67:{NFSU2_TR(0x618b67);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b6e:{NFSU2_TR(0x618b6e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b72:{NFSU2_TR(0x618b72);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b74:{NFSU2_TR(0x618b74);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b7b:{NFSU2_TR(0x618b7b);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b7f:{NFSU2_TR(0x618b7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b81:{NFSU2_TR(0x618b81);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b88:{NFSU2_TR(0x618b88);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618b8c:{NFSU2_TR(0x618b8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618b8e:{NFSU2_TR(0x618b8e);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618b95:{NFSU2_TR(0x618b95);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618b9c:{NFSU2_TR(0x618b9c);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ba0:{NFSU2_TR(0x618ba0);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ba7:{NFSU2_TR(0x618ba7);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bab:{NFSU2_TR(0x618bab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618bad:{NFSU2_TR(0x618bad);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bb4:{NFSU2_TR(0x618bb4);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bb8:{NFSU2_TR(0x618bb8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618bba:{NFSU2_TR(0x618bba);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bc1:{NFSU2_TR(0x618bc1);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bc5:{NFSU2_TR(0x618bc5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618bc7:{NFSU2_TR(0x618bc7);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618bce:{NFSU2_TR(0x618bce);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bd5:{NFSU2_TR(0x618bd5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bd9:{NFSU2_TR(0x618bd9);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618be0:{NFSU2_TR(0x618be0);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618be4:{NFSU2_TR(0x618be4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618be6:{NFSU2_TR(0x618be6);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bed:{NFSU2_TR(0x618bed);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bf1:{NFSU2_TR(0x618bf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618bf3:{NFSU2_TR(0x618bf3);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618bfa:{NFSU2_TR(0x618bfa);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618bfe:{NFSU2_TR(0x618bfe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c00:{NFSU2_TR(0x618c00);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618c07:{NFSU2_TR(0x618c07);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c0e:{NFSU2_TR(0x618c0e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c12:{NFSU2_TR(0x618c12);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c19:{NFSU2_TR(0x618c19);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c1d:{NFSU2_TR(0x618c1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c1f:{NFSU2_TR(0x618c1f);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c26:{NFSU2_TR(0x618c26);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c2a:{NFSU2_TR(0x618c2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c2c:{NFSU2_TR(0x618c2c);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c33:{NFSU2_TR(0x618c33);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c37:{NFSU2_TR(0x618c37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c39:{NFSU2_TR(0x618c39);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618c40:{NFSU2_TR(0x618c40);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c47:{NFSU2_TR(0x618c47);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c4b:{NFSU2_TR(0x618c4b);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c52:{NFSU2_TR(0x618c52);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c56:{NFSU2_TR(0x618c56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c58:{NFSU2_TR(0x618c58);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c5f:{NFSU2_TR(0x618c5f);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c63:{NFSU2_TR(0x618c63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c65:{NFSU2_TR(0x618c65);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c6c:{NFSU2_TR(0x618c6c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c70:{NFSU2_TR(0x618c70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c72:{NFSU2_TR(0x618c72);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618c79:{NFSU2_TR(0x618c79);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c80:{NFSU2_TR(0x618c80);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c84:{NFSU2_TR(0x618c84);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c8b:{NFSU2_TR(0x618c8b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c8f:{NFSU2_TR(0x618c8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c91:{NFSU2_TR(0x618c91);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618c98:{NFSU2_TR(0x618c98);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618c9c:{NFSU2_TR(0x618c9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618c9e:{NFSU2_TR(0x618c9e);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ca5:{NFSU2_TR(0x618ca5);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ca9:{NFSU2_TR(0x618ca9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618cab:{NFSU2_TR(0x618cab);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618cb2:{NFSU2_TR(0x618cb2);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cb9:{NFSU2_TR(0x618cb9);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618cbd:{NFSU2_TR(0x618cbd);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cc4:{NFSU2_TR(0x618cc4);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618cc8:{NFSU2_TR(0x618cc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618cca:{NFSU2_TR(0x618cca);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cd1:{NFSU2_TR(0x618cd1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618cd5:{NFSU2_TR(0x618cd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618cd7:{NFSU2_TR(0x618cd7);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cde:{NFSU2_TR(0x618cde);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ce2:{NFSU2_TR(0x618ce2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ce4:{NFSU2_TR(0x618ce4);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618ceb:{NFSU2_TR(0x618ceb);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cf2:{NFSU2_TR(0x618cf2);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618cf6:{NFSU2_TR(0x618cf6);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618cfd:{NFSU2_TR(0x618cfd);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d01:{NFSU2_TR(0x618d01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d03:{NFSU2_TR(0x618d03);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d0a:{NFSU2_TR(0x618d0a);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d0e:{NFSU2_TR(0x618d0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d10:{NFSU2_TR(0x618d10);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d17:{NFSU2_TR(0x618d17);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d1b:{NFSU2_TR(0x618d1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d1d:{NFSU2_TR(0x618d1d);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618d24:{NFSU2_TR(0x618d24);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d2b:{NFSU2_TR(0x618d2b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d2f:{NFSU2_TR(0x618d2f);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d36:{NFSU2_TR(0x618d36);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d3a:{NFSU2_TR(0x618d3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d3c:{NFSU2_TR(0x618d3c);
{u32 ea_=u32(r4(G+16)+u32(640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d43:{NFSU2_TR(0x618d43);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d47:{NFSU2_TR(0x618d47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d49:{NFSU2_TR(0x618d49);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d50:{NFSU2_TR(0x618d50);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d54:{NFSU2_TR(0x618d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d56:{NFSU2_TR(0x618d56);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618d5d:{NFSU2_TR(0x618d5d);
{u32 ea_=u32(r4(G+16)+u32(676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d64:{NFSU2_TR(0x618d64);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d68:{NFSU2_TR(0x618d68);
{u32 ea_=u32(r4(G+16)+u32(660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d6f:{NFSU2_TR(0x618d6f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d73:{NFSU2_TR(0x618d73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d75:{NFSU2_TR(0x618d75);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d7c:{NFSU2_TR(0x618d7c);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d80:{NFSU2_TR(0x618d80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d82:{NFSU2_TR(0x618d82);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d89:{NFSU2_TR(0x618d89);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618d8d:{NFSU2_TR(0x618d8d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618d8f:{NFSU2_TR(0x618d8f);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618d96:{NFSU2_TR(0x618d96);
{u32 ea_=u32(r4(G+16)+u32(664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618d9d:{NFSU2_TR(0x618d9d);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618da1:{NFSU2_TR(0x618da1);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618da8:{NFSU2_TR(0x618da8);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618dac:{NFSU2_TR(0x618dac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618dae:{NFSU2_TR(0x618dae);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618db5:{NFSU2_TR(0x618db5);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618db9:{NFSU2_TR(0x618db9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618dbb:{NFSU2_TR(0x618dbb);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618dc2:{NFSU2_TR(0x618dc2);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618dc6:{NFSU2_TR(0x618dc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618dc8:{NFSU2_TR(0x618dc8);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618dcf:{NFSU2_TR(0x618dcf);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618dd6:{NFSU2_TR(0x618dd6);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618dda:{NFSU2_TR(0x618dda);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618de1:{NFSU2_TR(0x618de1);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618de5:{NFSU2_TR(0x618de5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618de7:{NFSU2_TR(0x618de7);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618dee:{NFSU2_TR(0x618dee);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618df2:{NFSU2_TR(0x618df2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618df4:{NFSU2_TR(0x618df4);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618dfb:{NFSU2_TR(0x618dfb);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618dff:{NFSU2_TR(0x618dff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e01:{NFSU2_TR(0x618e01);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618e08:{NFSU2_TR(0x618e08);
{u32 ea_=u32(r4(G+16)+u32(672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e0f:{NFSU2_TR(0x618e0f);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e13:{NFSU2_TR(0x618e13);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B618e17:{NFSU2_TR(0x618e17);
{u32 ea_=u32(r4(G+16)+u32(656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e1e:{NFSU2_TR(0x618e1e);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618e1f:{NFSU2_TR(0x618e1f);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e23:{NFSU2_TR(0x618e23);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B618e27:{NFSU2_TR(0x618e27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B618e28:{NFSU2_TR(0x618e28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e2a:{NFSU2_TR(0x618e2a);
{u32 ea_=u32(r4(G+16)+u32(648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e31:{NFSU2_TR(0x618e31);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e35:{NFSU2_TR(0x618e35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e37:{NFSU2_TR(0x618e37);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e3e:{NFSU2_TR(0x618e3e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e42:{NFSU2_TR(0x618e42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e44:{NFSU2_TR(0x618e44);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618e4b:{NFSU2_TR(0x618e4b);
{u32 ea_=u32(r4(G+16)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e52:{NFSU2_TR(0x618e52);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e56:{NFSU2_TR(0x618e56);
{u32 ea_=u32(r4(G+16)+u32(668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e5d:{NFSU2_TR(0x618e5d);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e61:{NFSU2_TR(0x618e61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e63:{NFSU2_TR(0x618e63);
{u32 ea_=u32(r4(G+16)+u32(652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e6a:{NFSU2_TR(0x618e6a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e6e:{NFSU2_TR(0x618e6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e70:{NFSU2_TR(0x618e70);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e77:{NFSU2_TR(0x618e77);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e7b:{NFSU2_TR(0x618e7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e7d:{NFSU2_TR(0x618e7d);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618e84:{NFSU2_TR(0x618e84);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x618e89ull));
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
PN u32 blk_618e89(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B618e89:L618e89:{bud-=111;NFSU2_TR(0x618e89);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e8d:{NFSU2_TR(0x618e8d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e8f:{NFSU2_TR(0x618e8f);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e93:{NFSU2_TR(0x618e93);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e96:{NFSU2_TR(0x618e96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618e98:{NFSU2_TR(0x618e98);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618e9c:{NFSU2_TR(0x618e9c);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618e9f:{NFSU2_TR(0x618e9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ea1:{NFSU2_TR(0x618ea1);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ea5:{NFSU2_TR(0x618ea5);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ea8:{NFSU2_TR(0x618ea8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618eaa:{NFSU2_TR(0x618eaa);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618eb1:{NFSU2_TR(0x618eb1);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618eb5:{NFSU2_TR(0x618eb5);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618eb8:{NFSU2_TR(0x618eb8);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ebc:{NFSU2_TR(0x618ebc);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ebf:{NFSU2_TR(0x618ebf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ec1:{NFSU2_TR(0x618ec1);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ec5:{NFSU2_TR(0x618ec5);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ec8:{NFSU2_TR(0x618ec8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618eca:{NFSU2_TR(0x618eca);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ece:{NFSU2_TR(0x618ece);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ed1:{NFSU2_TR(0x618ed1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ed3:{NFSU2_TR(0x618ed3);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618eda:{NFSU2_TR(0x618eda);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ede:{NFSU2_TR(0x618ede);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ee1:{NFSU2_TR(0x618ee1);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ee5:{NFSU2_TR(0x618ee5);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ee8:{NFSU2_TR(0x618ee8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618eea:{NFSU2_TR(0x618eea);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618eee:{NFSU2_TR(0x618eee);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ef1:{NFSU2_TR(0x618ef1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ef3:{NFSU2_TR(0x618ef3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ef7:{NFSU2_TR(0x618ef7);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618efa:{NFSU2_TR(0x618efa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618efc:{NFSU2_TR(0x618efc);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618f03:{NFSU2_TR(0x618f03);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f07:{NFSU2_TR(0x618f07);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f0a:{NFSU2_TR(0x618f0a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f0e:{NFSU2_TR(0x618f0e);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f11:{NFSU2_TR(0x618f11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f13:{NFSU2_TR(0x618f13);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f17:{NFSU2_TR(0x618f17);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f1a:{NFSU2_TR(0x618f1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f1c:{NFSU2_TR(0x618f1c);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f20:{NFSU2_TR(0x618f20);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f23:{NFSU2_TR(0x618f23);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f25:{NFSU2_TR(0x618f25);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618f2c:{NFSU2_TR(0x618f2c);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f30:{NFSU2_TR(0x618f30);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f33:{NFSU2_TR(0x618f33);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f37:{NFSU2_TR(0x618f37);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f39:{NFSU2_TR(0x618f39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f3b:{NFSU2_TR(0x618f3b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f3f:{NFSU2_TR(0x618f3f);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f42:{NFSU2_TR(0x618f42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f44:{NFSU2_TR(0x618f44);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f48:{NFSU2_TR(0x618f48);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f4b:{NFSU2_TR(0x618f4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f4d:{NFSU2_TR(0x618f4d);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618f54:{NFSU2_TR(0x618f54);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f58:{NFSU2_TR(0x618f58);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f5b:{NFSU2_TR(0x618f5b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f5f:{NFSU2_TR(0x618f5f);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f62:{NFSU2_TR(0x618f62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f64:{NFSU2_TR(0x618f64);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f68:{NFSU2_TR(0x618f68);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f6b:{NFSU2_TR(0x618f6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f6d:{NFSU2_TR(0x618f6d);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f71:{NFSU2_TR(0x618f71);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f74:{NFSU2_TR(0x618f74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f76:{NFSU2_TR(0x618f76);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618f7d:{NFSU2_TR(0x618f7d);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f81:{NFSU2_TR(0x618f81);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f84:{NFSU2_TR(0x618f84);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f88:{NFSU2_TR(0x618f88);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f8b:{NFSU2_TR(0x618f8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f8d:{NFSU2_TR(0x618f8d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f91:{NFSU2_TR(0x618f91);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f94:{NFSU2_TR(0x618f94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f96:{NFSU2_TR(0x618f96);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618f9a:{NFSU2_TR(0x618f9a);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618f9d:{NFSU2_TR(0x618f9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618f9f:{NFSU2_TR(0x618f9f);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618fa6:{NFSU2_TR(0x618fa6);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618faa:{NFSU2_TR(0x618faa);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fad:{NFSU2_TR(0x618fad);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fb1:{NFSU2_TR(0x618fb1);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fb4:{NFSU2_TR(0x618fb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fb6:{NFSU2_TR(0x618fb6);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fba:{NFSU2_TR(0x618fba);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fbd:{NFSU2_TR(0x618fbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fbf:{NFSU2_TR(0x618fbf);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fc3:{NFSU2_TR(0x618fc3);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fc6:{NFSU2_TR(0x618fc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fc8:{NFSU2_TR(0x618fc8);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618fcf:{NFSU2_TR(0x618fcf);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fd3:{NFSU2_TR(0x618fd3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fd6:{NFSU2_TR(0x618fd6);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fda:{NFSU2_TR(0x618fda);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fdc:{NFSU2_TR(0x618fdc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fde:{NFSU2_TR(0x618fde);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618fe2:{NFSU2_TR(0x618fe2);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fe5:{NFSU2_TR(0x618fe5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618fe7:{NFSU2_TR(0x618fe7);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618feb:{NFSU2_TR(0x618feb);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618fee:{NFSU2_TR(0x618fee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B618ff0:{NFSU2_TR(0x618ff0);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B618ff7:{NFSU2_TR(0x618ff7);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B618ffb:{NFSU2_TR(0x618ffb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B618ffe:{NFSU2_TR(0x618ffe);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
{EXIT(0x619002u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_618(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x6180f7:[[clang::musttail]] return blk_6180f7(c,a4,a0,a1,bud);
case 0x618499:[[clang::musttail]] return blk_618499(c,a4,a0,a1,bud);
case 0x618737:[[clang::musttail]] return blk_618737(c,a4,a0,a1,bud);
case 0x618762:[[clang::musttail]] return blk_618762(c,a4,a0,a1,bud);
case 0x618791:[[clang::musttail]] return blk_618791(c,a4,a0,a1,bud);
case 0x618af0:[[clang::musttail]] return blk_618af0(c,a4,a0,a1,bud);
case 0x618e89:[[clang::musttail]] return blk_618e89(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_618(Cpu& c){u8* R=c.regs.data();return ent_618(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
