#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_488e20(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48f660(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f226(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f2ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f2b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f9e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62fa77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62fa7e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6304c4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f1bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f1f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f249(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f27c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f6d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f974(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f9ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62fa0d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62fa43(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62fdac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62f002(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f002:L62f002:{bud-=129;NFSU2_TR(0x62f002);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f005:{NFSU2_TR(0x62f005);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f007:{NFSU2_TR(0x62f007);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f00e:{NFSU2_TR(0x62f00e);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f012:{NFSU2_TR(0x62f012);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f015:{NFSU2_TR(0x62f015);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f019:{NFSU2_TR(0x62f019);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f01c:{NFSU2_TR(0x62f01c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f01e:{NFSU2_TR(0x62f01e);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f022:{NFSU2_TR(0x62f022);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f025:{NFSU2_TR(0x62f025);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f027:{NFSU2_TR(0x62f027);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f02b:{NFSU2_TR(0x62f02b);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f02e:{NFSU2_TR(0x62f02e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f030:{NFSU2_TR(0x62f030);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f037:{NFSU2_TR(0x62f037);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f03b:{NFSU2_TR(0x62f03b);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f03e:{NFSU2_TR(0x62f03e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f042:{NFSU2_TR(0x62f042);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f045:{NFSU2_TR(0x62f045);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f047:{NFSU2_TR(0x62f047);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f04b:{NFSU2_TR(0x62f04b);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f04e:{NFSU2_TR(0x62f04e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f050:{NFSU2_TR(0x62f050);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f054:{NFSU2_TR(0x62f054);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f057:{NFSU2_TR(0x62f057);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f059:{NFSU2_TR(0x62f059);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f060:{NFSU2_TR(0x62f060);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f064:{NFSU2_TR(0x62f064);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f067:{NFSU2_TR(0x62f067);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f06b:{NFSU2_TR(0x62f06b);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f06d:{NFSU2_TR(0x62f06d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f06f:{NFSU2_TR(0x62f06f);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f073:{NFSU2_TR(0x62f073);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f076:{NFSU2_TR(0x62f076);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f078:{NFSU2_TR(0x62f078);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f07c:{NFSU2_TR(0x62f07c);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f07f:{NFSU2_TR(0x62f07f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f081:{NFSU2_TR(0x62f081);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f088:{NFSU2_TR(0x62f088);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f08c:{NFSU2_TR(0x62f08c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f08f:{NFSU2_TR(0x62f08f);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f093:{NFSU2_TR(0x62f093);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f096:{NFSU2_TR(0x62f096);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f098:{NFSU2_TR(0x62f098);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f09c:{NFSU2_TR(0x62f09c);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f09f:{NFSU2_TR(0x62f09f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f0a1:{NFSU2_TR(0x62f0a1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0a5:{NFSU2_TR(0x62f0a5);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0a8:{NFSU2_TR(0x62f0a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f0aa:{NFSU2_TR(0x62f0aa);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f0b1:{NFSU2_TR(0x62f0b1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0b5:{NFSU2_TR(0x62f0b5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0b8:{NFSU2_TR(0x62f0b8);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0bc:{NFSU2_TR(0x62f0bc);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0bf:{NFSU2_TR(0x62f0bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f0c1:{NFSU2_TR(0x62f0c1);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0c5:{NFSU2_TR(0x62f0c5);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0c8:{NFSU2_TR(0x62f0c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f0ca:{NFSU2_TR(0x62f0ca);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0ce:{NFSU2_TR(0x62f0ce);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0d1:{NFSU2_TR(0x62f0d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f0d3:{NFSU2_TR(0x62f0d3);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f0da:{NFSU2_TR(0x62f0da);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0de:{NFSU2_TR(0x62f0de);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0e1:{NFSU2_TR(0x62f0e1);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0e5:{NFSU2_TR(0x62f0e5);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0e8:{NFSU2_TR(0x62f0e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f0ea:{NFSU2_TR(0x62f0ea);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0ee:{NFSU2_TR(0x62f0ee);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0f1:{NFSU2_TR(0x62f0f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f0f3:{NFSU2_TR(0x62f0f3);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f0f7:{NFSU2_TR(0x62f0f7);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f0fa:{NFSU2_TR(0x62f0fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f0fc:{NFSU2_TR(0x62f0fc);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f103:{NFSU2_TR(0x62f103);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f107:{NFSU2_TR(0x62f107);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f10a:{NFSU2_TR(0x62f10a);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f10e:{NFSU2_TR(0x62f10e);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f110:{NFSU2_TR(0x62f110);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f112:{NFSU2_TR(0x62f112);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f116:{NFSU2_TR(0x62f116);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f119:{NFSU2_TR(0x62f119);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f11b:{NFSU2_TR(0x62f11b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f11f:{NFSU2_TR(0x62f11f);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f122:{NFSU2_TR(0x62f122);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f124:{NFSU2_TR(0x62f124);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f12b:{NFSU2_TR(0x62f12b);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f12f:{NFSU2_TR(0x62f12f);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f132:{NFSU2_TR(0x62f132);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f136:{NFSU2_TR(0x62f136);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f139:{NFSU2_TR(0x62f139);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f13b:{NFSU2_TR(0x62f13b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f13f:{NFSU2_TR(0x62f13f);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f142:{NFSU2_TR(0x62f142);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f144:{NFSU2_TR(0x62f144);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f148:{NFSU2_TR(0x62f148);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f14b:{NFSU2_TR(0x62f14b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f14d:{NFSU2_TR(0x62f14d);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f154:{NFSU2_TR(0x62f154);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f158:{NFSU2_TR(0x62f158);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f15b:{NFSU2_TR(0x62f15b);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f162:{NFSU2_TR(0x62f162);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f166:{NFSU2_TR(0x62f166);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62f16a:{NFSU2_TR(0x62f16a);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f16d:{NFSU2_TR(0x62f16d);
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
B62f170:{NFSU2_TR(0x62f170);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f171:{NFSU2_TR(0x62f171);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f173:{NFSU2_TR(0x62f173);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f177:{NFSU2_TR(0x62f177);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f178:{NFSU2_TR(0x62f178);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f17b:{NFSU2_TR(0x62f17b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f17d:{NFSU2_TR(0x62f17d);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f181:{NFSU2_TR(0x62f181);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f184:{NFSU2_TR(0x62f184);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f186:{NFSU2_TR(0x62f186);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f18d:{NFSU2_TR(0x62f18d);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f191:{NFSU2_TR(0x62f191);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f194:{NFSU2_TR(0x62f194);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f198:{NFSU2_TR(0x62f198);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f19b:{NFSU2_TR(0x62f19b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f19d:{NFSU2_TR(0x62f19d);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f1a1:{NFSU2_TR(0x62f1a1);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f1a4:{NFSU2_TR(0x62f1a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f1a6:{NFSU2_TR(0x62f1a6);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f1aa:{NFSU2_TR(0x62f1aa);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f1ad:{NFSU2_TR(0x62f1ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f1af:{NFSU2_TR(0x62f1af);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f1b6:{NFSU2_TR(0x62f1b6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62f1bbull));
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
PN u32 blk_62f1bb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f1bb:L62f1bb:{bud-=4;NFSU2_TR(0x62f1bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f1c2:{NFSU2_TR(0x62f1c2);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B62f1c5:{NFSU2_TR(0x62f1c5);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62f1c7:{NFSU2_TR(0x62f1c7);
if(r1(F+6)){{[[clang::musttail]] return blk_62f226(ARGS);}}
}
B62f1c9:L62f1c9:{bud-=2;NFSU2_TR(0x62f1c9);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B62f1d0:{NFSU2_TR(0x62f1d0);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62f226(ARGS);}}
}
B62f1d2:L62f1d2:{bud-=3;NFSU2_TR(0x62f1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f1d6:{NFSU2_TR(0x62f1d6);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62f1d8:{NFSU2_TR(0x62f1d8);
if(r1(F+6)){{[[clang::musttail]] return blk_62f2b5(ARGS);}}
}
B62f1de:L62f1de:{bud-=7;NFSU2_TR(0x62f1de);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62f1e2:{NFSU2_TR(0x62f1e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f1e4:{NFSU2_TR(0x62f1e4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f1e6:{NFSU2_TR(0x62f1e6);
u8 U[6];
w1(F+0,carry<u32>(r4(R+8),u32(0x1788ull)));
w1(F+11,scarry<u32>(r4(R+8),u32(0x1788ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1788ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B62f1ec:{NFSU2_TR(0x62f1ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f1ed:{NFSU2_TR(0x62f1ed);
__builtin_memmove((G+4),(G+0),4);
}
B62f1ef:{NFSU2_TR(0x62f1ef);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62f1f4ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x488e20u);}[[clang::musttail]] return blk_488e20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62f1f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f1f4:L62f1f4:{bud-=14;NFSU2_TR(0x62f1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62f1f7:{NFSU2_TR(0x62f1f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f1fe:{NFSU2_TR(0x62f1fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62f205:{NFSU2_TR(0x62f205);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f207:{NFSU2_TR(0x62f207);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62f209:{NFSU2_TR(0x62f209);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62f20d:{NFSU2_TR(0x62f20d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f20e:{NFSU2_TR(0x62f20e);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f215:{NFSU2_TR(0x62f215);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x1c0ull))));
}
B62f21b:{NFSU2_TR(0x62f21b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f21c:{NFSU2_TR(0x62f21c);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B62f21f:{NFSU2_TR(0x62f21f);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f220:{NFSU2_TR(0x62f220);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f221:{NFSU2_TR(0x62f221);
{[[clang::musttail]] return blk_62f2ae(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62f226(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f226:L62f226:{bud-=3;NFSU2_TR(0x62f226);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f22a:{NFSU2_TR(0x62f22a);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62f22c:{NFSU2_TR(0x62f22c);
if(r1(F+6)){{[[clang::musttail]] return blk_62f2b5(ARGS);}}
}
B62f232:L62f232:{bud-=7;NFSU2_TR(0x62f232);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f236:{NFSU2_TR(0x62f236);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62f23a:{NFSU2_TR(0x62f23a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f23c:{NFSU2_TR(0x62f23c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f23e:{NFSU2_TR(0x62f23e);
u8 U[6];
w1(F+0,carry<u32>(r4(G+0),u32(0x1788ull)));
w1(F+11,scarry<u32>(r4(G+0),u32(0x1788ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1788ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B62f243:{NFSU2_TR(0x62f243);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f244:{NFSU2_TR(0x62f244);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62f249ull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x488e20u);}[[clang::musttail]] return blk_488e20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62f249(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f249:L62f249:{bud-=13;NFSU2_TR(0x62f249);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f250:{NFSU2_TR(0x62f250);
u8 U[4];
w4(U+0,u32(u32(u32(0xb20ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62f257:{NFSU2_TR(0x62f257);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f258:{NFSU2_TR(0x62f258);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62f25f:{NFSU2_TR(0x62f25f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f260:{NFSU2_TR(0x62f260);
u8 U[4];
w4(U+0,u32(u32(u32(0x798ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62f267:{NFSU2_TR(0x62f267);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f268:{NFSU2_TR(0x62f268);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f26d:{NFSU2_TR(0x62f26d);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x40ull))));
}
B62f270:{NFSU2_TR(0x62f270);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1c0ull))));
}
B62f275:{NFSU2_TR(0x62f275);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f276:{NFSU2_TR(0x62f276);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f277:{NFSU2_TR(0x62f277);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62f27cull));
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
PN u32 blk_62f27c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f27c:L62f27c:{bud-=14;NFSU2_TR(0x62f27c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f283:{NFSU2_TR(0x62f283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62f286:{NFSU2_TR(0x62f286);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62f28d:{NFSU2_TR(0x62f28d);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B62f290:{NFSU2_TR(0x62f290);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62f292:{NFSU2_TR(0x62f292);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f294:{NFSU2_TR(0x62f294);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f295:{NFSU2_TR(0x62f295);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f29c:{NFSU2_TR(0x62f29c);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1c0ull))));
}
B62f2a1:{NFSU2_TR(0x62f2a1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f2a2:{NFSU2_TR(0x62f2a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f2a9:{NFSU2_TR(0x62f2a9);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x40ull))));
}
B62f2ac:{NFSU2_TR(0x62f2ac);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f2ad:{NFSU2_TR(0x62f2ad);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_62f2ae(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62f2ae(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f2ae:L62f2ae:{bud-=2;NFSU2_TR(0x62f2ae);
__builtin_memmove((G+4),(R+28),4);
}
B62f2b0:{NFSU2_TR(0x62f2b0);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62f2b5ull));
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
PN u32 blk_62f2b5(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f2b5:L62f2b5:{bud-=3;NFSU2_TR(0x62f2b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f2bc:{NFSU2_TR(0x62f2bc);
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
B62f2be:{NFSU2_TR(0x62f2be);
if(r1(F+6)){{[[clang::musttail]] return blk_62fa7e(ARGS);}}
}
B62f2c4:L62f2c4:{bud-=197;NFSU2_TR(0x62f2c4);
{u32 ea_=u32(r4(G+16)+u32(1392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f2cb:{NFSU2_TR(0x62f2cb);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f2d1:{NFSU2_TR(0x62f2d1);
{u32 ea_=u32(r4(G+16)+u32(1408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f2d8:{NFSU2_TR(0x62f2d8);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f2de:{NFSU2_TR(0x62f2de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f2e0:{NFSU2_TR(0x62f2e0);
{u32 ea_=u32(r4(G+16)+u32(1376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f2e7:{NFSU2_TR(0x62f2e7);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f2ed:{NFSU2_TR(0x62f2ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f2ef:{NFSU2_TR(0x62f2ef);
{u32 ea_=u32(r4(G+16)+u32(1360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f2f6:{NFSU2_TR(0x62f2f6);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f2fc:{NFSU2_TR(0x62f2fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f2fe:{NFSU2_TR(0x62f2fe);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f302:{NFSU2_TR(0x62f302);
{u32 ea_=u32(r4(G+16)+u32(1396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f309:{NFSU2_TR(0x62f309);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f30f:{NFSU2_TR(0x62f30f);
{u32 ea_=u32(r4(G+16)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f316:{NFSU2_TR(0x62f316);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f31c:{NFSU2_TR(0x62f31c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f31e:{NFSU2_TR(0x62f31e);
{u32 ea_=u32(r4(G+16)+u32(1380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f325:{NFSU2_TR(0x62f325);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f32b:{NFSU2_TR(0x62f32b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f32d:{NFSU2_TR(0x62f32d);
{u32 ea_=u32(r4(G+16)+u32(1364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f334:{NFSU2_TR(0x62f334);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f33a:{NFSU2_TR(0x62f33a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f33c:{NFSU2_TR(0x62f33c);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f340:{NFSU2_TR(0x62f340);
{u32 ea_=u32(r4(G+16)+u32(1400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f347:{NFSU2_TR(0x62f347);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f34d:{NFSU2_TR(0x62f34d);
{u32 ea_=u32(r4(G+16)+u32(1416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f354:{NFSU2_TR(0x62f354);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f35a:{NFSU2_TR(0x62f35a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f35c:{NFSU2_TR(0x62f35c);
{u32 ea_=u32(r4(G+16)+u32(1384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f363:{NFSU2_TR(0x62f363);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f369:{NFSU2_TR(0x62f369);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f36b:{NFSU2_TR(0x62f36b);
{u32 ea_=u32(r4(G+16)+u32(1368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f372:{NFSU2_TR(0x62f372);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f378:{NFSU2_TR(0x62f378);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f37a:{NFSU2_TR(0x62f37a);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f37e:{NFSU2_TR(0x62f37e);
{u32 ea_=u32(r4(G+16)+u32(1404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f385:{NFSU2_TR(0x62f385);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f38b:{NFSU2_TR(0x62f38b);
{u32 ea_=u32(r4(G+16)+u32(1420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f392:{NFSU2_TR(0x62f392);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f398:{NFSU2_TR(0x62f398);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f39a:{NFSU2_TR(0x62f39a);
{u32 ea_=u32(r4(G+16)+u32(1388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f3a1:{NFSU2_TR(0x62f3a1);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f3a7:{NFSU2_TR(0x62f3a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f3a9:{NFSU2_TR(0x62f3a9);
{u32 ea_=u32(r4(G+16)+u32(1372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f3b0:{NFSU2_TR(0x62f3b0);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f3b6:{NFSU2_TR(0x62f3b6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f3b8:{NFSU2_TR(0x62f3b8);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f3bc:{NFSU2_TR(0x62f3bc);
{u32 ea_=u32(r4(G+16)+u32(1408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f3c3:{NFSU2_TR(0x62f3c3);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f3c9:{NFSU2_TR(0x62f3c9);
{u32 ea_=u32(r4(G+16)+u32(1360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f3d0:{NFSU2_TR(0x62f3d0);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f3d6:{NFSU2_TR(0x62f3d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f3d8:{NFSU2_TR(0x62f3d8);
{u32 ea_=u32(r4(G+16)+u32(1376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f3df:{NFSU2_TR(0x62f3df);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f3e5:{NFSU2_TR(0x62f3e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f3e7:{NFSU2_TR(0x62f3e7);
{u32 ea_=u32(r4(G+16)+u32(1392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f3ee:{NFSU2_TR(0x62f3ee);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f3f4:{NFSU2_TR(0x62f3f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f3f6:{NFSU2_TR(0x62f3f6);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f3fd:{NFSU2_TR(0x62f3fd);
{u32 ea_=u32(r4(G+16)+u32(1364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f404:{NFSU2_TR(0x62f404);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f40a:{NFSU2_TR(0x62f40a);
{u32 ea_=u32(r4(G+16)+u32(1380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f411:{NFSU2_TR(0x62f411);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f417:{NFSU2_TR(0x62f417);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f419:{NFSU2_TR(0x62f419);
{u32 ea_=u32(r4(G+16)+u32(1396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f420:{NFSU2_TR(0x62f420);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f426:{NFSU2_TR(0x62f426);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f428:{NFSU2_TR(0x62f428);
{u32 ea_=u32(r4(G+16)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f42f:{NFSU2_TR(0x62f42f);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f435:{NFSU2_TR(0x62f435);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f437:{NFSU2_TR(0x62f437);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f43e:{NFSU2_TR(0x62f43e);
{u32 ea_=u32(r4(G+16)+u32(1368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f445:{NFSU2_TR(0x62f445);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f44b:{NFSU2_TR(0x62f44b);
{u32 ea_=u32(r4(G+16)+u32(1384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f452:{NFSU2_TR(0x62f452);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f458:{NFSU2_TR(0x62f458);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f45a:{NFSU2_TR(0x62f45a);
{u32 ea_=u32(r4(G+16)+u32(1400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f461:{NFSU2_TR(0x62f461);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f467:{NFSU2_TR(0x62f467);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f469:{NFSU2_TR(0x62f469);
{u32 ea_=u32(r4(G+16)+u32(1416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f470:{NFSU2_TR(0x62f470);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f476:{NFSU2_TR(0x62f476);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f478:{NFSU2_TR(0x62f478);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f47f:{NFSU2_TR(0x62f47f);
{u32 ea_=u32(r4(G+16)+u32(1372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f486:{NFSU2_TR(0x62f486);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f48c:{NFSU2_TR(0x62f48c);
{u32 ea_=u32(r4(G+16)+u32(1388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f493:{NFSU2_TR(0x62f493);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f499:{NFSU2_TR(0x62f499);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f49b:{NFSU2_TR(0x62f49b);
{u32 ea_=u32(r4(G+16)+u32(1404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f4a2:{NFSU2_TR(0x62f4a2);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f4a8:{NFSU2_TR(0x62f4a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f4aa:{NFSU2_TR(0x62f4aa);
{u32 ea_=u32(r4(G+16)+u32(1420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f4b1:{NFSU2_TR(0x62f4b1);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f4b7:{NFSU2_TR(0x62f4b7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f4b9:{NFSU2_TR(0x62f4b9);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f4c0:{NFSU2_TR(0x62f4c0);
{u32 ea_=u32(r4(G+16)+u32(1408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f4c7:{NFSU2_TR(0x62f4c7);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f4cd:{NFSU2_TR(0x62f4cd);
{u32 ea_=u32(r4(G+16)+u32(1360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f4d4:{NFSU2_TR(0x62f4d4);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f4da:{NFSU2_TR(0x62f4da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f4dc:{NFSU2_TR(0x62f4dc);
{u32 ea_=u32(r4(G+16)+u32(1376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f4e3:{NFSU2_TR(0x62f4e3);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f4e9:{NFSU2_TR(0x62f4e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f4eb:{NFSU2_TR(0x62f4eb);
{u32 ea_=u32(r4(G+16)+u32(1392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f4f2:{NFSU2_TR(0x62f4f2);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f4f8:{NFSU2_TR(0x62f4f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f4fa:{NFSU2_TR(0x62f4fa);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f501:{NFSU2_TR(0x62f501);
{u32 ea_=u32(r4(G+16)+u32(1364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f508:{NFSU2_TR(0x62f508);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f50e:{NFSU2_TR(0x62f50e);
{u32 ea_=u32(r4(G+16)+u32(1380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f515:{NFSU2_TR(0x62f515);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f51b:{NFSU2_TR(0x62f51b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f51d:{NFSU2_TR(0x62f51d);
{u32 ea_=u32(r4(G+16)+u32(1396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f524:{NFSU2_TR(0x62f524);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f52a:{NFSU2_TR(0x62f52a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f52c:{NFSU2_TR(0x62f52c);
{u32 ea_=u32(r4(G+16)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f533:{NFSU2_TR(0x62f533);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f539:{NFSU2_TR(0x62f539);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f53b:{NFSU2_TR(0x62f53b);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f542:{NFSU2_TR(0x62f542);
{u32 ea_=u32(r4(G+16)+u32(1368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f549:{NFSU2_TR(0x62f549);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f54f:{NFSU2_TR(0x62f54f);
{u32 ea_=u32(r4(G+16)+u32(1384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f556:{NFSU2_TR(0x62f556);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f55c:{NFSU2_TR(0x62f55c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f55e:{NFSU2_TR(0x62f55e);
{u32 ea_=u32(r4(G+16)+u32(1400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f565:{NFSU2_TR(0x62f565);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f56b:{NFSU2_TR(0x62f56b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f56d:{NFSU2_TR(0x62f56d);
{u32 ea_=u32(r4(G+16)+u32(1416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f574:{NFSU2_TR(0x62f574);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f57a:{NFSU2_TR(0x62f57a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f57c:{NFSU2_TR(0x62f57c);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f583:{NFSU2_TR(0x62f583);
{u32 ea_=u32(r4(G+16)+u32(1372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f58a:{NFSU2_TR(0x62f58a);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f590:{NFSU2_TR(0x62f590);
{u32 ea_=u32(r4(G+16)+u32(1388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f597:{NFSU2_TR(0x62f597);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f59d:{NFSU2_TR(0x62f59d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f59f:{NFSU2_TR(0x62f59f);
{u32 ea_=u32(r4(G+16)+u32(1404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f5a6:{NFSU2_TR(0x62f5a6);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f5ac:{NFSU2_TR(0x62f5ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f5ae:{NFSU2_TR(0x62f5ae);
{u32 ea_=u32(r4(G+16)+u32(1420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f5b5:{NFSU2_TR(0x62f5b5);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f5bb:{NFSU2_TR(0x62f5bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f5bd:{NFSU2_TR(0x62f5bd);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f5c4:{NFSU2_TR(0x62f5c4);
{u32 ea_=u32(r4(G+16)+u32(1408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f5cb:{NFSU2_TR(0x62f5cb);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f5d1:{NFSU2_TR(0x62f5d1);
{u32 ea_=u32(r4(G+16)+u32(1360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f5d8:{NFSU2_TR(0x62f5d8);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f5de:{NFSU2_TR(0x62f5de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f5e0:{NFSU2_TR(0x62f5e0);
{u32 ea_=u32(r4(G+16)+u32(1376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f5e7:{NFSU2_TR(0x62f5e7);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f5ed:{NFSU2_TR(0x62f5ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f5ef:{NFSU2_TR(0x62f5ef);
{u32 ea_=u32(r4(G+16)+u32(1392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f5f6:{NFSU2_TR(0x62f5f6);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f5fc:{NFSU2_TR(0x62f5fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f5fe:{NFSU2_TR(0x62f5fe);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f605:{NFSU2_TR(0x62f605);
{u32 ea_=u32(r4(G+16)+u32(1364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f60c:{NFSU2_TR(0x62f60c);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f612:{NFSU2_TR(0x62f612);
{u32 ea_=u32(r4(G+16)+u32(1380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f619:{NFSU2_TR(0x62f619);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f61f:{NFSU2_TR(0x62f61f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f621:{NFSU2_TR(0x62f621);
{u32 ea_=u32(r4(G+16)+u32(1396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f628:{NFSU2_TR(0x62f628);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f62e:{NFSU2_TR(0x62f62e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f630:{NFSU2_TR(0x62f630);
{u32 ea_=u32(r4(G+16)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f637:{NFSU2_TR(0x62f637);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f63d:{NFSU2_TR(0x62f63d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f63f:{NFSU2_TR(0x62f63f);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f646:{NFSU2_TR(0x62f646);
{u32 ea_=u32(r4(G+16)+u32(1368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f64d:{NFSU2_TR(0x62f64d);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f653:{NFSU2_TR(0x62f653);
{u32 ea_=u32(r4(G+16)+u32(1384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f65a:{NFSU2_TR(0x62f65a);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f660:{NFSU2_TR(0x62f660);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f662:{NFSU2_TR(0x62f662);
{u32 ea_=u32(r4(G+16)+u32(1400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f669:{NFSU2_TR(0x62f669);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f66f:{NFSU2_TR(0x62f66f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f671:{NFSU2_TR(0x62f671);
{u32 ea_=u32(r4(G+16)+u32(1416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f678:{NFSU2_TR(0x62f678);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f67e:{NFSU2_TR(0x62f67e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f680:{NFSU2_TR(0x62f680);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f687:{NFSU2_TR(0x62f687);
{u32 ea_=u32(r4(G+16)+u32(1372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f68e:{NFSU2_TR(0x62f68e);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f694:{NFSU2_TR(0x62f694);
{u32 ea_=u32(r4(G+16)+u32(1388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f69b:{NFSU2_TR(0x62f69b);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62f69f:{NFSU2_TR(0x62f69f);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f6a5:{NFSU2_TR(0x62f6a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f6a6:{NFSU2_TR(0x62f6a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62f6aa:{NFSU2_TR(0x62f6aa);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f6ab:{NFSU2_TR(0x62f6ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f6ad:{NFSU2_TR(0x62f6ad);
{u32 ea_=u32(r4(G+16)+u32(1412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f6b4:{NFSU2_TR(0x62f6b4);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f6ba:{NFSU2_TR(0x62f6ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f6bc:{NFSU2_TR(0x62f6bc);
{u32 ea_=u32(r4(G+16)+u32(1428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f6c3:{NFSU2_TR(0x62f6c3);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f6c9:{NFSU2_TR(0x62f6c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f6cb:{NFSU2_TR(0x62f6cb);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f6d2:{NFSU2_TR(0x62f6d2);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62f6d7ull));
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
PN u32 blk_62f6d7(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f6d7:L62f6d7:{bud-=198;NFSU2_TR(0x62f6d7);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f6db:{NFSU2_TR(0x62f6db);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f6dd:{NFSU2_TR(0x62f6dd);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f6e1:{NFSU2_TR(0x62f6e1);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f6e4:{NFSU2_TR(0x62f6e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f6e6:{NFSU2_TR(0x62f6e6);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f6ea:{NFSU2_TR(0x62f6ea);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f6ed:{NFSU2_TR(0x62f6ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f6ef:{NFSU2_TR(0x62f6ef);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f6f3:{NFSU2_TR(0x62f6f3);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f6f6:{NFSU2_TR(0x62f6f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f6f8:{NFSU2_TR(0x62f6f8);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f6fc:{NFSU2_TR(0x62f6fc);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f700:{NFSU2_TR(0x62f700);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f703:{NFSU2_TR(0x62f703);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f707:{NFSU2_TR(0x62f707);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f70a:{NFSU2_TR(0x62f70a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f70c:{NFSU2_TR(0x62f70c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f710:{NFSU2_TR(0x62f710);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f713:{NFSU2_TR(0x62f713);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f715:{NFSU2_TR(0x62f715);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f719:{NFSU2_TR(0x62f719);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f71c:{NFSU2_TR(0x62f71c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f71e:{NFSU2_TR(0x62f71e);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f722:{NFSU2_TR(0x62f722);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f726:{NFSU2_TR(0x62f726);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f729:{NFSU2_TR(0x62f729);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f72d:{NFSU2_TR(0x62f72d);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f730:{NFSU2_TR(0x62f730);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f732:{NFSU2_TR(0x62f732);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f736:{NFSU2_TR(0x62f736);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f739:{NFSU2_TR(0x62f739);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f73b:{NFSU2_TR(0x62f73b);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f73f:{NFSU2_TR(0x62f73f);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f742:{NFSU2_TR(0x62f742);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f744:{NFSU2_TR(0x62f744);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f74b:{NFSU2_TR(0x62f74b);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f74f:{NFSU2_TR(0x62f74f);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f752:{NFSU2_TR(0x62f752);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f756:{NFSU2_TR(0x62f756);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f759:{NFSU2_TR(0x62f759);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f75b:{NFSU2_TR(0x62f75b);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f75f:{NFSU2_TR(0x62f75f);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f762:{NFSU2_TR(0x62f762);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f764:{NFSU2_TR(0x62f764);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f768:{NFSU2_TR(0x62f768);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f76b:{NFSU2_TR(0x62f76b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f76d:{NFSU2_TR(0x62f76d);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f774:{NFSU2_TR(0x62f774);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f778:{NFSU2_TR(0x62f778);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f77b:{NFSU2_TR(0x62f77b);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f77f:{NFSU2_TR(0x62f77f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f781:{NFSU2_TR(0x62f781);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f783:{NFSU2_TR(0x62f783);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f787:{NFSU2_TR(0x62f787);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f78a:{NFSU2_TR(0x62f78a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f78c:{NFSU2_TR(0x62f78c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f790:{NFSU2_TR(0x62f790);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f793:{NFSU2_TR(0x62f793);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f795:{NFSU2_TR(0x62f795);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f79c:{NFSU2_TR(0x62f79c);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7a0:{NFSU2_TR(0x62f7a0);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7a3:{NFSU2_TR(0x62f7a3);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7a7:{NFSU2_TR(0x62f7a7);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7aa:{NFSU2_TR(0x62f7aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f7ac:{NFSU2_TR(0x62f7ac);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7b0:{NFSU2_TR(0x62f7b0);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7b3:{NFSU2_TR(0x62f7b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f7b5:{NFSU2_TR(0x62f7b5);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7b9:{NFSU2_TR(0x62f7b9);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7bc:{NFSU2_TR(0x62f7bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f7be:{NFSU2_TR(0x62f7be);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f7c5:{NFSU2_TR(0x62f7c5);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7c9:{NFSU2_TR(0x62f7c9);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7cc:{NFSU2_TR(0x62f7cc);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7d0:{NFSU2_TR(0x62f7d0);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7d3:{NFSU2_TR(0x62f7d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f7d5:{NFSU2_TR(0x62f7d5);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7d9:{NFSU2_TR(0x62f7d9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7dc:{NFSU2_TR(0x62f7dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f7de:{NFSU2_TR(0x62f7de);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7e2:{NFSU2_TR(0x62f7e2);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7e5:{NFSU2_TR(0x62f7e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f7e7:{NFSU2_TR(0x62f7e7);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f7ee:{NFSU2_TR(0x62f7ee);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7f2:{NFSU2_TR(0x62f7f2);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7f5:{NFSU2_TR(0x62f7f5);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f7f9:{NFSU2_TR(0x62f7f9);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f7fc:{NFSU2_TR(0x62f7fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f7fe:{NFSU2_TR(0x62f7fe);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f802:{NFSU2_TR(0x62f802);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f805:{NFSU2_TR(0x62f805);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f807:{NFSU2_TR(0x62f807);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f80b:{NFSU2_TR(0x62f80b);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f80e:{NFSU2_TR(0x62f80e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f810:{NFSU2_TR(0x62f810);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f817:{NFSU2_TR(0x62f817);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f81b:{NFSU2_TR(0x62f81b);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f81e:{NFSU2_TR(0x62f81e);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f822:{NFSU2_TR(0x62f822);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f824:{NFSU2_TR(0x62f824);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f826:{NFSU2_TR(0x62f826);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f82a:{NFSU2_TR(0x62f82a);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f82d:{NFSU2_TR(0x62f82d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f82f:{NFSU2_TR(0x62f82f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f833:{NFSU2_TR(0x62f833);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f836:{NFSU2_TR(0x62f836);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f838:{NFSU2_TR(0x62f838);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f83f:{NFSU2_TR(0x62f83f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f843:{NFSU2_TR(0x62f843);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f846:{NFSU2_TR(0x62f846);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f84a:{NFSU2_TR(0x62f84a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f84d:{NFSU2_TR(0x62f84d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f84f:{NFSU2_TR(0x62f84f);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f853:{NFSU2_TR(0x62f853);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f856:{NFSU2_TR(0x62f856);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f858:{NFSU2_TR(0x62f858);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f85c:{NFSU2_TR(0x62f85c);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f85f:{NFSU2_TR(0x62f85f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f861:{NFSU2_TR(0x62f861);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f868:{NFSU2_TR(0x62f868);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f86c:{NFSU2_TR(0x62f86c);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f86f:{NFSU2_TR(0x62f86f);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f873:{NFSU2_TR(0x62f873);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f876:{NFSU2_TR(0x62f876);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f878:{NFSU2_TR(0x62f878);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f87c:{NFSU2_TR(0x62f87c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f87f:{NFSU2_TR(0x62f87f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f881:{NFSU2_TR(0x62f881);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f885:{NFSU2_TR(0x62f885);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f888:{NFSU2_TR(0x62f888);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f88a:{NFSU2_TR(0x62f88a);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f891:{NFSU2_TR(0x62f891);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f895:{NFSU2_TR(0x62f895);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f898:{NFSU2_TR(0x62f898);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f89c:{NFSU2_TR(0x62f89c);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f89f:{NFSU2_TR(0x62f89f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f8a1:{NFSU2_TR(0x62f8a1);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8a5:{NFSU2_TR(0x62f8a5);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8a8:{NFSU2_TR(0x62f8a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f8aa:{NFSU2_TR(0x62f8aa);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8ae:{NFSU2_TR(0x62f8ae);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8b1:{NFSU2_TR(0x62f8b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f8b3:{NFSU2_TR(0x62f8b3);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f8ba:{NFSU2_TR(0x62f8ba);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8be:{NFSU2_TR(0x62f8be);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8c1:{NFSU2_TR(0x62f8c1);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8c5:{NFSU2_TR(0x62f8c5);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8c7:{NFSU2_TR(0x62f8c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f8c9:{NFSU2_TR(0x62f8c9);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8cd:{NFSU2_TR(0x62f8cd);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8d0:{NFSU2_TR(0x62f8d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f8d2:{NFSU2_TR(0x62f8d2);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8d6:{NFSU2_TR(0x62f8d6);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8d9:{NFSU2_TR(0x62f8d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f8db:{NFSU2_TR(0x62f8db);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f8e2:{NFSU2_TR(0x62f8e2);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8e6:{NFSU2_TR(0x62f8e6);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8e9:{NFSU2_TR(0x62f8e9);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8ed:{NFSU2_TR(0x62f8ed);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8f0:{NFSU2_TR(0x62f8f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f8f2:{NFSU2_TR(0x62f8f2);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8f6:{NFSU2_TR(0x62f8f6);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f8f9:{NFSU2_TR(0x62f8f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f8fb:{NFSU2_TR(0x62f8fb);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f8ff:{NFSU2_TR(0x62f8ff);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f902:{NFSU2_TR(0x62f902);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f904:{NFSU2_TR(0x62f904);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f90b:{NFSU2_TR(0x62f90b);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f90f:{NFSU2_TR(0x62f90f);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f912:{NFSU2_TR(0x62f912);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f919:{NFSU2_TR(0x62f919);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f91d:{NFSU2_TR(0x62f91d);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62f921:{NFSU2_TR(0x62f921);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f924:{NFSU2_TR(0x62f924);
u8 U[6];
w1(F+0,carry<u32>(r4(G+0),u32(0x80ull)));
w1(F+11,scarry<u32>(r4(G+0),u32(0x80ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B62f929:{NFSU2_TR(0x62f929);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f92a:{NFSU2_TR(0x62f92a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f92c:{NFSU2_TR(0x62f92c);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f930:{NFSU2_TR(0x62f930);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f931:{NFSU2_TR(0x62f931);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f934:{NFSU2_TR(0x62f934);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f936:{NFSU2_TR(0x62f936);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f93a:{NFSU2_TR(0x62f93a);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f93d:{NFSU2_TR(0x62f93d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f93f:{NFSU2_TR(0x62f93f);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f946:{NFSU2_TR(0x62f946);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f94a:{NFSU2_TR(0x62f94a);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f94d:{NFSU2_TR(0x62f94d);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f951:{NFSU2_TR(0x62f951);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f954:{NFSU2_TR(0x62f954);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f956:{NFSU2_TR(0x62f956);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f95a:{NFSU2_TR(0x62f95a);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f95d:{NFSU2_TR(0x62f95d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f95f:{NFSU2_TR(0x62f95f);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62f963:{NFSU2_TR(0x62f963);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62f966:{NFSU2_TR(0x62f966);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62f968:{NFSU2_TR(0x62f968);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62f96f:{NFSU2_TR(0x62f96f);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62f974ull));
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
PN u32 blk_62f974(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f974:L62f974:{bud-=4;NFSU2_TR(0x62f974);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f978:{NFSU2_TR(0x62f978);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B62f97b:{NFSU2_TR(0x62f97b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62f97d:{NFSU2_TR(0x62f97d);
if(r1(F+6)){{[[clang::musttail]] return blk_62f9e4(ARGS);}}
}
B62f97f:L62f97f:{bud-=2;NFSU2_TR(0x62f97f);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(F+6,u8((r4(U+4))==(u32(0x0ull))));
}
B62f986:{NFSU2_TR(0x62f986);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_62f9e4(ARGS);}}
}
B62f988:L62f988:{bud-=3;NFSU2_TR(0x62f988);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f98f:{NFSU2_TR(0x62f98f);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62f991:{NFSU2_TR(0x62f991);
if(r1(F+6)){{[[clang::musttail]] return blk_62fa7e(ARGS);}}
}
B62f997:L62f997:{bud-=7;NFSU2_TR(0x62f997);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62f99b:{NFSU2_TR(0x62f99b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f99d:{NFSU2_TR(0x62f99d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f99f:{NFSU2_TR(0x62f99f);
u8 U[6];
w1(F+0,carry<u32>(r4(R+8),u32(0x1788ull)));
w1(F+11,scarry<u32>(r4(R+8),u32(0x1788ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1788ull))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B62f9a5:{NFSU2_TR(0x62f9a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f9a6:{NFSU2_TR(0x62f9a6);
__builtin_memmove((G+4),(G+0),4);
}
B62f9a8:{NFSU2_TR(0x62f9a8);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62f9adull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x488e20u);}[[clang::musttail]] return blk_488e20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62f9ad(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f9ad:L62f9ad:{bud-=14;NFSU2_TR(0x62f9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62f9b0:{NFSU2_TR(0x62f9b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f9b7:{NFSU2_TR(0x62f9b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62f9be:{NFSU2_TR(0x62f9be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f9c0:{NFSU2_TR(0x62f9c0);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62f9c2:{NFSU2_TR(0x62f9c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62f9c9:{NFSU2_TR(0x62f9c9);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f9ca:{NFSU2_TR(0x62f9ca);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f9d1:{NFSU2_TR(0x62f9d1);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x380ull))));
}
B62f9d7:{NFSU2_TR(0x62f9d7);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f9d8:{NFSU2_TR(0x62f9d8);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
}
B62f9dd:{NFSU2_TR(0x62f9dd);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f9de:{NFSU2_TR(0x62f9de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62f9df:{NFSU2_TR(0x62f9df);
{[[clang::musttail]] return blk_62fa77(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62f9e4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62f9e4:L62f9e4:{bud-=3;NFSU2_TR(0x62f9e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f9eb:{NFSU2_TR(0x62f9eb);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B62f9ed:{NFSU2_TR(0x62f9ed);
if(r1(F+6)){{[[clang::musttail]] return blk_62fa7e(ARGS);}}
}
B62f9f3:L62f9f3:{bud-=7;NFSU2_TR(0x62f9f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62f9f7:{NFSU2_TR(0x62f9f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62f9fe:{NFSU2_TR(0x62f9fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa00:{NFSU2_TR(0x62fa00);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa02:{NFSU2_TR(0x62fa02);
u8 U[6];
w1(F+0,carry<u32>(r4(G+0),u32(0x1788ull)));
w1(F+11,scarry<u32>(r4(G+0),u32(0x1788ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1788ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B62fa07:{NFSU2_TR(0x62fa07);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa08:{NFSU2_TR(0x62fa08);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62fa0dull));
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);if(__builtin_expect(bud<=0,0)){EXIT(0x488e20u);}[[clang::musttail]] return blk_488e20(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62fa0d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62fa0d:L62fa0d:{bud-=13;NFSU2_TR(0x62fa0d);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62fa14:{NFSU2_TR(0x62fa14);
u8 U[4];
w4(U+0,u32(u32(u32(0xb20ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B62fa1b:{NFSU2_TR(0x62fa1b);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa1c:{NFSU2_TR(0x62fa1c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62fa23:{NFSU2_TR(0x62fa23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa24:{NFSU2_TR(0x62fa24);
u8 U[4];
w4(U+0,u32(u32(u32(0x798ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62fa2b:{NFSU2_TR(0x62fa2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa2c:{NFSU2_TR(0x62fa2c);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa31:{NFSU2_TR(0x62fa31);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x80ull))));
}
B62fa37:{NFSU2_TR(0x62fa37);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x380ull))));
}
B62fa3c:{NFSU2_TR(0x62fa3c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa3d:{NFSU2_TR(0x62fa3d);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa3e:{NFSU2_TR(0x62fa3e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62fa43ull));
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
PN u32 blk_62fa43(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62fa43:L62fa43:{bud-=14;NFSU2_TR(0x62fa43);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62fa4a:{NFSU2_TR(0x62fa4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62fa4d:{NFSU2_TR(0x62fa4d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B62fa54:{NFSU2_TR(0x62fa54);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x18ull))));
}
B62fa57:{NFSU2_TR(0x62fa57);
w4(G+0,u32(u32(r4(G+0))|u32(r4(R+8))));
}
B62fa59:{NFSU2_TR(0x62fa59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa5b:{NFSU2_TR(0x62fa5b);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa5c:{NFSU2_TR(0x62fa5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62fa63:{NFSU2_TR(0x62fa63);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x380ull))));
}
B62fa68:{NFSU2_TR(0x62fa68);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa69:{NFSU2_TR(0x62fa69);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62fa70:{NFSU2_TR(0x62fa70);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x80ull))));
}
B62fa75:{NFSU2_TR(0x62fa75);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fa76:{NFSU2_TR(0x62fa76);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
{[[clang::musttail]] return blk_62fa77(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_62fa77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62fa77:L62fa77:{bud-=2;NFSU2_TR(0x62fa77);
__builtin_memmove((G+4),(R+28),4);
}
B62fa79:{NFSU2_TR(0x62fa79);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62fa7eull));
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
PN u32 blk_62fa7e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62fa7e:L62fa7e:{bud-=3;NFSU2_TR(0x62fa7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62fa85:{NFSU2_TR(0x62fa85);
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
B62fa87:{NFSU2_TR(0x62fa87);
if(r1(F+6)){{[[clang::musttail]] return blk_6304c4(ARGS);}}
}
B62fa8d:L62fa8d:{bud-=145;NFSU2_TR(0x62fa8d);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fa93:{NFSU2_TR(0x62fa93);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fa99:{NFSU2_TR(0x62fa99);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fa9f:{NFSU2_TR(0x62fa9f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62faa5:{NFSU2_TR(0x62faa5);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62faab:{NFSU2_TR(0x62faab);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fab1:{NFSU2_TR(0x62fab1);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fab8:{NFSU2_TR(0x62fab8);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fabe:{NFSU2_TR(0x62fabe);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B62fac0:{NFSU2_TR(0x62fac0);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B62fac2:{NFSU2_TR(0x62fac2);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B62fac4:{NFSU2_TR(0x62fac4);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fac8:{NFSU2_TR(0x62fac8);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62face:{NFSU2_TR(0x62face);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fad4:{NFSU2_TR(0x62fad4);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fada:{NFSU2_TR(0x62fada);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fae0:{NFSU2_TR(0x62fae0);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fae7:{NFSU2_TR(0x62fae7);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62faed:{NFSU2_TR(0x62faed);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62faf3:{NFSU2_TR(0x62faf3);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fafa:{NFSU2_TR(0x62fafa);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fb01:{NFSU2_TR(0x62fb01);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fb07:{NFSU2_TR(0x62fb07);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fb0e:{NFSU2_TR(0x62fb0e);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fb15:{NFSU2_TR(0x62fb15);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B62fb17:{NFSU2_TR(0x62fb17);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fb1b:{NFSU2_TR(0x62fb1b);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fb21:{NFSU2_TR(0x62fb21);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fb27:{NFSU2_TR(0x62fb27);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fb2d:{NFSU2_TR(0x62fb2d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fb33:{NFSU2_TR(0x62fb33);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fb37:{NFSU2_TR(0x62fb37);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fb3d:{NFSU2_TR(0x62fb3d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fb43:{NFSU2_TR(0x62fb43);
{u32 ea_=u32(r4(G+16)+u32(332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fb4a:{NFSU2_TR(0x62fb4a);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fb51:{NFSU2_TR(0x62fb51);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fb57:{NFSU2_TR(0x62fb57);
{u32 ea_=u32(r4(G+16)+u32(332u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fb5e:{NFSU2_TR(0x62fb5e);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fb62:{NFSU2_TR(0x62fb62);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B62fb64:{NFSU2_TR(0x62fb64);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fb68:{NFSU2_TR(0x62fb68);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fb6e:{NFSU2_TR(0x62fb6e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fb74:{NFSU2_TR(0x62fb74);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fb7b:{NFSU2_TR(0x62fb7b);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fb81:{NFSU2_TR(0x62fb81);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fb87:{NFSU2_TR(0x62fb87);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fb8e:{NFSU2_TR(0x62fb8e);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fb94:{NFSU2_TR(0x62fb94);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fb9a:{NFSU2_TR(0x62fb9a);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fba1:{NFSU2_TR(0x62fba1);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fba8:{NFSU2_TR(0x62fba8);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fbae:{NFSU2_TR(0x62fbae);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fbb5:{NFSU2_TR(0x62fbb5);
{u32 ea_=u32(r4(G+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fbbc:{NFSU2_TR(0x62fbbc);
{u32 ea_=u32(r4(G+16)+u32(384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fbc3:{NFSU2_TR(0x62fbc3);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fbc7:{NFSU2_TR(0x62fbc7);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fbcd:{NFSU2_TR(0x62fbcd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fbd3:{NFSU2_TR(0x62fbd3);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fbda:{NFSU2_TR(0x62fbda);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fbe1:{NFSU2_TR(0x62fbe1);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fbe7:{NFSU2_TR(0x62fbe7);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B62fbe9:{NFSU2_TR(0x62fbe9);
__asm__ volatile(".byte 0xd8,0xc5":::"memory");
}
B62fbeb:{NFSU2_TR(0x62fbeb);
{u32 ea_=u32(r4(G+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fbf2:{NFSU2_TR(0x62fbf2);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fbf9:{NFSU2_TR(0x62fbf9);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fbff:{NFSU2_TR(0x62fbff);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fc05:{NFSU2_TR(0x62fc05);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fc09:{NFSU2_TR(0x62fc09);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fc10:{NFSU2_TR(0x62fc10);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fc16:{NFSU2_TR(0x62fc16);
{u32 ea_=u32(r4(G+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fc1d:{NFSU2_TR(0x62fc1d);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B62fc1f:{NFSU2_TR(0x62fc1f);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fc23:{NFSU2_TR(0x62fc23);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fc2a:{NFSU2_TR(0x62fc2a);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fc30:{NFSU2_TR(0x62fc30);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fc36:{NFSU2_TR(0x62fc36);
{u32 ea_=u32(r4(G+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fc3d:{NFSU2_TR(0x62fc3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62fc41:{NFSU2_TR(0x62fc41);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fc48:{NFSU2_TR(0x62fc48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fc49:{NFSU2_TR(0x62fc49);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fc4f:{NFSU2_TR(0x62fc4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62fc53:{NFSU2_TR(0x62fc53);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62fc54:{NFSU2_TR(0x62fc54);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fc58:{NFSU2_TR(0x62fc58);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B62fc5a:{NFSU2_TR(0x62fc5a);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fc61:{NFSU2_TR(0x62fc61);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fc68:{NFSU2_TR(0x62fc68);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fc6e:{NFSU2_TR(0x62fc6e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fc74:{NFSU2_TR(0x62fc74);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fc78:{NFSU2_TR(0x62fc78);
{u32 ea_=u32(r4(G+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fc7f:{NFSU2_TR(0x62fc7f);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fc85:{NFSU2_TR(0x62fc85);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fc8c:{NFSU2_TR(0x62fc8c);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fc93:{NFSU2_TR(0x62fc93);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fc97:{NFSU2_TR(0x62fc97);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fc9e:{NFSU2_TR(0x62fc9e);
{u32 ea_=u32(r4(G+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fca5:{NFSU2_TR(0x62fca5);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fcab:{NFSU2_TR(0x62fcab);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B62fcad:{NFSU2_TR(0x62fcad);
__asm__ volatile(".byte 0xd8,0xc5":::"memory");
}
B62fcaf:{NFSU2_TR(0x62fcaf);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fcb6:{NFSU2_TR(0x62fcb6);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fcbd:{NFSU2_TR(0x62fcbd);
{u32 ea_=u32(r4(G+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fcc4:{NFSU2_TR(0x62fcc4);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fcca:{NFSU2_TR(0x62fcca);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fcd1:{NFSU2_TR(0x62fcd1);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B62fcd3:{NFSU2_TR(0x62fcd3);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fcd7:{NFSU2_TR(0x62fcd7);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fcde:{NFSU2_TR(0x62fcde);
{u32 ea_=u32(r4(G+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fce5:{NFSU2_TR(0x62fce5);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fceb:{NFSU2_TR(0x62fceb);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fcf2:{NFSU2_TR(0x62fcf2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B62fcf4:{NFSU2_TR(0x62fcf4);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fcfb:{NFSU2_TR(0x62fcfb);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fd02:{NFSU2_TR(0x62fd02);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B62fd04:{NFSU2_TR(0x62fd04);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B62fd06:{NFSU2_TR(0x62fd06);
{u32 ea_=u32(r4(G+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fd0d:{NFSU2_TR(0x62fd0d);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fd13:{NFSU2_TR(0x62fd13);
{u32 ea_=u32(r4(G+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd1a:{NFSU2_TR(0x62fd1a);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd1e:{NFSU2_TR(0x62fd1e);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd25:{NFSU2_TR(0x62fd25);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fd2c:{NFSU2_TR(0x62fd2c);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fd32:{NFSU2_TR(0x62fd32);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B62fd34:{NFSU2_TR(0x62fd34);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B62fd36:{NFSU2_TR(0x62fd36);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd3d:{NFSU2_TR(0x62fd3d);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fd44:{NFSU2_TR(0x62fd44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B62fd46:{NFSU2_TR(0x62fd46);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B62fd48:{NFSU2_TR(0x62fd48);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B62fd4a:{NFSU2_TR(0x62fd4a);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fd50:{NFSU2_TR(0x62fd50);
{u32 ea_=u32(r4(G+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd57:{NFSU2_TR(0x62fd57);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd5e:{NFSU2_TR(0x62fd5e);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd62:{NFSU2_TR(0x62fd62);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fd69:{NFSU2_TR(0x62fd69);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fd6f:{NFSU2_TR(0x62fd6f);
{u32 ea_=u32(r4(G+16)+u32(340u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd76:{NFSU2_TR(0x62fd76);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd7a:{NFSU2_TR(0x62fd7a);
{u32 ea_=u32(r4(G+16)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd81:{NFSU2_TR(0x62fd81);
{u32 ea_=u32(r4(G+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fd88:{NFSU2_TR(0x62fd88);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fd8e:{NFSU2_TR(0x62fd8e);
{u32 ea_=u32(r4(G+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd95:{NFSU2_TR(0x62fd95);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fd99:{NFSU2_TR(0x62fd99);
{u32 ea_=u32(r4(G+16)+u32(392u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62fda0:{NFSU2_TR(0x62fda0);
{u32 ea_=u32(r4(G+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fda7:{NFSU2_TR(0x62fda7);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62fdacull));
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
PN u32 blk_62fdac(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62fdac:L62fdac:{bud-=127;NFSU2_TR(0x62fdac);
{u32 ea_=u32(r4(G+16)+u32(1480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fdb3:{NFSU2_TR(0x62fdb3);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fdb7:{NFSU2_TR(0x62fdb7);
{u32 ea_=u32(r4(G+16)+u32(1448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fdbe:{NFSU2_TR(0x62fdbe);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fdc2:{NFSU2_TR(0x62fdc2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fdc4:{NFSU2_TR(0x62fdc4);
{u32 ea_=u32(r4(G+16)+u32(1464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fdcb:{NFSU2_TR(0x62fdcb);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fdcf:{NFSU2_TR(0x62fdcf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fdd1:{NFSU2_TR(0x62fdd1);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fdd5:{NFSU2_TR(0x62fdd5);
{u32 ea_=u32(r4(G+16)+u32(1432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fddc:{NFSU2_TR(0x62fddc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fdde:{NFSU2_TR(0x62fdde);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fde2:{NFSU2_TR(0x62fde2);
{u32 ea_=u32(r4(G+16)+u32(1484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fde9:{NFSU2_TR(0x62fde9);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fded:{NFSU2_TR(0x62fded);
{u32 ea_=u32(r4(G+16)+u32(1468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fdf4:{NFSU2_TR(0x62fdf4);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fdf8:{NFSU2_TR(0x62fdf8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fdfa:{NFSU2_TR(0x62fdfa);
{u32 ea_=u32(r4(G+16)+u32(1452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe01:{NFSU2_TR(0x62fe01);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe05:{NFSU2_TR(0x62fe05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fe07:{NFSU2_TR(0x62fe07);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe0b:{NFSU2_TR(0x62fe0b);
{u32 ea_=u32(r4(G+16)+u32(1436u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe12:{NFSU2_TR(0x62fe12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fe14:{NFSU2_TR(0x62fe14);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fe18:{NFSU2_TR(0x62fe18);
{u32 ea_=u32(r4(G+16)+u32(1488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe1f:{NFSU2_TR(0x62fe1f);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe23:{NFSU2_TR(0x62fe23);
{u32 ea_=u32(r4(G+16)+u32(1472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe2a:{NFSU2_TR(0x62fe2a);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe2e:{NFSU2_TR(0x62fe2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fe30:{NFSU2_TR(0x62fe30);
{u32 ea_=u32(r4(G+16)+u32(1456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe37:{NFSU2_TR(0x62fe37);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe3b:{NFSU2_TR(0x62fe3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fe3d:{NFSU2_TR(0x62fe3d);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe41:{NFSU2_TR(0x62fe41);
{u32 ea_=u32(r4(G+16)+u32(1440u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe48:{NFSU2_TR(0x62fe48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fe4a:{NFSU2_TR(0x62fe4a);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fe51:{NFSU2_TR(0x62fe51);
{u32 ea_=u32(r4(G+16)+u32(1492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe58:{NFSU2_TR(0x62fe58);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe5c:{NFSU2_TR(0x62fe5c);
{u32 ea_=u32(r4(G+16)+u32(1476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe63:{NFSU2_TR(0x62fe63);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe67:{NFSU2_TR(0x62fe67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fe69:{NFSU2_TR(0x62fe69);
{u32 ea_=u32(r4(G+16)+u32(1460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe70:{NFSU2_TR(0x62fe70);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe74:{NFSU2_TR(0x62fe74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fe76:{NFSU2_TR(0x62fe76);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe7a:{NFSU2_TR(0x62fe7a);
{u32 ea_=u32(r4(G+16)+u32(1444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe81:{NFSU2_TR(0x62fe81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fe83:{NFSU2_TR(0x62fe83);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fe8a:{NFSU2_TR(0x62fe8a);
{u32 ea_=u32(r4(G+16)+u32(1480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe91:{NFSU2_TR(0x62fe91);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fe95:{NFSU2_TR(0x62fe95);
{u32 ea_=u32(r4(G+16)+u32(1448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fe9c:{NFSU2_TR(0x62fe9c);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fea0:{NFSU2_TR(0x62fea0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fea2:{NFSU2_TR(0x62fea2);
{u32 ea_=u32(r4(G+16)+u32(1464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fea9:{NFSU2_TR(0x62fea9);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fead:{NFSU2_TR(0x62fead);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62feaf:{NFSU2_TR(0x62feaf);
{u32 ea_=u32(r4(G+16)+u32(1432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62feb6:{NFSU2_TR(0x62feb6);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62feba:{NFSU2_TR(0x62feba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62febc:{NFSU2_TR(0x62febc);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fec3:{NFSU2_TR(0x62fec3);
{u32 ea_=u32(r4(G+16)+u32(1484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62feca:{NFSU2_TR(0x62feca);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fece:{NFSU2_TR(0x62fece);
{u32 ea_=u32(r4(G+16)+u32(1468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fed5:{NFSU2_TR(0x62fed5);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fed9:{NFSU2_TR(0x62fed9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fedb:{NFSU2_TR(0x62fedb);
{u32 ea_=u32(r4(G+16)+u32(1452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fee2:{NFSU2_TR(0x62fee2);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fee6:{NFSU2_TR(0x62fee6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fee8:{NFSU2_TR(0x62fee8);
{u32 ea_=u32(r4(G+16)+u32(1436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62feef:{NFSU2_TR(0x62feef);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fef3:{NFSU2_TR(0x62fef3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fef5:{NFSU2_TR(0x62fef5);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62fefc:{NFSU2_TR(0x62fefc);
{u32 ea_=u32(r4(G+16)+u32(1488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff03:{NFSU2_TR(0x62ff03);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff07:{NFSU2_TR(0x62ff07);
{u32 ea_=u32(r4(G+16)+u32(1472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff0e:{NFSU2_TR(0x62ff0e);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff12:{NFSU2_TR(0x62ff12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ff14:{NFSU2_TR(0x62ff14);
{u32 ea_=u32(r4(G+16)+u32(1456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff1b:{NFSU2_TR(0x62ff1b);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff1f:{NFSU2_TR(0x62ff1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ff21:{NFSU2_TR(0x62ff21);
{u32 ea_=u32(r4(G+16)+u32(1440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff28:{NFSU2_TR(0x62ff28);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff2c:{NFSU2_TR(0x62ff2c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ff2e:{NFSU2_TR(0x62ff2e);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ff35:{NFSU2_TR(0x62ff35);
{u32 ea_=u32(r4(G+16)+u32(1492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff3c:{NFSU2_TR(0x62ff3c);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff40:{NFSU2_TR(0x62ff40);
{u32 ea_=u32(r4(G+16)+u32(1476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff47:{NFSU2_TR(0x62ff47);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff4b:{NFSU2_TR(0x62ff4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ff4d:{NFSU2_TR(0x62ff4d);
{u32 ea_=u32(r4(G+16)+u32(1460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff54:{NFSU2_TR(0x62ff54);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff58:{NFSU2_TR(0x62ff58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ff5a:{NFSU2_TR(0x62ff5a);
{u32 ea_=u32(r4(G+16)+u32(1444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff61:{NFSU2_TR(0x62ff61);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff65:{NFSU2_TR(0x62ff65);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ff67:{NFSU2_TR(0x62ff67);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ff6e:{NFSU2_TR(0x62ff6e);
{u32 ea_=u32(r4(G+16)+u32(1480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff75:{NFSU2_TR(0x62ff75);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff79:{NFSU2_TR(0x62ff79);
{u32 ea_=u32(r4(G+16)+u32(1448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff80:{NFSU2_TR(0x62ff80);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff84:{NFSU2_TR(0x62ff84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ff86:{NFSU2_TR(0x62ff86);
{u32 ea_=u32(r4(G+16)+u32(1464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff8d:{NFSU2_TR(0x62ff8d);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff91:{NFSU2_TR(0x62ff91);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ff93:{NFSU2_TR(0x62ff93);
{u32 ea_=u32(r4(G+16)+u32(1432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ff9a:{NFSU2_TR(0x62ff9a);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ff9e:{NFSU2_TR(0x62ff9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ffa0:{NFSU2_TR(0x62ffa0);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ffa7:{NFSU2_TR(0x62ffa7);
{u32 ea_=u32(r4(G+16)+u32(1484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ffae:{NFSU2_TR(0x62ffae);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ffb2:{NFSU2_TR(0x62ffb2);
{u32 ea_=u32(r4(G+16)+u32(1468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ffb9:{NFSU2_TR(0x62ffb9);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ffbd:{NFSU2_TR(0x62ffbd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ffbf:{NFSU2_TR(0x62ffbf);
{u32 ea_=u32(r4(G+16)+u32(1452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ffc6:{NFSU2_TR(0x62ffc6);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ffca:{NFSU2_TR(0x62ffca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ffcc:{NFSU2_TR(0x62ffcc);
{u32 ea_=u32(r4(G+16)+u32(1436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ffd3:{NFSU2_TR(0x62ffd3);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ffd7:{NFSU2_TR(0x62ffd7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62ffd9:{NFSU2_TR(0x62ffd9);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62ffe0:{NFSU2_TR(0x62ffe0);
{u32 ea_=u32(r4(G+16)+u32(1488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ffe7:{NFSU2_TR(0x62ffe7);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62ffeb:{NFSU2_TR(0x62ffeb);
{u32 ea_=u32(r4(G+16)+u32(1472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62fff2:{NFSU2_TR(0x62fff2);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62fff6:{NFSU2_TR(0x62fff6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62fff8:{NFSU2_TR(0x62fff8);
{u32 ea_=u32(r4(G+16)+u32(1456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62ffff:{NFSU2_TR(0x62ffff);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
{EXIT(0x630003u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_62f(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x62f1bb:[[clang::musttail]] return blk_62f1bb(c,a4,a0,a1,bud);
case 0x62f1f4:[[clang::musttail]] return blk_62f1f4(c,a4,a0,a1,bud);
case 0x62f226:[[clang::musttail]] return blk_62f226(c,a4,a0,a1,bud);
case 0x62f249:[[clang::musttail]] return blk_62f249(c,a4,a0,a1,bud);
case 0x62f27c:[[clang::musttail]] return blk_62f27c(c,a4,a0,a1,bud);
case 0x62f2ae:[[clang::musttail]] return blk_62f2ae(c,a4,a0,a1,bud);
case 0x62f2b5:[[clang::musttail]] return blk_62f2b5(c,a4,a0,a1,bud);
case 0x62f6d7:[[clang::musttail]] return blk_62f6d7(c,a4,a0,a1,bud);
case 0x62f974:[[clang::musttail]] return blk_62f974(c,a4,a0,a1,bud);
case 0x62f9ad:[[clang::musttail]] return blk_62f9ad(c,a4,a0,a1,bud);
case 0x62f9e4:[[clang::musttail]] return blk_62f9e4(c,a4,a0,a1,bud);
case 0x62fa0d:[[clang::musttail]] return blk_62fa0d(c,a4,a0,a1,bud);
case 0x62fa43:[[clang::musttail]] return blk_62fa43(c,a4,a0,a1,bud);
case 0x62fa77:[[clang::musttail]] return blk_62fa77(c,a4,a0,a1,bud);
case 0x62fa7e:[[clang::musttail]] return blk_62fa7e(c,a4,a0,a1,bud);
case 0x62fdac:[[clang::musttail]] return blk_62fdac(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_62f(Cpu& c){u8* R=c.regs.data();return ent_62f(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
