#include "fast_regs.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
PN u32 ent_dispatch(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_505712(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50586e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506193(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5061da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506337(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506345(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5064f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50653b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50669b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5066a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50671a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506783(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506790(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506982(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5069de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506b77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506b8d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506bd2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506ca3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506d3e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506d4b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506dbb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506f29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506f2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506f83(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5070f8(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_5070fc(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_50798a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506cb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud);
PN u32 blk_506000(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506000:L506000:{bud-=6;NFSU2_TR(0x506000);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506004:{NFSU2_TR(0x506004);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50600a:{NFSU2_TR(0x50600a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B50600c:{NFSU2_TR(0x50600c);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B506010:{NFSU2_TR(0x506010);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B506013:{NFSU2_TR(0x506013);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5061da(ARGS);}}
}
B506019:L506019:{bud-=2;NFSU2_TR(0x506019);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50601b:{NFSU2_TR(0x50601b);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_506193(ARGS);}}
}
B506021:L506021:{bud-=108;NFSU2_TR(0x506021);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506024:{NFSU2_TR(0x506024);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506027:{NFSU2_TR(0x506027);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50602a:{NFSU2_TR(0x50602a);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50602d:{NFSU2_TR(0x50602d);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506030:{NFSU2_TR(0x506030);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506032:{NFSU2_TR(0x506032);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506039:{NFSU2_TR(0x506039);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506040:{NFSU2_TR(0x506040);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506042:{NFSU2_TR(0x506042);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506044:{NFSU2_TR(0x506044);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506047:{NFSU2_TR(0x506047);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50604b:{NFSU2_TR(0x50604b);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50604e:{NFSU2_TR(0x50604e);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506052:{NFSU2_TR(0x506052);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506055:{NFSU2_TR(0x506055);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506059:{NFSU2_TR(0x506059);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50605b:{NFSU2_TR(0x50605b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50605d:{NFSU2_TR(0x50605d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506061:{NFSU2_TR(0x506061);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506064:{NFSU2_TR(0x506064);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506066:{NFSU2_TR(0x506066);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50606a:{NFSU2_TR(0x50606a);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50606e:{NFSU2_TR(0x50606e);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506070:{NFSU2_TR(0x506070);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506074:{NFSU2_TR(0x506074);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506077:{NFSU2_TR(0x506077);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506079:{NFSU2_TR(0x506079);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50607d:{NFSU2_TR(0x50607d);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506080:{NFSU2_TR(0x506080);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506082:{NFSU2_TR(0x506082);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B506084:{NFSU2_TR(0x506084);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B506086:{NFSU2_TR(0x506086);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506088:{NFSU2_TR(0x506088);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50608a:{NFSU2_TR(0x50608a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50608c:{NFSU2_TR(0x50608c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50608e:{NFSU2_TR(0x50608e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506091:{NFSU2_TR(0x506091);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506094:{NFSU2_TR(0x506094);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506096:{NFSU2_TR(0x506096);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506099:{NFSU2_TR(0x506099);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50609c:{NFSU2_TR(0x50609c);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50609f:{NFSU2_TR(0x50609f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060a1:{NFSU2_TR(0x5060a1);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060a4:{NFSU2_TR(0x5060a4);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5060a6:{NFSU2_TR(0x5060a6);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5060a8:{NFSU2_TR(0x5060a8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5060aa:{NFSU2_TR(0x5060aa);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5060ad:{NFSU2_TR(0x5060ad);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5060b0:{NFSU2_TR(0x5060b0);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5060b3:{NFSU2_TR(0x5060b3);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5060b6:{NFSU2_TR(0x5060b6);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060b9:{NFSU2_TR(0x5060b9);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5060bc:{NFSU2_TR(0x5060bc);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060bf:{NFSU2_TR(0x5060bf);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5060c1:{NFSU2_TR(0x5060c1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5060c3:{NFSU2_TR(0x5060c3);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5060c5:{NFSU2_TR(0x5060c5);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5060c9:{NFSU2_TR(0x5060c9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5060cb:{NFSU2_TR(0x5060cb);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5060cf:{NFSU2_TR(0x5060cf);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060d3:{NFSU2_TR(0x5060d3);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5060d6:{NFSU2_TR(0x5060d6);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060da:{NFSU2_TR(0x5060da);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5060dc:{NFSU2_TR(0x5060dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5060e0:{NFSU2_TR(0x5060e0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5060e2:{NFSU2_TR(0x5060e2);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5060e5:{NFSU2_TR(0x5060e5);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5060e9:{NFSU2_TR(0x5060e9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060ec:{NFSU2_TR(0x5060ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5060f0:{NFSU2_TR(0x5060f0);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5060f3:{NFSU2_TR(0x5060f3);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060f6:{NFSU2_TR(0x5060f6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5060f7:{NFSU2_TR(0x5060f7);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5060fa:{NFSU2_TR(0x5060fa);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5060fd:{NFSU2_TR(0x5060fd);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B506100:{NFSU2_TR(0x506100);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506103:{NFSU2_TR(0x506103);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50610a:{NFSU2_TR(0x50610a);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50610d:{NFSU2_TR(0x50610d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B506110:{NFSU2_TR(0x506110);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506112:{NFSU2_TR(0x506112);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B506117:{NFSU2_TR(0x506117);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50611e:{NFSU2_TR(0x50611e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506120:{NFSU2_TR(0x506120);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506122:{NFSU2_TR(0x506122);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506129:{NFSU2_TR(0x506129);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50612b:{NFSU2_TR(0x50612b);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506132:{NFSU2_TR(0x506132);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506139:{NFSU2_TR(0x506139);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50613b:{NFSU2_TR(0x50613b);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506142:{NFSU2_TR(0x506142);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506149:{NFSU2_TR(0x506149);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506150:{NFSU2_TR(0x506150);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506153:{NFSU2_TR(0x506153);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50615a:{NFSU2_TR(0x50615a);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50615d:{NFSU2_TR(0x50615d);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506164:{NFSU2_TR(0x506164);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506167:{NFSU2_TR(0x506167);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50616e:{NFSU2_TR(0x50616e);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506175:{NFSU2_TR(0x506175);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B506177:{NFSU2_TR(0x506177);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506179:{NFSU2_TR(0x506179);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50617c:{NFSU2_TR(0x50617c);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506183:{NFSU2_TR(0x506183);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50618a:{NFSU2_TR(0x50618a);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50618d:{NFSU2_TR(0x50618d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506190:{NFSU2_TR(0x506190);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_506193(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506193(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506193:L506193:{bud-=23;NFSU2_TR(0x506193);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506196:{NFSU2_TR(0x506196);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506199:{NFSU2_TR(0x506199);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50619c:{NFSU2_TR(0x50619c);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B50619e:{NFSU2_TR(0x50619e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5061a2:{NFSU2_TR(0x5061a2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5061a4:{NFSU2_TR(0x5061a4);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5061a7:{NFSU2_TR(0x5061a7);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5061aa:{NFSU2_TR(0x5061aa);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5061ad:{NFSU2_TR(0x5061ad);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5061b0:{NFSU2_TR(0x5061b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5061b4:{NFSU2_TR(0x5061b4);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5061b7:{NFSU2_TR(0x5061b7);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5061bb:{NFSU2_TR(0x5061bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5061be:{NFSU2_TR(0x5061be);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5061c1:{NFSU2_TR(0x5061c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5061c5:{NFSU2_TR(0x5061c5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5061c8:{NFSU2_TR(0x5061c8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5061cb:{NFSU2_TR(0x5061cb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5061cd:{NFSU2_TR(0x5061cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5061cf:{NFSU2_TR(0x5061cf);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5061d2:{NFSU2_TR(0x5061d2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5061d5:{NFSU2_TR(0x5061d5);
{[[clang::musttail]] return blk_506337(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5061da(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5061da:L5061da:{bud-=2;NFSU2_TR(0x5061da);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5061dc:{NFSU2_TR(0x5061dc);
if(r1(F+6)){{[[clang::musttail]] return blk_506345(ARGS);}}
}
B5061e2:L5061e2:{bud-=104;NFSU2_TR(0x5061e2);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5061e5:{NFSU2_TR(0x5061e5);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5061e8:{NFSU2_TR(0x5061e8);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5061eb:{NFSU2_TR(0x5061eb);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5061ee:{NFSU2_TR(0x5061ee);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5061f1:{NFSU2_TR(0x5061f1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5061f3:{NFSU2_TR(0x5061f3);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5061fa:{NFSU2_TR(0x5061fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506201:{NFSU2_TR(0x506201);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506203:{NFSU2_TR(0x506203);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506205:{NFSU2_TR(0x506205);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506208:{NFSU2_TR(0x506208);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50620c:{NFSU2_TR(0x50620c);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50620f:{NFSU2_TR(0x50620f);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506213:{NFSU2_TR(0x506213);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506216:{NFSU2_TR(0x506216);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50621a:{NFSU2_TR(0x50621a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50621c:{NFSU2_TR(0x50621c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50621e:{NFSU2_TR(0x50621e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506222:{NFSU2_TR(0x506222);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506225:{NFSU2_TR(0x506225);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506227:{NFSU2_TR(0x506227);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50622b:{NFSU2_TR(0x50622b);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50622f:{NFSU2_TR(0x50622f);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506231:{NFSU2_TR(0x506231);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506235:{NFSU2_TR(0x506235);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506238:{NFSU2_TR(0x506238);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50623a:{NFSU2_TR(0x50623a);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50623e:{NFSU2_TR(0x50623e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506241:{NFSU2_TR(0x506241);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506243:{NFSU2_TR(0x506243);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B506245:{NFSU2_TR(0x506245);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B506247:{NFSU2_TR(0x506247);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506249:{NFSU2_TR(0x506249);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50624b:{NFSU2_TR(0x50624b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50624d:{NFSU2_TR(0x50624d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50624f:{NFSU2_TR(0x50624f);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506252:{NFSU2_TR(0x506252);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506255:{NFSU2_TR(0x506255);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506257:{NFSU2_TR(0x506257);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50625a:{NFSU2_TR(0x50625a);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50625d:{NFSU2_TR(0x50625d);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506260:{NFSU2_TR(0x506260);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506262:{NFSU2_TR(0x506262);
{u32 ea_=u32(r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506265:{NFSU2_TR(0x506265);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506267:{NFSU2_TR(0x506267);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506269:{NFSU2_TR(0x506269);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50626b:{NFSU2_TR(0x50626b);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50626e:{NFSU2_TR(0x50626e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506271:{NFSU2_TR(0x506271);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506274:{NFSU2_TR(0x506274);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506277:{NFSU2_TR(0x506277);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50627a:{NFSU2_TR(0x50627a);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50627d:{NFSU2_TR(0x50627d);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506280:{NFSU2_TR(0x506280);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506282:{NFSU2_TR(0x506282);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506284:{NFSU2_TR(0x506284);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506286:{NFSU2_TR(0x506286);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50628a:{NFSU2_TR(0x50628a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50628c:{NFSU2_TR(0x50628c);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506290:{NFSU2_TR(0x506290);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506294:{NFSU2_TR(0x506294);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506297:{NFSU2_TR(0x506297);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50629b:{NFSU2_TR(0x50629b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50629d:{NFSU2_TR(0x50629d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5062a1:{NFSU2_TR(0x5062a1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5062a3:{NFSU2_TR(0x5062a3);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5062a6:{NFSU2_TR(0x5062a6);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5062aa:{NFSU2_TR(0x5062aa);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5062ad:{NFSU2_TR(0x5062ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5062b1:{NFSU2_TR(0x5062b1);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5062b4:{NFSU2_TR(0x5062b4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5062b7:{NFSU2_TR(0x5062b7);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5062bc:{NFSU2_TR(0x5062bc);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5062bf:{NFSU2_TR(0x5062bf);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5062c2:{NFSU2_TR(0x5062c2);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5062c5:{NFSU2_TR(0x5062c5);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5062cc:{NFSU2_TR(0x5062cc);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5062cf:{NFSU2_TR(0x5062cf);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5062d1:{NFSU2_TR(0x5062d1);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5062d8:{NFSU2_TR(0x5062d8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5062da:{NFSU2_TR(0x5062da);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5062dc:{NFSU2_TR(0x5062dc);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5062e0:{NFSU2_TR(0x5062e0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5062e2:{NFSU2_TR(0x5062e2);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5062e6:{NFSU2_TR(0x5062e6);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5062ed:{NFSU2_TR(0x5062ed);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5062ef:{NFSU2_TR(0x5062ef);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5062f3:{NFSU2_TR(0x5062f3);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5062fa:{NFSU2_TR(0x5062fa);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5062fe:{NFSU2_TR(0x5062fe);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506301:{NFSU2_TR(0x506301);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506305:{NFSU2_TR(0x506305);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506308:{NFSU2_TR(0x506308);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50630c:{NFSU2_TR(0x50630c);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50630f:{NFSU2_TR(0x50630f);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506316:{NFSU2_TR(0x506316);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50631d:{NFSU2_TR(0x50631d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B50631f:{NFSU2_TR(0x50631f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506321:{NFSU2_TR(0x506321);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506324:{NFSU2_TR(0x506324);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50632b:{NFSU2_TR(0x50632b);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506332:{NFSU2_TR(0x506332);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506334:{NFSU2_TR(0x506334);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_506337(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506337(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506337:L506337:{bud-=5;NFSU2_TR(0x506337);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B506338:{NFSU2_TR(0x506338);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50633b:{NFSU2_TR(0x50633b);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50633e:{NFSU2_TR(0x50633e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506342:{NFSU2_TR(0x506342);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_506345(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506345(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506345:L506345:{bud-=14;NFSU2_TR(0x506345);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506349:{NFSU2_TR(0x506349);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50634c:{NFSU2_TR(0x50634c);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506350:{NFSU2_TR(0x506350);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506353:{NFSU2_TR(0x506353);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506355:{NFSU2_TR(0x506355);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506359:{NFSU2_TR(0x506359);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50635c:{NFSU2_TR(0x50635c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50635e:{NFSU2_TR(0x50635e);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506362:{NFSU2_TR(0x506362);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B506368:{NFSU2_TR(0x506368);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B50636a:{NFSU2_TR(0x50636a);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B50636e:{NFSU2_TR(0x50636e);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B506371:{NFSU2_TR(0x506371);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_50653b(ARGS);}}
}
B506377:L506377:{bud-=2;NFSU2_TR(0x506377);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B506379:{NFSU2_TR(0x506379);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5064f4(ARGS);}}
}
B50637f:L50637f:{bud-=107;NFSU2_TR(0x50637f);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506382:{NFSU2_TR(0x506382);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506385:{NFSU2_TR(0x506385);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506388:{NFSU2_TR(0x506388);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50638b:{NFSU2_TR(0x50638b);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50638e:{NFSU2_TR(0x50638e);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506391:{NFSU2_TR(0x506391);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506398:{NFSU2_TR(0x506398);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50639f:{NFSU2_TR(0x50639f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5063a1:{NFSU2_TR(0x5063a1);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5063a3:{NFSU2_TR(0x5063a3);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5063a6:{NFSU2_TR(0x5063a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5063aa:{NFSU2_TR(0x5063aa);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5063ad:{NFSU2_TR(0x5063ad);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5063b1:{NFSU2_TR(0x5063b1);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063b4:{NFSU2_TR(0x5063b4);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5063b8:{NFSU2_TR(0x5063b8);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063bb:{NFSU2_TR(0x5063bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5063bd:{NFSU2_TR(0x5063bd);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5063c1:{NFSU2_TR(0x5063c1);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063c4:{NFSU2_TR(0x5063c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5063c6:{NFSU2_TR(0x5063c6);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5063ca:{NFSU2_TR(0x5063ca);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5063ce:{NFSU2_TR(0x5063ce);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063d0:{NFSU2_TR(0x5063d0);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5063d4:{NFSU2_TR(0x5063d4);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063d7:{NFSU2_TR(0x5063d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5063d9:{NFSU2_TR(0x5063d9);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5063dd:{NFSU2_TR(0x5063dd);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063e0:{NFSU2_TR(0x5063e0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5063e2:{NFSU2_TR(0x5063e2);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5063e4:{NFSU2_TR(0x5063e4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5063e6:{NFSU2_TR(0x5063e6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5063e8:{NFSU2_TR(0x5063e8);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063ea:{NFSU2_TR(0x5063ea);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5063ec:{NFSU2_TR(0x5063ec);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5063ee:{NFSU2_TR(0x5063ee);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063f1:{NFSU2_TR(0x5063f1);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5063f4:{NFSU2_TR(0x5063f4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5063f6:{NFSU2_TR(0x5063f6);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5063f9:{NFSU2_TR(0x5063f9);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5063fc:{NFSU2_TR(0x5063fc);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5063ff:{NFSU2_TR(0x5063ff);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506402:{NFSU2_TR(0x506402);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506405:{NFSU2_TR(0x506405);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506407:{NFSU2_TR(0x506407);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506409:{NFSU2_TR(0x506409);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50640b:{NFSU2_TR(0x50640b);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50640e:{NFSU2_TR(0x50640e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506411:{NFSU2_TR(0x506411);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506414:{NFSU2_TR(0x506414);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506417:{NFSU2_TR(0x506417);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50641a:{NFSU2_TR(0x50641a);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50641d:{NFSU2_TR(0x50641d);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506420:{NFSU2_TR(0x506420);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506423:{NFSU2_TR(0x506423);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506425:{NFSU2_TR(0x506425);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506427:{NFSU2_TR(0x506427);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50642b:{NFSU2_TR(0x50642b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50642d:{NFSU2_TR(0x50642d);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506431:{NFSU2_TR(0x506431);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506435:{NFSU2_TR(0x506435);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506438:{NFSU2_TR(0x506438);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50643c:{NFSU2_TR(0x50643c);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50643f:{NFSU2_TR(0x50643f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506443:{NFSU2_TR(0x506443);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506445:{NFSU2_TR(0x506445);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506448:{NFSU2_TR(0x506448);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50644c:{NFSU2_TR(0x50644c);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50644f:{NFSU2_TR(0x50644f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506452:{NFSU2_TR(0x506452);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506455:{NFSU2_TR(0x506455);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B506456:{NFSU2_TR(0x506456);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506459:{NFSU2_TR(0x506459);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50645c:{NFSU2_TR(0x50645c);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B50645f:{NFSU2_TR(0x50645f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506462:{NFSU2_TR(0x506462);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506469:{NFSU2_TR(0x506469);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50646c:{NFSU2_TR(0x50646c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B50646f:{NFSU2_TR(0x50646f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506472:{NFSU2_TR(0x506472);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B506477:{NFSU2_TR(0x506477);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50647e:{NFSU2_TR(0x50647e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506480:{NFSU2_TR(0x506480);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506482:{NFSU2_TR(0x506482);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506489:{NFSU2_TR(0x506489);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50648b:{NFSU2_TR(0x50648b);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506492:{NFSU2_TR(0x506492);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506499:{NFSU2_TR(0x506499);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50649b:{NFSU2_TR(0x50649b);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5064a2:{NFSU2_TR(0x5064a2);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5064a9:{NFSU2_TR(0x5064a9);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5064b0:{NFSU2_TR(0x5064b0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5064b3:{NFSU2_TR(0x5064b3);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5064ba:{NFSU2_TR(0x5064ba);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5064bd:{NFSU2_TR(0x5064bd);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5064c4:{NFSU2_TR(0x5064c4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5064c7:{NFSU2_TR(0x5064c7);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5064ce:{NFSU2_TR(0x5064ce);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5064d5:{NFSU2_TR(0x5064d5);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5064d7:{NFSU2_TR(0x5064d7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5064da:{NFSU2_TR(0x5064da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5064dd:{NFSU2_TR(0x5064dd);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5064e4:{NFSU2_TR(0x5064e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5064eb:{NFSU2_TR(0x5064eb);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5064ee:{NFSU2_TR(0x5064ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5064f1:{NFSU2_TR(0x5064f1);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_5064f4(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5064f4(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5064f4:L5064f4:{bud-=23;NFSU2_TR(0x5064f4);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5064f7:{NFSU2_TR(0x5064f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5064fa:{NFSU2_TR(0x5064fa);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5064fd:{NFSU2_TR(0x5064fd);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B5064ff:{NFSU2_TR(0x5064ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506503:{NFSU2_TR(0x506503);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506505:{NFSU2_TR(0x506505);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506508:{NFSU2_TR(0x506508);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50650b:{NFSU2_TR(0x50650b);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50650e:{NFSU2_TR(0x50650e);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506511:{NFSU2_TR(0x506511);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506515:{NFSU2_TR(0x506515);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506518:{NFSU2_TR(0x506518);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50651c:{NFSU2_TR(0x50651c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50651f:{NFSU2_TR(0x50651f);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506522:{NFSU2_TR(0x506522);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506526:{NFSU2_TR(0x506526);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506529:{NFSU2_TR(0x506529);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50652c:{NFSU2_TR(0x50652c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50652e:{NFSU2_TR(0x50652e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506530:{NFSU2_TR(0x506530);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506533:{NFSU2_TR(0x506533);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506536:{NFSU2_TR(0x506536);
{[[clang::musttail]] return blk_50669b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50653b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50653b:L50653b:{bud-=2;NFSU2_TR(0x50653b);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B50653d:{NFSU2_TR(0x50653d);
if(r1(F+6)){{[[clang::musttail]] return blk_5066a9(ARGS);}}
}
B506543:L506543:{bud-=103;NFSU2_TR(0x506543);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506546:{NFSU2_TR(0x506546);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506549:{NFSU2_TR(0x506549);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50654c:{NFSU2_TR(0x50654c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50654f:{NFSU2_TR(0x50654f);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506552:{NFSU2_TR(0x506552);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506555:{NFSU2_TR(0x506555);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50655c:{NFSU2_TR(0x50655c);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506563:{NFSU2_TR(0x506563);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506565:{NFSU2_TR(0x506565);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506567:{NFSU2_TR(0x506567);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50656a:{NFSU2_TR(0x50656a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50656e:{NFSU2_TR(0x50656e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506571:{NFSU2_TR(0x506571);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506575:{NFSU2_TR(0x506575);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506578:{NFSU2_TR(0x506578);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50657c:{NFSU2_TR(0x50657c);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50657f:{NFSU2_TR(0x50657f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506581:{NFSU2_TR(0x506581);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506585:{NFSU2_TR(0x506585);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506588:{NFSU2_TR(0x506588);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50658a:{NFSU2_TR(0x50658a);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50658e:{NFSU2_TR(0x50658e);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506592:{NFSU2_TR(0x506592);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506594:{NFSU2_TR(0x506594);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506598:{NFSU2_TR(0x506598);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50659b:{NFSU2_TR(0x50659b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50659d:{NFSU2_TR(0x50659d);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5065a1:{NFSU2_TR(0x5065a1);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5065a4:{NFSU2_TR(0x5065a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5065a6:{NFSU2_TR(0x5065a6);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5065a8:{NFSU2_TR(0x5065a8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5065aa:{NFSU2_TR(0x5065aa);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5065ac:{NFSU2_TR(0x5065ac);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5065ae:{NFSU2_TR(0x5065ae);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5065b0:{NFSU2_TR(0x5065b0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5065b2:{NFSU2_TR(0x5065b2);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5065b5:{NFSU2_TR(0x5065b5);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5065b8:{NFSU2_TR(0x5065b8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5065ba:{NFSU2_TR(0x5065ba);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5065bd:{NFSU2_TR(0x5065bd);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5065c0:{NFSU2_TR(0x5065c0);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5065c3:{NFSU2_TR(0x5065c3);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5065c6:{NFSU2_TR(0x5065c6);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5065c9:{NFSU2_TR(0x5065c9);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5065cb:{NFSU2_TR(0x5065cb);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5065cd:{NFSU2_TR(0x5065cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5065cf:{NFSU2_TR(0x5065cf);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5065d2:{NFSU2_TR(0x5065d2);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5065d5:{NFSU2_TR(0x5065d5);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5065d8:{NFSU2_TR(0x5065d8);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5065db:{NFSU2_TR(0x5065db);
{u32 ea_=u32(r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5065de:{NFSU2_TR(0x5065de);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5065e1:{NFSU2_TR(0x5065e1);
{u32 ea_=u32(r4(G+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5065e4:{NFSU2_TR(0x5065e4);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5065e7:{NFSU2_TR(0x5065e7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5065e9:{NFSU2_TR(0x5065e9);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5065eb:{NFSU2_TR(0x5065eb);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5065ef:{NFSU2_TR(0x5065ef);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5065f1:{NFSU2_TR(0x5065f1);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5065f5:{NFSU2_TR(0x5065f5);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5065f9:{NFSU2_TR(0x5065f9);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5065fc:{NFSU2_TR(0x5065fc);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506600:{NFSU2_TR(0x506600);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506603:{NFSU2_TR(0x506603);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506607:{NFSU2_TR(0x506607);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506609:{NFSU2_TR(0x506609);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50660c:{NFSU2_TR(0x50660c);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506610:{NFSU2_TR(0x506610);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506613:{NFSU2_TR(0x506613);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506616:{NFSU2_TR(0x506616);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506619:{NFSU2_TR(0x506619);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50661e:{NFSU2_TR(0x50661e);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506621:{NFSU2_TR(0x506621);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506624:{NFSU2_TR(0x506624);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506627:{NFSU2_TR(0x506627);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50662e:{NFSU2_TR(0x50662e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506631:{NFSU2_TR(0x506631);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506634:{NFSU2_TR(0x506634);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50663b:{NFSU2_TR(0x50663b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50663d:{NFSU2_TR(0x50663d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B50663f:{NFSU2_TR(0x50663f);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506643:{NFSU2_TR(0x506643);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506645:{NFSU2_TR(0x506645);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506649:{NFSU2_TR(0x506649);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506650:{NFSU2_TR(0x506650);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506652:{NFSU2_TR(0x506652);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506656:{NFSU2_TR(0x506656);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50665d:{NFSU2_TR(0x50665d);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506661:{NFSU2_TR(0x506661);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506664:{NFSU2_TR(0x506664);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506668:{NFSU2_TR(0x506668);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50666b:{NFSU2_TR(0x50666b);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50666f:{NFSU2_TR(0x50666f);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506672:{NFSU2_TR(0x506672);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506679:{NFSU2_TR(0x506679);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506680:{NFSU2_TR(0x506680);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B506682:{NFSU2_TR(0x506682);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506685:{NFSU2_TR(0x506685);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506688:{NFSU2_TR(0x506688);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50668f:{NFSU2_TR(0x50668f);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506696:{NFSU2_TR(0x506696);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506698:{NFSU2_TR(0x506698);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
{[[clang::musttail]] return blk_50669b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50669b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50669b:L50669b:{bud-=5;NFSU2_TR(0x50669b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50669c:{NFSU2_TR(0x50669c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50669f:{NFSU2_TR(0x50669f);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B5066a2:{NFSU2_TR(0x5066a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5066a6:{NFSU2_TR(0x5066a6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_5066a9(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5066a9(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5066a9:L5066a9:{bud-=22;NFSU2_TR(0x5066a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5066ad:{NFSU2_TR(0x5066ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5066b4:{NFSU2_TR(0x5066b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5066b8:{NFSU2_TR(0x5066b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5066bc:{NFSU2_TR(0x5066bc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(G+0))));
}
B5066be:{NFSU2_TR(0x5066be);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5066c5:{NFSU2_TR(0x5066c5);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5066cc:{NFSU2_TR(0x5066cc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B5066ce:{NFSU2_TR(0x5066ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5066d2:{NFSU2_TR(0x5066d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5066d6:{NFSU2_TR(0x5066d6);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x20ull))));
}
B5066d9:{NFSU2_TR(0x5066d9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5066dc:{NFSU2_TR(0x5066dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5066e0:{NFSU2_TR(0x5066e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5066e4:{NFSU2_TR(0x5066e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5066e8:{NFSU2_TR(0x5066e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5066ec:{NFSU2_TR(0x5066ec);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x4ull))));
}
B5066ef:{NFSU2_TR(0x5066ef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B5066f2:{NFSU2_TR(0x5066f2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5066f5:{NFSU2_TR(0x5066f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(F+0,u8((r4(G+0))<(r4(U+0))));
}
B5066f7:{NFSU2_TR(0x5066f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5066fb:{NFSU2_TR(0x5066fb);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x50586eu);}[[clang::musttail]] return blk_50586e(ARGS);}}
}
B506701:L506701:{bud-=4;NFSU2_TR(0x506701);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B506708:{NFSU2_TR(0x506708);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50670f:{NFSU2_TR(0x50670f);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B506716:{NFSU2_TR(0x506716);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
{[[clang::musttail]] return blk_50671a(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_50671a(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B50671a:L50671a:{bud-=3;NFSU2_TR(0x50671a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50671e:{NFSU2_TR(0x50671e);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(R+28))<(r4(U+8))));
}
B506722:{NFSU2_TR(0x506722);
u8 U[1];
w1(U+0,u8(!(r1(F+0))));
if(r1(U+0)){{[[clang::musttail]] return blk_506bd2(ARGS);}}
}
B506728:L506728:{bud-=24;NFSU2_TR(0x506728);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50672c:{NFSU2_TR(0x50672c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506730:{NFSU2_TR(0x506730);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B506733:{NFSU2_TR(0x506733);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506737:{NFSU2_TR(0x506737);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50673b:{NFSU2_TR(0x50673b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B50673e:{NFSU2_TR(0x50673e);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B506740:{NFSU2_TR(0x506740);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506744:{NFSU2_TR(0x506744);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B50674b:{NFSU2_TR(0x50674b);
w4(G+4,u32(u32(r4(G+4))+u32(r4(G+0))));
}
B50674d:{NFSU2_TR(0x50674d);
__builtin_memmove((G+0),(R+28),4);
}
B50674f:{NFSU2_TR(0x50674f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506753:{NFSU2_TR(0x506753);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+0,shl<u32>(r4(G+0),u64(r4(U+0))));
}
B506756:{NFSU2_TR(0x506756);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50675d:{NFSU2_TR(0x50675d);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B506761:{NFSU2_TR(0x506761);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506765:{NFSU2_TR(0x506765);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50676c:{NFSU2_TR(0x50676c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B50676f:{NFSU2_TR(0x50676f);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B506771:{NFSU2_TR(0x506771);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(G+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((G+0),(U+8),4);
}
B506775:{NFSU2_TR(0x506775);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506779:{NFSU2_TR(0x506779);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50677d:{NFSU2_TR(0x50677d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506781:{NFSU2_TR(0x506781);
{[[clang::musttail]] return blk_506790(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506783(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506783:L506783:{bud-=2;NFSU2_TR(0x506783);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506787:{NFSU2_TR(0x506787);
{[[clang::musttail]] return blk_506790(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506790(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506790:L506790:{bud-=14;NFSU2_TR(0x506790);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506794:{NFSU2_TR(0x506794);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506797:{NFSU2_TR(0x506797);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50679b:{NFSU2_TR(0x50679b);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50679d:{NFSU2_TR(0x50679d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50679f:{NFSU2_TR(0x50679f);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5067a3:{NFSU2_TR(0x5067a3);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5067a6:{NFSU2_TR(0x5067a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5067a8:{NFSU2_TR(0x5067a8);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5067ac:{NFSU2_TR(0x5067ac);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5067b2:{NFSU2_TR(0x5067b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B5067b4:{NFSU2_TR(0x5067b4);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B5067b8:{NFSU2_TR(0x5067b8);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x41ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5067bb:{NFSU2_TR(0x5067bb);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_5069de(ARGS);}}
}
B5067c1:L5067c1:{bud-=3;NFSU2_TR(0x5067c1);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5067c3:{NFSU2_TR(0x5067c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5067c7:{NFSU2_TR(0x5067c7);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_506982(ARGS);}}
}
B5067cd:L5067cd:{bud-=121;NFSU2_TR(0x5067cd);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5067d0:{NFSU2_TR(0x5067d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5067d4:{NFSU2_TR(0x5067d4);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5067d7:{NFSU2_TR(0x5067d7);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5067db:{NFSU2_TR(0x5067db);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5067de:{NFSU2_TR(0x5067de);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5067e2:{NFSU2_TR(0x5067e2);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5067e4:{NFSU2_TR(0x5067e4);
{u32 ea_=u32(r4(G+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5067eb:{NFSU2_TR(0x5067eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5067f2:{NFSU2_TR(0x5067f2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5067f4:{NFSU2_TR(0x5067f4);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5067f6:{NFSU2_TR(0x5067f6);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5067f9:{NFSU2_TR(0x5067f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5067fd:{NFSU2_TR(0x5067fd);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506800:{NFSU2_TR(0x506800);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506804:{NFSU2_TR(0x506804);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506808:{NFSU2_TR(0x506808);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50680c:{NFSU2_TR(0x50680c);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506810:{NFSU2_TR(0x506810);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506812:{NFSU2_TR(0x506812);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506816:{NFSU2_TR(0x506816);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506819:{NFSU2_TR(0x506819);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50681b:{NFSU2_TR(0x50681b);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50681f:{NFSU2_TR(0x50681f);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506823:{NFSU2_TR(0x506823);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506825:{NFSU2_TR(0x506825);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506829:{NFSU2_TR(0x506829);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50682c:{NFSU2_TR(0x50682c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50682e:{NFSU2_TR(0x50682e);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506832:{NFSU2_TR(0x506832);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506835:{NFSU2_TR(0x506835);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506837:{NFSU2_TR(0x506837);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B506839:{NFSU2_TR(0x506839);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B50683b:{NFSU2_TR(0x50683b);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50683d:{NFSU2_TR(0x50683d);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50683f:{NFSU2_TR(0x50683f);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506841:{NFSU2_TR(0x506841);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506843:{NFSU2_TR(0x506843);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506846:{NFSU2_TR(0x506846);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506849:{NFSU2_TR(0x506849);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B50684b:{NFSU2_TR(0x50684b);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50684e:{NFSU2_TR(0x50684e);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506851:{NFSU2_TR(0x506851);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506855:{NFSU2_TR(0x506855);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506859:{NFSU2_TR(0x506859);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50685c:{NFSU2_TR(0x50685c);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50685e:{NFSU2_TR(0x50685e);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506860:{NFSU2_TR(0x506860);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506862:{NFSU2_TR(0x506862);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506865:{NFSU2_TR(0x506865);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506868:{NFSU2_TR(0x506868);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50686b:{NFSU2_TR(0x50686b);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50686e:{NFSU2_TR(0x50686e);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506871:{NFSU2_TR(0x506871);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506874:{NFSU2_TR(0x506874);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506878:{NFSU2_TR(0x506878);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50687c:{NFSU2_TR(0x50687c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50687e:{NFSU2_TR(0x50687e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506880:{NFSU2_TR(0x506880);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506884:{NFSU2_TR(0x506884);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506886:{NFSU2_TR(0x506886);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50688a:{NFSU2_TR(0x50688a);
{u32 ea_=u32(r4(G+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50688e:{NFSU2_TR(0x50688e);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506891:{NFSU2_TR(0x506891);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506895:{NFSU2_TR(0x506895);
{u32 ea_=u32(r4(G+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506899:{NFSU2_TR(0x506899);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50689d:{NFSU2_TR(0x50689d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50689f:{NFSU2_TR(0x50689f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5068a3:{NFSU2_TR(0x5068a3);
{u32 ea_=u32((r4(R+28)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5068a6:{NFSU2_TR(0x5068a6);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B5068a9:{NFSU2_TR(0x5068a9);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5068ae:{NFSU2_TR(0x5068ae);
{u32 ea_=u32((r4(R+28)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5068b2:{NFSU2_TR(0x5068b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5068b6:{NFSU2_TR(0x5068b6);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5068b9:{NFSU2_TR(0x5068b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5068bd:{NFSU2_TR(0x5068bd);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5068c0:{NFSU2_TR(0x5068c0);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5068c3:{NFSU2_TR(0x5068c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5068c7:{NFSU2_TR(0x5068c7);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5068cb:{NFSU2_TR(0x5068cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5068cf:{NFSU2_TR(0x5068cf);
{u32 ea_=u32(r4(G+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5068d2:{NFSU2_TR(0x5068d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5068d6:{NFSU2_TR(0x5068d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5068da:{NFSU2_TR(0x5068da);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5068de:{NFSU2_TR(0x5068de);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5068e5:{NFSU2_TR(0x5068e5);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5068e9:{NFSU2_TR(0x5068e9);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5068eb:{NFSU2_TR(0x5068eb);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5068f2:{NFSU2_TR(0x5068f2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5068f4:{NFSU2_TR(0x5068f4);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5068f6:{NFSU2_TR(0x5068f6);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5068fd:{NFSU2_TR(0x5068fd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5068ff:{NFSU2_TR(0x5068ff);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506906:{NFSU2_TR(0x506906);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50690d:{NFSU2_TR(0x50690d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50690f:{NFSU2_TR(0x50690f);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506916:{NFSU2_TR(0x506916);
{u32 ea_=u32(r4(G+16)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50691d:{NFSU2_TR(0x50691d);
{u32 ea_=u32(r4(G+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506924:{NFSU2_TR(0x506924);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506927:{NFSU2_TR(0x506927);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50692b:{NFSU2_TR(0x50692b);
{u32 ea_=u32(r4(G+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506932:{NFSU2_TR(0x506932);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506936:{NFSU2_TR(0x506936);
{u32 ea_=u32(r4(G+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50693d:{NFSU2_TR(0x50693d);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506944:{NFSU2_TR(0x506944);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506948:{NFSU2_TR(0x506948);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50694c:{NFSU2_TR(0x50694c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506953:{NFSU2_TR(0x506953);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B506955:{NFSU2_TR(0x506955);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506958:{NFSU2_TR(0x506958);
{u32 ea_=u32(r4(G+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50695f:{NFSU2_TR(0x50695f);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506966:{NFSU2_TR(0x506966);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506968:{NFSU2_TR(0x506968);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50696b:{NFSU2_TR(0x50696b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50696d:{NFSU2_TR(0x50696d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506971:{NFSU2_TR(0x506971);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B506972:{NFSU2_TR(0x506972);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506975:{NFSU2_TR(0x506975);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506979:{NFSU2_TR(0x506979);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50697d:{NFSU2_TR(0x50697d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50697f:{NFSU2_TR(0x50697f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
{[[clang::musttail]] return blk_506982(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506982(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506982:L506982:{bud-=29;NFSU2_TR(0x506982);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506985:{NFSU2_TR(0x506985);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506988:{NFSU2_TR(0x506988);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50698a:{NFSU2_TR(0x50698a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B50698e:{NFSU2_TR(0x50698e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+4)),r4(U+0));
}
B506990:{NFSU2_TR(0x506990);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506992:{NFSU2_TR(0x506992);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506996:{NFSU2_TR(0x506996);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506999:{NFSU2_TR(0x506999);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50699c:{NFSU2_TR(0x50699c);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5069a0:{NFSU2_TR(0x5069a0);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5069a3:{NFSU2_TR(0x5069a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5069a7:{NFSU2_TR(0x5069a7);
{u32 ea_=u32((r4(R+8)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5069aa:{NFSU2_TR(0x5069aa);
{u32 ea_=u32((r4(R+8)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5069ae:{NFSU2_TR(0x5069ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5069b2:{NFSU2_TR(0x5069b2);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5069b5:{NFSU2_TR(0x5069b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5069b9:{NFSU2_TR(0x5069b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5069bd:{NFSU2_TR(0x5069bd);
{u32 ea_=u32(r4(R+8)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5069c0:{NFSU2_TR(0x5069c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5069c4:{NFSU2_TR(0x5069c4);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5069c7:{NFSU2_TR(0x5069c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5069c9:{NFSU2_TR(0x5069c9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5069cb:{NFSU2_TR(0x5069cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5069cd:{NFSU2_TR(0x5069cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5069d1:{NFSU2_TR(0x5069d1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5069d4:{NFSU2_TR(0x5069d4);
__builtin_memmove((G+0),(R+8),4);
}
B5069d6:{NFSU2_TR(0x5069d6);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5069d9:{NFSU2_TR(0x5069d9);
{[[clang::musttail]] return blk_506b77(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_5069de(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B5069de:L5069de:{bud-=2;NFSU2_TR(0x5069de);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B5069e0:{NFSU2_TR(0x5069e0);
if(r1(F+6)){{[[clang::musttail]] return blk_506b8d(ARGS);}}
}
B5069e6:L5069e6:{bud-=115;NFSU2_TR(0x5069e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B5069ea:{NFSU2_TR(0x5069ea);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5069ed:{NFSU2_TR(0x5069ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5069f1:{NFSU2_TR(0x5069f1);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5069f4:{NFSU2_TR(0x5069f4);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5069f8:{NFSU2_TR(0x5069f8);
{u32 ea_=u32(r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5069fb:{NFSU2_TR(0x5069fb);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5069ff:{NFSU2_TR(0x5069ff);
{u32 ea_=u32(r4(G+0));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B506a01:{NFSU2_TR(0x506a01);
{u32 ea_=u32(r4(G+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a08:{NFSU2_TR(0x506a08);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506a0f:{NFSU2_TR(0x506a0f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506a11:{NFSU2_TR(0x506a11);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a13:{NFSU2_TR(0x506a13);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506a16:{NFSU2_TR(0x506a16);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506a1a:{NFSU2_TR(0x506a1a);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a1d:{NFSU2_TR(0x506a1d);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a21:{NFSU2_TR(0x506a21);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a25:{NFSU2_TR(0x506a25);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a29:{NFSU2_TR(0x506a29);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a2d:{NFSU2_TR(0x506a2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506a2f:{NFSU2_TR(0x506a2f);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a33:{NFSU2_TR(0x506a33);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a36:{NFSU2_TR(0x506a36);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506a38:{NFSU2_TR(0x506a38);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506a3c:{NFSU2_TR(0x506a3c);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a40:{NFSU2_TR(0x506a40);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a42:{NFSU2_TR(0x506a42);
{u32 ea_=u32(r4(G+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a46:{NFSU2_TR(0x506a46);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a49:{NFSU2_TR(0x506a49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506a4b:{NFSU2_TR(0x506a4b);
{u32 ea_=u32(r4(G+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a4f:{NFSU2_TR(0x506a4f);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a52:{NFSU2_TR(0x506a52);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B506a54:{NFSU2_TR(0x506a54);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B506a56:{NFSU2_TR(0x506a56);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B506a58:{NFSU2_TR(0x506a58);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506a5a:{NFSU2_TR(0x506a5a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a5c:{NFSU2_TR(0x506a5c);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a5e:{NFSU2_TR(0x506a5e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506a60:{NFSU2_TR(0x506a60);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a63:{NFSU2_TR(0x506a63);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a66:{NFSU2_TR(0x506a66);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506a68:{NFSU2_TR(0x506a68);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506a6b:{NFSU2_TR(0x506a6b);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a6e:{NFSU2_TR(0x506a6e);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a72:{NFSU2_TR(0x506a72);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a76:{NFSU2_TR(0x506a76);
{u32 ea_=u32(r4(R+12)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a79:{NFSU2_TR(0x506a79);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506a7b:{NFSU2_TR(0x506a7b);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a7d:{NFSU2_TR(0x506a7d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506a7f:{NFSU2_TR(0x506a7f);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506a82:{NFSU2_TR(0x506a82);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a85:{NFSU2_TR(0x506a85);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506a88:{NFSU2_TR(0x506a88);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506a8b:{NFSU2_TR(0x506a8b);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a8e:{NFSU2_TR(0x506a8e);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506a91:{NFSU2_TR(0x506a91);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506a95:{NFSU2_TR(0x506a95);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506a99:{NFSU2_TR(0x506a99);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506a9b:{NFSU2_TR(0x506a9b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506a9d:{NFSU2_TR(0x506a9d);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506aa1:{NFSU2_TR(0x506aa1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506aa3:{NFSU2_TR(0x506aa3);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506aa7:{NFSU2_TR(0x506aa7);
{u32 ea_=u32(r4(G+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506aab:{NFSU2_TR(0x506aab);
{u32 ea_=u32(r4(R+24)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506aae:{NFSU2_TR(0x506aae);
{u32 ea_=u32(r4(R+24)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506ab2:{NFSU2_TR(0x506ab2);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506ab6:{NFSU2_TR(0x506ab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506aba:{NFSU2_TR(0x506aba);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506abc:{NFSU2_TR(0x506abc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506ac0:{NFSU2_TR(0x506ac0);
{u32 ea_=u32((r4(R+28)*8u)+r4(G+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506ac3:{NFSU2_TR(0x506ac3);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B506ac8:{NFSU2_TR(0x506ac8);
{u32 ea_=u32((r4(R+28)*8u)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506acc:{NFSU2_TR(0x506acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506ad0:{NFSU2_TR(0x506ad0);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506ad3:{NFSU2_TR(0x506ad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506ad7:{NFSU2_TR(0x506ad7);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506ada:{NFSU2_TR(0x506ada);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506add:{NFSU2_TR(0x506add);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506ae1:{NFSU2_TR(0x506ae1);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506ae5:{NFSU2_TR(0x506ae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506ae9:{NFSU2_TR(0x506ae9);
{u32 ea_=u32(r4(G+0)+r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506aec:{NFSU2_TR(0x506aec);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506af0:{NFSU2_TR(0x506af0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506af4:{NFSU2_TR(0x506af4);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506af8:{NFSU2_TR(0x506af8);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506aff:{NFSU2_TR(0x506aff);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506b03:{NFSU2_TR(0x506b03);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B506b05:{NFSU2_TR(0x506b05);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506b09:{NFSU2_TR(0x506b09);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506b10:{NFSU2_TR(0x506b10);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506b12:{NFSU2_TR(0x506b12);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506b14:{NFSU2_TR(0x506b14);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506b18:{NFSU2_TR(0x506b18);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506b1a:{NFSU2_TR(0x506b1a);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506b1e:{NFSU2_TR(0x506b1e);
{u32 ea_=u32(r4(G+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506b25:{NFSU2_TR(0x506b25);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506b27:{NFSU2_TR(0x506b27);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506b2b:{NFSU2_TR(0x506b2b);
{u32 ea_=u32(r4(G+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506b32:{NFSU2_TR(0x506b32);
{u32 ea_=u32(r4(G+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506b36:{NFSU2_TR(0x506b36);
{u32 ea_=u32(r4(G+0)+r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506b39:{NFSU2_TR(0x506b39);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506b3d:{NFSU2_TR(0x506b3d);
{u32 ea_=u32(r4(G+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506b41:{NFSU2_TR(0x506b41);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506b45:{NFSU2_TR(0x506b45);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506b49:{NFSU2_TR(0x506b49);
{u32 ea_=u32(r4(G+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506b50:{NFSU2_TR(0x506b50);
{u32 ea_=u32(r4(G+0)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506b54:{NFSU2_TR(0x506b54);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506b5b:{NFSU2_TR(0x506b5b);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B506b5d:{NFSU2_TR(0x506b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506b60:{NFSU2_TR(0x506b60);
{u32 ea_=u32(r4(G+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506b67:{NFSU2_TR(0x506b67);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506b6e:{NFSU2_TR(0x506b6e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506b70:{NFSU2_TR(0x506b70);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506b72:{NFSU2_TR(0x506b72);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506b75:{NFSU2_TR(0x506b75);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
{[[clang::musttail]] return blk_506b77(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506b77(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506b77:L506b77:{bud-=7;NFSU2_TR(0x506b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506b7a:{NFSU2_TR(0x506b7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506b7e:{NFSU2_TR(0x506b7e);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B506b81:{NFSU2_TR(0x506b81);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B506b82:{NFSU2_TR(0x506b82);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B506b85:{NFSU2_TR(0x506b85);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506b89:{NFSU2_TR(0x506b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_506b8d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506b8d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506b8d:L506b8d:{bud-=12;NFSU2_TR(0x506b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506b91:{NFSU2_TR(0x506b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+0),(U+4),4);
}
B506b98:{NFSU2_TR(0x506b98);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506b9f:{NFSU2_TR(0x506b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506ba3:{NFSU2_TR(0x506ba3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506ba7:{NFSU2_TR(0x506ba7);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B506bab:{NFSU2_TR(0x506bab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B506baf:{NFSU2_TR(0x506baf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B506bb4:{NFSU2_TR(0x506bb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B506bb9:{NFSU2_TR(0x506bb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506bbd:{NFSU2_TR(0x506bbd);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+0,u8((r4(G+0))<(r4(U+8))));
}
B506bc1:{NFSU2_TR(0x506bc1);
if(r1(F+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x506783u);}[[clang::musttail]] return blk_506783(ARGS);}}
}
B506bc7:L506bc7:{bud-=2;NFSU2_TR(0x506bc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506bcb:{NFSU2_TR(0x506bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
{[[clang::musttail]] return blk_506bd2(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506bd2(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506bd2:L506bd2:{bud-=37;NFSU2_TR(0x506bd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506bd9:{NFSU2_TR(0x506bd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506be0:{NFSU2_TR(0x506be0);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506be7:{NFSU2_TR(0x506be7);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506bee:{NFSU2_TR(0x506bee);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506bf5:{NFSU2_TR(0x506bf5);
__builtin_memmove((R+12),(G+0),4);
}
B506bf7:{NFSU2_TR(0x506bf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506bfb:{NFSU2_TR(0x506bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c02:{NFSU2_TR(0x506c02);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506c09:{NFSU2_TR(0x506c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c0d:{NFSU2_TR(0x506c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B506c14:{NFSU2_TR(0x506c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c1b:{NFSU2_TR(0x506c1b);
__builtin_memmove((R+24),(G+0),4);
}
B506c1d:{NFSU2_TR(0x506c1d);
__builtin_memmove((G+0),(G+4),4);
}
B506c1f:{NFSU2_TR(0x506c1f);
__builtin_memmove((G+4),(R+8),4);
}
B506c21:{NFSU2_TR(0x506c21);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506c28:{NFSU2_TR(0x506c28);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c2c:{NFSU2_TR(0x506c2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506c30:{NFSU2_TR(0x506c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c37:{NFSU2_TR(0x506c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506c3e:{NFSU2_TR(0x506c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c42:{NFSU2_TR(0x506c42);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506c49:{NFSU2_TR(0x506c49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c50:{NFSU2_TR(0x506c50);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506c57:{NFSU2_TR(0x506c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c5e:{NFSU2_TR(0x506c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506c65:{NFSU2_TR(0x506c65);
w4(G+0,u32(u32(r4(G+0))+u32(u32(0x1ull))));
}
B506c66:{NFSU2_TR(0x506c66);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B506c69:{NFSU2_TR(0x506c69);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B506c6c:{NFSU2_TR(0x506c6c);
u8 U[14];
__builtin_memmove((U+6),(G+0),4);
w1(F+0,u8((r4(U+6))<(u32(0x4ull))));
w1(F+11,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(F+6,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(F+2,u8((r1(U+5))==(u8(0x0ull))));
}
B506c6f:{NFSU2_TR(0x506c6f);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c76:{NFSU2_TR(0x506c76);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c7d:{NFSU2_TR(0x506c7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c84:{NFSU2_TR(0x506c84);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c8b:{NFSU2_TR(0x506c8b);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c92:{NFSU2_TR(0x506c92);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506c99:{NFSU2_TR(0x506c99);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{if(__builtin_expect(bud<=0,0)){EXIT(0x505712u);}[[clang::musttail]] return blk_505712(ARGS);}}
}
B506c9f:L506c9f:{bud-=1;NFSU2_TR(0x506c9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
{__builtin_memcpy(R+512,F+0,1);__builtin_memcpy(R+514,F+2,1);__builtin_memcpy(R+518,F+6,2);__builtin_memcpy(R+523,F+11,1);[[clang::musttail]] return blk_506ca3(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506ca3(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506ca3:L506ca3:{bud-=6;NFSU2_TR(0x506ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B506ca4:{NFSU2_TR(0x506ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B506ca5:{NFSU2_TR(0x506ca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B506ca6:{NFSU2_TR(0x506ca6);
__builtin_memmove((G+16),(R+20),4);
}
B506ca8:{NFSU2_TR(0x506ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B506ca9:{NFSU2_TR(0x506ca9);
__builtin_memmove((R+644),gp(u32(r4(G+16))),4);
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x4ull))));
w4(G+16,u32(u32(r4(G+16))+u32(u32(0x1cull))));
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
PN u32 blk_506cb0(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506cb0:L506cb0:{bud-=20;NFSU2_TR(0x506cb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B506cb1:{NFSU2_TR(0x506cb1);
__builtin_memmove((R+20),(G+16),4);
}
B506cb3:{NFSU2_TR(0x506cb3);
w4(G+16,u32(u32(r4(G+16))&u32(u32(0xfffffff0ull))));
}
B506cb6:{NFSU2_TR(0x506cb6);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0xd4ull))));
}
B506cbc:{NFSU2_TR(0x506cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506cbf:{NFSU2_TR(0x506cbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B506cc0:{NFSU2_TR(0x506cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506cc3:{NFSU2_TR(0x506cc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B506cc4:{NFSU2_TR(0x506cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B506cc7:{NFSU2_TR(0x506cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(G+16,u32(u32(r4(G+16))-u32(u32(0x4ull))));
s4(u32(r4(G+16)),r4(U+0));
}
B506cc8:{NFSU2_TR(0x506cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B506ccb:{NFSU2_TR(0x506ccb);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B506ccc:{NFSU2_TR(0x506ccc);
__builtin_memmove((G+4),(R+28),4);
}
B506cce:{NFSU2_TR(0x506cce);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B506cd1:{NFSU2_TR(0x506cd1);
{u32 ea_=u32(r4(R+8)+r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506cd4:{NFSU2_TR(0x506cd4);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B506cd7:{NFSU2_TR(0x506cd7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B506cd9:{NFSU2_TR(0x506cd9);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B506cdc:{NFSU2_TR(0x506cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506cdf:{NFSU2_TR(0x506cdf);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_506d3e(ARGS);}}
}
B506ce1:L506ce1:{bud-=28;NFSU2_TR(0x506ce1);
{u32 ea_=u32(r4(R+8)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506ce5:{NFSU2_TR(0x506ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506ce8:{NFSU2_TR(0x506ce8);
{u32 ea_=u32(r4(R+8)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506cec:{NFSU2_TR(0x506cec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B506cef:{NFSU2_TR(0x506cef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B506cf1:{NFSU2_TR(0x506cf1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506cf3:{NFSU2_TR(0x506cf3);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506cf6:{NFSU2_TR(0x506cf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B506cfe:{NFSU2_TR(0x506cfe);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B506d03:{NFSU2_TR(0x506d03);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506d06:{NFSU2_TR(0x506d06);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B506d09:{NFSU2_TR(0x506d09);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506d0d:{NFSU2_TR(0x506d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506d10:{NFSU2_TR(0x506d10);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506d13:{NFSU2_TR(0x506d13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B506d15:{NFSU2_TR(0x506d15);
{u32 ea_=u32(r4(R+12)+r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506d19:{NFSU2_TR(0x506d19);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B506d1c:{NFSU2_TR(0x506d1c);
{u32 ea_=u32(r4(R+12)+r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506d20:{NFSU2_TR(0x506d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506d23:{NFSU2_TR(0x506d23);
{u32 ea_=u32(r4(R+12)+r4(G+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506d27:{NFSU2_TR(0x506d27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(G+0)),r4(U+0));
}
B506d29:{NFSU2_TR(0x506d29);
{u32 ea_=u32(r4(G+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506d2d:{NFSU2_TR(0x506d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506d31:{NFSU2_TR(0x506d31);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506d33:{NFSU2_TR(0x506d33);
{u32 ea_=u32(r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506d36:{NFSU2_TR(0x506d36);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506d39:{NFSU2_TR(0x506d39);
{u32 ea_=u32(r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506d3c:{NFSU2_TR(0x506d3c);
{[[clang::musttail]] return blk_506d4b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506d3e(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506d3e:L506d3e:{bud-=2;NFSU2_TR(0x506d3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B506d46:{NFSU2_TR(0x506d46);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
{[[clang::musttail]] return blk_506d4b(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506d4b(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+519,F+7,1);__builtin_memcpy(R+523,F+11,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506d4b:L506d4b:{bud-=3;NFSU2_TR(0x506d4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(F+11,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(F+7,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B506d4f:{NFSU2_TR(0x506d4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(G+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B506d57:{NFSU2_TR(0x506d57);
u8 U[1];
w1(U+0,u8((r1(F+11))!=(r1(F+7))));
if(r1(U+0)){{[[clang::musttail]] return blk_50798a(ARGS);}}
}
B506d5d:L506d5d:{bud-=24;NFSU2_TR(0x506d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B506d60:{NFSU2_TR(0x506d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506d64:{NFSU2_TR(0x506d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((G+4),(U+4),4);
}
B506d6b:{NFSU2_TR(0x506d6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506d6f:{NFSU2_TR(0x506d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+4),(U+4),4);
}
B506d73:{NFSU2_TR(0x506d73);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(G+4,shl<u32>(r4(G+4),u64(r4(U+0))));
}
B506d76:{NFSU2_TR(0x506d76);
u8 U[8];
w4(U+0,u32(u32(r4(G+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(G+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B506d79:{NFSU2_TR(0x506d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506d7c:{NFSU2_TR(0x506d7c);
w4(G+4,u32(u32(r4(G+4))+u32(r4(R+8))));
}
B506d7e:{NFSU2_TR(0x506d7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B506d81:{NFSU2_TR(0x506d81);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B506d83:{NFSU2_TR(0x506d83);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506d87:{NFSU2_TR(0x506d87);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B506d8a:{NFSU2_TR(0x506d8a);
w4(R+12,u32(0x18ull));
}
B506d8f:{NFSU2_TR(0x506d8f);
w4(R+12,u32(u32(r4(R+12))-u32(r4(G+0))));
}
B506d91:{NFSU2_TR(0x506d91);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506d95:{NFSU2_TR(0x506d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B506d98:{NFSU2_TR(0x506d98);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506d9f:{NFSU2_TR(0x506d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506da2:{NFSU2_TR(0x506da2);
w4(G+0,u32(0xcull));
}
B506da7:{NFSU2_TR(0x506da7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B506daa:{NFSU2_TR(0x506daa);
w4(G+0,u32(u32(r4(G+0))-u32(r4(R+12))));
}
B506dac:{NFSU2_TR(0x506dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(G+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B506db4:{NFSU2_TR(0x506db4);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
{[[clang::musttail]] return blk_506dbb(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506dbb(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506dbb:L506dbb:{bud-=6;NFSU2_TR(0x506dbb);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506dbe:{NFSU2_TR(0x506dbe);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B506dc1:{NFSU2_TR(0x506dc1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(G+0,u16(ax_));}
}
B506dc3:{NFSU2_TR(0x506dc3);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((G+0),(U+4),1);
}
B506dc7:{NFSU2_TR(0x506dc7);
u8 U[1];
w1(U+0,u8(u32(r1(G+1))&u32(u8(0x1ull))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B506dca:{NFSU2_TR(0x506dca);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_506f83(ARGS);}}
}
B506dd0:L506dd0:{bud-=2;NFSU2_TR(0x506dd0);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B506dd2:{NFSU2_TR(0x506dd2);
u8 U[1];
w1(U+0,u8(!(r1(F+6))));
if(r1(U+0)){{[[clang::musttail]] return blk_506f29(ARGS);}}
}
B506dd8:L506dd8:{bud-=105;NFSU2_TR(0x506dd8);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506ddb:{NFSU2_TR(0x506ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506ddf:{NFSU2_TR(0x506ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506de2:{NFSU2_TR(0x506de2);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506de5:{NFSU2_TR(0x506de5);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506de8:{NFSU2_TR(0x506de8);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506dec:{NFSU2_TR(0x506dec);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506def:{NFSU2_TR(0x506def);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506df3:{NFSU2_TR(0x506df3);
{u32 ea_=u32(r4(G+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506dfa:{NFSU2_TR(0x506dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506e01:{NFSU2_TR(0x506e01);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506e03:{NFSU2_TR(0x506e03);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e05:{NFSU2_TR(0x506e05);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506e08:{NFSU2_TR(0x506e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506e0b:{NFSU2_TR(0x506e0b);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e0e:{NFSU2_TR(0x506e0e);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e11:{NFSU2_TR(0x506e11);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506e14:{NFSU2_TR(0x506e14);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B506e16:{NFSU2_TR(0x506e16);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506e18:{NFSU2_TR(0x506e18);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506e1a:{NFSU2_TR(0x506e1a);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e1c:{NFSU2_TR(0x506e1c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506e1e:{NFSU2_TR(0x506e1e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506e21:{NFSU2_TR(0x506e21);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e24:{NFSU2_TR(0x506e24);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506e26:{NFSU2_TR(0x506e26);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506e29:{NFSU2_TR(0x506e29);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e2c:{NFSU2_TR(0x506e2c);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e30:{NFSU2_TR(0x506e30);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e34:{NFSU2_TR(0x506e34);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e36:{NFSU2_TR(0x506e36);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506e39:{NFSU2_TR(0x506e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506e3d:{NFSU2_TR(0x506e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506e40:{NFSU2_TR(0x506e40);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e42:{NFSU2_TR(0x506e42);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506e44:{NFSU2_TR(0x506e44);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506e47:{NFSU2_TR(0x506e47);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e4a:{NFSU2_TR(0x506e4a);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506e4d:{NFSU2_TR(0x506e4d);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e50:{NFSU2_TR(0x506e50);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e53:{NFSU2_TR(0x506e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506e57:{NFSU2_TR(0x506e57);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506e5a:{NFSU2_TR(0x506e5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506e5e:{NFSU2_TR(0x506e5e);
{u32 ea_=u32(r4(R+12)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e61:{NFSU2_TR(0x506e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506e64:{NFSU2_TR(0x506e64);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506e68:{NFSU2_TR(0x506e68);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506e6a:{NFSU2_TR(0x506e6a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506e6c:{NFSU2_TR(0x506e6c);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e70:{NFSU2_TR(0x506e70);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506e72:{NFSU2_TR(0x506e72);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e76:{NFSU2_TR(0x506e76);
{u32 ea_=u32(r4(G+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e7a:{NFSU2_TR(0x506e7a);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506e7d:{NFSU2_TR(0x506e7d);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e81:{NFSU2_TR(0x506e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506e84:{NFSU2_TR(0x506e84);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506e88:{NFSU2_TR(0x506e88);
{u32 ea_=u32(r4(G+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506e8c:{NFSU2_TR(0x506e8c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506e8e:{NFSU2_TR(0x506e8e);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e91:{NFSU2_TR(0x506e91);
{u32 ea_=u32((r4(G+0)*8u)+r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506e95:{NFSU2_TR(0x506e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506e99:{NFSU2_TR(0x506e99);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506e9c:{NFSU2_TR(0x506e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506e9f:{NFSU2_TR(0x506e9f);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506ea2:{NFSU2_TR(0x506ea2);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506ea5:{NFSU2_TR(0x506ea5);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B506ea8:{NFSU2_TR(0x506ea8);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506eac:{NFSU2_TR(0x506eac);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506eaf:{NFSU2_TR(0x506eaf);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506eb3:{NFSU2_TR(0x506eb3);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506eb7:{NFSU2_TR(0x506eb7);
{u32 ea_=u32(r4(R+8)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506eba:{NFSU2_TR(0x506eba);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506ebe:{NFSU2_TR(0x506ebe);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(G+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B506ec3:{NFSU2_TR(0x506ec3);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506ec7:{NFSU2_TR(0x506ec7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506ec9:{NFSU2_TR(0x506ec9);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B506ecb:{NFSU2_TR(0x506ecb);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506ecf:{NFSU2_TR(0x506ecf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506ed1:{NFSU2_TR(0x506ed1);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506ed5:{NFSU2_TR(0x506ed5);
{u32 ea_=u32(r4(G+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506ed9:{NFSU2_TR(0x506ed9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B506edb:{NFSU2_TR(0x506edb);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506edf:{NFSU2_TR(0x506edf);
{u32 ea_=u32(r4(G+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506ee3:{NFSU2_TR(0x506ee3);
{u32 ea_=u32(r4(G+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506ee7:{NFSU2_TR(0x506ee7);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506eea:{NFSU2_TR(0x506eea);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506eee:{NFSU2_TR(0x506eee);
{u32 ea_=u32(r4(G+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506ef2:{NFSU2_TR(0x506ef2);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506ef6:{NFSU2_TR(0x506ef6);
{u32 ea_=u32(r4(G+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506efa:{NFSU2_TR(0x506efa);
{u32 ea_=u32(r4(G+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506efe:{NFSU2_TR(0x506efe);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f02:{NFSU2_TR(0x506f02);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506f06:{NFSU2_TR(0x506f06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506f0a:{NFSU2_TR(0x506f0a);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B506f0c:{NFSU2_TR(0x506f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506f0f:{NFSU2_TR(0x506f0f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B506f10:{NFSU2_TR(0x506f10);
{u32 ea_=u32(r4(G+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f14:{NFSU2_TR(0x506f14);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506f18:{NFSU2_TR(0x506f18);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506f1a:{NFSU2_TR(0x506f1a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f1c:{NFSU2_TR(0x506f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506f1f:{NFSU2_TR(0x506f1f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B506f22:{NFSU2_TR(0x506f22);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f25:{NFSU2_TR(0x506f25);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B506f27:{NFSU2_TR(0x506f27);
{[[clang::musttail]] return blk_506f2d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506f29(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506f29:L506f29:{bud-=1;NFSU2_TR(0x506f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
{[[clang::musttail]] return blk_506f2d(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506f2d(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506f2d:L506f2d:{bud-=28;NFSU2_TR(0x506f2d);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f30:{NFSU2_TR(0x506f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506f33:{NFSU2_TR(0x506f33);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f36:{NFSU2_TR(0x506f36);
u8 U[4];
__builtin_memmove((U+0),(G+0),4);
s4(u32(r4(G+4)),r4(U+0));
}
B506f38:{NFSU2_TR(0x506f38);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506f3c:{NFSU2_TR(0x506f3c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506f3e:{NFSU2_TR(0x506f3e);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f41:{NFSU2_TR(0x506f41);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B506f42:{NFSU2_TR(0x506f42);
w4(G+4,u32(u32(r4(G+4))+u32(u32(0x10ull))));
}
B506f45:{NFSU2_TR(0x506f45);
{u32 ea_=u32(r4(G+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f48:{NFSU2_TR(0x506f48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(G+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506f4c:{NFSU2_TR(0x506f4c);
{u32 ea_=u32(r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f4f:{NFSU2_TR(0x506f4f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B506f52:{NFSU2_TR(0x506f52);
{u32 ea_=u32(r4(G+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f55:{NFSU2_TR(0x506f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506f58:{NFSU2_TR(0x506f58);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f5c:{NFSU2_TR(0x506f5c);
{u32 ea_=u32((r4(R+12)*8u)+r4(G+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f60:{NFSU2_TR(0x506f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506f63:{NFSU2_TR(0x506f63);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f66:{NFSU2_TR(0x506f66);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(G+16))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506f6a:{NFSU2_TR(0x506f6a);
{u32 ea_=u32(r4(R+8)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f6d:{NFSU2_TR(0x506f6d);
{u32 ea_=u32(r4(R+8)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f70:{NFSU2_TR(0x506f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(G+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506f73:{NFSU2_TR(0x506f73);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f76:{NFSU2_TR(0x506f76);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506f78:{NFSU2_TR(0x506f78);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f7b:{NFSU2_TR(0x506f7b);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506f7e:{NFSU2_TR(0x506f7e);
{[[clang::musttail]] return blk_5070fc(ARGS);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 blk_506f83(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){
u8* const R=c.regs.data();u32 nx=0,fpc=0;const char* fm=nullptr;
alignas(4) u8 G[32];alignas(16) u8 F[32];
w4(G+0,a0);w4(G+4,a1);w4(G+16,a4);__builtin_memcpy(F,R+512,32);
#define ARGS c,r4(G+16),r4(G+0),r4(G+4),bud
#define SPILL_OUT() do{w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));__builtin_memcpy(R+518,F+6,1);c.instructions+=REG_BUDGET-bud;bud=REG_BUDGET;}while(0)
#define SPILL_IN() do{w4(G+0,r4(R+0));w4(G+4,r4(R+4));w4(G+16,r4(R+16));__builtin_memcpy(F,R+512,32);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);c.pc=t__;if(__builtin_expect(bud>0&&u32((t__>>12)-0x401u)<=0x41bu,1)){[[clang::musttail]] return ent_dispatch(ARGS);}nx=t__;goto XIT;}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
B506f83:L506f83:{bud-=2;NFSU2_TR(0x506f83);
u8 U[1];
w1(U+0,u8(u32(r1(G+0))&u32(r1(G+0))));
w1(F+6,u8((r1(U+0))==(u8(0x0ull))));
}
B506f85:{NFSU2_TR(0x506f85);
if(r1(F+6)){{[[clang::musttail]] return blk_5070f8(ARGS);}}
}
B506f8b:L506f8b:{bud-=38;NFSU2_TR(0x506f8b);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f8e:{NFSU2_TR(0x506f8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506f92:{NFSU2_TR(0x506f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506f95:{NFSU2_TR(0x506f95);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506f98:{NFSU2_TR(0x506f98);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506f9b:{NFSU2_TR(0x506f9b);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506f9f:{NFSU2_TR(0x506f9f);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506fa2:{NFSU2_TR(0x506fa2);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506fa6:{NFSU2_TR(0x506fa6);
{u32 ea_=u32(r4(G+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506fad:{NFSU2_TR(0x506fad);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506fb4:{NFSU2_TR(0x506fb4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506fb6:{NFSU2_TR(0x506fb6);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506fb8:{NFSU2_TR(0x506fb8);
u8 U[8];
w4(U+0,u32(u32(r4(G+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B506fbb:{NFSU2_TR(0x506fbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506fbe:{NFSU2_TR(0x506fbe);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506fc1:{NFSU2_TR(0x506fc1);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506fc4:{NFSU2_TR(0x506fc4);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B506fc7:{NFSU2_TR(0x506fc7);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B506fc9:{NFSU2_TR(0x506fc9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506fcb:{NFSU2_TR(0x506fcb);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506fcd:{NFSU2_TR(0x506fcd);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506fcf:{NFSU2_TR(0x506fcf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506fd1:{NFSU2_TR(0x506fd1);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506fd4:{NFSU2_TR(0x506fd4);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506fd7:{NFSU2_TR(0x506fd7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B506fd9:{NFSU2_TR(0x506fd9);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B506fdc:{NFSU2_TR(0x506fdc);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506fdf:{NFSU2_TR(0x506fdf);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506fe3:{NFSU2_TR(0x506fe3);
{u32 ea_=u32(r4(R+12)+r4(G+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506fe7:{NFSU2_TR(0x506fe7);
{u32 ea_=u32(r4(R+12)+r4(G+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B506fea:{NFSU2_TR(0x506fea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(G+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((G+0),(U+4),4);
}
B506fee:{NFSU2_TR(0x506fee);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506ff0:{NFSU2_TR(0x506ff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B506ff3:{NFSU2_TR(0x506ff3);
{u32 ea_=u32(r4(G+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506ff5:{NFSU2_TR(0x506ff5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B506ff7:{NFSU2_TR(0x506ff7);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B506ffa:{NFSU2_TR(0x506ffa);
{u32 ea_=u32(r4(G+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B506ffd:{NFSU2_TR(0x506ffd);
{u32 ea_=u32(r4(G+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
{EXIT(0x507000u);}
}

XIT:w4(R+0,r4(G+0));w4(R+4,r4(G+4));w4(R+16,r4(G+16));c.instructions+=REG_BUDGET-bud;return nx;
FLT:SPILL_OUT();fast_fault(c,fm,fpc);
#undef ARGS
#undef SPILL_OUT
#undef SPILL_IN
#undef TAIL_DYNAMIC
#undef NFSU2_FAULT
}
PN u32 ent_506(Cpu& __restrict c,u32 a4,u32 a0,u32 a1,s32 bud){switch(c.pc){
case 0x506193:[[clang::musttail]] return blk_506193(c,a4,a0,a1,bud);
case 0x5061da:[[clang::musttail]] return blk_5061da(c,a4,a0,a1,bud);
case 0x506337:[[clang::musttail]] return blk_506337(c,a4,a0,a1,bud);
case 0x506345:[[clang::musttail]] return blk_506345(c,a4,a0,a1,bud);
case 0x5064f4:[[clang::musttail]] return blk_5064f4(c,a4,a0,a1,bud);
case 0x50653b:[[clang::musttail]] return blk_50653b(c,a4,a0,a1,bud);
case 0x50669b:[[clang::musttail]] return blk_50669b(c,a4,a0,a1,bud);
case 0x5066a9:[[clang::musttail]] return blk_5066a9(c,a4,a0,a1,bud);
case 0x50671a:[[clang::musttail]] return blk_50671a(c,a4,a0,a1,bud);
case 0x506783:[[clang::musttail]] return blk_506783(c,a4,a0,a1,bud);
case 0x506790:[[clang::musttail]] return blk_506790(c,a4,a0,a1,bud);
case 0x506982:[[clang::musttail]] return blk_506982(c,a4,a0,a1,bud);
case 0x5069de:[[clang::musttail]] return blk_5069de(c,a4,a0,a1,bud);
case 0x506b77:[[clang::musttail]] return blk_506b77(c,a4,a0,a1,bud);
case 0x506b8d:[[clang::musttail]] return blk_506b8d(c,a4,a0,a1,bud);
case 0x506bd2:[[clang::musttail]] return blk_506bd2(c,a4,a0,a1,bud);
case 0x506ca3:[[clang::musttail]] return blk_506ca3(c,a4,a0,a1,bud);
case 0x506cb0:[[clang::musttail]] return blk_506cb0(c,a4,a0,a1,bud);
case 0x506d3e:[[clang::musttail]] return blk_506d3e(c,a4,a0,a1,bud);
case 0x506d4b:[[clang::musttail]] return blk_506d4b(c,a4,a0,a1,bud);
case 0x506dbb:[[clang::musttail]] return blk_506dbb(c,a4,a0,a1,bud);
case 0x506f29:[[clang::musttail]] return blk_506f29(c,a4,a0,a1,bud);
case 0x506f2d:[[clang::musttail]] return blk_506f2d(c,a4,a0,a1,bud);
case 0x506f83:[[clang::musttail]] return blk_506f83(c,a4,a0,a1,bud);
default:missing_instruction(c.pc);}}
u32 page_506(Cpu& c){u8* R=c.regs.data();return ent_506(c,r4(R+16),r4(R+0),r4(R+4),REG_BUDGET);}
#undef EXIT
}
