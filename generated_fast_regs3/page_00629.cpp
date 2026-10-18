#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5bacf0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6295a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_629678(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62ab69(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_629294(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_629535(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_629563(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6295cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_629644(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6299c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_629d60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_629006(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B629006:L629006:{bud-=139;NFSU2_TR(0x629006);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629008:{NFSU2_TR(0x629008);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62900f:{NFSU2_TR(0x62900f);
{u32 ea_=u32(r4(G+16)+u32(1556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629016:{NFSU2_TR(0x629016);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62901a:{NFSU2_TR(0x62901a);
{u32 ea_=u32(r4(G+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629021:{NFSU2_TR(0x629021);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629025:{NFSU2_TR(0x629025);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629027:{NFSU2_TR(0x629027);
{u32 ea_=u32(r4(G+16)+u32(1524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62902e:{NFSU2_TR(0x62902e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629032:{NFSU2_TR(0x629032);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629034:{NFSU2_TR(0x629034);
{u32 ea_=u32(r4(G+16)+u32(1508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62903b:{NFSU2_TR(0x62903b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62903f:{NFSU2_TR(0x62903f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629041:{NFSU2_TR(0x629041);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629048:{NFSU2_TR(0x629048);
{u32 ea_=u32(r4(G+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62904f:{NFSU2_TR(0x62904f);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629053:{NFSU2_TR(0x629053);
{u32 ea_=u32(r4(G+16)+u32(1544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62905a:{NFSU2_TR(0x62905a);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62905e:{NFSU2_TR(0x62905e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629060:{NFSU2_TR(0x629060);
{u32 ea_=u32(r4(G+16)+u32(1528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629067:{NFSU2_TR(0x629067);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62906b:{NFSU2_TR(0x62906b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62906d:{NFSU2_TR(0x62906d);
{u32 ea_=u32(r4(G+16)+u32(1512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629074:{NFSU2_TR(0x629074);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629078:{NFSU2_TR(0x629078);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62907a:{NFSU2_TR(0x62907a);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629081:{NFSU2_TR(0x629081);
{u32 ea_=u32(r4(G+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629088:{NFSU2_TR(0x629088);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62908c:{NFSU2_TR(0x62908c);
{u32 ea_=u32(r4(G+16)+u32(1548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629093:{NFSU2_TR(0x629093);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629097:{NFSU2_TR(0x629097);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629099:{NFSU2_TR(0x629099);
{u32 ea_=u32(r4(G+16)+u32(1532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290a0:{NFSU2_TR(0x6290a0);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290a4:{NFSU2_TR(0x6290a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290a6:{NFSU2_TR(0x6290a6);
{u32 ea_=u32(r4(G+16)+u32(1516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290ad:{NFSU2_TR(0x6290ad);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290b1:{NFSU2_TR(0x6290b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290b3:{NFSU2_TR(0x6290b3);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6290ba:{NFSU2_TR(0x6290ba);
{u32 ea_=u32(r4(G+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290c1:{NFSU2_TR(0x6290c1);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290c5:{NFSU2_TR(0x6290c5);
{u32 ea_=u32(r4(G+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290cc:{NFSU2_TR(0x6290cc);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290d0:{NFSU2_TR(0x6290d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290d2:{NFSU2_TR(0x6290d2);
{u32 ea_=u32(r4(G+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290d9:{NFSU2_TR(0x6290d9);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290dd:{NFSU2_TR(0x6290dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290df:{NFSU2_TR(0x6290df);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290e3:{NFSU2_TR(0x6290e3);
{u32 ea_=u32(r4(G+16)+u32(1504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290ea:{NFSU2_TR(0x6290ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290ec:{NFSU2_TR(0x6290ec);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6290f3:{NFSU2_TR(0x6290f3);
{u32 ea_=u32(r4(G+16)+u32(1556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290fa:{NFSU2_TR(0x6290fa);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290fe:{NFSU2_TR(0x6290fe);
{u32 ea_=u32(r4(G+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629105:{NFSU2_TR(0x629105);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629109:{NFSU2_TR(0x629109);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62910b:{NFSU2_TR(0x62910b);
{u32 ea_=u32(r4(G+16)+u32(1524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629112:{NFSU2_TR(0x629112);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629116:{NFSU2_TR(0x629116);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629118:{NFSU2_TR(0x629118);
{u32 ea_=u32(r4(G+16)+u32(1508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62911f:{NFSU2_TR(0x62911f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629123:{NFSU2_TR(0x629123);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629125:{NFSU2_TR(0x629125);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62912c:{NFSU2_TR(0x62912c);
{u32 ea_=u32(r4(G+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629133:{NFSU2_TR(0x629133);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629137:{NFSU2_TR(0x629137);
{u32 ea_=u32(r4(G+16)+u32(1544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62913e:{NFSU2_TR(0x62913e);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629142:{NFSU2_TR(0x629142);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629144:{NFSU2_TR(0x629144);
{u32 ea_=u32(r4(G+16)+u32(1528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62914b:{NFSU2_TR(0x62914b);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62914f:{NFSU2_TR(0x62914f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629151:{NFSU2_TR(0x629151);
{u32 ea_=u32(r4(G+16)+u32(1512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629158:{NFSU2_TR(0x629158);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62915c:{NFSU2_TR(0x62915c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62915e:{NFSU2_TR(0x62915e);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629165:{NFSU2_TR(0x629165);
{u32 ea_=u32(r4(G+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62916c:{NFSU2_TR(0x62916c);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629170:{NFSU2_TR(0x629170);
{u32 ea_=u32(r4(G+16)+u32(1548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629177:{NFSU2_TR(0x629177);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62917b:{NFSU2_TR(0x62917b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62917d:{NFSU2_TR(0x62917d);
{u32 ea_=u32(r4(G+16)+u32(1532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629184:{NFSU2_TR(0x629184);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629188:{NFSU2_TR(0x629188);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62918a:{NFSU2_TR(0x62918a);
{u32 ea_=u32(r4(G+16)+u32(1516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629191:{NFSU2_TR(0x629191);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629195:{NFSU2_TR(0x629195);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629197:{NFSU2_TR(0x629197);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62919e:{NFSU2_TR(0x62919e);
{u32 ea_=u32(r4(G+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291a5:{NFSU2_TR(0x6291a5);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291a9:{NFSU2_TR(0x6291a9);
{u32 ea_=u32(r4(G+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291b0:{NFSU2_TR(0x6291b0);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291b4:{NFSU2_TR(0x6291b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6291b6:{NFSU2_TR(0x6291b6);
{u32 ea_=u32(r4(G+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291bd:{NFSU2_TR(0x6291bd);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291c1:{NFSU2_TR(0x6291c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6291c3:{NFSU2_TR(0x6291c3);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291c7:{NFSU2_TR(0x6291c7);
{u32 ea_=u32(r4(G+16)+u32(1504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291ce:{NFSU2_TR(0x6291ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6291d0:{NFSU2_TR(0x6291d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6291d7:{NFSU2_TR(0x6291d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6291d8:{NFSU2_TR(0x6291d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6291dc:{NFSU2_TR(0x6291dc);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6291e3:{NFSU2_TR(0x6291e3);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6291e4:{NFSU2_TR(0x6291e4);
{u32 ea_=u32(r4(G+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291eb:{NFSU2_TR(0x6291eb);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291ef:{NFSU2_TR(0x6291ef);
{u32 ea_=u32(r4(G+16)+u32(1548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291f6:{NFSU2_TR(0x6291f6);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291fa:{NFSU2_TR(0x6291fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6291fc:{NFSU2_TR(0x6291fc);
{u32 ea_=u32(r4(G+16)+u32(1532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629203:{NFSU2_TR(0x629203);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629207:{NFSU2_TR(0x629207);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629209:{NFSU2_TR(0x629209);
{u32 ea_=u32(r4(G+16)+u32(1516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629210:{NFSU2_TR(0x629210);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629214:{NFSU2_TR(0x629214);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629216:{NFSU2_TR(0x629216);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62921d:{NFSU2_TR(0x62921d);
{u32 ea_=u32(r4(G+16)+u32(1568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629224:{NFSU2_TR(0x629224);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629228:{NFSU2_TR(0x629228);
{u32 ea_=u32(r4(G+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62922f:{NFSU2_TR(0x62922f);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629233:{NFSU2_TR(0x629233);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629235:{NFSU2_TR(0x629235);
{u32 ea_=u32(r4(G+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62923c:{NFSU2_TR(0x62923c);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629240:{NFSU2_TR(0x629240);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629242:{NFSU2_TR(0x629242);
{u32 ea_=u32(r4(G+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629249:{NFSU2_TR(0x629249);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62924d:{NFSU2_TR(0x62924d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62924f:{NFSU2_TR(0x62924f);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629256:{NFSU2_TR(0x629256);
{u32 ea_=u32(r4(G+16)+u32(1572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62925d:{NFSU2_TR(0x62925d);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629261:{NFSU2_TR(0x629261);
{u32 ea_=u32(r4(G+16)+u32(1556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629268:{NFSU2_TR(0x629268);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62926c:{NFSU2_TR(0x62926c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62926e:{NFSU2_TR(0x62926e);
{u32 ea_=u32(r4(G+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629275:{NFSU2_TR(0x629275);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629279:{NFSU2_TR(0x629279);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62927b:{NFSU2_TR(0x62927b);
{u32 ea_=u32(r4(G+16)+u32(1524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629282:{NFSU2_TR(0x629282);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629286:{NFSU2_TR(0x629286);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629288:{NFSU2_TR(0x629288);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62928f:{NFSU2_TR(0x62928f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x629294ull));
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
PN u32 blk_629294(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B629294:L629294:{bud-=197;NFSU2_TR(0x629294);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629298:{NFSU2_TR(0x629298);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62929b:{NFSU2_TR(0x62929b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62929f:{NFSU2_TR(0x62929f);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292a2:{NFSU2_TR(0x6292a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292a4:{NFSU2_TR(0x6292a4);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292a8:{NFSU2_TR(0x6292a8);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292aa:{NFSU2_TR(0x6292aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292ac:{NFSU2_TR(0x6292ac);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292b0:{NFSU2_TR(0x6292b0);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292b3:{NFSU2_TR(0x6292b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292b5:{NFSU2_TR(0x6292b5);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6292bc:{NFSU2_TR(0x6292bc);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292c0:{NFSU2_TR(0x6292c0);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292c3:{NFSU2_TR(0x6292c3);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292c7:{NFSU2_TR(0x6292c7);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292ca:{NFSU2_TR(0x6292ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292cc:{NFSU2_TR(0x6292cc);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292d0:{NFSU2_TR(0x6292d0);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292d3:{NFSU2_TR(0x6292d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292d5:{NFSU2_TR(0x6292d5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292d9:{NFSU2_TR(0x6292d9);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292dc:{NFSU2_TR(0x6292dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292de:{NFSU2_TR(0x6292de);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6292e5:{NFSU2_TR(0x6292e5);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292e9:{NFSU2_TR(0x6292e9);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292ec:{NFSU2_TR(0x6292ec);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292f0:{NFSU2_TR(0x6292f0);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292f3:{NFSU2_TR(0x6292f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292f5:{NFSU2_TR(0x6292f5);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292f9:{NFSU2_TR(0x6292f9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292fc:{NFSU2_TR(0x6292fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292fe:{NFSU2_TR(0x6292fe);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629302:{NFSU2_TR(0x629302);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629305:{NFSU2_TR(0x629305);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629307:{NFSU2_TR(0x629307);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62930e:{NFSU2_TR(0x62930e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629312:{NFSU2_TR(0x629312);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629315:{NFSU2_TR(0x629315);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629319:{NFSU2_TR(0x629319);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62931c:{NFSU2_TR(0x62931c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62931e:{NFSU2_TR(0x62931e);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629322:{NFSU2_TR(0x629322);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629325:{NFSU2_TR(0x629325);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629327:{NFSU2_TR(0x629327);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62932b:{NFSU2_TR(0x62932b);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62932e:{NFSU2_TR(0x62932e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629330:{NFSU2_TR(0x629330);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629337:{NFSU2_TR(0x629337);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62933b:{NFSU2_TR(0x62933b);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62933e:{NFSU2_TR(0x62933e);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629342:{NFSU2_TR(0x629342);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629345:{NFSU2_TR(0x629345);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629347:{NFSU2_TR(0x629347);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62934b:{NFSU2_TR(0x62934b);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62934e:{NFSU2_TR(0x62934e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629350:{NFSU2_TR(0x629350);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629354:{NFSU2_TR(0x629354);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629356:{NFSU2_TR(0x629356);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629358:{NFSU2_TR(0x629358);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62935f:{NFSU2_TR(0x62935f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629363:{NFSU2_TR(0x629363);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629366:{NFSU2_TR(0x629366);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62936a:{NFSU2_TR(0x62936a);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62936d:{NFSU2_TR(0x62936d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62936f:{NFSU2_TR(0x62936f);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629373:{NFSU2_TR(0x629373);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629376:{NFSU2_TR(0x629376);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629378:{NFSU2_TR(0x629378);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62937c:{NFSU2_TR(0x62937c);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62937f:{NFSU2_TR(0x62937f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629381:{NFSU2_TR(0x629381);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629388:{NFSU2_TR(0x629388);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62938c:{NFSU2_TR(0x62938c);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62938f:{NFSU2_TR(0x62938f);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629393:{NFSU2_TR(0x629393);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629396:{NFSU2_TR(0x629396);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629398:{NFSU2_TR(0x629398);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62939c:{NFSU2_TR(0x62939c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62939f:{NFSU2_TR(0x62939f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293a1:{NFSU2_TR(0x6293a1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293a5:{NFSU2_TR(0x6293a5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293a8:{NFSU2_TR(0x6293a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293aa:{NFSU2_TR(0x6293aa);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6293b1:{NFSU2_TR(0x6293b1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293b5:{NFSU2_TR(0x6293b5);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293b8:{NFSU2_TR(0x6293b8);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293bc:{NFSU2_TR(0x6293bc);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293bf:{NFSU2_TR(0x6293bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293c1:{NFSU2_TR(0x6293c1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293c5:{NFSU2_TR(0x6293c5);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293c8:{NFSU2_TR(0x6293c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293ca:{NFSU2_TR(0x6293ca);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293ce:{NFSU2_TR(0x6293ce);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293d1:{NFSU2_TR(0x6293d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293d3:{NFSU2_TR(0x6293d3);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6293da:{NFSU2_TR(0x6293da);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293de:{NFSU2_TR(0x6293de);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293e1:{NFSU2_TR(0x6293e1);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293e5:{NFSU2_TR(0x6293e5);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293e8:{NFSU2_TR(0x6293e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293ea:{NFSU2_TR(0x6293ea);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293ee:{NFSU2_TR(0x6293ee);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293f1:{NFSU2_TR(0x6293f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293f3:{NFSU2_TR(0x6293f3);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293f7:{NFSU2_TR(0x6293f7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293f9:{NFSU2_TR(0x6293f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293fb:{NFSU2_TR(0x6293fb);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629402:{NFSU2_TR(0x629402);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629406:{NFSU2_TR(0x629406);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629409:{NFSU2_TR(0x629409);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62940d:{NFSU2_TR(0x62940d);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629410:{NFSU2_TR(0x629410);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629412:{NFSU2_TR(0x629412);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629416:{NFSU2_TR(0x629416);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629419:{NFSU2_TR(0x629419);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62941b:{NFSU2_TR(0x62941b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62941f:{NFSU2_TR(0x62941f);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629422:{NFSU2_TR(0x629422);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629424:{NFSU2_TR(0x629424);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62942b:{NFSU2_TR(0x62942b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62942f:{NFSU2_TR(0x62942f);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629432:{NFSU2_TR(0x629432);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629436:{NFSU2_TR(0x629436);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629439:{NFSU2_TR(0x629439);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62943b:{NFSU2_TR(0x62943b);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62943f:{NFSU2_TR(0x62943f);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629442:{NFSU2_TR(0x629442);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629444:{NFSU2_TR(0x629444);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629448:{NFSU2_TR(0x629448);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62944b:{NFSU2_TR(0x62944b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62944d:{NFSU2_TR(0x62944d);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629454:{NFSU2_TR(0x629454);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629458:{NFSU2_TR(0x629458);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62945b:{NFSU2_TR(0x62945b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62945f:{NFSU2_TR(0x62945f);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629462:{NFSU2_TR(0x629462);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629464:{NFSU2_TR(0x629464);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629468:{NFSU2_TR(0x629468);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62946b:{NFSU2_TR(0x62946b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62946d:{NFSU2_TR(0x62946d);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629471:{NFSU2_TR(0x629471);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629474:{NFSU2_TR(0x629474);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62947b:{NFSU2_TR(0x62947b);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B629482:{NFSU2_TR(0x629482);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629483:{NFSU2_TR(0x629483);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629485:{NFSU2_TR(0x629485);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629486:{NFSU2_TR(0x629486);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62948d:{NFSU2_TR(0x62948d);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629491:{NFSU2_TR(0x629491);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629494:{NFSU2_TR(0x629494);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629498:{NFSU2_TR(0x629498);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62949b:{NFSU2_TR(0x62949b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62949d:{NFSU2_TR(0x62949d);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294a1:{NFSU2_TR(0x6294a1);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294a4:{NFSU2_TR(0x6294a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294a6:{NFSU2_TR(0x6294a6);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294aa:{NFSU2_TR(0x6294aa);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294ac:{NFSU2_TR(0x6294ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294ae:{NFSU2_TR(0x6294ae);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6294b5:{NFSU2_TR(0x6294b5);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294b9:{NFSU2_TR(0x6294b9);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294bc:{NFSU2_TR(0x6294bc);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294c0:{NFSU2_TR(0x6294c0);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294c3:{NFSU2_TR(0x6294c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294c5:{NFSU2_TR(0x6294c5);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294c9:{NFSU2_TR(0x6294c9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294cc:{NFSU2_TR(0x6294cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294ce:{NFSU2_TR(0x6294ce);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294d2:{NFSU2_TR(0x6294d2);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294d5:{NFSU2_TR(0x6294d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294d7:{NFSU2_TR(0x6294d7);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6294de:{NFSU2_TR(0x6294de);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294e2:{NFSU2_TR(0x6294e2);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294e5:{NFSU2_TR(0x6294e5);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294e9:{NFSU2_TR(0x6294e9);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294ec:{NFSU2_TR(0x6294ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294ee:{NFSU2_TR(0x6294ee);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294f2:{NFSU2_TR(0x6294f2);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294f5:{NFSU2_TR(0x6294f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294f7:{NFSU2_TR(0x6294f7);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294fb:{NFSU2_TR(0x6294fb);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294fe:{NFSU2_TR(0x6294fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629500:{NFSU2_TR(0x629500);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629507:{NFSU2_TR(0x629507);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62950b:{NFSU2_TR(0x62950b);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62950e:{NFSU2_TR(0x62950e);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629512:{NFSU2_TR(0x629512);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629515:{NFSU2_TR(0x629515);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629517:{NFSU2_TR(0x629517);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62951b:{NFSU2_TR(0x62951b);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62951e:{NFSU2_TR(0x62951e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629520:{NFSU2_TR(0x629520);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629524:{NFSU2_TR(0x629524);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629527:{NFSU2_TR(0x629527);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629529:{NFSU2_TR(0x629529);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629530:{NFSU2_TR(0x629530);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x629535ull));
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
PN u32 blk_629535(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B629535:L629535:{bud-=12;NFSU2_TR(0x629535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B629538:{NFSU2_TR(0x629538);
u8 U[4];
w4(U+0,u32(u32(u32(0xb40ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62953f:{NFSU2_TR(0x62953f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629540:{NFSU2_TR(0x629540);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B629547:{NFSU2_TR(0x629547);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629548:{NFSU2_TR(0x629548);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b8ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62954f:{NFSU2_TR(0x62954f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629550:{NFSU2_TR(0x629550);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629555:{NFSU2_TR(0x629555);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62955c:{NFSU2_TR(0x62955c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62955d:{NFSU2_TR(0x62955d);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62955e:{NFSU2_TR(0x62955e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x629563ull));
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
PN u32 blk_629563(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B629563:L629563:{bud-=4;NFSU2_TR(0x629563);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62956a:{NFSU2_TR(0x62956a);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x38ull))));
}
B62956d:{NFSU2_TR(0x62956d);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62956f:{NFSU2_TR(0x62956f);
if(r1(F+6)){{[[clang::musttail]] return blk_6295a0(ARGS);}}
}
B629571:L629571:{bud-=13;NFSU2_TR(0x629571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B629574:{NFSU2_TR(0x629574);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62957b:{NFSU2_TR(0x62957b);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B629582:{NFSU2_TR(0x629582);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629584:{NFSU2_TR(0x629584);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+4))));
}
B629586:{NFSU2_TR(0x629586);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62958d:{NFSU2_TR(0x62958d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62958e:{NFSU2_TR(0x62958e);
u8 U[8];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B629595:{NFSU2_TR(0x629595);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629596:{NFSU2_TR(0x629596);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629597:{NFSU2_TR(0x629597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62959a:{NFSU2_TR(0x62959a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62959b:{NFSU2_TR(0x62959b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6295a0ull));
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
PN u32 blk_6295a0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6295a0:L6295a0:{bud-=3;NFSU2_TR(0x6295a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6295a7:{NFSU2_TR(0x6295a7);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6295a9:{NFSU2_TR(0x6295a9);
if(r1(F+6)){{[[clang::musttail]] return blk_62ab69(ARGS);}}
}
B6295af:L6295af:{bud-=3;NFSU2_TR(0x6295af);
u8 U[14];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(F+0,u8((r2(U+10))<(u16(0x0ull))));
w1(F+11,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(F+7,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(F+6,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+9))==(u8(0x0ull))));
}
B6295b8:{NFSU2_TR(0x6295b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((G+0),(U+0),4);
}
B6295bb:{NFSU2_TR(0x6295bb);
if(r1(F+6)){{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_629678(ARGS);}}
}
B6295c1:L6295c1:{bud-=4;NFSU2_TR(0x6295c1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6295c2:{NFSU2_TR(0x6295c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8d4ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B6295c9:{NFSU2_TR(0x6295c9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6295ca:{NFSU2_TR(0x6295ca);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6295cfull));
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
PN u32 blk_6295cf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6295cf:L6295cf:{bud-=18;NFSU2_TR(0x6295cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6295d6:{NFSU2_TR(0x6295d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6295dd:{NFSU2_TR(0x6295dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6295e4:{NFSU2_TR(0x6295e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6295eb:{NFSU2_TR(0x6295eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6295f2:{NFSU2_TR(0x6295f2);
w4(G+4,u32(0-u32(r4(G+4))));
}
B6295f4:{NFSU2_TR(0x6295f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6295fb:{NFSU2_TR(0x6295fb);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6295fc:{NFSU2_TR(0x6295fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8dcull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B629603:{NFSU2_TR(0x629603);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62960a:{NFSU2_TR(0x62960a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62960b:{NFSU2_TR(0x62960b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8e0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B629612:{NFSU2_TR(0x629612);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629613:{NFSU2_TR(0x629613);
u8 U[8];
w4(U+0,u32(u32(u32(0x914ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62961e:{NFSU2_TR(0x62961e);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B629629:{NFSU2_TR(0x629629);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B629634:{NFSU2_TR(0x629634);
u8 U[8];
w4(U+0,u32(u32(u32(0x920ull))+u32(r4(G+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62963f:{NFSU2_TR(0x62963f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x629644ull));
{if(__builtin_expect(bud<=0,0)){EXIT(0x5bacf0u);}[[clang::musttail]] return blk_5bacf0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_629644(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B629644:L629644:{bud-=8;NFSU2_TR(0x629644);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62964b:{NFSU2_TR(0x62964b);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B629652:{NFSU2_TR(0x629652);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B629659:{NFSU2_TR(0x629659);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B629660:{NFSU2_TR(0x629660);
u8 U[6];
w1(F+0,carry<u32>(r4(G+16),u32(0x14ull)));
w1(F+11,scarry<u32>(r4(G+16),u32(0x14ull)));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x14ull))));
w1(F+7,u8(s32(r4(G+16))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B629663:{NFSU2_TR(0x629663);
u8 U[8];
w4(U+0,u32(u32(u32(0x900ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62966a:{NFSU2_TR(0x62966a);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B629671:{NFSU2_TR(0x629671);
u8 U[4];
w4(U+0,u32(u32(u32(0x8d0ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_629678(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_629678(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B629678:L629678:{bud-=197;NFSU2_TR(0x629678);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62967f:{NFSU2_TR(0x62967f);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629682:{NFSU2_TR(0x629682);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629689:{NFSU2_TR(0x629689);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62968b:{NFSU2_TR(0x62968b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62968d:{NFSU2_TR(0x62968d);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629694:{NFSU2_TR(0x629694);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629697:{NFSU2_TR(0x629697);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629699:{NFSU2_TR(0x629699);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296a0:{NFSU2_TR(0x6296a0);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296a3:{NFSU2_TR(0x6296a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296a5:{NFSU2_TR(0x6296a5);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6296a9:{NFSU2_TR(0x6296a9);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296b0:{NFSU2_TR(0x6296b0);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296b3:{NFSU2_TR(0x6296b3);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296ba:{NFSU2_TR(0x6296ba);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296bd:{NFSU2_TR(0x6296bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296bf:{NFSU2_TR(0x6296bf);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296c6:{NFSU2_TR(0x6296c6);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296c9:{NFSU2_TR(0x6296c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296cb:{NFSU2_TR(0x6296cb);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296d2:{NFSU2_TR(0x6296d2);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296d5:{NFSU2_TR(0x6296d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296d7:{NFSU2_TR(0x6296d7);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6296db:{NFSU2_TR(0x6296db);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296e2:{NFSU2_TR(0x6296e2);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296e5:{NFSU2_TR(0x6296e5);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296ec:{NFSU2_TR(0x6296ec);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296ef:{NFSU2_TR(0x6296ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296f1:{NFSU2_TR(0x6296f1);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296f8:{NFSU2_TR(0x6296f8);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296fb:{NFSU2_TR(0x6296fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296fd:{NFSU2_TR(0x6296fd);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629704:{NFSU2_TR(0x629704);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629707:{NFSU2_TR(0x629707);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629709:{NFSU2_TR(0x629709);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62970d:{NFSU2_TR(0x62970d);
{u32 ea_=u32(r4(G+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629714:{NFSU2_TR(0x629714);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629717:{NFSU2_TR(0x629717);
{u32 ea_=u32(r4(G+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62971e:{NFSU2_TR(0x62971e);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629721:{NFSU2_TR(0x629721);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629723:{NFSU2_TR(0x629723);
{u32 ea_=u32(r4(G+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62972a:{NFSU2_TR(0x62972a);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62972d:{NFSU2_TR(0x62972d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62972f:{NFSU2_TR(0x62972f);
{u32 ea_=u32(r4(G+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629736:{NFSU2_TR(0x629736);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629739:{NFSU2_TR(0x629739);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62973b:{NFSU2_TR(0x62973b);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62973f:{NFSU2_TR(0x62973f);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629746:{NFSU2_TR(0x629746);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629749:{NFSU2_TR(0x629749);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629750:{NFSU2_TR(0x629750);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629752:{NFSU2_TR(0x629752);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629754:{NFSU2_TR(0x629754);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62975b:{NFSU2_TR(0x62975b);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62975e:{NFSU2_TR(0x62975e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629760:{NFSU2_TR(0x629760);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629767:{NFSU2_TR(0x629767);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62976a:{NFSU2_TR(0x62976a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62976c:{NFSU2_TR(0x62976c);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629773:{NFSU2_TR(0x629773);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62977a:{NFSU2_TR(0x62977a);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62977d:{NFSU2_TR(0x62977d);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629784:{NFSU2_TR(0x629784);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629787:{NFSU2_TR(0x629787);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629789:{NFSU2_TR(0x629789);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629790:{NFSU2_TR(0x629790);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629793:{NFSU2_TR(0x629793);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629795:{NFSU2_TR(0x629795);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62979c:{NFSU2_TR(0x62979c);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62979f:{NFSU2_TR(0x62979f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297a1:{NFSU2_TR(0x6297a1);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6297a8:{NFSU2_TR(0x6297a8);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297af:{NFSU2_TR(0x6297af);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297b2:{NFSU2_TR(0x6297b2);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297b9:{NFSU2_TR(0x6297b9);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297bc:{NFSU2_TR(0x6297bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297be:{NFSU2_TR(0x6297be);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297c5:{NFSU2_TR(0x6297c5);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297c8:{NFSU2_TR(0x6297c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297ca:{NFSU2_TR(0x6297ca);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297d1:{NFSU2_TR(0x6297d1);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297d4:{NFSU2_TR(0x6297d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297d6:{NFSU2_TR(0x6297d6);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6297dd:{NFSU2_TR(0x6297dd);
{u32 ea_=u32(r4(G+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297e4:{NFSU2_TR(0x6297e4);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297e7:{NFSU2_TR(0x6297e7);
{u32 ea_=u32(r4(G+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297ee:{NFSU2_TR(0x6297ee);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297f1:{NFSU2_TR(0x6297f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297f3:{NFSU2_TR(0x6297f3);
{u32 ea_=u32(r4(G+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297fa:{NFSU2_TR(0x6297fa);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297fd:{NFSU2_TR(0x6297fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297ff:{NFSU2_TR(0x6297ff);
{u32 ea_=u32(r4(G+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629806:{NFSU2_TR(0x629806);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629809:{NFSU2_TR(0x629809);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62980b:{NFSU2_TR(0x62980b);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629812:{NFSU2_TR(0x629812);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629819:{NFSU2_TR(0x629819);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62981c:{NFSU2_TR(0x62981c);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629823:{NFSU2_TR(0x629823);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629825:{NFSU2_TR(0x629825);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629827:{NFSU2_TR(0x629827);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62982e:{NFSU2_TR(0x62982e);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629831:{NFSU2_TR(0x629831);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629833:{NFSU2_TR(0x629833);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62983a:{NFSU2_TR(0x62983a);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62983d:{NFSU2_TR(0x62983d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62983f:{NFSU2_TR(0x62983f);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629846:{NFSU2_TR(0x629846);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62984d:{NFSU2_TR(0x62984d);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629850:{NFSU2_TR(0x629850);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629857:{NFSU2_TR(0x629857);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62985a:{NFSU2_TR(0x62985a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62985c:{NFSU2_TR(0x62985c);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629863:{NFSU2_TR(0x629863);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629866:{NFSU2_TR(0x629866);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629868:{NFSU2_TR(0x629868);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62986f:{NFSU2_TR(0x62986f);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629872:{NFSU2_TR(0x629872);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629874:{NFSU2_TR(0x629874);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62987b:{NFSU2_TR(0x62987b);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629882:{NFSU2_TR(0x629882);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629885:{NFSU2_TR(0x629885);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62988c:{NFSU2_TR(0x62988c);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62988f:{NFSU2_TR(0x62988f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629891:{NFSU2_TR(0x629891);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629898:{NFSU2_TR(0x629898);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62989b:{NFSU2_TR(0x62989b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62989d:{NFSU2_TR(0x62989d);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298a4:{NFSU2_TR(0x6298a4);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298a7:{NFSU2_TR(0x6298a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298a9:{NFSU2_TR(0x6298a9);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6298b0:{NFSU2_TR(0x6298b0);
{u32 ea_=u32(r4(G+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298b7:{NFSU2_TR(0x6298b7);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298ba:{NFSU2_TR(0x6298ba);
{u32 ea_=u32(r4(G+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298c1:{NFSU2_TR(0x6298c1);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298c4:{NFSU2_TR(0x6298c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298c6:{NFSU2_TR(0x6298c6);
{u32 ea_=u32(r4(G+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298cd:{NFSU2_TR(0x6298cd);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298d0:{NFSU2_TR(0x6298d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298d2:{NFSU2_TR(0x6298d2);
{u32 ea_=u32(r4(G+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298d9:{NFSU2_TR(0x6298d9);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298dc:{NFSU2_TR(0x6298dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298de:{NFSU2_TR(0x6298de);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6298e5:{NFSU2_TR(0x6298e5);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298ec:{NFSU2_TR(0x6298ec);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298ef:{NFSU2_TR(0x6298ef);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298f6:{NFSU2_TR(0x6298f6);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298f9:{NFSU2_TR(0x6298f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298fb:{NFSU2_TR(0x6298fb);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629902:{NFSU2_TR(0x629902);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629905:{NFSU2_TR(0x629905);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629907:{NFSU2_TR(0x629907);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62990e:{NFSU2_TR(0x62990e);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629910:{NFSU2_TR(0x629910);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629912:{NFSU2_TR(0x629912);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629919:{NFSU2_TR(0x629919);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629920:{NFSU2_TR(0x629920);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629923:{NFSU2_TR(0x629923);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62992a:{NFSU2_TR(0x62992a);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62992d:{NFSU2_TR(0x62992d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62992f:{NFSU2_TR(0x62992f);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629936:{NFSU2_TR(0x629936);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629939:{NFSU2_TR(0x629939);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62993b:{NFSU2_TR(0x62993b);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629942:{NFSU2_TR(0x629942);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629945:{NFSU2_TR(0x629945);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629947:{NFSU2_TR(0x629947);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62994e:{NFSU2_TR(0x62994e);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629955:{NFSU2_TR(0x629955);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629958:{NFSU2_TR(0x629958);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62995f:{NFSU2_TR(0x62995f);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629962:{NFSU2_TR(0x629962);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629964:{NFSU2_TR(0x629964);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62996b:{NFSU2_TR(0x62996b);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62996e:{NFSU2_TR(0x62996e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629970:{NFSU2_TR(0x629970);
{u32 ea_=u32(r4(G+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629977:{NFSU2_TR(0x629977);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62997a:{NFSU2_TR(0x62997a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62997c:{NFSU2_TR(0x62997c);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629983:{NFSU2_TR(0x629983);
{u32 ea_=u32(r4(G+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62998a:{NFSU2_TR(0x62998a);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62998d:{NFSU2_TR(0x62998d);
{u32 ea_=u32(r4(G+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629994:{NFSU2_TR(0x629994);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B629998:{NFSU2_TR(0x629998);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62999b:{NFSU2_TR(0x62999b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62999c:{NFSU2_TR(0x62999c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6299a0:{NFSU2_TR(0x6299a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6299a1:{NFSU2_TR(0x6299a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299a3:{NFSU2_TR(0x6299a3);
{u32 ea_=u32(r4(G+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299aa:{NFSU2_TR(0x6299aa);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299ad:{NFSU2_TR(0x6299ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299af:{NFSU2_TR(0x6299af);
{u32 ea_=u32(r4(G+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299b6:{NFSU2_TR(0x6299b6);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299b9:{NFSU2_TR(0x6299b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299bb:{NFSU2_TR(0x6299bb);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6299c2:{NFSU2_TR(0x6299c2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6299c7ull));
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
PN u32 blk_6299c7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6299c7:L6299c7:{bud-=197;NFSU2_TR(0x6299c7);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299cb:{NFSU2_TR(0x6299cb);
{u32 ea_=u32(r4(G+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299d2:{NFSU2_TR(0x6299d2);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299d6:{NFSU2_TR(0x6299d6);
{u32 ea_=u32(r4(G+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299dd:{NFSU2_TR(0x6299dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299df:{NFSU2_TR(0x6299df);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299e3:{NFSU2_TR(0x6299e3);
{u32 ea_=u32(r4(G+16)+u32(1080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299ea:{NFSU2_TR(0x6299ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299ec:{NFSU2_TR(0x6299ec);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299f0:{NFSU2_TR(0x6299f0);
{u32 ea_=u32(r4(G+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299f7:{NFSU2_TR(0x6299f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299f9:{NFSU2_TR(0x6299f9);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6299fd:{NFSU2_TR(0x6299fd);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a01:{NFSU2_TR(0x629a01);
{u32 ea_=u32(r4(G+16)+u32(1052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a08:{NFSU2_TR(0x629a08);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a0c:{NFSU2_TR(0x629a0c);
{u32 ea_=u32(r4(G+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a13:{NFSU2_TR(0x629a13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a15:{NFSU2_TR(0x629a15);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a19:{NFSU2_TR(0x629a19);
{u32 ea_=u32(r4(G+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a20:{NFSU2_TR(0x629a20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a22:{NFSU2_TR(0x629a22);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a26:{NFSU2_TR(0x629a26);
{u32 ea_=u32(r4(G+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a2d:{NFSU2_TR(0x629a2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a2f:{NFSU2_TR(0x629a2f);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629a33:{NFSU2_TR(0x629a33);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a37:{NFSU2_TR(0x629a37);
{u32 ea_=u32(r4(G+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a3e:{NFSU2_TR(0x629a3e);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a42:{NFSU2_TR(0x629a42);
{u32 ea_=u32(r4(G+16)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a49:{NFSU2_TR(0x629a49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a4b:{NFSU2_TR(0x629a4b);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a4f:{NFSU2_TR(0x629a4f);
{u32 ea_=u32(r4(G+16)+u32(1088u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a56:{NFSU2_TR(0x629a56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a58:{NFSU2_TR(0x629a58);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a5c:{NFSU2_TR(0x629a5c);
{u32 ea_=u32(r4(G+16)+u32(1104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a63:{NFSU2_TR(0x629a63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a65:{NFSU2_TR(0x629a65);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629a6c:{NFSU2_TR(0x629a6c);
{u32 ea_=u32(r4(G+16)+u32(1060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a73:{NFSU2_TR(0x629a73);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a77:{NFSU2_TR(0x629a77);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a7b:{NFSU2_TR(0x629a7b);
{u32 ea_=u32(r4(G+16)+u32(1076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a82:{NFSU2_TR(0x629a82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a84:{NFSU2_TR(0x629a84);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a88:{NFSU2_TR(0x629a88);
{u32 ea_=u32(r4(G+16)+u32(1092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a8f:{NFSU2_TR(0x629a8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a91:{NFSU2_TR(0x629a91);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a95:{NFSU2_TR(0x629a95);
{u32 ea_=u32(r4(G+16)+u32(1108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a9c:{NFSU2_TR(0x629a9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a9e:{NFSU2_TR(0x629a9e);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629aa5:{NFSU2_TR(0x629aa5);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629aa9:{NFSU2_TR(0x629aa9);
{u32 ea_=u32(r4(G+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ab0:{NFSU2_TR(0x629ab0);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ab4:{NFSU2_TR(0x629ab4);
{u32 ea_=u32(r4(G+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629abb:{NFSU2_TR(0x629abb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629abd:{NFSU2_TR(0x629abd);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ac1:{NFSU2_TR(0x629ac1);
{u32 ea_=u32(r4(G+16)+u32(1080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ac8:{NFSU2_TR(0x629ac8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629aca:{NFSU2_TR(0x629aca);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ace:{NFSU2_TR(0x629ace);
{u32 ea_=u32(r4(G+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ad5:{NFSU2_TR(0x629ad5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ad7:{NFSU2_TR(0x629ad7);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ade:{NFSU2_TR(0x629ade);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ae2:{NFSU2_TR(0x629ae2);
{u32 ea_=u32(r4(G+16)+u32(1052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ae9:{NFSU2_TR(0x629ae9);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629aed:{NFSU2_TR(0x629aed);
{u32 ea_=u32(r4(G+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629af4:{NFSU2_TR(0x629af4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629af6:{NFSU2_TR(0x629af6);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629afa:{NFSU2_TR(0x629afa);
{u32 ea_=u32(r4(G+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b01:{NFSU2_TR(0x629b01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b03:{NFSU2_TR(0x629b03);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b07:{NFSU2_TR(0x629b07);
{u32 ea_=u32(r4(G+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b0e:{NFSU2_TR(0x629b0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b10:{NFSU2_TR(0x629b10);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629b17:{NFSU2_TR(0x629b17);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b1b:{NFSU2_TR(0x629b1b);
{u32 ea_=u32(r4(G+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b22:{NFSU2_TR(0x629b22);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b26:{NFSU2_TR(0x629b26);
{u32 ea_=u32(r4(G+16)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b2d:{NFSU2_TR(0x629b2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b2f:{NFSU2_TR(0x629b2f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b33:{NFSU2_TR(0x629b33);
{u32 ea_=u32(r4(G+16)+u32(1088u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b3a:{NFSU2_TR(0x629b3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b3c:{NFSU2_TR(0x629b3c);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b40:{NFSU2_TR(0x629b40);
{u32 ea_=u32(r4(G+16)+u32(1104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b47:{NFSU2_TR(0x629b47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b49:{NFSU2_TR(0x629b49);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629b50:{NFSU2_TR(0x629b50);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b54:{NFSU2_TR(0x629b54);
{u32 ea_=u32(r4(G+16)+u32(1060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b5b:{NFSU2_TR(0x629b5b);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b5f:{NFSU2_TR(0x629b5f);
{u32 ea_=u32(r4(G+16)+u32(1076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b66:{NFSU2_TR(0x629b66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b68:{NFSU2_TR(0x629b68);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b6c:{NFSU2_TR(0x629b6c);
{u32 ea_=u32(r4(G+16)+u32(1092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b73:{NFSU2_TR(0x629b73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b75:{NFSU2_TR(0x629b75);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b79:{NFSU2_TR(0x629b79);
{u32 ea_=u32(r4(G+16)+u32(1108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b80:{NFSU2_TR(0x629b80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b82:{NFSU2_TR(0x629b82);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629b89:{NFSU2_TR(0x629b89);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b8d:{NFSU2_TR(0x629b8d);
{u32 ea_=u32(r4(G+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b94:{NFSU2_TR(0x629b94);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b98:{NFSU2_TR(0x629b98);
{u32 ea_=u32(r4(G+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b9f:{NFSU2_TR(0x629b9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ba1:{NFSU2_TR(0x629ba1);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ba5:{NFSU2_TR(0x629ba5);
{u32 ea_=u32(r4(G+16)+u32(1080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bac:{NFSU2_TR(0x629bac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629bae:{NFSU2_TR(0x629bae);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bb2:{NFSU2_TR(0x629bb2);
{u32 ea_=u32(r4(G+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bb9:{NFSU2_TR(0x629bb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629bbb:{NFSU2_TR(0x629bbb);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629bc2:{NFSU2_TR(0x629bc2);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bc6:{NFSU2_TR(0x629bc6);
{u32 ea_=u32(r4(G+16)+u32(1052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bcd:{NFSU2_TR(0x629bcd);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bd1:{NFSU2_TR(0x629bd1);
{u32 ea_=u32(r4(G+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bd8:{NFSU2_TR(0x629bd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629bda:{NFSU2_TR(0x629bda);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bde:{NFSU2_TR(0x629bde);
{u32 ea_=u32(r4(G+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629be5:{NFSU2_TR(0x629be5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629be7:{NFSU2_TR(0x629be7);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629beb:{NFSU2_TR(0x629beb);
{u32 ea_=u32(r4(G+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bf2:{NFSU2_TR(0x629bf2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629bf4:{NFSU2_TR(0x629bf4);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629bfb:{NFSU2_TR(0x629bfb);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bff:{NFSU2_TR(0x629bff);
{u32 ea_=u32(r4(G+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c06:{NFSU2_TR(0x629c06);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c0a:{NFSU2_TR(0x629c0a);
{u32 ea_=u32(r4(G+16)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c11:{NFSU2_TR(0x629c11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c13:{NFSU2_TR(0x629c13);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c17:{NFSU2_TR(0x629c17);
{u32 ea_=u32(r4(G+16)+u32(1088u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c1e:{NFSU2_TR(0x629c1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c20:{NFSU2_TR(0x629c20);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c24:{NFSU2_TR(0x629c24);
{u32 ea_=u32(r4(G+16)+u32(1104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c2b:{NFSU2_TR(0x629c2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c2d:{NFSU2_TR(0x629c2d);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629c34:{NFSU2_TR(0x629c34);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c38:{NFSU2_TR(0x629c38);
{u32 ea_=u32(r4(G+16)+u32(1060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c3f:{NFSU2_TR(0x629c3f);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c43:{NFSU2_TR(0x629c43);
{u32 ea_=u32(r4(G+16)+u32(1076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c4a:{NFSU2_TR(0x629c4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c4c:{NFSU2_TR(0x629c4c);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c50:{NFSU2_TR(0x629c50);
{u32 ea_=u32(r4(G+16)+u32(1092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c57:{NFSU2_TR(0x629c57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c59:{NFSU2_TR(0x629c59);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c5d:{NFSU2_TR(0x629c5d);
{u32 ea_=u32(r4(G+16)+u32(1108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c64:{NFSU2_TR(0x629c64);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c66:{NFSU2_TR(0x629c66);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629c6d:{NFSU2_TR(0x629c6d);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c71:{NFSU2_TR(0x629c71);
{u32 ea_=u32(r4(G+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c78:{NFSU2_TR(0x629c78);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c7c:{NFSU2_TR(0x629c7c);
{u32 ea_=u32(r4(G+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c83:{NFSU2_TR(0x629c83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c85:{NFSU2_TR(0x629c85);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c89:{NFSU2_TR(0x629c89);
{u32 ea_=u32(r4(G+16)+u32(1080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c90:{NFSU2_TR(0x629c90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c92:{NFSU2_TR(0x629c92);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c96:{NFSU2_TR(0x629c96);
{u32 ea_=u32(r4(G+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c9d:{NFSU2_TR(0x629c9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c9f:{NFSU2_TR(0x629c9f);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ca6:{NFSU2_TR(0x629ca6);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629caa:{NFSU2_TR(0x629caa);
{u32 ea_=u32(r4(G+16)+u32(1052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cb1:{NFSU2_TR(0x629cb1);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629cb5:{NFSU2_TR(0x629cb5);
{u32 ea_=u32(r4(G+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cbc:{NFSU2_TR(0x629cbc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629cbe:{NFSU2_TR(0x629cbe);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629cc2:{NFSU2_TR(0x629cc2);
{u32 ea_=u32(r4(G+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cc9:{NFSU2_TR(0x629cc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ccb:{NFSU2_TR(0x629ccb);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ccf:{NFSU2_TR(0x629ccf);
{u32 ea_=u32(r4(G+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cd6:{NFSU2_TR(0x629cd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629cd8:{NFSU2_TR(0x629cd8);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629cdf:{NFSU2_TR(0x629cdf);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ce3:{NFSU2_TR(0x629ce3);
{u32 ea_=u32(r4(G+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cea:{NFSU2_TR(0x629cea);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B629cee:{NFSU2_TR(0x629cee);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629cf2:{NFSU2_TR(0x629cf2);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629cf3:{NFSU2_TR(0x629cf3);
{u32 ea_=u32(r4(G+16)+u32(1076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cfa:{NFSU2_TR(0x629cfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B629cfe:{NFSU2_TR(0x629cfe);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629cff:{NFSU2_TR(0x629cff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d01:{NFSU2_TR(0x629d01);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d05:{NFSU2_TR(0x629d05);
{u32 ea_=u32(r4(G+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d0c:{NFSU2_TR(0x629d0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d0e:{NFSU2_TR(0x629d0e);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d12:{NFSU2_TR(0x629d12);
{u32 ea_=u32(r4(G+16)+u32(1112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d19:{NFSU2_TR(0x629d19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d1b:{NFSU2_TR(0x629d1b);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629d22:{NFSU2_TR(0x629d22);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d26:{NFSU2_TR(0x629d26);
{u32 ea_=u32(r4(G+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d2d:{NFSU2_TR(0x629d2d);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d31:{NFSU2_TR(0x629d31);
{u32 ea_=u32(r4(G+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d38:{NFSU2_TR(0x629d38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d3a:{NFSU2_TR(0x629d3a);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d3e:{NFSU2_TR(0x629d3e);
{u32 ea_=u32(r4(G+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d45:{NFSU2_TR(0x629d45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d47:{NFSU2_TR(0x629d47);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d4b:{NFSU2_TR(0x629d4b);
{u32 ea_=u32(r4(G+16)+u32(1116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d52:{NFSU2_TR(0x629d52);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d54:{NFSU2_TR(0x629d54);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629d5b:{NFSU2_TR(0x629d5b);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x629d60ull));
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
PN u32 blk_629d60(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B629d60:L629d60:{bud-=198;NFSU2_TR(0x629d60);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d64:{NFSU2_TR(0x629d64);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d67:{NFSU2_TR(0x629d67);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d6b:{NFSU2_TR(0x629d6b);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d6e:{NFSU2_TR(0x629d6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d70:{NFSU2_TR(0x629d70);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d74:{NFSU2_TR(0x629d74);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d76:{NFSU2_TR(0x629d76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d78:{NFSU2_TR(0x629d78);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d7c:{NFSU2_TR(0x629d7c);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d7f:{NFSU2_TR(0x629d7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d81:{NFSU2_TR(0x629d81);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629d88:{NFSU2_TR(0x629d88);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d8c:{NFSU2_TR(0x629d8c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d8f:{NFSU2_TR(0x629d8f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d93:{NFSU2_TR(0x629d93);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d96:{NFSU2_TR(0x629d96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d98:{NFSU2_TR(0x629d98);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d9c:{NFSU2_TR(0x629d9c);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d9f:{NFSU2_TR(0x629d9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629da1:{NFSU2_TR(0x629da1);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629da5:{NFSU2_TR(0x629da5);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629da8:{NFSU2_TR(0x629da8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629daa:{NFSU2_TR(0x629daa);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629db1:{NFSU2_TR(0x629db1);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629db5:{NFSU2_TR(0x629db5);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629db8:{NFSU2_TR(0x629db8);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dbc:{NFSU2_TR(0x629dbc);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629dbf:{NFSU2_TR(0x629dbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dc1:{NFSU2_TR(0x629dc1);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dc5:{NFSU2_TR(0x629dc5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629dc8:{NFSU2_TR(0x629dc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dca:{NFSU2_TR(0x629dca);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dce:{NFSU2_TR(0x629dce);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629dd1:{NFSU2_TR(0x629dd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dd3:{NFSU2_TR(0x629dd3);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629dda:{NFSU2_TR(0x629dda);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dde:{NFSU2_TR(0x629dde);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629de1:{NFSU2_TR(0x629de1);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629de5:{NFSU2_TR(0x629de5);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629de8:{NFSU2_TR(0x629de8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dea:{NFSU2_TR(0x629dea);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dee:{NFSU2_TR(0x629dee);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629df1:{NFSU2_TR(0x629df1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629df3:{NFSU2_TR(0x629df3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629df7:{NFSU2_TR(0x629df7);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629dfa:{NFSU2_TR(0x629dfa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dfc:{NFSU2_TR(0x629dfc);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629e03:{NFSU2_TR(0x629e03);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e07:{NFSU2_TR(0x629e07);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e0a:{NFSU2_TR(0x629e0a);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e0e:{NFSU2_TR(0x629e0e);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e11:{NFSU2_TR(0x629e11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e13:{NFSU2_TR(0x629e13);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e17:{NFSU2_TR(0x629e17);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e1a:{NFSU2_TR(0x629e1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e1c:{NFSU2_TR(0x629e1c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e20:{NFSU2_TR(0x629e20);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e22:{NFSU2_TR(0x629e22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e24:{NFSU2_TR(0x629e24);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629e2b:{NFSU2_TR(0x629e2b);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e2f:{NFSU2_TR(0x629e2f);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e32:{NFSU2_TR(0x629e32);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e36:{NFSU2_TR(0x629e36);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e39:{NFSU2_TR(0x629e39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e3b:{NFSU2_TR(0x629e3b);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e3f:{NFSU2_TR(0x629e3f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e42:{NFSU2_TR(0x629e42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e44:{NFSU2_TR(0x629e44);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e48:{NFSU2_TR(0x629e48);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e4b:{NFSU2_TR(0x629e4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e4d:{NFSU2_TR(0x629e4d);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629e54:{NFSU2_TR(0x629e54);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e58:{NFSU2_TR(0x629e58);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e5b:{NFSU2_TR(0x629e5b);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e5f:{NFSU2_TR(0x629e5f);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e62:{NFSU2_TR(0x629e62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e64:{NFSU2_TR(0x629e64);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e68:{NFSU2_TR(0x629e68);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e6b:{NFSU2_TR(0x629e6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e6d:{NFSU2_TR(0x629e6d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e71:{NFSU2_TR(0x629e71);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e74:{NFSU2_TR(0x629e74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e76:{NFSU2_TR(0x629e76);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629e7d:{NFSU2_TR(0x629e7d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e81:{NFSU2_TR(0x629e81);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e84:{NFSU2_TR(0x629e84);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e88:{NFSU2_TR(0x629e88);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e8b:{NFSU2_TR(0x629e8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e8d:{NFSU2_TR(0x629e8d);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e91:{NFSU2_TR(0x629e91);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e94:{NFSU2_TR(0x629e94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e96:{NFSU2_TR(0x629e96);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e9a:{NFSU2_TR(0x629e9a);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e9d:{NFSU2_TR(0x629e9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e9f:{NFSU2_TR(0x629e9f);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ea6:{NFSU2_TR(0x629ea6);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629eaa:{NFSU2_TR(0x629eaa);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ead:{NFSU2_TR(0x629ead);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629eb1:{NFSU2_TR(0x629eb1);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629eb4:{NFSU2_TR(0x629eb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629eb6:{NFSU2_TR(0x629eb6);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629eba:{NFSU2_TR(0x629eba);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ebd:{NFSU2_TR(0x629ebd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ebf:{NFSU2_TR(0x629ebf);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ec3:{NFSU2_TR(0x629ec3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ec5:{NFSU2_TR(0x629ec5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ec7:{NFSU2_TR(0x629ec7);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ece:{NFSU2_TR(0x629ece);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ed2:{NFSU2_TR(0x629ed2);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ed5:{NFSU2_TR(0x629ed5);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ed9:{NFSU2_TR(0x629ed9);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629edc:{NFSU2_TR(0x629edc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ede:{NFSU2_TR(0x629ede);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ee2:{NFSU2_TR(0x629ee2);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ee5:{NFSU2_TR(0x629ee5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ee7:{NFSU2_TR(0x629ee7);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629eeb:{NFSU2_TR(0x629eeb);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629eee:{NFSU2_TR(0x629eee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ef0:{NFSU2_TR(0x629ef0);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ef7:{NFSU2_TR(0x629ef7);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629efb:{NFSU2_TR(0x629efb);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629efe:{NFSU2_TR(0x629efe);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f02:{NFSU2_TR(0x629f02);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f05:{NFSU2_TR(0x629f05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f07:{NFSU2_TR(0x629f07);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f0b:{NFSU2_TR(0x629f0b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f0e:{NFSU2_TR(0x629f0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f10:{NFSU2_TR(0x629f10);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f14:{NFSU2_TR(0x629f14);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f17:{NFSU2_TR(0x629f17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f19:{NFSU2_TR(0x629f19);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629f20:{NFSU2_TR(0x629f20);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f24:{NFSU2_TR(0x629f24);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f27:{NFSU2_TR(0x629f27);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f2b:{NFSU2_TR(0x629f2b);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f2e:{NFSU2_TR(0x629f2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f30:{NFSU2_TR(0x629f30);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f34:{NFSU2_TR(0x629f34);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f37:{NFSU2_TR(0x629f37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f39:{NFSU2_TR(0x629f39);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f3d:{NFSU2_TR(0x629f3d);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f40:{NFSU2_TR(0x629f40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f42:{NFSU2_TR(0x629f42);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629f49:{NFSU2_TR(0x629f49);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f4d:{NFSU2_TR(0x629f4d);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f50:{NFSU2_TR(0x629f50);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f54:{NFSU2_TR(0x629f54);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f57:{NFSU2_TR(0x629f57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f59:{NFSU2_TR(0x629f59);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f5d:{NFSU2_TR(0x629f5d);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f60:{NFSU2_TR(0x629f60);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f62:{NFSU2_TR(0x629f62);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f66:{NFSU2_TR(0x629f66);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f68:{NFSU2_TR(0x629f68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f6a:{NFSU2_TR(0x629f6a);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629f71:{NFSU2_TR(0x629f71);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B629f78:{NFSU2_TR(0x629f78);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f7c:{NFSU2_TR(0x629f7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B629f83:{NFSU2_TR(0x629f83);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f86:{NFSU2_TR(0x629f86);
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
B629f89:{NFSU2_TR(0x629f89);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f8d:{NFSU2_TR(0x629f8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629f8e:{NFSU2_TR(0x629f8e);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f91:{NFSU2_TR(0x629f91);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B629f92:{NFSU2_TR(0x629f92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f94:{NFSU2_TR(0x629f94);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f98:{NFSU2_TR(0x629f98);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f9b:{NFSU2_TR(0x629f9b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f9d:{NFSU2_TR(0x629f9d);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fa1:{NFSU2_TR(0x629fa1);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fa4:{NFSU2_TR(0x629fa4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fa6:{NFSU2_TR(0x629fa6);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629fad:{NFSU2_TR(0x629fad);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fb1:{NFSU2_TR(0x629fb1);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fb4:{NFSU2_TR(0x629fb4);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fb8:{NFSU2_TR(0x629fb8);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fbb:{NFSU2_TR(0x629fbb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fbd:{NFSU2_TR(0x629fbd);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fc1:{NFSU2_TR(0x629fc1);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fc4:{NFSU2_TR(0x629fc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fc6:{NFSU2_TR(0x629fc6);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fca:{NFSU2_TR(0x629fca);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fcd:{NFSU2_TR(0x629fcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fcf:{NFSU2_TR(0x629fcf);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629fd6:{NFSU2_TR(0x629fd6);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fda:{NFSU2_TR(0x629fda);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fdd:{NFSU2_TR(0x629fdd);
{u32 ea_=u32(r4(G+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fe1:{NFSU2_TR(0x629fe1);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fe4:{NFSU2_TR(0x629fe4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fe6:{NFSU2_TR(0x629fe6);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fea:{NFSU2_TR(0x629fea);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fed:{NFSU2_TR(0x629fed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fef:{NFSU2_TR(0x629fef);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ff3:{NFSU2_TR(0x629ff3);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ff6:{NFSU2_TR(0x629ff6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ff8:{NFSU2_TR(0x629ff8);
{u32 ea_=u32(r4(G+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629fff:{NFSU2_TR(0x629fff);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62a004ull));
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
PN u32 ent_629(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x629294:[[clang::musttail]] return blk_629294(c,a4,a0,a1,bud);
case 0x629535:[[clang::musttail]] return blk_629535(c,a4,a0,a1,bud);
case 0x629563:[[clang::musttail]] return blk_629563(c,a4,a0,a1,bud);
case 0x6295a0:[[clang::musttail]] return blk_6295a0(c,a4,a0,a1,bud);
case 0x6295cf:[[clang::musttail]] return blk_6295cf(c,a4,a0,a1,bud);
case 0x629644:[[clang::musttail]] return blk_629644(c,a4,a0,a1,bud);
case 0x629678:[[clang::musttail]] return blk_629678(c,a4,a0,a1,bud);
case 0x6299c7:[[clang::musttail]] return blk_6299c7(c,a4,a0,a1,bud);
case 0x629d60:[[clang::musttail]] return blk_629d60(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_629(Cpu& c){u8* R=c.regs.data();return ent_629(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
