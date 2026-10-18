#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_4012b0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_401e80(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_48d860(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5c5930(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_624da8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6253c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6259fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625a2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625a52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625a76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625ab0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625d35(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625f9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625ffb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626005(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_626324(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62700e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_62514c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6253a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625401(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625763(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_6259fb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625a88(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625fa3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625fbf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_625000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625000:L625000:{bud-=76;NFSU2_TR(0x625000);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625007:{NFSU2_TR(0x625007);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62500a:{NFSU2_TR(0x62500a);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625011:{NFSU2_TR(0x625011);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625014:{NFSU2_TR(0x625014);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625016:{NFSU2_TR(0x625016);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62501d:{NFSU2_TR(0x62501d);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625020:{NFSU2_TR(0x625020);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625022:{NFSU2_TR(0x625022);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625029:{NFSU2_TR(0x625029);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62502c:{NFSU2_TR(0x62502c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62502e:{NFSU2_TR(0x62502e);
{u32 ea_=u32(r4(G+16)+u32(1912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625035:{NFSU2_TR(0x625035);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62503c:{NFSU2_TR(0x62503c);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62503f:{NFSU2_TR(0x62503f);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625046:{NFSU2_TR(0x625046);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625049:{NFSU2_TR(0x625049);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62504b:{NFSU2_TR(0x62504b);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625052:{NFSU2_TR(0x625052);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625055:{NFSU2_TR(0x625055);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625057:{NFSU2_TR(0x625057);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62505e:{NFSU2_TR(0x62505e);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625061:{NFSU2_TR(0x625061);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625063:{NFSU2_TR(0x625063);
{u32 ea_=u32(r4(G+16)+u32(1916u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62506a:{NFSU2_TR(0x62506a);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625071:{NFSU2_TR(0x625071);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625074:{NFSU2_TR(0x625074);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62507b:{NFSU2_TR(0x62507b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62507e:{NFSU2_TR(0x62507e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625080:{NFSU2_TR(0x625080);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625087:{NFSU2_TR(0x625087);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62508a:{NFSU2_TR(0x62508a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62508c:{NFSU2_TR(0x62508c);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625093:{NFSU2_TR(0x625093);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625096:{NFSU2_TR(0x625096);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625098:{NFSU2_TR(0x625098);
{u32 ea_=u32(r4(G+16)+u32(1920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62509f:{NFSU2_TR(0x62509f);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6250a6:{NFSU2_TR(0x6250a6);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6250a9:{NFSU2_TR(0x6250a9);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6250b0:{NFSU2_TR(0x6250b0);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6250b3:{NFSU2_TR(0x6250b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6250b5:{NFSU2_TR(0x6250b5);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6250bc:{NFSU2_TR(0x6250bc);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6250bf:{NFSU2_TR(0x6250bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6250c1:{NFSU2_TR(0x6250c1);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6250c8:{NFSU2_TR(0x6250c8);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6250cb:{NFSU2_TR(0x6250cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6250cd:{NFSU2_TR(0x6250cd);
{u32 ea_=u32(r4(G+16)+u32(1924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6250d4:{NFSU2_TR(0x6250d4);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6250db:{NFSU2_TR(0x6250db);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6250de:{NFSU2_TR(0x6250de);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6250e5:{NFSU2_TR(0x6250e5);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6250e8:{NFSU2_TR(0x6250e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6250ea:{NFSU2_TR(0x6250ea);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6250f1:{NFSU2_TR(0x6250f1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6250f4:{NFSU2_TR(0x6250f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6250f6:{NFSU2_TR(0x6250f6);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6250fd:{NFSU2_TR(0x6250fd);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625100:{NFSU2_TR(0x625100);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625102:{NFSU2_TR(0x625102);
{u32 ea_=u32(r4(G+16)+u32(1928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625109:{NFSU2_TR(0x625109);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625110:{NFSU2_TR(0x625110);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625113:{NFSU2_TR(0x625113);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62511a:{NFSU2_TR(0x62511a);
u8 U[4];
w4(U+0,u32(u32(u32(0x750ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B625121:{NFSU2_TR(0x625121);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625124:{NFSU2_TR(0x625124);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625125:{NFSU2_TR(0x625125);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625126:{NFSU2_TR(0x625126);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625128:{NFSU2_TR(0x625128);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62512f:{NFSU2_TR(0x62512f);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625132:{NFSU2_TR(0x625132);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625134:{NFSU2_TR(0x625134);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62513b:{NFSU2_TR(0x62513b);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62513e:{NFSU2_TR(0x62513e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625140:{NFSU2_TR(0x625140);
{u32 ea_=u32(r4(G+16)+u32(1940u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625147:{NFSU2_TR(0x625147);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x62514cull));
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
PN u32 blk_62514c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B62514c:L62514c:{bud-=196;NFSU2_TR(0x62514c);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62514f:{NFSU2_TR(0x62514f);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625152:{NFSU2_TR(0x625152);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625155:{NFSU2_TR(0x625155);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625158:{NFSU2_TR(0x625158);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62515a:{NFSU2_TR(0x62515a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62515c:{NFSU2_TR(0x62515c);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62515e:{NFSU2_TR(0x62515e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625160:{NFSU2_TR(0x625160);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625163:{NFSU2_TR(0x625163);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625166:{NFSU2_TR(0x625166);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625168:{NFSU2_TR(0x625168);
{u32 ea_=u32(r4(G+16)+u32(2024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62516f:{NFSU2_TR(0x62516f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625171:{NFSU2_TR(0x625171);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625174:{NFSU2_TR(0x625174);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625177:{NFSU2_TR(0x625177);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62517a:{NFSU2_TR(0x62517a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62517c:{NFSU2_TR(0x62517c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62517f:{NFSU2_TR(0x62517f);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625182:{NFSU2_TR(0x625182);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625184:{NFSU2_TR(0x625184);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625187:{NFSU2_TR(0x625187);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62518a:{NFSU2_TR(0x62518a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62518c:{NFSU2_TR(0x62518c);
{u32 ea_=u32(r4(G+16)+u32(2028u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625193:{NFSU2_TR(0x625193);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625195:{NFSU2_TR(0x625195);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625198:{NFSU2_TR(0x625198);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62519b:{NFSU2_TR(0x62519b);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62519e:{NFSU2_TR(0x62519e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251a0:{NFSU2_TR(0x6251a0);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251a3:{NFSU2_TR(0x6251a3);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251a6:{NFSU2_TR(0x6251a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251a8:{NFSU2_TR(0x6251a8);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251ab:{NFSU2_TR(0x6251ab);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251ae:{NFSU2_TR(0x6251ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251b0:{NFSU2_TR(0x6251b0);
{u32 ea_=u32(r4(G+16)+u32(2032u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6251b7:{NFSU2_TR(0x6251b7);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251ba:{NFSU2_TR(0x6251ba);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251bd:{NFSU2_TR(0x6251bd);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251bf:{NFSU2_TR(0x6251bf);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251c2:{NFSU2_TR(0x6251c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251c4:{NFSU2_TR(0x6251c4);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251c7:{NFSU2_TR(0x6251c7);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251ca:{NFSU2_TR(0x6251ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251cc:{NFSU2_TR(0x6251cc);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251cf:{NFSU2_TR(0x6251cf);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251d2:{NFSU2_TR(0x6251d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251d4:{NFSU2_TR(0x6251d4);
{u32 ea_=u32(r4(G+16)+u32(2036u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6251db:{NFSU2_TR(0x6251db);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251de:{NFSU2_TR(0x6251de);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251e1:{NFSU2_TR(0x6251e1);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251e4:{NFSU2_TR(0x6251e4);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251e7:{NFSU2_TR(0x6251e7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251e9:{NFSU2_TR(0x6251e9);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251ec:{NFSU2_TR(0x6251ec);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251ef:{NFSU2_TR(0x6251ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251f1:{NFSU2_TR(0x6251f1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6251f3:{NFSU2_TR(0x6251f3);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6251f6:{NFSU2_TR(0x6251f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6251f8:{NFSU2_TR(0x6251f8);
{u32 ea_=u32(r4(G+16)+u32(2040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6251ff:{NFSU2_TR(0x6251ff);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625202:{NFSU2_TR(0x625202);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625205:{NFSU2_TR(0x625205);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625208:{NFSU2_TR(0x625208);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62520b:{NFSU2_TR(0x62520b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62520d:{NFSU2_TR(0x62520d);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625210:{NFSU2_TR(0x625210);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625213:{NFSU2_TR(0x625213);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625215:{NFSU2_TR(0x625215);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625218:{NFSU2_TR(0x625218);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62521b:{NFSU2_TR(0x62521b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62521d:{NFSU2_TR(0x62521d);
{u32 ea_=u32(r4(G+16)+u32(2044u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625224:{NFSU2_TR(0x625224);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625227:{NFSU2_TR(0x625227);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62522a:{NFSU2_TR(0x62522a);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62522d:{NFSU2_TR(0x62522d);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625230:{NFSU2_TR(0x625230);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625232:{NFSU2_TR(0x625232);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625235:{NFSU2_TR(0x625235);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625238:{NFSU2_TR(0x625238);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62523a:{NFSU2_TR(0x62523a);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62523d:{NFSU2_TR(0x62523d);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625240:{NFSU2_TR(0x625240);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625242:{NFSU2_TR(0x625242);
{u32 ea_=u32(r4(G+16)+u32(2048u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625249:{NFSU2_TR(0x625249);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62524c:{NFSU2_TR(0x62524c);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62524f:{NFSU2_TR(0x62524f);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625252:{NFSU2_TR(0x625252);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625255:{NFSU2_TR(0x625255);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625257:{NFSU2_TR(0x625257);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62525a:{NFSU2_TR(0x62525a);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62525d:{NFSU2_TR(0x62525d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62525f:{NFSU2_TR(0x62525f);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625262:{NFSU2_TR(0x625262);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625265:{NFSU2_TR(0x625265);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625267:{NFSU2_TR(0x625267);
{u32 ea_=u32(r4(G+16)+u32(2052u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62526e:{NFSU2_TR(0x62526e);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625271:{NFSU2_TR(0x625271);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625274:{NFSU2_TR(0x625274);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625277:{NFSU2_TR(0x625277);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62527a:{NFSU2_TR(0x62527a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62527c:{NFSU2_TR(0x62527c);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62527f:{NFSU2_TR(0x62527f);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625282:{NFSU2_TR(0x625282);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625284:{NFSU2_TR(0x625284);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625286:{NFSU2_TR(0x625286);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625289:{NFSU2_TR(0x625289);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62528b:{NFSU2_TR(0x62528b);
{u32 ea_=u32(r4(G+16)+u32(2056u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625292:{NFSU2_TR(0x625292);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625295:{NFSU2_TR(0x625295);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625298:{NFSU2_TR(0x625298);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62529b:{NFSU2_TR(0x62529b);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62529e:{NFSU2_TR(0x62529e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252a0:{NFSU2_TR(0x6252a0);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252a3:{NFSU2_TR(0x6252a3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252a6:{NFSU2_TR(0x6252a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252a8:{NFSU2_TR(0x6252a8);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252ab:{NFSU2_TR(0x6252ab);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252ae:{NFSU2_TR(0x6252ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252b0:{NFSU2_TR(0x6252b0);
{u32 ea_=u32(r4(G+16)+u32(2060u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6252b7:{NFSU2_TR(0x6252b7);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252ba:{NFSU2_TR(0x6252ba);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252bd:{NFSU2_TR(0x6252bd);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252c0:{NFSU2_TR(0x6252c0);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252c3:{NFSU2_TR(0x6252c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252c5:{NFSU2_TR(0x6252c5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252c8:{NFSU2_TR(0x6252c8);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252cb:{NFSU2_TR(0x6252cb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252cd:{NFSU2_TR(0x6252cd);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252d0:{NFSU2_TR(0x6252d0);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252d3:{NFSU2_TR(0x6252d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252d5:{NFSU2_TR(0x6252d5);
{u32 ea_=u32(r4(G+16)+u32(2064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6252dc:{NFSU2_TR(0x6252dc);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252df:{NFSU2_TR(0x6252df);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252e2:{NFSU2_TR(0x6252e2);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252e5:{NFSU2_TR(0x6252e5);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252e8:{NFSU2_TR(0x6252e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252ea:{NFSU2_TR(0x6252ea);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252ed:{NFSU2_TR(0x6252ed);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252f0:{NFSU2_TR(0x6252f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252f2:{NFSU2_TR(0x6252f2);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6252f5:{NFSU2_TR(0x6252f5);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6252f8:{NFSU2_TR(0x6252f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6252fa:{NFSU2_TR(0x6252fa);
{u32 ea_=u32(r4(G+16)+u32(2068u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625301:{NFSU2_TR(0x625301);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625304:{NFSU2_TR(0x625304);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625307:{NFSU2_TR(0x625307);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62530a:{NFSU2_TR(0x62530a);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62530d:{NFSU2_TR(0x62530d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62530f:{NFSU2_TR(0x62530f);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625312:{NFSU2_TR(0x625312);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625315:{NFSU2_TR(0x625315);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625317:{NFSU2_TR(0x625317);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625319:{NFSU2_TR(0x625319);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62531c:{NFSU2_TR(0x62531c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62531e:{NFSU2_TR(0x62531e);
{u32 ea_=u32(r4(G+16)+u32(2072u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625325:{NFSU2_TR(0x625325);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625328:{NFSU2_TR(0x625328);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62532b:{NFSU2_TR(0x62532b);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62532e:{NFSU2_TR(0x62532e);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625331:{NFSU2_TR(0x625331);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625333:{NFSU2_TR(0x625333);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625336:{NFSU2_TR(0x625336);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625339:{NFSU2_TR(0x625339);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62533b:{NFSU2_TR(0x62533b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62533e:{NFSU2_TR(0x62533e);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625341:{NFSU2_TR(0x625341);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625343:{NFSU2_TR(0x625343);
{u32 ea_=u32(r4(G+16)+u32(2076u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62534a:{NFSU2_TR(0x62534a);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62534d:{NFSU2_TR(0x62534d);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625350:{NFSU2_TR(0x625350);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625353:{NFSU2_TR(0x625353);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625356:{NFSU2_TR(0x625356);
u8 U[4];
w4(U+0,u32(u32(u32(0x7e8ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62535d:{NFSU2_TR(0x62535d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62535e:{NFSU2_TR(0x62535e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62535f:{NFSU2_TR(0x62535f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625361:{NFSU2_TR(0x625361);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625364:{NFSU2_TR(0x625364);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625367:{NFSU2_TR(0x625367);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625369:{NFSU2_TR(0x625369);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62536c:{NFSU2_TR(0x62536c);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62536f:{NFSU2_TR(0x62536f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625371:{NFSU2_TR(0x625371);
{u32 ea_=u32(r4(G+16)+u32(2088u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625378:{NFSU2_TR(0x625378);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62537b:{NFSU2_TR(0x62537b);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62537e:{NFSU2_TR(0x62537e);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625381:{NFSU2_TR(0x625381);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625384:{NFSU2_TR(0x625384);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625386:{NFSU2_TR(0x625386);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625389:{NFSU2_TR(0x625389);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62538c:{NFSU2_TR(0x62538c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62538e:{NFSU2_TR(0x62538e);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625391:{NFSU2_TR(0x625391);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625394:{NFSU2_TR(0x625394);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625396:{NFSU2_TR(0x625396);
{u32 ea_=u32(r4(G+16)+u32(2092u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62539d:{NFSU2_TR(0x62539d);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6253a2ull));
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
PN u32 blk_6253a2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6253a2:L6253a2:{bud-=6;NFSU2_TR(0x6253a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6253a6:{NFSU2_TR(0x6253a6);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
}
B6253a9:{NFSU2_TR(0x6253a9);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1bc8ull))));
}
B6253ae:{NFSU2_TR(0x6253ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6253b2:{NFSU2_TR(0x6253b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6253bd:{NFSU2_TR(0x6253bd);
__builtin_memmove((G+4),(G+4),4);
{[[clang::musttail]] return blk_6253c0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6253c0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6253c0:L6253c0:{bud-=5;NFSU2_TR(0x6253c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B6253c4:{NFSU2_TR(0x6253c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+4))),4);
__builtin_memmove((G+0),(U+0),4);
}
B6253c6:{NFSU2_TR(0x6253c6);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6253c8:{NFSU2_TR(0x6253c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6253cc:{NFSU2_TR(0x6253cc);
if(r1(F+6)){{[[clang::musttail]] return blk_625a2c(ARGS);}}
}
B6253d2:L6253d2:{bud-=3;NFSU2_TR(0x6253d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6253d9:{NFSU2_TR(0x6253d9);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B6253db:{NFSU2_TR(0x6253db);
if(r1(F+6)){{[[clang::musttail]] return blk_6259fe(ARGS);}}
}
B6253e1:L6253e1:{bud-=5;NFSU2_TR(0x6253e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6253e5:{NFSU2_TR(0x6253e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B6253e8:{NFSU2_TR(0x6253e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((G+0),(U+0),4);
}
B6253ea:{NFSU2_TR(0x6253ea);
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
B6253ed:{NFSU2_TR(0x6253ed);
u8 U[2];
w1(U+0,u8((r1(F+0))||(r1(F+6))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{[[clang::musttail]] return blk_6259fe(ARGS);}}
}
B6253f3:L6253f3:{bud-=2;NFSU2_TR(0x6253f3);
u8 U[5];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x630dbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(G+4,u32(r1(U+4)));
}
B6253fa:{NFSU2_TR(0x6253fa);
u8 U[12];
w4(U+0,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x630db4ull))+u32(r4(U+0))));
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
PN u32 blk_625401(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625401:L625401:{bud-=197;NFSU2_TR(0x625401);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625408:{NFSU2_TR(0x625408);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62540b:{NFSU2_TR(0x62540b);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625412:{NFSU2_TR(0x625412);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625415:{NFSU2_TR(0x625415);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625417:{NFSU2_TR(0x625417);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62541e:{NFSU2_TR(0x62541e);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625421:{NFSU2_TR(0x625421);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625423:{NFSU2_TR(0x625423);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62542a:{NFSU2_TR(0x62542a);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62542d:{NFSU2_TR(0x62542d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62542f:{NFSU2_TR(0x62542f);
{u32 ea_=u32(r4(G+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625436:{NFSU2_TR(0x625436);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62543d:{NFSU2_TR(0x62543d);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625440:{NFSU2_TR(0x625440);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625447:{NFSU2_TR(0x625447);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62544a:{NFSU2_TR(0x62544a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62544c:{NFSU2_TR(0x62544c);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625453:{NFSU2_TR(0x625453);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625456:{NFSU2_TR(0x625456);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625458:{NFSU2_TR(0x625458);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62545f:{NFSU2_TR(0x62545f);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625462:{NFSU2_TR(0x625462);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625464:{NFSU2_TR(0x625464);
{u32 ea_=u32(r4(G+16)+u32(788u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62546b:{NFSU2_TR(0x62546b);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625472:{NFSU2_TR(0x625472);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625475:{NFSU2_TR(0x625475);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62547c:{NFSU2_TR(0x62547c);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62547f:{NFSU2_TR(0x62547f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625481:{NFSU2_TR(0x625481);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625488:{NFSU2_TR(0x625488);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62548b:{NFSU2_TR(0x62548b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62548d:{NFSU2_TR(0x62548d);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625494:{NFSU2_TR(0x625494);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625497:{NFSU2_TR(0x625497);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625499:{NFSU2_TR(0x625499);
{u32 ea_=u32(r4(G+16)+u32(792u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6254a0:{NFSU2_TR(0x6254a0);
{u32 ea_=u32(r4(G+16)+u32(444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6254a7:{NFSU2_TR(0x6254a7);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6254aa:{NFSU2_TR(0x6254aa);
{u32 ea_=u32(r4(G+16)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6254b1:{NFSU2_TR(0x6254b1);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6254b4:{NFSU2_TR(0x6254b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6254b6:{NFSU2_TR(0x6254b6);
{u32 ea_=u32(r4(G+16)+u32(436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6254bd:{NFSU2_TR(0x6254bd);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6254c0:{NFSU2_TR(0x6254c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6254c2:{NFSU2_TR(0x6254c2);
{u32 ea_=u32(r4(G+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6254c9:{NFSU2_TR(0x6254c9);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6254cc:{NFSU2_TR(0x6254cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6254ce:{NFSU2_TR(0x6254ce);
{u32 ea_=u32(r4(G+16)+u32(796u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6254d5:{NFSU2_TR(0x6254d5);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6254dc:{NFSU2_TR(0x6254dc);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6254df:{NFSU2_TR(0x6254df);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6254e6:{NFSU2_TR(0x6254e6);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6254e9:{NFSU2_TR(0x6254e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6254eb:{NFSU2_TR(0x6254eb);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6254f2:{NFSU2_TR(0x6254f2);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6254f5:{NFSU2_TR(0x6254f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6254f7:{NFSU2_TR(0x6254f7);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6254fe:{NFSU2_TR(0x6254fe);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625501:{NFSU2_TR(0x625501);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625503:{NFSU2_TR(0x625503);
{u32 ea_=u32(r4(G+16)+u32(800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62550a:{NFSU2_TR(0x62550a);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625511:{NFSU2_TR(0x625511);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625514:{NFSU2_TR(0x625514);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62551b:{NFSU2_TR(0x62551b);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62551e:{NFSU2_TR(0x62551e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625520:{NFSU2_TR(0x625520);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625527:{NFSU2_TR(0x625527);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62552a:{NFSU2_TR(0x62552a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62552c:{NFSU2_TR(0x62552c);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625533:{NFSU2_TR(0x625533);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625536:{NFSU2_TR(0x625536);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625538:{NFSU2_TR(0x625538);
{u32 ea_=u32(r4(G+16)+u32(804u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62553f:{NFSU2_TR(0x62553f);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625546:{NFSU2_TR(0x625546);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625549:{NFSU2_TR(0x625549);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625550:{NFSU2_TR(0x625550);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625553:{NFSU2_TR(0x625553);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625555:{NFSU2_TR(0x625555);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62555c:{NFSU2_TR(0x62555c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62555f:{NFSU2_TR(0x62555f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625561:{NFSU2_TR(0x625561);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625568:{NFSU2_TR(0x625568);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62556b:{NFSU2_TR(0x62556b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62556d:{NFSU2_TR(0x62556d);
{u32 ea_=u32(r4(G+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625574:{NFSU2_TR(0x625574);
{u32 ea_=u32(r4(G+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62557b:{NFSU2_TR(0x62557b);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62557e:{NFSU2_TR(0x62557e);
{u32 ea_=u32(r4(G+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625585:{NFSU2_TR(0x625585);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625588:{NFSU2_TR(0x625588);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62558a:{NFSU2_TR(0x62558a);
{u32 ea_=u32(r4(G+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625591:{NFSU2_TR(0x625591);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625594:{NFSU2_TR(0x625594);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625596:{NFSU2_TR(0x625596);
{u32 ea_=u32(r4(G+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62559d:{NFSU2_TR(0x62559d);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6255a0:{NFSU2_TR(0x6255a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6255a2:{NFSU2_TR(0x6255a2);
{u32 ea_=u32(r4(G+16)+u32(812u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6255a9:{NFSU2_TR(0x6255a9);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6255b0:{NFSU2_TR(0x6255b0);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6255b3:{NFSU2_TR(0x6255b3);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6255ba:{NFSU2_TR(0x6255ba);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6255bd:{NFSU2_TR(0x6255bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6255bf:{NFSU2_TR(0x6255bf);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6255c6:{NFSU2_TR(0x6255c6);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6255c9:{NFSU2_TR(0x6255c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6255cb:{NFSU2_TR(0x6255cb);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6255d2:{NFSU2_TR(0x6255d2);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6255d5:{NFSU2_TR(0x6255d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6255d7:{NFSU2_TR(0x6255d7);
{u32 ea_=u32(r4(G+16)+u32(816u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6255de:{NFSU2_TR(0x6255de);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6255e5:{NFSU2_TR(0x6255e5);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6255e8:{NFSU2_TR(0x6255e8);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6255ef:{NFSU2_TR(0x6255ef);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6255f2:{NFSU2_TR(0x6255f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6255f4:{NFSU2_TR(0x6255f4);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6255fb:{NFSU2_TR(0x6255fb);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6255fe:{NFSU2_TR(0x6255fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625600:{NFSU2_TR(0x625600);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625607:{NFSU2_TR(0x625607);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62560a:{NFSU2_TR(0x62560a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62560c:{NFSU2_TR(0x62560c);
{u32 ea_=u32(r4(G+16)+u32(820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625613:{NFSU2_TR(0x625613);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62561a:{NFSU2_TR(0x62561a);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62561d:{NFSU2_TR(0x62561d);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625624:{NFSU2_TR(0x625624);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625627:{NFSU2_TR(0x625627);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625629:{NFSU2_TR(0x625629);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625630:{NFSU2_TR(0x625630);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625633:{NFSU2_TR(0x625633);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625635:{NFSU2_TR(0x625635);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62563c:{NFSU2_TR(0x62563c);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62563f:{NFSU2_TR(0x62563f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625641:{NFSU2_TR(0x625641);
{u32 ea_=u32(r4(G+16)+u32(824u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625648:{NFSU2_TR(0x625648);
{u32 ea_=u32(r4(G+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62564f:{NFSU2_TR(0x62564f);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625652:{NFSU2_TR(0x625652);
{u32 ea_=u32(r4(G+16)+u32(472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625659:{NFSU2_TR(0x625659);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62565c:{NFSU2_TR(0x62565c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62565e:{NFSU2_TR(0x62565e);
{u32 ea_=u32(r4(G+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625665:{NFSU2_TR(0x625665);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625668:{NFSU2_TR(0x625668);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62566a:{NFSU2_TR(0x62566a);
{u32 ea_=u32(r4(G+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625671:{NFSU2_TR(0x625671);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625674:{NFSU2_TR(0x625674);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625676:{NFSU2_TR(0x625676);
{u32 ea_=u32(r4(G+16)+u32(828u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62567d:{NFSU2_TR(0x62567d);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625684:{NFSU2_TR(0x625684);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625687:{NFSU2_TR(0x625687);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62568e:{NFSU2_TR(0x62568e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625691:{NFSU2_TR(0x625691);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625693:{NFSU2_TR(0x625693);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62569a:{NFSU2_TR(0x62569a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62569d:{NFSU2_TR(0x62569d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62569f:{NFSU2_TR(0x62569f);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6256a6:{NFSU2_TR(0x6256a6);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6256a9:{NFSU2_TR(0x6256a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6256ab:{NFSU2_TR(0x6256ab);
{u32 ea_=u32(r4(G+16)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6256b2:{NFSU2_TR(0x6256b2);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6256b9:{NFSU2_TR(0x6256b9);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6256bc:{NFSU2_TR(0x6256bc);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6256c3:{NFSU2_TR(0x6256c3);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6256c6:{NFSU2_TR(0x6256c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6256c8:{NFSU2_TR(0x6256c8);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6256cf:{NFSU2_TR(0x6256cf);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6256d2:{NFSU2_TR(0x6256d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6256d4:{NFSU2_TR(0x6256d4);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6256db:{NFSU2_TR(0x6256db);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6256de:{NFSU2_TR(0x6256de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6256e0:{NFSU2_TR(0x6256e0);
{u32 ea_=u32(r4(G+16)+u32(836u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6256e7:{NFSU2_TR(0x6256e7);
{u32 ea_=u32(r4(G+16)+u32(480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6256ee:{NFSU2_TR(0x6256ee);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6256f1:{NFSU2_TR(0x6256f1);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6256f8:{NFSU2_TR(0x6256f8);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6256fb:{NFSU2_TR(0x6256fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6256fd:{NFSU2_TR(0x6256fd);
{u32 ea_=u32(r4(G+16)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625704:{NFSU2_TR(0x625704);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625707:{NFSU2_TR(0x625707);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625709:{NFSU2_TR(0x625709);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625710:{NFSU2_TR(0x625710);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625713:{NFSU2_TR(0x625713);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625715:{NFSU2_TR(0x625715);
{u32 ea_=u32(r4(G+16)+u32(840u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62571c:{NFSU2_TR(0x62571c);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625723:{NFSU2_TR(0x625723);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625726:{NFSU2_TR(0x625726);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62572d:{NFSU2_TR(0x62572d);
u8 U[4];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(G+16))));
__builtin_memmove((R+8),(U+0),4);
}
B625734:{NFSU2_TR(0x625734);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625737:{NFSU2_TR(0x625737);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625738:{NFSU2_TR(0x625738);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((G+0),(U+0),4);
}
B62573c:{NFSU2_TR(0x62573c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B62573d:{NFSU2_TR(0x62573d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62573f:{NFSU2_TR(0x62573f);
{u32 ea_=u32(r4(G+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625746:{NFSU2_TR(0x625746);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625749:{NFSU2_TR(0x625749);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62574b:{NFSU2_TR(0x62574b);
{u32 ea_=u32(r4(G+16)+u32(488u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625752:{NFSU2_TR(0x625752);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625755:{NFSU2_TR(0x625755);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625757:{NFSU2_TR(0x625757);
{u32 ea_=u32(r4(G+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62575e:{NFSU2_TR(0x62575e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x625763ull));
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
PN u32 blk_625763(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625763:L625763:{bud-=197;NFSU2_TR(0x625763);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B62576a:{NFSU2_TR(0x62576a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62576e:{NFSU2_TR(0x62576e);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625771:{NFSU2_TR(0x625771);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625775:{NFSU2_TR(0x625775);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625777:{NFSU2_TR(0x625777);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625779:{NFSU2_TR(0x625779);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62577d:{NFSU2_TR(0x62577d);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625780:{NFSU2_TR(0x625780);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625782:{NFSU2_TR(0x625782);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625786:{NFSU2_TR(0x625786);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625789:{NFSU2_TR(0x625789);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62578b:{NFSU2_TR(0x62578b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62578f:{NFSU2_TR(0x62578f);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625793:{NFSU2_TR(0x625793);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625796:{NFSU2_TR(0x625796);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62579a:{NFSU2_TR(0x62579a);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62579d:{NFSU2_TR(0x62579d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62579f:{NFSU2_TR(0x62579f);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257a3:{NFSU2_TR(0x6257a3);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257a6:{NFSU2_TR(0x6257a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6257a8:{NFSU2_TR(0x6257a8);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257ac:{NFSU2_TR(0x6257ac);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257af:{NFSU2_TR(0x6257af);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6257b1:{NFSU2_TR(0x6257b1);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6257b5:{NFSU2_TR(0x6257b5);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257b9:{NFSU2_TR(0x6257b9);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257bc:{NFSU2_TR(0x6257bc);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257c0:{NFSU2_TR(0x6257c0);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257c3:{NFSU2_TR(0x6257c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6257c5:{NFSU2_TR(0x6257c5);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257c9:{NFSU2_TR(0x6257c9);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257cc:{NFSU2_TR(0x6257cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6257ce:{NFSU2_TR(0x6257ce);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257d2:{NFSU2_TR(0x6257d2);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257d5:{NFSU2_TR(0x6257d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6257d7:{NFSU2_TR(0x6257d7);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6257de:{NFSU2_TR(0x6257de);
{u32 ea_=u32(r4(G+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257e2:{NFSU2_TR(0x6257e2);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257e5:{NFSU2_TR(0x6257e5);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257e9:{NFSU2_TR(0x6257e9);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257ec:{NFSU2_TR(0x6257ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6257ee:{NFSU2_TR(0x6257ee);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257f2:{NFSU2_TR(0x6257f2);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257f5:{NFSU2_TR(0x6257f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6257f7:{NFSU2_TR(0x6257f7);
{u32 ea_=u32(r4(G+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6257fb:{NFSU2_TR(0x6257fb);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6257fe:{NFSU2_TR(0x6257fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625800:{NFSU2_TR(0x625800);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625807:{NFSU2_TR(0x625807);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62580b:{NFSU2_TR(0x62580b);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62580e:{NFSU2_TR(0x62580e);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625812:{NFSU2_TR(0x625812);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625815:{NFSU2_TR(0x625815);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625817:{NFSU2_TR(0x625817);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62581b:{NFSU2_TR(0x62581b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62581d:{NFSU2_TR(0x62581d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62581f:{NFSU2_TR(0x62581f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625823:{NFSU2_TR(0x625823);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625826:{NFSU2_TR(0x625826);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625828:{NFSU2_TR(0x625828);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62582f:{NFSU2_TR(0x62582f);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625833:{NFSU2_TR(0x625833);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625836:{NFSU2_TR(0x625836);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62583a:{NFSU2_TR(0x62583a);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62583d:{NFSU2_TR(0x62583d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62583f:{NFSU2_TR(0x62583f);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625843:{NFSU2_TR(0x625843);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625846:{NFSU2_TR(0x625846);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625848:{NFSU2_TR(0x625848);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62584c:{NFSU2_TR(0x62584c);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62584f:{NFSU2_TR(0x62584f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625851:{NFSU2_TR(0x625851);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625858:{NFSU2_TR(0x625858);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62585c:{NFSU2_TR(0x62585c);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62585f:{NFSU2_TR(0x62585f);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625863:{NFSU2_TR(0x625863);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625866:{NFSU2_TR(0x625866);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625868:{NFSU2_TR(0x625868);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62586c:{NFSU2_TR(0x62586c);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62586f:{NFSU2_TR(0x62586f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625871:{NFSU2_TR(0x625871);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625875:{NFSU2_TR(0x625875);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625878:{NFSU2_TR(0x625878);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62587a:{NFSU2_TR(0x62587a);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625881:{NFSU2_TR(0x625881);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625885:{NFSU2_TR(0x625885);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625888:{NFSU2_TR(0x625888);
{u32 ea_=u32(r4(G+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62588c:{NFSU2_TR(0x62588c);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62588f:{NFSU2_TR(0x62588f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625891:{NFSU2_TR(0x625891);
{u32 ea_=u32(r4(G+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625895:{NFSU2_TR(0x625895);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625898:{NFSU2_TR(0x625898);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62589a:{NFSU2_TR(0x62589a);
{u32 ea_=u32(r4(G+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62589e:{NFSU2_TR(0x62589e);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258a1:{NFSU2_TR(0x6258a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6258a3:{NFSU2_TR(0x6258a3);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6258aa:{NFSU2_TR(0x6258aa);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258ae:{NFSU2_TR(0x6258ae);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258b1:{NFSU2_TR(0x6258b1);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258b5:{NFSU2_TR(0x6258b5);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258b8:{NFSU2_TR(0x6258b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6258ba:{NFSU2_TR(0x6258ba);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258be:{NFSU2_TR(0x6258be);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258c0:{NFSU2_TR(0x6258c0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6258c2:{NFSU2_TR(0x6258c2);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258c6:{NFSU2_TR(0x6258c6);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258c9:{NFSU2_TR(0x6258c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6258cb:{NFSU2_TR(0x6258cb);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6258d2:{NFSU2_TR(0x6258d2);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258d6:{NFSU2_TR(0x6258d6);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258d9:{NFSU2_TR(0x6258d9);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258dd:{NFSU2_TR(0x6258dd);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258e0:{NFSU2_TR(0x6258e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6258e2:{NFSU2_TR(0x6258e2);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258e6:{NFSU2_TR(0x6258e6);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258e9:{NFSU2_TR(0x6258e9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6258eb:{NFSU2_TR(0x6258eb);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258ef:{NFSU2_TR(0x6258ef);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6258f2:{NFSU2_TR(0x6258f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6258f4:{NFSU2_TR(0x6258f4);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6258fb:{NFSU2_TR(0x6258fb);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6258ff:{NFSU2_TR(0x6258ff);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625902:{NFSU2_TR(0x625902);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625906:{NFSU2_TR(0x625906);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625909:{NFSU2_TR(0x625909);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62590b:{NFSU2_TR(0x62590b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62590f:{NFSU2_TR(0x62590f);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625912:{NFSU2_TR(0x625912);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625914:{NFSU2_TR(0x625914);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625918:{NFSU2_TR(0x625918);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62591b:{NFSU2_TR(0x62591b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62591d:{NFSU2_TR(0x62591d);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625924:{NFSU2_TR(0x625924);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625928:{NFSU2_TR(0x625928);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62592b:{NFSU2_TR(0x62592b);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62592f:{NFSU2_TR(0x62592f);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625932:{NFSU2_TR(0x625932);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625934:{NFSU2_TR(0x625934);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625938:{NFSU2_TR(0x625938);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62593b:{NFSU2_TR(0x62593b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62593d:{NFSU2_TR(0x62593d);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625941:{NFSU2_TR(0x625941);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625944:{NFSU2_TR(0x625944);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625946:{NFSU2_TR(0x625946);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62594d:{NFSU2_TR(0x62594d);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625951:{NFSU2_TR(0x625951);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625954:{NFSU2_TR(0x625954);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625958:{NFSU2_TR(0x625958);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62595b:{NFSU2_TR(0x62595b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62595d:{NFSU2_TR(0x62595d);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625961:{NFSU2_TR(0x625961);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625963:{NFSU2_TR(0x625963);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625965:{NFSU2_TR(0x625965);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625969:{NFSU2_TR(0x625969);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62596c:{NFSU2_TR(0x62596c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62596e:{NFSU2_TR(0x62596e);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625975:{NFSU2_TR(0x625975);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625979:{NFSU2_TR(0x625979);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62597c:{NFSU2_TR(0x62597c);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625980:{NFSU2_TR(0x625980);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625983:{NFSU2_TR(0x625983);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625985:{NFSU2_TR(0x625985);
{u32 ea_=u32(r4(G+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625989:{NFSU2_TR(0x625989);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62598c:{NFSU2_TR(0x62598c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62598e:{NFSU2_TR(0x62598e);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625992:{NFSU2_TR(0x625992);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625995:{NFSU2_TR(0x625995);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625997:{NFSU2_TR(0x625997);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62599e:{NFSU2_TR(0x62599e);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6259a2:{NFSU2_TR(0x6259a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B6259a6:{NFSU2_TR(0x6259a6);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6259a9:{NFSU2_TR(0x6259a9);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6259aa:{NFSU2_TR(0x6259aa);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6259ae:{NFSU2_TR(0x6259ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B6259af:{NFSU2_TR(0x6259af);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6259b2:{NFSU2_TR(0x6259b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6259b4:{NFSU2_TR(0x6259b4);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6259b8:{NFSU2_TR(0x6259b8);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6259bb:{NFSU2_TR(0x6259bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6259bd:{NFSU2_TR(0x6259bd);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6259c1:{NFSU2_TR(0x6259c1);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6259c4:{NFSU2_TR(0x6259c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6259c6:{NFSU2_TR(0x6259c6);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6259cd:{NFSU2_TR(0x6259cd);
{u32 ea_=u32(r4(G+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6259d1:{NFSU2_TR(0x6259d1);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6259d4:{NFSU2_TR(0x6259d4);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6259d8:{NFSU2_TR(0x6259d8);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6259db:{NFSU2_TR(0x6259db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6259dd:{NFSU2_TR(0x6259dd);
{u32 ea_=u32(r4(G+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6259e1:{NFSU2_TR(0x6259e1);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6259e4:{NFSU2_TR(0x6259e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6259e6:{NFSU2_TR(0x6259e6);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6259ea:{NFSU2_TR(0x6259ea);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6259ed:{NFSU2_TR(0x6259ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6259ef:{NFSU2_TR(0x6259ef);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6259f6:{NFSU2_TR(0x6259f6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x6259fbull));
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
PN u32 blk_6259fb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6259fb:L6259fb:{bud-=1;NFSU2_TR(0x6259fb);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_6259fe(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_6259fe(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B6259fe:L6259fe:{bud-=14;NFSU2_TR(0x6259fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625a05:{NFSU2_TR(0x625a05);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B625a0c:{NFSU2_TR(0x625a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625a0f:{NFSU2_TR(0x625a0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625a11:{NFSU2_TR(0x625a11);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+0))));
}
B625a13:{NFSU2_TR(0x625a13);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625a1a:{NFSU2_TR(0x625a1a);
w4(R+8,u32(u32(r4(R+8))|u32(r4(G+4))));
}
B625a1c:{NFSU2_TR(0x625a1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625a20:{NFSU2_TR(0x625a20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625a21:{NFSU2_TR(0x625a21);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625a22:{NFSU2_TR(0x625a22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625a23:{NFSU2_TR(0x625a23);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625a24:{NFSU2_TR(0x625a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625a27:{NFSU2_TR(0x625a27);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x625a2cull));
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
PN u32 blk_625a2c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625a2c:L625a2c:{bud-=7;NFSU2_TR(0x625a2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625a30:{NFSU2_TR(0x625a30);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625a37:{NFSU2_TR(0x625a37);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B625a3a:{NFSU2_TR(0x625a3a);
w4(G+0,u32(u32(r4(G+0))-u32(u32(0x1ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
}
B625a3b:{NFSU2_TR(0x625a3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B625a3f:{NFSU2_TR(0x625a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B625a46:{NFSU2_TR(0x625a46);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x6253c0u);}[[clang::musttail]] return blk_6253c0(ARGS);}}
}
B625a4c:L625a4c:{bud-=1;NFSU2_TR(0x625a4c);
__builtin_memmove((G+4),gp(0x82da5c),4);
{[[clang::musttail]] return blk_625a52(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_625a52(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625a52:L625a52:{bud-=5;NFSU2_TR(0x625a52);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B625a59:{NFSU2_TR(0x625a59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((G+0),(U+0),4);
}
B625a5b:{NFSU2_TR(0x625a5b);
u8 U[16];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(G+0))-u32(r4(U+8))));
w1(F+6,u8((r4(U+12))==(u32(0x0ull))));
}
B625a62:{NFSU2_TR(0x625a62);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B625a69:{NFSU2_TR(0x625a69);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x624da8u);}[[clang::musttail]] return blk_624da8(ARGS);}}
}
B625a6f:L625a6f:{bud-=1;NFSU2_TR(0x625a6f);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
{[[clang::musttail]] return blk_625a76(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_625a76(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625a76:L625a76:{bud-=2;NFSU2_TR(0x625a76);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B625a7b:{NFSU2_TR(0x625a7b);
u8 U[1];
w1(U+0,u8((r1(F+11))==(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_62700e(ARGS);}}
}
B625a81:L625a81:{bud-=2;NFSU2_TR(0x625a81);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625a83:{NFSU2_TR(0x625a83);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x625a88ull));
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
PN u32 blk_625a88(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625a88:L625a88:{bud-=4;NFSU2_TR(0x625a88);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
}
B625a8b:{NFSU2_TR(0x625a8b);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B625a8d:{NFSU2_TR(0x625a8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B625a91:{NFSU2_TR(0x625a91);
if(r1(F+6)){{[[clang::musttail]] return blk_626005(ARGS);}}
}
B625a97:L625a97:{bud-=4;NFSU2_TR(0x625a97);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625a9b:{NFSU2_TR(0x625a9b);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2c04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625aa1:{NFSU2_TR(0x625aa1);
u8 U[4];
w4(U+0,u32(u32(r4(G+4))&u32(r4(G+4))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B625aa3:{NFSU2_TR(0x625aa3);
if(r1(F+6)){{[[clang::musttail]] return blk_626324(ARGS);}}
}
B625aa9:L625aa9:{bud-=2;NFSU2_TR(0x625aa9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B625aab:{NFSU2_TR(0x625aab);
{[[clang::musttail]] return blk_625ab0(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_625ab0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625ab0:L625ab0:{bud-=7;NFSU2_TR(0x625ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625ab4:{NFSU2_TR(0x625ab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B625ab8:{NFSU2_TR(0x625ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(G+0))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B625abb:{NFSU2_TR(0x625abb);
u8 U[16];
w4(U+0,u32(u32(u32(0x1928ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((G+0),(U+12),4);
}
B625ac2:{NFSU2_TR(0x625ac2);
u8 U[4];
w4(U+0,u32(u32(r4(G+0))&u32(r4(G+0))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B625ac4:{NFSU2_TR(0x625ac4);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B625acb:{NFSU2_TR(0x625acb);
if(r1(F+6)){{[[clang::musttail]] return blk_625ffb(ARGS);}}
}
B625ad1:L625ad1:{bud-=2;NFSU2_TR(0x625ad1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B625ad3:{NFSU2_TR(0x625ad3);
if(r1(F+6)){{[[clang::musttail]] return blk_625d35(ARGS);}}
}
B625ad9:L625ad9:{bud-=2;NFSU2_TR(0x625ad9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(F+6,u8((r4(U+0))==(u32(0x0ull))));
}
B625adb:{NFSU2_TR(0x625adb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_625d35(ARGS);}}
}
B625ae1:L625ae1:{bud-=198;NFSU2_TR(0x625ae1);
__builtin_memmove((G+0),(R+8),4);
}
B625ae3:{NFSU2_TR(0x625ae3);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2c04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625ae9:{NFSU2_TR(0x625ae9);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625aec:{NFSU2_TR(0x625aec);
u8 U[6];
w1(F+0,carry<u32>(r4(G+0),u32(0x10ull)));
w1(F+11,scarry<u32>(r4(G+0),u32(0x10ull)));
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
w1(F+7,u8(s32(r4(G+0))<s32(u32(0x0ull))));
w1(F+6,u8((r4(G+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(G+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B625aef:{NFSU2_TR(0x625aef);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625af2:{NFSU2_TR(0x625af2);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625af5:{NFSU2_TR(0x625af5);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625af8:{NFSU2_TR(0x625af8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625afa:{NFSU2_TR(0x625afa);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625afc:{NFSU2_TR(0x625afc);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625afe:{NFSU2_TR(0x625afe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b00:{NFSU2_TR(0x625b00);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b03:{NFSU2_TR(0x625b03);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b06:{NFSU2_TR(0x625b06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b08:{NFSU2_TR(0x625b08);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625b0c:{NFSU2_TR(0x625b0c);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b0f:{NFSU2_TR(0x625b0f);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b12:{NFSU2_TR(0x625b12);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b15:{NFSU2_TR(0x625b15);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b18:{NFSU2_TR(0x625b18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b1a:{NFSU2_TR(0x625b1a);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b1c:{NFSU2_TR(0x625b1c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b1f:{NFSU2_TR(0x625b1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b21:{NFSU2_TR(0x625b21);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b24:{NFSU2_TR(0x625b24);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b27:{NFSU2_TR(0x625b27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b29:{NFSU2_TR(0x625b29);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625b2d:{NFSU2_TR(0x625b2d);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b30:{NFSU2_TR(0x625b30);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b33:{NFSU2_TR(0x625b33);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b36:{NFSU2_TR(0x625b36);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b39:{NFSU2_TR(0x625b39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b3b:{NFSU2_TR(0x625b3b);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b3e:{NFSU2_TR(0x625b3e);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b41:{NFSU2_TR(0x625b41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b43:{NFSU2_TR(0x625b43);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b46:{NFSU2_TR(0x625b46);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b48:{NFSU2_TR(0x625b48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b4a:{NFSU2_TR(0x625b4a);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625b4e:{NFSU2_TR(0x625b4e);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b51:{NFSU2_TR(0x625b51);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b53:{NFSU2_TR(0x625b53);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b56:{NFSU2_TR(0x625b56);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b59:{NFSU2_TR(0x625b59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b5b:{NFSU2_TR(0x625b5b);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b5e:{NFSU2_TR(0x625b5e);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b61:{NFSU2_TR(0x625b61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b63:{NFSU2_TR(0x625b63);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b66:{NFSU2_TR(0x625b66);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b69:{NFSU2_TR(0x625b69);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b6b:{NFSU2_TR(0x625b6b);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625b6f:{NFSU2_TR(0x625b6f);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b72:{NFSU2_TR(0x625b72);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b75:{NFSU2_TR(0x625b75);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b78:{NFSU2_TR(0x625b78);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b7b:{NFSU2_TR(0x625b7b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b7d:{NFSU2_TR(0x625b7d);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b80:{NFSU2_TR(0x625b80);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b83:{NFSU2_TR(0x625b83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b85:{NFSU2_TR(0x625b85);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b88:{NFSU2_TR(0x625b88);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b8a:{NFSU2_TR(0x625b8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625b8c:{NFSU2_TR(0x625b8c);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625b93:{NFSU2_TR(0x625b93);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b96:{NFSU2_TR(0x625b96);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b99:{NFSU2_TR(0x625b99);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625b9c:{NFSU2_TR(0x625b9c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625b9f:{NFSU2_TR(0x625b9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ba1:{NFSU2_TR(0x625ba1);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ba4:{NFSU2_TR(0x625ba4);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ba7:{NFSU2_TR(0x625ba7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ba9:{NFSU2_TR(0x625ba9);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625bac:{NFSU2_TR(0x625bac);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625baf:{NFSU2_TR(0x625baf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625bb1:{NFSU2_TR(0x625bb1);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625bb8:{NFSU2_TR(0x625bb8);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625bbb:{NFSU2_TR(0x625bbb);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625bbe:{NFSU2_TR(0x625bbe);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625bc1:{NFSU2_TR(0x625bc1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625bc4:{NFSU2_TR(0x625bc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625bc6:{NFSU2_TR(0x625bc6);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625bc9:{NFSU2_TR(0x625bc9);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625bcc:{NFSU2_TR(0x625bcc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625bce:{NFSU2_TR(0x625bce);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625bd1:{NFSU2_TR(0x625bd1);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625bd4:{NFSU2_TR(0x625bd4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625bd6:{NFSU2_TR(0x625bd6);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625bdd:{NFSU2_TR(0x625bdd);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625be0:{NFSU2_TR(0x625be0);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625be3:{NFSU2_TR(0x625be3);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625be6:{NFSU2_TR(0x625be6);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625be9:{NFSU2_TR(0x625be9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625beb:{NFSU2_TR(0x625beb);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625bee:{NFSU2_TR(0x625bee);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625bf1:{NFSU2_TR(0x625bf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625bf3:{NFSU2_TR(0x625bf3);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625bf6:{NFSU2_TR(0x625bf6);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625bf9:{NFSU2_TR(0x625bf9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625bfb:{NFSU2_TR(0x625bfb);
{u32 ea_=u32(r4(G+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625c02:{NFSU2_TR(0x625c02);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c05:{NFSU2_TR(0x625c05);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c08:{NFSU2_TR(0x625c08);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c0b:{NFSU2_TR(0x625c0b);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c0e:{NFSU2_TR(0x625c0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c10:{NFSU2_TR(0x625c10);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c13:{NFSU2_TR(0x625c13);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c16:{NFSU2_TR(0x625c16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c18:{NFSU2_TR(0x625c18);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c1b:{NFSU2_TR(0x625c1b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c1d:{NFSU2_TR(0x625c1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c1f:{NFSU2_TR(0x625c1f);
{u32 ea_=u32(r4(G+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625c26:{NFSU2_TR(0x625c26);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c29:{NFSU2_TR(0x625c29);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c2c:{NFSU2_TR(0x625c2c);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c2f:{NFSU2_TR(0x625c2f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c32:{NFSU2_TR(0x625c32);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c34:{NFSU2_TR(0x625c34);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c37:{NFSU2_TR(0x625c37);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c3a:{NFSU2_TR(0x625c3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c3c:{NFSU2_TR(0x625c3c);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c3f:{NFSU2_TR(0x625c3f);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c42:{NFSU2_TR(0x625c42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c44:{NFSU2_TR(0x625c44);
{u32 ea_=u32(r4(G+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625c4b:{NFSU2_TR(0x625c4b);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c4e:{NFSU2_TR(0x625c4e);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c51:{NFSU2_TR(0x625c51);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c54:{NFSU2_TR(0x625c54);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c57:{NFSU2_TR(0x625c57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c59:{NFSU2_TR(0x625c59);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c5c:{NFSU2_TR(0x625c5c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c5f:{NFSU2_TR(0x625c5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c61:{NFSU2_TR(0x625c61);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c64:{NFSU2_TR(0x625c64);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c67:{NFSU2_TR(0x625c67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c69:{NFSU2_TR(0x625c69);
{u32 ea_=u32(r4(G+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625c70:{NFSU2_TR(0x625c70);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c73:{NFSU2_TR(0x625c73);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c76:{NFSU2_TR(0x625c76);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c79:{NFSU2_TR(0x625c79);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c7c:{NFSU2_TR(0x625c7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c7e:{NFSU2_TR(0x625c7e);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c81:{NFSU2_TR(0x625c81);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c84:{NFSU2_TR(0x625c84);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c86:{NFSU2_TR(0x625c86);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c89:{NFSU2_TR(0x625c89);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c8c:{NFSU2_TR(0x625c8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625c8e:{NFSU2_TR(0x625c8e);
{u32 ea_=u32(r4(G+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625c95:{NFSU2_TR(0x625c95);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c98:{NFSU2_TR(0x625c98);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625c9b:{NFSU2_TR(0x625c9b);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625c9e:{NFSU2_TR(0x625c9e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ca1:{NFSU2_TR(0x625ca1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ca3:{NFSU2_TR(0x625ca3);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ca6:{NFSU2_TR(0x625ca6);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ca9:{NFSU2_TR(0x625ca9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625cab:{NFSU2_TR(0x625cab);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625cae:{NFSU2_TR(0x625cae);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625cb0:{NFSU2_TR(0x625cb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625cb2:{NFSU2_TR(0x625cb2);
{u32 ea_=u32(r4(G+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625cb9:{NFSU2_TR(0x625cb9);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625cbc:{NFSU2_TR(0x625cbc);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625cbf:{NFSU2_TR(0x625cbf);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625cc2:{NFSU2_TR(0x625cc2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625cc5:{NFSU2_TR(0x625cc5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625cc7:{NFSU2_TR(0x625cc7);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625cca:{NFSU2_TR(0x625cca);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ccd:{NFSU2_TR(0x625ccd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ccf:{NFSU2_TR(0x625ccf);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625cd2:{NFSU2_TR(0x625cd2);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625cd5:{NFSU2_TR(0x625cd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625cd7:{NFSU2_TR(0x625cd7);
{u32 ea_=u32(r4(G+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625cde:{NFSU2_TR(0x625cde);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ce1:{NFSU2_TR(0x625ce1);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ce4:{NFSU2_TR(0x625ce4);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ce7:{NFSU2_TR(0x625ce7);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625cea:{NFSU2_TR(0x625cea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625cec:{NFSU2_TR(0x625cec);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625cef:{NFSU2_TR(0x625cef);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625cf2:{NFSU2_TR(0x625cf2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625cf4:{NFSU2_TR(0x625cf4);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625cf7:{NFSU2_TR(0x625cf7);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625cfa:{NFSU2_TR(0x625cfa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625cfc:{NFSU2_TR(0x625cfc);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625d03:{NFSU2_TR(0x625d03);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d06:{NFSU2_TR(0x625d06);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B625d0a:{NFSU2_TR(0x625d0a);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d0d:{NFSU2_TR(0x625d0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B625d11:{NFSU2_TR(0x625d11);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d14:{NFSU2_TR(0x625d14);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d17:{NFSU2_TR(0x625d17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d19:{NFSU2_TR(0x625d19);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d1c:{NFSU2_TR(0x625d1c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d1f:{NFSU2_TR(0x625d1f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d21:{NFSU2_TR(0x625d21);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d24:{NFSU2_TR(0x625d24);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d27:{NFSU2_TR(0x625d27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d29:{NFSU2_TR(0x625d29);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625d30:{NFSU2_TR(0x625d30);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_625f9c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_625d35(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625d35:L625d35:{bud-=200;NFSU2_TR(0x625d35);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625d39:{NFSU2_TR(0x625d39);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0x2c04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625d3f:{NFSU2_TR(0x625d3f);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d42:{NFSU2_TR(0x625d42);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x10ull))));
}
B625d45:{NFSU2_TR(0x625d45);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d48:{NFSU2_TR(0x625d48);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d4b:{NFSU2_TR(0x625d4b);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d4e:{NFSU2_TR(0x625d4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d50:{NFSU2_TR(0x625d50);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d52:{NFSU2_TR(0x625d52);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d54:{NFSU2_TR(0x625d54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d56:{NFSU2_TR(0x625d56);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d59:{NFSU2_TR(0x625d59);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d5c:{NFSU2_TR(0x625d5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d5e:{NFSU2_TR(0x625d5e);
{u32 ea_=u32(r4(G+16)+u32(1872u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625d65:{NFSU2_TR(0x625d65);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d67:{NFSU2_TR(0x625d67);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d6a:{NFSU2_TR(0x625d6a);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d6d:{NFSU2_TR(0x625d6d);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d70:{NFSU2_TR(0x625d70);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d72:{NFSU2_TR(0x625d72);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d75:{NFSU2_TR(0x625d75);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d78:{NFSU2_TR(0x625d78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d7a:{NFSU2_TR(0x625d7a);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d7d:{NFSU2_TR(0x625d7d);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d80:{NFSU2_TR(0x625d80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d82:{NFSU2_TR(0x625d82);
{u32 ea_=u32(r4(G+16)+u32(1876u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625d89:{NFSU2_TR(0x625d89);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d8b:{NFSU2_TR(0x625d8b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d8e:{NFSU2_TR(0x625d8e);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d91:{NFSU2_TR(0x625d91);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d94:{NFSU2_TR(0x625d94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d96:{NFSU2_TR(0x625d96);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625d99:{NFSU2_TR(0x625d99);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625d9c:{NFSU2_TR(0x625d9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625d9e:{NFSU2_TR(0x625d9e);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625da1:{NFSU2_TR(0x625da1);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625da4:{NFSU2_TR(0x625da4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625da6:{NFSU2_TR(0x625da6);
{u32 ea_=u32(r4(G+16)+u32(1880u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625dad:{NFSU2_TR(0x625dad);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625db0:{NFSU2_TR(0x625db0);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625db3:{NFSU2_TR(0x625db3);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625db5:{NFSU2_TR(0x625db5);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625db8:{NFSU2_TR(0x625db8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625dba:{NFSU2_TR(0x625dba);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625dbd:{NFSU2_TR(0x625dbd);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625dc0:{NFSU2_TR(0x625dc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625dc2:{NFSU2_TR(0x625dc2);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625dc5:{NFSU2_TR(0x625dc5);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625dc8:{NFSU2_TR(0x625dc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625dca:{NFSU2_TR(0x625dca);
{u32 ea_=u32(r4(G+16)+u32(1884u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625dd1:{NFSU2_TR(0x625dd1);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625dd4:{NFSU2_TR(0x625dd4);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625dd7:{NFSU2_TR(0x625dd7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625dd9:{NFSU2_TR(0x625dd9);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ddc:{NFSU2_TR(0x625ddc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625dde:{NFSU2_TR(0x625dde);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625de1:{NFSU2_TR(0x625de1);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625de4:{NFSU2_TR(0x625de4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625de6:{NFSU2_TR(0x625de6);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625de9:{NFSU2_TR(0x625de9);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625dec:{NFSU2_TR(0x625dec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625dee:{NFSU2_TR(0x625dee);
{u32 ea_=u32(r4(G+16)+u32(1888u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625df5:{NFSU2_TR(0x625df5);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625df8:{NFSU2_TR(0x625df8);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625dfb:{NFSU2_TR(0x625dfb);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625dfe:{NFSU2_TR(0x625dfe);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e01:{NFSU2_TR(0x625e01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e03:{NFSU2_TR(0x625e03);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e06:{NFSU2_TR(0x625e06);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e09:{NFSU2_TR(0x625e09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e0b:{NFSU2_TR(0x625e0b);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e0e:{NFSU2_TR(0x625e0e);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e11:{NFSU2_TR(0x625e11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e13:{NFSU2_TR(0x625e13);
{u32 ea_=u32(r4(G+16)+u32(1892u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625e1a:{NFSU2_TR(0x625e1a);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e1d:{NFSU2_TR(0x625e1d);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e20:{NFSU2_TR(0x625e20);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e23:{NFSU2_TR(0x625e23);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e26:{NFSU2_TR(0x625e26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e28:{NFSU2_TR(0x625e28);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e2b:{NFSU2_TR(0x625e2b);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e2e:{NFSU2_TR(0x625e2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e30:{NFSU2_TR(0x625e30);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e33:{NFSU2_TR(0x625e33);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e36:{NFSU2_TR(0x625e36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e38:{NFSU2_TR(0x625e38);
{u32 ea_=u32(r4(G+16)+u32(1896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625e3f:{NFSU2_TR(0x625e3f);
{u32 ea_=u32(r4(G+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e42:{NFSU2_TR(0x625e42);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e45:{NFSU2_TR(0x625e45);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e48:{NFSU2_TR(0x625e48);
{u32 ea_=u32(r4(G+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e4b:{NFSU2_TR(0x625e4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e4d:{NFSU2_TR(0x625e4d);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e50:{NFSU2_TR(0x625e50);
{u32 ea_=u32(r4(G+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e53:{NFSU2_TR(0x625e53);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e55:{NFSU2_TR(0x625e55);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e58:{NFSU2_TR(0x625e58);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e5b:{NFSU2_TR(0x625e5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e5d:{NFSU2_TR(0x625e5d);
{u32 ea_=u32(r4(G+16)+u32(1900u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625e64:{NFSU2_TR(0x625e64);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e67:{NFSU2_TR(0x625e67);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e6a:{NFSU2_TR(0x625e6a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e6c:{NFSU2_TR(0x625e6c);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e6f:{NFSU2_TR(0x625e6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e71:{NFSU2_TR(0x625e71);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e74:{NFSU2_TR(0x625e74);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e77:{NFSU2_TR(0x625e77);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e79:{NFSU2_TR(0x625e79);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e7c:{NFSU2_TR(0x625e7c);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e7f:{NFSU2_TR(0x625e7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e81:{NFSU2_TR(0x625e81);
{u32 ea_=u32(r4(G+16)+u32(1904u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625e88:{NFSU2_TR(0x625e88);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e8b:{NFSU2_TR(0x625e8b);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e8e:{NFSU2_TR(0x625e8e);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e91:{NFSU2_TR(0x625e91);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e94:{NFSU2_TR(0x625e94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e96:{NFSU2_TR(0x625e96);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625e99:{NFSU2_TR(0x625e99);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625e9c:{NFSU2_TR(0x625e9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625e9e:{NFSU2_TR(0x625e9e);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ea1:{NFSU2_TR(0x625ea1);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ea4:{NFSU2_TR(0x625ea4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ea6:{NFSU2_TR(0x625ea6);
{u32 ea_=u32(r4(G+16)+u32(1908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625ead:{NFSU2_TR(0x625ead);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625eb0:{NFSU2_TR(0x625eb0);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625eb3:{NFSU2_TR(0x625eb3);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625eb6:{NFSU2_TR(0x625eb6);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625eb9:{NFSU2_TR(0x625eb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ebb:{NFSU2_TR(0x625ebb);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ebe:{NFSU2_TR(0x625ebe);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ec1:{NFSU2_TR(0x625ec1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ec3:{NFSU2_TR(0x625ec3);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ec6:{NFSU2_TR(0x625ec6);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ec9:{NFSU2_TR(0x625ec9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ecb:{NFSU2_TR(0x625ecb);
{u32 ea_=u32(r4(G+16)+u32(1912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625ed2:{NFSU2_TR(0x625ed2);
{u32 ea_=u32(r4(G+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ed5:{NFSU2_TR(0x625ed5);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ed8:{NFSU2_TR(0x625ed8);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625edb:{NFSU2_TR(0x625edb);
{u32 ea_=u32(r4(G+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ede:{NFSU2_TR(0x625ede);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ee0:{NFSU2_TR(0x625ee0);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625ee3:{NFSU2_TR(0x625ee3);
{u32 ea_=u32(r4(G+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625ee6:{NFSU2_TR(0x625ee6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ee8:{NFSU2_TR(0x625ee8);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625eeb:{NFSU2_TR(0x625eeb);
{u32 ea_=u32(r4(G+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625eee:{NFSU2_TR(0x625eee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625ef0:{NFSU2_TR(0x625ef0);
{u32 ea_=u32(r4(G+16)+u32(1916u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625ef7:{NFSU2_TR(0x625ef7);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625efa:{NFSU2_TR(0x625efa);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625efd:{NFSU2_TR(0x625efd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625eff:{NFSU2_TR(0x625eff);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f02:{NFSU2_TR(0x625f02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f04:{NFSU2_TR(0x625f04);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f07:{NFSU2_TR(0x625f07);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f0a:{NFSU2_TR(0x625f0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f0c:{NFSU2_TR(0x625f0c);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f0f:{NFSU2_TR(0x625f0f);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f12:{NFSU2_TR(0x625f12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f14:{NFSU2_TR(0x625f14);
{u32 ea_=u32(r4(G+16)+u32(1920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625f1b:{NFSU2_TR(0x625f1b);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f1e:{NFSU2_TR(0x625f1e);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f21:{NFSU2_TR(0x625f21);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f24:{NFSU2_TR(0x625f24);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f27:{NFSU2_TR(0x625f27);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f29:{NFSU2_TR(0x625f29);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f2c:{NFSU2_TR(0x625f2c);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f2f:{NFSU2_TR(0x625f2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f31:{NFSU2_TR(0x625f31);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f34:{NFSU2_TR(0x625f34);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f37:{NFSU2_TR(0x625f37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f39:{NFSU2_TR(0x625f39);
{u32 ea_=u32(r4(G+16)+u32(1924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625f40:{NFSU2_TR(0x625f40);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f43:{NFSU2_TR(0x625f43);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f46:{NFSU2_TR(0x625f46);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f49:{NFSU2_TR(0x625f49);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f4c:{NFSU2_TR(0x625f4c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f4e:{NFSU2_TR(0x625f4e);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f51:{NFSU2_TR(0x625f51);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f54:{NFSU2_TR(0x625f54);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f56:{NFSU2_TR(0x625f56);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f59:{NFSU2_TR(0x625f59);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f5c:{NFSU2_TR(0x625f5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f5e:{NFSU2_TR(0x625f5e);
{u32 ea_=u32(r4(G+16)+u32(1928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B625f65:{NFSU2_TR(0x625f65);
{u32 ea_=u32(r4(G+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f68:{NFSU2_TR(0x625f68);
__builtin_memmove((R+8),(R+28),4);
}
B625f6a:{NFSU2_TR(0x625f6a);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f6d:{NFSU2_TR(0x625f6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B625f70:{NFSU2_TR(0x625f70);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f73:{NFSU2_TR(0x625f73);
u8 U[4];
w4(U+0,u32(u32(u32(0x750ull))+u32(r4(G+16))));
__builtin_memmove((G+4),(U+0),4);
}
B625f7a:{NFSU2_TR(0x625f7a);
{u32 ea_=u32(r4(G+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f7d:{NFSU2_TR(0x625f7d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f7f:{NFSU2_TR(0x625f7f);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f82:{NFSU2_TR(0x625f82);
{u32 ea_=u32(r4(G+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f85:{NFSU2_TR(0x625f85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f87:{NFSU2_TR(0x625f87);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B625f8a:{NFSU2_TR(0x625f8a);
{u32 ea_=u32(r4(G+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B625f8d:{NFSU2_TR(0x625f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625f91:{NFSU2_TR(0x625f91);
u8 U[6];
w1(F+0,carry<u32>(r4(R+8),r4(G+0)));
w1(F+11,scarry<u32>(r4(R+8),r4(G+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(G+0))));
w1(F+7,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(F+6,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B625f93:{NFSU2_TR(0x625f93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B625f95:{NFSU2_TR(0x625f95);
{u32 ea_=u32(r4(G+16)+u32(1932u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_625f9c(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_625f9c(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625f9c:L625f9c:{bud-=3;NFSU2_TR(0x625f9c);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625f9d:{NFSU2_TR(0x625f9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625f9e:{NFSU2_TR(0x625f9e);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x625fa3ull));
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
PN u32 blk_625fa3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625fa3:L625fa3:{bud-=6;NFSU2_TR(0x625fa3);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625faa:{NFSU2_TR(0x625faa);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625fb1:{NFSU2_TR(0x625fb1);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x8ull))));
}
B625fb4:{NFSU2_TR(0x625fb4);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625fb5:{NFSU2_TR(0x625fb5);
u8 U[4];
w4(U+0,u32(0xd6d6080aull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625fba:{NFSU2_TR(0x625fba);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x625fbfull));
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
PN u32 blk_625fbf(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625fbf:L625fbf:{bud-=18;NFSU2_TR(0x625fbf);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B625fc6:{NFSU2_TR(0x625fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625fcd:{NFSU2_TR(0x625fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B625fd0:{NFSU2_TR(0x625fd0);
w4(G+4,u32(u32(r4(G+4))|u32(r4(R+8))));
}
B625fd2:{NFSU2_TR(0x625fd2);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B625fd9:{NFSU2_TR(0x625fd9);
w4(G+4,u32(u32(r4(G+4))|u32(r4(G+0))));
}
B625fdb:{NFSU2_TR(0x625fdb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625fdd:{NFSU2_TR(0x625fdd);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625fde:{NFSU2_TR(0x625fde);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625fe5:{NFSU2_TR(0x625fe5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625fe6:{NFSU2_TR(0x625fe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B625fea:{NFSU2_TR(0x625fea);
__builtin_memmove((G+0),(R+28),4);
}
B625fec:{NFSU2_TR(0x625fec);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B625fef:{NFSU2_TR(0x625fef);
w4(G+0,u32(u32(r4(G+0))+u32(r4(R+8))));
}
B625ff1:{NFSU2_TR(0x625ff1);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625ff2:{NFSU2_TR(0x625ff2);
u8 U[4];
__builtin_memmove((U+0),(G+4),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B625ff3:{NFSU2_TR(0x625ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B625ff6:{NFSU2_TR(0x625ff6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),u32(0x625ffbull));
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
PN u32 blk_625ffb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B625ffb:L625ffb:{bud-=3;NFSU2_TR(0x625ffb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B625ffc:{NFSU2_TR(0x625ffc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(F+11,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(F+7,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B625fff:{NFSU2_TR(0x625fff);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x625ab0u);}[[clang::musttail]] return blk_625ab0(ARGS);}}
{[[clang::musttail]] return blk_626005(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_625(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x62514c:[[clang::musttail]] return blk_62514c(c,a4,a0,a1,bud);
case 0x6253a2:[[clang::musttail]] return blk_6253a2(c,a4,a0,a1,bud);
case 0x6253c0:[[clang::musttail]] return blk_6253c0(c,a4,a0,a1,bud);
case 0x625401:[[clang::musttail]] return blk_625401(c,a4,a0,a1,bud);
case 0x625763:[[clang::musttail]] return blk_625763(c,a4,a0,a1,bud);
case 0x6259fb:[[clang::musttail]] return blk_6259fb(c,a4,a0,a1,bud);
case 0x6259fe:[[clang::musttail]] return blk_6259fe(c,a4,a0,a1,bud);
case 0x625a2c:[[clang::musttail]] return blk_625a2c(c,a4,a0,a1,bud);
case 0x625a52:[[clang::musttail]] return blk_625a52(c,a4,a0,a1,bud);
case 0x625a76:[[clang::musttail]] return blk_625a76(c,a4,a0,a1,bud);
case 0x625a88:[[clang::musttail]] return blk_625a88(c,a4,a0,a1,bud);
case 0x625ab0:[[clang::musttail]] return blk_625ab0(c,a4,a0,a1,bud);
case 0x625d35:[[clang::musttail]] return blk_625d35(c,a4,a0,a1,bud);
case 0x625f9c:[[clang::musttail]] return blk_625f9c(c,a4,a0,a1,bud);
case 0x625fa3:[[clang::musttail]] return blk_625fa3(c,a4,a0,a1,bud);
case 0x625fbf:[[clang::musttail]] return blk_625fbf(c,a4,a0,a1,bud);
case 0x625ffb:[[clang::musttail]] return blk_625ffb(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_625(Cpu& c){u8* R=c.regs.data();return ent_625(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
